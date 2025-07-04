﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XpEverywhereUI

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "Engine_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "CommonUI_classes.hpp"
#include "XpEverywhereUI_structs.hpp"


namespace SDK
{

// Class XpEverywhereUI.XpEverywhereAccoladesWidget
// 0x0070 (0x0350 - 0x02E0)
class UXpEverywhereAccoladesWidget final : public UFortHUDElementWidget
{
public:
	uint8                                         Pad_2E0[0x60];                                     // 0x02E0(0x0060)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortPrioritizedWidgetData             PrioritizationData;                                // 0x0340(0x0002)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_342[0xE];                                      // 0x0342(0x000E)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void CloseWidget();
	void OnEventAdded();
	void OnStompedByOtherWidget();
	void OpenWidget(const class UFortAccoladeItemDefinition* AccoladeDef, const int32 XPValue, const class FText& DisplayName, const TSoftObjectPtr<class UTexture2D>& AccoladeLargePreviewImageOverride, const class FText& SimulatedName, const class FText& SimulatedText, const EFortSimulatedXPSize SimulatedXpSize);

	bool HasMoreXPEvents() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"XpEverywhereAccoladesWidget">();
	}
	static class UXpEverywhereAccoladesWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXpEverywhereAccoladesWidget>();
	}
};
static_assert(alignof(UXpEverywhereAccoladesWidget) == 0x000008, "Wrong alignment on UXpEverywhereAccoladesWidget");
static_assert(sizeof(UXpEverywhereAccoladesWidget) == 0x000350, "Wrong size on UXpEverywhereAccoladesWidget");
static_assert(offsetof(UXpEverywhereAccoladesWidget, PrioritizationData) == 0x000340, "Member 'UXpEverywhereAccoladesWidget::PrioritizationData' has a wrong offset!");

// Class XpEverywhereUI.XpEverywhereBar
// 0x00E0 (0x0498 - 0x03B8)
class UXpEverywhereBar final : public UCommonActivatableWidget
{
public:
	bool                                          bXpBarAlwaysActive;                                // 0x03B8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_3B9[0x7];                                      // 0x03B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortSocialAvatarIcon*                  SocialAvatarIcon;                                  // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_3C8[0xD0];                                     // 0x03C8(0x00D0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void DoneUpdatingXpBar();
	void OnXpBarInitialized(int32 CurrentXp, int32 CurrentLevel, int32 CurrentRemainingRestXP);
	void OnXpBarUpdated(int32 ShownXP, int32 ShownLevel, int32 NewDesiredXP, int32 NewDesiredLevel, int32 NewRemainingRestXP);

	int32 GetTotalXpRequiredForLevel(const int32 InLevel) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"XpEverywhereBar">();
	}
	static class UXpEverywhereBar* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXpEverywhereBar>();
	}
};
static_assert(alignof(UXpEverywhereBar) == 0x000008, "Wrong alignment on UXpEverywhereBar");
static_assert(sizeof(UXpEverywhereBar) == 0x000498, "Wrong size on UXpEverywhereBar");
static_assert(offsetof(UXpEverywhereBar, bXpBarAlwaysActive) == 0x0003B8, "Member 'UXpEverywhereBar::bXpBarAlwaysActive' has a wrong offset!");
static_assert(offsetof(UXpEverywhereBar, SocialAvatarIcon) == 0x0003C0, "Member 'UXpEverywhereBar::SocialAvatarIcon' has a wrong offset!");

// Class XpEverywhereUI.XpEverywhereLevelUpWidget
// 0x0008 (0x03C0 - 0x03B8)
class UXpEverywhereLevelUpWidget final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3B8[0x8];                                      // 0x03B8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void DoneLevelingUp();
	void OnShowWidget(const int32 NewLevel);

	void DisplayLevelUpRewards() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"XpEverywhereLevelUpWidget">();
	}
	static class UXpEverywhereLevelUpWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXpEverywhereLevelUpWidget>();
	}
};
static_assert(alignof(UXpEverywhereLevelUpWidget) == 0x000008, "Wrong alignment on UXpEverywhereLevelUpWidget");
static_assert(sizeof(UXpEverywhereLevelUpWidget) == 0x0003C0, "Wrong size on UXpEverywhereLevelUpWidget");

