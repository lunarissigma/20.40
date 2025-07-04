﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Fort_Entry_Music_Controller_BP

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C
// 0x0038 (0x02A8 - 0x0270)
class AFort_Entry_Music_Controller_BP_C final : public AFortEntryMusicController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        SceneComponent;                                    // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         FadeOutTime;                                       // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_284[0x4];                                      // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             CurrentMusic;                                      // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Music_Activate_Override;                        // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_291[0x7];                                      // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaMusicPackItemDefinition*         MusicPackToPlayLater;                              // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCanRetriggerNextMusicPack;                        // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bRegisteredForAnalysis;                            // 0x02A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void StartMusic();
	void SetCanRetriggerNextMusicPack(bool bCanRetriggerNextMusicPack_0);
	void PlayEquippedMusicPack();
	void OnMusicPackChanged(const class UAthenaMusicPackItemDefinition* NewMusicPack, float StartTimeOffset);
	void Lobby_Music_Override(bool Lobby_Music_Activate, class USoundBase* New_Music);
	void ListenToMusicPacks();
	void ExecuteUbergraph_Fort_Entry_Music_Controller_BP(int32 EntryPoint);
	void Change_Music(class USoundBase* New_Music, float StartTime, const struct FGameplayTag& Event_Tag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fort_Entry_Music_Controller_BP_C">();
	}
	static class AFort_Entry_Music_Controller_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFort_Entry_Music_Controller_BP_C>();
	}
};
static_assert(alignof(AFort_Entry_Music_Controller_BP_C) == 0x000008, "Wrong alignment on AFort_Entry_Music_Controller_BP_C");
static_assert(sizeof(AFort_Entry_Music_Controller_BP_C) == 0x0002A8, "Wrong size on AFort_Entry_Music_Controller_BP_C");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, UberGraphFrame) == 0x000270, "Member 'AFort_Entry_Music_Controller_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, SceneComponent) == 0x000278, "Member 'AFort_Entry_Music_Controller_BP_C::SceneComponent' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, FadeOutTime) == 0x000280, "Member 'AFort_Entry_Music_Controller_BP_C::FadeOutTime' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, CurrentMusic) == 0x000288, "Member 'AFort_Entry_Music_Controller_BP_C::CurrentMusic' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, Is_Music_Activate_Override) == 0x000290, "Member 'AFort_Entry_Music_Controller_BP_C::Is_Music_Activate_Override' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, MusicPackToPlayLater) == 0x000298, "Member 'AFort_Entry_Music_Controller_BP_C::MusicPackToPlayLater' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, bCanRetriggerNextMusicPack) == 0x0002A0, "Member 'AFort_Entry_Music_Controller_BP_C::bCanRetriggerNextMusicPack' has a wrong offset!");
static_assert(offsetof(AFort_Entry_Music_Controller_BP_C, bRegisteredForAnalysis) == 0x0002A1, "Member 'AFort_Entry_Music_Controller_BP_C::bRegisteredForAnalysis' has a wrong offset!");

}

