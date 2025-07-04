﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CountdownMaster

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CountdownMaster.BP_CountdownMaster_C
// 0x0158 (0x03C8 - 0x0270)
class ABP_CountdownMaster_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   HologramSkybeam;                                   // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   HologramCountdown;                                 // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CountdownScreen;                                   // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug_Phase2;                                      // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug_Phase3;                                      // 0x0299(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29A[0x2];                                      // 0x029A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumberofDigits;                                    // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HologramHeight;                                    // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ScreenVisible;                                     // 0x02A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HologramVisible;                                   // 0x02A5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A6[0x2];                                      // 0x02A6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     CountdownScreen_Override;                          // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Beam_Override;                                     // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     CountdownHologram_Override;                        // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MI_CountdownScreen;                                // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MI_Countdown_Hologram;                             // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MI_Skybeam;                                        // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 Color;                                             // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UV_Padding_x;                                      // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UV_Padding_y;                                      // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UV_Offset_x;                                       // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UV_Offset_y;                                       // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ScaleHologram_x;                                   // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ScaleHologram_y;                                   // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HologramVignette;                                  // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               BackgroundTexture;                                 // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               PostCountdownTexture;                              // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowHologramInHLOD;                                // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowScreenInHLOD;                                  // 0x0309(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ExcludefromMediumHLOD;                             // 0x030A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30B[0x5];                                      // 0x030B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               DontUSEMI_Countdown_Hologram_HLOD;                 // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DistanceFadeLength;                                // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DistanceFadeOffset;                                // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     HLOD_Override_Hologram;                            // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     HLOD_Override_SkyBeam;                             // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HLODElementIndex;                                  // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_334[0x4];                                      // 0x0334(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OptionalCalendarEvent;                             // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          bManuallyTrackCalendarEvent;                       // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_349[0x7];                                      // 0x0349(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CountdownAudioComp;                                // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             CountdownAsset;                                    // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             CountdownEndAsset;                                 // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundMix*                              CountdownSoundMix;                                 // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseAudioLocationOverride;                         // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_371[0x7];                                      // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                AudioLocationOverride;                             // 0x0378(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CountdownAudioFadeOut;                             // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_394[0x4];                                      // 0x0394(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class ABP_Generic_TimerManager_C> TimerManagerSoftRef;                            // 0x0398(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class ABP_Generic_TimerManager_C*             CachedTimerManager;                                // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_CountdownMaster(int32 EntryPoint);
	void HandleHLODMaterialOverrides();
	void HandleMaterialPropertyOverrides();
	void HandleSetupMIDs();
	void InitializeWithTimerManager();
	void OnTimerActive();
	void OnTimerFinished();
	void OnTimerStateChanged(int32 NewTimerState);
	void OverrideComponentMaterial(class UPrimitiveComponent* InComponent, class UMaterialInterface* OverrideMaterial, int32 ElementIndex, bool* bSuccesful);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void SetHologramRelativeTransform();
	void SetupVisibility();
	void StartCountdownAudio();
	void StopCountdownAudio();
	void TryFindTimerManager();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CountdownMaster_C">();
	}
	static class ABP_CountdownMaster_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CountdownMaster_C>();
	}
};
static_assert(alignof(ABP_CountdownMaster_C) == 0x000008, "Wrong alignment on ABP_CountdownMaster_C");
static_assert(sizeof(ABP_CountdownMaster_C) == 0x0003C8, "Wrong size on ABP_CountdownMaster_C");
static_assert(offsetof(ABP_CountdownMaster_C, UberGraphFrame) == 0x000270, "Member 'ABP_CountdownMaster_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, HologramSkybeam) == 0x000278, "Member 'ABP_CountdownMaster_C::HologramSkybeam' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, HologramCountdown) == 0x000280, "Member 'ABP_CountdownMaster_C::HologramCountdown' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, CountdownScreen) == 0x000288, "Member 'ABP_CountdownMaster_C::CountdownScreen' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, DefaultSceneRoot) == 0x000290, "Member 'ABP_CountdownMaster_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, Debug_Phase2) == 0x000298, "Member 'ABP_CountdownMaster_C::Debug_Phase2' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, Debug_Phase3) == 0x000299, "Member 'ABP_CountdownMaster_C::Debug_Phase3' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, NumberofDigits) == 0x00029C, "Member 'ABP_CountdownMaster_C::NumberofDigits' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, HologramHeight) == 0x0002A0, "Member 'ABP_CountdownMaster_C::HologramHeight' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, ScreenVisible) == 0x0002A4, "Member 'ABP_CountdownMaster_C::ScreenVisible' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, HologramVisible) == 0x0002A5, "Member 'ABP_CountdownMaster_C::HologramVisible' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, CountdownScreen_Override) == 0x0002A8, "Member 'ABP_CountdownMaster_C::CountdownScreen_Override' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, Beam_Override) == 0x0002B0, "Member 'ABP_CountdownMaster_C::Beam_Override' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, CountdownHologram_Override) == 0x0002B8, "Member 'ABP_CountdownMaster_C::CountdownHologram_Override' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, MI_CountdownScreen) == 0x0002C0, "Member 'ABP_CountdownMaster_C::MI_CountdownScreen' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, MI_Countdown_Hologram) == 0x0002C8, "Member 'ABP_CountdownMaster_C::MI_Countdown_Hologram' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, MI_Skybeam) == 0x0002D0, "Member 'ABP_CountdownMaster_C::MI_Skybeam' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, Color) == 0x0002D8, "Member 'ABP_CountdownMaster_C::Color' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, UV_Padding_x) == 0x0002DC, "Member 'ABP_CountdownMaster_C::UV_Padding_x' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, UV_Padding_y) == 0x0002E0, "Member 'ABP_CountdownMaster_C::UV_Padding_y' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, UV_Offset_x) == 0x0002E4, "Member 'ABP_CountdownMaster_C::UV_Offset_x' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, UV_Offset_y) == 0x0002E8, "Member 'ABP_CountdownMaster_C::UV_Offset_y' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, ScaleHologram_x) == 0x0002EC, "Member 'ABP_CountdownMaster_C::ScaleHologram_x' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, ScaleHologram_y) == 0x0002F0, "Member 'ABP_CountdownMaster_C::ScaleHologram_y' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, HologramVignette) == 0x0002F4, "Member 'ABP_CountdownMaster_C::HologramVignette' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, BackgroundTexture) == 0x0002F8, "Member 'ABP_CountdownMaster_C::BackgroundTexture' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, PostCountdownTexture) == 0x000300, "Member 'ABP_CountdownMaster_C::PostCountdownTexture' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, ShowHologramInHLOD) == 0x000308, "Member 'ABP_CountdownMaster_C::ShowHologramInHLOD' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, ShowScreenInHLOD) == 0x000309, "Member 'ABP_CountdownMaster_C::ShowScreenInHLOD' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, ExcludefromMediumHLOD) == 0x00030A, "Member 'ABP_CountdownMaster_C::ExcludefromMediumHLOD' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, DontUSEMI_Countdown_Hologram_HLOD) == 0x000310, "Member 'ABP_CountdownMaster_C::DontUSEMI_Countdown_Hologram_HLOD' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, DistanceFadeLength) == 0x000318, "Member 'ABP_CountdownMaster_C::DistanceFadeLength' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, DistanceFadeOffset) == 0x00031C, "Member 'ABP_CountdownMaster_C::DistanceFadeOffset' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, HLOD_Override_Hologram) == 0x000320, "Member 'ABP_CountdownMaster_C::HLOD_Override_Hologram' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, HLOD_Override_SkyBeam) == 0x000328, "Member 'ABP_CountdownMaster_C::HLOD_Override_SkyBeam' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, HLODElementIndex) == 0x000330, "Member 'ABP_CountdownMaster_C::HLODElementIndex' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, OptionalCalendarEvent) == 0x000338, "Member 'ABP_CountdownMaster_C::OptionalCalendarEvent' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, bManuallyTrackCalendarEvent) == 0x000348, "Member 'ABP_CountdownMaster_C::bManuallyTrackCalendarEvent' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, CountdownAudioComp) == 0x000350, "Member 'ABP_CountdownMaster_C::CountdownAudioComp' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, CountdownAsset) == 0x000358, "Member 'ABP_CountdownMaster_C::CountdownAsset' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, CountdownEndAsset) == 0x000360, "Member 'ABP_CountdownMaster_C::CountdownEndAsset' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, CountdownSoundMix) == 0x000368, "Member 'ABP_CountdownMaster_C::CountdownSoundMix' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, bUseAudioLocationOverride) == 0x000370, "Member 'ABP_CountdownMaster_C::bUseAudioLocationOverride' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, AudioLocationOverride) == 0x000378, "Member 'ABP_CountdownMaster_C::AudioLocationOverride' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, CountdownAudioFadeOut) == 0x000390, "Member 'ABP_CountdownMaster_C::CountdownAudioFadeOut' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, TimerManagerSoftRef) == 0x000398, "Member 'ABP_CountdownMaster_C::TimerManagerSoftRef' has a wrong offset!");
static_assert(offsetof(ABP_CountdownMaster_C, CachedTimerManager) == 0x0003C0, "Member 'ABP_CountdownMaster_C::CachedTimerManager' has a wrong offset!");

}

