﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaTabsScreen

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaTabsScreen.AthenaTabsScreen_C
// 0x0010 (0x0400 - 0x03F0)
class UAthenaTabsScreen_C final : public UFortAthenaTabsScreenBase
{
public:
	class UItemShopScreen_C*                      CatabaScreen;                                      // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZoneContent;                                   // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaTabsScreen_C">();
	}
	static class UAthenaTabsScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaTabsScreen_C>();
	}
};
static_assert(alignof(UAthenaTabsScreen_C) == 0x000008, "Wrong alignment on UAthenaTabsScreen_C");
static_assert(sizeof(UAthenaTabsScreen_C) == 0x000400, "Wrong size on UAthenaTabsScreen_C");
static_assert(offsetof(UAthenaTabsScreen_C, CatabaScreen) == 0x0003F0, "Member 'UAthenaTabsScreen_C::CatabaScreen' has a wrong offset!");
static_assert(offsetof(UAthenaTabsScreen_C, SafeZoneContent) == 0x0003F8, "Member 'UAthenaTabsScreen_C::SafeZoneContent' has a wrong offset!");

}

