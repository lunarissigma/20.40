﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Ostrich_MissileLauncher

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Ostrich_MissileLauncher.GA_Ostrich_MissileLauncher_C
// 0x0008 (0x0AC0 - 0x0AB8)
class UGA_Ostrich_MissileLauncher_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AB8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_Ostrich_MissileLauncher(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Ostrich_MissileLauncher_C">();
	}
	static class UGA_Ostrich_MissileLauncher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Ostrich_MissileLauncher_C>();
	}
};
static_assert(alignof(UGA_Ostrich_MissileLauncher_C) == 0x000008, "Wrong alignment on UGA_Ostrich_MissileLauncher_C");
static_assert(sizeof(UGA_Ostrich_MissileLauncher_C) == 0x000AC0, "Wrong size on UGA_Ostrich_MissileLauncher_C");
static_assert(offsetof(UGA_Ostrich_MissileLauncher_C, UberGraphFrame) == 0x000AB8, "Member 'UGA_Ostrich_MissileLauncher_C::UberGraphFrame' has a wrong offset!");

}

