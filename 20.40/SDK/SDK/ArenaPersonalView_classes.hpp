﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ArenaPersonalView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ArenaPersonalView.ArenaPersonalView_C
// 0x0030 (0x0788 - 0x0758)
class UArenaPersonalView_C final : public UFortArenaPersonalDivisionView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0758(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                          CommonBorder_ContainerBG;                          // 0x0760(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       FunTitle;                                          // 0x0768(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_DivisionProgress;                    // 0x0770(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBoxHype;                                 // 0x0778(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x0780(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Colorize(const struct FFortTournamentDisplayInfo& Color_Info);
	void ExecuteUbergraph_ArenaPersonalView(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ArenaPersonalView_C">();
	}
	static class UArenaPersonalView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UArenaPersonalView_C>();
	}
};
static_assert(alignof(UArenaPersonalView_C) == 0x000008, "Wrong alignment on UArenaPersonalView_C");
static_assert(sizeof(UArenaPersonalView_C) == 0x000788, "Wrong size on UArenaPersonalView_C");
static_assert(offsetof(UArenaPersonalView_C, UberGraphFrame) == 0x000758, "Member 'UArenaPersonalView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UArenaPersonalView_C, CommonBorder_ContainerBG) == 0x000760, "Member 'UArenaPersonalView_C::CommonBorder_ContainerBG' has a wrong offset!");
static_assert(offsetof(UArenaPersonalView_C, FunTitle) == 0x000768, "Member 'UArenaPersonalView_C::FunTitle' has a wrong offset!");
static_assert(offsetof(UArenaPersonalView_C, HorizontalBox_DivisionProgress) == 0x000770, "Member 'UArenaPersonalView_C::HorizontalBox_DivisionProgress' has a wrong offset!");
static_assert(offsetof(UArenaPersonalView_C, HorizontalBoxHype) == 0x000778, "Member 'UArenaPersonalView_C::HorizontalBoxHype' has a wrong offset!");
static_assert(offsetof(UArenaPersonalView_C, Image_4) == 0x000780, "Member 'UArenaPersonalView_C::Image_4' has a wrong offset!");

}

