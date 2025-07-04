﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaLocker_ItemInfo

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaLocker_ItemInfo.AthenaLocker_ItemInfo_C
// 0x0068 (0x0328 - 0x02C0)
class UAthenaLocker_ItemInfo_C final : public UAthenaLockerItemInfo
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       PulseAnim;                                         // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_ItemRarity;                                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_ItemType;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_RarityTint;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ExclusiveCalloutBox;                               // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   ExclusiveCalloutText;                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        IconSwitcher;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_93;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverrideDescriptionVisibility;                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverrideWarningVisibility;                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_34;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ShowDescription;                                   // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaLocker_ItemInfo(int32 EntryPoint);
	void OnItemDefinitionSet(const class UFortItemDefinition* ItemDefinition);
	void OnNoItemSet();
	void OnUpdateAccessRestrictionWarning(bool bShouldShow, const class FText& WarningText, EAthenaLockerInfoRestrictionWarning WarningType);
	void PreConstruct(bool IsDesignTime);
	void UpdateRarityWidgets(const struct FFortColorPalette& InColor, EFortRarity InRarity, class UFortItemSeriesDefinition* InSeries, bool HideRarity);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaLocker_ItemInfo_C">();
	}
	static class UAthenaLocker_ItemInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaLocker_ItemInfo_C>();
	}
};
static_assert(alignof(UAthenaLocker_ItemInfo_C) == 0x000008, "Wrong alignment on UAthenaLocker_ItemInfo_C");
static_assert(sizeof(UAthenaLocker_ItemInfo_C) == 0x000328, "Wrong size on UAthenaLocker_ItemInfo_C");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, UberGraphFrame) == 0x0002C0, "Member 'UAthenaLocker_ItemInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, PulseAnim) == 0x0002C8, "Member 'UAthenaLocker_ItemInfo_C::PulseAnim' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, Border_ItemRarity) == 0x0002D0, "Member 'UAthenaLocker_ItemInfo_C::Border_ItemRarity' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, Border_ItemType) == 0x0002D8, "Member 'UAthenaLocker_ItemInfo_C::Border_ItemType' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, Border_RarityTint) == 0x0002E0, "Member 'UAthenaLocker_ItemInfo_C::Border_RarityTint' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, ExclusiveCalloutBox) == 0x0002E8, "Member 'UAthenaLocker_ItemInfo_C::ExclusiveCalloutBox' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, ExclusiveCalloutText) == 0x0002F0, "Member 'UAthenaLocker_ItemInfo_C::ExclusiveCalloutText' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, IconSwitcher) == 0x0002F8, "Member 'UAthenaLocker_ItemInfo_C::IconSwitcher' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, Image_93) == 0x000300, "Member 'UAthenaLocker_ItemInfo_C::Image_93' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, OverrideDescriptionVisibility) == 0x000308, "Member 'UAthenaLocker_ItemInfo_C::OverrideDescriptionVisibility' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, OverrideWarningVisibility) == 0x000310, "Member 'UAthenaLocker_ItemInfo_C::OverrideWarningVisibility' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, VerticalBox_34) == 0x000318, "Member 'UAthenaLocker_ItemInfo_C::VerticalBox_34' has a wrong offset!");
static_assert(offsetof(UAthenaLocker_ItemInfo_C, ShowDescription) == 0x000320, "Member 'UAthenaLocker_ItemInfo_C::ShowDescription' has a wrong offset!");

}

