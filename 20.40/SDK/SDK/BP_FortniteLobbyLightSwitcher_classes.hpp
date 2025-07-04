﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FortniteLobbyLightSwitcher

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C
// 0x0090 (0x0300 - 0x0270)
class ABP_FortniteLobbyLightSwitcher_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ADirectionalLight*                      DirectionLight;                                    // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASkyLight*                              SkyLight;                                          // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APointLight*>                    Pointlights;                                       // 0x0290(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class AExponentialHeightFog*                  ExponentialHeightFog;                              // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADirectionalLight*                      DirectionalLight_LowDetailMode;                    // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AEmitter*>                       ParticleSystems;                                   // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	bool                                          IsActive;                                          // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugLOWQualityLighting;                           // 0x02C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C2[0x6];                                      // 0x02C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASkyLight*                              SkyLight_LowDetailMode;                            // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AExponentialHeightFog*                  ExponentialHeightfog_LowDetailMode;                // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LOW_FX_Setting_Use_MobileLighting;                 // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLightalreadyActive;                              // 0x02D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DA[0x2];                                      // 0x02DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           MPC_ManualSunlightVector;                          // 0x02DC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MPC_ManualSunlightColor;                           // 0x02EC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void UpdateSettings();
	void SetVisiblityofSceneLighting(bool Activate);
	void SetVisiblityofDetailSpecificMeshes();
	void ReceiveBeginPlay();
	void DisableLobbySetLighting();
	void ExecuteUbergraph_BP_FortniteLobbyLightSwitcher(int32 EntryPoint);
	void EnableLobbySetLighting();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FortniteLobbyLightSwitcher_C">();
	}
	static class ABP_FortniteLobbyLightSwitcher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FortniteLobbyLightSwitcher_C>();
	}
};
static_assert(alignof(ABP_FortniteLobbyLightSwitcher_C) == 0x000008, "Wrong alignment on ABP_FortniteLobbyLightSwitcher_C");
static_assert(sizeof(ABP_FortniteLobbyLightSwitcher_C) == 0x000300, "Wrong size on ABP_FortniteLobbyLightSwitcher_C");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, UberGraphFrame) == 0x000270, "Member 'ABP_FortniteLobbyLightSwitcher_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, DefaultSceneRoot) == 0x000278, "Member 'ABP_FortniteLobbyLightSwitcher_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, DirectionLight) == 0x000280, "Member 'ABP_FortniteLobbyLightSwitcher_C::DirectionLight' has a wrong offset!");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, SkyLight) == 0x000288, "Member 'ABP_FortniteLobbyLightSwitcher_C::SkyLight' has a wrong offset!");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, Pointlights) == 0x000290, "Member 'ABP_FortniteLobbyLightSwitcher_C::Pointlights' has a wrong offset!");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, ExponentialHeightFog) == 0x0002A0, "Member 'ABP_FortniteLobbyLightSwitcher_C::ExponentialHeightFog' has a wrong offset!");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, DirectionalLight_LowDetailMode) == 0x0002A8, "Member 'ABP_FortniteLobbyLightSwitcher_C::DirectionalLight_LowDetailMode' has a wrong offset!");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, ParticleSystems) == 0x0002B0, "Member 'ABP_FortniteLobbyLightSwitcher_C::ParticleSystems' has a wrong offset!");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, IsActive) == 0x0002C0, "Member 'ABP_FortniteLobbyLightSwitcher_C::IsActive' has a wrong offset!");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, DebugLOWQualityLighting) == 0x0002C1, "Member 'ABP_FortniteLobbyLightSwitcher_C::DebugLOWQualityLighting' has a wrong offset!");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, SkyLight_LowDetailMode) == 0x0002C8, "Member 'ABP_FortniteLobbyLightSwitcher_C::SkyLight_LowDetailMode' has a wrong offset!");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, ExponentialHeightfog_LowDetailMode) == 0x0002D0, "Member 'ABP_FortniteLobbyLightSwitcher_C::ExponentialHeightfog_LowDetailMode' has a wrong offset!");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, LOW_FX_Setting_Use_MobileLighting) == 0x0002D8, "Member 'ABP_FortniteLobbyLightSwitcher_C::LOW_FX_Setting_Use_MobileLighting' has a wrong offset!");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, IsLightalreadyActive) == 0x0002D9, "Member 'ABP_FortniteLobbyLightSwitcher_C::IsLightalreadyActive' has a wrong offset!");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, MPC_ManualSunlightVector) == 0x0002DC, "Member 'ABP_FortniteLobbyLightSwitcher_C::MPC_ManualSunlightVector' has a wrong offset!");
static_assert(offsetof(ABP_FortniteLobbyLightSwitcher_C, MPC_ManualSunlightColor) == 0x0002EC, "Member 'ABP_FortniteLobbyLightSwitcher_C::MPC_ManualSunlightColor' has a wrong offset!");

}

