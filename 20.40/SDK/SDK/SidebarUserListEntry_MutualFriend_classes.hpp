﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SidebarUserListEntry_MutualFriend

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SidebarUserListEntry_MutualFriend.SidebarUserListEntry_MutualFriend_C
// 0x0030 (0x1090 - 0x1060)
class USidebarUserListEntry_MutualFriend_C final : public UFortMutualFriendSocialUserListEntry
{
public:
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;                   // 0x1060(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   Text_DisplayName;                                  // 0x1068(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           EncourageEpicFriend_IdleColor;                     // 0x1070(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           EncourageEpicFriend_HoveredColor;                  // 0x1080(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarUserListEntry_MutualFriend_C">();
	}
	static class USidebarUserListEntry_MutualFriend_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarUserListEntry_MutualFriend_C>();
	}
};
static_assert(alignof(USidebarUserListEntry_MutualFriend_C) == 0x000010, "Wrong alignment on USidebarUserListEntry_MutualFriend_C");
static_assert(sizeof(USidebarUserListEntry_MutualFriend_C) == 0x001090, "Wrong size on USidebarUserListEntry_MutualFriend_C");
static_assert(offsetof(USidebarUserListEntry_MutualFriend_C, EmptyButtonToEatOneMouseUpEvent) == 0x001060, "Member 'USidebarUserListEntry_MutualFriend_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_MutualFriend_C, Text_DisplayName) == 0x001068, "Member 'USidebarUserListEntry_MutualFriend_C::Text_DisplayName' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_MutualFriend_C, EncourageEpicFriend_IdleColor) == 0x001070, "Member 'USidebarUserListEntry_MutualFriend_C::EncourageEpicFriend_IdleColor' has a wrong offset!");
static_assert(offsetof(USidebarUserListEntry_MutualFriend_C, EncourageEpicFriend_HoveredColor) == 0x001080, "Member 'USidebarUserListEntry_MutualFriend_C::EncourageEpicFriend_HoveredColor' has a wrong offset!");

}

