﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ActivityModeSetSelectionModal

#include "Basic.hpp"

#include "ActivityModeSetSelectionModal_classes.hpp"
#include "ActivityModeSetSelectionModal_parameters.hpp"


namespace SDK
{

// Function ActivityModeSetSelectionModal.ActivityModeSetSelectionModal_C.BndEvt__ActivityModeSetSelectionModal_ActivityPrivacyButton_K2Node_ComponentBoundEvent_4_OnPrivacyAvailableChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsAvailable                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActivityModeSetSelectionModal_C::BndEvt__ActivityModeSetSelectionModal_ActivityPrivacyButton_K2Node_ComponentBoundEvent_4_OnPrivacyAvailableChanged__DelegateSignature(bool IsAvailable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityModeSetSelectionModal_C", "BndEvt__ActivityModeSetSelectionModal_ActivityPrivacyButton_K2Node_ComponentBoundEvent_4_OnPrivacyAvailableChanged__DelegateSignature");

	Params::ActivityModeSetSelectionModal_C_BndEvt__ActivityModeSetSelectionModal_ActivityPrivacyButton_K2Node_ComponentBoundEvent_4_OnPrivacyAvailableChanged__DelegateSignature Parms{};

	Parms.IsAvailable = IsAvailable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActivityModeSetSelectionModal.ActivityModeSetSelectionModal_C.BndEvt__ActivityModeSetSelectionModal_ModeSetSelection_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActivityModeSetSelectionModal_C::BndEvt__ActivityModeSetSelectionModal_ModeSetSelection_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityModeSetSelectionModal_C", "BndEvt__ActivityModeSetSelectionModal_ModeSetSelection_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature");

	Params::ActivityModeSetSelectionModal_C_BndEvt__ActivityModeSetSelectionModal_ModeSetSelection_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature Parms{};

	Parms.Item = Item;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActivityModeSetSelectionModal.ActivityModeSetSelectionModal_C.BndEvt__ActivityModeSetSelectionModal_ModeSetSelection_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActivityModeSetSelectionModal_C::BndEvt__ActivityModeSetSelectionModal_ModeSetSelection_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityModeSetSelectionModal_C", "BndEvt__ActivityModeSetSelectionModal_ModeSetSelection_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature");

	Params::ActivityModeSetSelectionModal_C_BndEvt__ActivityModeSetSelectionModal_ModeSetSelection_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActivityModeSetSelectionModal.ActivityModeSetSelectionModal_C.BndEvt__ActivityMultiModeModal_Button_BackBoard_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonLegacy*              Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActivityModeSetSelectionModal_C::BndEvt__ActivityMultiModeModal_Button_BackBoard_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityModeSetSelectionModal_C", "BndEvt__ActivityMultiModeModal_Button_BackBoard_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::ActivityModeSetSelectionModal_C_BndEvt__ActivityMultiModeModal_Button_BackBoard_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActivityModeSetSelectionModal.ActivityModeSetSelectionModal_C.ExecuteUbergraph_ActivityModeSetSelectionModal
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActivityModeSetSelectionModal_C::ExecuteUbergraph_ActivityModeSetSelectionModal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityModeSetSelectionModal_C", "ExecuteUbergraph_ActivityModeSetSelectionModal");

	Params::ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActivityModeSetSelectionModal.ActivityModeSetSelectionModal_C.OnActivityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// const class UFortGameActivity*          GameActivity                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    StartingSelectedMnemonic                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UActivityModeSetSelectionModal_C::OnActivityChanged(const class UFortGameActivity* GameActivity, const class FString& StartingSelectedMnemonic)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityModeSetSelectionModal_C", "OnActivityChanged");

	Params::ActivityModeSetSelectionModal_C_OnActivityChanged Parms{};

	Parms.GameActivity = GameActivity;
	Parms.StartingSelectedMnemonic = std::move(StartingSelectedMnemonic);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActivityModeSetSelectionModal.ActivityModeSetSelectionModal_C.OnPreviewImageChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// const bool                              bIsLoading                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class UTexture*                   Texture                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActivityModeSetSelectionModal_C::OnPreviewImageChanged(const bool bIsLoading, const class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityModeSetSelectionModal_C", "OnPreviewImageChanged");

	Params::ActivityModeSetSelectionModal_C_OnPreviewImageChanged Parms{};

	Parms.bIsLoading = bIsLoading;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActivityModeSetSelectionModal.ActivityModeSetSelectionModal_C.SaveSelection
// (Public, BlueprintCallable, BlueprintEvent)

void UActivityModeSetSelectionModal_C::SaveSelection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityModeSetSelectionModal_C", "SaveSelection");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ActivityModeSetSelectionModal.ActivityModeSetSelectionModal_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UActivityModeSetSelectionModal_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityModeSetSelectionModal_C", "BP_GetDesiredFocusTarget");

	Params::ActivityModeSetSelectionModal_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

