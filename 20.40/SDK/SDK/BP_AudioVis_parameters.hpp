﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AudioVis

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_AudioVis.BP_AudioVis_C.ExecuteUbergraph_BP_AudioVis
// 0x0128 (0x0128 - 0x0000)
struct BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsVoPlaying_2;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsVoPlaying_1;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsVoPlaying;                    // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0018(0x00E0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_2;          // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_3;          // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_4;          // 0x00FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FD[0x3];                                       // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_105[0x3];                                      // 0x0105(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0108(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             K2Node_Select_Default;                             // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis) == 0x000008, "Wrong alignment on BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis");
static_assert(sizeof(BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis) == 0x000128, "Wrong size on BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis");
static_assert(offsetof(BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis, EntryPoint) == 0x000000, "Member 'BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis, K2Node_CustomEvent_IsVoPlaying_2) == 0x000004, "Member 'BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis::K2Node_CustomEvent_IsVoPlaying_2' has a wrong offset!");
static_assert(offsetof(BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis, K2Node_CustomEvent_IsVoPlaying_1) == 0x000005, "Member 'BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis::K2Node_CustomEvent_IsVoPlaying_1' has a wrong offset!");
static_assert(offsetof(BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis, K2Node_CustomEvent_IsVoPlaying) == 0x000006, "Member 'BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis::K2Node_CustomEvent_IsVoPlaying' has a wrong offset!");
static_assert(offsetof(BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis, CallFunc_IsDedicatedServer_ReturnValue) == 0x000007, "Member 'BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis, CallFunc_SelectFloat_ReturnValue) == 0x000008, "Member 'BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis, CallFunc_Not_PreBool_ReturnValue) == 0x00000C, "Member 'BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis, K2Node_Event_DeltaSeconds) == 0x000010, "Member 'BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x000014, "Member 'BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis, CallFunc_BooleanAND_ReturnValue) == 0x000015, "Member 'BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000018, "Member 'BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis, CallFunc_IsDedicatedServer_ReturnValue_2) == 0x0000F8, "Member 'BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis::CallFunc_IsDedicatedServer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis, K2Node_Event_EndPlayReason) == 0x0000F9, "Member 'BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis, CallFunc_IsDedicatedServer_ReturnValue_3) == 0x0000FA, "Member 'BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis::CallFunc_IsDedicatedServer_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis, CallFunc_IsDedicatedServer_ReturnValue_4) == 0x0000FB, "Member 'BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis::CallFunc_IsDedicatedServer_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis, Temp_bool_Variable) == 0x0000FC, "Member 'BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000100, "Member 'BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000104, "Member 'BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000108, "Member 'BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis, K2Node_Select_Default) == 0x000120, "Member 'BP_AudioVis_C_ExecuteUbergraph_BP_AudioVis::K2Node_Select_Default' has a wrong offset!");

// Function BP_AudioVis.BP_AudioVis_C.LogAmplitudeValues
// 0x0080 (0x0080 - 0x0000)
struct BP_AudioVis_C_LogAmplitudeValues final
{
public:
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue_1;         // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue_2;         // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AudioVis_C_LogAmplitudeValues) == 0x000008, "Wrong alignment on BP_AudioVis_C_LogAmplitudeValues");
static_assert(sizeof(BP_AudioVis_C_LogAmplitudeValues) == 0x000080, "Wrong size on BP_AudioVis_C_LogAmplitudeValues");
static_assert(offsetof(BP_AudioVis_C_LogAmplitudeValues, CallFunc_Conv_FloatToString_ReturnValue) == 0x000000, "Member 'BP_AudioVis_C_LogAmplitudeValues::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AudioVis_C_LogAmplitudeValues, CallFunc_Conv_FloatToString_ReturnValue_1) == 0x000010, "Member 'BP_AudioVis_C_LogAmplitudeValues::CallFunc_Conv_FloatToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AudioVis_C_LogAmplitudeValues, CallFunc_Conv_FloatToString_ReturnValue_2) == 0x000020, "Member 'BP_AudioVis_C_LogAmplitudeValues::CallFunc_Conv_FloatToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AudioVis_C_LogAmplitudeValues, CallFunc_Concat_StrStr_ReturnValue) == 0x000030, "Member 'BP_AudioVis_C_LogAmplitudeValues::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AudioVis_C_LogAmplitudeValues, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000040, "Member 'BP_AudioVis_C_LogAmplitudeValues::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AudioVis_C_LogAmplitudeValues, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000050, "Member 'BP_AudioVis_C_LogAmplitudeValues::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_AudioVis_C_LogAmplitudeValues, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000060, "Member 'BP_AudioVis_C_LogAmplitudeValues::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_AudioVis_C_LogAmplitudeValues, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000070, "Member 'BP_AudioVis_C_LogAmplitudeValues::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");

// Function BP_AudioVis.BP_AudioVis_C.LogoRotation
// 0x0100 (0x0100 - 0x0000)
struct BP_AudioVis_C_LogoRotation final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_AddRelativeRotation_SweepHitResult;    // 0x0020(0x00E0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_AudioVis_C_LogoRotation) == 0x000008, "Wrong alignment on BP_AudioVis_C_LogoRotation");
static_assert(sizeof(BP_AudioVis_C_LogoRotation) == 0x000100, "Wrong size on BP_AudioVis_C_LogoRotation");
static_assert(offsetof(BP_AudioVis_C_LogoRotation, DeltaSeconds) == 0x000000, "Member 'BP_AudioVis_C_LogoRotation::DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AudioVis_C_LogoRotation, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000004, "Member 'BP_AudioVis_C_LogoRotation::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AudioVis_C_LogoRotation, CallFunc_MakeRotator_ReturnValue) == 0x000008, "Member 'BP_AudioVis_C_LogoRotation::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AudioVis_C_LogoRotation, CallFunc_K2_AddRelativeRotation_SweepHitResult) == 0x000020, "Member 'BP_AudioVis_C_LogoRotation::CallFunc_K2_AddRelativeRotation_SweepHitResult' has a wrong offset!");

