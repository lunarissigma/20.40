﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DefaultPlayer_Death

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "GAB_GenericDeath_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C
// 0x0010 (0x0CA0 - 0x0C90)
class UGA_DefaultPlayer_Death_C final : public UGAB_GenericDeath_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_DefaultPlayer_Death_C;           // 0x0C90(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                           FadeCapsuleStWCue;                                 // 0x0C98(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           FadeCapsuleAthenaCue;                              // 0x0C9C(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_DefaultPlayer_Death(int32 EntryPoint);
	void PickDeathMontageSection();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_DefaultPlayer_Death_C">();
	}
	static class UGA_DefaultPlayer_Death_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_DefaultPlayer_Death_C>();
	}
};
static_assert(alignof(UGA_DefaultPlayer_Death_C) == 0x000008, "Wrong alignment on UGA_DefaultPlayer_Death_C");
static_assert(sizeof(UGA_DefaultPlayer_Death_C) == 0x000CA0, "Wrong size on UGA_DefaultPlayer_Death_C");
static_assert(offsetof(UGA_DefaultPlayer_Death_C, UberGraphFrame_GA_DefaultPlayer_Death_C) == 0x000C90, "Member 'UGA_DefaultPlayer_Death_C::UberGraphFrame_GA_DefaultPlayer_Death_C' has a wrong offset!");
static_assert(offsetof(UGA_DefaultPlayer_Death_C, FadeCapsuleStWCue) == 0x000C98, "Member 'UGA_DefaultPlayer_Death_C::FadeCapsuleStWCue' has a wrong offset!");
static_assert(offsetof(UGA_DefaultPlayer_Death_C, FadeCapsuleAthenaCue) == 0x000C9C, "Member 'UGA_DefaultPlayer_Death_C::FadeCapsuleAthenaCue' has a wrong offset!");

}

