﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Armadillo_BlockEmote

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GA_Armadillo_BlockEmote.GA_Armadillo_BlockEmote_C.ExecuteUbergraph_GA_Armadillo_BlockEmote
// 0x0070 (0x0070 - 0x0000)
struct GA_Armadillo_BlockEmote_C_ExecuteUbergraph_GA_Armadillo_BlockEmote final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAbilitySystemComponent*            CallFunc_GetFortAbilitySystemComponent_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue; // 0x0028(0x0020)()
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_1; // 0x0048(0x0020)()
	class UFortAbilitySystemComponent*            CallFunc_GetFortAbilitySystemComponent_ReturnValue_1; // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Armadillo_BlockEmote_C_ExecuteUbergraph_GA_Armadillo_BlockEmote) == 0x000008, "Wrong alignment on GA_Armadillo_BlockEmote_C_ExecuteUbergraph_GA_Armadillo_BlockEmote");
static_assert(sizeof(GA_Armadillo_BlockEmote_C_ExecuteUbergraph_GA_Armadillo_BlockEmote) == 0x000070, "Wrong size on GA_Armadillo_BlockEmote_C_ExecuteUbergraph_GA_Armadillo_BlockEmote");
static_assert(offsetof(GA_Armadillo_BlockEmote_C_ExecuteUbergraph_GA_Armadillo_BlockEmote, EntryPoint) == 0x000000, "Member 'GA_Armadillo_BlockEmote_C_ExecuteUbergraph_GA_Armadillo_BlockEmote::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Armadillo_BlockEmote_C_ExecuteUbergraph_GA_Armadillo_BlockEmote, CallFunc_GetActivatingPawn_ReturnValue) == 0x000008, "Member 'GA_Armadillo_BlockEmote_C_ExecuteUbergraph_GA_Armadillo_BlockEmote::CallFunc_GetActivatingPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Armadillo_BlockEmote_C_ExecuteUbergraph_GA_Armadillo_BlockEmote, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'GA_Armadillo_BlockEmote_C_ExecuteUbergraph_GA_Armadillo_BlockEmote::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Armadillo_BlockEmote_C_ExecuteUbergraph_GA_Armadillo_BlockEmote, CallFunc_GetFortAbilitySystemComponent_ReturnValue) == 0x000018, "Member 'GA_Armadillo_BlockEmote_C_ExecuteUbergraph_GA_Armadillo_BlockEmote::CallFunc_GetFortAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Armadillo_BlockEmote_C_ExecuteUbergraph_GA_Armadillo_BlockEmote, K2Node_Event_bWasCancelled) == 0x000020, "Member 'GA_Armadillo_BlockEmote_C_ExecuteUbergraph_GA_Armadillo_BlockEmote::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Armadillo_BlockEmote_C_ExecuteUbergraph_GA_Armadillo_BlockEmote, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue) == 0x000028, "Member 'GA_Armadillo_BlockEmote_C_ExecuteUbergraph_GA_Armadillo_BlockEmote::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Armadillo_BlockEmote_C_ExecuteUbergraph_GA_Armadillo_BlockEmote, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_1) == 0x000048, "Member 'GA_Armadillo_BlockEmote_C_ExecuteUbergraph_GA_Armadillo_BlockEmote::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Armadillo_BlockEmote_C_ExecuteUbergraph_GA_Armadillo_BlockEmote, CallFunc_GetFortAbilitySystemComponent_ReturnValue_1) == 0x000068, "Member 'GA_Armadillo_BlockEmote_C_ExecuteUbergraph_GA_Armadillo_BlockEmote::CallFunc_GetFortAbilitySystemComponent_ReturnValue_1' has a wrong offset!");

// Function GA_Armadillo_BlockEmote.GA_Armadillo_BlockEmote_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Armadillo_BlockEmote_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Armadillo_BlockEmote_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Armadillo_BlockEmote_C_K2_OnEndAbility");
static_assert(sizeof(GA_Armadillo_BlockEmote_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Armadillo_BlockEmote_C_K2_OnEndAbility");
static_assert(offsetof(GA_Armadillo_BlockEmote_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Armadillo_BlockEmote_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}

