﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ContextTutorialIndicator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ContextTutorialIndicator.ContextTutorialIndicator_C
// 0x0118 (0x0708 - 0x05F0)
class UContextTutorialIndicator_C final : public UAthenaContextTutorialIndicator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ST_in_bounce;                                      // 0x05F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ST_Text_Out_Fast;                                  // 0x0600(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ST_Marker_Out02;                                   // 0x0608(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ST_Marker_Out01;                                   // 0x0610(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ST_Text_Out;                                       // 0x0618(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ST_Text_in;                                        // 0x0620(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ST_Arrow_Disappear;                                // 0x0628(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ST_Arrow_Bounce;                                   // 0x0630(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ST_Arrow_Transition;                               // 0x0638(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ST_Out_Arrow_Marker;                               // 0x0640(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ST_Marker_FadeIN;                                  // 0x0648(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ST_Arrow_Fade;                                     // 0x0650(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ST_in_Spin_Arrow_Marker;                           // 0x0658(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ST_DiamondBox_Fade;                                // 0x0660(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ST_Diamond_Disappear;                              // 0x0668(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ST_Marker_MoveReaction;                            // 0x0670(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ST_in_DiamondBox_Spin;                             // 0x0678(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ST_Marker_Idle;                                    // 0x0680(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ST_in_Diamond_Spin;                                // 0x0688(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ST_border;                                         // 0x0690(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ST_in;                                             // 0x0698(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Circle;                                            // 0x06A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Circle_1;                                          // 0x06A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Description;                                       // 0x06B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       DescriptionOLD;                                    // 0x06B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x06C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_1;                                            // 0x06C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_SmallIndicator;                              // 0x06D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_SmallIndicator_Child;                        // 0x06D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Sign;                                              // 0x06E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Sign_1;                                            // 0x06E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 White_Box_Child;                                   // 0x06F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 White_Box_Solo;                                    // 0x06F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIntroAnimationDone;                               // 0x0700(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_ContextTutorialIndicator(int32 EntryPoint);
	void Finished_191D6D204EA6EF5125923CB749C84A4A();
	void Finished_5FDAD1724A4ABC34EC3B7F9D90839344();
	void Finished_6F1BBAF94537A4D7945ED5A452FC1188();
	void Finished_FBBD6B5248E73C61005758B21F90D160();
	void PlayBounceAnimation();
	void PlayInAnimation();
	void PlayOutAnimation();
	void SetIndicatorText(const class FText& Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ContextTutorialIndicator_C">();
	}
	static class UContextTutorialIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UContextTutorialIndicator_C>();
	}
};
static_assert(alignof(UContextTutorialIndicator_C) == 0x000008, "Wrong alignment on UContextTutorialIndicator_C");
static_assert(sizeof(UContextTutorialIndicator_C) == 0x000708, "Wrong size on UContextTutorialIndicator_C");
static_assert(offsetof(UContextTutorialIndicator_C, UberGraphFrame) == 0x0005F0, "Member 'UContextTutorialIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_in_bounce) == 0x0005F8, "Member 'UContextTutorialIndicator_C::ST_in_bounce' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_Text_Out_Fast) == 0x000600, "Member 'UContextTutorialIndicator_C::ST_Text_Out_Fast' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_Marker_Out02) == 0x000608, "Member 'UContextTutorialIndicator_C::ST_Marker_Out02' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_Marker_Out01) == 0x000610, "Member 'UContextTutorialIndicator_C::ST_Marker_Out01' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_Text_Out) == 0x000618, "Member 'UContextTutorialIndicator_C::ST_Text_Out' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_Text_in) == 0x000620, "Member 'UContextTutorialIndicator_C::ST_Text_in' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_Arrow_Disappear) == 0x000628, "Member 'UContextTutorialIndicator_C::ST_Arrow_Disappear' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_Arrow_Bounce) == 0x000630, "Member 'UContextTutorialIndicator_C::ST_Arrow_Bounce' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_Arrow_Transition) == 0x000638, "Member 'UContextTutorialIndicator_C::ST_Arrow_Transition' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_Out_Arrow_Marker) == 0x000640, "Member 'UContextTutorialIndicator_C::ST_Out_Arrow_Marker' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_Marker_FadeIN) == 0x000648, "Member 'UContextTutorialIndicator_C::ST_Marker_FadeIN' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_Arrow_Fade) == 0x000650, "Member 'UContextTutorialIndicator_C::ST_Arrow_Fade' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_in_Spin_Arrow_Marker) == 0x000658, "Member 'UContextTutorialIndicator_C::ST_in_Spin_Arrow_Marker' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_DiamondBox_Fade) == 0x000660, "Member 'UContextTutorialIndicator_C::ST_DiamondBox_Fade' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_Diamond_Disappear) == 0x000668, "Member 'UContextTutorialIndicator_C::ST_Diamond_Disappear' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_Marker_MoveReaction) == 0x000670, "Member 'UContextTutorialIndicator_C::ST_Marker_MoveReaction' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_in_DiamondBox_Spin) == 0x000678, "Member 'UContextTutorialIndicator_C::ST_in_DiamondBox_Spin' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_Marker_Idle) == 0x000680, "Member 'UContextTutorialIndicator_C::ST_Marker_Idle' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_in_Diamond_Spin) == 0x000688, "Member 'UContextTutorialIndicator_C::ST_in_Diamond_Spin' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_border) == 0x000690, "Member 'UContextTutorialIndicator_C::ST_border' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_in) == 0x000698, "Member 'UContextTutorialIndicator_C::ST_in' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, Circle) == 0x0006A0, "Member 'UContextTutorialIndicator_C::Circle' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, Circle_1) == 0x0006A8, "Member 'UContextTutorialIndicator_C::Circle_1' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, Description) == 0x0006B0, "Member 'UContextTutorialIndicator_C::Description' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, DescriptionOLD) == 0x0006B8, "Member 'UContextTutorialIndicator_C::DescriptionOLD' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, Icon) == 0x0006C0, "Member 'UContextTutorialIndicator_C::Icon' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, Icon_1) == 0x0006C8, "Member 'UContextTutorialIndicator_C::Icon_1' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, Image_SmallIndicator) == 0x0006D0, "Member 'UContextTutorialIndicator_C::Image_SmallIndicator' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, Image_SmallIndicator_Child) == 0x0006D8, "Member 'UContextTutorialIndicator_C::Image_SmallIndicator_Child' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, Sign) == 0x0006E0, "Member 'UContextTutorialIndicator_C::Sign' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, Sign_1) == 0x0006E8, "Member 'UContextTutorialIndicator_C::Sign_1' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, White_Box_Child) == 0x0006F0, "Member 'UContextTutorialIndicator_C::White_Box_Child' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, White_Box_Solo) == 0x0006F8, "Member 'UContextTutorialIndicator_C::White_Box_Solo' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, bIntroAnimationDone) == 0x000700, "Member 'UContextTutorialIndicator_C::bIntroAnimationDone' has a wrong offset!");

}

