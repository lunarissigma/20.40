﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SidebarSettingsRotator_Narrow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SidebarSettingsRotator_Narrow.SidebarSettingsRotator_Narrow_C
// 0x0020 (0x1020 - 0x1000)
class USidebarSettingsRotator_Narrow_C final : public UFortSettingsRotator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1000(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       RotatorHover;                                      // 0x1008(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Background;                                        // 0x1010(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_OnDefaultOptionSpecified(int32 DefaultOptionIndex);
	void BP_OnOptionSelected(int32 Index_0);
	void BP_OnOptionsPopulated(int32 Count);
	void ExecuteUbergraph_SidebarSettingsRotator_Narrow(int32 EntryPoint);
	void OnHover_Animation();
	void OnUnHover_Animation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarSettingsRotator_Narrow_C">();
	}
	static class USidebarSettingsRotator_Narrow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarSettingsRotator_Narrow_C>();
	}
};
static_assert(alignof(USidebarSettingsRotator_Narrow_C) == 0x000010, "Wrong alignment on USidebarSettingsRotator_Narrow_C");
static_assert(sizeof(USidebarSettingsRotator_Narrow_C) == 0x001020, "Wrong size on USidebarSettingsRotator_Narrow_C");
static_assert(offsetof(USidebarSettingsRotator_Narrow_C, UberGraphFrame) == 0x001000, "Member 'USidebarSettingsRotator_Narrow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarSettingsRotator_Narrow_C, RotatorHover) == 0x001008, "Member 'USidebarSettingsRotator_Narrow_C::RotatorHover' has a wrong offset!");
static_assert(offsetof(USidebarSettingsRotator_Narrow_C, Background) == 0x001010, "Member 'USidebarSettingsRotator_Narrow_C::Background' has a wrong offset!");

}

