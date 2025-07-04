﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LauncherSocialDefaults

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "LauncherSocialTypes_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class LauncherSocialDefaults.ChatColorSchemeDataAsset
// 0x0120 (0x0150 - 0x0030)
class UChatColorSchemeDataAsset final : public UDataAsset
{
public:
	struct FChatColorScheme                       ChatColorData;                                     // 0x0030(0x0120)(Edit, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChatColorSchemeDataAsset">();
	}
	static class UChatColorSchemeDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatColorSchemeDataAsset>();
	}
};
static_assert(alignof(UChatColorSchemeDataAsset) == 0x000008, "Wrong alignment on UChatColorSchemeDataAsset");
static_assert(sizeof(UChatColorSchemeDataAsset) == 0x000150, "Wrong size on UChatColorSchemeDataAsset");
static_assert(offsetof(UChatColorSchemeDataAsset, ChatColorData) == 0x000030, "Member 'UChatColorSchemeDataAsset::ChatColorData' has a wrong offset!");

// Class LauncherSocialDefaults.SocialActionButtonStyleDataAsset
// 0x03B0 (0x03E0 - 0x0030)
class USocialActionButtonStyleDataAsset final : public UDataAsset
{
public:
	struct FButtonStyle                           style;                                             // 0x0030(0x03B0)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialActionButtonStyleDataAsset">();
	}
	static class USocialActionButtonStyleDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialActionButtonStyleDataAsset>();
	}
};
static_assert(alignof(USocialActionButtonStyleDataAsset) == 0x000010, "Wrong alignment on USocialActionButtonStyleDataAsset");
static_assert(sizeof(USocialActionButtonStyleDataAsset) == 0x0003E0, "Wrong size on USocialActionButtonStyleDataAsset");
static_assert(offsetof(USocialActionButtonStyleDataAsset, style) == 0x000030, "Member 'USocialActionButtonStyleDataAsset::style' has a wrong offset!");

// Class LauncherSocialDefaults.SocialChatChromeColorSchemeDataAsset
// 0x0050 (0x0080 - 0x0030)
class USocialChatChromeColorSchemeDataAsset final : public UDataAsset
{
public:
	struct FChatChromeColorScheme                 style;                                             // 0x0030(0x0050)(Edit, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatChromeColorSchemeDataAsset">();
	}
	static class USocialChatChromeColorSchemeDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatChromeColorSchemeDataAsset>();
	}
};
static_assert(alignof(USocialChatChromeColorSchemeDataAsset) == 0x000008, "Wrong alignment on USocialChatChromeColorSchemeDataAsset");
static_assert(sizeof(USocialChatChromeColorSchemeDataAsset) == 0x000080, "Wrong size on USocialChatChromeColorSchemeDataAsset");
static_assert(offsetof(USocialChatChromeColorSchemeDataAsset, style) == 0x000030, "Member 'USocialChatChromeColorSchemeDataAsset::style' has a wrong offset!");

// Class LauncherSocialDefaults.SocialChatChromeMarginsDataAsset
// 0x0068 (0x0098 - 0x0030)
class USocialChatChromeMarginsDataAsset final : public UDataAsset
{
public:
	struct FChatChromeMargins                     style;                                             // 0x0030(0x0064)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatChromeMarginsDataAsset">();
	}
	static class USocialChatChromeMarginsDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatChromeMarginsDataAsset>();
	}
};
static_assert(alignof(USocialChatChromeMarginsDataAsset) == 0x000008, "Wrong alignment on USocialChatChromeMarginsDataAsset");
static_assert(sizeof(USocialChatChromeMarginsDataAsset) == 0x000098, "Wrong size on USocialChatChromeMarginsDataAsset");
static_assert(offsetof(USocialChatChromeMarginsDataAsset, style) == 0x000030, "Member 'USocialChatChromeMarginsDataAsset::style' has a wrong offset!");

// Class LauncherSocialDefaults.SocialChatChromeStyleDataAsset
// 0x0B50 (0x0B80 - 0x0030)
class USocialChatChromeStyleDataAsset final : public UDataAsset
{
public:
	struct FChatChromeStyle                       style;                                             // 0x0030(0x0B50)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatChromeStyleDataAsset">();
	}
	static class USocialChatChromeStyleDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatChromeStyleDataAsset>();
	}
};
static_assert(alignof(USocialChatChromeStyleDataAsset) == 0x000010, "Wrong alignment on USocialChatChromeStyleDataAsset");
static_assert(sizeof(USocialChatChromeStyleDataAsset) == 0x000B80, "Wrong size on USocialChatChromeStyleDataAsset");
static_assert(offsetof(USocialChatChromeStyleDataAsset, style) == 0x000030, "Member 'USocialChatChromeStyleDataAsset::style' has a wrong offset!");

