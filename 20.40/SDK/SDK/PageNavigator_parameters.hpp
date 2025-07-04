﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PageNavigator

#include "Basic.hpp"


namespace SDK::Params
{

// Function PageNavigator.PageNavigator_C.ExecuteUbergraph_PageNavigator
// 0x0040 (0x0040 - 0x0000)
struct PageNavigator_C_ExecuteUbergraph_PageNavigator final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPageNavigatorButton_C*                 K2Node_DynamicCast_AsPage_Navigator_Button;        // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortTextButton*                        K2Node_Event_NewPipButton;                         // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPageNavigatorPipButton_C*              K2Node_DynamicCast_AsPage_Navigator_Pip_Button;    // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPageNavigatorButton_C*                 K2Node_DynamicCast_AsPage_Navigator_Button_1;      // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PageNavigator_C_ExecuteUbergraph_PageNavigator) == 0x000008, "Wrong alignment on PageNavigator_C_ExecuteUbergraph_PageNavigator");
static_assert(sizeof(PageNavigator_C_ExecuteUbergraph_PageNavigator) == 0x000040, "Wrong size on PageNavigator_C_ExecuteUbergraph_PageNavigator");
static_assert(offsetof(PageNavigator_C_ExecuteUbergraph_PageNavigator, EntryPoint) == 0x000000, "Member 'PageNavigator_C_ExecuteUbergraph_PageNavigator::EntryPoint' has a wrong offset!");
static_assert(offsetof(PageNavigator_C_ExecuteUbergraph_PageNavigator, K2Node_DynamicCast_AsPage_Navigator_Button) == 0x000008, "Member 'PageNavigator_C_ExecuteUbergraph_PageNavigator::K2Node_DynamicCast_AsPage_Navigator_Button' has a wrong offset!");
static_assert(offsetof(PageNavigator_C_ExecuteUbergraph_PageNavigator, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'PageNavigator_C_ExecuteUbergraph_PageNavigator::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PageNavigator_C_ExecuteUbergraph_PageNavigator, K2Node_Event_NewPipButton) == 0x000018, "Member 'PageNavigator_C_ExecuteUbergraph_PageNavigator::K2Node_Event_NewPipButton' has a wrong offset!");
static_assert(offsetof(PageNavigator_C_ExecuteUbergraph_PageNavigator, K2Node_DynamicCast_AsPage_Navigator_Pip_Button) == 0x000020, "Member 'PageNavigator_C_ExecuteUbergraph_PageNavigator::K2Node_DynamicCast_AsPage_Navigator_Pip_Button' has a wrong offset!");
static_assert(offsetof(PageNavigator_C_ExecuteUbergraph_PageNavigator, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'PageNavigator_C_ExecuteUbergraph_PageNavigator::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(PageNavigator_C_ExecuteUbergraph_PageNavigator, K2Node_DynamicCast_AsPage_Navigator_Button_1) == 0x000030, "Member 'PageNavigator_C_ExecuteUbergraph_PageNavigator::K2Node_DynamicCast_AsPage_Navigator_Button_1' has a wrong offset!");
static_assert(offsetof(PageNavigator_C_ExecuteUbergraph_PageNavigator, K2Node_DynamicCast_bSuccess_2) == 0x000038, "Member 'PageNavigator_C_ExecuteUbergraph_PageNavigator::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(PageNavigator_C_ExecuteUbergraph_PageNavigator, K2Node_Event_IsDesignTime) == 0x000039, "Member 'PageNavigator_C_ExecuteUbergraph_PageNavigator::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function PageNavigator.PageNavigator_C.OnPipButtonCreated
// 0x0008 (0x0008 - 0x0000)
struct PageNavigator_C_OnPipButtonCreated final
{
public:
	class UFortTextButton*                        NewPipButton;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PageNavigator_C_OnPipButtonCreated) == 0x000008, "Wrong alignment on PageNavigator_C_OnPipButtonCreated");
static_assert(sizeof(PageNavigator_C_OnPipButtonCreated) == 0x000008, "Wrong size on PageNavigator_C_OnPipButtonCreated");
static_assert(offsetof(PageNavigator_C_OnPipButtonCreated, NewPipButton) == 0x000000, "Member 'PageNavigator_C_OnPipButtonCreated::NewPipButton' has a wrong offset!");

// Function PageNavigator.PageNavigator_C.Play intro
// 0x0008 (0x0008 - 0x0000)
struct PageNavigator_C_Play_intro final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PageNavigator_C_Play_intro) == 0x000008, "Wrong alignment on PageNavigator_C_Play_intro");
static_assert(sizeof(PageNavigator_C_Play_intro) == 0x000008, "Wrong size on PageNavigator_C_Play_intro");
static_assert(offsetof(PageNavigator_C_Play_intro, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'PageNavigator_C_Play_intro::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function PageNavigator.PageNavigator_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct PageNavigator_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PageNavigator_C_PreConstruct) == 0x000001, "Wrong alignment on PageNavigator_C_PreConstruct");
static_assert(sizeof(PageNavigator_C_PreConstruct) == 0x000001, "Wrong size on PageNavigator_C_PreConstruct");
static_assert(offsetof(PageNavigator_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'PageNavigator_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

