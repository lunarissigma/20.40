﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Fort_Entry_Music_Controller_BP

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.SetCanRetriggerNextMusicPack
// 0x0001 (0x0001 - 0x0000)
struct Fort_Entry_Music_Controller_BP_C_SetCanRetriggerNextMusicPack final
{
public:
	bool                                          bCanRetriggerNextMusicPack_0;                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fort_Entry_Music_Controller_BP_C_SetCanRetriggerNextMusicPack) == 0x000001, "Wrong alignment on Fort_Entry_Music_Controller_BP_C_SetCanRetriggerNextMusicPack");
static_assert(sizeof(Fort_Entry_Music_Controller_BP_C_SetCanRetriggerNextMusicPack) == 0x000001, "Wrong size on Fort_Entry_Music_Controller_BP_C_SetCanRetriggerNextMusicPack");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_SetCanRetriggerNextMusicPack, bCanRetriggerNextMusicPack_0) == 0x000000, "Member 'Fort_Entry_Music_Controller_BP_C_SetCanRetriggerNextMusicPack::bCanRetriggerNextMusicPack_0' has a wrong offset!");

// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.OnMusicPackChanged
// 0x0010 (0x0010 - 0x0000)
struct Fort_Entry_Music_Controller_BP_C_OnMusicPackChanged final
{
public:
	const class UAthenaMusicPackItemDefinition*   NewMusicPack;                                      // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartTimeOffset;                                   // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fort_Entry_Music_Controller_BP_C_OnMusicPackChanged) == 0x000008, "Wrong alignment on Fort_Entry_Music_Controller_BP_C_OnMusicPackChanged");
static_assert(sizeof(Fort_Entry_Music_Controller_BP_C_OnMusicPackChanged) == 0x000010, "Wrong size on Fort_Entry_Music_Controller_BP_C_OnMusicPackChanged");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_OnMusicPackChanged, NewMusicPack) == 0x000000, "Member 'Fort_Entry_Music_Controller_BP_C_OnMusicPackChanged::NewMusicPack' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_OnMusicPackChanged, StartTimeOffset) == 0x000008, "Member 'Fort_Entry_Music_Controller_BP_C_OnMusicPackChanged::StartTimeOffset' has a wrong offset!");

// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Lobby Music Override
// 0x0010 (0x0010 - 0x0000)
struct Fort_Entry_Music_Controller_BP_C_Lobby_Music_Override final
{
public:
	bool                                          Lobby_Music_Activate;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             New_Music;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fort_Entry_Music_Controller_BP_C_Lobby_Music_Override) == 0x000008, "Wrong alignment on Fort_Entry_Music_Controller_BP_C_Lobby_Music_Override");
static_assert(sizeof(Fort_Entry_Music_Controller_BP_C_Lobby_Music_Override) == 0x000010, "Wrong size on Fort_Entry_Music_Controller_BP_C_Lobby_Music_Override");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_Lobby_Music_Override, Lobby_Music_Activate) == 0x000000, "Member 'Fort_Entry_Music_Controller_BP_C_Lobby_Music_Override::Lobby_Music_Activate' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_Lobby_Music_Override, New_Music) == 0x000008, "Member 'Fort_Entry_Music_Controller_BP_C_Lobby_Music_Override::New_Music' has a wrong offset!");

// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ExecuteUbergraph_Fort_Entry_Music_Controller_BP
// 0x0138 (0x0138 - 0x0000)
struct Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             K2Node_CustomEvent_New_Music_1;                    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_StartTime;                      // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_Event_Tag;                      // 0x0014(0x0004)(NoDestructor, HasGetValueTypeHash)
	const class UAthenaMusicPackItemDefinition*   K2Node_CustomEvent_NewMusicPack;                   // 0x0018(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_StartTimeOffset;                // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGameplayTagValid_ReturnValue;           // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26[0x2];                                       // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             K2Node_DynamicCast_AsSound_Base;                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Lobby_Music_Activate;           // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             K2Node_CustomEvent_New_Music;                      // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bCanRetriggerNextMusicPack;     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMusicEventSubsystem*                   CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMusicEventSubsystem*                   CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  Temp_struct_Variable;                              // 0x0060(0x0020)()
	struct FGameplayTagContainer                  Temp_struct_Variable_1;                            // 0x0080(0x0020)()
	bool                                          Temp_bool_Variable;                                // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMusicContext*                      CallFunc_GetContext_ReturnValue;                   // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaMusicPackItemDefinition*         CallFunc_GetEquippedMusicPack_ReturnValue;         // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class UAthenaMusicPackItemDefinition* NewMusicPack, float StartTimeOffset)> K2Node_CreateDelegate_OutputDelegate; // 0x00B8(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Temp_struct_Variable_2;                            // 0x00C4(0x0004)(NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  K2Node_Select_Default;                             // 0x00D0(0x0020)()
	struct FGameplayTag                           K2Node_Select_Default_1;                           // 0x00F0(0x0004)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_AddEvent_ReturnValue;                     // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAudioAnalysisSubsystem*            CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMusicContext*                      CallFunc_GetContext_ReturnValue_1;                 // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMusicContext*                      CallFunc_GetContext_ReturnValue_2;                 // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDefaultMusicEquipped_ReturnValue;       // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaMusicPackItemDefinition*         CallFunc_GetEquippedMusicPack_ReturnValue_1;       // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMusicContext*                      CallFunc_GetContext_ReturnValue_3;                 // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP) == 0x000008, "Wrong alignment on Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP");
