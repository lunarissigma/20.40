﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PodScreenDisplay

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PodScreenDisplay.BP_PodScreenDisplay_C
// 0x0008 (0x0278 - 0x0270)
class ABP_PodScreenDisplay_C final : public AActor
{
public:
	class UPostProcessComponent*                  PostProcess;                                       // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PodScreenDisplay_C">();
	}
	static class ABP_PodScreenDisplay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PodScreenDisplay_C>();
	}
};
static_assert(alignof(ABP_PodScreenDisplay_C) == 0x000008, "Wrong alignment on ABP_PodScreenDisplay_C");
static_assert(sizeof(ABP_PodScreenDisplay_C) == 0x000278, "Wrong size on ABP_PodScreenDisplay_C");
static_assert(offsetof(ABP_PodScreenDisplay_C, PostProcess) == 0x000270, "Member 'ABP_PodScreenDisplay_C::PostProcess' has a wrong offset!");

}

