﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPS20_TutorialTooltip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "BattlePassS20UI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BPS20_TutorialTooltip.BPS20_TutorialTooltip_C
// 0x0160 (0x0410 - 0x02B0)
class UBPS20_TutorialTooltip_C final : public UFortBattlePassTutorialTooltipS20
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       burstLoop;                                         // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Show;                                              // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBoxcontent;                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Arrow;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   In_Text;                                           // 0x02E0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	uint8                                         Pad_2F8[0x8];                                      // 0x02F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            In_Brush;                                          // 0x0300(0x00C0)(Edit, BlueprintVisible, ExposeOnSpawn)
	EHorizontalAlignment                          In_Horizontal_Alignment;                           // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EVerticalAlignment                            In_Vertical_Alignment;                             // 0x03C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3C2[0x6];                                      // 0x03C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FWidgetTransform                       In_Transform;                                      // 0x03C8(0x0038)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	bool                                          Show_Icon;                                         // 0x0400(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_401[0x3];                                      // 0x0401(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Right;                                             // 0x0404(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BPS20_TutorialTooltip(int32 EntryPoint);
	void HideTooltip();
	void PreConstruct(bool IsDesignTime);
	void ShowTooltip();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPS20_TutorialTooltip_C">();
	}
	static class UBPS20_TutorialTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPS20_TutorialTooltip_C>();
	}
};
static_assert(alignof(UBPS20_TutorialTooltip_C) == 0x000010, "Wrong alignment on UBPS20_TutorialTooltip_C");
static_assert(sizeof(UBPS20_TutorialTooltip_C) == 0x000410, "Wrong size on UBPS20_TutorialTooltip_C");
static_assert(offsetof(UBPS20_TutorialTooltip_C, UberGraphFrame) == 0x0002B0, "Member 'UBPS20_TutorialTooltip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPS20_TutorialTooltip_C, burstLoop) == 0x0002B8, "Member 'UBPS20_TutorialTooltip_C::burstLoop' has a wrong offset!");
static_assert(offsetof(UBPS20_TutorialTooltip_C, Show) == 0x0002C0, "Member 'UBPS20_TutorialTooltip_C::Show' has a wrong offset!");
static_assert(offsetof(UBPS20_TutorialTooltip_C, HorizontalBoxcontent) == 0x0002C8, "Member 'UBPS20_TutorialTooltip_C::HorizontalBoxcontent' has a wrong offset!");
static_assert(offsetof(UBPS20_TutorialTooltip_C, Icon) == 0x0002D0, "Member 'UBPS20_TutorialTooltip_C::Icon' has a wrong offset!");
static_assert(offsetof(UBPS20_TutorialTooltip_C, Image_Arrow) == 0x0002D8, "Member 'UBPS20_TutorialTooltip_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(UBPS20_TutorialTooltip_C, In_Text) == 0x0002E0, "Member 'UBPS20_TutorialTooltip_C::In_Text' has a wrong offset!");
static_assert(offsetof(UBPS20_TutorialTooltip_C, In_Brush) == 0x000300, "Member 'UBPS20_TutorialTooltip_C::In_Brush' has a wrong offset!");
static_assert(offsetof(UBPS20_TutorialTooltip_C, In_Horizontal_Alignment) == 0x0003C0, "Member 'UBPS20_TutorialTooltip_C::In_Horizontal_Alignment' has a wrong offset!");
static_assert(offsetof(UBPS20_TutorialTooltip_C, In_Vertical_Alignment) == 0x0003C1, "Member 'UBPS20_TutorialTooltip_C::In_Vertical_Alignment' has a wrong offset!");
static_assert(offsetof(UBPS20_TutorialTooltip_C, In_Transform) == 0x0003C8, "Member 'UBPS20_TutorialTooltip_C::In_Transform' has a wrong offset!");
static_assert(offsetof(UBPS20_TutorialTooltip_C, Show_Icon) == 0x000400, "Member 'UBPS20_TutorialTooltip_C::Show_Icon' has a wrong offset!");
static_assert(offsetof(UBPS20_TutorialTooltip_C, Right) == 0x000404, "Member 'UBPS20_TutorialTooltip_C::Right' has a wrong offset!");

}

