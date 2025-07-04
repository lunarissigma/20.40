﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SurfaceChange_Ice_Sliding

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_SurfaceChange_Ice_Sliding.GA_SurfaceChange_Ice_Sliding_C
// 0x0A38 (0x14F0 - 0x0AB8)
class UGA_SurfaceChange_Ice_Sliding_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AB8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FSlidingControlParams                  DefaultSlidingParams;                              // 0x0AC0(0x0518)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlidingControlParams                  IceSlidingParams;                                  // 0x0FD8(0x0518)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_SurfaceChange_Ice_Sliding(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_SurfaceChange_Ice_Sliding_C">();
	}
	static class UGA_SurfaceChange_Ice_Sliding_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_SurfaceChange_Ice_Sliding_C>();
	}
};
static_assert(alignof(UGA_SurfaceChange_Ice_Sliding_C) == 0x000008, "Wrong alignment on UGA_SurfaceChange_Ice_Sliding_C");
static_assert(sizeof(UGA_SurfaceChange_Ice_Sliding_C) == 0x0014F0, "Wrong size on UGA_SurfaceChange_Ice_Sliding_C");
static_assert(offsetof(UGA_SurfaceChange_Ice_Sliding_C, UberGraphFrame) == 0x000AB8, "Member 'UGA_SurfaceChange_Ice_Sliding_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_SurfaceChange_Ice_Sliding_C, DefaultSlidingParams) == 0x000AC0, "Member 'UGA_SurfaceChange_Ice_Sliding_C::DefaultSlidingParams' has a wrong offset!");
static_assert(offsetof(UGA_SurfaceChange_Ice_Sliding_C, IceSlidingParams) == 0x000FD8, "Member 'UGA_SurfaceChange_Ice_Sliding_C::IceSlidingParams' has a wrong offset!");

}