// Class XpEverywhereUI.XpEverywhereReticleWidget
// 0x0018 (0x02F8 - 0x02E0)
class UXpEverywhereReticleWidget final : public UFortHUDElementWidget
{
public:
	uint8                                         Pad_2E0[0x18];                                     // 0x02E0(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ForwardEvents();
	void HandleProfileUpdated();
	void UpdateRestXP(int32 RestXpRemaining);
	void UpdateXPAmount(int32 NewAmount, class USoundCue* Cue, const EFortSimulatedXPSize SimulatedXpSize);
	void UpdateXPSource(const class FText& NewSourceText);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"XpEverywhereReticleWidget">();
	}
	static class UXpEverywhereReticleWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXpEverywhereReticleWidget>();
	}
};
static_assert(alignof(UXpEverywhereReticleWidget) == 0x000008, "Wrong alignment on UXpEverywhereReticleWidget");
static_assert(sizeof(UXpEverywhereReticleWidget) == 0x0002F8, "Wrong size on UXpEverywhereReticleWidget");

// Class XpEverywhereUI.XpEverywhereRewardWidget
// 0x0090 (0x0370 - 0x02E0)
class UXpEverywhereRewardWidget final : public UFortHUDElementWidget
{
public:
	uint8                                         Pad_2E0[0x48];                                     // 0x02E0(0x0048)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UFortNotificationEntry>     DefaultEntryClass;                                 // 0x0328(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bHasPrioritizedWidgetFocus;                        // 0x0330(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_331[0x7];                                      // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortNotificationEntry*                 ActiveWidget;                                      // 0x0338(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortNotificationEntry*>         WidgetQueue;                                       // 0x0340(0x0010)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UVerticalBox*                           NotificationUpdatesBox;                            // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FXpEverywhereNotificationWidgetClass> NotificationClassPoolData;                   // 0x0358(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FFortPrioritizedWidgetData             PrioritizationData;                                // 0x0368(0x0002)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_36A[0x6];                                      // 0x036A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void HandleNotificationUpdateFinished();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"XpEverywhereRewardWidget">();
	}
	static class UXpEverywhereRewardWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXpEverywhereRewardWidget>();
	}
};
static_assert(alignof(UXpEverywhereRewardWidget) == 0x000008, "Wrong alignment on UXpEverywhereRewardWidget");
static_assert(sizeof(UXpEverywhereRewardWidget) == 0x000370, "Wrong size on UXpEverywhereRewardWidget");
static_assert(offsetof(UXpEverywhereRewardWidget, DefaultEntryClass) == 0x000328, "Member 'UXpEverywhereRewardWidget::DefaultEntryClass' has a wrong offset!");
static_assert(offsetof(UXpEverywhereRewardWidget, bHasPrioritizedWidgetFocus) == 0x000330, "Member 'UXpEverywhereRewardWidget::bHasPrioritizedWidgetFocus' has a wrong offset!");
static_assert(offsetof(UXpEverywhereRewardWidget, ActiveWidget) == 0x000338, "Member 'UXpEverywhereRewardWidget::ActiveWidget' has a wrong offset!");
static_assert(offsetof(UXpEverywhereRewardWidget, WidgetQueue) == 0x000340, "Member 'UXpEverywhereRewardWidget::WidgetQueue' has a wrong offset!");
static_assert(offsetof(UXpEverywhereRewardWidget, NotificationUpdatesBox) == 0x000350, "Member 'UXpEverywhereRewardWidget::NotificationUpdatesBox' has a wrong offset!");
static_assert(offsetof(UXpEverywhereRewardWidget, NotificationClassPoolData) == 0x000358, "Member 'UXpEverywhereRewardWidget::NotificationClassPoolData' has a wrong offset!");
static_assert(offsetof(UXpEverywhereRewardWidget, PrioritizationData) == 0x000368, "Member 'UXpEverywhereRewardWidget::PrioritizationData' has a wrong offset!");

// Class XpEverywhereUI.XpEverywhereUIComponent
// 0x00C0 (0x0160 - 0x00A0)
class UXpEverywhereUIComponent : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x90];                                      // 0x00A0(0x0090)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  XpEverywhereHiddenElementTags;                     // 0x0130(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                         Pad_150[0x10];                                     // 0x0150(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"XpEverywhereUIComponent">();
	}
	static class UXpEverywhereUIComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXpEverywhereUIComponent>();
	}
};
static_assert(alignof(UXpEverywhereUIComponent) == 0x000008, "Wrong alignment on UXpEverywhereUIComponent");
static_assert(sizeof(UXpEverywhereUIComponent) == 0x000160, "Wrong size on UXpEverywhereUIComponent");
static_assert(offsetof(UXpEverywhereUIComponent, XpEverywhereHiddenElementTags) == 0x000130, "Member 'UXpEverywhereUIComponent::XpEverywhereHiddenElementTags' has a wrong offset!");

}

