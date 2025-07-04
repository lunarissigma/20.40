﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FrontendCamera_Main

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass FrontendCamera_Main.FrontendCamera_Main_C
// 0x0010 (0x09A0 - 0x0990)
class AFrontendCamera_Main_C final : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0990(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                       LoginCamera_0;                                     // 0x0998(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_FrontendCamera_Main(int32 EntryPoint);
	void BP_OnActivated(class AFortPlayerController* PlayerController);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FrontendCamera_Main_C">();
	}
	static class AFrontendCamera_Main_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFrontendCamera_Main_C>();
	}
};
static_assert(alignof(AFrontendCamera_Main_C) == 0x000010, "Wrong alignment on AFrontendCamera_Main_C");
static_assert(sizeof(AFrontendCamera_Main_C) == 0x0009A0, "Wrong size on AFrontendCamera_Main_C");
static_assert(offsetof(AFrontendCamera_Main_C, UberGraphFrame) == 0x000990, "Member 'AFrontendCamera_Main_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFrontendCamera_Main_C, LoginCamera_0) == 0x000998, "Member 'AFrontendCamera_Main_C::LoginCamera_0' has a wrong offset!");

}

