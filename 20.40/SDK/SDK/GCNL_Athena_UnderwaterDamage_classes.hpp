﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Athena_UnderwaterDamage

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_Athena_UnderwaterDamage.GCNL_Athena_UnderwaterDamage_C
// 0x0028 (0x0970 - 0x0948)
class AGCNL_Athena_UnderwaterDamage_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0948(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Intensity;                                         // 0x0950(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_954[0x4];                                      // 0x0954(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             DamageTickSound;                                   // 0x0958(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundMix*                              DrownSoundMix;                                     // 0x0960(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 LocalTargetPawn;                                   // 0x0968(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCNL_Athena_UnderwaterDamage(int32 EntryPoint);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnRecurring(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UMatineeCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UMatineeCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Athena_UnderwaterDamage_C">();
	}
	static class AGCNL_Athena_UnderwaterDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Athena_UnderwaterDamage_C>();
	}
};
static_assert(alignof(AGCNL_Athena_UnderwaterDamage_C) == 0x000008, "Wrong alignment on AGCNL_Athena_UnderwaterDamage_C");
static_assert(sizeof(AGCNL_Athena_UnderwaterDamage_C) == 0x000970, "Wrong size on AGCNL_Athena_UnderwaterDamage_C");
static_assert(offsetof(AGCNL_Athena_UnderwaterDamage_C, UberGraphFrame) == 0x000948, "Member 'AGCNL_Athena_UnderwaterDamage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_UnderwaterDamage_C, Intensity) == 0x000950, "Member 'AGCNL_Athena_UnderwaterDamage_C::Intensity' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_UnderwaterDamage_C, DamageTickSound) == 0x000958, "Member 'AGCNL_Athena_UnderwaterDamage_C::DamageTickSound' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_UnderwaterDamage_C, DrownSoundMix) == 0x000960, "Member 'AGCNL_Athena_UnderwaterDamage_C::DrownSoundMix' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_UnderwaterDamage_C, LocalTargetPawn) == 0x000968, "Member 'AGCNL_Athena_UnderwaterDamage_C::LocalTargetPawn' has a wrong offset!");

}

