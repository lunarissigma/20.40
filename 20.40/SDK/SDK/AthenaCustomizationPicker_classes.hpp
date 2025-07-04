﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaCustomizationPicker

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CommonInput_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaCustomizationPicker.AthenaCustomizationPicker_C
// 0x0098 (0x0588 - 0x04F0)
class UAthenaCustomizationPicker_C final : public UAthenaCustomizationPicker
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Contract;                                          // 0x04F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Expand;                                            // 0x0500(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UFilteredTextEntryWidget_C*             EditableText_Search;                               // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         SearchBar_HB;                                      // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SearchIcon;                                        // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_TextSearch;                                // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   TextBlock_NoItemAvailable;                         // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_DisplayItemAvailability;            // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(bool bIsHovered)> OnAlternateActionHoveredChanged;                 // 0x0538(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAthenaCustomizationPickerTileButton_C* TileButton;                                        // 0x0548(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TextEntryTimer;                                    // 0x0550(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(class FText NewText)> OnTextChanged;                               // 0x0558(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                    CachedButtonTextSearchKeybind;                     // 0x0568(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    CachedButtonSortAndFilterKeybind;                  // 0x0578(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void BndEvt__AthenaCustomizationPicker_Button_SortAndFilter_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__AthenaCustomizationPicker_Button_SortAndFilter_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__AthenaCustomizationPicker_Button_TextSearch_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__AthenaCustomizationPicker_Button_TextSearch_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__Button_TextSearch_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__PickerTileView_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
	void Construct();
	void ExecuteUbergraph_AthenaCustomizationPicker(int32 EntryPoint);
	void GetTextFilterSelectedState(bool* bIsSelected);
	void HandleButtonTextSearchClicked();
	void HandleSearchTextFilterChanged(const class FText& Text);
	void HandleTextChanged(const class FText& Text);
	void HandleTextEntryTimer();
	void NavigateDownFromSearch(EUINavigation Navigation_0, class UWidget** NewParam);
	void NavigateDownFromSortAndFilter(EUINavigation Navigation_0, class UWidget** NewParam);
	class UWidget* NavigateUpFromPicker(EUINavigation Navigation_0);
	void On_Text_Committed(const class FText& Text, ETextCommit CommitMethod);
	void OnInitialized();
	void OnInputMethodChanged(ECommonInputType NewInputType);
	void OnItemsAvailableInFilter();
	void OnNoItemsAvailableInFilter(const class FText& EmptyDisplayText);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnSearchEnabled(bool bEnabled);
	void ResetTextSearchFilter();
	void SetTextFilter(const class FText& InText, bool Clear);
	void SetTextFilterSelectedState(bool bIsSelected);

	bool HasSelectableTile() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaCustomizationPicker_C">();
	}
	static class UAthenaCustomizationPicker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaCustomizationPicker_C>();
	}
};
static_assert(alignof(UAthenaCustomizationPicker_C) == 0x000008, "Wrong alignment on UAthenaCustomizationPicker_C");
static_assert(sizeof(UAthenaCustomizationPicker_C) == 0x000588, "Wrong size on UAthenaCustomizationPicker_C");
static_assert(offsetof(UAthenaCustomizationPicker_C, UberGraphFrame) == 0x0004F0, "Member 'UAthenaCustomizationPicker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPicker_C, Contract) == 0x0004F8, "Member 'UAthenaCustomizationPicker_C::Contract' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPicker_C, Expand) == 0x000500, "Member 'UAthenaCustomizationPicker_C::Expand' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPicker_C, EditableText_Search) == 0x000508, "Member 'UAthenaCustomizationPicker_C::EditableText_Search' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPicker_C, SearchBar_HB) == 0x000510, "Member 'UAthenaCustomizationPicker_C::SearchBar_HB' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPicker_C, SearchIcon) == 0x000518, "Member 'UAthenaCustomizationPicker_C::SearchIcon' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPicker_C, SizeBox_TextSearch) == 0x000520, "Member 'UAthenaCustomizationPicker_C::SizeBox_TextSearch' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPicker_C, TextBlock_NoItemAvailable) == 0x000528, "Member 'UAthenaCustomizationPicker_C::TextBlock_NoItemAvailable' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPicker_C, WidgetSwitcher_DisplayItemAvailability) == 0x000530, "Member 'UAthenaCustomizationPicker_C::WidgetSwitcher_DisplayItemAvailability' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPicker_C, OnAlternateActionHoveredChanged) == 0x000538, "Member 'UAthenaCustomizationPicker_C::OnAlternateActionHoveredChanged' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPicker_C, TileButton) == 0x000548, "Member 'UAthenaCustomizationPicker_C::TileButton' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPicker_C, TextEntryTimer) == 0x000550, "Member 'UAthenaCustomizationPicker_C::TextEntryTimer' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPicker_C, OnTextChanged) == 0x000558, "Member 'UAthenaCustomizationPicker_C::OnTextChanged' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPicker_C, CachedButtonTextSearchKeybind) == 0x000568, "Member 'UAthenaCustomizationPicker_C::CachedButtonTextSearchKeybind' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPicker_C, CachedButtonSortAndFilterKeybind) == 0x000578, "Member 'UAthenaCustomizationPicker_C::CachedButtonSortAndFilterKeybind' has a wrong offset!");

}

