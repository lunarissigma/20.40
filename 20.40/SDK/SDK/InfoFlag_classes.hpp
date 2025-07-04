﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InfoFlag

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InfoFlag.InfoFlag_C
// 0x0070 (0x02E8 - 0x0278)
class UInfoFlag_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BG_Gradient;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   CommonRichTextBlock_114;                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_0;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Trim;                                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           TrimColor;                                         // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           GradientColor;                                     // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TrimWidth;                                         // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C4[0x4];                                      // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   InfoText;                                          // 0x02C8(0x0018)(Edit, BlueprintVisible)
	float                                         GradientDistance;                                  // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxWidth;                                          // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateTrimColor(const struct FLinearColor& Color);
	void UpdateText(const class FText& Text);
	void UpdateGradientColor(const struct FLinearColor& Color);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_InfoFlag(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InfoFlag_C">();
	}
	static class UInfoFlag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInfoFlag_C>();
	}
};
static_assert(alignof(UInfoFlag_C) == 0x000008, "Wrong alignment on UInfoFlag_C");
static_assert(sizeof(UInfoFlag_C) == 0x0002E8, "Wrong size on UInfoFlag_C");
static_assert(offsetof(UInfoFlag_C, UberGraphFrame) == 0x000278, "Member 'UInfoFlag_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInfoFlag_C, BG_Gradient) == 0x000280, "Member 'UInfoFlag_C::BG_Gradient' has a wrong offset!");
static_assert(offsetof(UInfoFlag_C, CommonRichTextBlock_114) == 0x000288, "Member 'UInfoFlag_C::CommonRichTextBlock_114' has a wrong offset!");
static_assert(offsetof(UInfoFlag_C, SizeBox_0) == 0x000290, "Member 'UInfoFlag_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UInfoFlag_C, Trim) == 0x000298, "Member 'UInfoFlag_C::Trim' has a wrong offset!");
static_assert(offsetof(UInfoFlag_C, TrimColor) == 0x0002A0, "Member 'UInfoFlag_C::TrimColor' has a wrong offset!");
static_assert(offsetof(UInfoFlag_C, GradientColor) == 0x0002B0, "Member 'UInfoFlag_C::GradientColor' has a wrong offset!");
static_assert(offsetof(UInfoFlag_C, TrimWidth) == 0x0002C0, "Member 'UInfoFlag_C::TrimWidth' has a wrong offset!");
static_assert(offsetof(UInfoFlag_C, InfoText) == 0x0002C8, "Member 'UInfoFlag_C::InfoText' has a wrong offset!");
static_assert(offsetof(UInfoFlag_C, GradientDistance) == 0x0002E0, "Member 'UInfoFlag_C::GradientDistance' has a wrong offset!");
static_assert(offsetof(UInfoFlag_C, MaxWidth) == 0x0002E4, "Member 'UInfoFlag_C::MaxWidth' has a wrong offset!");

}

