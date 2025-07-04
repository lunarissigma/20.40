﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StorePinataMaster_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass StorePinataMaster_Parent.StorePinataMaster_Parent_C
// 0x0010 (0x0280 - 0x0270)
class AStorePinataMaster_Parent_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        PinataSceneRoot;                                   // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void CameraResetComplete();
	void InitiatePinata();
	void ExecuteUbergraph_StorePinataMaster_Parent(int32 EntryPoint);
	void CameraTransitionComplete();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StorePinataMaster_Parent_C">();
	}
	static class AStorePinataMaster_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AStorePinataMaster_Parent_C>();
	}
};
static_assert(alignof(AStorePinataMaster_Parent_C) == 0x000008, "Wrong alignment on AStorePinataMaster_Parent_C");
static_assert(sizeof(AStorePinataMaster_Parent_C) == 0x000280, "Wrong size on AStorePinataMaster_Parent_C");
static_assert(offsetof(AStorePinataMaster_Parent_C, UberGraphFrame) == 0x000270, "Member 'AStorePinataMaster_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AStorePinataMaster_Parent_C, PinataSceneRoot) == 0x000278, "Member 'AStorePinataMaster_Parent_C::PinataSceneRoot' has a wrong offset!");

}

