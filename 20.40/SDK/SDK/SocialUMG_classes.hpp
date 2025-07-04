﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialUMG

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CommonUILegacy_classes.hpp"
#include "UMG_classes.hpp"
#include "SocialUMG_structs.hpp"
#include "Party_structs.hpp"
#include "Party_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// Class SocialUMG.SocialChatContainer
// 0x0058 (0x02D0 - 0x0278)
class USocialChatContainer : public UUserWidget
{
public:
	class USocialChatManager*                     ChatManager;                                       // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class USocialChatChannel*>             JoinedChannels;                                    // 0x0280(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class USocialChatChannel*                     ActiveChannel;                                     // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonGroupLegacy*               TabButtonGroup;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2A0[0x8];                                      // 0x02A0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class USocialChatMessageList*                 ChatList_Messages;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USocialChatEditableText*                ChatEditableText_MessageEntry;                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonLegacy*                    Button_SendMessage;                                // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                       EntryBox_JoinedChannels;                           // 0x02C0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScrollBox*                             ScrollBox_Channels;                                // 0x02C8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void DynamicHandleMessageTextCommitted(const class FText& MessageText, ETextCommit CommitMethod);
	void FocusEditableText();
	void HandleLeftTabPressed();
	void HandleRightTabPressed();
	void OnChatOpenChanged(bool bShouldBeOpen);
	void SendCurrentMessage();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatContainer">();
	}
	static class USocialChatContainer* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatContainer>();
	}
};
static_assert(alignof(USocialChatContainer) == 0x000008, "Wrong alignment on USocialChatContainer");
static_assert(sizeof(USocialChatContainer) == 0x0002D0, "Wrong size on USocialChatContainer");
static_assert(offsetof(USocialChatContainer, ChatManager) == 0x000278, "Member 'USocialChatContainer::ChatManager' has a wrong offset!");
static_assert(offsetof(USocialChatContainer, JoinedChannels) == 0x000280, "Member 'USocialChatContainer::JoinedChannels' has a wrong offset!");
static_assert(offsetof(USocialChatContainer, ActiveChannel) == 0x000290, "Member 'USocialChatContainer::ActiveChannel' has a wrong offset!");
static_assert(offsetof(USocialChatContainer, TabButtonGroup) == 0x000298, "Member 'USocialChatContainer::TabButtonGroup' has a wrong offset!");
static_assert(offsetof(USocialChatContainer, ChatList_Messages) == 0x0002A8, "Member 'USocialChatContainer::ChatList_Messages' has a wrong offset!");
static_assert(offsetof(USocialChatContainer, ChatEditableText_MessageEntry) == 0x0002B0, "Member 'USocialChatContainer::ChatEditableText_MessageEntry' has a wrong offset!");
static_assert(offsetof(USocialChatContainer, Button_SendMessage) == 0x0002B8, "Member 'USocialChatContainer::Button_SendMessage' has a wrong offset!");
static_assert(offsetof(USocialChatContainer, EntryBox_JoinedChannels) == 0x0002C0, "Member 'USocialChatContainer::EntryBox_JoinedChannels' has a wrong offset!");
static_assert(offsetof(USocialChatContainer, ScrollBox_Channels) == 0x0002C8, "Member 'USocialChatContainer::ScrollBox_Channels' has a wrong offset!");

// Class SocialUMG.SocialChatChannelTab
// 0x0010 (0x1000 - 0x0FF0)
class USocialChatChannelTab : public UCommonButtonLegacy
{
public:
	class USocialChatChannel*                     ChatChannel;                                       // 0x0FE8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                       CommonText_ChannelName;                            // 0x0FF0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_FF8[0x8];                                      // 0x0FF8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatChannelTab">();
	}
	static class USocialChatChannelTab* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatChannelTab>();
	}
};
static_assert(alignof(USocialChatChannelTab) == 0x000010, "Wrong alignment on USocialChatChannelTab");
static_assert(sizeof(USocialChatChannelTab) == 0x001000, "Wrong size on USocialChatChannelTab");
static_assert(offsetof(USocialChatChannelTab, ChatChannel) == 0x000FE8, "Member 'USocialChatChannelTab::ChatChannel' has a wrong offset!");
static_assert(offsetof(USocialChatChannelTab, CommonText_ChannelName) == 0x000FF0, "Member 'USocialChatChannelTab::CommonText_ChannelName' has a wrong offset!");

