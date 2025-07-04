﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TargetingSystem

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "TargetingSystem_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function TargetingSystem.AsyncAction_PerformTargeting.PerformFilteringRequest
// 0x0030 (0x0030 - 0x0000)
struct AsyncAction_PerformTargeting_PerformFilteringRequest final
{
public:
	class AActor*                                 SourceActor_0;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTargetingPreset*                       TargetingPreset_0;                                 // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseAsyncTargeting_0;                              // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         InTargets;                                         // 0x0018(0x0010)(ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UAsyncAction_PerformTargeting*          ReturnValue;                                       // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AsyncAction_PerformTargeting_PerformFilteringRequest) == 0x000008, "Wrong alignment on AsyncAction_PerformTargeting_PerformFilteringRequest");
static_assert(sizeof(AsyncAction_PerformTargeting_PerformFilteringRequest) == 0x000030, "Wrong size on AsyncAction_PerformTargeting_PerformFilteringRequest");
static_assert(offsetof(AsyncAction_PerformTargeting_PerformFilteringRequest, SourceActor_0) == 0x000000, "Member 'AsyncAction_PerformTargeting_PerformFilteringRequest::SourceActor_0' has a wrong offset!");
static_assert(offsetof(AsyncAction_PerformTargeting_PerformFilteringRequest, TargetingPreset_0) == 0x000008, "Member 'AsyncAction_PerformTargeting_PerformFilteringRequest::TargetingPreset_0' has a wrong offset!");
static_assert(offsetof(AsyncAction_PerformTargeting_PerformFilteringRequest, bUseAsyncTargeting_0) == 0x000010, "Member 'AsyncAction_PerformTargeting_PerformFilteringRequest::bUseAsyncTargeting_0' has a wrong offset!");
static_assert(offsetof(AsyncAction_PerformTargeting_PerformFilteringRequest, InTargets) == 0x000018, "Member 'AsyncAction_PerformTargeting_PerformFilteringRequest::InTargets' has a wrong offset!");
static_assert(offsetof(AsyncAction_PerformTargeting_PerformFilteringRequest, ReturnValue) == 0x000028, "Member 'AsyncAction_PerformTargeting_PerformFilteringRequest::ReturnValue' has a wrong offset!");

// Function TargetingSystem.AsyncAction_PerformTargeting.PerformTargetingRequest
// 0x0020 (0x0020 - 0x0000)
struct AsyncAction_PerformTargeting_PerformTargetingRequest final
{
public:
	class AActor*                                 SourceActor_0;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTargetingPreset*                       TargetingPreset_0;                                 // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseAsyncTargeting_0;                              // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncAction_PerformTargeting*          ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AsyncAction_PerformTargeting_PerformTargetingRequest) == 0x000008, "Wrong alignment on AsyncAction_PerformTargeting_PerformTargetingRequest");
static_assert(sizeof(AsyncAction_PerformTargeting_PerformTargetingRequest) == 0x000020, "Wrong size on AsyncAction_PerformTargeting_PerformTargetingRequest");
static_assert(offsetof(AsyncAction_PerformTargeting_PerformTargetingRequest, SourceActor_0) == 0x000000, "Member 'AsyncAction_PerformTargeting_PerformTargetingRequest::SourceActor_0' has a wrong offset!");
static_assert(offsetof(AsyncAction_PerformTargeting_PerformTargetingRequest, TargetingPreset_0) == 0x000008, "Member 'AsyncAction_PerformTargeting_PerformTargetingRequest::TargetingPreset_0' has a wrong offset!");
static_assert(offsetof(AsyncAction_PerformTargeting_PerformTargetingRequest, bUseAsyncTargeting_0) == 0x000010, "Member 'AsyncAction_PerformTargeting_PerformTargetingRequest::bUseAsyncTargeting_0' has a wrong offset!");
static_assert(offsetof(AsyncAction_PerformTargeting_PerformTargetingRequest, ReturnValue) == 0x000018, "Member 'AsyncAction_PerformTargeting_PerformTargetingRequest::ReturnValue' has a wrong offset!");

// Function TargetingSystem.TargetingSubsystem.GetTargetingResults
// 0x0018 (0x0018 - 0x0000)
struct TargetingSubsystem_GetTargetingResults final
{
public:
	struct FTargetingRequestHandle                TargetingHandle;                                   // 0x0000(0x0004)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FHitResult>                     OutTargets;                                        // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(TargetingSubsystem_GetTargetingResults) == 0x000008, "Wrong alignment on TargetingSubsystem_GetTargetingResults");
static_assert(sizeof(TargetingSubsystem_GetTargetingResults) == 0x000018, "Wrong size on TargetingSubsystem_GetTargetingResults");
static_assert(offsetof(TargetingSubsystem_GetTargetingResults, TargetingHandle) == 0x000000, "Member 'TargetingSubsystem_GetTargetingResults::TargetingHandle' has a wrong offset!");
static_assert(offsetof(TargetingSubsystem_GetTargetingResults, OutTargets) == 0x000008, "Member 'TargetingSubsystem_GetTargetingResults::OutTargets' has a wrong offset!");

// Function TargetingSystem.TargetingSubsystem.GetTargetingResultsActors
// 0x0018 (0x0018 - 0x0000)
struct TargetingSubsystem_GetTargetingResultsActors final
{
public:
	struct FTargetingRequestHandle                TargetingHandle;                                   // 0x0000(0x0004)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Targets;                                           // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(TargetingSubsystem_GetTargetingResultsActors) == 0x000008, "Wrong alignment on TargetingSubsystem_GetTargetingResultsActors");
static_assert(sizeof(TargetingSubsystem_GetTargetingResultsActors) == 0x000018, "Wrong size on TargetingSubsystem_GetTargetingResultsActors");
static_assert(offsetof(TargetingSubsystem_GetTargetingResultsActors, TargetingHandle) == 0x000000, "Member 'TargetingSubsystem_GetTargetingResultsActors::TargetingHandle' has a wrong offset!");
static_assert(offsetof(TargetingSubsystem_GetTargetingResultsActors, Targets) == 0x000008, "Member 'TargetingSubsystem_GetTargetingResultsActors::Targets' has a wrong offset!");

// Function TargetingSystem.TargetingSubsystem.GetTargetingSourceContext
// 0x0040 (0x0040 - 0x0000)
struct TargetingSubsystem_GetTargetingSourceContext final
{
public:
	struct FTargetingRequestHandle                TargetingHandle;                                   // 0x0000(0x0004)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTargetingSourceContext                ReturnValue;                                       // 0x0008(0x0038)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(TargetingSubsystem_GetTargetingSourceContext) == 0x000008, "Wrong alignment on TargetingSubsystem_GetTargetingSourceContext");
static_assert(sizeof(TargetingSubsystem_GetTargetingSourceContext) == 0x000040, "Wrong size on TargetingSubsystem_GetTargetingSourceContext");
static_assert(offsetof(TargetingSubsystem_GetTargetingSourceContext, TargetingHandle) == 0x000000, "Member 'TargetingSubsystem_GetTargetingSourceContext::TargetingHandle' has a wrong offset!");
static_assert(offsetof(TargetingSubsystem_GetTargetingSourceContext, ReturnValue) == 0x000008, "Member 'TargetingSubsystem_GetTargetingSourceContext::ReturnValue' has a wrong offset!");

// Function TargetingSystem.TargetingSubsystem.StartAsyncTargetingRequest
// 0x0050 (0x0050 - 0x0000)
struct TargetingSubsystem_StartAsyncTargetingRequest final
{
public:
	const class UTargetingPreset*                 TargetingPreset;                                   // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTargetingSourceContext                InSourceContext;                                   // 0x0008(0x0038)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TDelegate<void(const struct FTargetingRequestHandle& TargetingRequestHandle)> CompletionDynamicDelegate; // 0x0040(0x000C)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(TargetingSubsystem_StartAsyncTargetingRequest) == 0x000008, "Wrong alignment on TargetingSubsystem_StartAsyncTargetingRequest");
static_assert(sizeof(TargetingSubsystem_StartAsyncTargetingRequest) == 0x000050, "Wrong size on TargetingSubsystem_StartAsyncTargetingRequest");
static_assert(offsetof(TargetingSubsystem_StartAsyncTargetingRequest, TargetingPreset) == 0x000000, "Member 'TargetingSubsystem_StartAsyncTargetingRequest::TargetingPreset' has a wrong offset!");
static_assert(offsetof(TargetingSubsystem_StartAsyncTargetingRequest, InSourceContext) == 0x000008, "Member 'TargetingSubsystem_StartAsyncTargetingRequest::InSourceContext' has a wrong offset!");
static_assert(offsetof(TargetingSubsystem_StartAsyncTargetingRequest, CompletionDynamicDelegate) == 0x000040, "Member 'TargetingSubsystem_StartAsyncTargetingRequest::CompletionDynamicDelegate' has a wrong offset!");

// Function TargetingSystem.TargetingSubsystem.ExecuteTargetingRequest
// 0x0050 (0x0050 - 0x0000)
struct TargetingSubsystem_ExecuteTargetingRequest final
{
public:
	const class UTargetingPreset*                 TargetingPreset;                                   // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTargetingSourceContext                InSourceContext;                                   // 0x0008(0x0038)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TDelegate<void(const struct FTargetingRequestHandle& TargetingRequestHandle)> CompletionDynamicDelegate; // 0x0040(0x000C)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(TargetingSubsystem_ExecuteTargetingRequest) == 0x000008, "Wrong alignment on TargetingSubsystem_ExecuteTargetingRequest");
static_assert(sizeof(TargetingSubsystem_ExecuteTargetingRequest) == 0x000050, "Wrong size on TargetingSubsystem_ExecuteTargetingRequest");
static_assert(offsetof(TargetingSubsystem_ExecuteTargetingRequest, TargetingPreset) == 0x000000, "Member 'TargetingSubsystem_ExecuteTargetingRequest::TargetingPreset' has a wrong offset!");
static_assert(offsetof(TargetingSubsystem_ExecuteTargetingRequest, InSourceContext) == 0x000008, "Member 'TargetingSubsystem_ExecuteTargetingRequest::InSourceContext' has a wrong offset!");
static_assert(offsetof(TargetingSubsystem_ExecuteTargetingRequest, CompletionDynamicDelegate) == 0x000040, "Member 'TargetingSubsystem_ExecuteTargetingRequest::CompletionDynamicDelegate' has a wrong offset!");

// Function TargetingSystem.TargetingSelectionTask_Trace.GetAdditionalActorsToIgnore
// 0x0018 (0x0018 - 0x0000)
struct TargetingSelectionTask_Trace_GetAdditionalActorsToIgnore final
{
public:
	struct FTargetingRequestHandle                TargetingHandle;                                   // 0x0000(0x0004)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         OutAdditionalActorsToIgnore;                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(TargetingSelectionTask_Trace_GetAdditionalActorsToIgnore) == 0x000008, "Wrong alignment on TargetingSelectionTask_Trace_GetAdditionalActorsToIgnore");
static_assert(sizeof(TargetingSelectionTask_Trace_GetAdditionalActorsToIgnore) == 0x000018, "Wrong size on TargetingSelectionTask_Trace_GetAdditionalActorsToIgnore");
static_assert(offsetof(TargetingSelectionTask_Trace_GetAdditionalActorsToIgnore, TargetingHandle) == 0x000000, "Member 'TargetingSelectionTask_Trace_GetAdditionalActorsToIgnore::TargetingHandle' has a wrong offset!");
static_assert(offsetof(TargetingSelectionTask_Trace_GetAdditionalActorsToIgnore, OutAdditionalActorsToIgnore) == 0x000008, "Member 'TargetingSelectionTask_Trace_GetAdditionalActorsToIgnore::OutAdditionalActorsToIgnore' has a wrong offset!");

// Function TargetingSystem.TargetingSelectionTask_Trace.GetSourceLocation
// 0x0020 (0x0020 - 0x0000)
struct TargetingSelectionTask_Trace_GetSourceLocation final
{
public:
	struct FTargetingRequestHandle                TargetingHandle;                                   // 0x0000(0x0004)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TargetingSelectionTask_Trace_GetSourceLocation) == 0x000008, "Wrong alignment on TargetingSelectionTask_Trace_GetSourceLocation");
static_assert(sizeof(TargetingSelectionTask_Trace_GetSourceLocation) == 0x000020, "Wrong size on TargetingSelectionTask_Trace_GetSourceLocation");
static_assert(offsetof(TargetingSelectionTask_Trace_GetSourceLocation, TargetingHandle) == 0x000000, "Member 'TargetingSelectionTask_Trace_GetSourceLocation::TargetingHandle' has a wrong offset!");
static_assert(offsetof(TargetingSelectionTask_Trace_GetSourceLocation, ReturnValue) == 0x000008, "Member 'TargetingSelectionTask_Trace_GetSourceLocation::ReturnValue' has a wrong offset!");

// Function TargetingSystem.TargetingSelectionTask_Trace.GetSourceOffset
// 0x0020 (0x0020 - 0x0000)
struct TargetingSelectionTask_Trace_GetSourceOffset final
{
public:
	struct FTargetingRequestHandle                TargetingHandle;                                   // 0x0000(0x0004)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TargetingSelectionTask_Trace_GetSourceOffset) == 0x000008, "Wrong alignment on TargetingSelectionTask_Trace_GetSourceOffset");
static_assert(sizeof(TargetingSelectionTask_Trace_GetSourceOffset) == 0x000020, "Wrong size on TargetingSelectionTask_Trace_GetSourceOffset");
static_assert(offsetof(TargetingSelectionTask_Trace_GetSourceOffset, TargetingHandle) == 0x000000, "Member 'TargetingSelectionTask_Trace_GetSourceOffset::TargetingHandle' has a wrong offset!");
static_assert(offsetof(TargetingSelectionTask_Trace_GetSourceOffset, ReturnValue) == 0x000008, "Member 'TargetingSelectionTask_Trace_GetSourceOffset::ReturnValue' has a wrong offset!");

// Function TargetingSystem.TargetingSelectionTask_Trace.GetSweptTraceRadius
// 0x0008 (0x0008 - 0x0000)
struct TargetingSelectionTask_Trace_GetSweptTraceRadius final
{
public:
	struct FTargetingRequestHandle                TargetingHandle;                                   // 0x0000(0x0004)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TargetingSelectionTask_Trace_GetSweptTraceRadius) == 0x000004, "Wrong alignment on TargetingSelectionTask_Trace_GetSweptTraceRadius");
static_assert(sizeof(TargetingSelectionTask_Trace_GetSweptTraceRadius) == 0x000008, "Wrong size on TargetingSelectionTask_Trace_GetSweptTraceRadius");
static_assert(offsetof(TargetingSelectionTask_Trace_GetSweptTraceRadius, TargetingHandle) == 0x000000, "Member 'TargetingSelectionTask_Trace_GetSweptTraceRadius::TargetingHandle' has a wrong offset!");
static_assert(offsetof(TargetingSelectionTask_Trace_GetSweptTraceRadius, ReturnValue) == 0x000004, "Member 'TargetingSelectionTask_Trace_GetSweptTraceRadius::ReturnValue' has a wrong offset!");

// Function TargetingSystem.TargetingSelectionTask_Trace.GetTraceDirection
// 0x0020 (0x0020 - 0x0000)
struct TargetingSelectionTask_Trace_GetTraceDirection final
{
public:
	struct FTargetingRequestHandle                TargetingHandle;                                   // 0x0000(0x0004)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TargetingSelectionTask_Trace_GetTraceDirection) == 0x000008, "Wrong alignment on TargetingSelectionTask_Trace_GetTraceDirection");
static_assert(sizeof(TargetingSelectionTask_Trace_GetTraceDirection) == 0x000020, "Wrong size on TargetingSelectionTask_Trace_GetTraceDirection");
static_assert(offsetof(TargetingSelectionTask_Trace_GetTraceDirection, TargetingHandle) == 0x000000, "Member 'TargetingSelectionTask_Trace_GetTraceDirection::TargetingHandle' has a wrong offset!");
static_assert(offsetof(TargetingSelectionTask_Trace_GetTraceDirection, ReturnValue) == 0x000008, "Member 'TargetingSelectionTask_Trace_GetTraceDirection::ReturnValue' has a wrong offset!");

// Function TargetingSystem.TargetingSelectionTask_Trace.GetTraceLength
// 0x0008 (0x0008 - 0x0000)
struct TargetingSelectionTask_Trace_GetTraceLength final
{
public:
	struct FTargetingRequestHandle                TargetingHandle;                                   // 0x0000(0x0004)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TargetingSelectionTask_Trace_GetTraceLength) == 0x000004, "Wrong alignment on TargetingSelectionTask_Trace_GetTraceLength");
static_assert(sizeof(TargetingSelectionTask_Trace_GetTraceLength) == 0x000008, "Wrong size on TargetingSelectionTask_Trace_GetTraceLength");
static_assert(offsetof(TargetingSelectionTask_Trace_GetTraceLength, TargetingHandle) == 0x000000, "Member 'TargetingSelectionTask_Trace_GetTraceLength::TargetingHandle' has a wrong offset!");
static_assert(offsetof(TargetingSelectionTask_Trace_GetTraceLength, ReturnValue) == 0x000004, "Member 'TargetingSelectionTask_Trace_GetTraceLength::ReturnValue' has a wrong offset!");

// Function TargetingSystem.TargetingSelectionTask_AOE.GetSourceLocation
// 0x0020 (0x0020 - 0x0000)
struct TargetingSelectionTask_AOE_GetSourceLocation final
{
public:
	struct FTargetingRequestHandle                TargetingHandle;                                   // 0x0000(0x0004)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TargetingSelectionTask_AOE_GetSourceLocation) == 0x000008, "Wrong alignment on TargetingSelectionTask_AOE_GetSourceLocation");
static_assert(sizeof(TargetingSelectionTask_AOE_GetSourceLocation) == 0x000020, "Wrong size on TargetingSelectionTask_AOE_GetSourceLocation");
static_assert(offsetof(TargetingSelectionTask_AOE_GetSourceLocation, TargetingHandle) == 0x000000, "Member 'TargetingSelectionTask_AOE_GetSourceLocation::TargetingHandle' has a wrong offset!");
static_assert(offsetof(TargetingSelectionTask_AOE_GetSourceLocation, ReturnValue) == 0x000008, "Member 'TargetingSelectionTask_AOE_GetSourceLocation::ReturnValue' has a wrong offset!");

// Function TargetingSystem.TargetingSelectionTask_AOE.GetSourceOffset
// 0x0020 (0x0020 - 0x0000)
struct TargetingSelectionTask_AOE_GetSourceOffset final
{
public:
	struct FTargetingRequestHandle                TargetingHandle;                                   // 0x0000(0x0004)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TargetingSelectionTask_AOE_GetSourceOffset) == 0x000008, "Wrong alignment on TargetingSelectionTask_AOE_GetSourceOffset");
static_assert(sizeof(TargetingSelectionTask_AOE_GetSourceOffset) == 0x000020, "Wrong size on TargetingSelectionTask_AOE_GetSourceOffset");
static_assert(offsetof(TargetingSelectionTask_AOE_GetSourceOffset, TargetingHandle) == 0x000000, "Member 'TargetingSelectionTask_AOE_GetSourceOffset::TargetingHandle' has a wrong offset!");
static_assert(offsetof(TargetingSelectionTask_AOE_GetSourceOffset, ReturnValue) == 0x000008, "Member 'TargetingSelectionTask_AOE_GetSourceOffset::ReturnValue' has a wrong offset!");

}

