// engine2.dll  Dota 2 schema dump
#pragma once
#include <cstdint>

namespace engine2_dll {
    // CEntityInstance  size 0x30
    namespace CEntityInstance {
        constexpr auto m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
        constexpr auto m_pEntity = 0x10; // CEntityIdentity*
        constexpr auto m_CScriptComponent = 0x28; // CScriptComponent*
    }
    // CEntityComponent  size 0x8
    namespace CEntityComponent {
    }
    // CScriptComponent : CEntityComponent  size 0x38
    namespace CScriptComponent {
        constexpr auto m_scriptClassName = 0x30; // CUtlSymbolLarge  MNotSaved
    }
    // CEntityIdentity  size 0x70
    namespace CEntityIdentity {
        constexpr auto m_nameStringTableIndex = 0x14; // int32  MNotSaved
        constexpr auto m_name = 0x18; // CUtlSymbolLarge
        constexpr auto m_designerName = 0x20; // CUtlSymbolLarge  MNotSaved
        constexpr auto m_flags = 0x30; // uint32  MNotSaved
        constexpr auto m_worldGroupId = 0x38; // WorldGroupId_t  MNotSaved
        constexpr auto m_fDataObjectTypes = 0x3C; // uint32  MNotSaved
        constexpr auto m_PathIndex = 0x40; // ChangeAccessorFieldPathIndex_t  MNotSaved
        constexpr auto m_pAttributes = 0x48; // CEntityAttributeTable*
        constexpr auto m_pPrev = 0x50; // CEntityIdentity*  MNotSaved
        constexpr auto m_pNext = 0x58; // CEntityIdentity*  MNotSaved
        constexpr auto m_pPrevByClass = 0x60; // CEntityIdentity*  MNotSaved
        constexpr auto m_pNextByClass = 0x68; // CEntityIdentity*  MNotSaved
    }
} // namespace engine2_dll