// Class SocialUMG.SocialChatEditableText
// 0x0628 (0x0740 - 0x0118)
class USocialChatEditableText final : public UWidget
{
public:
	uint8                                         Pad_118[0x28];                                     // 0x0118(0x0028)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEditableTextStyle                     EditableTextStyle;                                 // 0x0140(0x02B0)(Edit, NativeAccessSpecifierPrivate)
	struct FTextBlockStyle                        AutoCompleteStyle;                                 // 0x03F0(0x0310)(Edit, NativeAccessSpecifierPrivate)
	uint8                                         Pad_700[0x40];                                     // 0x0700(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatEditableText">();
	}
	static class USocialChatEditableText* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatEditableText>();
	}
};
static_assert(alignof(USocialChatEditableText) == 0x000010, "Wrong alignment on USocialChatEditableText");
static_assert(sizeof(USocialChatEditableText) == 0x000740, "Wrong size on USocialChatEditableText");
static_assert(offsetof(USocialChatEditableText, EditableTextStyle) == 0x000140, "Member 'USocialChatEditableText::EditableTextStyle' has a wrong offset!");
static_assert(offsetof(USocialChatEditableText, AutoCompleteStyle) == 0x0003F0, "Member 'USocialChatEditableText::AutoCompleteStyle' has a wrong offset!");

// Class SocialUMG.SocialChatMessageEntry
// 0x0148 (0x03C0 - 0x0278)
class USocialChatMessageEntry : public UUserWidget
{
public:
	uint8                                         Pad_278[0x18];                                     // 0x0278(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSocialChatMessageEntryStyle           DefaultStyle;                                      // 0x0290(0x0120)(Edit, Protected, NativeAccessSpecifierProtected)
	class UCommonRichTextBlock*                   RichText_Message;                                  // 0x03B0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UButton*                                Button_MessageButton;                              // 0x03B8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void OnMessageSet();

	bool CanInteract() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatMessageEntry">();
	}
	static class USocialChatMessageEntry* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatMessageEntry>();
	}
};
static_assert(alignof(USocialChatMessageEntry) == 0x000008, "Wrong alignment on USocialChatMessageEntry");
static_assert(sizeof(USocialChatMessageEntry) == 0x0003C0, "Wrong size on USocialChatMessageEntry");
static_assert(offsetof(USocialChatMessageEntry, DefaultStyle) == 0x000290, "Member 'USocialChatMessageEntry::DefaultStyle' has a wrong offset!");
static_assert(offsetof(USocialChatMessageEntry, RichText_Message) == 0x0003B0, "Member 'USocialChatMessageEntry::RichText_Message' has a wrong offset!");
static_assert(offsetof(USocialChatMessageEntry, Button_MessageButton) == 0x0003B8, "Member 'USocialChatMessageEntry::Button_MessageButton' has a wrong offset!");

// Class SocialUMG.SocialChatMessageList
// 0x0108 (0x0338 - 0x0230)
class USocialChatMessageList final : public UListViewBase
{
public:
	uint8                                         Pad_230[0xD8];                                     // 0x0230(0x00D8)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bIsFocusable;                                      // 0x0308(0x0001)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_309[0x7];                                      // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USocialChatChannel*                     ActiveChannel;                                     // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_318[0x20];                                     // 0x0318(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatMessageList">();
	}
	static class USocialChatMessageList* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatMessageList>();
	}
};
static_assert(alignof(USocialChatMessageList) == 0x000008, "Wrong alignment on USocialChatMessageList");
static_assert(sizeof(USocialChatMessageList) == 0x000338, "Wrong size on USocialChatMessageList");
static_assert(offsetof(USocialChatMessageList, bIsFocusable) == 0x000308, "Member 'USocialChatMessageList::bIsFocusable' has a wrong offset!");
static_assert(offsetof(USocialChatMessageList, ActiveChannel) == 0x000310, "Member 'USocialChatMessageList::ActiveChannel' has a wrong offset!");

