﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Lockout

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function GA_Athena_Lockout.GA_Athena_Lockout_C.ExecuteUbergraph_GA_Athena_Lockout
// 0x0038 (0x0038 - 0x0000)
struct GA_Athena_Lockout_C_ExecuteUbergraph_GA_Athena_Lockout final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortGetPlayerPawnExecutions                  CallFunc_GetAvatarAsValidFortPlayerPawn_OutExec;   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortGetPlayerPawnExecutions                  CallFunc_GetAvatarAsValidFortPlayerPawn_OutExec_1; // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E[0x2];                                       // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn_1; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_Lockout_C_ExecuteUbergraph_GA_Athena_Lockout) == 0x000008, "Wrong alignment on GA_Athena_Lockout_C_ExecuteUbergraph_GA_Athena_Lockout");
static_assert(sizeof(GA_Athena_Lockout_C_ExecuteUbergraph_GA_Athena_Lockout) == 0x000038, "Wrong size on GA_Athena_Lockout_C_ExecuteUbergraph_GA_Athena_Lockout");
static_assert(offsetof(GA_Athena_Lockout_C_ExecuteUbergraph_GA_Athena_Lockout, EntryPoint) == 0x000000, "Member 'GA_Athena_Lockout_C_ExecuteUbergraph_GA_Athena_Lockout::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_Lockout_C_ExecuteUbergraph_GA_Athena_Lockout, CallFunc_GetAvatarAsValidFortPlayerPawn_OutExec) == 0x000004, "Member 'GA_Athena_Lockout_C_ExecuteUbergraph_GA_Athena_Lockout::CallFunc_GetAvatarAsValidFortPlayerPawn_OutExec' has a wrong offset!");
static_assert(offsetof(GA_Athena_Lockout_C_ExecuteUbergraph_GA_Athena_Lockout, CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn) == 0x000008, "Member 'GA_Athena_Lockout_C_ExecuteUbergraph_GA_Athena_Lockout::CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_Lockout_C_ExecuteUbergraph_GA_Athena_Lockout, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'GA_Athena_Lockout_C_ExecuteUbergraph_GA_Athena_Lockout::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Athena_Lockout_C_ExecuteUbergraph_GA_Athena_Lockout, K2Node_SwitchEnum_CmpSuccess) == 0x00001C, "Member 'GA_Athena_Lockout_C_ExecuteUbergraph_GA_Athena_Lockout::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_Lockout_C_ExecuteUbergraph_GA_Athena_Lockout, CallFunc_GetAvatarAsValidFortPlayerPawn_OutExec_1) == 0x00001D, "Member 'GA_Athena_Lockout_C_ExecuteUbergraph_GA_Athena_Lockout::CallFunc_GetAvatarAsValidFortPlayerPawn_OutExec_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Lockout_C_ExecuteUbergraph_GA_Athena_Lockout, CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn_1) == 0x000020, "Member 'GA_Athena_Lockout_C_ExecuteUbergraph_GA_Athena_Lockout::CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Lockout_C_ExecuteUbergraph_GA_Athena_Lockout, K2Node_Event_bWasCancelled) == 0x000028, "Member 'GA_Athena_Lockout_C_ExecuteUbergraph_GA_Athena_Lockout::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Athena_Lockout_C_ExecuteUbergraph_GA_Athena_Lockout, K2Node_SwitchEnum_CmpSuccess_1) == 0x000029, "Member 'GA_Athena_Lockout_C_ExecuteUbergraph_GA_Athena_Lockout::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Lockout_C_ExecuteUbergraph_GA_Athena_Lockout, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000030, "Member 'GA_Athena_Lockout_C_ExecuteUbergraph_GA_Athena_Lockout::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function GA_Athena_Lockout.GA_Athena_Lockout_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Athena_Lockout_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_Lockout_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Athena_Lockout_C_K2_OnEndAbility");
static_assert(sizeof(GA_Athena_Lockout_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Athena_Lockout_C_K2_OnEndAbility");
static_assert(offsetof(GA_Athena_Lockout_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Athena_Lockout_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}

