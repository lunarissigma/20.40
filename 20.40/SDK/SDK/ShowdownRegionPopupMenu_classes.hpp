﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShowdownRegionPopupMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShowdownRegionPopupMenu.ShowdownRegionPopupMenu_C
// 0x0008 (0x0548 - 0x0540)
class UShowdownRegionPopupMenu_C final : public UFortShowdownRegionPopupMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0540(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void BP_SetButtonText(class UCommonButtonLegacy* Button, const class FText& Text);
	void ExecuteUbergraph_ShowdownRegionPopupMenu(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShowdownRegionPopupMenu_C">();
	}
	static class UShowdownRegionPopupMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShowdownRegionPopupMenu_C>();
	}
};
static_assert(alignof(UShowdownRegionPopupMenu_C) == 0x000008, "Wrong alignment on UShowdownRegionPopupMenu_C");
static_assert(sizeof(UShowdownRegionPopupMenu_C) == 0x000548, "Wrong size on UShowdownRegionPopupMenu_C");
static_assert(offsetof(UShowdownRegionPopupMenu_C, UberGraphFrame) == 0x000540, "Member 'UShowdownRegionPopupMenu_C::UberGraphFrame' has a wrong offset!");

}

