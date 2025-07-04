﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CampaignPurchaseScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CampaignPurchaseScreen.CampaignPurchaseScreen_C
// 0x0038 (0x0488 - 0x0450)
class UCampaignPurchaseScreen_C final : public UFortCampaignPurchaseScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0450(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       SwitchTextures;                                    // 0x0458(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MID_Keyart;                                        // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CycleTimer;                                        // 0x0468(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UTexture*>                       TextureCycle;                                      // 0x0470(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         TextureCycleIndex;                                 // 0x0480(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Update();
	void ToggleTimer(bool Enabled);
	void OnStoreScreenCreated(class UFortMtxStoreRootBase* StoreScreen);
	void OnImageCycleTimeElapsed();
	void IsMinorShutdownWarningEnabled(bool* Enabled);
	bool IsBusyMatchmaking();
	void InitializeTextureCycle();
	void InitializeRedeemButton();
	void ExecuteUbergraph_CampaignPurchaseScreen(int32 EntryPoint);
	void Construct();
	void BP_OnActivated();
	void BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void AdvanceTextureCycle();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CampaignPurchaseScreen_C">();
	}
	static class UCampaignPurchaseScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCampaignPurchaseScreen_C>();
	}
};
static_assert(alignof(UCampaignPurchaseScreen_C) == 0x000008, "Wrong alignment on UCampaignPurchaseScreen_C");
static_assert(sizeof(UCampaignPurchaseScreen_C) == 0x000488, "Wrong size on UCampaignPurchaseScreen_C");
static_assert(offsetof(UCampaignPurchaseScreen_C, UberGraphFrame) == 0x000450, "Member 'UCampaignPurchaseScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCampaignPurchaseScreen_C, SwitchTextures) == 0x000458, "Member 'UCampaignPurchaseScreen_C::SwitchTextures' has a wrong offset!");
static_assert(offsetof(UCampaignPurchaseScreen_C, MID_Keyart) == 0x000460, "Member 'UCampaignPurchaseScreen_C::MID_Keyart' has a wrong offset!");
static_assert(offsetof(UCampaignPurchaseScreen_C, CycleTimer) == 0x000468, "Member 'UCampaignPurchaseScreen_C::CycleTimer' has a wrong offset!");
static_assert(offsetof(UCampaignPurchaseScreen_C, TextureCycle) == 0x000470, "Member 'UCampaignPurchaseScreen_C::TextureCycle' has a wrong offset!");
static_assert(offsetof(UCampaignPurchaseScreen_C, TextureCycleIndex) == 0x000480, "Member 'UCampaignPurchaseScreen_C::TextureCycleIndex' has a wrong offset!");

}

