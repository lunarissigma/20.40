﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ArenaLeaderboard

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ArenaLeaderboard.ArenaLeaderboard_C.ExecuteUbergraph_ArenaLeaderboard
// 0x0290 (0x0290 - 0x0000)
struct ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	const class UFortEventLeaderboardEntryData*   K2Node_Event_EntryData;                            // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Item)>          K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonLegacy*                    K2Node_CustomEvent_Button;                         // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortEventLeaderboardEntryData*         CallFunc_GetMyLeaderboardEntry_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_EventId;                              // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_EventWindowId;                        // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFortTournamentDisplayInfo             K2Node_Event_ColorInfo;                            // 0x0050(0x01D0)()
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UCommonButtonLegacy* Button)> K2Node_CreateDelegate_OutputDelegate_1;       // 0x0230(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23C[0x4];                                      // 0x023C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULeaderboardTab_C*                      K2Node_DynamicCast_AsLeaderboard_Tab;              // 0x0240(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_249[0x7];                                      // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULeaderboardListViewWrapper_C*          K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper; // 0x0250(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_259[0x7];                                      // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UListView*                              CallFunc_GetListView_ReturnValue;                  // 0x0260(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Item;                           // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortEventLeaderboardEntryData*         K2Node_DynamicCast_AsFort_Event_Leaderboard_Entry_Data; // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_279[0x7];                                      // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UArenaViewMeTab_C*                      K2Node_DynamicCast_AsArena_View_Me_Tab;            // 0x0280(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bNoLeaderboardTabs;                   // 0x0289(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x028A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard) == 0x000008, "Wrong alignment on ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard");
static_assert(sizeof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard) == 0x000290, "Wrong size on ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, EntryPoint) == 0x000000, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::EntryPoint' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, Temp_bool_Variable) == 0x000004, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, Temp_byte_Variable) == 0x000005, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, Temp_byte_Variable_1) == 0x000006, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_Event_EntryData) == 0x000008, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_Event_EntryData' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_CustomEvent_Button) == 0x000020, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_CustomEvent_Button' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, CallFunc_GetMyLeaderboardEntry_ReturnValue) == 0x000028, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::CallFunc_GetMyLeaderboardEntry_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_Event_EventId) == 0x000030, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_Event_EventId' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_Event_EventWindowId) == 0x000040, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_Event_EventWindowId' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_Event_ColorInfo) == 0x000050, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_Event_ColorInfo' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000220, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000228, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_CreateDelegate_OutputDelegate_1) == 0x000230, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_DynamicCast_AsLeaderboard_Tab) == 0x000240, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_DynamicCast_AsLeaderboard_Tab' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_DynamicCast_bSuccess) == 0x000248, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper) == 0x000250, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_DynamicCast_bSuccess_1) == 0x000258, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, CallFunc_GetListView_ReturnValue) == 0x000260, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::CallFunc_GetListView_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_CustomEvent_Item) == 0x000268, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_CustomEvent_Item' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_DynamicCast_AsFort_Event_Leaderboard_Entry_Data) == 0x000270, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_DynamicCast_AsFort_Event_Leaderboard_Entry_Data' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_DynamicCast_bSuccess_2) == 0x000278, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_DynamicCast_AsArena_View_Me_Tab) == 0x000280, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_DynamicCast_AsArena_View_Me_Tab' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_DynamicCast_bSuccess_3) == 0x000288, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_Event_bNoLeaderboardTabs) == 0x000289, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_Event_bNoLeaderboardTabs' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard, K2Node_Select_Default) == 0x00028A, "Member 'ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard::K2Node_Select_Default' has a wrong offset!");

// Function ArenaLeaderboard.ArenaLeaderboard_C.Initialize Children For Event
// 0x0040 (0x0040 - 0x0000)
struct ArenaLeaderboard_C_Initialize_Children_For_Event final
{
public:
	class FString                                 Event_Id;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Event_Window_Id;                                   // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Tournament_Id;                                     // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class ULeaderboardTab_C*                      K2Node_DynamicCast_AsLeaderboard_Tab;              // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ArenaLeaderboard_C_Initialize_Children_For_Event) == 0x000008, "Wrong alignment on ArenaLeaderboard_C_Initialize_Children_For_Event");
static_assert(sizeof(ArenaLeaderboard_C_Initialize_Children_For_Event) == 0x000040, "Wrong size on ArenaLeaderboard_C_Initialize_Children_For_Event");
static_assert(offsetof(ArenaLeaderboard_C_Initialize_Children_For_Event, Event_Id) == 0x000000, "Member 'ArenaLeaderboard_C_Initialize_Children_For_Event::Event_Id' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_Initialize_Children_For_Event, Event_Window_Id) == 0x000010, "Member 'ArenaLeaderboard_C_Initialize_Children_For_Event::Event_Window_Id' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_Initialize_Children_For_Event, Tournament_Id) == 0x000020, "Member 'ArenaLeaderboard_C_Initialize_Children_For_Event::Tournament_Id' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_Initialize_Children_For_Event, K2Node_DynamicCast_AsLeaderboard_Tab) == 0x000030, "Member 'ArenaLeaderboard_C_Initialize_Children_For_Event::K2Node_DynamicCast_AsLeaderboard_Tab' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_Initialize_Children_For_Event, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'ArenaLeaderboard_C_Initialize_Children_For_Event::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function ArenaLeaderboard.ArenaLeaderboard_C.Item Double-Clicked
// 0x0008 (0x0008 - 0x0000)
struct ArenaLeaderboard_C_Item_Double_Clicked final
{
public:
	class UObject*                                Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ArenaLeaderboard_C_Item_Double_Clicked) == 0x000008, "Wrong alignment on ArenaLeaderboard_C_Item_Double_Clicked");
