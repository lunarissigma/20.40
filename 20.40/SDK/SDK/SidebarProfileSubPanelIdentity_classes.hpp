﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SidebarProfileSubPanelIdentity

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SidebarProfileSubPanelIdentity.SidebarProfileSubPanelIdentity_C
// 0x0030 (0x0360 - 0x0330)
class USidebarProfileSubPanelIdentity_C final : public UFortSocialProfileIdentity
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBox_SeasonLevel;                         // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_89;                                          // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_243;                                         // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Battlepass;                                  // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_SeasonLevel;                                  // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SidebarProfileSubPanelIdentity(int32 EntryPoint);
	void OnFinishedProfileLoading();
	void OnStartProfileLoading();
	void SetBattlePassVisiblity(bool bIsVisible);
	void SetFortniteCrewVisiblity(bool bIsVisible);
	void SetSeasonLevel(int32 Level);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarProfileSubPanelIdentity_C">();
	}
	static class USidebarProfileSubPanelIdentity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarProfileSubPanelIdentity_C>();
	}
};
static_assert(alignof(USidebarProfileSubPanelIdentity_C) == 0x000008, "Wrong alignment on USidebarProfileSubPanelIdentity_C");
static_assert(sizeof(USidebarProfileSubPanelIdentity_C) == 0x000360, "Wrong size on USidebarProfileSubPanelIdentity_C");
static_assert(offsetof(USidebarProfileSubPanelIdentity_C, UberGraphFrame) == 0x000330, "Member 'USidebarProfileSubPanelIdentity_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarProfileSubPanelIdentity_C, HorizontalBox_SeasonLevel) == 0x000338, "Member 'USidebarProfileSubPanelIdentity_C::HorizontalBox_SeasonLevel' has a wrong offset!");
static_assert(offsetof(USidebarProfileSubPanelIdentity_C, Image_89) == 0x000340, "Member 'USidebarProfileSubPanelIdentity_C::Image_89' has a wrong offset!");
static_assert(offsetof(USidebarProfileSubPanelIdentity_C, Image_243) == 0x000348, "Member 'USidebarProfileSubPanelIdentity_C::Image_243' has a wrong offset!");
static_assert(offsetof(USidebarProfileSubPanelIdentity_C, Image_Battlepass) == 0x000350, "Member 'USidebarProfileSubPanelIdentity_C::Image_Battlepass' has a wrong offset!");
static_assert(offsetof(USidebarProfileSubPanelIdentity_C, Text_SeasonLevel) == 0x000358, "Member 'USidebarProfileSubPanelIdentity_C::Text_SeasonLevel' has a wrong offset!");

}

