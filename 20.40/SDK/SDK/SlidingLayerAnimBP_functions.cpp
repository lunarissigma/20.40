﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SlidingLayerAnimBP

#include "Basic.hpp"

#include "SlidingLayerAnimBP_classes.hpp"
#include "SlidingLayerAnimBP_parameters.hpp"


namespace SDK
{

// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void USlidingLayerAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SlidingLayerAnimBP_C", "AnimGraph");

	Params::SlidingLayerAnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void USlidingLayerAnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SlidingLayerAnimBP_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USlidingLayerAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SlidingLayerAnimBP_C", "BlueprintUpdateAnimation");

	Params::SlidingLayerAnimBP_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.ExecuteUbergraph_SlidingLayerAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USlidingLayerAnimBP_C::ExecuteUbergraph_SlidingLayerAnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SlidingLayerAnimBP_C", "ExecuteUbergraph_SlidingLayerAnimBP");

	Params::SlidingLayerAnimBP_C_ExecuteUbergraph_SlidingLayerAnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.MovementMode_LocomotionUpperBodyAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// const struct FPoseLink&                 InPose_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       MovementMode_LocomotionUpperBodyAdditive_0             (Parm, OutParm, NoDestructor)

void USlidingLayerAnimBP_C::MovementMode_LocomotionUpperBodyAdditive(const struct FPoseLink& InPose_0, struct FPoseLink* MovementMode_LocomotionUpperBodyAdditive_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SlidingLayerAnimBP_C", "MovementMode_LocomotionUpperBodyAdditive");

	Params::SlidingLayerAnimBP_C_MovementMode_LocomotionUpperBodyAdditive Parms{};

	Parms.InPose_0 = std::move(InPose_0);

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_LocomotionUpperBodyAdditive_0 != nullptr)
		*MovementMode_LocomotionUpperBodyAdditive_0 = std::move(Parms.MovementMode_LocomotionUpperBodyAdditive_0);
}


// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.MovementMode_LowerBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// const struct FPoseLink&                 InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       MovementMode_LowerBodyOverride_0                       (Parm, OutParm, NoDestructor)

void USlidingLayerAnimBP_C::MovementMode_LowerBodyOverride(const struct FPoseLink& InPose, struct FPoseLink* MovementMode_LowerBodyOverride_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SlidingLayerAnimBP_C", "MovementMode_LowerBodyOverride");

	Params::SlidingLayerAnimBP_C_MovementMode_LowerBodyOverride Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_LowerBodyOverride_0 != nullptr)
		*MovementMode_LowerBodyOverride_0 = std::move(Parms.MovementMode_LowerBodyOverride_0);
}


// Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.MovementMode_UpperBodyPose
// (HasOutParams, BlueprintCallable)
// Parameters:
// const struct FPoseLink&                 UppperBodyPose_BasePose                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       MovementMode_UpperBodyPose_0                           (Parm, OutParm, NoDestructor)

void USlidingLayerAnimBP_C::MovementMode_UpperBodyPose(const struct FPoseLink& UppperBodyPose_BasePose, struct FPoseLink* MovementMode_UpperBodyPose_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SlidingLayerAnimBP_C", "MovementMode_UpperBodyPose");

	Params::SlidingLayerAnimBP_C_MovementMode_UpperBodyPose Parms{};

	Parms.UppperBodyPose_BasePose = std::move(UppperBodyPose_BasePose);

	UObject::ProcessEvent(Func, &Parms);

	if (MovementMode_UpperBodyPose_0 != nullptr)
		*MovementMode_UpperBodyPose_0 = std::move(Parms.MovementMode_UpperBodyPose_0);
}

}

