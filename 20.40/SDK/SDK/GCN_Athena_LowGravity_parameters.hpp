﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Athena_LowGravity

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.Activated
// 0x0048 (0x0048 - 0x0000)
struct GCN_Athena_LowGravity_C_Activated final
{
public:
	class AActor*                                 PlayerPawn;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;                    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_EvaluateCurveTableRow_OutXY;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeSeconds_ReturnValue;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult_1;        // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26[0x2];                                       // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_EvaluateCurveTableRow_OutXY_1;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0040(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Athena_LowGravity_C_Activated) == 0x000008, "Wrong alignment on GCN_Athena_LowGravity_C_Activated");
static_assert(sizeof(GCN_Athena_LowGravity_C_Activated) == 0x000048, "Wrong size on GCN_Athena_LowGravity_C_Activated");
static_assert(offsetof(GCN_Athena_LowGravity_C_Activated, PlayerPawn) == 0x000000, "Member 'GCN_Athena_LowGravity_C_Activated::PlayerPawn' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_Activated, K2Node_DynamicCast_AsFort_Pawn) == 0x000008, "Member 'GCN_Athena_LowGravity_C_Activated::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_Activated, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'GCN_Athena_LowGravity_C_Activated::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_Activated, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000014, "Member 'GCN_Athena_LowGravity_C_Activated::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_Activated, CallFunc_EvaluateCurveTableRow_OutResult) == 0x000018, "Member 'GCN_Athena_LowGravity_C_Activated::CallFunc_EvaluateCurveTableRow_OutResult' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_Activated, CallFunc_EvaluateCurveTableRow_OutXY) == 0x00001C, "Member 'GCN_Athena_LowGravity_C_Activated::CallFunc_EvaluateCurveTableRow_OutXY' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_Activated, CallFunc_GetTimeSeconds_ReturnValue) == 0x000020, "Member 'GCN_Athena_LowGravity_C_Activated::CallFunc_GetTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_Activated, K2Node_SwitchEnum_CmpSuccess) == 0x000024, "Member 'GCN_Athena_LowGravity_C_Activated::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_Activated, CallFunc_EvaluateCurveTableRow_OutResult_1) == 0x000025, "Member 'GCN_Athena_LowGravity_C_Activated::CallFunc_EvaluateCurveTableRow_OutResult_1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_Activated, CallFunc_EvaluateCurveTableRow_OutXY_1) == 0x000028, "Member 'GCN_Athena_LowGravity_C_Activated::CallFunc_EvaluateCurveTableRow_OutXY_1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_Activated, K2Node_SwitchEnum_CmpSuccess_1) == 0x00002C, "Member 'GCN_Athena_LowGravity_C_Activated::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_Activated, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'GCN_Athena_LowGravity_C_Activated::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_Activated, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000040, "Member 'GCN_Athena_LowGravity_C_Activated::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ExecuteUbergraph_GCN_Athena_LowGravity
// 0x0100 (0x0100 - 0x0000)
struct GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_MyTarget;                             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGameplayCueEvent                             K2Node_Event_EventType;                            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 K2Node_Event_Parameters;                           // 0x0028(0x00D0)(ConstParm, ContainsInstancedReference)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity) == 0x000008, "Wrong alignment on GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity");
static_assert(sizeof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity) == 0x000100, "Wrong size on GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, EntryPoint) == 0x000000, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000008, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000010, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, K2Node_Event_MyTarget) == 0x000018, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, K2Node_Event_EventType) == 0x000020, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::K2Node_Event_EventType' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, K2Node_Event_Parameters) == 0x000028, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, K2Node_SwitchEnum_CmpSuccess) == 0x0000F8, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.K2_HandleGameplayCue
// 0x00E0 (0x00E0 - 0x0000)
struct GCN_Athena_LowGravity_C_K2_HandleGameplayCue final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGameplayCueEvent                             EventType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 Parameters;                                        // 0x0010(0x00D0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(GCN_Athena_LowGravity_C_K2_HandleGameplayCue) == 0x000008, "Wrong alignment on GCN_Athena_LowGravity_C_K2_HandleGameplayCue");
static_assert(sizeof(GCN_Athena_LowGravity_C_K2_HandleGameplayCue) == 0x0000E0, "Wrong size on GCN_Athena_LowGravity_C_K2_HandleGameplayCue");
static_assert(offsetof(GCN_Athena_LowGravity_C_K2_HandleGameplayCue, MyTarget) == 0x000000, "Member 'GCN_Athena_LowGravity_C_K2_HandleGameplayCue::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_K2_HandleGameplayCue, EventType) == 0x000008, "Member 'GCN_Athena_LowGravity_C_K2_HandleGameplayCue::EventType' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_K2_HandleGameplayCue, Parameters) == 0x000010, "Member 'GCN_Athena_LowGravity_C_K2_HandleGameplayCue::Parameters' has a wrong offset!");

// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.OnRemove
// 0x00E0 (0x00E0 - 0x0000)
struct GCN_Athena_LowGravity_C_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00D8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Athena_LowGravity_C_OnRemove) == 0x000008, "Wrong alignment on GCN_Athena_LowGravity_C_OnRemove");
static_assert(sizeof(GCN_Athena_LowGravity_C_OnRemove) == 0x0000E0, "Wrong size on GCN_Athena_LowGravity_C_OnRemove");
static_assert(offsetof(GCN_Athena_LowGravity_C_OnRemove, MyTarget) == 0x000000, "Member 'GCN_Athena_LowGravity_C_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_OnRemove, Parameters) == 0x000008, "Member 'GCN_Athena_LowGravity_C_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_OnRemove, ReturnValue) == 0x0000D8, "Member 'GCN_Athena_LowGravity_C_OnRemove::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_OnRemove, CallFunc_IsValid_ReturnValue) == 0x0000D9, "Member 'GCN_Athena_LowGravity_C_OnRemove::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.WhileActive
// 0x00E8 (0x00E8 - 0x0000)
struct GCN_Athena_LowGravity_C_WhileActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00D8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Athena_LowGravity_C_WhileActive) == 0x000008, "Wrong alignment on GCN_Athena_LowGravity_C_WhileActive");
static_assert(sizeof(GCN_Athena_LowGravity_C_WhileActive) == 0x0000E8, "Wrong size on GCN_Athena_LowGravity_C_WhileActive");
static_assert(offsetof(GCN_Athena_LowGravity_C_WhileActive, MyTarget) == 0x000000, "Member 'GCN_Athena_LowGravity_C_WhileActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_WhileActive, Parameters) == 0x000008, "Member 'GCN_Athena_LowGravity_C_WhileActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_WhileActive, ReturnValue) == 0x0000D8, "Member 'GCN_Athena_LowGravity_C_WhileActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_WhileActive, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x0000E0, "Member 'GCN_Athena_LowGravity_C_WhileActive::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");

}

