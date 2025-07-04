﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaEliminationIndicator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaEliminationIndicator.AthenaEliminationIndicator_C
// 0x0028 (0x05E0 - 0x05B8)
class UAthenaEliminationIndicator_C final : public UAthenaEliminationIndicator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Outro;                                             // 0x05C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x05C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Arrow;                                             // 0x05D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Diamondpulse;                                // 0x05D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_AthenaEliminationIndicator(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaEliminationIndicator_C">();
	}
	static class UAthenaEliminationIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaEliminationIndicator_C>();
	}
};
static_assert(alignof(UAthenaEliminationIndicator_C) == 0x000008, "Wrong alignment on UAthenaEliminationIndicator_C");
static_assert(sizeof(UAthenaEliminationIndicator_C) == 0x0005E0, "Wrong size on UAthenaEliminationIndicator_C");
static_assert(offsetof(UAthenaEliminationIndicator_C, UberGraphFrame) == 0x0005B8, "Member 'UAthenaEliminationIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaEliminationIndicator_C, Outro) == 0x0005C0, "Member 'UAthenaEliminationIndicator_C::Outro' has a wrong offset!");
static_assert(offsetof(UAthenaEliminationIndicator_C, Intro) == 0x0005C8, "Member 'UAthenaEliminationIndicator_C::Intro' has a wrong offset!");
static_assert(offsetof(UAthenaEliminationIndicator_C, Arrow) == 0x0005D0, "Member 'UAthenaEliminationIndicator_C::Arrow' has a wrong offset!");
static_assert(offsetof(UAthenaEliminationIndicator_C, Image_Diamondpulse) == 0x0005D8, "Member 'UAthenaEliminationIndicator_C::Image_Diamondpulse' has a wrong offset!");

}

