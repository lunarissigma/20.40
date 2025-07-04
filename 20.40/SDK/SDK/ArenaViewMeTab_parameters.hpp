﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ArenaViewMeTab

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function ArenaViewMeTab.ArenaViewMeTab_C.Colorize
// 0x01D0 (0x01D0 - 0x0000)
struct ArenaViewMeTab_C_Colorize final
{
public:
	struct FFortTournamentDisplayInfo             ColorInfo;                                         // 0x0000(0x01D0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ArenaViewMeTab_C_Colorize) == 0x000008, "Wrong alignment on ArenaViewMeTab_C_Colorize");
static_assert(sizeof(ArenaViewMeTab_C_Colorize) == 0x0001D0, "Wrong size on ArenaViewMeTab_C_Colorize");
static_assert(offsetof(ArenaViewMeTab_C_Colorize, ColorInfo) == 0x000000, "Member 'ArenaViewMeTab_C_Colorize::ColorInfo' has a wrong offset!");

// Function ArenaViewMeTab.ArenaViewMeTab_C.ExecuteUbergraph_ArenaViewMeTab
// 0x01E8 (0x01E8 - 0x0000)
struct ArenaViewMeTab_C_ExecuteUbergraph_ArenaViewMeTab final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortTournamentDisplayInfo             K2Node_CustomEvent_ColorInfo;                      // 0x0008(0x01D0)()
	class UArenaPersonalView_C*                   K2Node_DynamicCast_AsArena_Personal_View;          // 0x01D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ArenaViewMeTab_C_ExecuteUbergraph_ArenaViewMeTab) == 0x000008, "Wrong alignment on ArenaViewMeTab_C_ExecuteUbergraph_ArenaViewMeTab");
static_assert(sizeof(ArenaViewMeTab_C_ExecuteUbergraph_ArenaViewMeTab) == 0x0001E8, "Wrong size on ArenaViewMeTab_C_ExecuteUbergraph_ArenaViewMeTab");
static_assert(offsetof(ArenaViewMeTab_C_ExecuteUbergraph_ArenaViewMeTab, EntryPoint) == 0x000000, "Member 'ArenaViewMeTab_C_ExecuteUbergraph_ArenaViewMeTab::EntryPoint' has a wrong offset!");
static_assert(offsetof(ArenaViewMeTab_C_ExecuteUbergraph_ArenaViewMeTab, K2Node_CustomEvent_ColorInfo) == 0x000008, "Member 'ArenaViewMeTab_C_ExecuteUbergraph_ArenaViewMeTab::K2Node_CustomEvent_ColorInfo' has a wrong offset!");
static_assert(offsetof(ArenaViewMeTab_C_ExecuteUbergraph_ArenaViewMeTab, K2Node_DynamicCast_AsArena_Personal_View) == 0x0001D8, "Member 'ArenaViewMeTab_C_ExecuteUbergraph_ArenaViewMeTab::K2Node_DynamicCast_AsArena_Personal_View' has a wrong offset!");
static_assert(offsetof(ArenaViewMeTab_C_ExecuteUbergraph_ArenaViewMeTab, K2Node_DynamicCast_bSuccess) == 0x0001E0, "Member 'ArenaViewMeTab_C_ExecuteUbergraph_ArenaViewMeTab::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

