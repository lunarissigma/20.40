﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ArmadilloRuntime

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ArmadilloRuntime.ArmadilloAnimInstance_BGAEnemyGuard.BlueprintUpdateAnim
// 0x0004 (0x0004 - 0x0000)
struct ArmadilloAnimInstance_BGAEnemyGuard_BlueprintUpdateAnim final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ArmadilloAnimInstance_BGAEnemyGuard_BlueprintUpdateAnim) == 0x000004, "Wrong alignment on ArmadilloAnimInstance_BGAEnemyGuard_BlueprintUpdateAnim");
static_assert(sizeof(ArmadilloAnimInstance_BGAEnemyGuard_BlueprintUpdateAnim) == 0x000004, "Wrong size on ArmadilloAnimInstance_BGAEnemyGuard_BlueprintUpdateAnim");
static_assert(offsetof(ArmadilloAnimInstance_BGAEnemyGuard_BlueprintUpdateAnim, DeltaTime) == 0x000000, "Member 'ArmadilloAnimInstance_BGAEnemyGuard_BlueprintUpdateAnim::DeltaTime' has a wrong offset!");

// Function ArmadilloRuntime.ArmadilloAnimInstance_BGAEnemyGuard.GetCurrentTargetLocation
// 0x0020 (0x0020 - 0x0000)
struct ArmadilloAnimInstance_BGAEnemyGuard_GetCurrentTargetLocation final
{
public:
	bool                                          bOutValidTarget;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                OutTargetLocation;                                 // 0x0008(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ArmadilloAnimInstance_BGAEnemyGuard_GetCurrentTargetLocation) == 0x000008, "Wrong alignment on ArmadilloAnimInstance_BGAEnemyGuard_GetCurrentTargetLocation");
static_assert(sizeof(ArmadilloAnimInstance_BGAEnemyGuard_GetCurrentTargetLocation) == 0x000020, "Wrong size on ArmadilloAnimInstance_BGAEnemyGuard_GetCurrentTargetLocation");
static_assert(offsetof(ArmadilloAnimInstance_BGAEnemyGuard_GetCurrentTargetLocation, bOutValidTarget) == 0x000000, "Member 'ArmadilloAnimInstance_BGAEnemyGuard_GetCurrentTargetLocation::bOutValidTarget' has a wrong offset!");
static_assert(offsetof(ArmadilloAnimInstance_BGAEnemyGuard_GetCurrentTargetLocation, OutTargetLocation) == 0x000008, "Member 'ArmadilloAnimInstance_BGAEnemyGuard_GetCurrentTargetLocation::OutTargetLocation' has a wrong offset!");

// Function ArmadilloRuntime.ArmadilloAnimInstance_BGAEnemyGuard.GetRelevantOwningActor
// 0x0008 (0x0008 - 0x0000)
struct ArmadilloAnimInstance_BGAEnemyGuard_GetRelevantOwningActor final
{
public:
	class AActor*                                 ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ArmadilloAnimInstance_BGAEnemyGuard_GetRelevantOwningActor) == 0x000008, "Wrong alignment on ArmadilloAnimInstance_BGAEnemyGuard_GetRelevantOwningActor");
static_assert(sizeof(ArmadilloAnimInstance_BGAEnemyGuard_GetRelevantOwningActor) == 0x000008, "Wrong size on ArmadilloAnimInstance_BGAEnemyGuard_GetRelevantOwningActor");
static_assert(offsetof(ArmadilloAnimInstance_BGAEnemyGuard_GetRelevantOwningActor, ReturnValue) == 0x000000, "Member 'ArmadilloAnimInstance_BGAEnemyGuard_GetRelevantOwningActor::ReturnValue' has a wrong offset!");

// Function ArmadilloRuntime.ArmadilloAnimInstance_BGAEnemyGuard.GetSkeletalMeshComponent
// 0x0008 (0x0008 - 0x0000)
struct ArmadilloAnimInstance_BGAEnemyGuard_GetSkeletalMeshComponent final
{
public:
	class USkeletalMeshComponent*                 ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ArmadilloAnimInstance_BGAEnemyGuard_GetSkeletalMeshComponent) == 0x000008, "Wrong alignment on ArmadilloAnimInstance_BGAEnemyGuard_GetSkeletalMeshComponent");
static_assert(sizeof(ArmadilloAnimInstance_BGAEnemyGuard_GetSkeletalMeshComponent) == 0x000008, "Wrong size on ArmadilloAnimInstance_BGAEnemyGuard_GetSkeletalMeshComponent");
static_assert(offsetof(ArmadilloAnimInstance_BGAEnemyGuard_GetSkeletalMeshComponent, ReturnValue) == 0x000000, "Member 'ArmadilloAnimInstance_BGAEnemyGuard_GetSkeletalMeshComponent::ReturnValue' has a wrong offset!");

// Function ArmadilloRuntime.ArmadilloAnimInstance_BGAEnemyGuard.GetSkeletalMeshRootSocketTransform
// 0x0060 (0x0060 - 0x0000)
struct ArmadilloAnimInstance_BGAEnemyGuard_GetSkeletalMeshRootSocketTransform final
{
public:
	struct FTransform                             ReturnValue;                                       // 0x0000(0x0060)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(ArmadilloAnimInstance_BGAEnemyGuard_GetSkeletalMeshRootSocketTransform) == 0x000010, "Wrong alignment on ArmadilloAnimInstance_BGAEnemyGuard_GetSkeletalMeshRootSocketTransform");
static_assert(sizeof(ArmadilloAnimInstance_BGAEnemyGuard_GetSkeletalMeshRootSocketTransform) == 0x000060, "Wrong size on ArmadilloAnimInstance_BGAEnemyGuard_GetSkeletalMeshRootSocketTransform");
static_assert(offsetof(ArmadilloAnimInstance_BGAEnemyGuard_GetSkeletalMeshRootSocketTransform, ReturnValue) == 0x000000, "Member 'ArmadilloAnimInstance_BGAEnemyGuard_GetSkeletalMeshRootSocketTransform::ReturnValue' has a wrong offset!");

}

