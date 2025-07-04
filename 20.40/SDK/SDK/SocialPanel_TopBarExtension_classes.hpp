﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialPanel_TopBarExtension

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUILegacy_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C
// 0x0030 (0x1020 - 0x0FF0)
class USocialPanel_TopBarExtension_C final : public UCommonButtonLegacy
{
public:
	uint8                                         Pad_FE8[0x8];                                      // 0x0FE8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0FF0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hovered;                                           // 0x0FF8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Arrow;                                             // 0x1000(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_PlatformIcon;                                // 0x1008(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMiniPartyBar_C*                        MiniPartyBar;                                      // 0x1010(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_SocialPanel_TopBarExtension(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialPanel_TopBarExtension_C">();
	}
	static class USocialPanel_TopBarExtension_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialPanel_TopBarExtension_C>();
	}
};
static_assert(alignof(USocialPanel_TopBarExtension_C) == 0x000010, "Wrong alignment on USocialPanel_TopBarExtension_C");
static_assert(sizeof(USocialPanel_TopBarExtension_C) == 0x001020, "Wrong size on USocialPanel_TopBarExtension_C");
static_assert(offsetof(USocialPanel_TopBarExtension_C, UberGraphFrame) == 0x000FF0, "Member 'USocialPanel_TopBarExtension_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USocialPanel_TopBarExtension_C, Hovered) == 0x000FF8, "Member 'USocialPanel_TopBarExtension_C::Hovered' has a wrong offset!");
static_assert(offsetof(USocialPanel_TopBarExtension_C, Arrow) == 0x001000, "Member 'USocialPanel_TopBarExtension_C::Arrow' has a wrong offset!");
static_assert(offsetof(USocialPanel_TopBarExtension_C, Image_PlatformIcon) == 0x001008, "Member 'USocialPanel_TopBarExtension_C::Image_PlatformIcon' has a wrong offset!");
static_assert(offsetof(USocialPanel_TopBarExtension_C, MiniPartyBar) == 0x001010, "Member 'USocialPanel_TopBarExtension_C::MiniPartyBar' has a wrong offset!");

}

