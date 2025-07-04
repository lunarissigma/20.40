﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ArmadilloPlayerPawnComponent

#include "Basic.hpp"

#include "BP_ArmadilloPlayerPawnComponent_classes.hpp"
#include "BP_ArmadilloPlayerPawnComponent_parameters.hpp"


namespace SDK
{

// Function BP_ArmadilloPlayerPawnComponent.BP_ArmadilloPlayerPawnComponent_C.CheckSkeletalMeshComp
// (BlueprintCallable, BlueprintEvent)

void UBP_ArmadilloPlayerPawnComponent_C::CheckSkeletalMeshComp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArmadilloPlayerPawnComponent_C", "CheckSkeletalMeshComp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArmadilloPlayerPawnComponent.BP_ArmadilloPlayerPawnComponent_C.ExecuteUbergraph_BP_ArmadilloPlayerPawnComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ArmadilloPlayerPawnComponent_C::ExecuteUbergraph_BP_ArmadilloPlayerPawnComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArmadilloPlayerPawnComponent_C", "ExecuteUbergraph_BP_ArmadilloPlayerPawnComponent");

	Params::BP_ArmadilloPlayerPawnComponent_C_ExecuteUbergraph_BP_ArmadilloPlayerPawnComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ArmadilloPlayerPawnComponent.BP_ArmadilloPlayerPawnComponent_C.OnRep_PausePlayerAnims
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ArmadilloPlayerPawnComponent_C::OnRep_PausePlayerAnims()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArmadilloPlayerPawnComponent_C", "OnRep_PausePlayerAnims");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArmadilloPlayerPawnComponent.BP_ArmadilloPlayerPawnComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_ArmadilloPlayerPawnComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArmadilloPlayerPawnComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArmadilloPlayerPawnComponent.BP_ArmadilloPlayerPawnComponent_C.Toggle Player Anims
// (BlueprintCallable, BlueprintEvent)

void UBP_ArmadilloPlayerPawnComponent_C::Toggle_Player_Anims()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArmadilloPlayerPawnComponent_C", "Toggle Player Anims");

	UObject::ProcessEvent(Func, nullptr);
}

}

