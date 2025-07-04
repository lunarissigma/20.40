﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Fringe_Plank_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Fringe_Plank_AnimBP.Fringe_Plank_AnimBP_C.ExecuteUbergraph_Fringe_Plank_AnimBP
// 0x0004 (0x0004 - 0x0000)
struct Fringe_Plank_AnimBP_C_ExecuteUbergraph_Fringe_Plank_AnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fringe_Plank_AnimBP_C_ExecuteUbergraph_Fringe_Plank_AnimBP) == 0x000004, "Wrong alignment on Fringe_Plank_AnimBP_C_ExecuteUbergraph_Fringe_Plank_AnimBP");
static_assert(sizeof(Fringe_Plank_AnimBP_C_ExecuteUbergraph_Fringe_Plank_AnimBP) == 0x000004, "Wrong size on Fringe_Plank_AnimBP_C_ExecuteUbergraph_Fringe_Plank_AnimBP");
static_assert(offsetof(Fringe_Plank_AnimBP_C_ExecuteUbergraph_Fringe_Plank_AnimBP, EntryPoint) == 0x000000, "Member 'Fringe_Plank_AnimBP_C_ExecuteUbergraph_Fringe_Plank_AnimBP::EntryPoint' has a wrong offset!");

// Function Fringe_Plank_AnimBP.Fringe_Plank_AnimBP_C.AnimGraph
// 0x0020 (0x0020 - 0x0000)
struct Fringe_Plank_AnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              AnimGraph_0;                                       // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(Fringe_Plank_AnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on Fringe_Plank_AnimBP_C_AnimGraph");
static_assert(sizeof(Fringe_Plank_AnimBP_C_AnimGraph) == 0x000020, "Wrong size on Fringe_Plank_AnimBP_C_AnimGraph");
static_assert(offsetof(Fringe_Plank_AnimBP_C_AnimGraph, InPose) == 0x000000, "Member 'Fringe_Plank_AnimBP_C_AnimGraph::InPose' has a wrong offset!");
static_assert(offsetof(Fringe_Plank_AnimBP_C_AnimGraph, AnimGraph_0) == 0x000010, "Member 'Fringe_Plank_AnimBP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

}

