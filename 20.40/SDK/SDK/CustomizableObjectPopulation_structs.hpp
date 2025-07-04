﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CustomizableObjectPopulation

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum CustomizableObjectPopulation.EPopulationConstraintType
// NumValues: 0x000A
enum class EPopulationConstraintType : uint8
{
	NONE                                     = 0,
	BOOL                                     = 1,
	DISCRETE                                 = 2,
	DISCRETE_FLOAT                           = 3,
	DISCRETE_COLOR                           = 4,
	TAG                                      = 5,
	RANGE                                    = 6,
	CURVE                                    = 7,
	CURVE_COLOR                              = 8,
	EPopulationConstraintType_MAX            = 9,
};

// Enum CustomizableObjectPopulation.ECurveColor
// NumValues: 0x0005
enum class ECurveColor : uint8
{
	RED                                      = 0,
	GREEN                                    = 1,
	BLUE                                     = 2,
	ALPHA                                    = 3,
	ECurveColor_MAX                          = 4,
};

// ScriptStruct CustomizableObjectPopulation.ClassWeightPair
// 0x0010 (0x0010 - 0x0000)
struct FClassWeightPair final
{
public:
	class UCustomizableObjectPopulationClass*     Class;                                             // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ClassWeight;                                       // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FClassWeightPair) == 0x000008, "Wrong alignment on FClassWeightPair");
static_assert(sizeof(FClassWeightPair) == 0x000010, "Wrong size on FClassWeightPair");
static_assert(offsetof(FClassWeightPair, Class) == 0x000000, "Member 'FClassWeightPair::Class' has a wrong offset!");
static_assert(offsetof(FClassWeightPair, ClassWeight) == 0x000008, "Member 'FClassWeightPair::ClassWeight' has a wrong offset!");

// ScriptStruct CustomizableObjectPopulation.ConstraintRanges
// 0x000C (0x000C - 0x0000)
struct FConstraintRanges final
{
public:
	float                                         MinimumValue;                                      // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaximumValue;                                      // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         RangeWeight;                                       // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FConstraintRanges) == 0x000004, "Wrong alignment on FConstraintRanges");
static_assert(sizeof(FConstraintRanges) == 0x00000C, "Wrong size on FConstraintRanges");
static_assert(offsetof(FConstraintRanges, MinimumValue) == 0x000000, "Member 'FConstraintRanges::MinimumValue' has a wrong offset!");
static_assert(offsetof(FConstraintRanges, MaximumValue) == 0x000004, "Member 'FConstraintRanges::MaximumValue' has a wrong offset!");
static_assert(offsetof(FConstraintRanges, RangeWeight) == 0x000008, "Member 'FConstraintRanges::RangeWeight' has a wrong offset!");

// ScriptStruct CustomizableObjectPopulation.CustomizableObjectPopulationConstraint
// 0x0070 (0x0070 - 0x0000)
struct FCustomizableObjectPopulationConstraint final
{
public:
	EPopulationConstraintType                     Type;                                              // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ConstraintWeight;                                  // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TrueWeight;                                        // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FalseWeight;                                       // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DiscreteValue;                                     // 0x0010(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           DiscreteColor;                                     // 0x0020(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         WhiteList;                                         // 0x0030(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                         BlackList;                                         // 0x0040(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FConstraintRanges>              Ranges;                                            // 0x0050(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UCurveBase*                             Curve;                                             // 0x0060(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECurveColor                                   CurveColor;                                        // 0x0068(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCustomizableObjectPopulationConstraint) == 0x000008, "Wrong alignment on FCustomizableObjectPopulationConstraint");
static_assert(sizeof(FCustomizableObjectPopulationConstraint) == 0x000070, "Wrong size on FCustomizableObjectPopulationConstraint");
static_assert(offsetof(FCustomizableObjectPopulationConstraint, Type) == 0x000000, "Member 'FCustomizableObjectPopulationConstraint::Type' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectPopulationConstraint, ConstraintWeight) == 0x000004, "Member 'FCustomizableObjectPopulationConstraint::ConstraintWeight' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectPopulationConstraint, TrueWeight) == 0x000008, "Member 'FCustomizableObjectPopulationConstraint::TrueWeight' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectPopulationConstraint, FalseWeight) == 0x00000C, "Member 'FCustomizableObjectPopulationConstraint::FalseWeight' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectPopulationConstraint, DiscreteValue) == 0x000010, "Member 'FCustomizableObjectPopulationConstraint::DiscreteValue' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectPopulationConstraint, DiscreteColor) == 0x000020, "Member 'FCustomizableObjectPopulationConstraint::DiscreteColor' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectPopulationConstraint, WhiteList) == 0x000030, "Member 'FCustomizableObjectPopulationConstraint::WhiteList' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectPopulationConstraint, BlackList) == 0x000040, "Member 'FCustomizableObjectPopulationConstraint::BlackList' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectPopulationConstraint, Ranges) == 0x000050, "Member 'FCustomizableObjectPopulationConstraint::Ranges' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectPopulationConstraint, Curve) == 0x000060, "Member 'FCustomizableObjectPopulationConstraint::Curve' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectPopulationConstraint, CurveColor) == 0x000068, "Member 'FCustomizableObjectPopulationConstraint::CurveColor' has a wrong offset!");

