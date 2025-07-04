﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_HeavyRainPost

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_HeavyRainPost.B_HeavyRainPost_C
// 0x0028 (0x0298 - 0x0270)
class AB_HeavyRainPost_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                  PostProcess;                                       // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_94328C264A3D77D59B39B9A6A4A4A124; // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_94328C264A3D77D59B39B9A6A4A4A124; // 0x0284(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_285[0x3];                                      // 0x0285(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               PP_MID;                                            // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CE_Deactivate();
	void ExecuteUbergraph_B_HeavyRainPost(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_HeavyRainPost_C">();
	}
	static class AB_HeavyRainPost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_HeavyRainPost_C>();
	}
};
static_assert(alignof(AB_HeavyRainPost_C) == 0x000008, "Wrong alignment on AB_HeavyRainPost_C");
static_assert(sizeof(AB_HeavyRainPost_C) == 0x000298, "Wrong size on AB_HeavyRainPost_C");
static_assert(offsetof(AB_HeavyRainPost_C, UberGraphFrame) == 0x000270, "Member 'AB_HeavyRainPost_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_HeavyRainPost_C, PostProcess) == 0x000278, "Member 'AB_HeavyRainPost_C::PostProcess' has a wrong offset!");
static_assert(offsetof(AB_HeavyRainPost_C, Timeline_0_NewTrack_0_94328C264A3D77D59B39B9A6A4A4A124) == 0x000280, "Member 'AB_HeavyRainPost_C::Timeline_0_NewTrack_0_94328C264A3D77D59B39B9A6A4A4A124' has a wrong offset!");
static_assert(offsetof(AB_HeavyRainPost_C, Timeline_0__Direction_94328C264A3D77D59B39B9A6A4A4A124) == 0x000284, "Member 'AB_HeavyRainPost_C::Timeline_0__Direction_94328C264A3D77D59B39B9A6A4A4A124' has a wrong offset!");
static_assert(offsetof(AB_HeavyRainPost_C, Timeline_0) == 0x000288, "Member 'AB_HeavyRainPost_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AB_HeavyRainPost_C, PP_MID) == 0x000290, "Member 'AB_HeavyRainPost_C::PP_MID' has a wrong offset!");

}

