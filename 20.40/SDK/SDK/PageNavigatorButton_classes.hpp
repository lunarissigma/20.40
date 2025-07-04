﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PageNavigatorButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PageNavigatorButton.PageNavigatorButton_C
// 0x0060 (0x1010 - 0x0FB0)
class UPageNavigatorButton_C final : public UFortPageNavigationButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0FB0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeOutBacking;                                    // 0x0FB8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Translate_Bottom;                                  // 0x0FC0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Translate_Top;                                     // 0x0FC8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hover;                                             // 0x0FD0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Backing;                                           // 0x0FD8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_button;                                     // 0x0FE0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                BorderButton;                                      // 0x0FE8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                GridBoundBorder;                                   // 0x0FF0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_Arrow;                                         // 0x0FF8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsTop;                                            // 0x1000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_PageNavigatorButton(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Set_Button_colors(const struct FLinearColor& Color1, const struct FLinearColor& Color2, const struct FLinearColor& Color3, const struct FLinearColor& Color4, const struct FLinearColor& Color5);
	void Set_colors();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PageNavigatorButton_C">();
	}
	static class UPageNavigatorButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPageNavigatorButton_C>();
	}
};
static_assert(alignof(UPageNavigatorButton_C) == 0x000010, "Wrong alignment on UPageNavigatorButton_C");
static_assert(sizeof(UPageNavigatorButton_C) == 0x001010, "Wrong size on UPageNavigatorButton_C");
static_assert(offsetof(UPageNavigatorButton_C, UberGraphFrame) == 0x000FB0, "Member 'UPageNavigatorButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPageNavigatorButton_C, FadeOutBacking) == 0x000FB8, "Member 'UPageNavigatorButton_C::FadeOutBacking' has a wrong offset!");
static_assert(offsetof(UPageNavigatorButton_C, Translate_Bottom) == 0x000FC0, "Member 'UPageNavigatorButton_C::Translate_Bottom' has a wrong offset!");
static_assert(offsetof(UPageNavigatorButton_C, Translate_Top) == 0x000FC8, "Member 'UPageNavigatorButton_C::Translate_Top' has a wrong offset!");
static_assert(offsetof(UPageNavigatorButton_C, Hover) == 0x000FD0, "Member 'UPageNavigatorButton_C::Hover' has a wrong offset!");
static_assert(offsetof(UPageNavigatorButton_C, Backing) == 0x000FD8, "Member 'UPageNavigatorButton_C::Backing' has a wrong offset!");
static_assert(offsetof(UPageNavigatorButton_C, Border_button) == 0x000FE0, "Member 'UPageNavigatorButton_C::Border_button' has a wrong offset!");
static_assert(offsetof(UPageNavigatorButton_C, BorderButton) == 0x000FE8, "Member 'UPageNavigatorButton_C::BorderButton' has a wrong offset!");
static_assert(offsetof(UPageNavigatorButton_C, GridBoundBorder) == 0x000FF0, "Member 'UPageNavigatorButton_C::GridBoundBorder' has a wrong offset!");
static_assert(offsetof(UPageNavigatorButton_C, IMG_Arrow) == 0x000FF8, "Member 'UPageNavigatorButton_C::IMG_Arrow' has a wrong offset!");
static_assert(offsetof(UPageNavigatorButton_C, bIsTop) == 0x001000, "Member 'UPageNavigatorButton_C::bIsTop' has a wrong offset!");

}

