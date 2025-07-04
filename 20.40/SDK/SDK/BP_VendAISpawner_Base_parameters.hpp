﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VendAISpawner_Base

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_VendAISpawner_Base.BP_VendAISpawner_Base_C.ExecuteUbergraph_BP_VendAISpawner_Base
// 0x00A0 (0x00A0 - 0x0000)
struct BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const TArray<class AActor*>& SpawnedActors, bool bSuccess)> Temp_delegate_Variable; // 0x0008(0x000C)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0xC];                                       // 0x0014(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0020(0x0060)(ConstParm, IsPlainOldData, NoDestructor)
	class AFortGameStateAthena*                   CallFunc_GetGameStateAthenaFromContext_ReturnValue; // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAthenaLivingWorldManager*          CallFunc_GetComponentByClass_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TrySpawnEvent_ReturnValue;                // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base) == 0x000010, "Wrong alignment on BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base");
static_assert(sizeof(BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base) == 0x0000A0, "Wrong size on BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base");
static_assert(offsetof(BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base, EntryPoint) == 0x000000, "Member 'BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base, Temp_delegate_Variable) == 0x000008, "Member 'BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base, CallFunc_GetTransform_ReturnValue) == 0x000020, "Member 'BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base, CallFunc_GetGameStateAthenaFromContext_ReturnValue) == 0x000080, "Member 'BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base::CallFunc_GetGameStateAthenaFromContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base, CallFunc_GetComponentByClass_ReturnValue) == 0x000088, "Member 'BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base, CallFunc_IsValid_ReturnValue_1) == 0x000090, "Member 'BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base, CallFunc_TrySpawnEvent_ReturnValue) == 0x000091, "Member 'BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base::CallFunc_TrySpawnEvent_ReturnValue' has a wrong offset!");

}

