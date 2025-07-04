﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TabVideoOptions_New

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TabVideoOptions_New.TabVideoOptions_New_C
// 0x0008 (0x0408 - 0x0400)
class UTabVideoOptions_New_C final : public UFortTabVideoOptions_TempNew
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0400(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void BndEvt__Settings_Panel_K2Node_ComponentBoundEvent_1_OnExecuteNamedActionBP__DelegateSignature(class UFortSetting* Setting, class FName Action);
	void CenterOnTab();
	void ExecuteUbergraph_TabVideoOptions_New(int32 EntryPoint);
	void OnComplete_7E19F26B42A808FDADDB569CFB68CCB7(class UUserWidget* UserWidget);
	void SettingValueChanged(float Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TabVideoOptions_New_C">();
	}
	static class UTabVideoOptions_New_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTabVideoOptions_New_C>();
	}
};
static_assert(alignof(UTabVideoOptions_New_C) == 0x000008, "Wrong alignment on UTabVideoOptions_New_C");
static_assert(sizeof(UTabVideoOptions_New_C) == 0x000408, "Wrong size on UTabVideoOptions_New_C");
static_assert(offsetof(UTabVideoOptions_New_C, UberGraphFrame) == 0x000400, "Member 'UTabVideoOptions_New_C::UberGraphFrame' has a wrong offset!");

}

