﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TeamMemberPedestal_Nameplate

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CommonInput_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.BP_OnTeamMemberEstablished
// 0x0001 (0x0001 - 0x0000)
struct TeamMemberPedestal_Nameplate_C_BP_OnTeamMemberEstablished final
{
public:
	bool                                          bHasValidMember;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TeamMemberPedestal_Nameplate_C_BP_OnTeamMemberEstablished) == 0x000001, "Wrong alignment on TeamMemberPedestal_Nameplate_C_BP_OnTeamMemberEstablished");
static_assert(sizeof(TeamMemberPedestal_Nameplate_C_BP_OnTeamMemberEstablished) == 0x000001, "Wrong size on TeamMemberPedestal_Nameplate_C_BP_OnTeamMemberEstablished");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_BP_OnTeamMemberEstablished, bHasValidMember) == 0x000000, "Member 'TeamMemberPedestal_Nameplate_C_BP_OnTeamMemberEstablished::bHasValidMember' has a wrong offset!");

// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.ExecuteUbergraph_TeamMemberPedestal_Nameplate
// 0x00E0 (0x00E0 - 0x0000)
struct TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFrontEndCamera                               CallFunc_GetFrontEndCamera_ReturnValue;            // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortFriendRequestStatus                      Temp_byte_Variable_1;                              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortFriendRequestStatus                      Temp_byte_Variable_2;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_6;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGameReadiness                                K2Node_Event_GameReadiness;                        // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bHasValidMember;                      // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B[0x5];                                       // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFrontEndCamera                               K2Node_CustomEvent_NewCamera;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFrontEndCamera                               K2Node_CustomEvent_OldCamera;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_7;                              // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsReadyForMatchmaking;               // 0x003F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubGame                                      K2Node_Event_NewSubGame;                           // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTeamMemberPedestal_Nameplate_AddFriendButton_C* K2Node_DynamicCast_AsTeam_Member_Pedestal_Nameplate_Add_Friend_Button; // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortFriendRequestStatus                      K2Node_Event_FriendRequestStatus;                  // 0x0052(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53[0x5];                                       // 0x0053(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetEmptyText_ReturnValue;                 // 0x0058(0x0018)()
	class FText                                   K2Node_Select_Default_1;                           // 0x0070(0x0018)(ConstParm)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGameReadiness                                Temp_byte_Variable_8;                              // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default_3;                           // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00A0(0x0014)()
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             K2Node_Select_Default_4;                           // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;            // 0x00C0(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)> K2Node_CreateDelegate_OutputDelegate_1; // 0x00CC(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              K2Node_CustomEvent_bNewInputType;                  // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCurrentMemberValid_ReturnValue;         // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_9;                              // 0x00DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_10;                             // 0x00DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_5;                           // 0x00DE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate) == 0x000008, "Wrong alignment on TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate");
static_assert(sizeof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate) == 0x0000E0, "Wrong size on TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, EntryPoint) == 0x000000, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::EntryPoint' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_byte_Variable) == 0x000010, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_GetFrontEndCamera_ReturnValue) == 0x000012, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_GetFrontEndCamera_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_byte_Variable_1) == 0x000013, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_byte_Variable_2) == 0x000014, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_byte_Variable_3) == 0x000015, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_byte_Variable_4) == 0x000016, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_byte_Variable_5) == 0x000017, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_byte_Variable_6) == 0x000018, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000020, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_Event_GameReadiness) == 0x000029, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_Event_GameReadiness' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_Event_bHasValidMember) == 0x00002A, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_Event_bHasValidMember' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_CustomEvent_NewCamera) == 0x000038, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_CustomEvent_NewCamera' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_CustomEvent_OldCamera) == 0x000039, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_CustomEvent_OldCamera' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_byte_Variable_7) == 0x00003A, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00003B, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00003C, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_BooleanOR_ReturnValue) == 0x00003D, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_Not_PreBool_ReturnValue) == 0x00003E, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_Event_bIsReadyForMatchmaking) == 0x00003F, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_Event_bIsReadyForMatchmaking' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_Event_NewSubGame) == 0x000040, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_Event_NewSubGame' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_bool_Variable) == 0x000041, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000042, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_Select_Default) == 0x000043, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_DynamicCast_AsTeam_Member_Pedestal_Nameplate_Add_Friend_Button) == 0x000048, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_DynamicCast_AsTeam_Member_Pedestal_Nameplate_Add_Friend_Button' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_IsValid_ReturnValue_2) == 0x000051, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_Event_FriendRequestStatus) == 0x000052, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_Event_FriendRequestStatus' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_GetEmptyText_ReturnValue) == 0x000058, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_GetEmptyText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_Select_Default_1) == 0x000070, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_Select_Default_2) == 0x000088, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000089, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_byte_Variable_8) == 0x00008A, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_bool_Variable_1) == 0x00008B, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_bool_Variable_2) == 0x00008C, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_Select_Default_3) == 0x000090, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_MakeStruct_SlateColor) == 0x0000A0, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_Select_Default_4) == 0x0000B8, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_CreateDelegate_OutputDelegate) == 0x0000C0, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000CC, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_CustomEvent_bNewInputType) == 0x0000D8, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_CustomEvent_bNewInputType' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_IsCurrentMemberValid_ReturnValue) == 0x0000D9, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_IsCurrentMemberValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000DA, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_byte_Variable_9) == 0x0000DB, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_BooleanOR_ReturnValue_1) == 0x0000DC, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_byte_Variable_10) == 0x0000DD, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_Select_Default_5) == 0x0000DE, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_Select_Default_5' has a wrong offset!");

// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.GetInputActionVisibility
// 0x0018 (0x0018 - 0x0000)
struct TeamMemberPedestal_Nameplate_C_GetInputActionVisibility final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TeamMemberPedestal_Nameplate_C_GetInputActionVisibility) == 0x000008, "Wrong alignment on TeamMemberPedestal_Nameplate_C_GetInputActionVisibility");
static_assert(sizeof(TeamMemberPedestal_Nameplate_C_GetInputActionVisibility) == 0x000018, "Wrong size on TeamMemberPedestal_Nameplate_C_GetInputActionVisibility");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_GetInputActionVisibility, ReturnValue) == 0x000000, "Member 'TeamMemberPedestal_Nameplate_C_GetInputActionVisibility::ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_GetInputActionVisibility, Temp_bool_Variable) == 0x000001, "Member 'TeamMemberPedestal_Nameplate_C_GetInputActionVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_GetInputActionVisibility, Temp_byte_Variable) == 0x000002, "Member 'TeamMemberPedestal_Nameplate_C_GetInputActionVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_GetInputActionVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'TeamMemberPedestal_Nameplate_C_GetInputActionVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_GetInputActionVisibility, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'TeamMemberPedestal_Nameplate_C_GetInputActionVisibility::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_GetInputActionVisibility, CallFunc_IsUsingGamepad_ReturnValue) == 0x000010, "Member 'TeamMemberPedestal_Nameplate_C_GetInputActionVisibility::CallFunc_IsUsingGamepad_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_GetInputActionVisibility, CallFunc_BooleanAND_ReturnValue) == 0x000011, "Member 'TeamMemberPedestal_Nameplate_C_GetInputActionVisibility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_GetInputActionVisibility, K2Node_Select_Default) == 0x000012, "Member 'TeamMemberPedestal_Nameplate_C_GetInputActionVisibility::K2Node_Select_Default' has a wrong offset!");

// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.HandleInputMethodChanged
// 0x0001 (0x0001 - 0x0000)
struct TeamMemberPedestal_Nameplate_C_HandleInputMethodChanged final
{
public:
	ECommonInputType                              bNewInputType;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TeamMemberPedestal_Nameplate_C_HandleInputMethodChanged) == 0x000001, "Wrong alignment on TeamMemberPedestal_Nameplate_C_HandleInputMethodChanged");
static_assert(sizeof(TeamMemberPedestal_Nameplate_C_HandleInputMethodChanged) == 0x000001, "Wrong size on TeamMemberPedestal_Nameplate_C_HandleInputMethodChanged");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_HandleInputMethodChanged, bNewInputType) == 0x000000, "Member 'TeamMemberPedestal_Nameplate_C_HandleInputMethodChanged::bNewInputType' has a wrong offset!");

// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnCurrentSubGameChanged
// 0x0001 (0x0001 - 0x0000)
struct TeamMemberPedestal_Nameplate_C_OnCurrentSubGameChanged final
{
public:
	ESubGame                                      NewSubGame;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TeamMemberPedestal_Nameplate_C_OnCurrentSubGameChanged) == 0x000001, "Wrong alignment on TeamMemberPedestal_Nameplate_C_OnCurrentSubGameChanged");
static_assert(sizeof(TeamMemberPedestal_Nameplate_C_OnCurrentSubGameChanged) == 0x000001, "Wrong size on TeamMemberPedestal_Nameplate_C_OnCurrentSubGameChanged");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_OnCurrentSubGameChanged, NewSubGame) == 0x000000, "Member 'TeamMemberPedestal_Nameplate_C_OnCurrentSubGameChanged::NewSubGame' has a wrong offset!");

// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnFriendStatusUpdated
// 0x0001 (0x0001 - 0x0000)
struct TeamMemberPedestal_Nameplate_C_OnFriendStatusUpdated final
{
public:
	EFortFriendRequestStatus                      FriendRequestStatus;                               // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TeamMemberPedestal_Nameplate_C_OnFriendStatusUpdated) == 0x000001, "Wrong alignment on TeamMemberPedestal_Nameplate_C_OnFriendStatusUpdated");
static_assert(sizeof(TeamMemberPedestal_Nameplate_C_OnFriendStatusUpdated) == 0x000001, "Wrong size on TeamMemberPedestal_Nameplate_C_OnFriendStatusUpdated");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_OnFriendStatusUpdated, FriendRequestStatus) == 0x000000, "Member 'TeamMemberPedestal_Nameplate_C_OnFriendStatusUpdated::FriendRequestStatus' has a wrong offset!");

// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnFrontEndCameraChanged
// 0x0002 (0x0002 - 0x0000)
struct TeamMemberPedestal_Nameplate_C_OnFrontEndCameraChanged final
{
public:
	EFrontEndCamera                               NewCamera;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFrontEndCamera                               OldCamera;                                         // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TeamMemberPedestal_Nameplate_C_OnFrontEndCameraChanged) == 0x000001, "Wrong alignment on TeamMemberPedestal_Nameplate_C_OnFrontEndCameraChanged");
static_assert(sizeof(TeamMemberPedestal_Nameplate_C_OnFrontEndCameraChanged) == 0x000002, "Wrong size on TeamMemberPedestal_Nameplate_C_OnFrontEndCameraChanged");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_OnFrontEndCameraChanged, NewCamera) == 0x000000, "Member 'TeamMemberPedestal_Nameplate_C_OnFrontEndCameraChanged::NewCamera' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_OnFrontEndCameraChanged, OldCamera) == 0x000001, "Member 'TeamMemberPedestal_Nameplate_C_OnFrontEndCameraChanged::OldCamera' has a wrong offset!");

// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnPlayReadyAudio
// 0x0001 (0x0001 - 0x0000)
struct TeamMemberPedestal_Nameplate_C_OnPlayReadyAudio final
{
public:
	bool                                          bIsReadyForMatchmaking;                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TeamMemberPedestal_Nameplate_C_OnPlayReadyAudio) == 0x000001, "Wrong alignment on TeamMemberPedestal_Nameplate_C_OnPlayReadyAudio");
static_assert(sizeof(TeamMemberPedestal_Nameplate_C_OnPlayReadyAudio) == 0x000001, "Wrong size on TeamMemberPedestal_Nameplate_C_OnPlayReadyAudio");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_OnPlayReadyAudio, bIsReadyForMatchmaking) == 0x000000, "Member 'TeamMemberPedestal_Nameplate_C_OnPlayReadyAudio::bIsReadyForMatchmaking' has a wrong offset!");

// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnReadyStatusChanged
// 0x0001 (0x0001 - 0x0000)
struct TeamMemberPedestal_Nameplate_C_OnReadyStatusChanged final
{
public:
	EGameReadiness                                GameReadiness;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TeamMemberPedestal_Nameplate_C_OnReadyStatusChanged) == 0x000001, "Wrong alignment on TeamMemberPedestal_Nameplate_C_OnReadyStatusChanged");
static_assert(sizeof(TeamMemberPedestal_Nameplate_C_OnReadyStatusChanged) == 0x000001, "Wrong size on TeamMemberPedestal_Nameplate_C_OnReadyStatusChanged");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_OnReadyStatusChanged, GameReadiness) == 0x000000, "Member 'TeamMemberPedestal_Nameplate_C_OnReadyStatusChanged::GameReadiness' has a wrong offset!");

// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.UpdateInputActionVisibility
// 0x0018 (0x0018 - 0x0000)
struct TeamMemberPedestal_Nameplate_C_UpdateInputActionVisibility final
{
public:
	ESlateVisibility                              CallFunc_GetInputActionVisibility_ReturnValue;     // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTeamMemberPedestal_Nameplate_AddFriendButton_C* K2Node_DynamicCast_AsTeam_Member_Pedestal_Nameplate_Add_Friend_Button; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TeamMemberPedestal_Nameplate_C_UpdateInputActionVisibility) == 0x000008, "Wrong alignment on TeamMemberPedestal_Nameplate_C_UpdateInputActionVisibility");
static_assert(sizeof(TeamMemberPedestal_Nameplate_C_UpdateInputActionVisibility) == 0x000018, "Wrong size on TeamMemberPedestal_Nameplate_C_UpdateInputActionVisibility");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_UpdateInputActionVisibility, CallFunc_GetInputActionVisibility_ReturnValue) == 0x000000, "Member 'TeamMemberPedestal_Nameplate_C_UpdateInputActionVisibility::CallFunc_GetInputActionVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_UpdateInputActionVisibility, K2Node_DynamicCast_AsTeam_Member_Pedestal_Nameplate_Add_Friend_Button) == 0x000008, "Member 'TeamMemberPedestal_Nameplate_C_UpdateInputActionVisibility::K2Node_DynamicCast_AsTeam_Member_Pedestal_Nameplate_Add_Friend_Button' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_UpdateInputActionVisibility, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'TeamMemberPedestal_Nameplate_C_UpdateInputActionVisibility::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

