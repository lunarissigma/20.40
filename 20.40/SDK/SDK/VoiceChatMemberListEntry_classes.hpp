﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VoiceChatMemberListEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass VoiceChatMemberListEntry.VoiceChatMemberListEntry_C
// 0x0050 (0x10E0 - 0x1090)
class UVoiceChatMemberListEntry_C final : public UFortVoiceChatMemberListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1090(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Selected;                                          // 0x1098(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hovered;                                           // 0x10A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Arrow;                                             // 0x10A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;                   // 0x10B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           EncourageEpicFriend_IdleColor;                     // 0x10B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           EncourageEpicFriend_HoveredColor;                  // 0x10C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_VoiceChatMemberListEntry(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VoiceChatMemberListEntry_C">();
	}
	static class UVoiceChatMemberListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVoiceChatMemberListEntry_C>();
	}
};
static_assert(alignof(UVoiceChatMemberListEntry_C) == 0x000010, "Wrong alignment on UVoiceChatMemberListEntry_C");
static_assert(sizeof(UVoiceChatMemberListEntry_C) == 0x0010E0, "Wrong size on UVoiceChatMemberListEntry_C");
static_assert(offsetof(UVoiceChatMemberListEntry_C, UberGraphFrame) == 0x001090, "Member 'UVoiceChatMemberListEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UVoiceChatMemberListEntry_C, Selected) == 0x001098, "Member 'UVoiceChatMemberListEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(UVoiceChatMemberListEntry_C, Hovered) == 0x0010A0, "Member 'UVoiceChatMemberListEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(UVoiceChatMemberListEntry_C, Arrow) == 0x0010A8, "Member 'UVoiceChatMemberListEntry_C::Arrow' has a wrong offset!");
static_assert(offsetof(UVoiceChatMemberListEntry_C, EmptyButtonToEatOneMouseUpEvent) == 0x0010B0, "Member 'UVoiceChatMemberListEntry_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(UVoiceChatMemberListEntry_C, EncourageEpicFriend_IdleColor) == 0x0010B8, "Member 'UVoiceChatMemberListEntry_C::EncourageEpicFriend_IdleColor' has a wrong offset!");
static_assert(offsetof(UVoiceChatMemberListEntry_C, EncourageEpicFriend_HoveredColor) == 0x0010C8, "Member 'UVoiceChatMemberListEntry_C::EncourageEpicFriend_HoveredColor' has a wrong offset!");

}