// Class LauncherSocialDefaults.SocialChatMarkupStyleDataAsset
// 0x08B0 (0x08E0 - 0x0030)
class USocialChatMarkupStyleDataAsset final : public UDataAsset
{
public:
	struct FChatMarkupStyle                       style;                                             // 0x0030(0x08B0)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatMarkupStyleDataAsset">();
	}
	static class USocialChatMarkupStyleDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatMarkupStyleDataAsset>();
	}
};
static_assert(alignof(USocialChatMarkupStyleDataAsset) == 0x000010, "Wrong alignment on USocialChatMarkupStyleDataAsset");
static_assert(sizeof(USocialChatMarkupStyleDataAsset) == 0x0008E0, "Wrong size on USocialChatMarkupStyleDataAsset");
static_assert(offsetof(USocialChatMarkupStyleDataAsset, style) == 0x000030, "Member 'USocialChatMarkupStyleDataAsset::style' has a wrong offset!");

// Class LauncherSocialDefaults.SocialChatStyleDataAsset
// 0x1A60 (0x1A90 - 0x0030)
class USocialChatStyleDataAsset final : public UDataAsset
{
public:
	struct FChatStyle                             style;                                             // 0x0030(0x1A60)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatStyleDataAsset">();
	}
	static class USocialChatStyleDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatStyleDataAsset>();
	}
};
static_assert(alignof(USocialChatStyleDataAsset) == 0x000010, "Wrong alignment on USocialChatStyleDataAsset");
static_assert(sizeof(USocialChatStyleDataAsset) == 0x001A90, "Wrong size on USocialChatStyleDataAsset");
static_assert(offsetof(USocialChatStyleDataAsset, style) == 0x000030, "Member 'USocialChatStyleDataAsset::style' has a wrong offset!");

// Class LauncherSocialDefaults.SocialCheckBoxStyleDataAsset
// 0x0A10 (0x0A40 - 0x0030)
class USocialCheckBoxStyleDataAsset final : public UDataAsset
{
public:
	struct FCheckBoxStyle                         style;                                             // 0x0030(0x0A10)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialCheckBoxStyleDataAsset">();
	}
	static class USocialCheckBoxStyleDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialCheckBoxStyleDataAsset>();
	}
};
static_assert(alignof(USocialCheckBoxStyleDataAsset) == 0x000010, "Wrong alignment on USocialCheckBoxStyleDataAsset");
static_assert(sizeof(USocialCheckBoxStyleDataAsset) == 0x000A40, "Wrong size on USocialCheckBoxStyleDataAsset");
static_assert(offsetof(USocialCheckBoxStyleDataAsset, style) == 0x000030, "Member 'USocialCheckBoxStyleDataAsset::style' has a wrong offset!");

// Class LauncherSocialDefaults.SocialFontStyleDataAsset
// 0x0210 (0x0240 - 0x0030)
class USocialFontStyleDataAsset final : public UDataAsset
{
public:
	struct FSocialFontStyle                       style;                                             // 0x0030(0x0210)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialFontStyleDataAsset">();
	}
	static class USocialFontStyleDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialFontStyleDataAsset>();
	}
};
static_assert(alignof(USocialFontStyleDataAsset) == 0x000008, "Wrong alignment on USocialFontStyleDataAsset");
static_assert(sizeof(USocialFontStyleDataAsset) == 0x000240, "Wrong size on USocialFontStyleDataAsset");
static_assert(offsetof(USocialFontStyleDataAsset, style) == 0x000030, "Member 'USocialFontStyleDataAsset::style' has a wrong offset!");

// Class LauncherSocialDefaults.SocialListMarginsDataAsset
// 0x0210 (0x0240 - 0x0030)
class USocialListMarginsDataAsset final : public UDataAsset
{
public:
	struct FSocialListMargins                     style;                                             // 0x0030(0x0210)(Edit, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialListMarginsDataAsset">();
	}
	static class USocialListMarginsDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialListMarginsDataAsset>();
	}
};
static_assert(alignof(USocialListMarginsDataAsset) == 0x000008, "Wrong alignment on USocialListMarginsDataAsset");
static_assert(sizeof(USocialListMarginsDataAsset) == 0x000240, "Wrong size on USocialListMarginsDataAsset");
static_assert(offsetof(USocialListMarginsDataAsset, style) == 0x000030, "Member 'USocialListMarginsDataAsset::style' has a wrong offset!");

