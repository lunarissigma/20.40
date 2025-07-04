﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Loop_PlayerWorldPFX_Persistent

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCN_Loop_PlayerWorldPFX_Persistent.GCN_Loop_PlayerWorldPFX_Persistent_C.ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent
// 0x0438 (0x0438 - 0x0000)
struct GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerCameraSpectator*             K2Node_DynamicCast_AsFort_Player_Camera_Spectator; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_MyTarget_3;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters_3;                         // 0x0038(0x00D0)(ConstParm, ContainsInstancedReference)
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents_3;                 // 0x0108(0x0010)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_3;                    // 0x0118(0x0010)(ConstParm, ReferenceParm, ContainsInstancedReference)
	class AActor*                                 K2Node_Event_MyTarget_2;                           // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters_2;                         // 0x0130(0x00D0)(ConstParm, ContainsInstancedReference)
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents_2;                 // 0x0200(0x0010)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_2;                    // 0x0210(0x0010)(ConstParm, ReferenceParm, ContainsInstancedReference)
	class UMatineeCameraShake*                    K2Node_Event_BurstCameraShakeInstance_1;           // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            K2Node_Event_BurstDecalInstance_1;                 // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_MyTarget_1;                           // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters_1;                         // 0x0238(0x00D0)(ConstParm, ContainsInstancedReference)
	TArray<class UNiagaraComponent*>              K2Node_Event_ParticleComponents_1;                 // 0x0308(0x0010)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_1;                    // 0x0318(0x0010)(ConstParm, ReferenceParm, ContainsInstancedReference)
	class AActor*                                 K2Node_Event_MyTarget;                             // 0x0328(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters;                           // 0x0330(0x00D0)(ConstParm, ContainsInstancedReference)
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents;                   // 0x0400(0x0010)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;                      // 0x0410(0x0010)(ConstParm, ReferenceParm, ContainsInstancedReference)
	class UMatineeCameraShake*                    K2Node_Event_BurstCameraShakeInstance;             // 0x0420(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;                   // 0x0428(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue_1;       // 0x0430(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent) == 0x000008, "Wrong alignment on GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent");
static_assert(sizeof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent) == 0x000438, "Wrong size on GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent, EntryPoint) == 0x000000, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000008, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000010, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent, K2Node_DynamicCast_AsFort_Player_Camera_Spectator) == 0x000020, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent::K2Node_DynamicCast_AsFort_Player_Camera_Spectator' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000029, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent, CallFunc_IsLocallyControlled_ReturnValue) == 0x00002A, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent, CallFunc_BooleanOR_ReturnValue) == 0x00002B, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent, K2Node_Event_MyTarget_3) == 0x000030, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent::K2Node_Event_MyTarget_3' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent, K2Node_Event_Parameters_3) == 0x000038, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent::K2Node_Event_Parameters_3' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent, K2Node_Event_ParticleComponents_3) == 0x000108, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent::K2Node_Event_ParticleComponents_3' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent, K2Node_Event_AudioComponents_3) == 0x000118, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent::K2Node_Event_AudioComponents_3' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent, K2Node_Event_MyTarget_2) == 0x000128, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent::K2Node_Event_MyTarget_2' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent, K2Node_Event_Parameters_2) == 0x000130, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent::K2Node_Event_Parameters_2' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent, K2Node_Event_ParticleComponents_2) == 0x000200, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent::K2Node_Event_ParticleComponents_2' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent, K2Node_Event_AudioComponents_2) == 0x000210, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent::K2Node_Event_AudioComponents_2' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent, K2Node_Event_BurstCameraShakeInstance_1) == 0x000220, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent::K2Node_Event_BurstCameraShakeInstance_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent, K2Node_Event_BurstDecalInstance_1) == 0x000228, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent::K2Node_Event_BurstDecalInstance_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent, K2Node_Event_MyTarget_1) == 0x000230, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent::K2Node_Event_MyTarget_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent, K2Node_Event_Parameters_1) == 0x000238, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent::K2Node_Event_Parameters_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent, K2Node_Event_ParticleComponents_1) == 0x000308, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent::K2Node_Event_ParticleComponents_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent, K2Node_Event_AudioComponents_1) == 0x000318, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent::K2Node_Event_AudioComponents_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent, K2Node_Event_MyTarget) == 0x000328, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent, K2Node_Event_Parameters) == 0x000330, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent, K2Node_Event_ParticleComponents) == 0x000400, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent, K2Node_Event_AudioComponents) == 0x000410, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent, K2Node_Event_BurstCameraShakeInstance) == 0x000420, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent, K2Node_Event_BurstDecalInstance) == 0x000428, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent, CallFunc_K2_AttachToComponent_ReturnValue_1) == 0x000430, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent::CallFunc_K2_AttachToComponent_ReturnValue_1' has a wrong offset!");

