﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NameLoadoutPopup

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NameLoadoutPopup.NameLoadoutPopup_C
// 0x0028 (0x0598 - 0x0570)
class UNameLoadoutPopup_C final : public UFortNameLoadoutPopup
{
public:
	class UImage*                                 Image_66;                                          // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Separator_Down;                              // 0x0578(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Separator_Up;                                // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox;                                          // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ShortDescriptionText;                              // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NameLoadoutPopup_C">();
	}
	static class UNameLoadoutPopup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNameLoadoutPopup_C>();
	}
};
static_assert(alignof(UNameLoadoutPopup_C) == 0x000008, "Wrong alignment on UNameLoadoutPopup_C");
static_assert(sizeof(UNameLoadoutPopup_C) == 0x000598, "Wrong size on UNameLoadoutPopup_C");
static_assert(offsetof(UNameLoadoutPopup_C, Image_66) == 0x000570, "Member 'UNameLoadoutPopup_C::Image_66' has a wrong offset!");
static_assert(offsetof(UNameLoadoutPopup_C, Image_Separator_Down) == 0x000578, "Member 'UNameLoadoutPopup_C::Image_Separator_Down' has a wrong offset!");
static_assert(offsetof(UNameLoadoutPopup_C, Image_Separator_Up) == 0x000580, "Member 'UNameLoadoutPopup_C::Image_Separator_Up' has a wrong offset!");
static_assert(offsetof(UNameLoadoutPopup_C, Lightbox) == 0x000588, "Member 'UNameLoadoutPopup_C::Lightbox' has a wrong offset!");
static_assert(offsetof(UNameLoadoutPopup_C, ShortDescriptionText) == 0x000590, "Member 'UNameLoadoutPopup_C::ShortDescriptionText' has a wrong offset!");

}

