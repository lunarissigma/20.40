﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaGlobalCashHorizontal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaGlobalCashHorizontal.AthenaGlobalCashHorizontal_C
// 0x0008 (0x0308 - 0x0300)
class UAthenaGlobalCashHorizontal_C final : public UFortGlobalCashWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_AthenaGlobalCashHorizontal(int32 EntryPoint);
	void OnQueryCompletedSuccessfully(int32 GlobalCashBalance);
	void OnQueryStarted();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaGlobalCashHorizontal_C">();
	}
	static class UAthenaGlobalCashHorizontal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaGlobalCashHorizontal_C>();
	}
};
static_assert(alignof(UAthenaGlobalCashHorizontal_C) == 0x000008, "Wrong alignment on UAthenaGlobalCashHorizontal_C");
static_assert(sizeof(UAthenaGlobalCashHorizontal_C) == 0x000308, "Wrong size on UAthenaGlobalCashHorizontal_C");
static_assert(offsetof(UAthenaGlobalCashHorizontal_C, UberGraphFrame) == 0x000300, "Member 'UAthenaGlobalCashHorizontal_C::UberGraphFrame' has a wrong offset!");

}

