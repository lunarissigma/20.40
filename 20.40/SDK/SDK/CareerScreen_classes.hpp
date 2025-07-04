﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CareerScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CareerScreen.CareerScreen_C
// 0x0048 (0x05D0 - 0x0588)
class UCareerScreen_C final : public UAthenaCareerScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0588(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                        FeatDisplaySwitcher;                               // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GradOvr;                                           // 0x0598(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   NoAchievementMessage;                              // 0x05A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SeasonHeadingTextLabel;                            // 0x05A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher;                                          // 0x05B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    Input_ReplayCinematic;                             // 0x05B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          AutoPlayVideo;                                     // 0x05C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnActivated();
	void ExecuteUbergraph_CareerScreen(int32 EntryPoint);
	void OnInitialized();
	void PlayCinematic();
	void ReplayCinematic(bool* Passthrough);
	void ShowFeats(bool bHasCompletedFeats);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CareerScreen_C">();
	}
	static class UCareerScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCareerScreen_C>();
	}
};
static_assert(alignof(UCareerScreen_C) == 0x000008, "Wrong alignment on UCareerScreen_C");
static_assert(sizeof(UCareerScreen_C) == 0x0005D0, "Wrong size on UCareerScreen_C");
static_assert(offsetof(UCareerScreen_C, UberGraphFrame) == 0x000588, "Member 'UCareerScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCareerScreen_C, FeatDisplaySwitcher) == 0x000590, "Member 'UCareerScreen_C::FeatDisplaySwitcher' has a wrong offset!");
static_assert(offsetof(UCareerScreen_C, GradOvr) == 0x000598, "Member 'UCareerScreen_C::GradOvr' has a wrong offset!");
static_assert(offsetof(UCareerScreen_C, NoAchievementMessage) == 0x0005A0, "Member 'UCareerScreen_C::NoAchievementMessage' has a wrong offset!");
static_assert(offsetof(UCareerScreen_C, SeasonHeadingTextLabel) == 0x0005A8, "Member 'UCareerScreen_C::SeasonHeadingTextLabel' has a wrong offset!");
static_assert(offsetof(UCareerScreen_C, Switcher) == 0x0005B0, "Member 'UCareerScreen_C::Switcher' has a wrong offset!");
static_assert(offsetof(UCareerScreen_C, Input_ReplayCinematic) == 0x0005B8, "Member 'UCareerScreen_C::Input_ReplayCinematic' has a wrong offset!");
static_assert(offsetof(UCareerScreen_C, AutoPlayVideo) == 0x0005C8, "Member 'UCareerScreen_C::AutoPlayVideo' has a wrong offset!");

}