// Class LauncherSocialDefaults.SocialListStyleDataAsset
// 0x37A0 (0x37D0 - 0x0030)
class USocialListStyleDataAsset final : public UDataAsset
{
public:
	struct FSocialListStyle                       style;                                             // 0x0030(0x37A0)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialListStyleDataAsset">();
	}
	static class USocialListStyleDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialListStyleDataAsset>();
	}
};
static_assert(alignof(USocialListStyleDataAsset) == 0x000010, "Wrong alignment on USocialListStyleDataAsset");
static_assert(sizeof(USocialListStyleDataAsset) == 0x0037D0, "Wrong size on USocialListStyleDataAsset");
static_assert(offsetof(USocialListStyleDataAsset, style) == 0x000030, "Member 'USocialListStyleDataAsset::style' has a wrong offset!");

// Class LauncherSocialDefaults.SocialProfanityDataAsset
// 0x0010 (0x0040 - 0x0030)
class USocialProfanityDataAsset final : public UDataAsset
{
public:
	TArray<struct FProfanityData>                 ProfanityData;                                     // 0x0030(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialProfanityDataAsset">();
	}
	static class USocialProfanityDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialProfanityDataAsset>();
	}
};
static_assert(alignof(USocialProfanityDataAsset) == 0x000008, "Wrong alignment on USocialProfanityDataAsset");
static_assert(sizeof(USocialProfanityDataAsset) == 0x000040, "Wrong size on USocialProfanityDataAsset");
static_assert(offsetof(USocialProfanityDataAsset, ProfanityData) == 0x000030, "Member 'USocialProfanityDataAsset::ProfanityData' has a wrong offset!");

// Class LauncherSocialDefaults.SocialRadioBoxStyleDataAsset
// 0x0A10 (0x0A40 - 0x0030)
class USocialRadioBoxStyleDataAsset final : public UDataAsset
{
public:
	struct FCheckBoxStyle                         style;                                             // 0x0030(0x0A10)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialRadioBoxStyleDataAsset">();
	}
	static class USocialRadioBoxStyleDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialRadioBoxStyleDataAsset>();
	}
};
static_assert(alignof(USocialRadioBoxStyleDataAsset) == 0x000010, "Wrong alignment on USocialRadioBoxStyleDataAsset");
static_assert(sizeof(USocialRadioBoxStyleDataAsset) == 0x000A40, "Wrong size on USocialRadioBoxStyleDataAsset");
static_assert(offsetof(USocialRadioBoxStyleDataAsset, style) == 0x000030, "Member 'USocialRadioBoxStyleDataAsset::style' has a wrong offset!");

// Class LauncherSocialDefaults.SocialScrollBarStyleDataAsset
// 0x06E0 (0x0710 - 0x0030)
class USocialScrollBarStyleDataAsset final : public UDataAsset
{
public:
	struct FScrollBarStyle                        style;                                             // 0x0030(0x06E0)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialScrollBarStyleDataAsset">();
	}
	static class USocialScrollBarStyleDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialScrollBarStyleDataAsset>();
	}
};
static_assert(alignof(USocialScrollBarStyleDataAsset) == 0x000010, "Wrong alignment on USocialScrollBarStyleDataAsset");
static_assert(sizeof(USocialScrollBarStyleDataAsset) == 0x000710, "Wrong size on USocialScrollBarStyleDataAsset");
static_assert(offsetof(USocialScrollBarStyleDataAsset, style) == 0x000030, "Member 'USocialScrollBarStyleDataAsset::style' has a wrong offset!");

// Class LauncherSocialDefaults.SocialSoundSchemaDataAsset
// 0x0048 (0x0078 - 0x0030)
class USocialSoundSchemaDataAsset final : public UDataAsset
{
public:
	struct FSocialSoundSchema                     SoundSchema;                                       // 0x0030(0x0048)(Edit, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialSoundSchemaDataAsset">();
	}
	static class USocialSoundSchemaDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialSoundSchemaDataAsset>();
	}
};
static_assert(alignof(USocialSoundSchemaDataAsset) == 0x000008, "Wrong alignment on USocialSoundSchemaDataAsset");
static_assert(sizeof(USocialSoundSchemaDataAsset) == 0x000078, "Wrong size on USocialSoundSchemaDataAsset");
static_assert(offsetof(USocialSoundSchemaDataAsset, SoundSchema) == 0x000030, "Member 'USocialSoundSchemaDataAsset::SoundSchema' has a wrong offset!");

