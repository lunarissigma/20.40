﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AssaultRifle_FrontClip_SideAction

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass BP_AssaultRifle_FrontClip_SideAction.BP_AssaultRifle_FrontClip_SideAction_C
// 0x0090 (0x03E0 - 0x0350)
class UBP_AssaultRifle_FrontClip_SideAction_C final : public UAnimInstance
{
public:
	uint8                                         Pad_348[0x8];                                      // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0358(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0360(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0368(0x0020)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0388(0x0048)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose;                        // 0x03D0(0x0010)()

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AssaultRifle_FrontClip_SideAction_C">();
	}
	static class UBP_AssaultRifle_FrontClip_SideAction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AssaultRifle_FrontClip_SideAction_C>();
	}
};
static_assert(alignof(UBP_AssaultRifle_FrontClip_SideAction_C) == 0x000010, "Wrong alignment on UBP_AssaultRifle_FrontClip_SideAction_C");
static_assert(sizeof(UBP_AssaultRifle_FrontClip_SideAction_C) == 0x0003E0, "Wrong size on UBP_AssaultRifle_FrontClip_SideAction_C");
static_assert(offsetof(UBP_AssaultRifle_FrontClip_SideAction_C, UberGraphFrame) == 0x000350, "Member 'UBP_AssaultRifle_FrontClip_SideAction_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AssaultRifle_FrontClip_SideAction_C, AnimBlueprintExtension_PropertyAccess) == 0x000358, "Member 'UBP_AssaultRifle_FrontClip_SideAction_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UBP_AssaultRifle_FrontClip_SideAction_C, AnimBlueprintExtension_Base) == 0x000360, "Member 'UBP_AssaultRifle_FrontClip_SideAction_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UBP_AssaultRifle_FrontClip_SideAction_C, AnimGraphNode_Root) == 0x000368, "Member 'UBP_AssaultRifle_FrontClip_SideAction_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UBP_AssaultRifle_FrontClip_SideAction_C, AnimGraphNode_Slot) == 0x000388, "Member 'UBP_AssaultRifle_FrontClip_SideAction_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UBP_AssaultRifle_FrontClip_SideAction_C, AnimGraphNode_LocalRefPose) == 0x0003D0, "Member 'UBP_AssaultRifle_FrontClip_SideAction_C::AnimGraphNode_LocalRefPose' has a wrong offset!");

}