// Function GCN_Loop_PlayerWorldPFX_Persistent.GCN_Loop_PlayerWorldPFX_Persistent_C.OnApplicationGeneric
// 0x0108 (0x0108 - 0x0000)
struct GCN_Loop_PlayerWorldPFX_Persistent_C_OnApplicationGeneric final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UFXSystemComponent*>             ParticleComponents;                                // 0x00D8(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00E8(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class UMatineeCameraShake*                    BurstCameraShakeInstance;                          // 0x00F8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            BurstDecalInstance;                                // 0x0100(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Loop_PlayerWorldPFX_Persistent_C_OnApplicationGeneric) == 0x000008, "Wrong alignment on GCN_Loop_PlayerWorldPFX_Persistent_C_OnApplicationGeneric");
static_assert(sizeof(GCN_Loop_PlayerWorldPFX_Persistent_C_OnApplicationGeneric) == 0x000108, "Wrong size on GCN_Loop_PlayerWorldPFX_Persistent_C_OnApplicationGeneric");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_OnApplicationGeneric, MyTarget) == 0x000000, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_OnApplicationGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_OnApplicationGeneric, Parameters) == 0x000008, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_OnApplicationGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_OnApplicationGeneric, ParticleComponents) == 0x0000D8, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_OnApplicationGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_OnApplicationGeneric, AudioComponents) == 0x0000E8, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_OnApplicationGeneric::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_OnApplicationGeneric, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_OnApplicationGeneric::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_OnApplicationGeneric, BurstDecalInstance) == 0x000100, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_OnApplicationGeneric::BurstDecalInstance' has a wrong offset!");

// Function GCN_Loop_PlayerWorldPFX_Persistent.GCN_Loop_PlayerWorldPFX_Persistent_C.OnLoopingStartGeneric
// 0x00F8 (0x00F8 - 0x0000)
struct GCN_Loop_PlayerWorldPFX_Persistent_C_OnLoopingStartGeneric final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UFXSystemComponent*>             ParticleComponents;                                // 0x00D8(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00E8(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(GCN_Loop_PlayerWorldPFX_Persistent_C_OnLoopingStartGeneric) == 0x000008, "Wrong alignment on GCN_Loop_PlayerWorldPFX_Persistent_C_OnLoopingStartGeneric");
static_assert(sizeof(GCN_Loop_PlayerWorldPFX_Persistent_C_OnLoopingStartGeneric) == 0x0000F8, "Wrong size on GCN_Loop_PlayerWorldPFX_Persistent_C_OnLoopingStartGeneric");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_OnLoopingStartGeneric, MyTarget) == 0x000000, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_OnLoopingStartGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_OnLoopingStartGeneric, Parameters) == 0x000008, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_OnLoopingStartGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_OnLoopingStartGeneric, ParticleComponents) == 0x0000D8, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_OnLoopingStartGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_OnLoopingStartGeneric, AudioComponents) == 0x0000E8, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_OnLoopingStartGeneric::AudioComponents' has a wrong offset!");

// Function GCN_Loop_PlayerWorldPFX_Persistent.GCN_Loop_PlayerWorldPFX_Persistent_C.OnLoopingStartNiagara
// 0x00F8 (0x00F8 - 0x0000)
struct GCN_Loop_PlayerWorldPFX_Persistent_C_OnLoopingStartNiagara final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UNiagaraComponent*>              ParticleComponents;                                // 0x00D8(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00E8(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(GCN_Loop_PlayerWorldPFX_Persistent_C_OnLoopingStartNiagara) == 0x000008, "Wrong alignment on GCN_Loop_PlayerWorldPFX_Persistent_C_OnLoopingStartNiagara");
static_assert(sizeof(GCN_Loop_PlayerWorldPFX_Persistent_C_OnLoopingStartNiagara) == 0x0000F8, "Wrong size on GCN_Loop_PlayerWorldPFX_Persistent_C_OnLoopingStartNiagara");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_OnLoopingStartNiagara, MyTarget) == 0x000000, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_OnLoopingStartNiagara::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_OnLoopingStartNiagara, Parameters) == 0x000008, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_OnLoopingStartNiagara::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_OnLoopingStartNiagara, ParticleComponents) == 0x0000D8, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_OnLoopingStartNiagara::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_OnLoopingStartNiagara, AudioComponents) == 0x0000E8, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_OnLoopingStartNiagara::AudioComponents' has a wrong offset!");

// Function GCN_Loop_PlayerWorldPFX_Persistent.GCN_Loop_PlayerWorldPFX_Persistent_C.OnRemovalGeneric
// 0x0108 (0x0108 - 0x0000)
struct GCN_Loop_PlayerWorldPFX_Persistent_C_OnRemovalGeneric final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UFXSystemComponent*>             ParticleComponents;                                // 0x00D8(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00E8(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class UMatineeCameraShake*                    BurstCameraShakeInstance;                          // 0x00F8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            BurstDecalInstance;                                // 0x0100(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Loop_PlayerWorldPFX_Persistent_C_OnRemovalGeneric) == 0x000008, "Wrong alignment on GCN_Loop_PlayerWorldPFX_Persistent_C_OnRemovalGeneric");
static_assert(sizeof(GCN_Loop_PlayerWorldPFX_Persistent_C_OnRemovalGeneric) == 0x000108, "Wrong size on GCN_Loop_PlayerWorldPFX_Persistent_C_OnRemovalGeneric");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_OnRemovalGeneric, MyTarget) == 0x000000, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_OnRemovalGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_OnRemovalGeneric, Parameters) == 0x000008, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_OnRemovalGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_OnRemovalGeneric, ParticleComponents) == 0x0000D8, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_OnRemovalGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_OnRemovalGeneric, AudioComponents) == 0x0000E8, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_OnRemovalGeneric::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_OnRemovalGeneric, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_OnRemovalGeneric::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Loop_PlayerWorldPFX_Persistent_C_OnRemovalGeneric, BurstDecalInstance) == 0x000100, "Member 'GCN_Loop_PlayerWorldPFX_Persistent_C_OnRemovalGeneric::BurstDecalInstance' has a wrong offset!");

}

