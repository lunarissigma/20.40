﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPS20_BattlePassRewardGrid

#include "Basic.hpp"

#include "BPS20_BattlePassRewardGrid_classes.hpp"
#include "BPS20_BattlePassRewardGrid_parameters.hpp"


namespace SDK
{

// Function BPS20_BattlePassRewardGrid.BPS20_BattlePassRewardGrid_C.ExecuteUbergraph_BPS20_BattlePassRewardGrid
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPS20_BattlePassRewardGrid_C::ExecuteUbergraph_BPS20_BattlePassRewardGrid(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS20_BattlePassRewardGrid_C", "ExecuteUbergraph_BPS20_BattlePassRewardGrid");

	Params::BPS20_BattlePassRewardGrid_C_ExecuteUbergraph_BPS20_BattlePassRewardGrid Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPS20_BattlePassRewardGrid.BPS20_BattlePassRewardGrid_C.OnPageSelected
// (Event, Public, BlueprintEvent)

void UBPS20_BattlePassRewardGrid_C::OnPageSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS20_BattlePassRewardGrid_C", "OnPageSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPS20_BattlePassRewardGrid.BPS20_BattlePassRewardGrid_C.OnPageUnselected
// (Event, Public, BlueprintEvent)

void UBPS20_BattlePassRewardGrid_C::OnPageUnselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS20_BattlePassRewardGrid_C", "OnPageUnselected");

	UObject::ProcessEvent(Func, nullptr);
}

}

