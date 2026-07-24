// Dota 2 engine globals via signature scan
#pragma once
#include <cstdint>

namespace engine {
    constexpr auto dwEntityList             = 0x65216B8; // client.dll
    constexpr auto dwViewMatrix             = 0x612E170; // client.dll
    constexpr auto dwLocalPlayerController  = 0x62F51F8; // client.dll
}