// Class LauncherSocialDefaults.SocialStyleDataAsset
// 0x91C0 (0x91F0 - 0x0030)
class alignas(0x10) USocialStyleDataAsset final : public UDataAsset
{
public:
	class USocialFontStyleDataAsset*              SmallFontStyle;                                    // 0x0030(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialFontStyleDataAsset*              NormalFontStyle;                                   // 0x0038(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialFontStyleDataAsset*              LargeFontStyle;                                    // 0x0040(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialFontStyleDataAsset*              ChatFontStyle;                                     // 0x0048(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialListStyleDataAsset*              SocialListStyle;                                   // 0x0050(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialListMarginsDataAsset*            SocialListMargins;                                 // 0x0058(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatStyleDataAsset*              ChatStyle;                                         // 0x0060(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatChromeStyleDataAsset*        ChatChromeStyle;                                   // 0x0068(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatChromeMarginsDataAsset*      ChatChromeMargins;                                 // 0x0070(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatChromeColorSchemeDataAsset*  ChatChromeColorScheme;                             // 0x0078(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UChatColorSchemeDataAsset*              ChatColorScheme;                                   // 0x0080(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialSoundSchemaDataAsset*            SoundSchema;                                       // 0x0088(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialActionButtonStyleDataAsset*      ActionButtonStyle;                                 // 0x0090(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialCheckBoxStyleDataAsset*          CheckBoxStyle;                                     // 0x0098(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialRadioBoxStyleDataAsset*          RadioBoxStyle;                                     // 0x00A0(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialScrollBarStyleDataAsset*         ScrollBoxStyle;                                    // 0x00A8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatMarkupStyleDataAsset*        MarkupStyle;                                       // 0x00B0(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialProfanityDataAsset*              ProfanityDataAsset;                                // 0x00B8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C0[0x9130];                                    // 0x00C0(0x9130)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialStyleDataAsset">();
	}
	static class USocialStyleDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialStyleDataAsset>();
	}
};
static_assert(alignof(USocialStyleDataAsset) == 0x000010, "Wrong alignment on USocialStyleDataAsset");
static_assert(sizeof(USocialStyleDataAsset) == 0x0091F0, "Wrong size on USocialStyleDataAsset");
static_assert(offsetof(USocialStyleDataAsset, SmallFontStyle) == 0x000030, "Member 'USocialStyleDataAsset::SmallFontStyle' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, NormalFontStyle) == 0x000038, "Member 'USocialStyleDataAsset::NormalFontStyle' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, LargeFontStyle) == 0x000040, "Member 'USocialStyleDataAsset::LargeFontStyle' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, ChatFontStyle) == 0x000048, "Member 'USocialStyleDataAsset::ChatFontStyle' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, SocialListStyle) == 0x000050, "Member 'USocialStyleDataAsset::SocialListStyle' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, SocialListMargins) == 0x000058, "Member 'USocialStyleDataAsset::SocialListMargins' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, ChatStyle) == 0x000060, "Member 'USocialStyleDataAsset::ChatStyle' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, ChatChromeStyle) == 0x000068, "Member 'USocialStyleDataAsset::ChatChromeStyle' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, ChatChromeMargins) == 0x000070, "Member 'USocialStyleDataAsset::ChatChromeMargins' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, ChatChromeColorScheme) == 0x000078, "Member 'USocialStyleDataAsset::ChatChromeColorScheme' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, ChatColorScheme) == 0x000080, "Member 'USocialStyleDataAsset::ChatColorScheme' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, SoundSchema) == 0x000088, "Member 'USocialStyleDataAsset::SoundSchema' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, ActionButtonStyle) == 0x000090, "Member 'USocialStyleDataAsset::ActionButtonStyle' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, CheckBoxStyle) == 0x000098, "Member 'USocialStyleDataAsset::CheckBoxStyle' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, RadioBoxStyle) == 0x0000A0, "Member 'USocialStyleDataAsset::RadioBoxStyle' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, ScrollBoxStyle) == 0x0000A8, "Member 'USocialStyleDataAsset::ScrollBoxStyle' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, MarkupStyle) == 0x0000B0, "Member 'USocialStyleDataAsset::MarkupStyle' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, ProfanityDataAsset) == 0x0000B8, "Member 'USocialStyleDataAsset::ProfanityDataAsset' has a wrong offset!");

}

