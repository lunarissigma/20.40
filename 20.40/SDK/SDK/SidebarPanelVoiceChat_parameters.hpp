﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SidebarPanelVoiceChat

#include "Basic.hpp"


namespace SDK::Params
{

// Function SidebarPanelVoiceChat.SidebarPanelVoiceChat_C.ExecuteUbergraph_SidebarPanelVoiceChat
// 0x0040 (0x0040 - 0x0000)
struct SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            K2Node_CustomEvent_UserWidget;                     // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UUserWidget* UserWidget)> K2Node_CreateDelegate_OutputDelegate;             // 0x0010(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_CreateWidgetAsync*     CallFunc_CreateWidgetAsync_ReturnValue;            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat) == 0x000008, "Wrong alignment on SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat");
static_assert(sizeof(SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat) == 0x000040, "Wrong size on SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat");
static_assert(offsetof(SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat, EntryPoint) == 0x000000, "Member 'SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat, K2Node_CustomEvent_UserWidget) == 0x000008, "Member 'SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat::K2Node_CustomEvent_UserWidget' has a wrong offset!");
static_assert(offsetof(SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat, Temp_object_Variable) == 0x000020, "Member 'SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat, CallFunc_GetOwningPlayer_ReturnValue) == 0x000028, "Member 'SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat, CallFunc_CreateWidgetAsync_ReturnValue) == 0x000030, "Member 'SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat::CallFunc_CreateWidgetAsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function SidebarPanelVoiceChat.SidebarPanelVoiceChat_C.OnComplete_91016BC9485591D6BC97D8B812128DF4
// 0x0008 (0x0008 - 0x0000)
struct SidebarPanelVoiceChat_C_OnComplete_91016BC9485591D6BC97D8B812128DF4 final
{
public:
	class UUserWidget*                            UserWidget;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SidebarPanelVoiceChat_C_OnComplete_91016BC9485591D6BC97D8B812128DF4) == 0x000008, "Wrong alignment on SidebarPanelVoiceChat_C_OnComplete_91016BC9485591D6BC97D8B812128DF4");
static_assert(sizeof(SidebarPanelVoiceChat_C_OnComplete_91016BC9485591D6BC97D8B812128DF4) == 0x000008, "Wrong size on SidebarPanelVoiceChat_C_OnComplete_91016BC9485591D6BC97D8B812128DF4");
static_assert(offsetof(SidebarPanelVoiceChat_C_OnComplete_91016BC9485591D6BC97D8B812128DF4, UserWidget) == 0x000000, "Member 'SidebarPanelVoiceChat_C_OnComplete_91016BC9485591D6BC97D8B812128DF4::UserWidget' has a wrong offset!");

}

