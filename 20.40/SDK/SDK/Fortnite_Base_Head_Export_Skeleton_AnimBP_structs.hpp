﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Fortnite_Base_Head_Export_Skeleton_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct Fortnite_Base_Head_Export_Skeleton_AnimBP.Fortnite_Base_Head_Export_Skeleton_AnimBP_C.AnimBlueprintGeneratedConstantData
// 0x015F (0x0160 - 0x0001)
struct Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_133;                               // 0x0008(0x0010)(BlueprintVisible, EditFixedSize)
	TArray<float>                                 __ArrayProperty_134;                               // 0x0018(0x0010)(BlueprintVisible, EditFixedSize)
	TArray<int32>                                 __ArrayProperty_135;                               // 0x0028(0x0010)(BlueprintVisible)
	class UBlendProfile*                          __BlendProfile_136;                                // 0x0038(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_137;                                  // 0x0040(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_138;                                // 0x0048(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_139;                                // 0x0049(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x6];                                       // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_140;                               // 0x0050(0x0010)(BlueprintVisible, EditFixedSize)
	bool                                          __BoolProperty_141;                                // 0x0060(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_142;                               // 0x0064(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_143;                              // 0x0068(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_144;                               // 0x0094(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      __AnimSequenceBase_145;                            // 0x0098(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          __BoolProperty_146;                                // 0x00A0(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_147;                                // 0x00A1(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_148;                                // 0x00A2(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A3[0x5];                                       // 0x00A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_149;                              // 0x00A8(0x0018)(BlueprintVisible, NoDestructor)
	class FName                                   __NameProperty_150;                                // 0x00C0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_151;                                // 0x00C4(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00C8(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0148(0x0018)()
};
static_assert(alignof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000160, "Wrong size on Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_133) == 0x000008, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_133' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_134) == 0x000018, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_134' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_135) == 0x000028, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_135' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __BlendProfile_136) == 0x000038, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__BlendProfile_136' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __CurveFloat_137) == 0x000040, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__CurveFloat_137' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_138) == 0x000048, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_138' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_139) == 0x000049, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_139' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_140) == 0x000050, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_140' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_141) == 0x000060, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_141' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_142) == 0x000064, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_142' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_143) == 0x000068, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_143' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_144) == 0x000094, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_144' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __AnimSequenceBase_145) == 0x000098, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__AnimSequenceBase_145' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_146) == 0x0000A0, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_146' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_147) == 0x0000A1, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_147' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __ByteProperty_148) == 0x0000A2, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__ByteProperty_148' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_149) == 0x0000A8, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_149' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_150) == 0x0000C0, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_150' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_151) == 0x0000C4, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_151' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000C8, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000148, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct Fortnite_Base_Head_Export_Skeleton_AnimBP.Fortnite_Base_Head_Export_Skeleton_AnimBP_C.AnimBlueprintGeneratedMutableData
// 0x0004 (0x0005 - 0x0001)
struct Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         __ByteProperty_0;                                  // 0x0002(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         __ByteProperty_1;                                  // 0x0003(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_2;                                  // 0x0004(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong alignment on Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x000005, "Wrong size on Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty) == 0x000001, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedMutableData, __ByteProperty_0) == 0x000002, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedMutableData::__ByteProperty_0' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedMutableData, __ByteProperty_1) == 0x000003, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedMutableData::__ByteProperty_1' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_2) == 0x000004, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_2' has a wrong offset!");

}

