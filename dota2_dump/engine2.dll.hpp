// engine2.dll  Dota 2 schema dump
#pragma once
#include <cstdint>

namespace CEntityInstance { // size 0x30
    constexpr auto m_iszPrivateVScripts = 0x8;
    constexpr auto m_pEntity = 0x10;
    constexpr auto m_CScriptComponent = 0x28;
}
namespace CEntityComponent { // size 0x8
}
namespace CScriptComponent { // size 0x38
    constexpr auto m_scriptClassName = 0x30;
}
namespace CEntityIdentity { // size 0x70
    constexpr auto m_nameStringTableIndex = 0x14;
    constexpr auto m_name = 0x18;
    constexpr auto m_designerName = 0x20;
    constexpr auto m_flags = 0x30;
    constexpr auto m_worldGroupId = 0x38;
    constexpr auto m_fDataObjectTypes = 0x3C;
    constexpr auto m_PathIndex = 0x40;
    constexpr auto m_pAttributes = 0x48;
    constexpr auto m_pPrev = 0x50;
    constexpr auto m_pNext = 0x58;
    constexpr auto m_pPrevByClass = 0x60;
    constexpr auto m_pNextByClass = 0x68;
}
