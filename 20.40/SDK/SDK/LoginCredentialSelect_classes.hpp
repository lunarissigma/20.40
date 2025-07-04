﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoginCredentialSelect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LoginCredentialSelect.LoginCredentialSelect_C
// 0x0060 (0x0470 - 0x0410)
class ULoginCredentialSelect_C final : public UFortLoginCredentialSelect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_0;                            // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Erebus_Title;                                      // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ErebusType;                                        // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_5;                                           // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_48;                                          // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                TrademarksBorder;                                  // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LoginCredentialSelect(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LoginCredentialSelect_C">();
	}
	static class ULoginCredentialSelect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoginCredentialSelect_C>();
	}
};
static_assert(alignof(ULoginCredentialSelect_C) == 0x000008, "Wrong alignment on ULoginCredentialSelect_C");
static_assert(sizeof(ULoginCredentialSelect_C) == 0x000470, "Wrong size on ULoginCredentialSelect_C");
static_assert(offsetof(ULoginCredentialSelect_C, UberGraphFrame) == 0x000410, "Member 'ULoginCredentialSelect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, CommonWidgetSwitcher_0) == 0x000418, "Member 'ULoginCredentialSelect_C::CommonWidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, Erebus_Title) == 0x000420, "Member 'ULoginCredentialSelect_C::Erebus_Title' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, ErebusType) == 0x000428, "Member 'ULoginCredentialSelect_C::ErebusType' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, Image_0) == 0x000430, "Member 'ULoginCredentialSelect_C::Image_0' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, Image_1) == 0x000438, "Member 'ULoginCredentialSelect_C::Image_1' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, Image_2) == 0x000440, "Member 'ULoginCredentialSelect_C::Image_2' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, Image_3) == 0x000448, "Member 'ULoginCredentialSelect_C::Image_3' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, Image_4) == 0x000450, "Member 'ULoginCredentialSelect_C::Image_4' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, Image_5) == 0x000458, "Member 'ULoginCredentialSelect_C::Image_5' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, Image_48) == 0x000460, "Member 'ULoginCredentialSelect_C::Image_48' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, TrademarksBorder) == 0x000468, "Member 'ULoginCredentialSelect_C::TrademarksBorder' has a wrong offset!");

}

