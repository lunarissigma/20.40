﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SidebarPanelKoala

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "KoalaUI_classes.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SidebarPanelKoala.SidebarPanelKoala_C
// 0x0060 (0x0448 - 0x03E8)
class USidebarPanelKoala_C final : public UFortSidebarPanelKoala
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           PanelWidget_KoalaElements;                         // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   RichText_Description_SignIn;                       // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRichTextBlockKeybind*              RichText_Description_Use;                          // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonVisibilitySwitcher*              Switcher_Description;                              // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   Text_BasicKoalaDescription;                        // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   UsageDescText_KBM;                                 // 0x0418(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   UsageDescText_Gamepad;                             // 0x0430(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Construct();
	void ExecuteUbergraph_SidebarPanelKoala(int32 EntryPoint);
	void OnConnectionChanged(bool bConnected);
	void OnInputMethodChanged(ECommonInputType bNewInputType);
	void UpdateUsageDescription(ECommonInputType Index_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarPanelKoala_C">();
	}
	static class USidebarPanelKoala_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarPanelKoala_C>();
	}
};
static_assert(alignof(USidebarPanelKoala_C) == 0x000008, "Wrong alignment on USidebarPanelKoala_C");
static_assert(sizeof(USidebarPanelKoala_C) == 0x000448, "Wrong size on USidebarPanelKoala_C");
static_assert(offsetof(USidebarPanelKoala_C, UberGraphFrame) == 0x0003E8, "Member 'USidebarPanelKoala_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarPanelKoala_C, PanelWidget_KoalaElements) == 0x0003F0, "Member 'USidebarPanelKoala_C::PanelWidget_KoalaElements' has a wrong offset!");
static_assert(offsetof(USidebarPanelKoala_C, RichText_Description_SignIn) == 0x0003F8, "Member 'USidebarPanelKoala_C::RichText_Description_SignIn' has a wrong offset!");
static_assert(offsetof(USidebarPanelKoala_C, RichText_Description_Use) == 0x000400, "Member 'USidebarPanelKoala_C::RichText_Description_Use' has a wrong offset!");
static_assert(offsetof(USidebarPanelKoala_C, Switcher_Description) == 0x000408, "Member 'USidebarPanelKoala_C::Switcher_Description' has a wrong offset!");
static_assert(offsetof(USidebarPanelKoala_C, Text_BasicKoalaDescription) == 0x000410, "Member 'USidebarPanelKoala_C::Text_BasicKoalaDescription' has a wrong offset!");
static_assert(offsetof(USidebarPanelKoala_C, UsageDescText_KBM) == 0x000418, "Member 'USidebarPanelKoala_C::UsageDescText_KBM' has a wrong offset!");
static_assert(offsetof(USidebarPanelKoala_C, UsageDescText_Gamepad) == 0x000430, "Member 'USidebarPanelKoala_C::UsageDescText_Gamepad' has a wrong offset!");

}

