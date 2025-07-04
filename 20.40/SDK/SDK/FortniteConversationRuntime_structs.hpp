﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortniteConversationRuntime

#include "Basic.hpp"


namespace SDK
{

// Enum FortniteConversationRuntime.EInteractionRange
// NumValues: 0x0003
enum class EInteractionRange : uint8
{
	Preview                                  = 0,
	Interaction                              = 1,
	EInteractionRange_MAX                    = 2,
};

// ScriptStruct FortniteConversationRuntime.FortConversationConditionalMessage
// 0x0020 (0x0020 - 0x0000)
struct FFortConversationConditionalMessage final
{
public:
	class UFortConversationContextCondition*      Condition;                                         // 0x0000(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   Message;                                           // 0x0008(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};
static_assert(alignof(FFortConversationConditionalMessage) == 0x000008, "Wrong alignment on FFortConversationConditionalMessage");
static_assert(sizeof(FFortConversationConditionalMessage) == 0x000020, "Wrong size on FFortConversationConditionalMessage");
static_assert(offsetof(FFortConversationConditionalMessage, Condition) == 0x000000, "Member 'FFortConversationConditionalMessage::Condition' has a wrong offset!");
static_assert(offsetof(FFortConversationConditionalMessage, Message) == 0x000008, "Member 'FFortConversationConditionalMessage::Message' has a wrong offset!");

// ScriptStruct FortniteConversationRuntime.FortConversationNodeConditionalMessages
// 0x0010 (0x0010 - 0x0000)
struct FFortConversationNodeConditionalMessages final
{
public:
	TArray<struct FFortConversationConditionalMessage> Messages;                                     // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(FFortConversationNodeConditionalMessages) == 0x000008, "Wrong alignment on FFortConversationNodeConditionalMessages");
static_assert(sizeof(FFortConversationNodeConditionalMessages) == 0x000010, "Wrong size on FFortConversationNodeConditionalMessages");
static_assert(offsetof(FFortConversationNodeConditionalMessages, Messages) == 0x000000, "Member 'FFortConversationNodeConditionalMessages::Messages' has a wrong offset!");

}

