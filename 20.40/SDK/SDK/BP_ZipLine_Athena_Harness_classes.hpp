﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ZipLine_Athena_Harness

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C
// 0x00F8 (0x0368 - 0x0270)
class ABP_ZipLine_Athena_Harness_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               P_Zipline_AttachedToPlayer;                        // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Zipline_Magnet;                                 // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Zipline_Pulley_SpeedLines;                       // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Zipline_Motor;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        SpawnFX;                                           // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        DestroyFX;                                         // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        CollideDestroyVFX;                                 // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SpawnSound;                                        // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             UnSpawnSound;                                      // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        AttachedPlayer;                                    // 0x02D0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          HasHitAnotherPlayer;                               // 0x02D8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D9[0x3];                                      // 0x02D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ZiplineChimeVisualUpdate;                          // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           ChimeTimer;                                        // 0x02E0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ZiplineDirection;                                  // 0x02E8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       NewVar_0;                                          // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Athena_Environmental_ZipLine_Spline_C* EnvZiplineSpline;                               // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SplineRotationUpdateSeconds;                       // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_314[0x4];                                      // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           MotorUpdateTimer;                                  // 0x0318(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AFortAthenaZipline*                     AttachedZipline;                                   // 0x0320(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          debugOutput;                                       // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsReversingMomentum;                               // 0x0329(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsTravelingUphill;                                // 0x032A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsTravelingDownhill;                              // 0x032B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GCNTag_Travel;                                     // 0x032C(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             TravelSound;                                       // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GCNTag_HighSpeed;                                  // 0x0338(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GCNTag_ZiplineBraking;                             // 0x033C(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bLoopingDownhillGCN;                               // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_341[0x3];                                      // 0x0341(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            DownhillTravelGE;                                  // 0x0344(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          UseMeshAttachment;                                 // 0x034C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34D[0x3];                                      // 0x034D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CurrentDesired_Zipline_Offset;                     // 0x0350(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Chime_Visual();
	void Cleanup_On_DownhillGCN();
	void ExecuteUbergraph_BP_ZipLine_Athena_Harness(int32 EntryPoint);
	void HandleOnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnRep_AttachedPlayer();
	void OrientMotorForZipline(class AFortAthenaZiplineBase* Zipline, const struct FVector& DesiredZiplineOffset);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void RotateToZiplineDirection();
	void Start_Travel_Audio();
	void Stop_Travel_Audio();
	void Update_Audio_and_VFXParams();
	void UpdateMotorToSpline();
	void UpdateParamsForAudioAndVFX();
	void UpdateZiplineOffsetLocation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ZipLine_Athena_Harness_C">();
	}
	static class ABP_ZipLine_Athena_Harness_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ZipLine_Athena_Harness_C>();
	}
};
static_assert(alignof(ABP_ZipLine_Athena_Harness_C) == 0x000008, "Wrong alignment on ABP_ZipLine_Athena_Harness_C");
static_assert(sizeof(ABP_ZipLine_Athena_Harness_C) == 0x000368, "Wrong size on ABP_ZipLine_Athena_Harness_C");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, UberGraphFrame) == 0x000270, "Member 'ABP_ZipLine_Athena_Harness_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, P_Zipline_AttachedToPlayer) == 0x000278, "Member 'ABP_ZipLine_Athena_Harness_C::P_Zipline_AttachedToPlayer' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, SM_Zipline_Magnet) == 0x000280, "Member 'ABP_ZipLine_Athena_Harness_C::SM_Zipline_Magnet' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, Arrow) == 0x000288, "Member 'ABP_ZipLine_Athena_Harness_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, P_Zipline_Pulley_SpeedLines) == 0x000290, "Member 'ABP_ZipLine_Athena_Harness_C::P_Zipline_Pulley_SpeedLines' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, SM_Zipline_Motor) == 0x000298, "Member 'ABP_ZipLine_Athena_Harness_C::SM_Zipline_Motor' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, Scene) == 0x0002A0, "Member 'ABP_ZipLine_Athena_Harness_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, SpawnFX) == 0x0002A8, "Member 'ABP_ZipLine_Athena_Harness_C::SpawnFX' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, DestroyFX) == 0x0002B0, "Member 'ABP_ZipLine_Athena_Harness_C::DestroyFX' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, CollideDestroyVFX) == 0x0002B8, "Member 'ABP_ZipLine_Athena_Harness_C::CollideDestroyVFX' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, SpawnSound) == 0x0002C0, "Member 'ABP_ZipLine_Athena_Harness_C::SpawnSound' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, UnSpawnSound) == 0x0002C8, "Member 'ABP_ZipLine_Athena_Harness_C::UnSpawnSound' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, AttachedPlayer) == 0x0002D0, "Member 'ABP_ZipLine_Athena_Harness_C::AttachedPlayer' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, HasHitAnotherPlayer) == 0x0002D8, "Member 'ABP_ZipLine_Athena_Harness_C::HasHitAnotherPlayer' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, ZiplineChimeVisualUpdate) == 0x0002DC, "Member 'ABP_ZipLine_Athena_Harness_C::ZiplineChimeVisualUpdate' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, ChimeTimer) == 0x0002E0, "Member 'ABP_ZipLine_Athena_Harness_C::ChimeTimer' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, ZiplineDirection) == 0x0002E8, "Member 'ABP_ZipLine_Athena_Harness_C::ZiplineDirection' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, NewVar_0) == 0x000300, "Member 'ABP_ZipLine_Athena_Harness_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, EnvZiplineSpline) == 0x000308, "Member 'ABP_ZipLine_Athena_Harness_C::EnvZiplineSpline' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, SplineRotationUpdateSeconds) == 0x000310, "Member 'ABP_ZipLine_Athena_Harness_C::SplineRotationUpdateSeconds' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, MotorUpdateTimer) == 0x000318, "Member 'ABP_ZipLine_Athena_Harness_C::MotorUpdateTimer' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, AttachedZipline) == 0x000320, "Member 'ABP_ZipLine_Athena_Harness_C::AttachedZipline' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, debugOutput) == 0x000328, "Member 'ABP_ZipLine_Athena_Harness_C::debugOutput' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, IsReversingMomentum) == 0x000329, "Member 'ABP_ZipLine_Athena_Harness_C::IsReversingMomentum' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, bIsTravelingUphill) == 0x00032A, "Member 'ABP_ZipLine_Athena_Harness_C::bIsTravelingUphill' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, bIsTravelingDownhill) == 0x00032B, "Member 'ABP_ZipLine_Athena_Harness_C::bIsTravelingDownhill' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, GCNTag_Travel) == 0x00032C, "Member 'ABP_ZipLine_Athena_Harness_C::GCNTag_Travel' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, TravelSound) == 0x000330, "Member 'ABP_ZipLine_Athena_Harness_C::TravelSound' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, GCNTag_HighSpeed) == 0x000338, "Member 'ABP_ZipLine_Athena_Harness_C::GCNTag_HighSpeed' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, GCNTag_ZiplineBraking) == 0x00033C, "Member 'ABP_ZipLine_Athena_Harness_C::GCNTag_ZiplineBraking' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, bLoopingDownhillGCN) == 0x000340, "Member 'ABP_ZipLine_Athena_Harness_C::bLoopingDownhillGCN' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, DownhillTravelGE) == 0x000344, "Member 'ABP_ZipLine_Athena_Harness_C::DownhillTravelGE' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, UseMeshAttachment) == 0x00034C, "Member 'ABP_ZipLine_Athena_Harness_C::UseMeshAttachment' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, CurrentDesired_Zipline_Offset) == 0x000350, "Member 'ABP_ZipLine_Athena_Harness_C::CurrentDesired_Zipline_Offset' has a wrong offset!");

}

