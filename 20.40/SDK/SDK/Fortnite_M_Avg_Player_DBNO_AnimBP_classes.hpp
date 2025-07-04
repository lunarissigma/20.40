﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Fortnite_M_Avg_Player_DBNO_AnimBP

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Fortnite_M_Avg_Player_DBNO_AnimBP_structs.hpp"
#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Fortnite_M_Avg_Player_DBNO_AnimBP.Fortnite_M_Avg_Player_DBNO_AnimBP_C
// 0x0600 (0x0A10 - 0x0410)
class UFortnite_M_Avg_Player_DBNO_AnimBP_C final : public UFortDBNOAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct Fortnite_M_Avg_Player_DBNO_AnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x0418(0x0018)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0430(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0438(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0440(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x0460(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x0488(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x04B0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x04D8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x0500(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0528(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0550(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0578(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x05A0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x05C8(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x05F0(0x0040)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x0630(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0650(0x0040)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0690(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x06B0(0x0040)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x06F0(0x0020)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;                  // 0x0710(0x0068)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0778(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0798(0x0040)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x07D8(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x07F8(0x0028)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0820(0x00B8)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x08D8(0x00C8)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x09A0(0x0068)()

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_Fortnite_M_Avg_Player_DBNO_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fortnite_M_Avg_Player_DBNO_AnimBP_C">();
	}
	static class UFortnite_M_Avg_Player_DBNO_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortnite_M_Avg_Player_DBNO_AnimBP_C>();
	}
};
static_assert(alignof(UFortnite_M_Avg_Player_DBNO_AnimBP_C) == 0x000010, "Wrong alignment on UFortnite_M_Avg_Player_DBNO_AnimBP_C");
static_assert(sizeof(UFortnite_M_Avg_Player_DBNO_AnimBP_C) == 0x000A10, "Wrong size on UFortnite_M_Avg_Player_DBNO_AnimBP_C");
static_assert(offsetof(UFortnite_M_Avg_Player_DBNO_AnimBP_C, UberGraphFrame) == 0x000410, "Member 'UFortnite_M_Avg_Player_DBNO_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFortnite_M_Avg_Player_DBNO_AnimBP_C, __AnimBlueprintMutables) == 0x000418, "Member 'UFortnite_M_Avg_Player_DBNO_AnimBP_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UFortnite_M_Avg_Player_DBNO_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x000430, "Member 'UFortnite_M_Avg_Player_DBNO_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UFortnite_M_Avg_Player_DBNO_AnimBP_C, AnimBlueprintExtension_Base) == 0x000438, "Member 'UFortnite_M_Avg_Player_DBNO_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UFortnite_M_Avg_Player_DBNO_AnimBP_C, AnimGraphNode_Root) == 0x000440, "Member 'UFortnite_M_Avg_Player_DBNO_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UFortnite_M_Avg_Player_DBNO_AnimBP_C, AnimGraphNode_TransitionResult_10) == 0x000460, "Member 'UFortnite_M_Avg_Player_DBNO_AnimBP_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UFortnite_M_Avg_Player_DBNO_AnimBP_C, AnimGraphNode_TransitionResult_9) == 0x000488, "Member 'UFortnite_M_Avg_Player_DBNO_AnimBP_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UFortnite_M_Avg_Player_DBNO_AnimBP_C, AnimGraphNode_TransitionResult_8) == 0x0004B0, "Member 'UFortnite_M_Avg_Player_DBNO_AnimBP_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UFortnite_M_Avg_Player_DBNO_AnimBP_C, AnimGraphNode_TransitionResult_7) == 0x0004D8, "Member 'UFortnite_M_Avg_Player_DBNO_AnimBP_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UFortnite_M_Avg_Player_DBNO_AnimBP_C, AnimGraphNode_TransitionResult_6) == 0x000500, "Member 'UFortnite_M_Avg_Player_DBNO_AnimBP_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UFortnite_M_Avg_Player_DBNO_AnimBP_C, AnimGraphNode_TransitionResult_5) == 0x000528, "Member 'UFortnite_M_Avg_Player_DBNO_AnimBP_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UFortnite_M_Avg_Player_DBNO_AnimBP_C, AnimGraphNode_TransitionResult_4) == 0x000550, "Member 'UFortnite_M_Avg_Player_DBNO_AnimBP_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UFortnite_M_Avg_Player_DBNO_AnimBP_C, AnimGraphNode_TransitionResult_3) == 0x000578, "Member 'UFortnite_M_Avg_Player_DBNO_AnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UFortnite_M_Avg_Player_DBNO_AnimBP_C, AnimGraphNode_TransitionResult_2) == 0x0005A0, "Member 'UFortnite_M_Avg_Player_DBNO_AnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UFortnite_M_Avg_Player_DBNO_AnimBP_C, AnimGraphNode_TransitionResult_1) == 0x0005C8, "Member 'UFortnite_M_Avg_Player_DBNO_AnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UFortnite_M_Avg_Player_DBNO_AnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x0005F0, "Member 'UFortnite_M_Avg_Player_DBNO_AnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UFortnite_M_Avg_Player_DBNO_AnimBP_C, AnimGraphNode_StateResult_4) == 0x000630, "Member 'UFortnite_M_Avg_Player_DBNO_AnimBP_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UFortnite_M_Avg_Player_DBNO_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x000650, "Member 'UFortnite_M_Avg_Player_DBNO_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UFortnite_M_Avg_Player_DBNO_AnimBP_C, AnimGraphNode_StateResult_3) == 0x000690, "Member 'UFortnite_M_Avg_Player_DBNO_AnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UFortnite_M_Avg_Player_DBNO_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x0006B0, "Member 'UFortnite_M_Avg_Player_DBNO_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UFortnite_M_Avg_Player_DBNO_AnimBP_C, AnimGraphNode_StateResult_2) == 0x0006F0, "Member 'UFortnite_M_Avg_Player_DBNO_AnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UFortnite_M_Avg_Player_DBNO_AnimBP_C, AnimGraphNode_BlendSpacePlayer_1) == 0x000710, "Member 'UFortnite_M_Avg_Player_DBNO_AnimBP_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(UFortnite_M_Avg_Player_DBNO_AnimBP_C, AnimGraphNode_StateResult_1) == 0x000778, "Member 'UFortnite_M_Avg_Player_DBNO_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UFortnite_M_Avg_Player_DBNO_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x000798, "Member 'UFortnite_M_Avg_Player_DBNO_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UFortnite_M_Avg_Player_DBNO_AnimBP_C, AnimGraphNode_StateResult) == 0x0007D8, "Member 'UFortnite_M_Avg_Player_DBNO_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UFortnite_M_Avg_Player_DBNO_AnimBP_C, AnimGraphNode_TransitionResult) == 0x0007F8, "Member 'UFortnite_M_Avg_Player_DBNO_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UFortnite_M_Avg_Player_DBNO_AnimBP_C, AnimGraphNode_StateMachine) == 0x000820, "Member 'UFortnite_M_Avg_Player_DBNO_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UFortnite_M_Avg_Player_DBNO_AnimBP_C, AnimGraphNode_ApplyAdditive) == 0x0008D8, "Member 'UFortnite_M_Avg_Player_DBNO_AnimBP_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UFortnite_M_Avg_Player_DBNO_AnimBP_C, AnimGraphNode_BlendSpacePlayer) == 0x0009A0, "Member 'UFortnite_M_Avg_Player_DBNO_AnimBP_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");

}

