﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VBucksStoreScreen

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass VBucksStoreScreen.VBucksStoreScreen_C
// 0x0090 (0x0668 - 0x05D8)
class UVBucksStoreScreen_C final : public UFortVbucksStoreScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Intro;                                             // 0x05E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                          CurrencyNotificationBorder;                        // 0x05E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CurrencyNotificationText;                          // 0x05F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_0;                                   // 0x05F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInfoFlag_C*                            InfoFlag;                                          // 0x0600(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             NamedSlot_ExtraContentBottom;                      // 0x0608(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          NewNoOffersBox;                                    // 0x0610(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          NewPurchasingDisabledBox;                          // 0x0618(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NewSpinner;                                        // 0x0620(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcherLegacy*            NewSwitcherItemsProgress;                          // 0x0628(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           NewVbuckOffers;                                    // 0x0630(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           NewVBuckSection;                                   // 0x0638(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              OfferScaleBoxRoot;                                 // 0x0640(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_0;                                         // 0x0648(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAudioComponent*                        Ambient_Sound;                                     // 0x0650(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                InitiallyFocusedOffer;                             // 0x0658(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowingCampaignUpsell;                            // 0x0660(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseMobileLayout;                                  // 0x0661(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ApplyMobileLayout();
	void BP_OnActivated();
	void ExecuteUbergraph_VBucksStoreScreen(int32 EntryPoint);
	void GetVisibilityByChildrenPresence(class UPanelWidget* Panel, ESlateVisibility* NewParam);
	void HandleAllOffersGenerated();
	void HandleBack(bool* Passthrough);
	void HandleRedeem(bool* bPassThrough);
	void NoOffersAvailable();
	void OnOffersGenerated();
	void OnPurchasingDisabled();
	void OnStartReadingOffers();
	void OnTransitionedBySwitcher();
	void OnUpdateOtherPlatformMTXMessage(bool HasOtherPlatformCurrency, const class FText& CurrencyMessageLocText);
	void PlayEquippedLockerMusic();
	void PreConstruct(bool IsDesignTime);
	void UpdateCurrencyNotification();

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VBucksStoreScreen_C">();
	}
	static class UVBucksStoreScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVBucksStoreScreen_C>();
	}
};
static_assert(alignof(UVBucksStoreScreen_C) == 0x000008, "Wrong alignment on UVBucksStoreScreen_C");
static_assert(sizeof(UVBucksStoreScreen_C) == 0x000668, "Wrong size on UVBucksStoreScreen_C");
static_assert(offsetof(UVBucksStoreScreen_C, UberGraphFrame) == 0x0005D8, "Member 'UVBucksStoreScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, Intro) == 0x0005E0, "Member 'UVBucksStoreScreen_C::Intro' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, CurrencyNotificationBorder) == 0x0005E8, "Member 'UVBucksStoreScreen_C::CurrencyNotificationBorder' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, CurrencyNotificationText) == 0x0005F0, "Member 'UVBucksStoreScreen_C::CurrencyNotificationText' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, HorizontalBox_0) == 0x0005F8, "Member 'UVBucksStoreScreen_C::HorizontalBox_0' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, InfoFlag) == 0x000600, "Member 'UVBucksStoreScreen_C::InfoFlag' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, NamedSlot_ExtraContentBottom) == 0x000608, "Member 'UVBucksStoreScreen_C::NamedSlot_ExtraContentBottom' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, NewNoOffersBox) == 0x000610, "Member 'UVBucksStoreScreen_C::NewNoOffersBox' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, NewPurchasingDisabledBox) == 0x000618, "Member 'UVBucksStoreScreen_C::NewPurchasingDisabledBox' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, NewSpinner) == 0x000620, "Member 'UVBucksStoreScreen_C::NewSpinner' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, NewSwitcherItemsProgress) == 0x000628, "Member 'UVBucksStoreScreen_C::NewSwitcherItemsProgress' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, NewVbuckOffers) == 0x000630, "Member 'UVBucksStoreScreen_C::NewVbuckOffers' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, NewVBuckSection) == 0x000638, "Member 'UVBucksStoreScreen_C::NewVBuckSection' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, OfferScaleBoxRoot) == 0x000640, "Member 'UVBucksStoreScreen_C::OfferScaleBoxRoot' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, Overlay_0) == 0x000648, "Member 'UVBucksStoreScreen_C::Overlay_0' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, Ambient_Sound) == 0x000650, "Member 'UVBucksStoreScreen_C::Ambient_Sound' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, InitiallyFocusedOffer) == 0x000658, "Member 'UVBucksStoreScreen_C::InitiallyFocusedOffer' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, bShowingCampaignUpsell) == 0x000660, "Member 'UVBucksStoreScreen_C::bShowingCampaignUpsell' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, bUseMobileLayout) == 0x000661, "Member 'UVBucksStoreScreen_C::bUseMobileLayout' has a wrong offset!");

}