// Class SocialUMG.SocialGroupListEntry
// 0x0020 (0x1010 - 0x0FF0)
class USocialGroupListEntry final : public UCommonButtonLegacy
{
public:
	uint8                                         Pad_FE8[0x8];                                      // 0x0FE8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class USocialActionMenu>          ActionMenuClass;                                   // 0x0FF0(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialGroupChannel*                    SocialGroup;                                       // 0x0FF8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                             Text_GroupName;                                    // 0x1000(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMenuAnchor*                            MenuAnchor_Actions;                                // 0x1008(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	class UUserWidget* HandleGetMenuContent();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialGroupListEntry">();
	}
	static class USocialGroupListEntry* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialGroupListEntry>();
	}
};
static_assert(alignof(USocialGroupListEntry) == 0x000010, "Wrong alignment on USocialGroupListEntry");
static_assert(sizeof(USocialGroupListEntry) == 0x001010, "Wrong size on USocialGroupListEntry");
static_assert(offsetof(USocialGroupListEntry, ActionMenuClass) == 0x000FF0, "Member 'USocialGroupListEntry::ActionMenuClass' has a wrong offset!");
static_assert(offsetof(USocialGroupListEntry, SocialGroup) == 0x000FF8, "Member 'USocialGroupListEntry::SocialGroup' has a wrong offset!");
static_assert(offsetof(USocialGroupListEntry, Text_GroupName) == 0x001000, "Member 'USocialGroupListEntry::Text_GroupName' has a wrong offset!");
static_assert(offsetof(USocialGroupListEntry, MenuAnchor_Actions) == 0x001008, "Member 'USocialGroupListEntry::MenuAnchor_Actions' has a wrong offset!");

// Class SocialUMG.SocialGroupTreeView
// 0x0020 (0x0BD0 - 0x0BB0)
class USocialGroupTreeView final : public UTreeView
{
public:
	TSubclassOf<class USocialGroupListEntry>      GroupEntryWidgetClass;                             // 0x0BA8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class USocialListUserEntryBase>   UserEntryWidgetClass;                              // 0x0BB0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class USocialInteractionMenu>     ActionMenuClass;                                   // 0x0BB8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USocialInteractionMenu*                 ActionMenu;                                        // 0x0BC0(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_BC8[0x8];                                      // 0x0BC8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialGroupTreeView">();
	}
	static class USocialGroupTreeView* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialGroupTreeView>();
	}
};
static_assert(alignof(USocialGroupTreeView) == 0x000010, "Wrong alignment on USocialGroupTreeView");
static_assert(sizeof(USocialGroupTreeView) == 0x000BD0, "Wrong size on USocialGroupTreeView");
static_assert(offsetof(USocialGroupTreeView, GroupEntryWidgetClass) == 0x000BA8, "Member 'USocialGroupTreeView::GroupEntryWidgetClass' has a wrong offset!");
static_assert(offsetof(USocialGroupTreeView, UserEntryWidgetClass) == 0x000BB0, "Member 'USocialGroupTreeView::UserEntryWidgetClass' has a wrong offset!");
static_assert(offsetof(USocialGroupTreeView, ActionMenuClass) == 0x000BB8, "Member 'USocialGroupTreeView::ActionMenuClass' has a wrong offset!");
static_assert(offsetof(USocialGroupTreeView, ActionMenu) == 0x000BC0, "Member 'USocialGroupTreeView::ActionMenu' has a wrong offset!");

// Class SocialUMG.SocialInteractionButton
// 0x00B0 (0x10A0 - 0x0FF0)
#pragma pack(push, 0x1)
class alignas(0x10) USocialInteractionButton : public UCommonButtonLegacy
{
public:
	struct FLinearColor                           DefaultIndicatorColor;                             // 0x0FE8(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                           AlertingIndicatorColor;                            // 0x0FF8(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1008[0x80];                                    // 0x1008(0x0080)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonTextBlock*                       Text_InteractionName;                              // 0x1088(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBorder*                                Border_InteractionIndicator;                       // 0x1090(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void OnInteractionSet();

