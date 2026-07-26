// Dota 2 runtime interfaces (resolved via CreateInterface)
#pragma once

namespace client_dll { // client.dll
    constexpr auto PanoramaUIClient001                      = 0x5A98230; // client.dll + rva
    constexpr auto PlayButtonService001                     = 0x5A79320; // client.dll + rva
    constexpr auto DOTA_CLIENT_GCCLIENT                     = 0x62D0DC0; // client.dll + rva
    constexpr auto LegacyGameUI001                          = 0x5A6BBD0; // client.dll + rva
    constexpr auto Source2ClientPrediction001               = 0x5A05EC0; // client.dll + rva
    constexpr auto ClientToolsInfo_001                      = 0x5A019D0; // client.dll + rva
    constexpr auto Source2Client002                         = 0x6124150; // client.dll + rva
    constexpr auto GameClientExports001                     = 0x59FD6F8; // client.dll + rva
    constexpr auto Source2ClientConfig001                   = 0x60CC1D0; // client.dll + rva
    constexpr auto Source2ClientUI001                       = 0x57EF5C0; // client.dll + rva
}
namespace engine2_dll { // engine2.dll
    constexpr auto SimpleEngineLoopService_001              = 0x6145A0; // engine2.dll + rva
    constexpr auto ClientServerEngineLoopService_001        = 0x90DA80; // engine2.dll + rva
    constexpr auto KeyValueCache001                         = 0x614540; // engine2.dll + rva
    constexpr auto HostStateMgr001                          = 0x614490; // engine2.dll + rva
    constexpr auto GameEventSystemServerV001                = 0x90D770; // engine2.dll + rva
    constexpr auto GameEventSystemClientV001                = 0x90D640; // engine2.dll + rva
    constexpr auto EngineServiceMgr001                      = 0x90D360; // engine2.dll + rva
    constexpr auto ClientServerSharedHandleSystem001        = 0x90D0B0; // engine2.dll + rva
    constexpr auto VProfService_001                         = 0x614340; // engine2.dll + rva
    constexpr auto ToolService_001                          = 0x614300; // engine2.dll + rva
    constexpr auto StatsService_001                         = 0x90C900; // engine2.dll + rva
    constexpr auto SplitScreenService_001                   = 0x614190; // engine2.dll + rva
    constexpr auto SoundService_001                         = 0x613EB0; // engine2.dll + rva
    constexpr auto ScreenshotService001                     = 0x90C540; // engine2.dll + rva
    constexpr auto RenderService_001                        = 0x90C280; // engine2.dll + rva
    constexpr auto NetworkService_001                       = 0x613E70; // engine2.dll + rva
    constexpr auto NetworkServerService_001                 = 0x90C010; // engine2.dll + rva
    constexpr auto NetworkP2PService_001                    = 0x90BE60; // engine2.dll + rva
    constexpr auto NetworkClientService_001                 = 0x90BB20; // engine2.dll + rva
    constexpr auto MapListService_001                       = 0x90B990; // engine2.dll + rva
    constexpr auto InputService_001                         = 0x8CCB20; // engine2.dll + rva
    constexpr auto GameUIService_001                        = 0x8CC830; // engine2.dll + rva
    constexpr auto GameResourceServiceServerV001            = 0x613D00; // engine2.dll + rva
    constexpr auto GameResourceServiceClientV001            = 0x613CA0; // engine2.dll + rva
    constexpr auto BugBugService001                         = 0x613C60; // engine2.dll + rva
    constexpr auto BugService001                            = 0x8CC3E0; // engine2.dll + rva
    constexpr auto BenchmarkService001                      = 0x613B60; // engine2.dll + rva
    constexpr auto VENGINE_GAMEUIFUNCS_VERSION005           = 0x611490; // engine2.dll + rva
    constexpr auto EngineGameUI001                          = 0x611400; // engine2.dll + rva
    constexpr auto INETSUPPORT_001                          = 0x60CA60; // engine2.dll + rva
    constexpr auto Source2EngineToServerStringTable001      = 0x610E30; // engine2.dll + rva
    constexpr auto Source2EngineToServer001                 = 0x610E08; // engine2.dll + rva
    constexpr auto Source2EngineToClientStringTable001      = 0x610D90; // engine2.dll + rva
    constexpr auto Source2EngineToClient001                 = 0x610D30; // engine2.dll + rva
}
namespace server_dll { // server.dll
    constexpr auto NavGameTest001                           = 0x49E4B00; // server.dll + rva
    constexpr auto Source2GameDirector001                   = 0x5025F60; // server.dll + rva
    constexpr auto ServerToolsInfo_001                      = 0x494DF28; // server.dll + rva
    constexpr auto Source2GameClients001                    = 0x49480E0; // server.dll + rva
    constexpr auto Source2GameEntities001                   = 0x494D6D0; // server.dll + rva
    constexpr auto Source2Server001                         = 0x494D520; // server.dll + rva
    constexpr auto Source2ServerConfig001                   = 0x4F50578; // server.dll + rva
    constexpr auto EntitySubclassUtilsV001                  = 0x4741A00; // server.dll + rva
}
namespace schemasystem_dll { // schemasystem.dll
    constexpr auto SchemaSystem_001                         = 0x75630; // schemasystem.dll + rva
}
namespace resourcesystem_dll { // resourcesystem.dll
    constexpr auto ResourceSystem013                        = 0x81670; // resourcesystem.dll + rva
}
namespace networksystem_dll { // networksystem.dll
    constexpr auto SerializedEntitiesVersion001             = 0x286050; // networksystem.dll + rva
    constexpr auto NetworkSystemVersion001                  = 0x285F60; // networksystem.dll + rva
    constexpr auto NetworkMessagesVersion001                = 0x294950; // networksystem.dll + rva
    constexpr auto FlattenedSerializersVersion001           = 0x26C810; // networksystem.dll + rva
}
namespace vphysics2_dll { // vphysics2.dll
    constexpr auto VPhysics2_Interface_001                  = 0x439E30; // vphysics2.dll + rva
}
namespace particles_dll { // particles.dll
    constexpr auto ParticleSystemMgr003                     = 0x6087C0; // particles.dll + rva
}
namespace soundsystem_dll { // soundsystem.dll
    constexpr auto SoundBugBugService001_Client             = 0x553250; // soundsystem.dll + rva
    constexpr auto SoundOpSystem001                         = 0x553130; // soundsystem.dll + rva
    constexpr auto SoundOpSystemEdit001                     = 0x553040; // soundsystem.dll + rva
    constexpr auto VMixEditTool001                          = 0x9C84258; // soundsystem.dll + rva
    constexpr auto SoundSystem001                           = 0x552AA0; // soundsystem.dll + rva
}
namespace panorama_dll { // panorama.dll
    constexpr auto PanoramaUIEngine001                      = 0x50ED60; // panorama.dll + rva
}
