﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPS20_SeasonalDataWidget

#include "Basic.hpp"

#include "BPS20_SeasonalDataWidget_classes.hpp"
#include "BPS20_SeasonalDataWidget_parameters.hpp"


namespace SDK
{

// Function BPS20_SeasonalDataWidget.BPS20_SeasonalDataWidget_C.ExecuteUbergraph_BPS20_SeasonalDataWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPS20_SeasonalDataWidget_C::ExecuteUbergraph_BPS20_SeasonalDataWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS20_SeasonalDataWidget_C", "ExecuteUbergraph_BPS20_SeasonalDataWidget");

	Params::BPS20_SeasonalDataWidget_C_ExecuteUbergraph_BPS20_SeasonalDataWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPS20_SeasonalDataWidget.BPS20_SeasonalDataWidget_C.OnBattlePassOwned
// (Event, Protected, BlueprintEvent)

void UBPS20_SeasonalDataWidget_C::OnBattlePassOwned()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS20_SeasonalDataWidget_C", "OnBattlePassOwned");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPS20_SeasonalDataWidget.BPS20_SeasonalDataWidget_C.OnLevelChanged
// (Event, Protected, BlueprintEvent)

void UBPS20_SeasonalDataWidget_C::OnLevelChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS20_SeasonalDataWidget_C", "OnLevelChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPS20_SeasonalDataWidget.BPS20_SeasonalDataWidget_C.OnProgressUpdated
// (Event, Protected, BlueprintEvent)

void UBPS20_SeasonalDataWidget_C::OnProgressUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS20_SeasonalDataWidget_C", "OnProgressUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPS20_SeasonalDataWidget.BPS20_SeasonalDataWidget_C.OnSuperCharged
// (Event, Protected, BlueprintEvent)

void UBPS20_SeasonalDataWidget_C::OnSuperCharged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS20_SeasonalDataWidget_C", "OnSuperCharged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPS20_SeasonalDataWidget.BPS20_SeasonalDataWidget_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPS20_SeasonalDataWidget_C::UpdateText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS20_SeasonalDataWidget_C", "UpdateText");

	UObject::ProcessEvent(Func, nullptr);
}

}

