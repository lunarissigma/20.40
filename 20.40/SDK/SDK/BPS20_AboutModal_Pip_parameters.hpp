﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPS20_AboutModal_Pip

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPS20_AboutModal_Pip.BPS20_AboutModal_Pip_C.ExecuteUbergraph_BPS20_AboutModal_Pip
// 0x0018 (0x0018 - 0x0000)
struct BPS20_AboutModal_Pip_C_ExecuteUbergraph_BPS20_AboutModal_Pip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPS20_AboutModal_Pip_C_ExecuteUbergraph_BPS20_AboutModal_Pip) == 0x000008, "Wrong alignment on BPS20_AboutModal_Pip_C_ExecuteUbergraph_BPS20_AboutModal_Pip");
static_assert(sizeof(BPS20_AboutModal_Pip_C_ExecuteUbergraph_BPS20_AboutModal_Pip) == 0x000018, "Wrong size on BPS20_AboutModal_Pip_C_ExecuteUbergraph_BPS20_AboutModal_Pip");
static_assert(offsetof(BPS20_AboutModal_Pip_C_ExecuteUbergraph_BPS20_AboutModal_Pip, EntryPoint) == 0x000000, "Member 'BPS20_AboutModal_Pip_C_ExecuteUbergraph_BPS20_AboutModal_Pip::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPS20_AboutModal_Pip_C_ExecuteUbergraph_BPS20_AboutModal_Pip, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'BPS20_AboutModal_Pip_C_ExecuteUbergraph_BPS20_AboutModal_Pip::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS20_AboutModal_Pip_C_ExecuteUbergraph_BPS20_AboutModal_Pip, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000010, "Member 'BPS20_AboutModal_Pip_C_ExecuteUbergraph_BPS20_AboutModal_Pip::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

// Function BPS20_AboutModal_Pip.BPS20_AboutModal_Pip_C.Is Focused
// 0x0018 (0x0018 - 0x0000)
struct BPS20_AboutModal_Pip_C_Is_Focused final
{
public:
	bool                                          Is_Focused_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPS20_AboutModal_Pip_C_Is_Focused) == 0x000008, "Wrong alignment on BPS20_AboutModal_Pip_C_Is_Focused");
static_assert(sizeof(BPS20_AboutModal_Pip_C_Is_Focused) == 0x000018, "Wrong size on BPS20_AboutModal_Pip_C_Is_Focused");
static_assert(offsetof(BPS20_AboutModal_Pip_C_Is_Focused, Is_Focused_0) == 0x000000, "Member 'BPS20_AboutModal_Pip_C_Is_Focused::Is_Focused_0' has a wrong offset!");
static_assert(offsetof(BPS20_AboutModal_Pip_C_Is_Focused, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'BPS20_AboutModal_Pip_C_Is_Focused::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS20_AboutModal_Pip_C_Is_Focused, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000010, "Member 'BPS20_AboutModal_Pip_C_Is_Focused::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

}

