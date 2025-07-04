﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MantisRuntime

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// Enum MantisRuntime.EFortMantisTechniqueActivationInputType
// NumValues: 0x0005
enum class EFortMantisTechniqueActivationInputType : uint8
{
	None                                     = 0,
	Primary                                  = 1,
	Secondary                                = 2,
	Max_Invalid                              = 3,
	EFortMantisTechniqueActivationInputType_MAX = 4,
};

// Enum MantisRuntime.EFortMantisNotifyEvent
// NumValues: 0x0003
enum class EFortMantisNotifyEvent : uint8
{
	Invalid                                  = 0,
	Branch                                   = 1,
	EFortMantisNotifyEvent_MAX               = 2,
};

// Enum MantisRuntime.EFortMantisNotifyWindow
// NumValues: 0x0006
enum class EFortMantisNotifyWindow : uint8
{
	Invalid                                  = 0,
	Input                                    = 1,
	Execution                                = 2,
	Damage                                   = 3,
	RootMotionWarp                           = 4,
	EFortMantisNotifyWindow_MAX              = 5,
};

// Enum MantisRuntime.EFortMantisNotifyRotationWarpRateRule
// NumValues: 0x0003
enum class EFortMantisNotifyRotationWarpRateRule : uint8
{
	Snap                                     = 0,
	WindowDurationLerp                       = 1,
	EFortMantisNotifyRotationWarpRateRule_MAX = 2,
};

// Enum MantisRuntime.EFortMantisBranchRule
// NumValues: 0x0004
enum class EFortMantisBranchRule : uint8
{
	Off                                      = 0,
	Any                                      = 1,
	Starter                                  = 2,
	EFortMantisBranchRule_MAX                = 3,
};

// Enum MantisRuntime.EFortMantisBranchPath
// NumValues: 0x0008
enum class EFortMantisBranchPath : uint8
{
	Default                                  = 0,
	Path_1                                   = 1,
	Path_2                                   = 2,
	Path_3                                   = 3,
	Path_4                                   = 4,
	Path_5                                   = 5,
	Blocked                                  = 6,
	EFortMantisBranchPath_MAX                = 7,
};

