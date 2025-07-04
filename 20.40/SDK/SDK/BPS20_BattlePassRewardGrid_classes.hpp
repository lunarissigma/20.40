﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPS20_BattlePassRewardGrid

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePassBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BPS20_BattlePassRewardGrid.BPS20_BattlePassRewardGrid_C
// 0x0008 (0x0490 - 0x0488)
class UBPS20_BattlePassRewardGrid_C final : public UFortBattlePassRewardGrid
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0488(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BPS20_BattlePassRewardGrid(int32 EntryPoint);
	void OnPageSelected();
	void OnPageUnselected();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPS20_BattlePassRewardGrid_C">();
	}
	static class UBPS20_BattlePassRewardGrid_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPS20_BattlePassRewardGrid_C>();
	}
};
static_assert(alignof(UBPS20_BattlePassRewardGrid_C) == 0x000008, "Wrong alignment on UBPS20_BattlePassRewardGrid_C");
static_assert(sizeof(UBPS20_BattlePassRewardGrid_C) == 0x000490, "Wrong size on UBPS20_BattlePassRewardGrid_C");
static_assert(offsetof(UBPS20_BattlePassRewardGrid_C, UberGraphFrame) == 0x000488, "Member 'UBPS20_BattlePassRewardGrid_C::UberGraphFrame' has a wrong offset!");

}

