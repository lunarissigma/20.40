﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LocalUserEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LocalUserEntry.LocalUserEntry_C
// 0x0070 (0x10B0 - 0x1040)
class ULocalUserEntry_C final : public UFortSocialEventRSVPLocalUserEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1040(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hovered;                                           // 0x1048(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_OnlineStatusIndicator;                      // 0x1050(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMobileImage*                       FortMobileImage_enforzer;                          // 0x1058(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_MicIcon;                                     // 0x1060(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                LocalUserEntryBorder;                              // 0x1068(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMobileImage*                       SettingsIcon;                                      // 0x1070(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           Online;                                            // 0x1078(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Offline;                                           // 0x1088(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Away;                                              // 0x1098(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_LocalUserEntry(int32 EntryPoint);
	void HandleOnlineIndicatorView(ELocalUserOnlineStatus InLocalUserOnlineStatus);
	void OnOnlineStatusChanged(ELocalUserOnlineStatus OnlineStatus);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LocalUserEntry_C">();
	}
	static class ULocalUserEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULocalUserEntry_C>();
	}
};
static_assert(alignof(ULocalUserEntry_C) == 0x000010, "Wrong alignment on ULocalUserEntry_C");
static_assert(sizeof(ULocalUserEntry_C) == 0x0010B0, "Wrong size on ULocalUserEntry_C");
static_assert(offsetof(ULocalUserEntry_C, UberGraphFrame) == 0x001040, "Member 'ULocalUserEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULocalUserEntry_C, Hovered) == 0x001048, "Member 'ULocalUserEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(ULocalUserEntry_C, Border_OnlineStatusIndicator) == 0x001050, "Member 'ULocalUserEntry_C::Border_OnlineStatusIndicator' has a wrong offset!");
static_assert(offsetof(ULocalUserEntry_C, FortMobileImage_enforzer) == 0x001058, "Member 'ULocalUserEntry_C::FortMobileImage_enforzer' has a wrong offset!");
static_assert(offsetof(ULocalUserEntry_C, Image_MicIcon) == 0x001060, "Member 'ULocalUserEntry_C::Image_MicIcon' has a wrong offset!");
static_assert(offsetof(ULocalUserEntry_C, LocalUserEntryBorder) == 0x001068, "Member 'ULocalUserEntry_C::LocalUserEntryBorder' has a wrong offset!");
static_assert(offsetof(ULocalUserEntry_C, SettingsIcon) == 0x001070, "Member 'ULocalUserEntry_C::SettingsIcon' has a wrong offset!");
static_assert(offsetof(ULocalUserEntry_C, Online) == 0x001078, "Member 'ULocalUserEntry_C::Online' has a wrong offset!");
static_assert(offsetof(ULocalUserEntry_C, Offline) == 0x001088, "Member 'ULocalUserEntry_C::Offline' has a wrong offset!");
static_assert(offsetof(ULocalUserEntry_C, Away) == 0x001098, "Member 'ULocalUserEntry_C::Away' has a wrong offset!");

}

