﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ToastDisplayArea

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ToastDisplayArea.ToastDisplayArea_C
// 0x0010 (0x0320 - 0x0310)
class UToastDisplayArea_C final : public UFortToastDisplayArea
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0310(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USafeZone*                              SafeZone_0;                                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ToastDisplayArea(int32 EntryPoint);
	void TestFrontendToast();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ToastDisplayArea_C">();
	}
	static class UToastDisplayArea_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UToastDisplayArea_C>();
	}
};
static_assert(alignof(UToastDisplayArea_C) == 0x000008, "Wrong alignment on UToastDisplayArea_C");
static_assert(sizeof(UToastDisplayArea_C) == 0x000320, "Wrong size on UToastDisplayArea_C");
static_assert(offsetof(UToastDisplayArea_C, UberGraphFrame) == 0x000310, "Member 'UToastDisplayArea_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UToastDisplayArea_C, SafeZone_0) == 0x000318, "Member 'UToastDisplayArea_C::SafeZone_0' has a wrong offset!");

}