	class FName GetInteractionName() const;
	bool IsPlatformOnlyFriend() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialInteractionButton">();
	}
	static class USocialInteractionButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialInteractionButton>();
	}
};
#pragma pack(pop)
static_assert(alignof(USocialInteractionButton) == 0x000010, "Wrong alignment on USocialInteractionButton");
static_assert(sizeof(USocialInteractionButton) == 0x0010A0, "Wrong size on USocialInteractionButton");
static_assert(offsetof(USocialInteractionButton, DefaultIndicatorColor) == 0x000FE8, "Member 'USocialInteractionButton::DefaultIndicatorColor' has a wrong offset!");
static_assert(offsetof(USocialInteractionButton, AlertingIndicatorColor) == 0x000FF8, "Member 'USocialInteractionButton::AlertingIndicatorColor' has a wrong offset!");
static_assert(offsetof(USocialInteractionButton, Text_InteractionName) == 0x001088, "Member 'USocialInteractionButton::Text_InteractionName' has a wrong offset!");
static_assert(offsetof(USocialInteractionButton, Border_InteractionIndicator) == 0x001090, "Member 'USocialInteractionButton::Border_InteractionIndicator' has a wrong offset!");

// Class SocialUMG.SocialActionMenu
// 0x0040 (0x03F8 - 0x03B8)
class USocialActionMenu : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3B8[0x40];                                     // 0x03B8(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void HandleMenuAnchorOpenChanged(bool bIsOpen);
	void OnOpened();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialActionMenu">();
	}
	static class USocialActionMenu* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialActionMenu>();
	}
};
static_assert(alignof(USocialActionMenu) == 0x000008, "Wrong alignment on USocialActionMenu");
static_assert(sizeof(USocialActionMenu) == 0x0003F8, "Wrong size on USocialActionMenu");

// Class SocialUMG.SocialInteractionMenu
// 0x0068 (0x0460 - 0x03F8)
class USocialInteractionMenu : public USocialActionMenu
{
public:
	uint8                                         Pad_3F8[0x30];                                     // 0x03F8(0x0030)(Fixing Size After Last Property [ Dumper-7 ])
	class UDynamicEntryBox*                       EntryBox_PositiveInteractions;                     // 0x0428(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDynamicEntryBox*                       EntryBox_NegativeInteractions;                     // 0x0430(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USpacer*                                Spacer_InteractionSeparator;                       // 0x0438(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonWidgetSwitcherLegacy*            Switcher_Confirmation;                             // 0x0440(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                             Text_ConfirmationLabel;                            // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonLegacy*                    Button_Confirm;                                    // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonLegacy*                    Button_Decline;                                    // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	void OnToggleConfirmation(bool bIsVisible);

	class UWidget* GetFirstEntryToCenter() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialInteractionMenu">();
	}
	static class USocialInteractionMenu* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialInteractionMenu>();
	}
};
static_assert(alignof(USocialInteractionMenu) == 0x000008, "Wrong alignment on USocialInteractionMenu");
static_assert(sizeof(USocialInteractionMenu) == 0x000460, "Wrong size on USocialInteractionMenu");
static_assert(offsetof(USocialInteractionMenu, EntryBox_PositiveInteractions) == 0x000428, "Member 'USocialInteractionMenu::EntryBox_PositiveInteractions' has a wrong offset!");
static_assert(offsetof(USocialInteractionMenu, EntryBox_NegativeInteractions) == 0x000430, "Member 'USocialInteractionMenu::EntryBox_NegativeInteractions' has a wrong offset!");
static_assert(offsetof(USocialInteractionMenu, Spacer_InteractionSeparator) == 0x000438, "Member 'USocialInteractionMenu::Spacer_InteractionSeparator' has a wrong offset!");
static_assert(offsetof(USocialInteractionMenu, Switcher_Confirmation) == 0x000440, "Member 'USocialInteractionMenu::Switcher_Confirmation' has a wrong offset!");
static_assert(offsetof(USocialInteractionMenu, Text_ConfirmationLabel) == 0x000448, "Member 'USocialInteractionMenu::Text_ConfirmationLabel' has a wrong offset!");
static_assert(offsetof(USocialInteractionMenu, Button_Confirm) == 0x000450, "Member 'USocialInteractionMenu::Button_Confirm' has a wrong offset!");
static_assert(offsetof(USocialInteractionMenu, Button_Decline) == 0x000458, "Member 'USocialInteractionMenu::Button_Decline' has a wrong offset!");

