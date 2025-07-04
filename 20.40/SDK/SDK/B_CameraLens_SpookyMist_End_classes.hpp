﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_CameraLens_SpookyMist_End

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_CameraLens_SpookyMist_End.B_CameraLens_SpookyMist_End_C
// 0x0010 (0x0370 - 0x0360)
class AB_CameraLens_SpookyMist_End_C final : public AEmitterCameraLensEffectBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_B_CameraLens_SpookyMist_End(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_CameraLens_SpookyMist_End_C">();
	}
	static class AB_CameraLens_SpookyMist_End_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_CameraLens_SpookyMist_End_C>();
	}
};
static_assert(alignof(AB_CameraLens_SpookyMist_End_C) == 0x000010, "Wrong alignment on AB_CameraLens_SpookyMist_End_C");
static_assert(sizeof(AB_CameraLens_SpookyMist_End_C) == 0x000370, "Wrong size on AB_CameraLens_SpookyMist_End_C");
static_assert(offsetof(AB_CameraLens_SpookyMist_End_C, UberGraphFrame) == 0x000360, "Member 'AB_CameraLens_SpookyMist_End_C::UberGraphFrame' has a wrong offset!");

}

