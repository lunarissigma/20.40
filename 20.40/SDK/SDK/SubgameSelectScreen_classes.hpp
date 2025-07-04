﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SubgameSelectScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SubgameSelectScreen.SubgameSelectScreen_C
// 0x0038 (0x0488 - 0x0450)
class USubgameSelectScreen_C final : public UFortSubgameSelectScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0450(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                               ModeSelect;                                        // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressModalWidget_C*                 LeavingMatchmakingDialog;                          // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MID_Keyart;                                        // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTexture*>                       TextureCycle;                                      // 0x0470(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         TextureCycleIndex;                                 // 0x0480(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnEventUpdated_57187EC14A536D0960088EB25BDF39E5(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void OnEventEnded_57187EC14A536D0960088EB25BDF39E5(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void OnEventActive_57187EC14A536D0960088EB25BDF39E5(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void IsMinorShutdownWarningEnabled(bool* Enabled);
	bool IsBusyMatchmaking();
	void InitializeTextureCycle();
	void ExecuteUbergraph_SubgameSelectScreen(int32 EntryPoint);
	void BP_OnActivated();
	void AdvanceTextureCycle();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SubgameSelectScreen_C">();
	}
	static class USubgameSelectScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubgameSelectScreen_C>();
	}
};
static_assert(alignof(USubgameSelectScreen_C) == 0x000008, "Wrong alignment on USubgameSelectScreen_C");
static_assert(sizeof(USubgameSelectScreen_C) == 0x000488, "Wrong size on USubgameSelectScreen_C");
static_assert(offsetof(USubgameSelectScreen_C, UberGraphFrame) == 0x000450, "Member 'USubgameSelectScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, ModeSelect) == 0x000458, "Member 'USubgameSelectScreen_C::ModeSelect' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, LeavingMatchmakingDialog) == 0x000460, "Member 'USubgameSelectScreen_C::LeavingMatchmakingDialog' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, MID_Keyart) == 0x000468, "Member 'USubgameSelectScreen_C::MID_Keyart' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, TextureCycle) == 0x000470, "Member 'USubgameSelectScreen_C::TextureCycle' has a wrong offset!");
static_assert(offsetof(USubgameSelectScreen_C, TextureCycleIndex) == 0x000480, "Member 'USubgameSelectScreen_C::TextureCycleIndex' has a wrong offset!");

}

