﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Armadillo_PreEventManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Armadillo_PreEventManager.BP_Armadillo_PreEventManager_C
// 0x0380 (0x05F0 - 0x0270)
class ABP_Armadillo_PreEventManager_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_Generic_TimerManager_C*             CountdownTimerManager;                             // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AArmadillo_Mutator_SpecialEvent_C*      SpecialEventMutator;                               // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CountdownCheckTimerHandle;                         // 0x0290(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FString                                 ArmadilloCalendarEventName;                        // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         ShowHUDTime;                                       // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Armadillo_Intro_EventTrigger;                      // 0x02AC(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          HavePodBeenDisabled;                               // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B1[0x7];                                      // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              Disable_Pods;                                      // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<TSoftObjectPtr<class AArmadillo_PodInteract_C>> PodInteractRefs;                          // 0x02C8(0x0010)(Edit, BlueprintVisible)
	struct FGameplayTagContainer                  DefaultWeaponReticleHUDTag;                        // 0x02D8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          PlayMontage;                                       // 0x02F8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	EFortPawnStasisMode                           In_Stasis_Mode;                                    // 0x02F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FA[0x2];                                      // 0x02FA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         IntroAnimStartOffset;                              // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAnimMontage*>                   Medium_Female_Moon_Intro_Anim;                     // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UAnimMontage*>                   Large_Female_Moon_Intro_Anim;                      // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UAnimMontage*>                   Medium_Male_Moon_Intro_Anim;                       // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UAnimMontage*>                   Large_Male_Moon_Intro_Anim;                        // 0x0330(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRotator                               PawnSpawnRotation;                                 // 0x0340(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortPlayerPawnAthena*                  Pawn;                                              // 0x0358(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Intro_Length;                                      // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_364[0x4];                                      // 0x0364(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           ResumeMontageTimer;                                // 0x0368(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           FinishedIntroBackupTimer;                          // 0x0370(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bClientFinishedIntro;                              // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_379[0x3];                                      // 0x0379(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           Moon_Montage_Resume_Tag;                           // 0x037C(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Moon_Stasis_End_Tag;                               // 0x0380(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Moon_Montage_Pause_Tag;                            // 0x0384(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Moon_Montage_Play_Tag;                             // 0x0388(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38C[0x4];                                      // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Transform;                                         // 0x0390(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AArmadillo_Mutator_SpecialRelevancy_C*  As_Armadillo_Mutator_Special_Relevancy;            // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PodCount;                                          // 0x03F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FC[0x4];                                      // 0x03FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class AArmadillo_Preshow_Intro_C> SoftRefArmadilloPreshowIntro;                   // 0x0400(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class AArmadillo_Preshow_C>    SoftRefArmadilloPreshowMaster;                     // 0x0428(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class AActor*>                         PosSpawnLocations;                                 // 0x0450(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class FName>                           ArtemisTerrainVisuals;                             // 0x0460(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bShouldArtemisLevelsBeVisibile;                    // 0x0470(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                          ActivatePodsEarly;                                 // 0x0471(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TestingIntroDelay;                                 // 0x0472(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_473[0x1];                                      // 0x0473(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TestingDelay;                                      // 0x0474(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class AActor>                  PodAttachPoint;                                    // 0x0478(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class ALevelSequenceActor*>            PodEnterSequencesLeft;                             // 0x04A0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class ALevelSequenceActor*>            PodEnterSequencesRight;                            // 0x04B0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<TSoftObjectPtr<class ALevelSequenceActor>> PreshowVOSequences;                            // 0x04C0(0x0010)(Edit, BlueprintVisible)
	int32                                         CurrentVOSequence;                                 // 0x04D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D4[0x4];                                      // 0x04D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ALevelSequenceActor*                    PlayPreshowVO;                                     // 0x04D8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPastLoadingScreen;                               // 0x04E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E1[0x7];                                      // 0x04E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSoftObjectPtr<class ABP_Armadillo_IrisDoor_01_C>> IrisDoors;                             // 0x04E8(0x0010)(Edit, BlueprintVisible)
	TArray<TSoftObjectPtr<class ALevelSequenceActor>> IrisSequences;                                 // 0x04F8(0x0010)(Edit, BlueprintVisible)
	class FString                                 StartCalendarEvent;                                // 0x0508(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         EventStartTime;                                    // 0x0518(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasEventStarted;                                   // 0x051C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Have_Pods_Been_Activated;                          // 0x051D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51E[0x2];                                      // 0x051E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PlayPreshowVOCheat;                                // 0x0520(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NextVODelayCheat;                                  // 0x0524(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PreshowVOCheatRep;                                 // 0x0528(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52C[0x4];                                      // 0x052C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundMix*                              PreShow_VO_Mix;                                    // 0x0530(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class AFortStaticMeshActor>    VisorMesh;                                         // 0x0538(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UMaterialInterface*                     NoCountdownMaterial;                               // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     CountdownMaterial;                                 // 0x0568(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HideCountdown;                                     // 0x0570(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_571[0x7];                                      // 0x0571(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class ABP_AudioVis_C>          AudioVisualizer;                                   // 0x0578(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGameplayTag                           Hide_Pawn_Gameplay_Tag;                            // 0x05A0(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A4[0x4];                                      // 0x05A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(class AArmadillo_Mutator_SpecialEvent_C* Mutator)> OnSpecialEventMutatorFound; // 0x05A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TSoftObjectPtr<class ABP_AudioScripting_Armadillo_Preshow_C> SoftRefAudioScriptingPreShow;       // 0x05B8(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class USoundBase*                             TubeExitSound;                                     // 0x05E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LoadedPastEventStarted;                            // 0x05E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActivatePods();
	void AddAutoRunInputHelper(class AFortPlayerController* FortPlayerController);
	void BP_Armadillo_PreEventManager_AutoGenFunc(EAthenaGamePhase GamePhase);
	void CheatPreshowVO();
	void Check_Calendar();
	void CheckCountdownState(int32 NewTimerState);
	void CheckIntroAnimToPlay(int32 PlayerIn, class AFortPlayerPawn* Player, class UAnimMontage** IntroAim);
	void CheckToHideCountdown();
	void ClientToServerRPC(const struct FSpecialClientEvent& ClientEventData);
	void CloseUnoccupiedPods();
	void DisableTacticalSprint(class APawn* Pawn_0);
	void End();
	void ExecuteUbergraph_BP_Armadillo_PreEventManager(int32 EntryPoint);
	void GetClosestIrisSequence(class AFortPlayerPawn* Pawn_0);
	void GetPlayerIndex(class AFortPlayerPawn* Player, int32* PlayerIndex);
	void HandlePawnVisibility(class AFortPlayerPawn* PlayerPawn, bool SetPawnHidden);
	void HandlePrimaryActorsReady();
	void HideEventCountdown();
	void Kick_Players_Out_of_Pods();
	void OnEventActive_50B62D954CFB94BBD2DD20B1AC9AF6E3(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void OnEventEnded_50B62D954CFB94BBD2DD20B1AC9AF6E3(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void OnEventStarted();
	void OnEventUpdated_50B62D954CFB94BBD2DD20B1AC9AF6E3(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void OnGamePhaseChanged(EAthenaGamePhase GamePhase);
	void OnPawnLoaded_Client();
	void OnPawnLoaded_Server(class AFortPlayerPawnAthena* NewPawn);
	void OnPreShowVOEnd();
	void OnReady_D381C71746BBAD0F4EA129BFBE7272DA(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void OnRep_bShouldArtemisLevelsBeVisibile();
	void OnRep_HideCountdown();
	void OnRep_PlayPreshowVO();
	void OnRep_PreshowVOCheatRep();
	void OnSyncComplete_51D980974CA28C56602EF1A7AB8A4164();
	void PlayPawnSpawnAnimation(class AFortPlayerPawn* Pawn_0, int32 PlayerIndex);
	void PlayPreShowIntro();
	void PlayPreshowMaster();
	void PlayTubeExitSound(class APawn* Pawn_0);
	void PreshowTest();
	void PreShowVO(bool Push);
	void Que_Up_Next_Cheat_VO();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void SetArtemisVisibility(bool bShouldBeVisible);
	void SetupPawnSpawnAnimation(class AFortPlayerPawn* Pawn_0);
	void Spawn_Pod_Interacts(class AFortPlayerPawn* Pawn_0);
	void startevent();
	void Toggle_Audio_Visualizer(bool IsVoPlaying);
	void Unbind_Check_Countdown();
	void UpdatePlayerStateComponents(class AFortPlayerPawnAthena* NewlyConnectedPlayer);

	void GetSpecialEventMutator(class AArmadillo_Mutator_SpecialEvent_C** Mutator) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Armadillo_PreEventManager_C">();
	}
	static class ABP_Armadillo_PreEventManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Armadillo_PreEventManager_C>();
	}
};
static_assert(alignof(ABP_Armadillo_PreEventManager_C) == 0x000010, "Wrong alignment on ABP_Armadillo_PreEventManager_C");
static_assert(sizeof(ABP_Armadillo_PreEventManager_C) == 0x0005F0, "Wrong size on ABP_Armadillo_PreEventManager_C");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, UberGraphFrame) == 0x000270, "Member 'ABP_Armadillo_PreEventManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, DefaultSceneRoot) == 0x000278, "Member 'ABP_Armadillo_PreEventManager_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, CountdownTimerManager) == 0x000280, "Member 'ABP_Armadillo_PreEventManager_C::CountdownTimerManager' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, SpecialEventMutator) == 0x000288, "Member 'ABP_Armadillo_PreEventManager_C::SpecialEventMutator' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, CountdownCheckTimerHandle) == 0x000290, "Member 'ABP_Armadillo_PreEventManager_C::CountdownCheckTimerHandle' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, ArmadilloCalendarEventName) == 0x000298, "Member 'ABP_Armadillo_PreEventManager_C::ArmadilloCalendarEventName' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, ShowHUDTime) == 0x0002A8, "Member 'ABP_Armadillo_PreEventManager_C::ShowHUDTime' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, Armadillo_Intro_EventTrigger) == 0x0002AC, "Member 'ABP_Armadillo_PreEventManager_C::Armadillo_Intro_EventTrigger' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, HavePodBeenDisabled) == 0x0002B0, "Member 'ABP_Armadillo_PreEventManager_C::HavePodBeenDisabled' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, Disable_Pods) == 0x0002B8, "Member 'ABP_Armadillo_PreEventManager_C::Disable_Pods' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, PodInteractRefs) == 0x0002C8, "Member 'ABP_Armadillo_PreEventManager_C::PodInteractRefs' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, DefaultWeaponReticleHUDTag) == 0x0002D8, "Member 'ABP_Armadillo_PreEventManager_C::DefaultWeaponReticleHUDTag' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, PlayMontage) == 0x0002F8, "Member 'ABP_Armadillo_PreEventManager_C::PlayMontage' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, In_Stasis_Mode) == 0x0002F9, "Member 'ABP_Armadillo_PreEventManager_C::In_Stasis_Mode' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, IntroAnimStartOffset) == 0x0002FC, "Member 'ABP_Armadillo_PreEventManager_C::IntroAnimStartOffset' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, Medium_Female_Moon_Intro_Anim) == 0x000300, "Member 'ABP_Armadillo_PreEventManager_C::Medium_Female_Moon_Intro_Anim' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, Large_Female_Moon_Intro_Anim) == 0x000310, "Member 'ABP_Armadillo_PreEventManager_C::Large_Female_Moon_Intro_Anim' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, Medium_Male_Moon_Intro_Anim) == 0x000320, "Member 'ABP_Armadillo_PreEventManager_C::Medium_Male_Moon_Intro_Anim' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, Large_Male_Moon_Intro_Anim) == 0x000330, "Member 'ABP_Armadillo_PreEventManager_C::Large_Male_Moon_Intro_Anim' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, PawnSpawnRotation) == 0x000340, "Member 'ABP_Armadillo_PreEventManager_C::PawnSpawnRotation' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, Pawn) == 0x000358, "Member 'ABP_Armadillo_PreEventManager_C::Pawn' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, Intro_Length) == 0x000360, "Member 'ABP_Armadillo_PreEventManager_C::Intro_Length' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, ResumeMontageTimer) == 0x000368, "Member 'ABP_Armadillo_PreEventManager_C::ResumeMontageTimer' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, FinishedIntroBackupTimer) == 0x000370, "Member 'ABP_Armadillo_PreEventManager_C::FinishedIntroBackupTimer' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, bClientFinishedIntro) == 0x000378, "Member 'ABP_Armadillo_PreEventManager_C::bClientFinishedIntro' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, Moon_Montage_Resume_Tag) == 0x00037C, "Member 'ABP_Armadillo_PreEventManager_C::Moon_Montage_Resume_Tag' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, Moon_Stasis_End_Tag) == 0x000380, "Member 'ABP_Armadillo_PreEventManager_C::Moon_Stasis_End_Tag' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, Moon_Montage_Pause_Tag) == 0x000384, "Member 'ABP_Armadillo_PreEventManager_C::Moon_Montage_Pause_Tag' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, Moon_Montage_Play_Tag) == 0x000388, "Member 'ABP_Armadillo_PreEventManager_C::Moon_Montage_Play_Tag' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, Transform) == 0x000390, "Member 'ABP_Armadillo_PreEventManager_C::Transform' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, As_Armadillo_Mutator_Special_Relevancy) == 0x0003F0, "Member 'ABP_Armadillo_PreEventManager_C::As_Armadillo_Mutator_Special_Relevancy' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, PodCount) == 0x0003F8, "Member 'ABP_Armadillo_PreEventManager_C::PodCount' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, SoftRefArmadilloPreshowIntro) == 0x000400, "Member 'ABP_Armadillo_PreEventManager_C::SoftRefArmadilloPreshowIntro' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, SoftRefArmadilloPreshowMaster) == 0x000428, "Member 'ABP_Armadillo_PreEventManager_C::SoftRefArmadilloPreshowMaster' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, PosSpawnLocations) == 0x000450, "Member 'ABP_Armadillo_PreEventManager_C::PosSpawnLocations' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, ArtemisTerrainVisuals) == 0x000460, "Member 'ABP_Armadillo_PreEventManager_C::ArtemisTerrainVisuals' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, bShouldArtemisLevelsBeVisibile) == 0x000470, "Member 'ABP_Armadillo_PreEventManager_C::bShouldArtemisLevelsBeVisibile' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, ActivatePodsEarly) == 0x000471, "Member 'ABP_Armadillo_PreEventManager_C::ActivatePodsEarly' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, TestingIntroDelay) == 0x000472, "Member 'ABP_Armadillo_PreEventManager_C::TestingIntroDelay' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, TestingDelay) == 0x000474, "Member 'ABP_Armadillo_PreEventManager_C::TestingDelay' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, PodAttachPoint) == 0x000478, "Member 'ABP_Armadillo_PreEventManager_C::PodAttachPoint' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, PodEnterSequencesLeft) == 0x0004A0, "Member 'ABP_Armadillo_PreEventManager_C::PodEnterSequencesLeft' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, PodEnterSequencesRight) == 0x0004B0, "Member 'ABP_Armadillo_PreEventManager_C::PodEnterSequencesRight' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, PreshowVOSequences) == 0x0004C0, "Member 'ABP_Armadillo_PreEventManager_C::PreshowVOSequences' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, CurrentVOSequence) == 0x0004D0, "Member 'ABP_Armadillo_PreEventManager_C::CurrentVOSequence' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, PlayPreshowVO) == 0x0004D8, "Member 'ABP_Armadillo_PreEventManager_C::PlayPreshowVO' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, IsPastLoadingScreen) == 0x0004E0, "Member 'ABP_Armadillo_PreEventManager_C::IsPastLoadingScreen' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, IrisDoors) == 0x0004E8, "Member 'ABP_Armadillo_PreEventManager_C::IrisDoors' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, IrisSequences) == 0x0004F8, "Member 'ABP_Armadillo_PreEventManager_C::IrisSequences' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, StartCalendarEvent) == 0x000508, "Member 'ABP_Armadillo_PreEventManager_C::StartCalendarEvent' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, EventStartTime) == 0x000518, "Member 'ABP_Armadillo_PreEventManager_C::EventStartTime' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, HasEventStarted) == 0x00051C, "Member 'ABP_Armadillo_PreEventManager_C::HasEventStarted' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, Have_Pods_Been_Activated) == 0x00051D, "Member 'ABP_Armadillo_PreEventManager_C::Have_Pods_Been_Activated' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, PlayPreshowVOCheat) == 0x000520, "Member 'ABP_Armadillo_PreEventManager_C::PlayPreshowVOCheat' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, NextVODelayCheat) == 0x000524, "Member 'ABP_Armadillo_PreEventManager_C::NextVODelayCheat' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, PreshowVOCheatRep) == 0x000528, "Member 'ABP_Armadillo_PreEventManager_C::PreshowVOCheatRep' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, PreShow_VO_Mix) == 0x000530, "Member 'ABP_Armadillo_PreEventManager_C::PreShow_VO_Mix' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, VisorMesh) == 0x000538, "Member 'ABP_Armadillo_PreEventManager_C::VisorMesh' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, NoCountdownMaterial) == 0x000560, "Member 'ABP_Armadillo_PreEventManager_C::NoCountdownMaterial' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, CountdownMaterial) == 0x000568, "Member 'ABP_Armadillo_PreEventManager_C::CountdownMaterial' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, HideCountdown) == 0x000570, "Member 'ABP_Armadillo_PreEventManager_C::HideCountdown' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, AudioVisualizer) == 0x000578, "Member 'ABP_Armadillo_PreEventManager_C::AudioVisualizer' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, Hide_Pawn_Gameplay_Tag) == 0x0005A0, "Member 'ABP_Armadillo_PreEventManager_C::Hide_Pawn_Gameplay_Tag' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, OnSpecialEventMutatorFound) == 0x0005A8, "Member 'ABP_Armadillo_PreEventManager_C::OnSpecialEventMutatorFound' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, SoftRefAudioScriptingPreShow) == 0x0005B8, "Member 'ABP_Armadillo_PreEventManager_C::SoftRefAudioScriptingPreShow' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, TubeExitSound) == 0x0005E0, "Member 'ABP_Armadillo_PreEventManager_C::TubeExitSound' has a wrong offset!");
static_assert(offsetof(ABP_Armadillo_PreEventManager_C, LoadedPastEventStarted) == 0x0005E8, "Member 'ABP_Armadillo_PreEventManager_C::LoadedPastEventStarted' has a wrong offset!");

}

