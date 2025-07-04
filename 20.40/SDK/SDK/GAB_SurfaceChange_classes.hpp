﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_SurfaceChange

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "PhysicsCore_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_SurfaceChange.GAB_SurfaceChange_C
// 0x0228 (0x0CE0 - 0x0AB8)
class UGAB_SurfaceChange_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AB8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Debug;                                             // 0x0AC0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC1[0x7];                                      // 0x0AC1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         RemovalDelay;                                      // 0x0AC8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         IcySurfacesEnabled;                                // 0x0AF0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  HasIce;                                            // 0x0B18(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_SurfaceChange_Ice;                              // 0x0B38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_SurfaceChange_Snow;                             // 0x0B40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_SurfaceChange_Lava;                             // 0x0B48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawnAthena*                  PlayerPawn;                                        // 0x0B50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  IceTags;                                           // 0x0B58(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  LavaTags;                                          // 0x0B78(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  SnowTags;                                          // 0x0B98(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  SandTags;                                          // 0x0BB8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         LavaBounceMultiplier;                              // 0x0BD8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RandomAngleOffset;                                 // 0x0BDC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         RandomConeAngle;                                   // 0x0BE0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         FacingAngleVelocityComponent;                      // 0x0C08(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         BaseVerticalBounceVelocity;                        // 0x0C30(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         BaseLateralBounceVelocity;                         // 0x0C58(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         MaxBounceMultiplier;                               // 0x0C80(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         BounceMultiplierStepAmount;                        // 0x0CA8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRandomStream                          RandomAngleStream;                                 // 0x0CD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	struct FGameplayTag                           LavaBounceCue;                                     // 0x0CD8(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           EventTag_SandUnburrow;                             // 0x0CDC(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAB_SurfaceChange(int32 EntryPoint);
	void HotfixableGEApplication(const struct FScalableFloat& Input, class UClass* GameplayEffectAppliedOnTrue, class UClass* GameplayEffectAppliedOnFalse);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void LavaBounce();
	void MovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void OnRep_ReplicatedRandomAngle();
	void SurfaceCleanup(bool AddLingeringEffects, EPhysicalSurface SurfaceType);
	void SurfaceCleanupSpecial();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_SurfaceChange_C">();
	}
	static class UGAB_SurfaceChange_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_SurfaceChange_C>();
	}
};
static_assert(alignof(UGAB_SurfaceChange_C) == 0x000008, "Wrong alignment on UGAB_SurfaceChange_C");
static_assert(sizeof(UGAB_SurfaceChange_C) == 0x000CE0, "Wrong size on UGAB_SurfaceChange_C");
static_assert(offsetof(UGAB_SurfaceChange_C, UberGraphFrame) == 0x000AB8, "Member 'UGAB_SurfaceChange_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, Debug) == 0x000AC0, "Member 'UGAB_SurfaceChange_C::Debug' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, RemovalDelay) == 0x000AC8, "Member 'UGAB_SurfaceChange_C::RemovalDelay' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, IcySurfacesEnabled) == 0x000AF0, "Member 'UGAB_SurfaceChange_C::IcySurfacesEnabled' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, HasIce) == 0x000B18, "Member 'UGAB_SurfaceChange_C::HasIce' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, GE_SurfaceChange_Ice) == 0x000B38, "Member 'UGAB_SurfaceChange_C::GE_SurfaceChange_Ice' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, GE_SurfaceChange_Snow) == 0x000B40, "Member 'UGAB_SurfaceChange_C::GE_SurfaceChange_Snow' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, GE_SurfaceChange_Lava) == 0x000B48, "Member 'UGAB_SurfaceChange_C::GE_SurfaceChange_Lava' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, PlayerPawn) == 0x000B50, "Member 'UGAB_SurfaceChange_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, IceTags) == 0x000B58, "Member 'UGAB_SurfaceChange_C::IceTags' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, LavaTags) == 0x000B78, "Member 'UGAB_SurfaceChange_C::LavaTags' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, SnowTags) == 0x000B98, "Member 'UGAB_SurfaceChange_C::SnowTags' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, SandTags) == 0x000BB8, "Member 'UGAB_SurfaceChange_C::SandTags' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, LavaBounceMultiplier) == 0x000BD8, "Member 'UGAB_SurfaceChange_C::LavaBounceMultiplier' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, RandomAngleOffset) == 0x000BDC, "Member 'UGAB_SurfaceChange_C::RandomAngleOffset' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, RandomConeAngle) == 0x000BE0, "Member 'UGAB_SurfaceChange_C::RandomConeAngle' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, FacingAngleVelocityComponent) == 0x000C08, "Member 'UGAB_SurfaceChange_C::FacingAngleVelocityComponent' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, BaseVerticalBounceVelocity) == 0x000C30, "Member 'UGAB_SurfaceChange_C::BaseVerticalBounceVelocity' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, BaseLateralBounceVelocity) == 0x000C58, "Member 'UGAB_SurfaceChange_C::BaseLateralBounceVelocity' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, MaxBounceMultiplier) == 0x000C80, "Member 'UGAB_SurfaceChange_C::MaxBounceMultiplier' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, BounceMultiplierStepAmount) == 0x000CA8, "Member 'UGAB_SurfaceChange_C::BounceMultiplierStepAmount' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, RandomAngleStream) == 0x000CD0, "Member 'UGAB_SurfaceChange_C::RandomAngleStream' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, LavaBounceCue) == 0x000CD8, "Member 'UGAB_SurfaceChange_C::LavaBounceCue' has a wrong offset!");
static_assert(offsetof(UGAB_SurfaceChange_C, EventTag_SandUnburrow) == 0x000CDC, "Member 'UGAB_SurfaceChange_C::EventTag_SandUnburrow' has a wrong offset!");

}

