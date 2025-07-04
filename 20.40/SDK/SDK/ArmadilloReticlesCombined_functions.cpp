﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ArmadilloReticlesCombined

#include "Basic.hpp"

#include "ArmadilloReticlesCombined_classes.hpp"
#include "ArmadilloReticlesCombined_parameters.hpp"


namespace SDK
{

// Function ArmadilloReticlesCombined.ArmadilloReticlesCombined_C.BP_OnCursorModeChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class USpecialEventCursorPawnComponent* InCursorPawnComponent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayTag&              NewCursorModeTag                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayTag&              OldCursorModeTag                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UArmadilloReticlesCombined_C::BP_OnCursorModeChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, const struct FGameplayTag& NewCursorModeTag, const struct FGameplayTag& OldCursorModeTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmadilloReticlesCombined_C", "BP_OnCursorModeChanged");

	Params::ArmadilloReticlesCombined_C_BP_OnCursorModeChanged Parms{};

	Parms.InCursorPawnComponent = InCursorPawnComponent;
	Parms.NewCursorModeTag = std::move(NewCursorModeTag);
	Parms.OldCursorModeTag = std::move(OldCursorModeTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ArmadilloReticlesCombined.ArmadilloReticlesCombined_C.ExecuteUbergraph_ArmadilloReticlesCombined
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmadilloReticlesCombined_C::ExecuteUbergraph_ArmadilloReticlesCombined(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmadilloReticlesCombined_C", "ExecuteUbergraph_ArmadilloReticlesCombined");

	Params::ArmadilloReticlesCombined_C_ExecuteUbergraph_ArmadilloReticlesCombined Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ArmadilloReticlesCombined.ArmadilloReticlesCombined_C.GetIndexForWeaponClass
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFortWeapon*                      InFortWeapon                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32*                                  OutIndex                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmadilloReticlesCombined_C::GetIndexForWeaponClass(class AFortWeapon* InFortWeapon, int32* OutIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmadilloReticlesCombined_C", "GetIndexForWeaponClass");

	Params::ArmadilloReticlesCombined_C_GetIndexForWeaponClass Parms{};

	Parms.InFortWeapon = InFortWeapon;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIndex != nullptr)
		*OutIndex = Parms.OutIndex;
}


// Function ArmadilloReticlesCombined.ArmadilloReticlesCombined_C.InitializeWeaponOverheatDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeaponRanged*                InWeapon                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmadilloReticlesCombined_C::InitializeWeaponOverheatDisplay(class AFortWeaponRanged* InWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmadilloReticlesCombined_C", "InitializeWeaponOverheatDisplay");

	Params::ArmadilloReticlesCombined_C_InitializeWeaponOverheatDisplay Parms{};

	Parms.InWeapon = InWeapon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ArmadilloReticlesCombined.ArmadilloReticlesCombined_C.OnChainStoppedFiring
// (BlueprintCallable, BlueprintEvent)

void UArmadilloReticlesCombined_C::OnChainStoppedFiring()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmadilloReticlesCombined_C", "OnChainStoppedFiring");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ArmadilloReticlesCombined.ArmadilloReticlesCombined_C.OnNewWeaponActivated
// (BlueprintCallable, BlueprintEvent)

void UArmadilloReticlesCombined_C::OnNewWeaponActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmadilloReticlesCombined_C", "OnNewWeaponActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ArmadilloReticlesCombined.ArmadilloReticlesCombined_C.OnWeaponFireVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeapon*                      Weapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmadilloReticlesCombined_C::OnWeaponFireVisuals(class AFortWeapon* Weapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmadilloReticlesCombined_C", "OnWeaponFireVisuals");

	Params::ArmadilloReticlesCombined_C_OnWeaponFireVisuals Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ArmadilloReticlesCombined.ArmadilloReticlesCombined_C.OverheatChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   CurrentValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MaxValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortWeaponOverheatState                State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsInCooldown                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmadilloReticlesCombined_C::OverheatChange(float CurrentValue, float MaxValue, EFortWeaponOverheatState State, bool bIsInCooldown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmadilloReticlesCombined_C", "OverheatChange");

	Params::ArmadilloReticlesCombined_C_OverheatChange Parms{};

	Parms.CurrentValue = CurrentValue;
	Parms.MaxValue = MaxValue;
	Parms.State = State;
	Parms.bIsInCooldown = bIsInCooldown;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ArmadilloReticlesCombined.ArmadilloReticlesCombined_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmadilloReticlesCombined_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmadilloReticlesCombined_C", "Tick");

	Params::ArmadilloReticlesCombined_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ArmadilloReticlesCombined.ArmadilloReticlesCombined_C.UpdateWeaponIconInViewportMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeaponRanged*                InWeapon                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmadilloReticlesCombined_C::UpdateWeaponIconInViewportMesh(class AFortWeaponRanged* InWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmadilloReticlesCombined_C", "UpdateWeaponIconInViewportMesh");

	Params::ArmadilloReticlesCombined_C_UpdateWeaponIconInViewportMesh Parms{};

	Parms.InWeapon = InWeapon;

	UObject::ProcessEvent(Func, &Parms);
}

}

