﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReferAFriendActionMenu

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function ReferAFriendActionMenu.ReferAFriendActionMenu_C.ExecuteUbergraph_ReferAFriendActionMenu
// 0x0010 (0x0010 - 0x0000)
struct ReferAFriendActionMenu_C_ExecuteUbergraph_ReferAFriendActionMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EReferFriendOrigin                            K2Node_Event_RequestOrigin;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ReferAFriendActionMenu_C_ExecuteUbergraph_ReferAFriendActionMenu) == 0x000008, "Wrong alignment on ReferAFriendActionMenu_C_ExecuteUbergraph_ReferAFriendActionMenu");
static_assert(sizeof(ReferAFriendActionMenu_C_ExecuteUbergraph_ReferAFriendActionMenu) == 0x000010, "Wrong size on ReferAFriendActionMenu_C_ExecuteUbergraph_ReferAFriendActionMenu");
static_assert(offsetof(ReferAFriendActionMenu_C_ExecuteUbergraph_ReferAFriendActionMenu, EntryPoint) == 0x000000, "Member 'ReferAFriendActionMenu_C_ExecuteUbergraph_ReferAFriendActionMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(ReferAFriendActionMenu_C_ExecuteUbergraph_ReferAFriendActionMenu, K2Node_Event_RequestOrigin) == 0x000004, "Member 'ReferAFriendActionMenu_C_ExecuteUbergraph_ReferAFriendActionMenu::K2Node_Event_RequestOrigin' has a wrong offset!");
static_assert(offsetof(ReferAFriendActionMenu_C_ExecuteUbergraph_ReferAFriendActionMenu, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'ReferAFriendActionMenu_C_ExecuteUbergraph_ReferAFriendActionMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function ReferAFriendActionMenu.ReferAFriendActionMenu_C.OnKeyUp
// 0x02C0 (0x02C0 - 0x0000)
struct ReferAFriendActionMenu_C_OnKeyUp final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0040(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0078(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0130(0x00B8)()
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x01E8(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_201[0x7];                                      // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0208(0x00B8)()
};
static_assert(alignof(ReferAFriendActionMenu_C_OnKeyUp) == 0x000008, "Wrong alignment on ReferAFriendActionMenu_C_OnKeyUp");
static_assert(sizeof(ReferAFriendActionMenu_C_OnKeyUp) == 0x0002C0, "Wrong size on ReferAFriendActionMenu_C_OnKeyUp");
static_assert(offsetof(ReferAFriendActionMenu_C_OnKeyUp, MyGeometry) == 0x000000, "Member 'ReferAFriendActionMenu_C_OnKeyUp::MyGeometry' has a wrong offset!");
static_assert(offsetof(ReferAFriendActionMenu_C_OnKeyUp, InKeyEvent) == 0x000040, "Member 'ReferAFriendActionMenu_C_OnKeyUp::InKeyEvent' has a wrong offset!");
static_assert(offsetof(ReferAFriendActionMenu_C_OnKeyUp, ReturnValue) == 0x000078, "Member 'ReferAFriendActionMenu_C_OnKeyUp::ReturnValue' has a wrong offset!");
static_assert(offsetof(ReferAFriendActionMenu_C_OnKeyUp, CallFunc_Unhandled_ReturnValue) == 0x000130, "Member 'ReferAFriendActionMenu_C_OnKeyUp::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReferAFriendActionMenu_C_OnKeyUp, CallFunc_GetKey_ReturnValue) == 0x0001E8, "Member 'ReferAFriendActionMenu_C_OnKeyUp::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReferAFriendActionMenu_C_OnKeyUp, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000200, "Member 'ReferAFriendActionMenu_C_OnKeyUp::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReferAFriendActionMenu_C_OnKeyUp, CallFunc_Handled_ReturnValue) == 0x000208, "Member 'ReferAFriendActionMenu_C_OnKeyUp::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function ReferAFriendActionMenu.ReferAFriendActionMenu_C.OnRequestOriginChanged
// 0x0001 (0x0001 - 0x0000)
struct ReferAFriendActionMenu_C_OnRequestOriginChanged final
{
public:
	EReferFriendOrigin                            RequestOrigin;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ReferAFriendActionMenu_C_OnRequestOriginChanged) == 0x000001, "Wrong alignment on ReferAFriendActionMenu_C_OnRequestOriginChanged");
static_assert(sizeof(ReferAFriendActionMenu_C_OnRequestOriginChanged) == 0x000001, "Wrong size on ReferAFriendActionMenu_C_OnRequestOriginChanged");
static_assert(offsetof(ReferAFriendActionMenu_C_OnRequestOriginChanged, RequestOrigin) == 0x000000, "Member 'ReferAFriendActionMenu_C_OnRequestOriginChanged::RequestOrigin' has a wrong offset!");

// Function ReferAFriendActionMenu.ReferAFriendActionMenu_C.Set QRt Image
// 0x0002 (0x0002 - 0x0000)
struct ReferAFriendActionMenu_C_Set_QRt_Image final
{
public:
	EReferFriendOrigin                            Origin;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ReferAFriendActionMenu_C_Set_QRt_Image) == 0x000001, "Wrong alignment on ReferAFriendActionMenu_C_Set_QRt_Image");
static_assert(sizeof(ReferAFriendActionMenu_C_Set_QRt_Image) == 0x000002, "Wrong size on ReferAFriendActionMenu_C_Set_QRt_Image");
static_assert(offsetof(ReferAFriendActionMenu_C_Set_QRt_Image, Origin) == 0x000000, "Member 'ReferAFriendActionMenu_C_Set_QRt_Image::Origin' has a wrong offset!");
static_assert(offsetof(ReferAFriendActionMenu_C_Set_QRt_Image, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'ReferAFriendActionMenu_C_Set_QRt_Image::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