// Class SocialUMG.SocialNameTextBlock
// 0x0020 (0x0830 - 0x0810)
class USocialNameTextBlock : public UCommonRichTextBlock
{
public:
	class USocialUser*                            SocialUser;                                        // 0x0808(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         MinDesiredSize;                                    // 0x0810(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         MaxDesiredSize;                                    // 0x0814(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bShowSecondName;                                   // 0x0818(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EPlatformIconDisplayRule                      PlatformIconDisplayRule;                           // 0x0819(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bWrapToNextLine;                                   // 0x081A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_81B[0x1];                                      // 0x081B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FColor                                 SecondNameColor;                                   // 0x081C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         SecondNameFontSize;                                // 0x0820(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_824[0xC];                                      // 0x0824(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialNameTextBlock">();
	}
	static class USocialNameTextBlock* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialNameTextBlock>();
	}
};
static_assert(alignof(USocialNameTextBlock) == 0x000010, "Wrong alignment on USocialNameTextBlock");
static_assert(sizeof(USocialNameTextBlock) == 0x000830, "Wrong size on USocialNameTextBlock");
static_assert(offsetof(USocialNameTextBlock, SocialUser) == 0x000808, "Member 'USocialNameTextBlock::SocialUser' has a wrong offset!");
static_assert(offsetof(USocialNameTextBlock, MinDesiredSize) == 0x000810, "Member 'USocialNameTextBlock::MinDesiredSize' has a wrong offset!");
static_assert(offsetof(USocialNameTextBlock, MaxDesiredSize) == 0x000814, "Member 'USocialNameTextBlock::MaxDesiredSize' has a wrong offset!");
static_assert(offsetof(USocialNameTextBlock, bShowSecondName) == 0x000818, "Member 'USocialNameTextBlock::bShowSecondName' has a wrong offset!");
static_assert(offsetof(USocialNameTextBlock, PlatformIconDisplayRule) == 0x000819, "Member 'USocialNameTextBlock::PlatformIconDisplayRule' has a wrong offset!");
static_assert(offsetof(USocialNameTextBlock, bWrapToNextLine) == 0x00081A, "Member 'USocialNameTextBlock::bWrapToNextLine' has a wrong offset!");
static_assert(offsetof(USocialNameTextBlock, SecondNameColor) == 0x00081C, "Member 'USocialNameTextBlock::SecondNameColor' has a wrong offset!");
static_assert(offsetof(USocialNameTextBlock, SecondNameFontSize) == 0x000820, "Member 'USocialNameTextBlock::SecondNameFontSize' has a wrong offset!");

// Class SocialUMG.DesignerPreviewChatChannel
// 0x0068 (0x0150 - 0x00E8)
class UDesignerPreviewChatChannel final : public USocialChatChannel
{
public:
	uint8                                         Pad_E8[0x68];                                      // 0x00E8(0x0068)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DesignerPreviewChatChannel">();
	}
	static class UDesignerPreviewChatChannel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDesignerPreviewChatChannel>();
	}
};
static_assert(alignof(UDesignerPreviewChatChannel) == 0x000008, "Wrong alignment on UDesignerPreviewChatChannel");
static_assert(sizeof(UDesignerPreviewChatChannel) == 0x000150, "Wrong size on UDesignerPreviewChatChannel");

