﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WebPurchase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WebPurchase.WebPurchase_C
// 0x0020 (0x0528 - 0x0508)
class UWebPurchase_C final : public UFortWebPurchaseScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0508(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCircularThrobber*                      Throbber;                                          // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    BackAction;                                        // 0x0518(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void BindDelegates();
	void BP_OnActivated();
	void ExecuteUbergraph_WebPurchase(int32 EntryPoint);
	void HandleBack(bool* bPassThrough);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WebPurchase_C">();
	}
	static class UWebPurchase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWebPurchase_C>();
	}
};
static_assert(alignof(UWebPurchase_C) == 0x000008, "Wrong alignment on UWebPurchase_C");
static_assert(sizeof(UWebPurchase_C) == 0x000528, "Wrong size on UWebPurchase_C");
static_assert(offsetof(UWebPurchase_C, UberGraphFrame) == 0x000508, "Member 'UWebPurchase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWebPurchase_C, Throbber) == 0x000510, "Member 'UWebPurchase_C::Throbber' has a wrong offset!");
static_assert(offsetof(UWebPurchase_C, BackAction) == 0x000518, "Member 'UWebPurchase_C::BackAction' has a wrong offset!");

}

