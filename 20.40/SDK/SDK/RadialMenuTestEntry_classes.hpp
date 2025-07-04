﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RadialMenuTestEntry

#include "Basic.hpp"

#include "CommonUILegacy_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RadialMenuTestEntry.RadialMenuTestEntry_C
// 0x0010 (0x1000 - 0x0FF0)
class URadialMenuTestEntry_C final : public UCommonButtonLegacy
{
public:
	uint8                                         Pad_FE8[0x8];                                      // 0x0FE8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 Image_82;                                          // 0x0FF0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RadialMenuTestEntry_C">();
	}
	static class URadialMenuTestEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URadialMenuTestEntry_C>();
	}
};
static_assert(alignof(URadialMenuTestEntry_C) == 0x000010, "Wrong alignment on URadialMenuTestEntry_C");
static_assert(sizeof(URadialMenuTestEntry_C) == 0x001000, "Wrong size on URadialMenuTestEntry_C");
static_assert(offsetof(URadialMenuTestEntry_C, Image_82) == 0x000FF0, "Member 'URadialMenuTestEntry_C::Image_82' has a wrong offset!");

}

