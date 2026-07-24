// particles.dll  Dota 2 schema dump
#pragma once
#include <cstdint>

namespace CPulseCell_WaitForCursorsWithTag { // size 0x130
    constexpr auto m_bTagSelfWhenComplete = 0x128;
    constexpr auto m_nDesiredKillPriority = 0x12C;
}
namespace CPulseCell_Base { // size 0x48
    constexpr auto m_nEditorNodeID = 0x8;
}
namespace CPulse_ResumePoint { // size 0x48
}
namespace CPulseCell_PickBestOutflowSelector { // size 0x68
    constexpr auto m_nCheckType = 0x48;
    constexpr auto m_OutflowList = 0x50;
}
namespace CParticleBindingRealPulse { // size 0x130
}
namespace CPulseCell_WaitForObservable { // size 0x198
    constexpr auto m_Condition = 0xD8;
    constexpr auto m_OnTrue = 0x150;
}
namespace CPulse_OutflowConnection { // size 0x48
    constexpr auto m_SourceOutflowName = 0x0;
    constexpr auto m_nDestChunk = 0x10;
    constexpr auto m_nInstruction = 0x14;
    constexpr auto m_OutflowRegisterMap = 0x18;
}
namespace CPulseGraphDef { // size 0x1B0
    constexpr auto m_DomainIdentifier = 0x8;
    constexpr auto m_DomainSubType = 0x18;
    constexpr auto m_ParentMapName = 0x30;
    constexpr auto m_ParentXmlName = 0x40;
    constexpr auto m_Chunks = 0x50;
    constexpr auto m_Cells = 0x68;
    constexpr auto m_Vars = 0x80;
    constexpr auto m_PublicOutputs = 0x98;
    constexpr auto m_InvokeBindings = 0xB0;
    constexpr auto m_CallInfos = 0xC8;
    constexpr auto m_Constants = 0xE0;
    constexpr auto m_DomainValues = 0xF8;
    constexpr auto m_BlackboardReferences = 0x110;
    constexpr auto m_OutputConnections = 0x128;
}
namespace CPulseCell_FireCursors { // size 0x140
    constexpr auto m_Outflows = 0xD8;
    constexpr auto m_bWaitForChildOutflows = 0xF0;
    constexpr auto m_OnFinished = 0xF8;
}
namespace CPulseCell_Timeline::TimelineEvent_t { // size 0x50
    constexpr auto m_flTimeFromPrevious = 0x0;
    constexpr auto m_EventOutflow = 0x8;
}
namespace CPulseCell_IntervalTimer::CursorState_t { // size 0x14
    constexpr auto m_StartTime = 0x0;
    constexpr auto m_EndTime = 0x4;
    constexpr auto m_flWaitInterval = 0x8;
    constexpr auto m_flWaitIntervalHigh = 0xC;
    constexpr auto m_bCompleteOnNextWake = 0x10;
}
namespace CPulseCell_BaseRequirement { // size 0x48
}
namespace CPulseCell_BaseState { // size 0xD8
}
namespace OutflowWithRequirements_t { // size 0x80
    constexpr auto m_Connection = 0x0;
    constexpr auto m_DestinationFlowNodeID = 0x48;
    constexpr auto m_RequirementNodeIDs = 0x50;
    constexpr auto m_nCursorStateBlockIndex = 0x68;
}
namespace CPulseCell_IsRequirementValid { // size 0x48
}
namespace CPulseCell_Value_Gradient { // size 0x60
    constexpr auto m_Gradient = 0x48;
}
namespace PulseNodeDynamicOutflows_t::DynamicOutflow_t { // size 0x50
    constexpr auto m_OutflowID = 0x0;
    constexpr auto m_Connection = 0x8;
}
namespace CBasePulseGraphInstance { // size 0x110
}
namespace CPulseCell_Inflow_GraphHook { // size 0x90
    constexpr auto m_HookName = 0x80;
}
namespace SignatureOutflow_Resume { // size 0x48
}
namespace CPulseCell_Inflow_BaseEntrypoint { // size 0x80
    constexpr auto m_EntryChunk = 0x48;
    constexpr auto m_RegisterMap = 0x50;
}
namespace CPulseCell_WaitForCursorsWithTagBase { // size 0x128
    constexpr auto m_nCursorsAllowedToWait = 0xD8;
    constexpr auto m_WaitComplete = 0xE0;
}
namespace CPulse_InvokeBinding { // size 0xB0
    constexpr auto m_RegisterMap = 0x0;
    constexpr auto m_FuncName = 0x30;
    constexpr auto m_nCellIndex = 0x40;
    constexpr auto m_nSrcChunk = 0x44;
    constexpr auto m_nSrcInstruction = 0x48;
}
namespace CPulseCell_IntervalTimer { // size 0x168
    constexpr auto m_Completed = 0xD8;
    constexpr auto m_OnInterval = 0x120;
}
namespace CPulseCell_BaseLerp { // size 0x120
    constexpr auto m_WakeResume = 0xD8;
}
namespace CPulseCell_Value_Curve { // size 0x88
    constexpr auto m_Curve = 0x48;
}
namespace CPulseCell_Inflow_EventHandler { // size 0x90
    constexpr auto m_EventName = 0x80;
}
namespace CPulseCell_BaseFlow { // size 0x48
}
namespace CPulseCell_Outflow_CycleShuffled::InstanceState_t { // size 0x28
    constexpr auto m_Shuffle = 0x0;
    constexpr auto m_nNextShuffle = 0x20;
}
namespace CPulseCell_BaseLerp::CursorState_t { // size 0x8
    constexpr auto m_StartTime = 0x0;
    constexpr auto m_EndTime = 0x4;
}
namespace SignatureOutflow_Continue { // size 0x48
}
namespace CPulseCell_Timeline { // size 0x140
    constexpr auto m_TimelineEvents = 0xD8;
    constexpr auto m_bWaitForChildOutflows = 0xF0;
    constexpr auto m_OnFinished = 0xF8;
}
namespace CPulseCell_Inflow_EntOutputHandler { // size 0xB8
    constexpr auto m_SourceEntity = 0x80;
    constexpr auto m_SourceOutput = 0x90;
    constexpr auto m_ExpectedParamType = 0xA0;
}
namespace CPulseCell_Outflow_CycleOrdered::InstanceState_t { // size 0x4
    constexpr auto m_nNextIndex = 0x0;
}
namespace CParticleCollectionBindingInstance { // size 0x130
}
namespace CPulseCell_LimitCount::InstanceState_t { // size 0x4
    constexpr auto m_nCurrentCount = 0x0;
}
namespace CPulseCell_Step_DebugLog { // size 0x48
}
namespace CPulseCell_BaseYieldingInflow { // size 0xD8
    constexpr auto m_BaseFlow_OnAfterCancel = 0x48;
    constexpr auto m_BaseFlow_WhileActive = 0x90;
}
namespace PulseNodeDynamicOutflows_t { // size 0x18
    constexpr auto m_Outflows = 0x0;
}
namespace CPulseCell_IsRequirementValid::Criteria_t { // size 0x1
    constexpr auto m_bIsValid = 0x0;
}
namespace CPulseCell_Inflow_ObservableVariableListener { // size 0x88
    constexpr auto m_nBlackboardReference = 0x80;
    constexpr auto m_bSelfReference = 0x82;
}
namespace CPulseCell_Outflow_CycleOrdered { // size 0x60
    constexpr auto m_Outputs = 0x48;
}
namespace PulseSelectorOutflowList_t { // size 0x18
    constexpr auto m_Outflows = 0x0;
}
namespace CPulseCell_Inflow_Wait { // size 0x120
    constexpr auto m_WakeResume = 0xD8;
}
namespace CPulseCell_Outflow_CycleShuffled { // size 0x60
    constexpr auto m_Outputs = 0x48;
}
namespace CPulseCell_Inflow_Method { // size 0xC8
    constexpr auto m_MethodName = 0x80;
    constexpr auto m_Description = 0x90;
    constexpr auto m_bIsPublic = 0x98;
    constexpr auto m_ReturnType = 0xA0;
    constexpr auto m_Args = 0xB8;
}
namespace CPulseCell_BaseValue { // size 0x48
}
namespace CPulseCell_BooleanSwitchState { // size 0x1E0
    constexpr auto m_Condition = 0xD8;
    constexpr auto m_WhenTrue = 0x150;
    constexpr auto m_WhenFalse = 0x198;
}
namespace CPulseCell_Inflow_Yield { // size 0x120
    constexpr auto m_UnyieldResume = 0xD8;
}
namespace CPulseCell_Unknown { // size 0x58
    constexpr auto m_UnknownKeys = 0x48;
}
namespace CPulseCell_Outflow_CycleRandom { // size 0x60
    constexpr auto m_Outputs = 0x48;
}
namespace CPulseCell_Step_PublicOutput { // size 0x50
    constexpr auto m_OutputIndex = 0x48;
}
namespace CPulse_BlackboardReference { // size 0x28
    constexpr auto m_hBlackboardResource = 0x0;
    constexpr auto m_BlackboardResource = 0x8;
    constexpr auto m_nNodeID = 0x18;
    constexpr auto m_NodeName = 0x20;
}
namespace CPulseCell_Value_RandomInt { // size 0x48
}
namespace CPulse_CallInfo { // size 0x58
    constexpr auto m_PortName = 0x0;
    constexpr auto m_nEditorNodeID = 0x10;
    constexpr auto m_RegisterMap = 0x18;
    constexpr auto m_CallMethodID = 0x48;
    constexpr auto m_nSrcChunk = 0x4C;
    constexpr auto m_nSrcInstruction = 0x50;
}
namespace CPulseCell_InlineNodeSkipSelector { // size 0xB0
    constexpr auto m_nFlowNodeID = 0x48;
    constexpr auto m_bAnd = 0x4C;
    constexpr auto m_PassOutflow = 0x50;
    constexpr auto m_FailOutflow = 0x68;
}
namespace CPulseCell_LimitCount { // size 0x50
    constexpr auto m_nLimitCount = 0x48;
}
namespace CPulseCell_Step_CallExternalMethod { // size 0x150
    constexpr auto m_MethodName = 0xD8;
    constexpr auto m_nBlackboardIndex = 0xE8;
    constexpr auto m_ExpectedArgs = 0xF0;
    constexpr auto m_nAsyncCallMode = 0x100;
    constexpr auto m_OnFinished = 0x108;
}
namespace CPulseCell_LimitCount::Criteria_t { // size 0x1
    constexpr auto m_bLimitCountPasses = 0x0;
}
namespace CPulseCell_CursorQueue { // size 0x130
    constexpr auto m_nCursorsAllowedToRunParallel = 0x128;
}
namespace CPulseCell_Value_RandomFloat { // size 0x48
}
namespace CPulseExecCursor { // size 0xD8
}
