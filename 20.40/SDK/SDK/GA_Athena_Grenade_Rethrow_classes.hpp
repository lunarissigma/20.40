﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Grenade_Rethrow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Athena_Grenade_WithTrajectory_Deprecated_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C
// 0x0018 (0x0EA0 - 0x0E88)
class UGA_Athena_Grenade_Rethrow_C final : public UGA_Athena_Grenade_WithTrajectory_Deprecated_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Athena_Grenade_Rethrow_C;        // 0x0E88(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortProjectileBase*                    Projectile;                                        // 0x0E90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TossDelay;                                         // 0x0E98(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   HolsterId;                                         // 0x0E9C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AttachProjectile();
	void Cancelled_3B7299CC49B6C5C075996A9C8DDF315F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_3B7299CC49B6C5C075996A9C8DDF315F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void DetachProjectile();
	void ExecuteUbergraph_GA_Athena_Grenade_Rethrow(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnFinish_B295E6694DBD8B2B2478A38EA60F5624();
	void Server_SpawnProjectile(const struct FVector& Location, const struct FRotator& Direction);
	void TossGrenade();
	void Triggered_3B7299CC49B6C5C075996A9C8DDF315F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_Grenade_Rethrow_C">();
	}
	static class UGA_Athena_Grenade_Rethrow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_Grenade_Rethrow_C>();
	}
};
static_assert(alignof(UGA_Athena_Grenade_Rethrow_C) == 0x000008, "Wrong alignment on UGA_Athena_Grenade_Rethrow_C");
static_assert(sizeof(UGA_Athena_Grenade_Rethrow_C) == 0x000EA0, "Wrong size on UGA_Athena_Grenade_Rethrow_C");
static_assert(offsetof(UGA_Athena_Grenade_Rethrow_C, UberGraphFrame_GA_Athena_Grenade_Rethrow_C) == 0x000E88, "Member 'UGA_Athena_Grenade_Rethrow_C::UberGraphFrame_GA_Athena_Grenade_Rethrow_C' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_Rethrow_C, Projectile) == 0x000E90, "Member 'UGA_Athena_Grenade_Rethrow_C::Projectile' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_Rethrow_C, TossDelay) == 0x000E98, "Member 'UGA_Athena_Grenade_Rethrow_C::TossDelay' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_Rethrow_C, HolsterId) == 0x000E9C, "Member 'UGA_Athena_Grenade_Rethrow_C::HolsterId' has a wrong offset!");

}

