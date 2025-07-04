﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Interrogate_GC

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Interrogate_GC.GA_Interrogate_GC_C
// 0x0010 (0x0AC8 - 0x0AB8)
class UGA_Interrogate_GC_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AB8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                           Cue;                                               // 0x0AC0(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Interrogate_GC(int32 EntryPoint);
	void FailedToActivatePassiveAbility();
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Interrogate_GC_C">();
	}
	static class UGA_Interrogate_GC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Interrogate_GC_C>();
	}
};
static_assert(alignof(UGA_Interrogate_GC_C) == 0x000008, "Wrong alignment on UGA_Interrogate_GC_C");
static_assert(sizeof(UGA_Interrogate_GC_C) == 0x000AC8, "Wrong size on UGA_Interrogate_GC_C");
static_assert(offsetof(UGA_Interrogate_GC_C, UberGraphFrame) == 0x000AB8, "Member 'UGA_Interrogate_GC_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Interrogate_GC_C, Cue) == 0x000AC0, "Member 'UGA_Interrogate_GC_C::Cue' has a wrong offset!");

}

