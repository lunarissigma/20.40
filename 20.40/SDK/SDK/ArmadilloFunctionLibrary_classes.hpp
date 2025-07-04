﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ArmadilloFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ArmadilloFunctionLibrary.ArmadilloFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UArmadilloFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void Armadillo_on_Play_Weapon_Fire_FX_Forward_to_Widget(class AFortWeapon* Weapon, class UObject* __WorldContext);
	static void Armadillo_DestroyRangedWeaponComponents(class AB_Ranged_Generic_C* RangedWeapon, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ArmadilloFunctionLibrary_C">();
	}
	static class UArmadilloFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UArmadilloFunctionLibrary_C>();
	}
};
static_assert(alignof(UArmadilloFunctionLibrary_C) == 0x000008, "Wrong alignment on UArmadilloFunctionLibrary_C");
static_assert(sizeof(UArmadilloFunctionLibrary_C) == 0x000028, "Wrong size on UArmadilloFunctionLibrary_C");

}

