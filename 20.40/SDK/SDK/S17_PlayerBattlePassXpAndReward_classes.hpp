﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S17_PlayerBattlePassXpAndReward

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass S17_PlayerBattlePassXpAndReward.S17_PlayerBattlePassXpAndReward_C
// 0x0038 (0x02D8 - 0x02A0)
class US17_PlayerBattlePassXpAndReward_C final : public UFortSeasonDataWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_392;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_RaceTrack;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   RichText_CurrentLevel;                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   RichText_Level;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_5stars;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Max_BPLevel_for_Rewards;                           // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_S17_PlayerBattlePassXpAndReward(int32 EntryPoint);
	void OnLevelChanged();
	void OnProgressUpdated();
	void OnSuperCharged();
	void Update_Text();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"S17_PlayerBattlePassXpAndReward_C">();
	}
	static class US17_PlayerBattlePassXpAndReward_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<US17_PlayerBattlePassXpAndReward_C>();
	}
};
static_assert(alignof(US17_PlayerBattlePassXpAndReward_C) == 0x000008, "Wrong alignment on US17_PlayerBattlePassXpAndReward_C");
static_assert(sizeof(US17_PlayerBattlePassXpAndReward_C) == 0x0002D8, "Wrong size on US17_PlayerBattlePassXpAndReward_C");
static_assert(offsetof(US17_PlayerBattlePassXpAndReward_C, UberGraphFrame) == 0x0002A0, "Member 'US17_PlayerBattlePassXpAndReward_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(US17_PlayerBattlePassXpAndReward_C, Image_392) == 0x0002A8, "Member 'US17_PlayerBattlePassXpAndReward_C::Image_392' has a wrong offset!");
static_assert(offsetof(US17_PlayerBattlePassXpAndReward_C, Image_RaceTrack) == 0x0002B0, "Member 'US17_PlayerBattlePassXpAndReward_C::Image_RaceTrack' has a wrong offset!");
static_assert(offsetof(US17_PlayerBattlePassXpAndReward_C, RichText_CurrentLevel) == 0x0002B8, "Member 'US17_PlayerBattlePassXpAndReward_C::RichText_CurrentLevel' has a wrong offset!");
static_assert(offsetof(US17_PlayerBattlePassXpAndReward_C, RichText_Level) == 0x0002C0, "Member 'US17_PlayerBattlePassXpAndReward_C::RichText_Level' has a wrong offset!");
static_assert(offsetof(US17_PlayerBattlePassXpAndReward_C, VerticalBox_5stars) == 0x0002C8, "Member 'US17_PlayerBattlePassXpAndReward_C::VerticalBox_5stars' has a wrong offset!");
static_assert(offsetof(US17_PlayerBattlePassXpAndReward_C, Max_BPLevel_for_Rewards) == 0x0002D0, "Member 'US17_PlayerBattlePassXpAndReward_C::Max_BPLevel_for_Rewards' has a wrong offset!");

}

