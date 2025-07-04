﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPS20_BattlePassRewardPage

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function BPS20_BattlePassRewardPage.BPS20_BattlePassRewardPage_C.ExecuteUbergraph_BPS20_BattlePassRewardPage
// 0x0088 (0x0088 - 0x0000)
struct BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPageNavigator_C*                       K2Node_CustomEvent_PageNavigator;                  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_PageNumber;                           // 0x0010(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              K2Node_Event_InputType;                            // 0x0028(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0030(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_1;            // 0x0050(0x0018)()
	class FText                                   K2Node_Select_Default_1;                           // 0x0068(0x0018)()
	ERewardPageType                               K2Node_Event_InRewardPageType;                     // 0x0080(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage) == 0x000008, "Wrong alignment on BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage");
static_assert(sizeof(BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage) == 0x000088, "Wrong size on BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage");
static_assert(offsetof(BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage, EntryPoint) == 0x000000, "Member 'BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage, Temp_bool_Variable) == 0x000004, "Member 'BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage, Temp_byte_Variable) == 0x000005, "Member 'BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage, Temp_byte_Variable_1) == 0x000006, "Member 'BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage, Temp_bool_Variable_1) == 0x000007, "Member 'BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage, K2Node_CustomEvent_PageNavigator) == 0x000008, "Member 'BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage::K2Node_CustomEvent_PageNavigator' has a wrong offset!");
static_assert(offsetof(BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage, K2Node_Event_PageNumber) == 0x000010, "Member 'BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage::K2Node_Event_PageNumber' has a wrong offset!");
static_assert(offsetof(BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000014, "Member 'BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage, K2Node_Select_Default) == 0x000015, "Member 'BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage, CallFunc_PlayAnimationForward_ReturnValue) == 0x000018, "Member 'BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000020, "Member 'BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage, K2Node_Event_InputType) == 0x000028, "Member 'BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage::K2Node_Event_InputType' has a wrong offset!");
static_assert(offsetof(BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage, CallFunc_MakeLiteralText_ReturnValue) == 0x000030, "Member 'BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000048, "Member 'BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage, CallFunc_MakeLiteralText_ReturnValue_1) == 0x000050, "Member 'BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage::CallFunc_MakeLiteralText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage, K2Node_Select_Default_1) == 0x000068, "Member 'BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage, K2Node_Event_InRewardPageType) == 0x000080, "Member 'BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage::K2Node_Event_InRewardPageType' has a wrong offset!");
static_assert(offsetof(BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage, K2Node_SwitchEnum_CmpSuccess) == 0x000081, "Member 'BPS20_BattlePassRewardPage_C_ExecuteUbergraph_BPS20_BattlePassRewardPage::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BPS20_BattlePassRewardPage.BPS20_BattlePassRewardPage_C.OnInitForPageType
// 0x0001 (0x0001 - 0x0000)
struct BPS20_BattlePassRewardPage_C_OnInitForPageType final
{
public:
	ERewardPageType                               InRewardPageType;                                  // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPS20_BattlePassRewardPage_C_OnInitForPageType) == 0x000001, "Wrong alignment on BPS20_BattlePassRewardPage_C_OnInitForPageType");
static_assert(sizeof(BPS20_BattlePassRewardPage_C_OnInitForPageType) == 0x000001, "Wrong size on BPS20_BattlePassRewardPage_C_OnInitForPageType");
static_assert(offsetof(BPS20_BattlePassRewardPage_C_OnInitForPageType, InRewardPageType) == 0x000000, "Member 'BPS20_BattlePassRewardPage_C_OnInitForPageType::InRewardPageType' has a wrong offset!");

// Function BPS20_BattlePassRewardPage.BPS20_BattlePassRewardPage_C.OnInputMethodChanged
// 0x0001 (0x0001 - 0x0000)
struct BPS20_BattlePassRewardPage_C_OnInputMethodChanged final
{
public:
	ECommonInputType                              InputType;                                         // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPS20_BattlePassRewardPage_C_OnInputMethodChanged) == 0x000001, "Wrong alignment on BPS20_BattlePassRewardPage_C_OnInputMethodChanged");
static_assert(sizeof(BPS20_BattlePassRewardPage_C_OnInputMethodChanged) == 0x000001, "Wrong size on BPS20_BattlePassRewardPage_C_OnInputMethodChanged");
static_assert(offsetof(BPS20_BattlePassRewardPage_C_OnInputMethodChanged, InputType) == 0x000000, "Member 'BPS20_BattlePassRewardPage_C_OnInputMethodChanged::InputType' has a wrong offset!");

// Function BPS20_BattlePassRewardPage.BPS20_BattlePassRewardPage_C.OnPageChanged
// 0x0004 (0x0004 - 0x0000)
struct BPS20_BattlePassRewardPage_C_OnPageChanged final
{
public:
	int32                                         PageNumber;                                        // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPS20_BattlePassRewardPage_C_OnPageChanged) == 0x000004, "Wrong alignment on BPS20_BattlePassRewardPage_C_OnPageChanged");
static_assert(sizeof(BPS20_BattlePassRewardPage_C_OnPageChanged) == 0x000004, "Wrong size on BPS20_BattlePassRewardPage_C_OnPageChanged");
static_assert(offsetof(BPS20_BattlePassRewardPage_C_OnPageChanged, PageNumber) == 0x000000, "Member 'BPS20_BattlePassRewardPage_C_OnPageChanged::PageNumber' has a wrong offset!");

// Function BPS20_BattlePassRewardPage.BPS20_BattlePassRewardPage_C.PageNavigator_Event_0
// 0x0008 (0x0008 - 0x0000)
struct BPS20_BattlePassRewardPage_C_PageNavigator_Event_0 final
{
public:
	class UPageNavigator_C*                       PageNavigator_0;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPS20_BattlePassRewardPage_C_PageNavigator_Event_0) == 0x000008, "Wrong alignment on BPS20_BattlePassRewardPage_C_PageNavigator_Event_0");
static_assert(sizeof(BPS20_BattlePassRewardPage_C_PageNavigator_Event_0) == 0x000008, "Wrong size on BPS20_BattlePassRewardPage_C_PageNavigator_Event_0");
static_assert(offsetof(BPS20_BattlePassRewardPage_C_PageNavigator_Event_0, PageNavigator_0) == 0x000000, "Member 'BPS20_BattlePassRewardPage_C_PageNavigator_Event_0::PageNavigator_0' has a wrong offset!");

// Function BPS20_BattlePassRewardPage.BPS20_BattlePassRewardPage_C.SequenceEvent__ENTRYPOINTBPS20_BattlePassRewardPage_0
// 0x0008 (0x0008 - 0x0000)
struct BPS20_BattlePassRewardPage_C_SequenceEvent__ENTRYPOINTBPS20_BattlePassRewardPage_0 final
{
public:
	class UPageNavigator_C*                       PageNavigator_0;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPS20_BattlePassRewardPage_C_SequenceEvent__ENTRYPOINTBPS20_BattlePassRewardPage_0) == 0x000008, "Wrong alignment on BPS20_BattlePassRewardPage_C_SequenceEvent__ENTRYPOINTBPS20_BattlePassRewardPage_0");
static_assert(sizeof(BPS20_BattlePassRewardPage_C_SequenceEvent__ENTRYPOINTBPS20_BattlePassRewardPage_0) == 0x000008, "Wrong size on BPS20_BattlePassRewardPage_C_SequenceEvent__ENTRYPOINTBPS20_BattlePassRewardPage_0");
static_assert(offsetof(BPS20_BattlePassRewardPage_C_SequenceEvent__ENTRYPOINTBPS20_BattlePassRewardPage_0, PageNavigator_0) == 0x000000, "Member 'BPS20_BattlePassRewardPage_C_SequenceEvent__ENTRYPOINTBPS20_BattlePassRewardPage_0::PageNavigator_0' has a wrong offset!");

}

