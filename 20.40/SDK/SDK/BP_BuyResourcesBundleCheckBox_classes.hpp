﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BuyResourcesBundleCheckBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePassBase_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_BuyResourcesBundleCheckBox.BP_BuyResourcesBundleCheckBox_C
// 0x0060 (0x1000 - 0x0FA0)
class UBP_BuyResourcesBundleCheckBox_C final : public UFortBattlePassCheckBoxButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0FA0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hover;                                             // 0x0FA8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Check;                                             // 0x0FB0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       burst;                                             // 0x0FB8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_BundleText;                                     // 0x0FC0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_burst;                                       // 0x0FC8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_check;                                       // 0x0FD0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Checkbox;                                    // 0x0FD8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   Text_Default;                                      // 0x0FE0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   Text_OneTime;                                      // 0x0FE8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_2;                                  // 0x0FF0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_BP_BuyResourcesBundleCheckBox(int32 EntryPoint);
	void OnStateChanged(const bool bNewIsChecked);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuyResourcesBundleCheckBox_C">();
	}
	static class UBP_BuyResourcesBundleCheckBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BuyResourcesBundleCheckBox_C>();
	}
};
static_assert(alignof(UBP_BuyResourcesBundleCheckBox_C) == 0x000010, "Wrong alignment on UBP_BuyResourcesBundleCheckBox_C");
static_assert(sizeof(UBP_BuyResourcesBundleCheckBox_C) == 0x001000, "Wrong size on UBP_BuyResourcesBundleCheckBox_C");
static_assert(offsetof(UBP_BuyResourcesBundleCheckBox_C, UberGraphFrame) == 0x000FA0, "Member 'UBP_BuyResourcesBundleCheckBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_BuyResourcesBundleCheckBox_C, Hover) == 0x000FA8, "Member 'UBP_BuyResourcesBundleCheckBox_C::Hover' has a wrong offset!");
static_assert(offsetof(UBP_BuyResourcesBundleCheckBox_C, Check) == 0x000FB0, "Member 'UBP_BuyResourcesBundleCheckBox_C::Check' has a wrong offset!");
static_assert(offsetof(UBP_BuyResourcesBundleCheckBox_C, burst) == 0x000FB8, "Member 'UBP_BuyResourcesBundleCheckBox_C::burst' has a wrong offset!");
static_assert(offsetof(UBP_BuyResourcesBundleCheckBox_C, HB_BundleText) == 0x000FC0, "Member 'UBP_BuyResourcesBundleCheckBox_C::HB_BundleText' has a wrong offset!");
static_assert(offsetof(UBP_BuyResourcesBundleCheckBox_C, Image_burst) == 0x000FC8, "Member 'UBP_BuyResourcesBundleCheckBox_C::Image_burst' has a wrong offset!");
static_assert(offsetof(UBP_BuyResourcesBundleCheckBox_C, Image_check) == 0x000FD0, "Member 'UBP_BuyResourcesBundleCheckBox_C::Image_check' has a wrong offset!");
static_assert(offsetof(UBP_BuyResourcesBundleCheckBox_C, Image_Checkbox) == 0x000FD8, "Member 'UBP_BuyResourcesBundleCheckBox_C::Image_Checkbox' has a wrong offset!");
static_assert(offsetof(UBP_BuyResourcesBundleCheckBox_C, Text_Default) == 0x000FE0, "Member 'UBP_BuyResourcesBundleCheckBox_C::Text_Default' has a wrong offset!");
static_assert(offsetof(UBP_BuyResourcesBundleCheckBox_C, Text_OneTime) == 0x000FE8, "Member 'UBP_BuyResourcesBundleCheckBox_C::Text_OneTime' has a wrong offset!");
static_assert(offsetof(UBP_BuyResourcesBundleCheckBox_C, WidgetSwitcher_2) == 0x000FF0, "Member 'UBP_BuyResourcesBundleCheckBox_C::WidgetSwitcher_2' has a wrong offset!");

}