static_assert(sizeof(ArenaLeaderboard_C_Item_Double_Clicked) == 0x000008, "Wrong size on ArenaLeaderboard_C_Item_Double_Clicked");
static_assert(offsetof(ArenaLeaderboard_C_Item_Double_Clicked, Item) == 0x000000, "Member 'ArenaLeaderboard_C_Item_Double_Clicked::Item' has a wrong offset!");

// Function ArenaLeaderboard.ArenaLeaderboard_C.OnColorize
// 0x01D0 (0x01D0 - 0x0000)
struct ArenaLeaderboard_C_OnColorize final
{
public:
	struct FFortTournamentDisplayInfo             ColorInfo;                                         // 0x0000(0x01D0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ArenaLeaderboard_C_OnColorize) == 0x000008, "Wrong alignment on ArenaLeaderboard_C_OnColorize");
static_assert(sizeof(ArenaLeaderboard_C_OnColorize) == 0x0001D0, "Wrong size on ArenaLeaderboard_C_OnColorize");
static_assert(offsetof(ArenaLeaderboard_C_OnColorize, ColorInfo) == 0x000000, "Member 'ArenaLeaderboard_C_OnColorize::ColorInfo' has a wrong offset!");

// Function ArenaLeaderboard.ArenaLeaderboard_C.OnLeaderboardEntrySelected
// 0x0008 (0x0008 - 0x0000)
struct ArenaLeaderboard_C_OnLeaderboardEntrySelected final
{
public:
	const class UFortEventLeaderboardEntryData*   EntryData;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ArenaLeaderboard_C_OnLeaderboardEntrySelected) == 0x000008, "Wrong alignment on ArenaLeaderboard_C_OnLeaderboardEntrySelected");
static_assert(sizeof(ArenaLeaderboard_C_OnLeaderboardEntrySelected) == 0x000008, "Wrong size on ArenaLeaderboard_C_OnLeaderboardEntrySelected");
static_assert(offsetof(ArenaLeaderboard_C_OnLeaderboardEntrySelected, EntryData) == 0x000000, "Member 'ArenaLeaderboard_C_OnLeaderboardEntrySelected::EntryData' has a wrong offset!");

// Function ArenaLeaderboard.ArenaLeaderboard_C.OnLeaderboardTabsLoaded
// 0x0001 (0x0001 - 0x0000)
struct ArenaLeaderboard_C_OnLeaderboardTabsLoaded final
{
public:
	bool                                          bNoLeaderboardTabs;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ArenaLeaderboard_C_OnLeaderboardTabsLoaded) == 0x000001, "Wrong alignment on ArenaLeaderboard_C_OnLeaderboardTabsLoaded");
static_assert(sizeof(ArenaLeaderboard_C_OnLeaderboardTabsLoaded) == 0x000001, "Wrong size on ArenaLeaderboard_C_OnLeaderboardTabsLoaded");
static_assert(offsetof(ArenaLeaderboard_C_OnLeaderboardTabsLoaded, bNoLeaderboardTabs) == 0x000000, "Member 'ArenaLeaderboard_C_OnLeaderboardTabsLoaded::bNoLeaderboardTabs' has a wrong offset!");

// Function ArenaLeaderboard.ArenaLeaderboard_C.SetupForEvent
// 0x0020 (0x0020 - 0x0000)
struct ArenaLeaderboard_C_SetupForEvent final
{
public:
	class FString                                 EventId;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 EventWindowId;                                     // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ArenaLeaderboard_C_SetupForEvent) == 0x000008, "Wrong alignment on ArenaLeaderboard_C_SetupForEvent");
static_assert(sizeof(ArenaLeaderboard_C_SetupForEvent) == 0x000020, "Wrong size on ArenaLeaderboard_C_SetupForEvent");
static_assert(offsetof(ArenaLeaderboard_C_SetupForEvent, EventId) == 0x000000, "Member 'ArenaLeaderboard_C_SetupForEvent::EventId' has a wrong offset!");
static_assert(offsetof(ArenaLeaderboard_C_SetupForEvent, EventWindowId) == 0x000010, "Member 'ArenaLeaderboard_C_SetupForEvent::EventWindowId' has a wrong offset!");

// Function ArenaLeaderboard.ArenaLeaderboard_C.ShowMyStats
// 0x0008 (0x0008 - 0x0000)
struct ArenaLeaderboard_C_ShowMyStats final
{
public:
	class UCommonButtonLegacy*                    Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ArenaLeaderboard_C_ShowMyStats) == 0x000008, "Wrong alignment on ArenaLeaderboard_C_ShowMyStats");
static_assert(sizeof(ArenaLeaderboard_C_ShowMyStats) == 0x000008, "Wrong size on ArenaLeaderboard_C_ShowMyStats");
static_assert(offsetof(ArenaLeaderboard_C_ShowMyStats, Button) == 0x000000, "Member 'ArenaLeaderboard_C_ShowMyStats::Button' has a wrong offset!");

}

