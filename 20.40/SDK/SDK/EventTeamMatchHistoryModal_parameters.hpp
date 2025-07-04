﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EventTeamMatchHistoryModal

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C.BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct EventTeamMatchHistoryModal_C_BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventTeamMatchHistoryModal_C_BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on EventTeamMatchHistoryModal_C_BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(EventTeamMatchHistoryModal_C_BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on EventTeamMatchHistoryModal_C_BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(EventTeamMatchHistoryModal_C_BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'EventTeamMatchHistoryModal_C_BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C.ExecuteUbergraph_EventTeamMatchHistoryModal
// 0x0038 (0x0038 - 0x0000)
struct EventTeamMatchHistoryModal_C_ExecuteUbergraph_EventTeamMatchHistoryModal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_TournamentId;                         // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_EventWindowId;                        // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(EventTeamMatchHistoryModal_C_ExecuteUbergraph_EventTeamMatchHistoryModal) == 0x000008, "Wrong alignment on EventTeamMatchHistoryModal_C_ExecuteUbergraph_EventTeamMatchHistoryModal");
static_assert(sizeof(EventTeamMatchHistoryModal_C_ExecuteUbergraph_EventTeamMatchHistoryModal) == 0x000038, "Wrong size on EventTeamMatchHistoryModal_C_ExecuteUbergraph_EventTeamMatchHistoryModal");
static_assert(offsetof(EventTeamMatchHistoryModal_C_ExecuteUbergraph_EventTeamMatchHistoryModal, EntryPoint) == 0x000000, "Member 'EventTeamMatchHistoryModal_C_ExecuteUbergraph_EventTeamMatchHistoryModal::EntryPoint' has a wrong offset!");
static_assert(offsetof(EventTeamMatchHistoryModal_C_ExecuteUbergraph_EventTeamMatchHistoryModal, K2Node_ComponentBoundEvent_Button) == 0x000008, "Member 'EventTeamMatchHistoryModal_C_ExecuteUbergraph_EventTeamMatchHistoryModal::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(EventTeamMatchHistoryModal_C_ExecuteUbergraph_EventTeamMatchHistoryModal, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'EventTeamMatchHistoryModal_C_ExecuteUbergraph_EventTeamMatchHistoryModal::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventTeamMatchHistoryModal_C_ExecuteUbergraph_EventTeamMatchHistoryModal, K2Node_Event_TournamentId) == 0x000018, "Member 'EventTeamMatchHistoryModal_C_ExecuteUbergraph_EventTeamMatchHistoryModal::K2Node_Event_TournamentId' has a wrong offset!");
static_assert(offsetof(EventTeamMatchHistoryModal_C_ExecuteUbergraph_EventTeamMatchHistoryModal, K2Node_Event_EventWindowId) == 0x000028, "Member 'EventTeamMatchHistoryModal_C_ExecuteUbergraph_EventTeamMatchHistoryModal::K2Node_Event_EventWindowId' has a wrong offset!");

// Function EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C.OnSetupMatchHistory
// 0x0020 (0x0020 - 0x0000)
struct EventTeamMatchHistoryModal_C_OnSetupMatchHistory final
{
public:
	class FString                                 TournamentId;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 EventWindowId;                                     // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(EventTeamMatchHistoryModal_C_OnSetupMatchHistory) == 0x000008, "Wrong alignment on EventTeamMatchHistoryModal_C_OnSetupMatchHistory");
static_assert(sizeof(EventTeamMatchHistoryModal_C_OnSetupMatchHistory) == 0x000020, "Wrong size on EventTeamMatchHistoryModal_C_OnSetupMatchHistory");
static_assert(offsetof(EventTeamMatchHistoryModal_C_OnSetupMatchHistory, TournamentId) == 0x000000, "Member 'EventTeamMatchHistoryModal_C_OnSetupMatchHistory::TournamentId' has a wrong offset!");
static_assert(offsetof(EventTeamMatchHistoryModal_C_OnSetupMatchHistory, EventWindowId) == 0x000010, "Member 'EventTeamMatchHistoryModal_C_OnSetupMatchHistory::EventWindowId' has a wrong offset!");

// Function EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C.Set Up Match History Style
// 0x01E8 (0x01E8 - 0x0000)
struct EventTeamMatchHistoryModal_C_Set_Up_Match_History_Style final
{
public:
	struct FFortTournamentDisplayInfo             Tournament_Display_Info;                           // 0x0000(0x01D0)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x01D0(0x0014)()
};
static_assert(alignof(EventTeamMatchHistoryModal_C_Set_Up_Match_History_Style) == 0x000008, "Wrong alignment on EventTeamMatchHistoryModal_C_Set_Up_Match_History_Style");
static_assert(sizeof(EventTeamMatchHistoryModal_C_Set_Up_Match_History_Style) == 0x0001E8, "Wrong size on EventTeamMatchHistoryModal_C_Set_Up_Match_History_Style");
static_assert(offsetof(EventTeamMatchHistoryModal_C_Set_Up_Match_History_Style, Tournament_Display_Info) == 0x000000, "Member 'EventTeamMatchHistoryModal_C_Set_Up_Match_History_Style::Tournament_Display_Info' has a wrong offset!");
static_assert(offsetof(EventTeamMatchHistoryModal_C_Set_Up_Match_History_Style, K2Node_MakeStruct_SlateColor) == 0x0001D0, "Member 'EventTeamMatchHistoryModal_C_Set_Up_Match_History_Style::K2Node_MakeStruct_SlateColor' has a wrong offset!");

}