// ScriptStruct CustomizableObjectPopulation.CustomizableObjectPopulationCharacteristic
// 0x0020 (0x0020 - 0x0000)
struct FCustomizableObjectPopulationCharacteristic final
{
public:
	class FString                                 ParameterName;                                     // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectPopulationConstraint> Constraints;                              // 0x0010(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCustomizableObjectPopulationCharacteristic) == 0x000008, "Wrong alignment on FCustomizableObjectPopulationCharacteristic");
static_assert(sizeof(FCustomizableObjectPopulationCharacteristic) == 0x000020, "Wrong size on FCustomizableObjectPopulationCharacteristic");
static_assert(offsetof(FCustomizableObjectPopulationCharacteristic, ParameterName) == 0x000000, "Member 'FCustomizableObjectPopulationCharacteristic::ParameterName' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectPopulationCharacteristic, Constraints) == 0x000010, "Member 'FCustomizableObjectPopulationCharacteristic::Constraints' has a wrong offset!");

// ScriptStruct CustomizableObjectPopulation.PopulationClassParameterOptions
// 0x0010 (0x0010 - 0x0000)
struct FPopulationClassParameterOptions final
{
public:
	TArray<class FString>                         Tags;                                              // 0x0000(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPopulationClassParameterOptions) == 0x000008, "Wrong alignment on FPopulationClassParameterOptions");
static_assert(sizeof(FPopulationClassParameterOptions) == 0x000010, "Wrong size on FPopulationClassParameterOptions");
static_assert(offsetof(FPopulationClassParameterOptions, Tags) == 0x000000, "Member 'FPopulationClassParameterOptions::Tags' has a wrong offset!");

// ScriptStruct CustomizableObjectPopulation.PopulationClassParameter
// 0x0060 (0x0060 - 0x0000)
struct FPopulationClassParameter final
{
public:
	TArray<class FString>                         Tags;                                              // 0x0000(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FString, struct FPopulationClassParameterOptions> ParameterOptions;                   // 0x0010(0x0050)(Edit, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPopulationClassParameter) == 0x000008, "Wrong alignment on FPopulationClassParameter");
static_assert(sizeof(FPopulationClassParameter) == 0x000060, "Wrong size on FPopulationClassParameter");
static_assert(offsetof(FPopulationClassParameter, Tags) == 0x000000, "Member 'FPopulationClassParameter::Tags' has a wrong offset!");
static_assert(offsetof(FPopulationClassParameter, ParameterOptions) == 0x000010, "Member 'FPopulationClassParameter::ParameterOptions' has a wrong offset!");

}

