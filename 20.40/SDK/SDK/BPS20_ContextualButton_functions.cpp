﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPS20_ContextualButton

#include "Basic.hpp"

#include "BPS20_ContextualButton_classes.hpp"
#include "BPS20_ContextualButton_parameters.hpp"


namespace SDK
{

// Function BPS20_ContextualButton.BPS20_ContextualButton_C.BP_OnHoldCompleted
// (Event, Protected, BlueprintEvent)

void UBPS20_ContextualButton_C::BP_OnHoldCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS20_ContextualButton_C", "BP_OnHoldCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPS20_ContextualButton.BPS20_ContextualButton_C.BP_OnHoldDecreased
// (Event, Protected, BlueprintEvent)
// Parameters:
// const float                             HoldPercentage                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPS20_ContextualButton_C::BP_OnHoldDecreased(const float HoldPercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS20_ContextualButton_C", "BP_OnHoldDecreased");

	Params::BPS20_ContextualButton_C_BP_OnHoldDecreased Parms{};

	Parms.HoldPercentage = HoldPercentage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPS20_ContextualButton.BPS20_ContextualButton_C.BP_OnHoldEnded
// (Event, Protected, BlueprintEvent)
// Parameters:
// const float                             HoldPercentage                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const bool                              bInUseSecondaryHoldAnimation                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPS20_ContextualButton_C::BP_OnHoldEnded(const float HoldPercentage, const bool bInUseSecondaryHoldAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS20_ContextualButton_C", "BP_OnHoldEnded");

	Params::BPS20_ContextualButton_C_BP_OnHoldEnded Parms{};

	Parms.HoldPercentage = HoldPercentage;
	Parms.bInUseSecondaryHoldAnimation = bInUseSecondaryHoldAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPS20_ContextualButton.BPS20_ContextualButton_C.BP_OnHoldIncreased
// (Event, Protected, BlueprintEvent)
// Parameters:
// const float                             HoldPercentage                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPS20_ContextualButton_C::BP_OnHoldIncreased(const float HoldPercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS20_ContextualButton_C", "BP_OnHoldIncreased");

	Params::BPS20_ContextualButton_C_BP_OnHoldIncreased Parms{};

	Parms.HoldPercentage = HoldPercentage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPS20_ContextualButton.BPS20_ContextualButton_C.BP_OnHoldReset
// (Event, Protected, BlueprintEvent)

void UBPS20_ContextualButton_C::BP_OnHoldReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS20_ContextualButton_C", "BP_OnHoldReset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPS20_ContextualButton.BPS20_ContextualButton_C.BP_OnHoldStarted
// (Event, Protected, BlueprintEvent)
// Parameters:
// const float                             HoldPercentage                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const bool                              bInUseSecondaryHoldAnimation                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPS20_ContextualButton_C::BP_OnHoldStarted(const float HoldPercentage, const bool bInUseSecondaryHoldAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS20_ContextualButton_C", "BP_OnHoldStarted");

	Params::BPS20_ContextualButton_C_BP_OnHoldStarted Parms{};

	Parms.HoldPercentage = HoldPercentage;
	Parms.bInUseSecondaryHoldAnimation = bInUseSecondaryHoldAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPS20_ContextualButton.BPS20_ContextualButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UBPS20_ContextualButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS20_ContextualButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPS20_ContextualButton.BPS20_ContextualButton_C.BP_OnPressed
// (Event, Protected, BlueprintEvent)

void UBPS20_ContextualButton_C::BP_OnPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS20_ContextualButton_C", "BP_OnPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPS20_ContextualButton.BPS20_ContextualButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UBPS20_ContextualButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS20_ContextualButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPS20_ContextualButton.BPS20_ContextualButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPS20_ContextualButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS20_ContextualButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPS20_ContextualButton.BPS20_ContextualButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPS20_ContextualButton_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS20_ContextualButton_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPS20_ContextualButton.BPS20_ContextualButton_C.ExecuteUbergraph_BPS20_ContextualButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPS20_ContextualButton_C::ExecuteUbergraph_BPS20_ContextualButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS20_ContextualButton_C", "ExecuteUbergraph_BPS20_ContextualButton");

	Params::BPS20_ContextualButton_C_ExecuteUbergraph_BPS20_ContextualButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPS20_ContextualButton.BPS20_ContextualButton_C.FillComplete
// (BlueprintCallable, BlueprintEvent)

void UBPS20_ContextualButton_C::FillComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS20_ContextualButton_C", "FillComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPS20_ContextualButton.BPS20_ContextualButton_C.PlayFillSound
// (BlueprintCallable, BlueprintEvent)

void UBPS20_ContextualButton_C::PlayFillSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS20_ContextualButton_C", "PlayFillSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPS20_ContextualButton.BPS20_ContextualButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPS20_ContextualButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS20_ContextualButton_C", "PreConstruct");

	Params::BPS20_ContextualButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPS20_ContextualButton.BPS20_ContextualButton_C.StopFillSound
// (BlueprintCallable, BlueprintEvent)

void UBPS20_ContextualButton_C::StopFillSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS20_ContextualButton_C", "StopFillSound");

	UObject::ProcessEvent(Func, nullptr);
}

}

