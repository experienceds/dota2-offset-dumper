// Dota 2 engine globals via signature scan
#pragma once
#include <cstdint>

namespace engine {
    constexpr auto dwEntityList             = 0x6521738; // client.dll
    constexpr auto dwViewMatrix             = 0x612E1F0; // client.dll
    constexpr auto dwLocalPlayerController  = 0x62F5278; // client.dll
}
