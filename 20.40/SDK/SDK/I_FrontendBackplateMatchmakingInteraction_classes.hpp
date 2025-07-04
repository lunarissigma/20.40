﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: I_FrontendBackplateMatchmakingInteraction

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass I_FrontendBackplateMatchmakingInteraction.I_FrontendBackplateMatchmakingInteraction_C
// 0x0000 (0x0000 - 0x0000)
class II_FrontendBackplateMatchmakingInteraction_C final
{
public:
	void EnteringMatchmaking();
	void HasMatcmakingInteraction(bool* HasInteraction);
	void MatchmakingEnded(bool bWasSuccess);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"I_FrontendBackplateMatchmakingInteraction_C">();
	}
	static class II_FrontendBackplateMatchmakingInteraction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<II_FrontendBackplateMatchmakingInteraction_C>();
	}

	class UObject* AsUObject()
	{
		return reinterpret_cast<UObject*>(this);
	}
	const class UObject* AsUObject() const
	{
		return reinterpret_cast<const UObject*>(this);
	}
};
static_assert(alignof(II_FrontendBackplateMatchmakingInteraction_C) == 0x000001, "Wrong alignment on II_FrontendBackplateMatchmakingInteraction_C");
static_assert(sizeof(II_FrontendBackplateMatchmakingInteraction_C) == 0x000001, "Wrong size on II_FrontendBackplateMatchmakingInteraction_C");

}

