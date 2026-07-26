# Dota 2 Offset Dumper

A lightweight runtime dumper for Dota 2 (Source 2). It reads the running game
process and exports up-to-date schema field offsets, runtime interface
addresses and key engine globals. Nothing is injected — the tool only opens the
process for reading.

Because the schema and interface data are read straight from the engine, the
output is always correct for whatever build is currently running, which means
it keeps working across game updates. Engine globals are located by signature
scanning rather than hardcoded addresses.

## Output

Running the tool produces a `dota2_dump/` folder containing:

| File | Contents |
|------|----------|
| `client.dll.hpp`, `server.dll.hpp`, … | Full schema field offsets for every class, one header per module |
| `interfaces.hpp` | Runtime interfaces as module + RVA (resolved via `CreateInterface`) |
| `engine_offsets.hpp` | Engine globals — entity list, view matrix, local player controller |
| `important_offsets.hpp` | Curated subset of the most commonly used classes |
| `enums.hpp` | Schema enums as real `enum class` (`DOTA_RUNES`, `MoveType_t`, ...) |
| `vtables.hpp` | Class -> vtable RVA, recovered from MSVC RTTI (~25,000 classes) |
| `offsets.json` | Same data, machine-readable — load it at startup instead of editing headers |
| `offsets_diff.txt` | What moved since the previous dump (written only when something changed) |

Typical output: ~14,300 classes and ~32,500 fields across 20 modules.

Example (`client.dll.hpp`):

```cpp
namespace client_dll {
    // C_DOTA_BaseNPC : C_NextBotCombatCharacter  size 0x19B0
    namespace C_DOTA_BaseNPC {
        constexpr auto m_bIsPhantom = 0xB90;    // bool
        constexpr auto m_iUnitType = 0xB94;     // uint32
        constexpr auto m_iCurrentLevel = 0xBAC; // int32
    }
}
```

Each field carries its schema type, and each class its base class, so the
offset can actually be used without guessing how wide the member is or which
class it was inherited from. Enums come out as usable declarations:

```cpp
enum class DOTA_RUNES : int32_t {
    DOTA_RUNE_INVALID = -1,
    DOTA_RUNE_DOUBLEDAMAGE = 0,
    DOTA_RUNE_HASTE = 1,
};
```

Each header is wrapped in a namespace named after its module. The same class
name exists in several modules with different layouts (`CGameSceneNode::m_vecOrigin`
is `0x90` in `client.dll` and `0x80` in `server.dll`), so the module namespace is
what keeps `client.dll.hpp` and `server.dll.hpp` usable in the same translation
unit.

Fields also carry their schema metadata where the build has any
(`MNotSaved`, `MPropertyDescription`, ...). Note that Dota's retail build
strips the `MNetwork*` tags entirely — the strings are not present in
`client.dll` at all, unlike CS2 — so no dumper can report them here.

Vtable addresses come from the RTTI left in the binary:

```cpp
namespace vtables { namespace client_dll {
    constexpr auto C_DOTA_BaseNPC = 0x4801E88;
    constexpr auto CPrediction    = 0x47E0A30;
} }
```

The method *index* inside a vtable still has to come from a decompiler — the
binary ships no method names — but the table address itself no longer needs a
signature. Verified by reading the vtable pointer of live interface objects:
`Source2ClientPrediction001` resolves to `CPrediction` at exactly the dumped
RVA.

## Staying up to date

Nothing has to be updated by hand. `--watch` keeps the dumper running in the
background; it notices when Dota is patched or restarted and re-dumps by itself:

```
dump.bat --watch 60
```

The argument is the poll interval in seconds (default 60). A patch is detected
from the size and timestamp of `dota2.exe`, so builds shipped without a version
bump are caught too.

After every dump the output is compared with the previous one and the
differences are written to `offsets_diff.txt`:

```
~ schema::server.dll::CGameSceneNode::m_vecOrigin 0x1092 -> 0x80
+ schema::client.dll::C_DOTA_BaseNPC::m_iNewField
- schema::client.dll::C_DOTA_BaseNPC::m_iRemovedField
```

For consumers, `offsets.json` is the file to read — an application can reload it
at startup and pick up a new build without being recompiled:

```json
{
  "build": "987800-1dd1b52ed0354a3",
  "engine": { "dwEntityList": 106043192 },
  "schema": { "client.dll::CGameSceneNode": { "m_vecOrigin": 144 } }
}
```

## Usage

1. Launch Dota 2.
2. Run `dump.bat` and allow the elevation prompt — reading another process's
   memory requires administrator rights.
3. Collect the results from the `dota2_dump/` folder created next to the
   executable.

The dumper can also be run directly:

```
dota2_dumper.exe              one-shot dump
dota2_dumper.exe --watch 60   re-dump automatically on every game patch
dota2_dumper.exe --selftest   internal check (JSON round-trip, diff), no game needed
```

## Requirements

- Windows x64
- Administrator privileges
- Dota 2 running at the time of the dump

## Notes

- If any value in `engine_offsets.hpp` comes out as `0x0` after a large game
  update, the corresponding signature needs to be refreshed. Schema and
  interface output is unaffected and continues to update automatically.
- `offsets_diff.txt` is per-run output; it is not tracked in this repository.
- The layout of the schema structures themselves (where a class binding keeps
  its base classes, where a type keeps its name) is calibrated against the live
  process at startup rather than hardcoded, and each calibration step prints
  `OK` or `FAIL`. A step that cannot be resolved is skipped, never guessed.
- Enums are reached through the type object of the fields that use them, so an
  enum no field references is not in the output.
- Offsets were cross-checked against two independent memory-reading methods
  (usermode and DMA) to confirm correctness.

## Disclaimer

Provided for educational and reverse-engineering research purposes only. Use it
in accordance with the terms of service of any software you inspect.