// Class SocialUMG.SocialListEntryBase
// 0x0010 (0x1000 - 0x0FF0)
class USocialListEntryBase : public UCommonButtonLegacy
{
public:
	uint8                                         Pad_FE8[0x18];                                     // 0x0FE8(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialListEntryBase">();
	}
	static class USocialListEntryBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialListEntryBase>();
	}
};
static_assert(alignof(USocialListEntryBase) == 0x000010, "Wrong alignment on USocialListEntryBase");
static_assert(sizeof(USocialListEntryBase) == 0x001000, "Wrong size on USocialListEntryBase");

// Class SocialUMG.SocialListInteractableEntryBase
// 0x0010 (0x1010 - 0x1000)
class USocialListInteractableEntryBase : public USocialListEntryBase
{
public:
	TSubclassOf<class USocialActionMenu>          ActionMenuClass;                                   // 0x1000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMenuAnchor*                            MenuAnchor_Actions;                                // 0x1008(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	class UUserWidget* HandleGetMenuContent();
	void HandleMenuOpenChanged(bool bIsMenuOpen);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialListInteractableEntryBase">();
	}
	static class USocialListInteractableEntryBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialListInteractableEntryBase>();
	}
};
static_assert(alignof(USocialListInteractableEntryBase) == 0x000010, "Wrong alignment on USocialListInteractableEntryBase");
static_assert(sizeof(USocialListInteractableEntryBase) == 0x001010, "Wrong size on USocialListInteractableEntryBase");
static_assert(offsetof(USocialListInteractableEntryBase, ActionMenuClass) == 0x001000, "Member 'USocialListInteractableEntryBase::ActionMenuClass' has a wrong offset!");
static_assert(offsetof(USocialListInteractableEntryBase, MenuAnchor_Actions) == 0x001008, "Member 'USocialListInteractableEntryBase::MenuAnchor_Actions' has a wrong offset!");

// Class SocialUMG.SocialListUserEntryBase
// 0x0030 (0x1040 - 0x1010)
#pragma pack(push, 0x1)
class alignas(0x10) USocialListUserEntryBase : public USocialListInteractableEntryBase
{
public:
	uint8                                         Pad_1010[0x8];                                     // 0x1010(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class USocialNameTextBlock*                   Text_SocialName;                                   // 0x1018(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USocialNameTextBlock*                   Text_SocialName_Hover;                             // 0x1020(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonRichTextBlock*                   Text_RichPresence;                                 // 0x1028(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonRichTextBlock*                   Text_RichPresence_Hover;                           // 0x1030(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialListUserEntryBase">();
	}
	static class USocialListUserEntryBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialListUserEntryBase>();
	}
};
#pragma pack(pop)
static_assert(alignof(USocialListUserEntryBase) == 0x000010, "Wrong alignment on USocialListUserEntryBase");
static_assert(sizeof(USocialListUserEntryBase) == 0x001040, "Wrong size on USocialListUserEntryBase");
static_assert(offsetof(USocialListUserEntryBase, Text_SocialName) == 0x001018, "Member 'USocialListUserEntryBase::Text_SocialName' has a wrong offset!");
static_assert(offsetof(USocialListUserEntryBase, Text_SocialName_Hover) == 0x001020, "Member 'USocialListUserEntryBase::Text_SocialName_Hover' has a wrong offset!");
static_assert(offsetof(USocialListUserEntryBase, Text_RichPresence) == 0x001028, "Member 'USocialListUserEntryBase::Text_RichPresence' has a wrong offset!");
static_assert(offsetof(USocialListUserEntryBase, Text_RichPresence_Hover) == 0x001030, "Member 'USocialListUserEntryBase::Text_RichPresence_Hover' has a wrong offset!");

