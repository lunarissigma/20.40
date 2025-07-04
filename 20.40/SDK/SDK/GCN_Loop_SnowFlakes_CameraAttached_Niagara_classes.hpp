﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Loop_SnowFlakes_CameraAttached_Niagara

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Loop_SnowFlakes_CameraAttached_Niagara.GCN_Loop_SnowFlakes_CameraAttached_Niagara_C
// 0x0030 (0x0978 - 0x0948)
class AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0948(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Snow_Niagara;                                      // 0x0950(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         LoopingCheckTime;                                  // 0x0958(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95C[0x4];                                      // 0x095C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 My_Target;                                         // 0x0960(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      ReturnValue;                                       // 0x0968(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Timer;                                             // 0x0970(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara(int32 EntryPoint);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UMatineeCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnRemovalNiagara(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UNiagaraComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UMatineeCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void SpawnNiagara();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Loop_SnowFlakes_CameraAttached_Niagara_C">();
	}
	static class AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C>();
	}
};
static_assert(alignof(AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C) == 0x000008, "Wrong alignment on AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C");
static_assert(sizeof(AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C) == 0x000978, "Wrong size on AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C");
static_assert(offsetof(AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C, UberGraphFrame) == 0x000948, "Member 'AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C, Snow_Niagara) == 0x000950, "Member 'AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C::Snow_Niagara' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C, LoopingCheckTime) == 0x000958, "Member 'AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C::LoopingCheckTime' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C, My_Target) == 0x000960, "Member 'AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C::My_Target' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C, ReturnValue) == 0x000968, "Member 'AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C::ReturnValue' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C, Timer) == 0x000970, "Member 'AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C::Timer' has a wrong offset!");

}

