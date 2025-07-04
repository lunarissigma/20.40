﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SSI_BpLib_BpTools

#include "Basic.hpp"


namespace SDK::Params
{

// Function SSI_BpLib_BpTools.SSI_BpLib_BpTools_C.OnLocalPlayersTeam
// 0x0048 (0x0048 - 0x0000)
struct SSI_BpLib_BpTools_C_OnLocalPlayersTeam final
{
public:
	class AActor*                                 TargetActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Return_Value;                                      // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TeamValid;                                         // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AFortPlayerController*>          CallFunc_GetLocalFortPlayerControllers_ReturnValue; // 0x0018(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_OnSameTeam_ReturnValue;                   // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SSI_BpLib_BpTools_C_OnLocalPlayersTeam) == 0x000008, "Wrong alignment on SSI_BpLib_BpTools_C_OnLocalPlayersTeam");
static_assert(sizeof(SSI_BpLib_BpTools_C_OnLocalPlayersTeam) == 0x000048, "Wrong size on SSI_BpLib_BpTools_C_OnLocalPlayersTeam");
static_assert(offsetof(SSI_BpLib_BpTools_C_OnLocalPlayersTeam, TargetActor) == 0x000000, "Member 'SSI_BpLib_BpTools_C_OnLocalPlayersTeam::TargetActor' has a wrong offset!");
static_assert(offsetof(SSI_BpLib_BpTools_C_OnLocalPlayersTeam, __WorldContext) == 0x000008, "Member 'SSI_BpLib_BpTools_C_OnLocalPlayersTeam::__WorldContext' has a wrong offset!");
static_assert(offsetof(SSI_BpLib_BpTools_C_OnLocalPlayersTeam, Return_Value) == 0x000010, "Member 'SSI_BpLib_BpTools_C_OnLocalPlayersTeam::Return_Value' has a wrong offset!");
static_assert(offsetof(SSI_BpLib_BpTools_C_OnLocalPlayersTeam, TeamValid) == 0x000011, "Member 'SSI_BpLib_BpTools_C_OnLocalPlayersTeam::TeamValid' has a wrong offset!");
static_assert(offsetof(SSI_BpLib_BpTools_C_OnLocalPlayersTeam, CallFunc_GetLocalFortPlayerControllers_ReturnValue) == 0x000018, "Member 'SSI_BpLib_BpTools_C_OnLocalPlayersTeam::CallFunc_GetLocalFortPlayerControllers_ReturnValue' has a wrong offset!");
static_assert(offsetof(SSI_BpLib_BpTools_C_OnLocalPlayersTeam, Temp_int_Array_Index_Variable) == 0x000028, "Member 'SSI_BpLib_BpTools_C_OnLocalPlayersTeam::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SSI_BpLib_BpTools_C_OnLocalPlayersTeam, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'SSI_BpLib_BpTools_C_OnLocalPlayersTeam::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SSI_BpLib_BpTools_C_OnLocalPlayersTeam, CallFunc_Array_Get_Item) == 0x000030, "Member 'SSI_BpLib_BpTools_C_OnLocalPlayersTeam::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SSI_BpLib_BpTools_C_OnLocalPlayersTeam, CallFunc_OnSameTeam_ReturnValue) == 0x000038, "Member 'SSI_BpLib_BpTools_C_OnLocalPlayersTeam::CallFunc_OnSameTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(SSI_BpLib_BpTools_C_OnLocalPlayersTeam, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'SSI_BpLib_BpTools_C_OnLocalPlayersTeam::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SSI_BpLib_BpTools_C_OnLocalPlayersTeam, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'SSI_BpLib_BpTools_C_OnLocalPlayersTeam::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SSI_BpLib_BpTools_C_OnLocalPlayersTeam, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'SSI_BpLib_BpTools_C_OnLocalPlayersTeam::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}

