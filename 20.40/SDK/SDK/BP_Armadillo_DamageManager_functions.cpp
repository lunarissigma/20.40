﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Armadillo_DamageManager

#include "Basic.hpp"

#include "BP_Armadillo_DamageManager_classes.hpp"
#include "BP_Armadillo_DamageManager_parameters.hpp"


namespace SDK
{

// Function BP_Armadillo_DamageManager.BP_Armadillo_DamageManager_C.ApplyDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DamageAmmount                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Armadillo_DamageManager_C::ApplyDamage(float DamageAmmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Armadillo_DamageManager_C", "ApplyDamage");

	Params::BP_Armadillo_DamageManager_C_ApplyDamage Parms{};

	Parms.DamageAmmount = DamageAmmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Armadillo_DamageManager.BP_Armadillo_DamageManager_C.ExecuteUbergraph_BP_Armadillo_DamageManager
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Armadillo_DamageManager_C::ExecuteUbergraph_BP_Armadillo_DamageManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Armadillo_DamageManager_C", "ExecuteUbergraph_BP_Armadillo_DamageManager");

	Params::BP_Armadillo_DamageManager_C_ExecuteUbergraph_BP_Armadillo_DamageManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Armadillo_DamageManager.BP_Armadillo_DamageManager_C.Lerp
// (BlueprintCallable, BlueprintEvent)

void ABP_Armadillo_DamageManager_C::Lerp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Armadillo_DamageManager_C", "Lerp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Armadillo_DamageManager.BP_Armadillo_DamageManager_C.RemoveDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   RemoveDamageAmmount                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Armadillo_DamageManager_C::RemoveDamage(float RemoveDamageAmmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Armadillo_DamageManager_C", "RemoveDamage");

	Params::BP_Armadillo_DamageManager_C_RemoveDamage Parms{};

	Parms.RemoveDamageAmmount = RemoveDamageAmmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Armadillo_DamageManager.BP_Armadillo_DamageManager_C.TL_LerpDamage__FinishedFunc
// (BlueprintEvent)

void ABP_Armadillo_DamageManager_C::TL_LerpDamage__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Armadillo_DamageManager_C", "TL_LerpDamage__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Armadillo_DamageManager.BP_Armadillo_DamageManager_C.TL_LerpDamage__UpdateFunc
// (BlueprintEvent)

void ABP_Armadillo_DamageManager_C::TL_LerpDamage__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Armadillo_DamageManager_C", "TL_LerpDamage__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}

