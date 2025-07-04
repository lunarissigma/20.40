﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FrontendCamera_VaultRotator

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C
// 0x0020 (0x09B0 - 0x0990)
class AFrontendCamera_VaultRotator_C final : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0990(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                       LoginCamera_0;                                     // 0x0998(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AVaultRotator_C*                        ActiveVaultRotator;                                // 0x09A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetVaultRotatorLighting(class FName ItemRotatorTag);
	void ExecuteUbergraph_FrontendCamera_VaultRotator(int32 EntryPoint);
	void BP_OnDeactivated(class AFortPlayerController* PlayerController);
	void BP_OnActivated(class AFortPlayerController* PlayerController);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FrontendCamera_VaultRotator_C">();
	}
	static class AFrontendCamera_VaultRotator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFrontendCamera_VaultRotator_C>();
	}
};
static_assert(alignof(AFrontendCamera_VaultRotator_C) == 0x000010, "Wrong alignment on AFrontendCamera_VaultRotator_C");
static_assert(sizeof(AFrontendCamera_VaultRotator_C) == 0x0009B0, "Wrong size on AFrontendCamera_VaultRotator_C");
static_assert(offsetof(AFrontendCamera_VaultRotator_C, UberGraphFrame) == 0x000990, "Member 'AFrontendCamera_VaultRotator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFrontendCamera_VaultRotator_C, LoginCamera_0) == 0x000998, "Member 'AFrontendCamera_VaultRotator_C::LoginCamera_0' has a wrong offset!");
static_assert(offsetof(AFrontendCamera_VaultRotator_C, ActiveVaultRotator) == 0x0009A0, "Member 'AFrontendCamera_VaultRotator_C::ActiveVaultRotator' has a wrong offset!");

}

