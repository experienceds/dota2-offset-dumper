// pulse_system.dll  Dota 2 schema dump
#pragma once
#include <cstdint>

namespace pulse_system_dll {
    // CPulseCell_Step_TestDomainDestroyFakeEntity : CPulseCell_BaseFlow  size 0x48
    namespace CPulseCell_Step_TestDomainDestroyFakeEntity {
    }
    // CPulseCell_WaitForCursorsWithTag : CPulseCell_WaitForCursorsWithTagBase  size 0x130
    namespace CPulseCell_WaitForCursorsWithTag {
        constexpr auto m_bTagSelfWhenComplete = 0x128; // bool
        constexpr auto m_nDesiredKillPriority = 0x12C; // PulseCursorCancelPriority_t
    }
    // CPulseCell_Test_NoInflow : CPulseCell_BaseFlow  size 0x48
    namespace CPulseCell_Test_NoInflow {
    }
    // CPulseGraphInstance_TestDomain_FakeEntityOwner : CBasePulseGraphInstance  size 0x110
    namespace CPulseGraphInstance_TestDomain_FakeEntityOwner {
    }
    // CPulseCell_Base  size 0x48
    namespace CPulseCell_Base {
        constexpr auto m_nEditorNodeID = 0x8; // PulseDocNodeID_t
    }
    // CPulse_ResumePoint : CPulse_OutflowConnection  size 0x48
    namespace CPulse_ResumePoint {
    }
    // CTestDomainDerived_Cursor : CPulseExecCursor  size 0xE0
    namespace CTestDomainDerived_Cursor {
        constexpr auto m_nCursorValueA = 0xD8; // int32
        constexpr auto m_nCursorValueB = 0xDC; // int32
    }
    // CPulseCell_PickBestOutflowSelector : CPulseCell_BaseFlow  size 0x68
    namespace CPulseCell_PickBestOutflowSelector {
        constexpr auto m_nCheckType = 0x48; // PulseBestOutflowRules_t
        constexpr auto m_OutflowList = 0x50; // PulseSelectorOutflowList_t
    }
    // CPulseCell_WaitForObservable : CPulseCell_BaseYieldingInflow  size 0x198
    namespace CPulseCell_WaitForObservable {
        constexpr auto m_Condition = 0xD8; // CPulseObservableExpression< bool >
        constexpr auto m_OnTrue = 0x150; // CPulse_ResumePoint
    }
    // CPulse_OutflowConnection  size 0x48
    namespace CPulse_OutflowConnection {
        constexpr auto m_SourceOutflowName = 0x0; // PulseSymbol_t
        constexpr auto m_nDestChunk = 0x10; // PulseRuntimeChunkIndex_t
        constexpr auto m_nInstruction = 0x14; // int32
        constexpr auto m_OutflowRegisterMap = 0x18; // PulseRegisterMap_t
    }
    // CPulseGraphDef  size 0x1B0
    namespace CPulseGraphDef {
        constexpr auto m_DomainIdentifier = 0x8; // PulseSymbol_t
        constexpr auto m_DomainSubType = 0x18; // CPulseValueFullType
        constexpr auto m_ParentMapName = 0x30; // PulseSymbol_t
        constexpr auto m_ParentXmlName = 0x40; // PulseSymbol_t
        constexpr auto m_Chunks = 0x50; // CUtlVector< CPulse_Chunk* >
        constexpr auto m_Cells = 0x68; // CUtlVector< CPulseCell_Base* >
        constexpr auto m_Vars = 0x80; // CUtlVector< CPulse_Variable >
        constexpr auto m_PublicOutputs = 0x98; // CUtlVector< CPulse_PublicOutput >
        constexpr auto m_InvokeBindings = 0xB0; // CUtlVector< CPulse_InvokeBinding* >
        constexpr auto m_CallInfos = 0xC8; // CUtlVector< CPulse_CallInfo* >
        constexpr auto m_Constants = 0xE0; // CUtlVector< CPulse_Constant >
        constexpr auto m_DomainValues = 0xF8; // CUtlVector< CPulse_DomainValue >
        constexpr auto m_BlackboardReferences = 0x110; // CUtlVector< CPulse_BlackboardReference >
        constexpr auto m_OutputConnections = 0x128; // CUtlVector< CPulse_OutputConnection* >
    }
    // CPulseCell_TestYieldForever : CPulseCell_BaseYieldingInflow  size 0xD8
    namespace CPulseCell_TestYieldForever {
    }
    // CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView : CPulseGraphInstance_TestDomain  size 0x158
    namespace CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView {
    }
    // CPulseCell_TestWaitWithCursorState::InstanceState_t  size 0x4
    namespace CPulseCell_TestWaitWithCursorState::InstanceState_t {
        constexpr auto m_nDummy = 0x0; // int32
    }
    // CPulseCell_FireCursors : CPulseCell_BaseYieldingInflow  size 0x140
    namespace CPulseCell_FireCursors {
        constexpr auto m_Outflows = 0xD8; // CUtlVector< CPulse_OutflowConnection >
        constexpr auto m_bWaitForChildOutflows = 0xF0; // bool
        constexpr auto m_OnFinished = 0xF8; // CPulse_ResumePoint
    }
    // CPulseCell_Timeline::TimelineEvent_t  size 0x50
    namespace CPulseCell_Timeline::TimelineEvent_t {
        constexpr auto m_flTimeFromPrevious = 0x0; // float32
        constexpr auto m_EventOutflow = 0x8; // CPulse_OutflowConnection
    }
    // CPulseCell_IntervalTimer::CursorState_t  size 0x14
    namespace CPulseCell_IntervalTimer::CursorState_t {
        constexpr auto m_StartTime = 0x0; // GameTime_t
        constexpr auto m_EndTime = 0x4; // GameTime_t
        constexpr auto m_flWaitInterval = 0x8; // float32
        constexpr auto m_flWaitIntervalHigh = 0xC; // float32
        constexpr auto m_bCompleteOnNextWake = 0x10; // bool
    }
    // CPulseCell_BaseRequirement : CPulseCell_Base  size 0x48
    namespace CPulseCell_BaseRequirement {
    }
    // CPulseCell_BaseState : CPulseCell_BaseYieldingInflow  size 0xD8
    namespace CPulseCell_BaseState {
    }
    // OutflowWithRequirements_t  size 0x80
    namespace OutflowWithRequirements_t {
        constexpr auto m_Connection = 0x0; // CPulse_OutflowConnection
        constexpr auto m_DestinationFlowNodeID = 0x48; // PulseDocNodeID_t
        constexpr auto m_RequirementNodeIDs = 0x50; // CUtlVector< PulseDocNodeID_t >
        constexpr auto m_nCursorStateBlockIndex = 0x68; // CUtlVector< int32 >
    }
    // CPulseCell_IsRequirementValid : CPulseCell_BaseRequirement  size 0x48
    namespace CPulseCell_IsRequirementValid {
    }
    // CPulseCell_Value_Gradient : CPulseCell_BaseValue  size 0x60
    namespace CPulseCell_Value_Gradient {
        constexpr auto m_Gradient = 0x48; // CColorGradient
    }
    // CPulseCell_TestWaitWithAutoTracepoints : CPulseCell_BaseYieldingInflow  size 0x128
    namespace CPulseCell_TestWaitWithAutoTracepoints {
        constexpr auto m_TracePrefix = 0xD8; // CUtlString
        constexpr auto m_WakeResume = 0xE0; // CPulse_ResumePoint
    }
    // PulseNodeDynamicOutflows_t::DynamicOutflow_t  size 0x50
    namespace PulseNodeDynamicOutflows_t::DynamicOutflow_t {
        constexpr auto m_OutflowID = 0x0; // CGlobalSymbol
        constexpr auto m_Connection = 0x8; // CPulse_OutflowConnection
    }
    // CPulseCell_Test_MultiOutflow_WithParams : CPulseCell_BaseFlow  size 0xD8
    namespace CPulseCell_Test_MultiOutflow_WithParams {
        constexpr auto m_Out1 = 0x48; // SignatureOutflow_Continue
        constexpr auto m_Out2 = 0x90; // SignatureOutflow_Continue
    }
    // CBasePulseGraphInstance  size 0x110
    namespace CBasePulseGraphInstance {
    }
    // CPulseCell_Inflow_GraphHook : CPulseCell_Inflow_BaseEntrypoint  size 0x90
    namespace CPulseCell_Inflow_GraphHook {
        constexpr auto m_HookName = 0x80; // PulseSymbol_t
    }
    // SignatureOutflow_Resume : CPulse_ResumePoint  size 0x48
    namespace SignatureOutflow_Resume {
    }
    // CPulseCell_Test_MultiOutflow_WithParams_Yielding::CursorState_t  size 0x4
    namespace CPulseCell_Test_MultiOutflow_WithParams_Yielding::CursorState_t {
        constexpr auto nTestStep = 0x0; // int32
    }
    // CPulseTurtleGraphicsCursor : CPulseExecCursor  size 0xF0
    namespace CPulseTurtleGraphicsCursor {
        constexpr auto m_Color = 0xD8; // Color
        constexpr auto m_vPos = 0xDC; // Vector2D
        constexpr auto m_flHeadingDeg = 0xE4; // float32
        constexpr auto m_bPenUp = 0xE8; // bool
    }
    // CPulseCell_TestWaitWithCursorState::CursorState_t  size 0x24
    namespace CPulseCell_TestWaitWithCursorState::CursorState_t {
        constexpr auto flWaitValue = 0x0; // float32
        constexpr auto bFail = 0x4; // bool
        constexpr auto m_hSelfCursor = 0x8; // HYieldedCursor
        constexpr auto m_hSelfCellInstanceUntyped = 0x14; // HPulseCellBase
        constexpr auto m_hSelfCellInstance = 0x1C; // HPulseCell< CPulseCell_TestWaitWithCursorState >
    }
    // CPulseCell_Inflow_BaseEntrypoint : CPulseCell_BaseFlow  size 0x80
    namespace CPulseCell_Inflow_BaseEntrypoint {
        constexpr auto m_EntryChunk = 0x48; // PulseRuntimeChunkIndex_t
        constexpr auto m_RegisterMap = 0x50; // PulseRegisterMap_t
    }
    // CPulseCell_Test_MultiInflow_NoDefault : CPulseCell_BaseFlow  size 0x48
    namespace CPulseCell_Test_MultiInflow_NoDefault {
    }
    // CPulseCell_WaitForCursorsWithTagBase : CPulseCell_BaseYieldingInflow  size 0x128
    namespace CPulseCell_WaitForCursorsWithTagBase {
        constexpr auto m_nCursorsAllowedToWait = 0xD8; // int32
        constexpr auto m_WaitComplete = 0xE0; // CPulse_ResumePoint
    }
    // CPulse_InvokeBinding  size 0xB0
    namespace CPulse_InvokeBinding {
        constexpr auto m_RegisterMap = 0x0; // PulseRegisterMap_t
        constexpr auto m_FuncName = 0x30; // PulseSymbol_t
        constexpr auto m_nCellIndex = 0x40; // PulseRuntimeCellIndex_t
        constexpr auto m_nSrcChunk = 0x44; // PulseRuntimeChunkIndex_t
        constexpr auto m_nSrcInstruction = 0x48; // int32
    }
    // CPulseCell_IntervalTimer : CPulseCell_BaseYieldingInflow  size 0x168
    namespace CPulseCell_IntervalTimer {
        constexpr auto m_Completed = 0xD8; // CPulse_ResumePoint
        constexpr auto m_OnInterval = 0x120; // SignatureOutflow_Continue
    }
    // CPulseCell_BaseLerp : CPulseCell_BaseYieldingInflow  size 0x120
    namespace CPulseCell_BaseLerp {
        constexpr auto m_WakeResume = 0xD8; // CPulse_ResumePoint
    }
    // CPulseCell_Value_TestValue50 : CPulseCell_BaseValue  size 0x48
    namespace CPulseCell_Value_TestValue50 {
    }
    // CPulseCell_Test_MultiOutflow_WithParams_Yielding : CPulseCell_BaseYieldingInflow  size 0x240
    namespace CPulseCell_Test_MultiOutflow_WithParams_Yielding {
        constexpr auto m_Out1 = 0xD8; // SignatureOutflow_Continue
        constexpr auto m_AsyncChild1 = 0x120; // SignatureOutflow_Continue
        constexpr auto m_AsyncChild2 = 0x168; // SignatureOutflow_Continue
        constexpr auto m_YieldResume1 = 0x1B0; // SignatureOutflow_Resume
        constexpr auto m_YieldResume2 = 0x1F8; // SignatureOutflow_Resume
    }
    // CPulseCell_Value_Curve : CPulseCell_BaseValue  size 0x88
    namespace CPulseCell_Value_Curve {
        constexpr auto m_Curve = 0x48; // CPiecewiseCurve
    }
    // CPulseCell_Inflow_EventHandler : CPulseCell_Inflow_BaseEntrypoint  size 0x90
    namespace CPulseCell_Inflow_EventHandler {
        constexpr auto m_EventName = 0x80; // PulseSymbol_t
    }
    // CPulseCell_BaseFlow : CPulseCell_Base  size 0x48
    namespace CPulseCell_BaseFlow {
    }
    // CPulseCell_Step_TestDomainTracepoint : CPulseCell_BaseFlow  size 0x48
    namespace CPulseCell_Step_TestDomainTracepoint {
    }
    // CPulseCell_Outflow_CycleShuffled::InstanceState_t  size 0x28
    namespace CPulseCell_Outflow_CycleShuffled::InstanceState_t {
        constexpr auto m_Shuffle = 0x0; // CUtlVectorFixedGrowable< uint8, 8 >
        constexpr auto m_nNextShuffle = 0x20; // int32
    }
    // CPulseCell_BaseLerp::CursorState_t  size 0x8
    namespace CPulseCell_BaseLerp::CursorState_t {
        constexpr auto m_StartTime = 0x0; // GameTime_t
        constexpr auto m_EndTime = 0x4; // GameTime_t
    }
    // CPulseGraphInstance_TestDomain_Derived : CPulseGraphInstance_TestDomain  size 0x160
    namespace CPulseGraphInstance_TestDomain_Derived {
        constexpr auto m_nInstanceValueX = 0x158; // int32
    }
    // CPulseGraphInstance_TestDomain : CBasePulseGraphInstance  size 0x158
    namespace CPulseGraphInstance_TestDomain {
        constexpr auto m_bIsRunningUnitTests = 0x128; // bool
        constexpr auto m_bExplicitTimeStepping = 0x129; // bool
        constexpr auto m_bExpectingToDestroyWithYieldedCursors = 0x12A; // bool
        constexpr auto m_bQuietTracepoints = 0x12B; // bool
        constexpr auto m_bExpectingCursorTerminatedDueToMaxInstructions = 0x12C; // bool
        constexpr auto m_nCursorsTerminatedDueToMaxInstructions = 0x130; // int32
        constexpr auto m_nNextValidateIndex = 0x134; // int32
        constexpr auto m_Tracepoints = 0x138; // CUtlVector< CUtlString >
        constexpr auto m_bTestYesOrNoPath = 0x150; // bool
    }
    // SignatureOutflow_Continue : CPulse_OutflowConnection  size 0x48
    namespace SignatureOutflow_Continue {
    }
    // CPulseCell_Timeline : CPulseCell_BaseYieldingInflow  size 0x140
    namespace CPulseCell_Timeline {
        constexpr auto m_TimelineEvents = 0xD8; // CUtlVector< CPulseCell_Timeline::TimelineEvent_t >
        constexpr auto m_bWaitForChildOutflows = 0xF0; // bool
        constexpr auto m_OnFinished = 0xF8; // CPulse_ResumePoint
    }
    // CPulseCell_Inflow_EntOutputHandler : CPulseCell_Inflow_BaseEntrypoint  size 0xB8
    namespace CPulseCell_Inflow_EntOutputHandler {
        constexpr auto m_SourceEntity = 0x80; // PulseSymbol_t
        constexpr auto m_SourceOutput = 0x90; // PulseSymbol_t
        constexpr auto m_ExpectedParamType = 0xA0; // CPulseValueFullType
    }
    // CPulseCell_Outflow_TestExplicitYesNo : CPulseCell_BaseFlow  size 0xD8
    namespace CPulseCell_Outflow_TestExplicitYesNo {
        constexpr auto m_Yes = 0x48; // CPulse_OutflowConnection
        constexpr auto m_No = 0x90; // CPulse_OutflowConnection
    }
    // CPulseCell_Outflow_TestRandomYesNo : CPulseCell_BaseFlow  size 0xD8
    namespace CPulseCell_Outflow_TestRandomYesNo {
        constexpr auto m_Yes = 0x48; // CPulse_OutflowConnection
        constexpr auto m_No = 0x90; // CPulse_OutflowConnection
    }
    // CPulseCell_Outflow_CycleOrdered::InstanceState_t  size 0x4
    namespace CPulseCell_Outflow_CycleOrdered::InstanceState_t {
        constexpr auto m_nNextIndex = 0x0; // int32
    }
    // CPulseCell_LimitCount::InstanceState_t  size 0x4
    namespace CPulseCell_LimitCount::InstanceState_t {
        constexpr auto m_nCurrentCount = 0x0; // int32
    }
    // CPulseCell_Test_MultiInflow_WithDefault : CPulseCell_BaseFlow  size 0x48
    namespace CPulseCell_Test_MultiInflow_WithDefault {
    }
    // CPulseCell_Step_DebugLog : CPulseCell_BaseFlow  size 0x48
    namespace CPulseCell_Step_DebugLog {
    }
    // CPulseCell_BaseYieldingInflow : CPulseCell_BaseFlow  size 0xD8
    namespace CPulseCell_BaseYieldingInflow {
        constexpr auto m_BaseFlow_OnAfterCancel = 0x48; // CPulse_ResumePoint
        constexpr auto m_BaseFlow_WhileActive = 0x90; // CPulse_ResumePoint
    }
    // PulseNodeDynamicOutflows_t  size 0x18
    namespace PulseNodeDynamicOutflows_t {
        constexpr auto m_Outflows = 0x0; // CUtlVector< PulseNodeDynamicOutflows_t::DynamicOutflow_t >
    }
    // CPulseCell_IsRequirementValid::Criteria_t  size 0x1
    namespace CPulseCell_IsRequirementValid::Criteria_t {
        constexpr auto m_bIsValid = 0x0; // bool
    }
    // CPulseCell_Inflow_ObservableVariableListener : CPulseCell_Inflow_BaseEntrypoint  size 0x88
    namespace CPulseCell_Inflow_ObservableVariableListener {
        constexpr auto m_nBlackboardReference = 0x80; // PulseRuntimeBlackboardReferenceIndex_t
        constexpr auto m_bSelfReference = 0x82; // bool
    }
    // CPulseCell_Outflow_CycleOrdered : CPulseCell_BaseFlow  size 0x60
    namespace CPulseCell_Outflow_CycleOrdered {
        constexpr auto m_Outputs = 0x48; // CUtlVector< CPulse_OutflowConnection >
    }
    // PulseSelectorOutflowList_t  size 0x18
    namespace PulseSelectorOutflowList_t {
        constexpr auto m_Outflows = 0x0; // CUtlVector< OutflowWithRequirements_t >
    }
    // CPulseGraphInstance_TurtleGraphics : CBasePulseGraphInstance  size 0x138
    namespace CPulseGraphInstance_TurtleGraphics {
    }
    // CPulseCell_Val_TestDomainGetEntityName : CPulseCell_BaseValue  size 0x48
    namespace CPulseCell_Val_TestDomainGetEntityName {
    }
    // CPulseCell_Inflow_Wait : CPulseCell_BaseYieldingInflow  size 0x120
    namespace CPulseCell_Inflow_Wait {
        constexpr auto m_WakeResume = 0xD8; // CPulse_ResumePoint
    }
    // CPulseCell_TestWaitWithCursorState : CPulseCell_BaseYieldingInflow  size 0x168
    namespace CPulseCell_TestWaitWithCursorState {
        constexpr auto m_WakeResume = 0xD8; // CPulse_ResumePoint
        constexpr auto m_WakeFail = 0x120; // CPulse_ResumePoint
    }
    // CPulseCell_Outflow_CycleShuffled : CPulseCell_BaseFlow  size 0x60
    namespace CPulseCell_Outflow_CycleShuffled {
        constexpr auto m_Outputs = 0x48; // CUtlVector< CPulse_OutflowConnection >
    }
    // CPulseCell_Inflow_Method : CPulseCell_Inflow_BaseEntrypoint  size 0xC8
    namespace CPulseCell_Inflow_Method {
        constexpr auto m_MethodName = 0x80; // PulseSymbol_t
        constexpr auto m_Description = 0x90; // CUtlString
        constexpr auto m_bIsPublic = 0x98; // bool
        constexpr auto m_ReturnType = 0xA0; // CPulseValueFullType
        constexpr auto m_Args = 0xB8; // CUtlLeanVector< CPulseRuntimeMethodArg >
    }
    // CPulseCell_BaseValue : CPulseCell_Base  size 0x48
    namespace CPulseCell_BaseValue {
    }
    // CPulseCell_BooleanSwitchState : CPulseCell_BaseState  size 0x1E0
    namespace CPulseCell_BooleanSwitchState {
        constexpr auto m_Condition = 0xD8; // CPulseObservableExpression< bool >
        constexpr auto m_WhenTrue = 0x150; // CPulse_OutflowConnection
        constexpr auto m_WhenFalse = 0x198; // CPulse_OutflowConnection
    }
    // CPulseCell_Inflow_Yield : CPulseCell_BaseYieldingInflow  size 0x120
    namespace CPulseCell_Inflow_Yield {
        constexpr auto m_UnyieldResume = 0xD8; // CPulse_ResumePoint
    }
    // CPulseCell_Unknown : CPulseCell_Base  size 0x58
    namespace CPulseCell_Unknown {
        constexpr auto m_UnknownKeys = 0x48; // KeyValues3
    }
    // CPulseCell_Outflow_CycleRandom : CPulseCell_BaseFlow  size 0x60
    namespace CPulseCell_Outflow_CycleRandom {
        constexpr auto m_Outputs = 0x48; // CUtlVector< CPulse_OutflowConnection >
    }
    // CPulseCell_Step_PublicOutput : CPulseCell_BaseFlow  size 0x50
    namespace CPulseCell_Step_PublicOutput {
        constexpr auto m_OutputIndex = 0x48; // PulseRuntimeOutputIndex_t
    }
    // CPulseCell_Val_TestDomainFindEntityByName : CPulseCell_BaseValue  size 0x48
    namespace CPulseCell_Val_TestDomainFindEntityByName {
    }
    // CPulse_BlackboardReference  size 0x28
    namespace CPulse_BlackboardReference {
        constexpr auto m_hBlackboardResource = 0x0; // CStrongHandle< InfoForResourceTypeIPulseGraphDef >
        constexpr auto m_BlackboardResource = 0x8; // PulseSymbol_t
        constexpr auto m_nNodeID = 0x18; // PulseDocNodeID_t
        constexpr auto m_NodeName = 0x20; // CGlobalSymbol
    }
    // CPulseCell_Value_RandomInt : CPulseCell_BaseValue  size 0x48
    namespace CPulseCell_Value_RandomInt {
    }
    // CPulseCell_TestEnums : CPulseCell_BaseValue  size 0x50
    namespace CPulseCell_TestEnums {
        constexpr auto m_nReferenceColor = 0x48; // PulseTestEnumColor_t
        constexpr auto m_nReferenceFlags = 0x4C; // PulseTestEnumFlags_t
    }
    // CPulseCell_Step_TestDomainEntFire : CPulseCell_BaseFlow  size 0x50
    namespace CPulseCell_Step_TestDomainEntFire {
        constexpr auto m_Input = 0x48; // CUtlString
    }
    // CPulseCell_ExampleSelector : CPulseCell_BaseFlow  size 0x60
    namespace CPulseCell_ExampleSelector {
        constexpr auto m_OutflowList = 0x48; // PulseSelectorOutflowList_t
    }
    // CPulse_CallInfo  size 0x58
    namespace CPulse_CallInfo {
        constexpr auto m_PortName = 0x0; // PulseSymbol_t
        constexpr auto m_nEditorNodeID = 0x10; // PulseDocNodeID_t
        constexpr auto m_RegisterMap = 0x18; // PulseRegisterMap_t
        constexpr auto m_CallMethodID = 0x48; // PulseDocNodeID_t
        constexpr auto m_nSrcChunk = 0x4C; // PulseRuntimeChunkIndex_t
        constexpr auto m_nSrcInstruction = 0x50; // int32
    }
    // CPulseCell_InlineNodeSkipSelector : CPulseCell_BaseFlow  size 0xB0
    namespace CPulseCell_InlineNodeSkipSelector {
        constexpr auto m_nFlowNodeID = 0x48; // PulseDocNodeID_t
        constexpr auto m_bAnd = 0x4C; // bool
        constexpr auto m_PassOutflow = 0x50; // PulseSelectorOutflowList_t
        constexpr auto m_FailOutflow = 0x68; // CPulse_OutflowConnection
    }
    // CPulseCell_ExampleCriteria::Criteria_t  size 0xC
    namespace CPulseCell_ExampleCriteria::Criteria_t {
        constexpr auto m_flFloatValue1 = 0x0; // float32
        constexpr auto m_flFloatValue2 = 0x4; // float32
        constexpr auto m_bMyBool = 0x8; // bool
    }
    // CPulseCell_ExampleCriteria : CPulseCell_BaseRequirement  size 0x48
    namespace CPulseCell_ExampleCriteria {
    }
    // CPulseCell_LimitCount : CPulseCell_BaseRequirement  size 0x50
    namespace CPulseCell_LimitCount {
        constexpr auto m_nLimitCount = 0x48; // int32
    }
    // CPulseCell_Step_CallExternalMethod : CPulseCell_BaseYieldingInflow  size 0x150
    namespace CPulseCell_Step_CallExternalMethod {
        constexpr auto m_MethodName = 0xD8; // PulseSymbol_t
        constexpr auto m_nBlackboardIndex = 0xE8; // PulseRuntimeBlackboardReferenceIndex_t
        constexpr auto m_ExpectedArgs = 0xF0; // CUtlLeanVector< CPulseRuntimeMethodArg >
        constexpr auto m_nAsyncCallMode = 0x100; // PulseMethodCallMode_t
        constexpr auto m_OnFinished = 0x108; // CPulse_ResumePoint
    }
    // CPulseCell_LimitCount::Criteria_t  size 0x1
    namespace CPulseCell_LimitCount::Criteria_t {
        constexpr auto m_bLimitCountPasses = 0x0; // bool
    }
    // CPulseCell_Step_TestDomainCreateFakeEntity : CPulseCell_BaseFlow  size 0x48
    namespace CPulseCell_Step_TestDomainCreateFakeEntity {
    }
    // CPulseCell_TestYieldWithObservables : CPulseCell_BaseYieldingInflow  size 0x220
    namespace CPulseCell_TestYieldWithObservables {
        constexpr auto m_flWatchForFloatValue = 0xD8; // float32
        constexpr auto m_LiveFloatValue = 0xE0; // CPulseObservableExpression< float32 >
        constexpr auto m_WatchForStringValue = 0x158; // CUtlString
        constexpr auto m_LiveStringValue = 0x160; // CPulseObservableExpression< CUtlString >
        constexpr auto m_WakeResume = 0x1D8; // CPulse_ResumePoint
    }
    // CPulseCell_CursorQueue : CPulseCell_WaitForCursorsWithTagBase  size 0x130
    namespace CPulseCell_CursorQueue {
        constexpr auto m_nCursorsAllowedToRunParallel = 0x128; // int32
    }
    // CPulseCell_Value_RandomFloat : CPulseCell_BaseValue  size 0x48
    namespace CPulseCell_Value_RandomFloat {
    }
    // CPulseExecCursor  size 0xD8
    namespace CPulseExecCursor {
    }
} // namespace pulse_system_dll
