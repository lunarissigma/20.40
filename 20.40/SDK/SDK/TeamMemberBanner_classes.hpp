﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TeamMemberBanner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TeamMemberBanner.TeamMemberBanner_C
// 0x0040 (0x1070 - 0x1030)
class UTeamMemberBanner_C final : public UFortCampaignTeamMemberBanner
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                      ButtonPartyFinder;                                 // 0x1038(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Connected;                                         // 0x1040(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Connecting;                                        // 0x1048(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_571;                                         // 0x1050(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Open;                                              // 0x1058(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 OpenImage;                                         // 0x1060(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcherLegacy*            Switcher_MemberState;                              // 0x1068(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void ExecuteUbergraph_TeamMemberBanner(int32 EntryPoint);
	void HandleMouseHoverVisualState(bool Hover);
	void OnTeamMemberConnectionStateChanged(EFortMemberConnectionState NewConnectionState);
	void OpenPartyFinder();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TeamMemberBanner_C">();
	}
	static class UTeamMemberBanner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTeamMemberBanner_C>();
	}
};
static_assert(alignof(UTeamMemberBanner_C) == 0x000010, "Wrong alignment on UTeamMemberBanner_C");
static_assert(sizeof(UTeamMemberBanner_C) == 0x001070, "Wrong size on UTeamMemberBanner_C");
static_assert(offsetof(UTeamMemberBanner_C, UberGraphFrame) == 0x001030, "Member 'UTeamMemberBanner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTeamMemberBanner_C, ButtonPartyFinder) == 0x001038, "Member 'UTeamMemberBanner_C::ButtonPartyFinder' has a wrong offset!");
static_assert(offsetof(UTeamMemberBanner_C, Connected) == 0x001040, "Member 'UTeamMemberBanner_C::Connected' has a wrong offset!");
static_assert(offsetof(UTeamMemberBanner_C, Connecting) == 0x001048, "Member 'UTeamMemberBanner_C::Connecting' has a wrong offset!");
static_assert(offsetof(UTeamMemberBanner_C, Image_571) == 0x001050, "Member 'UTeamMemberBanner_C::Image_571' has a wrong offset!");
static_assert(offsetof(UTeamMemberBanner_C, Open) == 0x001058, "Member 'UTeamMemberBanner_C::Open' has a wrong offset!");
static_assert(offsetof(UTeamMemberBanner_C, OpenImage) == 0x001060, "Member 'UTeamMemberBanner_C::OpenImage' has a wrong offset!");
static_assert(offsetof(UTeamMemberBanner_C, Switcher_MemberState) == 0x001068, "Member 'UTeamMemberBanner_C::Switcher_MemberState' has a wrong offset!");

}

