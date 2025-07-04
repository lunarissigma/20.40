﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TabTouchOptions_New

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TabTouchOptions_New.TabTouchOptions_New_C
// 0x0008 (0x0408 - 0x0400)
class UTabTouchOptions_New_C final : public UFortTabTouchOptions_TempNew
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0400(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void BndEvt__Settings_Panel_K2Node_ComponentBoundEvent_1_OnExecuteNamedActionBP__DelegateSignature(class UFortSetting* Setting, class FName Action);
	void CenterOnTab();
	void ExecuteUbergraph_TabTouchOptions_New(int32 EntryPoint);
	void OnComplete_70DA8CBD478310A11CA48A9F568B15E0(class UUserWidget* UserWidget);
	void SettingValueChanged(float Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TabTouchOptions_New_C">();
	}
	static class UTabTouchOptions_New_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTabTouchOptions_New_C>();
	}
};
static_assert(alignof(UTabTouchOptions_New_C) == 0x000008, "Wrong alignment on UTabTouchOptions_New_C");
static_assert(sizeof(UTabTouchOptions_New_C) == 0x000408, "Wrong size on UTabTouchOptions_New_C");
static_assert(offsetof(UTabTouchOptions_New_C, UberGraphFrame) == 0x000400, "Member 'UTabTouchOptions_New_C::UberGraphFrame' has a wrong offset!");

}

