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
| `interfaces.hpp` | Runtime interface addresses (resolved via `CreateInterface`) |
| `engine_offsets.hpp` | Engine globals — entity list, view matrix, local player controller |
| `important_offsets.hpp` | Curated subset of the most commonly used classes |

Typical output: ~14,300 classes and ~32,500 fields across 20 modules.

Example (`client.dll.hpp`):

```cpp
namespace C_DOTA_BaseNPC { // size 0x19B0
    constexpr auto m_bIsPhantom = 0xB90;
    constexpr auto m_iUnitType = 0xB94;
    constexpr auto m_iCurrentLevel = 0xBAC;
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
dota2_dumper.exe
```

## Requirements

- Windows x64
- Administrator privileges
- Dota 2 running at the time of the dump

## Notes

- If any value in `engine_offsets.hpp` comes out as `0x0` after a large game
  update, the corresponding signature needs to be refreshed. Schema and
  interface output is unaffected and continues to update automatically.
- Offsets were cross-checked against two independent memory-reading methods
  (usermode and DMA) to confirm correctness.

## Disclaimer

Provided for educational and reverse-engineering research purposes only. Use it
in accordance with the terms of service of any software you inspect.
