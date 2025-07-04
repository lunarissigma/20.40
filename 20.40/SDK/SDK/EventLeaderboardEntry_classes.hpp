﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EventLeaderboardEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EventLeaderboardEntry.EventLeaderboardEntry_C
// 0x00C0 (0x10C0 - 0x1000)
class UEventLeaderboardEntry_C final : public UFortEventLeaderboardEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1000(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Selected;                                          // 0x1008(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_IsPlayer;                             // 0x1010(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_Zebra;                                // 0x1018(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_TeamLine1;                         // 0x1020(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_TeamLine2;                         // 0x1028(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_Rank;                         // 0x1030(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_TeamSize;                     // 0x1038(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_OnlineStatus;                                // 0x1040(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Qualified;                                   // 0x1048(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_SelectedBG;                                  // 0x1050(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_OnlineStatus;                              // 0x1058(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_QualifiedContent;                          // 0x1060(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Rank;                                         // 0x1068(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Rank_First;                                   // 0x1070(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Score;                                        // 0x1078(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Team;                                         // 0x1080(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          isZebra;                                           // 0x1088(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          isPlayer;                                          // 0x1089(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_108A[0x6];                                     // 0x108A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UDataTable>              TEMPDatatableIdentities;                           // 0x1090(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          isMatchPoint;                                      // 0x10B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnDeselected();
	void BP_OnSelected();
	void EventColorize();
	void EventStyleEntry();
	void ExecuteUbergraph_EventLeaderboardEntry(int32 EntryPoint);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void OnTeammateDisplayNameAdded(const class UFortEventLeaderboardEntryData* LeaderboardEntryData);
	void PreConstruct(bool IsDesignTime);
	void SetEntryDetails(class UFortEventLeaderboardEntryData* EntryData);
	void SetTeamDisplayNames(class UFortEventLeaderboardEntryData* Entry_Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventLeaderboardEntry_C">();
	}
	static class UEventLeaderboardEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventLeaderboardEntry_C>();
	}
};
static_assert(alignof(UEventLeaderboardEntry_C) == 0x000010, "Wrong alignment on UEventLeaderboardEntry_C");
static_assert(sizeof(UEventLeaderboardEntry_C) == 0x0010C0, "Wrong size on UEventLeaderboardEntry_C");
static_assert(offsetof(UEventLeaderboardEntry_C, UberGraphFrame) == 0x001000, "Member 'UEventLeaderboardEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, Selected) == 0x001008, "Member 'UEventLeaderboardEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, CommonBorder_IsPlayer) == 0x001010, "Member 'UEventLeaderboardEntry_C::CommonBorder_IsPlayer' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, CommonBorder_Zebra) == 0x001018, "Member 'UEventLeaderboardEntry_C::CommonBorder_Zebra' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, CommonTextBlock_TeamLine1) == 0x001020, "Member 'UEventLeaderboardEntry_C::CommonTextBlock_TeamLine1' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, CommonTextBlock_TeamLine2) == 0x001028, "Member 'UEventLeaderboardEntry_C::CommonTextBlock_TeamLine2' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, CommonWidgetSwitcher_Rank) == 0x001030, "Member 'UEventLeaderboardEntry_C::CommonWidgetSwitcher_Rank' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, CommonWidgetSwitcher_TeamSize) == 0x001038, "Member 'UEventLeaderboardEntry_C::CommonWidgetSwitcher_TeamSize' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, Image_OnlineStatus) == 0x001040, "Member 'UEventLeaderboardEntry_C::Image_OnlineStatus' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, Image_Qualified) == 0x001048, "Member 'UEventLeaderboardEntry_C::Image_Qualified' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, Image_SelectedBG) == 0x001050, "Member 'UEventLeaderboardEntry_C::Image_SelectedBG' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, Overlay_OnlineStatus) == 0x001058, "Member 'UEventLeaderboardEntry_C::Overlay_OnlineStatus' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, Overlay_QualifiedContent) == 0x001060, "Member 'UEventLeaderboardEntry_C::Overlay_QualifiedContent' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, Text_Rank) == 0x001068, "Member 'UEventLeaderboardEntry_C::Text_Rank' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, Text_Rank_First) == 0x001070, "Member 'UEventLeaderboardEntry_C::Text_Rank_First' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, Text_Score) == 0x001078, "Member 'UEventLeaderboardEntry_C::Text_Score' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, Text_Team) == 0x001080, "Member 'UEventLeaderboardEntry_C::Text_Team' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, isZebra) == 0x001088, "Member 'UEventLeaderboardEntry_C::isZebra' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, isPlayer) == 0x001089, "Member 'UEventLeaderboardEntry_C::isPlayer' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, TEMPDatatableIdentities) == 0x001090, "Member 'UEventLeaderboardEntry_C::TEMPDatatableIdentities' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, isMatchPoint) == 0x0010B8, "Member 'UEventLeaderboardEntry_C::isMatchPoint' has a wrong offset!");

}

