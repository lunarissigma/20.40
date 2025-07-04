﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StoreSelectionUI

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "StoreSelectionUI_structs.hpp"
#include "CommonUILegacy_classes.hpp"


namespace SDK
{

// Class StoreSelectionUI.FortStoreSelectionData
// 0x0058 (0x0538 - 0x04E0)
class UFortStoreSelectionData final : public UFortGameFeatureData
{
public:
	TSoftClassPtr<class UClass>                   StoreSelectionScreenClass;                         // 0x04E0(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   RegularStoreSelectedText;                          // 0x0508(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   NonRegularStoreSelectedText;                       // 0x0520(0x0018)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortStoreSelectionData">();
	}
	static class UFortStoreSelectionData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortStoreSelectionData>();
	}
};
static_assert(alignof(UFortStoreSelectionData) == 0x000008, "Wrong alignment on UFortStoreSelectionData");
static_assert(sizeof(UFortStoreSelectionData) == 0x000538, "Wrong size on UFortStoreSelectionData");
static_assert(offsetof(UFortStoreSelectionData, StoreSelectionScreenClass) == 0x0004E0, "Member 'UFortStoreSelectionData::StoreSelectionScreenClass' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionData, RegularStoreSelectedText) == 0x000508, "Member 'UFortStoreSelectionData::RegularStoreSelectedText' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionData, NonRegularStoreSelectedText) == 0x000520, "Member 'UFortStoreSelectionData::NonRegularStoreSelectedText' has a wrong offset!");

// Class StoreSelectionUI.FortStoreSelectionOptionEntry
// 0x0020 (0x1010 - 0x0FF0)
class UFortStoreSelectionOptionEntry final : public UCommonButtonLegacy
{
public:
	class UFortLazyImage*                         Image_Icon;                                        // 0x0FE8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                       Text_Description;                                  // 0x0FF0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                       Text_Price;                                        // 0x0FF8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                   RichText_Label;                                    // 0x1000(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1008[0x8];                                     // 0x1008(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortStoreSelectionOptionEntry">();
	}
	static class UFortStoreSelectionOptionEntry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortStoreSelectionOptionEntry>();
	}
};
static_assert(alignof(UFortStoreSelectionOptionEntry) == 0x000010, "Wrong alignment on UFortStoreSelectionOptionEntry");
static_assert(sizeof(UFortStoreSelectionOptionEntry) == 0x001010, "Wrong size on UFortStoreSelectionOptionEntry");
static_assert(offsetof(UFortStoreSelectionOptionEntry, Image_Icon) == 0x000FE8, "Member 'UFortStoreSelectionOptionEntry::Image_Icon' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionOptionEntry, Text_Description) == 0x000FF0, "Member 'UFortStoreSelectionOptionEntry::Text_Description' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionOptionEntry, Text_Price) == 0x000FF8, "Member 'UFortStoreSelectionOptionEntry::Text_Price' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionOptionEntry, RichText_Label) == 0x001000, "Member 'UFortStoreSelectionOptionEntry::RichText_Label' has a wrong offset!");

// Class StoreSelectionUI.FortStoreSelectionScreen
// 0x0420 (0x0910 - 0x04F0)
class UFortStoreSelectionScreen final : public UCommonActivatablePanelLegacy
{
public:
	uint8                                         Pad_4F0[0x8];                                      // 0x04F0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonGroupLegacy*               EntryBoxButtonGroup;                               // 0x04F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortRealMoneyOffer*                    StoreOffer;                                        // 0x0500(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonLoadGuard*                       StoreOfferLoadGuard;                               // 0x0508(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                       Text_Header;                                       // 0x0510(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                       DynamicEntryBox_Options;                           // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                    Button_Continue;                                   // 0x0520(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                    Button_Cancel;                                     // 0x0528(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                   RichText_InitiallySelectedHint;                    // 0x0530(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TScriptInterface<class IPurchaseChoiceRequesterInterface> PurchaseChoiceOwner;                   // 0x0538(0x0010)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FItemData>                      StoreOptions;                                      // 0x0548(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UFortMtxOfferData>       SoftDisplayAsset;                                  // 0x0558(0x0028)(Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FItemData                              ItemData[0xC];                                     // 0x0580(0x0048)(Edit, NativeAccessSpecifierPrivate)
	class FText                                   OptionalLabels[0x2];                               // 0x08E0(0x0018)(Edit, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortStoreSelectionScreen">();
	}
	static class UFortStoreSelectionScreen* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortStoreSelectionScreen>();
	}
};
static_assert(alignof(UFortStoreSelectionScreen) == 0x000008, "Wrong alignment on UFortStoreSelectionScreen");
static_assert(sizeof(UFortStoreSelectionScreen) == 0x000910, "Wrong size on UFortStoreSelectionScreen");
static_assert(offsetof(UFortStoreSelectionScreen, EntryBoxButtonGroup) == 0x0004F8, "Member 'UFortStoreSelectionScreen::EntryBoxButtonGroup' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, StoreOffer) == 0x000500, "Member 'UFortStoreSelectionScreen::StoreOffer' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, StoreOfferLoadGuard) == 0x000508, "Member 'UFortStoreSelectionScreen::StoreOfferLoadGuard' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, Text_Header) == 0x000510, "Member 'UFortStoreSelectionScreen::Text_Header' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, DynamicEntryBox_Options) == 0x000518, "Member 'UFortStoreSelectionScreen::DynamicEntryBox_Options' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, Button_Continue) == 0x000520, "Member 'UFortStoreSelectionScreen::Button_Continue' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, Button_Cancel) == 0x000528, "Member 'UFortStoreSelectionScreen::Button_Cancel' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, RichText_InitiallySelectedHint) == 0x000530, "Member 'UFortStoreSelectionScreen::RichText_InitiallySelectedHint' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, PurchaseChoiceOwner) == 0x000538, "Member 'UFortStoreSelectionScreen::PurchaseChoiceOwner' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, StoreOptions) == 0x000548, "Member 'UFortStoreSelectionScreen::StoreOptions' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, SoftDisplayAsset) == 0x000558, "Member 'UFortStoreSelectionScreen::SoftDisplayAsset' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, ItemData) == 0x000580, "Member 'UFortStoreSelectionScreen::ItemData' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, OptionalLabels) == 0x0008E0, "Member 'UFortStoreSelectionScreen::OptionalLabels' has a wrong offset!");

}

