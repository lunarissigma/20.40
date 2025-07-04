﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SidebarLocalUserButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SidebarLocalUserButton.SidebarLocalUserButton_C
// 0x0070 (0x10B0 - 0x1040)
class USidebarLocalUserButton_C final : public UFortSocialSidebarLocalUserButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1040(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Unselected;                                        // 0x1048(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hovered;                                           // 0x1050(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Selected;                                          // 0x1058(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_OnlineStatusIndicator;                      // 0x1060(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMobileImage*                       Image_TabIcon;                                     // 0x1068(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           Online;                                            // 0x1070(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Offline;                                           // 0x1080(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Away;                                              // 0x1090(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color_PresenceIndicatorOutline;                    // 0x10A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnDeselected();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void ExecuteUbergraph_SidebarLocalUserButton(int32 EntryPoint);
	void OnOnlineStatusChanged(ELocalUserOnlineStatus OnlineStatus);
	void PreConstruct(bool IsDesignTime);
	void SetPresenceIndicatorOutlineColor(const struct FLinearColor& Value);
	void SetSkewBoxColor(const struct FLinearColor& InputPin);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarLocalUserButton_C">();
	}
	static class USidebarLocalUserButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarLocalUserButton_C>();
	}
};
static_assert(alignof(USidebarLocalUserButton_C) == 0x000010, "Wrong alignment on USidebarLocalUserButton_C");
static_assert(sizeof(USidebarLocalUserButton_C) == 0x0010B0, "Wrong size on USidebarLocalUserButton_C");
static_assert(offsetof(USidebarLocalUserButton_C, UberGraphFrame) == 0x001040, "Member 'USidebarLocalUserButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarLocalUserButton_C, Unselected) == 0x001048, "Member 'USidebarLocalUserButton_C::Unselected' has a wrong offset!");
static_assert(offsetof(USidebarLocalUserButton_C, Hovered) == 0x001050, "Member 'USidebarLocalUserButton_C::Hovered' has a wrong offset!");
static_assert(offsetof(USidebarLocalUserButton_C, Selected) == 0x001058, "Member 'USidebarLocalUserButton_C::Selected' has a wrong offset!");
static_assert(offsetof(USidebarLocalUserButton_C, Border_OnlineStatusIndicator) == 0x001060, "Member 'USidebarLocalUserButton_C::Border_OnlineStatusIndicator' has a wrong offset!");
static_assert(offsetof(USidebarLocalUserButton_C, Image_TabIcon) == 0x001068, "Member 'USidebarLocalUserButton_C::Image_TabIcon' has a wrong offset!");
static_assert(offsetof(USidebarLocalUserButton_C, Online) == 0x001070, "Member 'USidebarLocalUserButton_C::Online' has a wrong offset!");
static_assert(offsetof(USidebarLocalUserButton_C, Offline) == 0x001080, "Member 'USidebarLocalUserButton_C::Offline' has a wrong offset!");
static_assert(offsetof(USidebarLocalUserButton_C, Away) == 0x001090, "Member 'USidebarLocalUserButton_C::Away' has a wrong offset!");
static_assert(offsetof(USidebarLocalUserButton_C, Color_PresenceIndicatorOutline) == 0x0010A0, "Member 'USidebarLocalUserButton_C::Color_PresenceIndicatorOutline' has a wrong offset!");

}

