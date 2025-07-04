﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemAnimLayerInterface

#include "Basic.hpp"

#include "ItemAnimLayerInterface_classes.hpp"
#include "ItemAnimLayerInterface_parameters.hpp"


namespace SDK
{

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemAimOffset
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPoseLink&                 InPose_AimOffset                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   AimOffsetAlpha                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Yaw                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Pitch                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FPoseLink&                 InPose_UpperLowerPreMeleeAO                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       ItemAimOffset_0                                        (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemAimOffset(const struct FPoseLink& InPose_AimOffset, float AimOffsetAlpha, float Yaw, float Pitch, const struct FPoseLink& InPose_UpperLowerPreMeleeAO, struct FPoseLink* ItemAimOffset_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemAimOffset");

	Params::ItemAnimLayerInterface_C_ItemAimOffset Parms{};

	Parms.InPose_AimOffset = std::move(InPose_AimOffset);
	Parms.AimOffsetAlpha = AimOffsetAlpha;
	Parms.Yaw = Yaw;
	Parms.Pitch = Pitch;
	Parms.InPose_UpperLowerPreMeleeAO = std::move(InPose_UpperLowerPreMeleeAO);

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemAimOffset_0 != nullptr)
		*ItemAimOffset_0 = std::move(Parms.ItemAimOffset_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemCrouchTurningAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       ItemCrouchTurningAdditive_0                            (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemCrouchTurningAdditive(struct FPoseLink* ItemCrouchTurningAdditive_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemCrouchTurningAdditive");

	Params::ItemAnimLayerInterface_C_ItemCrouchTurningAdditive Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemCrouchTurningAdditive_0 != nullptr)
		*ItemCrouchTurningAdditive_0 = std::move(Parms.ItemCrouchTurningAdditive_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFallAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       ItemFallAdditive_0                                     (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemFallAdditive(struct FPoseLink* ItemFallAdditive_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemFallAdditive");

	Params::ItemAnimLayerInterface_C_ItemFallAdditive Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemFallAdditive_0 != nullptr)
		*ItemFallAdditive_0 = std::move(Parms.ItemFallAdditive_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFallLandAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       ItemFallLandAdditive_0                                 (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemFallLandAdditive(struct FPoseLink* ItemFallLandAdditive_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemFallLandAdditive");

	Params::ItemAnimLayerInterface_C_ItemFallLandAdditive Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemFallLandAdditive_0 != nullptr)
		*ItemFallLandAdditive_0 = std::move(Parms.ItemFallLandAdditive_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFlyModeLoopAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       ItemFlyModeLoopAdditive_0                              (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemFlyModeLoopAdditive(struct FPoseLink* ItemFlyModeLoopAdditive_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemFlyModeLoopAdditive");

	Params::ItemAnimLayerInterface_C_ItemFlyModeLoopAdditive Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemFlyModeLoopAdditive_0 != nullptr)
		*ItemFlyModeLoopAdditive_0 = std::move(Parms.ItemFlyModeLoopAdditive_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFlyModeStartAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       ItemFlyModeStartAdditive_0                             (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemFlyModeStartAdditive(struct FPoseLink* ItemFlyModeStartAdditive_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemFlyModeStartAdditive");

	Params::ItemAnimLayerInterface_C_ItemFlyModeStartAdditive Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemFlyModeStartAdditive_0 != nullptr)
		*ItemFlyModeStartAdditive_0 = std::move(Parms.ItemFlyModeStartAdditive_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFullBodyOverride
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPoseLink&                 InPoseFullBody                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       ItemFullBodyOverride_0                                 (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* ItemFullBodyOverride_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemFullBodyOverride");

	Params::ItemAnimLayerInterface_C_ItemFullBodyOverride Parms{};

	Parms.InPoseFullBody = std::move(InPoseFullBody);

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemFullBodyOverride_0 != nullptr)
		*ItemFullBodyOverride_0 = std::move(Parms.ItemFullBodyOverride_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFullBodySprint
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPoseLink&                 InPoseSprint                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       ItemFullBodySprint_0                                   (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemFullBodySprint(const struct FPoseLink& InPoseSprint, struct FPoseLink* ItemFullBodySprint_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemFullBodySprint");

	Params::ItemAnimLayerInterface_C_ItemFullBodySprint Parms{};

	Parms.InPoseSprint = std::move(InPoseSprint);

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemFullBodySprint_0 != nullptr)
		*ItemFullBodySprint_0 = std::move(Parms.ItemFullBodySprint_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemIdleAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPoseLink&                 InPoseIdleAdditive                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       ItemIdleAdditive_0                                     (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemIdleAdditive(const struct FPoseLink& InPoseIdleAdditive, struct FPoseLink* ItemIdleAdditive_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemIdleAdditive");

	Params::ItemAnimLayerInterface_C_ItemIdleAdditive Parms{};

	Parms.InPoseIdleAdditive = std::move(InPoseIdleAdditive);

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemIdleAdditive_0 != nullptr)
		*ItemIdleAdditive_0 = std::move(Parms.ItemIdleAdditive_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJetPackJumpAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       ItemJetPackJumpAdditive_0                              (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemJetPackJumpAdditive(struct FPoseLink* ItemJetPackJumpAdditive_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemJetPackJumpAdditive");

	Params::ItemAnimLayerInterface_C_ItemJetPackJumpAdditive Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemJetPackJumpAdditive_0 != nullptr)
		*ItemJetPackJumpAdditive_0 = std::move(Parms.ItemJetPackJumpAdditive_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJetPackStartAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       ItemJetPackStartAdditive_0                             (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemJetPackStartAdditive(struct FPoseLink* ItemJetPackStartAdditive_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemJetPackStartAdditive");

	Params::ItemAnimLayerInterface_C_ItemJetPackStartAdditive Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemJetPackStartAdditive_0 != nullptr)
		*ItemJetPackStartAdditive_0 = std::move(Parms.ItemJetPackStartAdditive_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJogPostPivotAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPoseLink&                 InPosePostPivotAdditive                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       ItemJogPostPivotAdditive_0                             (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemJogPostPivotAdditive(const struct FPoseLink& InPosePostPivotAdditive, struct FPoseLink* ItemJogPostPivotAdditive_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemJogPostPivotAdditive");

	Params::ItemAnimLayerInterface_C_ItemJogPostPivotAdditive Parms{};

	Parms.InPosePostPivotAdditive = std::move(InPosePostPivotAdditive);

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemJogPostPivotAdditive_0 != nullptr)
		*ItemJogPostPivotAdditive_0 = std::move(Parms.ItemJogPostPivotAdditive_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJogPrePivotAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPoseLink&                 InPosePrePivotAdditive                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       ItemJogPrePivotAdditive_0                              (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemJogPrePivotAdditive(const struct FPoseLink& InPosePrePivotAdditive, struct FPoseLink* ItemJogPrePivotAdditive_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemJogPrePivotAdditive");

	Params::ItemAnimLayerInterface_C_ItemJogPrePivotAdditive Parms{};

	Parms.InPosePrePivotAdditive = std::move(InPosePrePivotAdditive);

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemJogPrePivotAdditive_0 != nullptr)
		*ItemJogPrePivotAdditive_0 = std::move(Parms.ItemJogPrePivotAdditive_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJogStartAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPoseLink&                 InPoseJogStartAdditive                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       ItemJogStartAdditive_0                                 (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemJogStartAdditive(const struct FPoseLink& InPoseJogStartAdditive, struct FPoseLink* ItemJogStartAdditive_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemJogStartAdditive");

	Params::ItemAnimLayerInterface_C_ItemJogStartAdditive Parms{};

	Parms.InPoseJogStartAdditive = std::move(InPoseJogStartAdditive);

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemJogStartAdditive_0 != nullptr)
		*ItemJogStartAdditive_0 = std::move(Parms.ItemJogStartAdditive_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJogStopAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPoseLink&                 InPoseJogStopAdditive                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       ItemJogStopAdditive_0                                  (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemJogStopAdditive(const struct FPoseLink& InPoseJogStopAdditive, struct FPoseLink* ItemJogStopAdditive_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemJogStopAdditive");

	Params::ItemAnimLayerInterface_C_ItemJogStopAdditive Parms{};

	Parms.InPoseJogStopAdditive = std::move(InPoseJogStopAdditive);

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemJogStopAdditive_0 != nullptr)
		*ItemJogStopAdditive_0 = std::move(Parms.ItemJogStopAdditive_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJumpLoopAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       ItemJumpLoopAdditive_0                                 (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemJumpLoopAdditive(struct FPoseLink* ItemJumpLoopAdditive_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemJumpLoopAdditive");

	Params::ItemAnimLayerInterface_C_ItemJumpLoopAdditive Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemJumpLoopAdditive_0 != nullptr)
		*ItemJumpLoopAdditive_0 = std::move(Parms.ItemJumpLoopAdditive_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJumpUpAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       ItemJumpUpAdditive_0                                   (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemJumpUpAdditive(struct FPoseLink* ItemJumpUpAdditive_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemJumpUpAdditive");

	Params::ItemAnimLayerInterface_C_ItemJumpUpAdditive Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemJumpUpAdditive_0 != nullptr)
		*ItemJumpUpAdditive_0 = std::move(Parms.ItemJumpUpAdditive_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemLowerBodyJogPostPivot
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPoseLink&                 InPoseLowerBodyJogPostPivot                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       ItemLowerBodyJogPostPivot_0                            (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemLowerBodyJogPostPivot(const struct FPoseLink& InPoseLowerBodyJogPostPivot, struct FPoseLink* ItemLowerBodyJogPostPivot_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemLowerBodyJogPostPivot");

	Params::ItemAnimLayerInterface_C_ItemLowerBodyJogPostPivot Parms{};

	Parms.InPoseLowerBodyJogPostPivot = std::move(InPoseLowerBodyJogPostPivot);

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogPostPivot_0 != nullptr)
		*ItemLowerBodyJogPostPivot_0 = std::move(Parms.ItemLowerBodyJogPostPivot_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemLowerBodyJogPrePivot
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPoseLink&                 InPoseLowerBodyJogPrePivot                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       ItemLowerBodyJogPrePivot_0                             (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemLowerBodyJogPrePivot(const struct FPoseLink& InPoseLowerBodyJogPrePivot, struct FPoseLink* ItemLowerBodyJogPrePivot_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemLowerBodyJogPrePivot");

	Params::ItemAnimLayerInterface_C_ItemLowerBodyJogPrePivot Parms{};

	Parms.InPoseLowerBodyJogPrePivot = std::move(InPoseLowerBodyJogPrePivot);

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogPrePivot_0 != nullptr)
		*ItemLowerBodyJogPrePivot_0 = std::move(Parms.ItemLowerBodyJogPrePivot_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemLowerBodyJogStart
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPoseLink&                 InPoseLowerBodyJogStart                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       ItemLowerBodyJogStart_0                                (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemLowerBodyJogStart(const struct FPoseLink& InPoseLowerBodyJogStart, struct FPoseLink* ItemLowerBodyJogStart_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemLowerBodyJogStart");

	Params::ItemAnimLayerInterface_C_ItemLowerBodyJogStart Parms{};

	Parms.InPoseLowerBodyJogStart = std::move(InPoseLowerBodyJogStart);

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogStart_0 != nullptr)
		*ItemLowerBodyJogStart_0 = std::move(Parms.ItemLowerBodyJogStart_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemLowerBodyJogStop
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPoseLink&                 InPoseLowerBodyJogStop                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       ItemLowerBodyJogStop_0                                 (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemLowerBodyJogStop(const struct FPoseLink& InPoseLowerBodyJogStop, struct FPoseLink* ItemLowerBodyJogStop_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemLowerBodyJogStop");

	Params::ItemAnimLayerInterface_C_ItemLowerBodyJogStop Parms{};

	Parms.InPoseLowerBodyJogStop = std::move(InPoseLowerBodyJogStop);

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogStop_0 != nullptr)
		*ItemLowerBodyJogStop_0 = std::move(Parms.ItemLowerBodyJogStop_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemLowerBodyLeanAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPoseLink&                 InPoseLowerBodyLeanAdditive                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       ItemLowerBodyLeanAdditive_0                            (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemLowerBodyLeanAdditive(const struct FPoseLink& InPoseLowerBodyLeanAdditive, struct FPoseLink* ItemLowerBodyLeanAdditive_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemLowerBodyLeanAdditive");

	Params::ItemAnimLayerInterface_C_ItemLowerBodyLeanAdditive Parms{};

	Parms.InPoseLowerBodyLeanAdditive = std::move(InPoseLowerBodyLeanAdditive);

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemLowerBodyLeanAdditive_0 != nullptr)
		*ItemLowerBodyLeanAdditive_0 = std::move(Parms.ItemLowerBodyLeanAdditive_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemLowerBodyMovement
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPoseLink&                 InPoseLowerBodyMovement                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       ItemLowerBodyMovement_0                                (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemLowerBodyMovement(const struct FPoseLink& InPoseLowerBodyMovement, struct FPoseLink* ItemLowerBodyMovement_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemLowerBodyMovement");

	Params::ItemAnimLayerInterface_C_ItemLowerBodyMovement Parms{};

	Parms.InPoseLowerBodyMovement = std::move(InPoseLowerBodyMovement);

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemLowerBodyMovement_0 != nullptr)
		*ItemLowerBodyMovement_0 = std::move(Parms.ItemLowerBodyMovement_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemPreIK
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPoseLink&                 InPose_PreIK                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       ItemPreIK_0                                            (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemPreIK(const struct FPoseLink& InPose_PreIK, struct FPoseLink* ItemPreIK_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemPreIK");

	Params::ItemAnimLayerInterface_C_ItemPreIK Parms{};

	Parms.InPose_PreIK = std::move(InPose_PreIK);

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemPreIK_0 != nullptr)
		*ItemPreIK_0 = std::move(Parms.ItemPreIK_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemRelaxedEntry
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPoseLink&                 InPoseRelaxedEntry                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       ItemRelaxedEntry_0                                     (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemRelaxedEntry(const struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink* ItemRelaxedEntry_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemRelaxedEntry");

	Params::ItemAnimLayerInterface_C_ItemRelaxedEntry Parms{};

	Parms.InPoseRelaxedEntry = std::move(InPoseRelaxedEntry);

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemRelaxedEntry_0 != nullptr)
		*ItemRelaxedEntry_0 = std::move(Parms.ItemRelaxedEntry_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSkeletalControl
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPoseLink&                 InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       ItemSkeletalControl_0                                  (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemSkeletalControl(const struct FPoseLink& InPose, struct FPoseLink* ItemSkeletalControl_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemSkeletalControl");

	Params::ItemAnimLayerInterface_C_ItemSkeletalControl Parms{};

	Parms.InPose = std::move(InPose);

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemSkeletalControl_0 != nullptr)
		*ItemSkeletalControl_0 = std::move(Parms.ItemSkeletalControl_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSlopeSliding
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       ItemSlopeSliding_0                                     (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemSlopeSliding(struct FPoseLink* ItemSlopeSliding_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemSlopeSliding");

	Params::ItemAnimLayerInterface_C_ItemSlopeSliding Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemSlopeSliding_0 != nullptr)
		*ItemSlopeSliding_0 = std::move(Parms.ItemSlopeSliding_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSwimJumpFallLoop
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       ItemSwimJumpFallLoop_0                                 (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemSwimJumpFallLoop(struct FPoseLink* ItemSwimJumpFallLoop_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemSwimJumpFallLoop");

	Params::ItemAnimLayerInterface_C_ItemSwimJumpFallLoop Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemSwimJumpFallLoop_0 != nullptr)
		*ItemSwimJumpFallLoop_0 = std::move(Parms.ItemSwimJumpFallLoop_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSwimJumpStart
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       ItemSwimJumpStart_0                                    (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemSwimJumpStart(struct FPoseLink* ItemSwimJumpStart_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemSwimJumpStart");

	Params::ItemAnimLayerInterface_C_ItemSwimJumpStart Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemSwimJumpStart_0 != nullptr)
		*ItemSwimJumpStart_0 = std::move(Parms.ItemSwimJumpStart_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSwimJumpStartLoop
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       ItemSwimJumpStartLoop_0                                (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemSwimJumpStartLoop(struct FPoseLink* ItemSwimJumpStartLoop_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemSwimJumpStartLoop");

	Params::ItemAnimLayerInterface_C_ItemSwimJumpStartLoop Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemSwimJumpStartLoop_0 != nullptr)
		*ItemSwimJumpStartLoop_0 = std::move(Parms.ItemSwimJumpStartLoop_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSwimJumpSurfaceEnd
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       ItemSwimJumpSurfaceEnd_0                               (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemSwimJumpSurfaceEnd(struct FPoseLink* ItemSwimJumpSurfaceEnd_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemSwimJumpSurfaceEnd");

	Params::ItemAnimLayerInterface_C_ItemSwimJumpSurfaceEnd Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemSwimJumpSurfaceEnd_0 != nullptr)
		*ItemSwimJumpSurfaceEnd_0 = std::move(Parms.ItemSwimJumpSurfaceEnd_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSwimJumpSurfaceLoop
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       ItemSwimJumpSurfaceLoop_0                              (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemSwimJumpSurfaceLoop(struct FPoseLink* ItemSwimJumpSurfaceLoop_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemSwimJumpSurfaceLoop");

	Params::ItemAnimLayerInterface_C_ItemSwimJumpSurfaceLoop Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemSwimJumpSurfaceLoop_0 != nullptr)
		*ItemSwimJumpSurfaceLoop_0 = std::move(Parms.ItemSwimJumpSurfaceLoop_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemUpperBody
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPoseLink&                 InPoseUpperBody                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// const struct FFortAnimInput_AdjustedAim&InputParam                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       ItemUpperBody_0                                        (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemUpperBody(const struct FPoseLink& InPoseUpperBody, const struct FFortAnimInput_AdjustedAim& InputParam, struct FPoseLink* ItemUpperBody_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemUpperBody");

	Params::ItemAnimLayerInterface_C_ItemUpperBody Parms{};

	Parms.InPoseUpperBody = std::move(InPoseUpperBody);
	Parms.InputParam = std::move(InputParam);

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemUpperBody_0 != nullptr)
		*ItemUpperBody_0 = std::move(Parms.ItemUpperBody_0);
}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemZipLineStartAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       ItemZipLineStartAdditive_0                             (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemZipLineStartAdditive(struct FPoseLink* ItemZipLineStartAdditive_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("ItemAnimLayerInterface_C", "ItemZipLineStartAdditive");

	Params::ItemAnimLayerInterface_C_ItemZipLineStartAdditive Parms{};

	AsUObject()->ProcessEvent(Func, &Parms);

	if (ItemZipLineStartAdditive_0 != nullptr)
		*ItemZipLineStartAdditive_0 = std::move(Parms.ItemZipLineStartAdditive_0);
}

}

