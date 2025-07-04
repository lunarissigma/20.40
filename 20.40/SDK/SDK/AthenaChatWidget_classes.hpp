﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaChatWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaChatWidget.AthenaChatWidget_C
// 0x0050 (0x0428 - 0x03D8)
class UAthenaChatWidget_C final : public UAthenaActivatableChatWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FDataTableRowHandle                    CloseUserListAction;                               // 0x03E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    OpenUserListAction;                                // 0x03F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    CurrentUserListAction;                             // 0x0400(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          bEnteringChat;                                     // 0x0410(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_411[0x7];                                      // 0x0411(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(bool EnteredChat)> OnEnteredChat;                                  // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_AthenaChatWidget(int32 EntryPoint);
	void FocusChat(bool bFocus);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaChatWidget_C">();
	}
	static class UAthenaChatWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaChatWidget_C>();
	}
};
static_assert(alignof(UAthenaChatWidget_C) == 0x000008, "Wrong alignment on UAthenaChatWidget_C");
static_assert(sizeof(UAthenaChatWidget_C) == 0x000428, "Wrong size on UAthenaChatWidget_C");
static_assert(offsetof(UAthenaChatWidget_C, UberGraphFrame) == 0x0003D8, "Member 'UAthenaChatWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaChatWidget_C, CloseUserListAction) == 0x0003E0, "Member 'UAthenaChatWidget_C::CloseUserListAction' has a wrong offset!");
static_assert(offsetof(UAthenaChatWidget_C, OpenUserListAction) == 0x0003F0, "Member 'UAthenaChatWidget_C::OpenUserListAction' has a wrong offset!");
static_assert(offsetof(UAthenaChatWidget_C, CurrentUserListAction) == 0x000400, "Member 'UAthenaChatWidget_C::CurrentUserListAction' has a wrong offset!");
static_assert(offsetof(UAthenaChatWidget_C, bEnteringChat) == 0x000410, "Member 'UAthenaChatWidget_C::bEnteringChat' has a wrong offset!");
static_assert(offsetof(UAthenaChatWidget_C, OnEnteredChat) == 0x000418, "Member 'UAthenaChatWidget_C::OnEnteredChat' has a wrong offset!");

}

