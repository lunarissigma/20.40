﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CustomizableObjectPopulation

#include "Basic.hpp"

#include "CustomizableObjectPopulation_classes.hpp"
#include "CustomizableObjectPopulation_parameters.hpp"


namespace SDK
{

// Function CustomizableObjectPopulation.CustomizableObjectPopulation.GeneratePopulation
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UCustomizableObjectInstance*>*OutInstances                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                                   NumInstancesToGenerate                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCustomizableObjectPopulation::GeneratePopulation(TArray<class UCustomizableObjectInstance*>* OutInstances, int32 NumInstancesToGenerate) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectPopulation", "GeneratePopulation");

	Params::CustomizableObjectPopulation_GeneratePopulation Parms{};

	Parms.NumInstancesToGenerate = NumInstancesToGenerate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutInstances != nullptr)
		*OutInstances = std::move(Parms.OutInstances);

	return Parms.ReturnValue;
}


// Function CustomizableObjectPopulation.CustomizableObjectPopulation.RegeneratePopulation
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                                   Seed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UCustomizableObjectInstance*>*OutInstances                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                                   NumInstancesToGenerate                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCustomizableObjectPopulation::RegeneratePopulation(int32 Seed, TArray<class UCustomizableObjectInstance*>* OutInstances, int32 NumInstancesToGenerate) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizableObjectPopulation", "RegeneratePopulation");

	Params::CustomizableObjectPopulation_RegeneratePopulation Parms{};

	Parms.Seed = Seed;
	Parms.NumInstancesToGenerate = NumInstancesToGenerate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutInstances != nullptr)
		*OutInstances = std::move(Parms.OutInstances);

	return Parms.ReturnValue;
}

}