// Class SocialUMG.SocialUserListHeaderEntry
// 0x0010 (0x1010 - 0x1000)
class USocialUserListHeaderEntry : public USocialListEntryBase
{
public:
	class UTextBlock*                             Text_ListName;                                     // 0x1000(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTextBlock*                             Text_NumEntries;                                   // 0x1008(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialUserListHeaderEntry">();
	}
	static class USocialUserListHeaderEntry* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialUserListHeaderEntry>();
	}
};
static_assert(alignof(USocialUserListHeaderEntry) == 0x000010, "Wrong alignment on USocialUserListHeaderEntry");
static_assert(sizeof(USocialUserListHeaderEntry) == 0x001010, "Wrong size on USocialUserListHeaderEntry");
static_assert(offsetof(USocialUserListHeaderEntry, Text_ListName) == 0x001000, "Member 'USocialUserListHeaderEntry::Text_ListName' has a wrong offset!");
static_assert(offsetof(USocialUserListHeaderEntry, Text_NumEntries) == 0x001008, "Member 'USocialUserListHeaderEntry::Text_NumEntries' has a wrong offset!");

// Class SocialUMG.SocialUserListViewBase
// 0x0100 (0x0330 - 0x0230)
class USocialUserListViewBase : public UListViewBase
{
public:
	uint8                                         Pad_230[0xF8];                                     // 0x0230(0x00F8)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         EntrySpacing;                                      // 0x0328(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_32C[0x4];                                      // 0x032C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialUserListViewBase">();
	}
	static class USocialUserListViewBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialUserListViewBase>();
	}
};
static_assert(alignof(USocialUserListViewBase) == 0x000008, "Wrong alignment on USocialUserListViewBase");
static_assert(sizeof(USocialUserListViewBase) == 0x000330, "Wrong size on USocialUserListViewBase");
static_assert(offsetof(USocialUserListViewBase, EntrySpacing) == 0x000328, "Member 'USocialUserListViewBase::EntrySpacing' has a wrong offset!");

// Class SocialUMG.SocialUserListView
// 0x00A0 (0x03D0 - 0x0330)
class USocialUserListView : public USocialUserListViewBase
{
public:
	uint8                                         Pad_330[0x48];                                     // 0x0330(0x0048)(Fixing Size After Last Property [ Dumper-7 ])
	class USocialActionMenu*                      ActiveActionMenu;                                  // 0x0378(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<TSubclassOf<class USocialActionMenu>, class USocialActionMenu*> CachedActionMenuPool;       // 0x0380(0x0050)(ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialUserListView">();
	}
	static class USocialUserListView* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialUserListView>();
	}
};
static_assert(alignof(USocialUserListView) == 0x000008, "Wrong alignment on USocialUserListView");
static_assert(sizeof(USocialUserListView) == 0x0003D0, "Wrong size on USocialUserListView");
static_assert(offsetof(USocialUserListView, ActiveActionMenu) == 0x000378, "Member 'USocialUserListView::ActiveActionMenu' has a wrong offset!");
static_assert(offsetof(USocialUserListView, CachedActionMenuPool) == 0x000380, "Member 'USocialUserListView::CachedActionMenuPool' has a wrong offset!");

// Class SocialUMG.SocialUserTreeView
// 0x00A0 (0x0470 - 0x03D0)
class USocialUserTreeView : public USocialUserListView
{
public:
	uint8                                         Pad_3D0[0x70];                                     // 0x03D0(0x0070)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class USocialListUserEntryBase>   UserEntryWidgetClass;                              // 0x0440(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class USocialListUserEntryBase>   InviteEntryWidgetClass;                            // 0x0448(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_450[0x20];                                     // 0x0450(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialUserTreeView">();
	}
	static class USocialUserTreeView* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialUserTreeView>();
	}
};
static_assert(alignof(USocialUserTreeView) == 0x000008, "Wrong alignment on USocialUserTreeView");
static_assert(sizeof(USocialUserTreeView) == 0x000470, "Wrong size on USocialUserTreeView");
static_assert(offsetof(USocialUserTreeView, UserEntryWidgetClass) == 0x000440, "Member 'USocialUserTreeView::UserEntryWidgetClass' has a wrong offset!");
static_assert(offsetof(USocialUserTreeView, InviteEntryWidgetClass) == 0x000448, "Member 'USocialUserTreeView::InviteEntryWidgetClass' has a wrong offset!");

}

