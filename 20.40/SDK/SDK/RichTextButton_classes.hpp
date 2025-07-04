﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RichTextButton

#include "Basic.hpp"

#include "Slate_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonUILegacy_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RichTextButton.RichTextButton_C
// 0x0080 (0x1070 - 0x0FF0)
class URichTextButton_C final : public UCommonButtonLegacy
{
public:
	uint8                                         Pad_FE8[0x8];                                      // 0x0FE8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0FF0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hover2;                                            // 0x0FF8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hover;                                             // 0x1000(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_Material;                                   // 0x1008(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   Rich_text;                                         // 0x1010(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Button_text;                                       // 0x1018(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                            Text_Color;                                        // 0x1030(0x0014)(Edit, BlueprintVisible)
	uint8                                         Pad_1044[0x4];                                     // 0x1044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Material_Brush;                                    // 0x1048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Right_Image;                                       // 0x1050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETextJustify                                  Justifiction;                                      // 0x1058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Auto_wrap_text;                                    // 0x1059(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          SimpleHover;                                       // 0x105A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FontSizeOverride;                                  // 0x105B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FontSize;                                          // 0x105C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShearText;                                         // 0x1060(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_RichTextButton(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RichTextButton_C">();
	}
	static class URichTextButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URichTextButton_C>();
	}
};
static_assert(alignof(URichTextButton_C) == 0x000010, "Wrong alignment on URichTextButton_C");
static_assert(sizeof(URichTextButton_C) == 0x001070, "Wrong size on URichTextButton_C");
static_assert(offsetof(URichTextButton_C, UberGraphFrame) == 0x000FF0, "Member 'URichTextButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URichTextButton_C, Hover2) == 0x000FF8, "Member 'URichTextButton_C::Hover2' has a wrong offset!");
static_assert(offsetof(URichTextButton_C, Hover) == 0x001000, "Member 'URichTextButton_C::Hover' has a wrong offset!");
static_assert(offsetof(URichTextButton_C, Border_Material) == 0x001008, "Member 'URichTextButton_C::Border_Material' has a wrong offset!");
static_assert(offsetof(URichTextButton_C, Rich_text) == 0x001010, "Member 'URichTextButton_C::Rich_text' has a wrong offset!");
static_assert(offsetof(URichTextButton_C, Button_text) == 0x001018, "Member 'URichTextButton_C::Button_text' has a wrong offset!");
static_assert(offsetof(URichTextButton_C, Text_Color) == 0x001030, "Member 'URichTextButton_C::Text_Color' has a wrong offset!");
static_assert(offsetof(URichTextButton_C, Material_Brush) == 0x001048, "Member 'URichTextButton_C::Material_Brush' has a wrong offset!");
static_assert(offsetof(URichTextButton_C, Right_Image) == 0x001050, "Member 'URichTextButton_C::Right_Image' has a wrong offset!");
static_assert(offsetof(URichTextButton_C, Justifiction) == 0x001058, "Member 'URichTextButton_C::Justifiction' has a wrong offset!");
static_assert(offsetof(URichTextButton_C, Auto_wrap_text) == 0x001059, "Member 'URichTextButton_C::Auto_wrap_text' has a wrong offset!");
static_assert(offsetof(URichTextButton_C, SimpleHover) == 0x00105A, "Member 'URichTextButton_C::SimpleHover' has a wrong offset!");
static_assert(offsetof(URichTextButton_C, FontSizeOverride) == 0x00105B, "Member 'URichTextButton_C::FontSizeOverride' has a wrong offset!");
static_assert(offsetof(URichTextButton_C, FontSize) == 0x00105C, "Member 'URichTextButton_C::FontSize' has a wrong offset!");
static_assert(offsetof(URichTextButton_C, ShearText) == 0x001060, "Member 'URichTextButton_C::ShearText' has a wrong offset!");

}

