﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SidebarPanelKoala

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function SidebarPanelKoala.SidebarPanelKoala_C.ExecuteUbergraph_SidebarPanelKoala
// 0x00E8 (0x00E8 - 0x0000)
struct SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              K2Node_CustomEvent_bNewInputType;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;            // 0x0008(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConsoleVariableBoolValue_ReturnValue;  // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPlayerControllerID_ReturnValue;        // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bConnected;                           // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerNameSafe_ReturnValue;            // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0058(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00A8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00B8(0x0018)()
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue; // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala) == 0x000008, "Wrong alignment on SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala");
static_assert(sizeof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala) == 0x0000E8, "Wrong size on SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, EntryPoint) == 0x000000, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, K2Node_CustomEvent_bNewInputType) == 0x000004, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::K2Node_CustomEvent_bNewInputType' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, CallFunc_GetConsoleVariableBoolValue_ReturnValue) == 0x000014, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::CallFunc_GetConsoleVariableBoolValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, CallFunc_GetOwningPlayer_ReturnValue) == 0x000018, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, CallFunc_GetPlayerControllerID_ReturnValue) == 0x000020, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::CallFunc_GetPlayerControllerID_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, K2Node_Event_bConnected) == 0x000024, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::K2Node_Event_bConnected' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, CallFunc_GetPlayerController_ReturnValue) == 0x000028, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, CallFunc_GetPlayerNameSafe_ReturnValue) == 0x000030, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::CallFunc_GetPlayerNameSafe_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, K2Node_MakeStruct_FormatArgumentData) == 0x000058, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, K2Node_MakeArray_Array) == 0x0000A8, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, CallFunc_Format_ReturnValue) == 0x0000B8, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x0000D0, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue) == 0x0000D8, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, CallFunc_GetCurrentInputType_ReturnValue) == 0x0000E0, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");

// Function SidebarPanelKoala.SidebarPanelKoala_C.OnConnectionChanged
// 0x0001 (0x0001 - 0x0000)
struct SidebarPanelKoala_C_OnConnectionChanged final
{
public:
	bool                                          bConnected;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SidebarPanelKoala_C_OnConnectionChanged) == 0x000001, "Wrong alignment on SidebarPanelKoala_C_OnConnectionChanged");
static_assert(sizeof(SidebarPanelKoala_C_OnConnectionChanged) == 0x000001, "Wrong size on SidebarPanelKoala_C_OnConnectionChanged");
static_assert(offsetof(SidebarPanelKoala_C_OnConnectionChanged, bConnected) == 0x000000, "Member 'SidebarPanelKoala_C_OnConnectionChanged::bConnected' has a wrong offset!");

// Function SidebarPanelKoala.SidebarPanelKoala_C.OnInputMethodChanged
// 0x0001 (0x0001 - 0x0000)
struct SidebarPanelKoala_C_OnInputMethodChanged final
{
public:
	ECommonInputType                              bNewInputType;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SidebarPanelKoala_C_OnInputMethodChanged) == 0x000001, "Wrong alignment on SidebarPanelKoala_C_OnInputMethodChanged");
static_assert(sizeof(SidebarPanelKoala_C_OnInputMethodChanged) == 0x000001, "Wrong size on SidebarPanelKoala_C_OnInputMethodChanged");
static_assert(offsetof(SidebarPanelKoala_C_OnInputMethodChanged, bNewInputType) == 0x000000, "Member 'SidebarPanelKoala_C_OnInputMethodChanged::bNewInputType' has a wrong offset!");

// Function SidebarPanelKoala.SidebarPanelKoala_C.UpdateUsageDescription
// 0x0050 (0x0050 - 0x0000)
struct SidebarPanelKoala_C_UpdateUsageDescription final
{
public:
	ECommonInputType                              Index_0;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0020(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0038(0x0018)()
};
static_assert(alignof(SidebarPanelKoala_C_UpdateUsageDescription) == 0x000008, "Wrong alignment on SidebarPanelKoala_C_UpdateUsageDescription");
static_assert(sizeof(SidebarPanelKoala_C_UpdateUsageDescription) == 0x000050, "Wrong size on SidebarPanelKoala_C_UpdateUsageDescription");
static_assert(offsetof(SidebarPanelKoala_C_UpdateUsageDescription, Index_0) == 0x000000, "Member 'SidebarPanelKoala_C_UpdateUsageDescription::Index_0' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_UpdateUsageDescription, Temp_byte_Variable) == 0x000001, "Member 'SidebarPanelKoala_C_UpdateUsageDescription::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_UpdateUsageDescription, Temp_text_Variable) == 0x000008, "Member 'SidebarPanelKoala_C_UpdateUsageDescription::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_UpdateUsageDescription, Temp_text_Variable_1) == 0x000020, "Member 'SidebarPanelKoala_C_UpdateUsageDescription::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_UpdateUsageDescription, K2Node_Select_Default) == 0x000038, "Member 'SidebarPanelKoala_C_UpdateUsageDescription::K2Node_Select_Default' has a wrong offset!");

}

