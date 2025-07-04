﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StandaloneItemShop

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function StandaloneItemShop.StandaloneItemShop_C.ExecuteUbergraph_StandaloneItemShop
// 0x00B0 (0x00B0 - 0x0000)
struct StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStandaloneItemShopTabInfo             K2Node_MakeStruct_StandaloneItemShopTabInfo;       // 0x0008(0x0030)(ContainsInstancedReference)
	bool                                          Temp_bool_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B[0x5];                                       // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortFrontEndContext*                   CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bShown;                               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x2];                                       // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_TabIndex;                             // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStandaloneItemShopTabInfo             K2Node_MakeStruct_StandaloneItemShopTabInfo_1;     // 0x0050(0x0030)(ContainsInstancedReference)
	struct FStandaloneItemShopTabInfo             K2Node_MakeStruct_StandaloneItemShopTabInfo_2;     // 0x0080(0x0030)(ContainsInstancedReference)
};
static_assert(alignof(StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop) == 0x000008, "Wrong alignment on StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop");
static_assert(sizeof(StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop) == 0x0000B0, "Wrong size on StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop");
static_assert(offsetof(StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop, EntryPoint) == 0x000000, "Member 'StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop::EntryPoint' has a wrong offset!");
static_assert(offsetof(StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop, K2Node_MakeStruct_StandaloneItemShopTabInfo) == 0x000008, "Member 'StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop::K2Node_MakeStruct_StandaloneItemShopTabInfo' has a wrong offset!");
static_assert(offsetof(StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop, Temp_bool_Variable) == 0x000038, "Member 'StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop, Temp_byte_Variable) == 0x000039, "Member 'StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop, Temp_byte_Variable_1) == 0x00003A, "Member 'StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000040, "Member 'StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop, K2Node_Event_bShown) == 0x000048, "Member 'StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop::K2Node_Event_bShown' has a wrong offset!");
static_assert(offsetof(StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop, K2Node_Select_Default) == 0x000049, "Member 'StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop, K2Node_Event_TabIndex) == 0x00004C, "Member 'StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop::K2Node_Event_TabIndex' has a wrong offset!");
static_assert(offsetof(StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop, K2Node_MakeStruct_StandaloneItemShopTabInfo_1) == 0x000050, "Member 'StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop::K2Node_MakeStruct_StandaloneItemShopTabInfo_1' has a wrong offset!");
static_assert(offsetof(StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop, K2Node_MakeStruct_StandaloneItemShopTabInfo_2) == 0x000080, "Member 'StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop::K2Node_MakeStruct_StandaloneItemShopTabInfo_2' has a wrong offset!");

// Function StandaloneItemShop.StandaloneItemShop_C.OnLoadingIndicatorShown
// 0x0001 (0x0001 - 0x0000)
struct StandaloneItemShop_C_OnLoadingIndicatorShown final
{
public:
	bool                                          bShown;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StandaloneItemShop_C_OnLoadingIndicatorShown) == 0x000001, "Wrong alignment on StandaloneItemShop_C_OnLoadingIndicatorShown");
static_assert(sizeof(StandaloneItemShop_C_OnLoadingIndicatorShown) == 0x000001, "Wrong size on StandaloneItemShop_C_OnLoadingIndicatorShown");
static_assert(offsetof(StandaloneItemShop_C_OnLoadingIndicatorShown, bShown) == 0x000000, "Member 'StandaloneItemShop_C_OnLoadingIndicatorShown::bShown' has a wrong offset!");

// Function StandaloneItemShop.StandaloneItemShop_C.OnTabSelected
// 0x0004 (0x0004 - 0x0000)
struct StandaloneItemShop_C_OnTabSelected final
{
public:
	int32                                         TabIndex;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StandaloneItemShop_C_OnTabSelected) == 0x000004, "Wrong alignment on StandaloneItemShop_C_OnTabSelected");
static_assert(sizeof(StandaloneItemShop_C_OnTabSelected) == 0x000004, "Wrong size on StandaloneItemShop_C_OnTabSelected");
static_assert(offsetof(StandaloneItemShop_C_OnTabSelected, TabIndex) == 0x000000, "Member 'StandaloneItemShop_C_OnTabSelected::TabIndex' has a wrong offset!");

}

