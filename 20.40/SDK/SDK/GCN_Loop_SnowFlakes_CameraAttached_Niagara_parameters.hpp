﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Loop_SnowFlakes_CameraAttached_Niagara

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GCN_Loop_SnowFlakes_CameraAttached_Niagara.GCN_Loop_SnowFlakes_CameraAttached_Niagara_C.ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara
// 0x0348 (0x0348 - 0x0000)
struct GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_MyTarget;                             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters;                           // 0x0010(0x00D0)(ConstParm, ContainsInstancedReference)
	TArray<class UNiagaraComponent*>              K2Node_Event_ParticleComponents;                   // 0x00E0(0x0010)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;                      // 0x00F0(0x0010)(ConstParm, ReferenceParm, ContainsInstancedReference)
	class UMatineeCameraShake*                    K2Node_Event_BurstCameraShakeInstance;             // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;                   // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0110(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11C[0x4];                                      // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_MyTarget_2;                           // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters_2;                         // 0x0128(0x00D0)(ConstParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents_2;                 // 0x01F8(0x0010)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_2;                    // 0x0208(0x0010)(ConstParm, ReferenceParm, ContainsInstancedReference)
	class UMatineeCameraShake*                    K2Node_Event_BurstCameraShakeInstance_1;           // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            K2Node_Event_BurstDecalInstance_1;                 // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0228(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x023A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActive_ReturnValue;                     // 0x023B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23C[0x4];                                      // 0x023C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_MyTarget_1;                           // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters_1;                         // 0x0248(0x00D0)(ConstParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents_1;                 // 0x0318(0x0010)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_1;                    // 0x0328(0x0010)(ConstParm, ReferenceParm, ContainsInstancedReference)
	class UNiagaraSystem*                         CallFunc_GetAsset_ReturnValue;                     // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNiagaraEffectEnabled_ReturnValue;       // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara) == 0x000008, "Wrong alignment on GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara");
static_assert(sizeof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara) == 0x000348, "Wrong size on GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, EntryPoint) == 0x000000, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, K2Node_Event_MyTarget) == 0x000008, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, K2Node_Event_Parameters) == 0x000010, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, K2Node_Event_ParticleComponents) == 0x0000E0, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, K2Node_Event_AudioComponents) == 0x0000F0, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, K2Node_Event_BurstCameraShakeInstance) == 0x000100, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, K2Node_Event_BurstDecalInstance) == 0x000108, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, K2Node_CreateDelegate_OutputDelegate) == 0x000110, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, K2Node_Event_MyTarget_2) == 0x000120, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::K2Node_Event_MyTarget_2' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, K2Node_Event_Parameters_2) == 0x000128, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::K2Node_Event_Parameters_2' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, K2Node_Event_ParticleComponents_2) == 0x0001F8, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::K2Node_Event_ParticleComponents_2' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, K2Node_Event_AudioComponents_2) == 0x000208, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::K2Node_Event_AudioComponents_2' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, K2Node_Event_BurstCameraShakeInstance_1) == 0x000218, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::K2Node_Event_BurstCameraShakeInstance_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, K2Node_Event_BurstDecalInstance_1) == 0x000220, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::K2Node_Event_BurstDecalInstance_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000228, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000230, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, K2Node_DynamicCast_bSuccess) == 0x000238, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, CallFunc_IsLocallyControlled_ReturnValue) == 0x000239, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, CallFunc_K2_AttachToComponent_ReturnValue) == 0x00023A, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, CallFunc_IsActive_ReturnValue) == 0x00023B, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::CallFunc_IsActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, K2Node_Event_MyTarget_1) == 0x000240, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::K2Node_Event_MyTarget_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, K2Node_Event_Parameters_1) == 0x000248, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::K2Node_Event_Parameters_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, K2Node_Event_ParticleComponents_1) == 0x000318, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::K2Node_Event_ParticleComponents_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, K2Node_Event_AudioComponents_1) == 0x000328, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::K2Node_Event_AudioComponents_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, CallFunc_GetAsset_ReturnValue) == 0x000338, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::CallFunc_GetAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara, CallFunc_IsNiagaraEffectEnabled_ReturnValue) == 0x000340, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara::CallFunc_IsNiagaraEffectEnabled_ReturnValue' has a wrong offset!");

// Function GCN_Loop_SnowFlakes_CameraAttached_Niagara.GCN_Loop_SnowFlakes_CameraAttached_Niagara_C.OnLoopingStart
// 0x00F8 (0x00F8 - 0x0000)
struct GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnLoopingStart final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00D8(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00E8(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnLoopingStart) == 0x000008, "Wrong alignment on GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnLoopingStart");
static_assert(sizeof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnLoopingStart) == 0x0000F8, "Wrong size on GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnLoopingStart");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnLoopingStart, MyTarget) == 0x000000, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnLoopingStart::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnLoopingStart, Parameters) == 0x000008, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnLoopingStart::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnLoopingStart, ParticleComponents) == 0x0000D8, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnLoopingStart::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnLoopingStart, AudioComponents) == 0x0000E8, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnLoopingStart::AudioComponents' has a wrong offset!");

// Function GCN_Loop_SnowFlakes_CameraAttached_Niagara.GCN_Loop_SnowFlakes_CameraAttached_Niagara_C.OnRemoval
// 0x0108 (0x0108 - 0x0000)
struct GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemoval final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00D8(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00E8(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class UMatineeCameraShake*                    BurstCameraShakeInstance;                          // 0x00F8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            BurstDecalInstance;                                // 0x0100(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemoval) == 0x000008, "Wrong alignment on GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemoval");
static_assert(sizeof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemoval) == 0x000108, "Wrong size on GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemoval");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemoval, MyTarget) == 0x000000, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemoval::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemoval, Parameters) == 0x000008, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemoval::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemoval, ParticleComponents) == 0x0000D8, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemoval::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemoval, AudioComponents) == 0x0000E8, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemoval::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemoval, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemoval::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemoval, BurstDecalInstance) == 0x000100, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemoval::BurstDecalInstance' has a wrong offset!");

// Function GCN_Loop_SnowFlakes_CameraAttached_Niagara.GCN_Loop_SnowFlakes_CameraAttached_Niagara_C.OnRemovalNiagara
// 0x0108 (0x0108 - 0x0000)
struct GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemovalNiagara final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UNiagaraComponent*>              ParticleComponents;                                // 0x00D8(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00E8(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class UMatineeCameraShake*                    BurstCameraShakeInstance;                          // 0x00F8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            BurstDecalInstance;                                // 0x0100(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemovalNiagara) == 0x000008, "Wrong alignment on GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemovalNiagara");
static_assert(sizeof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemovalNiagara) == 0x000108, "Wrong size on GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemovalNiagara");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemovalNiagara, MyTarget) == 0x000000, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemovalNiagara::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemovalNiagara, Parameters) == 0x000008, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemovalNiagara::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemovalNiagara, ParticleComponents) == 0x0000D8, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemovalNiagara::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemovalNiagara, AudioComponents) == 0x0000E8, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemovalNiagara::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemovalNiagara, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemovalNiagara::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemovalNiagara, BurstDecalInstance) == 0x000100, "Member 'GCN_Loop_SnowFlakes_CameraAttached_Niagara_C_OnRemovalNiagara::BurstDecalInstance' has a wrong offset!");

}

