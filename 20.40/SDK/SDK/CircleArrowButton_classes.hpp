﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CircleArrowButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonUILegacy_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CircleArrowButton.CircleArrowButton_C
// 0x0080 (0x1070 - 0x0FF0)
class UCircleArrowButton_C final : public UCommonButtonLegacy
{
public:
	uint8                                         Pad_FE8[0x8];                                      // 0x0FE8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0FF0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Click;                                             // 0x0FF8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hover;                                             // 0x1000(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_Arrow;                                       // 0x1008(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Shadow;                                      // 0x1010(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_ButtonContainer;                           // 0x1018(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Sizebox_InputAction;                               // 0x1020(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Flip;                                              // 0x1028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1029[0x3];                                     // 0x1029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           ArrowColor;                                        // 0x102C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           ShadowColor;                                       // 0x103C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EdgeSoftness;                                      // 0x104C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HoverColor;                                        // 0x1050(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          UseShadow;                                         // 0x1060(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InputActionOnSide;                                 // 0x1061(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnClicked();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_CircleArrowButton(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void UpdateArrowColor(const struct FLinearColor& Color, const struct FLinearColor& HoverColor_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CircleArrowButton_C">();
	}
	static class UCircleArrowButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCircleArrowButton_C>();
	}
};
static_assert(alignof(UCircleArrowButton_C) == 0x000010, "Wrong alignment on UCircleArrowButton_C");
static_assert(sizeof(UCircleArrowButton_C) == 0x001070, "Wrong size on UCircleArrowButton_C");
static_assert(offsetof(UCircleArrowButton_C, UberGraphFrame) == 0x000FF0, "Member 'UCircleArrowButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, Click) == 0x000FF8, "Member 'UCircleArrowButton_C::Click' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, Hover) == 0x001000, "Member 'UCircleArrowButton_C::Hover' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, Image_Arrow) == 0x001008, "Member 'UCircleArrowButton_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, Image_Shadow) == 0x001010, "Member 'UCircleArrowButton_C::Image_Shadow' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, Overlay_ButtonContainer) == 0x001018, "Member 'UCircleArrowButton_C::Overlay_ButtonContainer' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, Sizebox_InputAction) == 0x001020, "Member 'UCircleArrowButton_C::Sizebox_InputAction' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, Flip) == 0x001028, "Member 'UCircleArrowButton_C::Flip' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, ArrowColor) == 0x00102C, "Member 'UCircleArrowButton_C::ArrowColor' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, ShadowColor) == 0x00103C, "Member 'UCircleArrowButton_C::ShadowColor' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, EdgeSoftness) == 0x00104C, "Member 'UCircleArrowButton_C::EdgeSoftness' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, HoverColor) == 0x001050, "Member 'UCircleArrowButton_C::HoverColor' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, UseShadow) == 0x001060, "Member 'UCircleArrowButton_C::UseShadow' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, InputActionOnSide) == 0x001061, "Member 'UCircleArrowButton_C::InputActionOnSide' has a wrong offset!");

}

