﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Scoreboard_UI

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Scoreboard_UI.Scoreboard_UI_C
// 0x0178 (0x04B0 - 0x0338)
class UScoreboard_UI_C final : public UMinigameWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       BackingFullOpacity;                                // 0x0340(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HideShowDisplay;                                   // 0x0348(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       WinnerDisplayIntro;                                // 0x0350(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x0358(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                           All;                                               // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Backing;                                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BackingTris;                                       // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ColumnHolder;                                      // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CountdownHeaderlarge;                              // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CountdownHeaderSmall;                              // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CountdownText;                                     // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             DataScrollBox;                                     // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       GameStats;                                         // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Glow;                                              // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Header;                                            // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_110;                                         // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_900;                                         // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1007;                                        // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1009;                                        // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               PlacementMarker;                                   // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       RoundsCountTotal;                                  // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ScoreboardDisplay;                                 // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         TransitionInfo;                                    // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       WinDescription;                                    // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                WinDescriptionColor;                               // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               WinnerDisplay;                                     // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       WinnerName;                                        // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                WinnerNameColor;                                   // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           WinnerVBox;                                        // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FLinearColor>                   TeamColors;                                        // 0x0430(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIngameScoreboard;                                 // 0x0440(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_441[0x7];                                      // 0x0441(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UScoreboard_UI_ColumnLabels_C*          ScoreboardColumnWidget;                            // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UScoreboard_Team_Widget_C*>      TeamScoreDisplays;                                 // 0x0450(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UScoreboard_UI_Row_C*>           PlayerScoreDisplays;                               // 0x0460(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FTimerHandle                           UpdateDisplayTimerHandle;                          // 0x0470(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsTeamGame;                                       // 0x0478(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRoundsGame;                                      // 0x0479(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47A[0x2];                                      // 0x047A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StatUpdateRate;                                    // 0x047C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FMinigameScoreboardPlayerRow>   TestData;                                          // 0x0480(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	EMinigameWinCondition                         WinCondition;                                      // 0x0490(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowCumulativeScoreboard;                         // 0x0491(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_492[0x6];                                      // 0x0492(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              OnMinigameEnd;                                     // 0x0498(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsCareerScoreboard;                               // 0x04A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimateBacking();
	void DoHideUI();
	void DoShowUI();
	void ExecuteUbergraph_Scoreboard_UI(int32 EntryPoint);
	void FullscreenMapToggle(bool bFullscreenMapVisible);
	void GetScoreboardStateNames(TArray<class FText>* OutNames);
	void GetTargetPlayerState(class APlayerState** PlayerState);
	void GetTargetScoreRow(class APlayerState* TargetPlayerState, class UWidget** Widget);
	void HandleScoreboardColumnsData(TArray<class FText>& ScoreboardStatNames, bool bTeamGame, bool bDisplayingWins);
	void HideMinigameEndUI();
	void HideUnusedRows(bool bTeamGame, int32 NumBuckets);
	void HideWinnerDisplay();
	void IntroAnim();
	bool IsMinigameTeamBased(class AFortMinigame* MinigameToCheck);
	void MakePlayerScoreboardRow(const struct FMinigameScoreboardPlayerRow& PlayerRow, int32 PlayerIndex, bool ShowWins, int32 NumPlayers, int32 Standing, class UScoreboard_UI_Row_C** ScoreboardRow);
	class UScoreboard_Team_Widget_C* MakeTeamScoreboardRow(const struct FMinigameScoreboardBucketRow& MinigameScoreboardBucketRow, bool IsRoundsGame_0);
	void OnDisplayLeavingVolumeUI(bool bDisplay);
	void OnDisplayMinigameEndUI(bool bDisplay);
	void PreConstruct(bool IsDesignTime);
	void ResetScoreDisplays();
	void SetCountdownText(const class FText& Text);
	void SetIsCareerScoreboard(bool bInValue);
	void SetStatsColumns();
	void ShowMinigameEndUI(bool ShowGameTotals, EMinigameScoreboardStates ScoreboardState, float DisplayTime);
	void ShowTargetPlayerStateInScrollBox();
	void ShowWinnerDisplay(const class FText& Winner_Name, const class FText& Win_Description, bool GameHasWinner);
	bool ShowWinsColumn();
	void UpdateActiveStats();
	void UpdateRoundDisplay(bool GameEnd, EMinigameScoreboardStates ScoreboardState);
	void UpdateStats(bool ShowGameTotals, EMinigameScoreboardStates ScoreboardState);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Scoreboard_UI_C">();
	}
	static class UScoreboard_UI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScoreboard_UI_C>();
	}
};
static_assert(alignof(UScoreboard_UI_C) == 0x000008, "Wrong alignment on UScoreboard_UI_C");
static_assert(sizeof(UScoreboard_UI_C) == 0x0004B0, "Wrong size on UScoreboard_UI_C");
static_assert(offsetof(UScoreboard_UI_C, UberGraphFrame) == 0x000338, "Member 'UScoreboard_UI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, BackingFullOpacity) == 0x000340, "Member 'UScoreboard_UI_C::BackingFullOpacity' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, HideShowDisplay) == 0x000348, "Member 'UScoreboard_UI_C::HideShowDisplay' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, WinnerDisplayIntro) == 0x000350, "Member 'UScoreboard_UI_C::WinnerDisplayIntro' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, Intro) == 0x000358, "Member 'UScoreboard_UI_C::Intro' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, All) == 0x000360, "Member 'UScoreboard_UI_C::All' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, Backing) == 0x000368, "Member 'UScoreboard_UI_C::Backing' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, BackingTris) == 0x000370, "Member 'UScoreboard_UI_C::BackingTris' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, ColumnHolder) == 0x000378, "Member 'UScoreboard_UI_C::ColumnHolder' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, CountdownHeaderlarge) == 0x000380, "Member 'UScoreboard_UI_C::CountdownHeaderlarge' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, CountdownHeaderSmall) == 0x000388, "Member 'UScoreboard_UI_C::CountdownHeaderSmall' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, CountdownText) == 0x000390, "Member 'UScoreboard_UI_C::CountdownText' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, DataScrollBox) == 0x000398, "Member 'UScoreboard_UI_C::DataScrollBox' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, GameStats) == 0x0003A0, "Member 'UScoreboard_UI_C::GameStats' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, Glow) == 0x0003A8, "Member 'UScoreboard_UI_C::Glow' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, Header) == 0x0003B0, "Member 'UScoreboard_UI_C::Header' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, Image_110) == 0x0003B8, "Member 'UScoreboard_UI_C::Image_110' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, Image_900) == 0x0003C0, "Member 'UScoreboard_UI_C::Image_900' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, Image_1007) == 0x0003C8, "Member 'UScoreboard_UI_C::Image_1007' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, Image_1009) == 0x0003D0, "Member 'UScoreboard_UI_C::Image_1009' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, PlacementMarker) == 0x0003D8, "Member 'UScoreboard_UI_C::PlacementMarker' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, RoundsCountTotal) == 0x0003E0, "Member 'UScoreboard_UI_C::RoundsCountTotal' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, SafeZone_0) == 0x0003E8, "Member 'UScoreboard_UI_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, ScoreboardDisplay) == 0x0003F0, "Member 'UScoreboard_UI_C::ScoreboardDisplay' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, TransitionInfo) == 0x0003F8, "Member 'UScoreboard_UI_C::TransitionInfo' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, WinDescription) == 0x000400, "Member 'UScoreboard_UI_C::WinDescription' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, WinDescriptionColor) == 0x000408, "Member 'UScoreboard_UI_C::WinDescriptionColor' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, WinnerDisplay) == 0x000410, "Member 'UScoreboard_UI_C::WinnerDisplay' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, WinnerName) == 0x000418, "Member 'UScoreboard_UI_C::WinnerName' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, WinnerNameColor) == 0x000420, "Member 'UScoreboard_UI_C::WinnerNameColor' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, WinnerVBox) == 0x000428, "Member 'UScoreboard_UI_C::WinnerVBox' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, TeamColors) == 0x000430, "Member 'UScoreboard_UI_C::TeamColors' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, bIngameScoreboard) == 0x000440, "Member 'UScoreboard_UI_C::bIngameScoreboard' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, ScoreboardColumnWidget) == 0x000448, "Member 'UScoreboard_UI_C::ScoreboardColumnWidget' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, TeamScoreDisplays) == 0x000450, "Member 'UScoreboard_UI_C::TeamScoreDisplays' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, PlayerScoreDisplays) == 0x000460, "Member 'UScoreboard_UI_C::PlayerScoreDisplays' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, UpdateDisplayTimerHandle) == 0x000470, "Member 'UScoreboard_UI_C::UpdateDisplayTimerHandle' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, bIsTeamGame) == 0x000478, "Member 'UScoreboard_UI_C::bIsTeamGame' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, IsRoundsGame) == 0x000479, "Member 'UScoreboard_UI_C::IsRoundsGame' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, StatUpdateRate) == 0x00047C, "Member 'UScoreboard_UI_C::StatUpdateRate' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, TestData) == 0x000480, "Member 'UScoreboard_UI_C::TestData' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, WinCondition) == 0x000490, "Member 'UScoreboard_UI_C::WinCondition' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, bShowCumulativeScoreboard) == 0x000491, "Member 'UScoreboard_UI_C::bShowCumulativeScoreboard' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, OnMinigameEnd) == 0x000498, "Member 'UScoreboard_UI_C::OnMinigameEnd' has a wrong offset!");
static_assert(offsetof(UScoreboard_UI_C, bIsCareerScoreboard) == 0x0004A8, "Member 'UScoreboard_UI_C::bIsCareerScoreboard' has a wrong offset!");

}

