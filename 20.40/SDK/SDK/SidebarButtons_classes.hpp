﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SidebarButtons

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SidebarButtons.SidebarButtons_C
// 0x0000 (0x03C0 - 0x03C0)
class USidebarButtons_C final : public UFortSidebarButtons
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarButtons_C">();
	}
	static class USidebarButtons_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarButtons_C>();
	}
};
static_assert(alignof(USidebarButtons_C) == 0x000008, "Wrong alignment on USidebarButtons_C");
static_assert(sizeof(USidebarButtons_C) == 0x0003C0, "Wrong size on USidebarButtons_C");

}