// Function BP_AudioVis.BP_AudioVis_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_AudioVis_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AudioVis_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_AudioVis_C_ReceiveEndPlay");
static_assert(sizeof(BP_AudioVis_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_AudioVis_C_ReceiveEndPlay");
static_assert(offsetof(BP_AudioVis_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_AudioVis_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_AudioVis.BP_AudioVis_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_AudioVis_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AudioVis_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_AudioVis_C_ReceiveTick");
static_assert(sizeof(BP_AudioVis_C_ReceiveTick) == 0x000004, "Wrong size on BP_AudioVis_C_ReceiveTick");
static_assert(offsetof(BP_AudioVis_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_AudioVis_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_AudioVis.BP_AudioVis_C.ToggleAudioVisualizer
// 0x0001 (0x0001 - 0x0000)
struct BP_AudioVis_C_ToggleAudioVisualizer final
{
public:
	bool                                          IsVoPlaying_0;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AudioVis_C_ToggleAudioVisualizer) == 0x000001, "Wrong alignment on BP_AudioVis_C_ToggleAudioVisualizer");
static_assert(sizeof(BP_AudioVis_C_ToggleAudioVisualizer) == 0x000001, "Wrong size on BP_AudioVis_C_ToggleAudioVisualizer");
static_assert(offsetof(BP_AudioVis_C_ToggleAudioVisualizer, IsVoPlaying_0) == 0x000000, "Member 'BP_AudioVis_C_ToggleAudioVisualizer::IsVoPlaying_0' has a wrong offset!");

// Function BP_AudioVis.BP_AudioVis_C.ToggleLogoMesh
// 0x0001 (0x0001 - 0x0000)
struct BP_AudioVis_C_ToggleLogoMesh final
{
public:
	bool                                          IsVoPlaying_0;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AudioVis_C_ToggleLogoMesh) == 0x000001, "Wrong alignment on BP_AudioVis_C_ToggleLogoMesh");
static_assert(sizeof(BP_AudioVis_C_ToggleLogoMesh) == 0x000001, "Wrong size on BP_AudioVis_C_ToggleLogoMesh");
static_assert(offsetof(BP_AudioVis_C_ToggleLogoMesh, IsVoPlaying_0) == 0x000000, "Member 'BP_AudioVis_C_ToggleLogoMesh::IsVoPlaying_0' has a wrong offset!");

// Function BP_AudioVis.BP_AudioVis_C.ToggleVisualizerMeshes
// 0x0001 (0x0001 - 0x0000)
struct BP_AudioVis_C_ToggleVisualizerMeshes final
{
public:
	bool                                          IsVoPlaying_0;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AudioVis_C_ToggleVisualizerMeshes) == 0x000001, "Wrong alignment on BP_AudioVis_C_ToggleVisualizerMeshes");
static_assert(sizeof(BP_AudioVis_C_ToggleVisualizerMeshes) == 0x000001, "Wrong size on BP_AudioVis_C_ToggleVisualizerMeshes");
static_assert(offsetof(BP_AudioVis_C_ToggleVisualizerMeshes, IsVoPlaying_0) == 0x000000, "Member 'BP_AudioVis_C_ToggleVisualizerMeshes::IsVoPlaying_0' has a wrong offset!");

}

