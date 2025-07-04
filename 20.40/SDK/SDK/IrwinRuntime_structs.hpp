﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IrwinRuntime

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct IrwinRuntime.RidingAnimationData
// 0x000C (0x000C - 0x0000)
struct FRidingAnimationData final
{
public:
	bool                                          bIsRidden;                                         // 0x0000(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsTurningInPlace;                                 // 0x0001(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TurnInPlaceRotationSpeed;                          // 0x0004(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TurnInPlaceAngleDelta;                             // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRidingAnimationData) == 0x000004, "Wrong alignment on FRidingAnimationData");
static_assert(sizeof(FRidingAnimationData) == 0x00000C, "Wrong size on FRidingAnimationData");
static_assert(offsetof(FRidingAnimationData, bIsRidden) == 0x000000, "Member 'FRidingAnimationData::bIsRidden' has a wrong offset!");
static_assert(offsetof(FRidingAnimationData, bIsTurningInPlace) == 0x000001, "Member 'FRidingAnimationData::bIsTurningInPlace' has a wrong offset!");
static_assert(offsetof(FRidingAnimationData, TurnInPlaceRotationSpeed) == 0x000004, "Member 'FRidingAnimationData::TurnInPlaceRotationSpeed' has a wrong offset!");
static_assert(offsetof(FRidingAnimationData, TurnInPlaceAngleDelta) == 0x000008, "Member 'FRidingAnimationData::TurnInPlaceAngleDelta' has a wrong offset!");

}

