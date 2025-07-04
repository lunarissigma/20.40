﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaMOTDTileMainPage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaMOTDTileMainPage.AthenaMOTDTileMainPage_C
// 0x00B0 (0x10F0 - 0x1040)
class UAthenaMOTDTileMainPage_C final : public UFortAthenaMOTDTile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1040(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnHover;                                           // 0x1048(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnSelected;                                        // 0x1050(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x1058(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_Details;                                    // 0x1060(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_PipDisplay;                                 // 0x1068(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLoadGuard*                       CommonLoadGuard_0;                                 // 0x1070(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Fill;                                              // 0x1078(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_SelectedPointer;                             // 0x1080(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_SelectedPointer_Shadow;                      // 0x1088(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LoadingImage;                                      // 0x1090(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               LoadingImageOvr;                                   // 0x1098(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcherLegacy*            LoadSwitcher;                                      // 0x10A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              NewsItemScale;                                     // 0x10A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Tile;                                      // 0x10B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bShowImageOnly;                                    // 0x10B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10B9[0x3];                                     // 0x10B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PreviewPipCount;                                   // 0x10BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(bool NewIsHovered)> OnHoveredChanged;                              // 0x10C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FLinearColor                           DefaultColor;                                      // 0x10D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MID_Font;                                          // 0x10E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnDeselected();
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnSelected();
	void ExecuteUbergraph_AthenaMOTDTileMainPage(int32 EntryPoint);
	void OnInitialized();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnPopulateNews(const struct FAthenaMOTDBase& NewsEntry);
	void PreConstruct(bool IsDesignTime);
	void ShowImageOnly();
	void UpdateDisplay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaMOTDTileMainPage_C">();
	}
	static class UAthenaMOTDTileMainPage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaMOTDTileMainPage_C>();
	}
};
static_assert(alignof(UAthenaMOTDTileMainPage_C) == 0x000010, "Wrong alignment on UAthenaMOTDTileMainPage_C");
static_assert(sizeof(UAthenaMOTDTileMainPage_C) == 0x0010F0, "Wrong size on UAthenaMOTDTileMainPage_C");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, UberGraphFrame) == 0x001040, "Member 'UAthenaMOTDTileMainPage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, OnHover) == 0x001048, "Member 'UAthenaMOTDTileMainPage_C::OnHover' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, OnSelected) == 0x001050, "Member 'UAthenaMOTDTileMainPage_C::OnSelected' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, Intro) == 0x001058, "Member 'UAthenaMOTDTileMainPage_C::Intro' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, Border_Details) == 0x001060, "Member 'UAthenaMOTDTileMainPage_C::Border_Details' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, Border_PipDisplay) == 0x001068, "Member 'UAthenaMOTDTileMainPage_C::Border_PipDisplay' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, CommonLoadGuard_0) == 0x001070, "Member 'UAthenaMOTDTileMainPage_C::CommonLoadGuard_0' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, Fill) == 0x001078, "Member 'UAthenaMOTDTileMainPage_C::Fill' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, Image_SelectedPointer) == 0x001080, "Member 'UAthenaMOTDTileMainPage_C::Image_SelectedPointer' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, Image_SelectedPointer_Shadow) == 0x001088, "Member 'UAthenaMOTDTileMainPage_C::Image_SelectedPointer_Shadow' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, LoadingImage) == 0x001090, "Member 'UAthenaMOTDTileMainPage_C::LoadingImage' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, LoadingImageOvr) == 0x001098, "Member 'UAthenaMOTDTileMainPage_C::LoadingImageOvr' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, LoadSwitcher) == 0x0010A0, "Member 'UAthenaMOTDTileMainPage_C::LoadSwitcher' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, NewsItemScale) == 0x0010A8, "Member 'UAthenaMOTDTileMainPage_C::NewsItemScale' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, SizeBox_Tile) == 0x0010B0, "Member 'UAthenaMOTDTileMainPage_C::SizeBox_Tile' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, bShowImageOnly) == 0x0010B8, "Member 'UAthenaMOTDTileMainPage_C::bShowImageOnly' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, PreviewPipCount) == 0x0010BC, "Member 'UAthenaMOTDTileMainPage_C::PreviewPipCount' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, OnHoveredChanged) == 0x0010C0, "Member 'UAthenaMOTDTileMainPage_C::OnHoveredChanged' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, DefaultColor) == 0x0010D0, "Member 'UAthenaMOTDTileMainPage_C::DefaultColor' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, MID_Font) == 0x0010E0, "Member 'UAthenaMOTDTileMainPage_C::MID_Font' has a wrong offset!");

}