// ScriptStruct MantisRuntime.FortMantisRootMotionWarpInfo
// 0x0028 (0x0028 - 0x0000)
struct FFortMantisRootMotionWarpInfo final
{
public:
	class AActor*                                 WarpTarget;                                        // 0x0000(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_8[0x20];                                       // 0x0008(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FFortMantisRootMotionWarpInfo) == 0x000008, "Wrong alignment on FFortMantisRootMotionWarpInfo");
static_assert(sizeof(FFortMantisRootMotionWarpInfo) == 0x000028, "Wrong size on FFortMantisRootMotionWarpInfo");
static_assert(offsetof(FFortMantisRootMotionWarpInfo, WarpTarget) == 0x000000, "Member 'FFortMantisRootMotionWarpInfo::WarpTarget' has a wrong offset!");

// ScriptStruct MantisRuntime.FortRootMotionSource_Mantis
// 0x0080 (0x0160 - 0x00E0)
struct FFortRootMotionSource_Mantis final : public FRootMotionSource
{
public:
	float                                         CurrentTechniqueTime;                              // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           TechniqueMontage;                                  // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortMantisRootMotionWarpInfo          WarpInfo;                                          // 0x00E8(0x0028)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                LatestRepMovementLocation;                         // 0x0110(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_128[0x38];                                     // 0x0128(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FFortRootMotionSource_Mantis) == 0x000010, "Wrong alignment on FFortRootMotionSource_Mantis");
static_assert(sizeof(FFortRootMotionSource_Mantis) == 0x000160, "Wrong size on FFortRootMotionSource_Mantis");
static_assert(offsetof(FFortRootMotionSource_Mantis, CurrentTechniqueTime) == 0x0000D8, "Member 'FFortRootMotionSource_Mantis::CurrentTechniqueTime' has a wrong offset!");
static_assert(offsetof(FFortRootMotionSource_Mantis, TechniqueMontage) == 0x0000E0, "Member 'FFortRootMotionSource_Mantis::TechniqueMontage' has a wrong offset!");
static_assert(offsetof(FFortRootMotionSource_Mantis, WarpInfo) == 0x0000E8, "Member 'FFortRootMotionSource_Mantis::WarpInfo' has a wrong offset!");
static_assert(offsetof(FFortRootMotionSource_Mantis, LatestRepMovementLocation) == 0x000110, "Member 'FFortRootMotionSource_Mantis::LatestRepMovementLocation' has a wrong offset!");

// ScriptStruct MantisRuntime.FortMantisTargetData
// 0x0030 (0x0038 - 0x0008)
struct FFortMantisTargetData final : public FGameplayAbilityTargetData
{
public:
	struct FFortMantisRootMotionWarpInfo          TechniqueWarpInfo;                                 // 0x0008(0x0028)(NoDestructor, NativeAccessSpecifierPublic)
	int32                                         TechniqueDataIndex;                                // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FFortMantisTargetData) == 0x000008, "Wrong alignment on FFortMantisTargetData");
static_assert(sizeof(FFortMantisTargetData) == 0x000038, "Wrong size on FFortMantisTargetData");
static_assert(offsetof(FFortMantisTargetData, TechniqueWarpInfo) == 0x000008, "Member 'FFortMantisTargetData::TechniqueWarpInfo' has a wrong offset!");
static_assert(offsetof(FFortMantisTargetData, TechniqueDataIndex) == 0x000030, "Member 'FFortMantisTargetData::TechniqueDataIndex' has a wrong offset!");

// ScriptStruct MantisRuntime.FortMantisTechniqueData
// 0x00D8 (0x00D8 - 0x0000)
struct FFortMantisTechniqueData final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bStartsSequence;                                   // 0x0004(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEndsSequence;                                     // 0x0005(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InputWindowDelay;                                  // 0x0008(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           Montage;                                           // 0x0010(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  ActivationGameplayCues;                            // 0x0018(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                          bUseRootMotion;                                    // 0x0038(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortMantisTechniqueActivationInputType       ActivationInputType;                               // 0x0039(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagQuery                      ActivationTagQuery;                                // 0x0040(0x0048)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                      OngoingTagQuery;                                   // 0x0088(0x0048)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTag                           ApplicationTag;                                    // 0x00D0(0x0004)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FFortMantisTechniqueData) == 0x000008, "Wrong alignment on FFortMantisTechniqueData");
static_assert(sizeof(FFortMantisTechniqueData) == 0x0000D8, "Wrong size on FFortMantisTechniqueData");
static_assert(offsetof(FFortMantisTechniqueData, Name) == 0x000000, "Member 'FFortMantisTechniqueData::Name' has a wrong offset!");
static_assert(offsetof(FFortMantisTechniqueData, bStartsSequence) == 0x000004, "Member 'FFortMantisTechniqueData::bStartsSequence' has a wrong offset!");
static_assert(offsetof(FFortMantisTechniqueData, bEndsSequence) == 0x000005, "Member 'FFortMantisTechniqueData::bEndsSequence' has a wrong offset!");
static_assert(offsetof(FFortMantisTechniqueData, InputWindowDelay) == 0x000008, "Member 'FFortMantisTechniqueData::InputWindowDelay' has a wrong offset!");
static_assert(offsetof(FFortMantisTechniqueData, Montage) == 0x000010, "Member 'FFortMantisTechniqueData::Montage' has a wrong offset!");
static_assert(offsetof(FFortMantisTechniqueData, ActivationGameplayCues) == 0x000018, "Member 'FFortMantisTechniqueData::ActivationGameplayCues' has a wrong offset!");
static_assert(offsetof(FFortMantisTechniqueData, bUseRootMotion) == 0x000038, "Member 'FFortMantisTechniqueData::bUseRootMotion' has a wrong offset!");
static_assert(offsetof(FFortMantisTechniqueData, ActivationInputType) == 0x000039, "Member 'FFortMantisTechniqueData::ActivationInputType' has a wrong offset!");
static_assert(offsetof(FFortMantisTechniqueData, ActivationTagQuery) == 0x000040, "Member 'FFortMantisTechniqueData::ActivationTagQuery' has a wrong offset!");
static_assert(offsetof(FFortMantisTechniqueData, OngoingTagQuery) == 0x000088, "Member 'FFortMantisTechniqueData::OngoingTagQuery' has a wrong offset!");
static_assert(offsetof(FFortMantisTechniqueData, ApplicationTag) == 0x0000D0, "Member 'FFortMantisTechniqueData::ApplicationTag' has a wrong offset!");

// ScriptStruct MantisRuntime.FortMantisTechniqueBranch
// 0x000C (0x000C - 0x0000)
struct FFortMantisTechniqueBranch final
{
public:
	class FName                                   FromTechnique;                                     // 0x0000(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ToTechnique;                                       // 0x0004(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortMantisBranchPath                         BranchPath;                                        // 0x0008(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FFortMantisTechniqueBranch) == 0x000004, "Wrong alignment on FFortMantisTechniqueBranch");
static_assert(sizeof(FFortMantisTechniqueBranch) == 0x00000C, "Wrong size on FFortMantisTechniqueBranch");
static_assert(offsetof(FFortMantisTechniqueBranch, FromTechnique) == 0x000000, "Member 'FFortMantisTechniqueBranch::FromTechnique' has a wrong offset!");
static_assert(offsetof(FFortMantisTechniqueBranch, ToTechnique) == 0x000004, "Member 'FFortMantisTechniqueBranch::ToTechnique' has a wrong offset!");
static_assert(offsetof(FFortMantisTechniqueBranch, BranchPath) == 0x000008, "Member 'FFortMantisTechniqueBranch::BranchPath' has a wrong offset!");

// ScriptStruct MantisRuntime.FortMantisMontageData
// 0x0018 (0x0018 - 0x0000)
struct FFortMantisMontageData final
{
public:
	class UAnimMontage*                           Montage;                                           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8[0x10];                                       // 0x0008(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FFortMantisMontageData) == 0x000008, "Wrong alignment on FFortMantisMontageData");
static_assert(sizeof(FFortMantisMontageData) == 0x000018, "Wrong size on FFortMantisMontageData");
static_assert(offsetof(FFortMantisMontageData, Montage) == 0x000000, "Member 'FFortMantisMontageData::Montage' has a wrong offset!");

}