static_assert(sizeof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP) == 0x000138, "Wrong size on Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, EntryPoint) == 0x000000, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, K2Node_CustomEvent_New_Music_1) == 0x000008, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::K2Node_CustomEvent_New_Music_1' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, K2Node_CustomEvent_StartTime) == 0x000010, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::K2Node_CustomEvent_StartTime' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, K2Node_CustomEvent_Event_Tag) == 0x000014, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::K2Node_CustomEvent_Event_Tag' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, K2Node_CustomEvent_NewMusicPack) == 0x000018, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::K2Node_CustomEvent_NewMusicPack' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, K2Node_CustomEvent_StartTimeOffset) == 0x000020, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::K2Node_CustomEvent_StartTimeOffset' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_IsGameplayTagValid_ReturnValue) == 0x000024, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_IsGameplayTagValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_IsValid_ReturnValue) == 0x000025, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000028, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, K2Node_DynamicCast_AsSound_Base) == 0x000030, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::K2Node_DynamicCast_AsSound_Base' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, K2Node_CustomEvent_Lobby_Music_Activate) == 0x000039, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::K2Node_CustomEvent_Lobby_Music_Activate' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, K2Node_CustomEvent_New_Music) == 0x000040, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::K2Node_CustomEvent_New_Music' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, K2Node_CustomEvent_bCanRetriggerNextMusicPack) == 0x000048, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::K2Node_CustomEvent_bCanRetriggerNextMusicPack' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000050, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_GetGameInstanceSubsystem_ReturnValue_1) == 0x000058, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_GetGameInstanceSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, Temp_struct_Variable) == 0x000060, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, Temp_struct_Variable_1) == 0x000080, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, Temp_bool_Variable) == 0x0000A0, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_GetContext_ReturnValue) == 0x0000A8, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_GetEquippedMusicPack_ReturnValue) == 0x0000B0, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_GetEquippedMusicPack_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, K2Node_CreateDelegate_OutputDelegate) == 0x0000B8, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, Temp_struct_Variable_2) == 0x0000C4, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, Temp_bool_Variable_1) == 0x0000C8, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, K2Node_Select_Default) == 0x0000D0, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, K2Node_Select_Default_1) == 0x0000F0, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_AddEvent_ReturnValue) == 0x0000F8, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_AddEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000100, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_GetContext_ReturnValue_1) == 0x000108, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_GetContext_ReturnValue_2) == 0x000110, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_GetContext_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_IsDefaultMusicEquipped_ReturnValue) == 0x000118, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_IsDefaultMusicEquipped_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_GetEquippedMusicPack_ReturnValue_1) == 0x000120, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_GetEquippedMusicPack_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_IsValid_ReturnValue_1) == 0x000128, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP, CallFunc_GetContext_ReturnValue_3) == 0x000130, "Member 'Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP::CallFunc_GetContext_ReturnValue_3' has a wrong offset!");

// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Change Music
// 0x0010 (0x0010 - 0x0000)
struct Fort_Entry_Music_Controller_BP_C_Change_Music final
{
public:
	class USoundBase*                             New_Music;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartTime;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Event_Tag;                                         // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fort_Entry_Music_Controller_BP_C_Change_Music) == 0x000008, "Wrong alignment on Fort_Entry_Music_Controller_BP_C_Change_Music");
static_assert(sizeof(Fort_Entry_Music_Controller_BP_C_Change_Music) == 0x000010, "Wrong size on Fort_Entry_Music_Controller_BP_C_Change_Music");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_Change_Music, New_Music) == 0x000000, "Member 'Fort_Entry_Music_Controller_BP_C_Change_Music::New_Music' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_Change_Music, StartTime) == 0x000008, "Member 'Fort_Entry_Music_Controller_BP_C_Change_Music::StartTime' has a wrong offset!");
static_assert(offsetof(Fort_Entry_Music_Controller_BP_C_Change_Music, Event_Tag) == 0x00000C, "Member 'Fort_Entry_Music_Controller_BP_C_Change_Music::Event_Tag' has a wrong offset!");

}

