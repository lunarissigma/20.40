﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IconTextButton

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function IconTextButton.IconTextButton_C.ExecuteUbergraph_IconTextButton
// 0x0150 (0x0150 - 0x0000)
struct IconTextButton_C_ExecuteUbergraph_IconTextButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;            // 0x0004(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue_1;                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue_2;                 // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAnyChildren_ReturnValue;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue_3;                 // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue_1;        // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43[0xD];                                       // 0x0043(0x000D)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortTabButtonLabelInfo                K2Node_Event_TabLabelInfo;                         // 0x0050(0x00E0)(ConstParm)
	struct FDataTableRowHandle                    K2Node_Event_NewTriggeredAction;                   // 0x0130(0x0010)(ConstParm, NoDestructor)
	float                                         K2Node_Event_HeldPercent;                          // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0145(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_SlateBrush_ReturnValue;        // 0x0146(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0147(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x014A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IconTextButton_C_ExecuteUbergraph_IconTextButton) == 0x000010, "Wrong alignment on IconTextButton_C_ExecuteUbergraph_IconTextButton");
static_assert(sizeof(IconTextButton_C_ExecuteUbergraph_IconTextButton) == 0x000150, "Wrong size on IconTextButton_C_ExecuteUbergraph_IconTextButton");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, EntryPoint) == 0x000000, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, K2Node_Event_IsDesignTime) == 0x000010, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, CallFunc_GetContext_ReturnValue) == 0x000018, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, CallFunc_GetContext_ReturnValue_1) == 0x000020, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, CallFunc_GetContext_ReturnValue_2) == 0x000028, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::CallFunc_GetContext_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, CallFunc_HasAnyChildren_ReturnValue) == 0x000030, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::CallFunc_HasAnyChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, CallFunc_GetCurrentInputType_ReturnValue) == 0x000031, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, CallFunc_GetContext_ReturnValue_3) == 0x000038, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::CallFunc_GetContext_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, CallFunc_GetCurrentInputType_ReturnValue_1) == 0x000040, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::CallFunc_GetCurrentInputType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, Temp_byte_Variable) == 0x000041, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, Temp_byte_Variable_1) == 0x000042, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, K2Node_Event_TabLabelInfo) == 0x000050, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::K2Node_Event_TabLabelInfo' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, K2Node_Event_NewTriggeredAction) == 0x000130, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::K2Node_Event_NewTriggeredAction' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, K2Node_Event_HeldPercent) == 0x000140, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::K2Node_Event_HeldPercent' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, Temp_bool_Variable) == 0x000144, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, Temp_byte_Variable_2) == 0x000145, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, CallFunc_EqualEqual_SlateBrush_ReturnValue) == 0x000146, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::CallFunc_EqualEqual_SlateBrush_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, Temp_byte_Variable_3) == 0x000147, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, K2Node_Select_Default) == 0x000148, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, Temp_bool_Variable_1) == 0x000149, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_ExecuteUbergraph_IconTextButton, K2Node_Select_Default_1) == 0x00014A, "Member 'IconTextButton_C_ExecuteUbergraph_IconTextButton::K2Node_Select_Default_1' has a wrong offset!");

// Function IconTextButton.IconTextButton_C.Get Dynamic Material
// 0x0010 (0x0010 - 0x0000)
struct IconTextButton_C_Get_Dynamic_Material final
{
public:
	class UMaterialInstanceDynamic*               Ret_Material;                                      // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IconTextButton_C_Get_Dynamic_Material) == 0x000008, "Wrong alignment on IconTextButton_C_Get_Dynamic_Material");
static_assert(sizeof(IconTextButton_C_Get_Dynamic_Material) == 0x000010, "Wrong size on IconTextButton_C_Get_Dynamic_Material");
static_assert(offsetof(IconTextButton_C_Get_Dynamic_Material, Ret_Material) == 0x000000, "Member 'IconTextButton_C_Get_Dynamic_Material::Ret_Material' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_Get_Dynamic_Material, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'IconTextButton_C_Get_Dynamic_Material::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function IconTextButton.IconTextButton_C.GetPressProgress
// 0x0004 (0x0004 - 0x0000)
struct IconTextButton_C_GetPressProgress final
{
public:
	float                                         Progress;                                          // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IconTextButton_C_GetPressProgress) == 0x000004, "Wrong alignment on IconTextButton_C_GetPressProgress");
static_assert(sizeof(IconTextButton_C_GetPressProgress) == 0x000004, "Wrong size on IconTextButton_C_GetPressProgress");
static_assert(offsetof(IconTextButton_C_GetPressProgress, Progress) == 0x000000, "Member 'IconTextButton_C_GetPressProgress::Progress' has a wrong offset!");

// Function IconTextButton.IconTextButton_C.InitializeButton
// 0x0010 (0x0010 - 0x0000)
struct IconTextButton_C_InitializeButton final
{
public:
	class UObject*                                CallFunc_GetBrushResource_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IconTextButton_C_InitializeButton) == 0x000008, "Wrong alignment on IconTextButton_C_InitializeButton");
static_assert(sizeof(IconTextButton_C_InitializeButton) == 0x000010, "Wrong size on IconTextButton_C_InitializeButton");
static_assert(offsetof(IconTextButton_C_InitializeButton, CallFunc_GetBrushResource_ReturnValue) == 0x000000, "Member 'IconTextButton_C_InitializeButton::CallFunc_GetBrushResource_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_InitializeButton, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000008, "Member 'IconTextButton_C_InitializeButton::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_InitializeButton, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'IconTextButton_C_InitializeButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function IconTextButton.IconTextButton_C.OnActionProgress
// 0x0004 (0x0004 - 0x0000)
struct IconTextButton_C_OnActionProgress final
{
public:
	float                                         HeldPercent;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IconTextButton_C_OnActionProgress) == 0x000004, "Wrong alignment on IconTextButton_C_OnActionProgress");
static_assert(sizeof(IconTextButton_C_OnActionProgress) == 0x000004, "Wrong size on IconTextButton_C_OnActionProgress");
static_assert(offsetof(IconTextButton_C_OnActionProgress, HeldPercent) == 0x000000, "Member 'IconTextButton_C_OnActionProgress::HeldPercent' has a wrong offset!");

// Function IconTextButton.IconTextButton_C.OnTriggeredInputActionChanged
// 0x0010 (0x0010 - 0x0000)
struct IconTextButton_C_OnTriggeredInputActionChanged final
{
public:
	struct FDataTableRowHandle                    NewTriggeredAction;                                // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(IconTextButton_C_OnTriggeredInputActionChanged) == 0x000008, "Wrong alignment on IconTextButton_C_OnTriggeredInputActionChanged");
static_assert(sizeof(IconTextButton_C_OnTriggeredInputActionChanged) == 0x000010, "Wrong size on IconTextButton_C_OnTriggeredInputActionChanged");
static_assert(offsetof(IconTextButton_C_OnTriggeredInputActionChanged, NewTriggeredAction) == 0x000000, "Member 'IconTextButton_C_OnTriggeredInputActionChanged::NewTriggeredAction' has a wrong offset!");

// Function IconTextButton.IconTextButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct IconTextButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IconTextButton_C_PreConstruct) == 0x000001, "Wrong alignment on IconTextButton_C_PreConstruct");
static_assert(sizeof(IconTextButton_C_PreConstruct) == 0x000001, "Wrong size on IconTextButton_C_PreConstruct");
static_assert(offsetof(IconTextButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'IconTextButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function IconTextButton.IconTextButton_C.Set Icon
// 0x00C0 (0x00C0 - 0x0000)
struct IconTextButton_C_Set_Icon final
{
public:
	struct FSlateBrush                            IconBrush_0;                                       // 0x0000(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(IconTextButton_C_Set_Icon) == 0x000010, "Wrong alignment on IconTextButton_C_Set_Icon");
static_assert(sizeof(IconTextButton_C_Set_Icon) == 0x0000C0, "Wrong size on IconTextButton_C_Set_Icon");
static_assert(offsetof(IconTextButton_C_Set_Icon, IconBrush_0) == 0x000000, "Member 'IconTextButton_C_Set_Icon::IconBrush_0' has a wrong offset!");

// Function IconTextButton.IconTextButton_C.Set Text
// 0x0018 (0x0018 - 0x0000)
struct IconTextButton_C_Set_Text final
{
public:
	class FText                                   ButtonText_0;                                      // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(IconTextButton_C_Set_Text) == 0x000008, "Wrong alignment on IconTextButton_C_Set_Text");
static_assert(sizeof(IconTextButton_C_Set_Text) == 0x000018, "Wrong size on IconTextButton_C_Set_Text");
static_assert(offsetof(IconTextButton_C_Set_Text, ButtonText_0) == 0x000000, "Member 'IconTextButton_C_Set_Text::ButtonText_0' has a wrong offset!");

// Function IconTextButton.IconTextButton_C.SetContentAlignment
// 0x0001 (0x0001 - 0x0000)
struct IconTextButton_C_SetContentAlignment final
{
public:
	EHorizontalAlignment                          ContentAlignment_0;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IconTextButton_C_SetContentAlignment) == 0x000001, "Wrong alignment on IconTextButton_C_SetContentAlignment");
static_assert(sizeof(IconTextButton_C_SetContentAlignment) == 0x000001, "Wrong size on IconTextButton_C_SetContentAlignment");
static_assert(offsetof(IconTextButton_C_SetContentAlignment, ContentAlignment_0) == 0x000000, "Member 'IconTextButton_C_SetContentAlignment::ContentAlignment_0' has a wrong offset!");

// Function IconTextButton.IconTextButton_C.SetControllerStyle
// 0x0018 (0x0018 - 0x0000)
struct IconTextButton_C_SetControllerStyle final
{
public:
	class UClass*                                 ControllerInputStyle_0;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IconTextButton_C_SetControllerStyle) == 0x000008, "Wrong alignment on IconTextButton_C_SetControllerStyle");
static_assert(sizeof(IconTextButton_C_SetControllerStyle) == 0x000018, "Wrong size on IconTextButton_C_SetControllerStyle");
static_assert(offsetof(IconTextButton_C_SetControllerStyle, ControllerInputStyle_0) == 0x000000, "Member 'IconTextButton_C_SetControllerStyle::ControllerInputStyle_0' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_SetControllerStyle, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'IconTextButton_C_SetControllerStyle::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_SetControllerStyle, CallFunc_GetCurrentInputType_ReturnValue) == 0x000010, "Member 'IconTextButton_C_SetControllerStyle::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_SetControllerStyle, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'IconTextButton_C_SetControllerStyle::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function IconTextButton.IconTextButton_C.SetMouseKeyboardStyle
// 0x0018 (0x0018 - 0x0000)
struct IconTextButton_C_SetMouseKeyboardStyle final
{
public:
	class UClass*                                 ControllerInputStyle_0;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IconTextButton_C_SetMouseKeyboardStyle) == 0x000008, "Wrong alignment on IconTextButton_C_SetMouseKeyboardStyle");
static_assert(sizeof(IconTextButton_C_SetMouseKeyboardStyle) == 0x000018, "Wrong size on IconTextButton_C_SetMouseKeyboardStyle");
static_assert(offsetof(IconTextButton_C_SetMouseKeyboardStyle, ControllerInputStyle_0) == 0x000000, "Member 'IconTextButton_C_SetMouseKeyboardStyle::ControllerInputStyle_0' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_SetMouseKeyboardStyle, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'IconTextButton_C_SetMouseKeyboardStyle::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_SetMouseKeyboardStyle, CallFunc_GetCurrentInputType_ReturnValue) == 0x000010, "Member 'IconTextButton_C_SetMouseKeyboardStyle::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_SetMouseKeyboardStyle, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'IconTextButton_C_SetMouseKeyboardStyle::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function IconTextButton.IconTextButton_C.SetTabLabelInfo
// 0x00E0 (0x00E0 - 0x0000)
struct IconTextButton_C_SetTabLabelInfo final
{
public:
	struct FFortTabButtonLabelInfo                TabLabelInfo;                                      // 0x0000(0x00E0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(IconTextButton_C_SetTabLabelInfo) == 0x000010, "Wrong alignment on IconTextButton_C_SetTabLabelInfo");
static_assert(sizeof(IconTextButton_C_SetTabLabelInfo) == 0x0000E0, "Wrong size on IconTextButton_C_SetTabLabelInfo");
static_assert(offsetof(IconTextButton_C_SetTabLabelInfo, TabLabelInfo) == 0x000000, "Member 'IconTextButton_C_SetTabLabelInfo::TabLabelInfo' has a wrong offset!");

// Function IconTextButton.IconTextButton_C.SetTextInternal
// 0x0020 (0x0020 - 0x0000)
struct IconTextButton_C_SetTextInternal final
{
public:
	class FText                                   InButtonText;                                      // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IconTextButton_C_SetTextInternal) == 0x000008, "Wrong alignment on IconTextButton_C_SetTextInternal");
static_assert(sizeof(IconTextButton_C_SetTextInternal) == 0x000020, "Wrong size on IconTextButton_C_SetTextInternal");
static_assert(offsetof(IconTextButton_C_SetTextInternal, InButtonText) == 0x000000, "Member 'IconTextButton_C_SetTextInternal::InButtonText' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_SetTextInternal, Temp_bool_Variable) == 0x000018, "Member 'IconTextButton_C_SetTextInternal::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_SetTextInternal, Temp_byte_Variable) == 0x000019, "Member 'IconTextButton_C_SetTextInternal::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_SetTextInternal, Temp_byte_Variable_1) == 0x00001A, "Member 'IconTextButton_C_SetTextInternal::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_SetTextInternal, CallFunc_TextIsEmpty_ReturnValue) == 0x00001B, "Member 'IconTextButton_C_SetTextInternal::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_SetTextInternal, K2Node_Select_Default) == 0x00001C, "Member 'IconTextButton_C_SetTextInternal::K2Node_Select_Default' has a wrong offset!");

// Function IconTextButton.IconTextButton_C.ShowIcon
// 0x0001 (0x0001 - 0x0000)
struct IconTextButton_C_ShowIcon final
{
public:
	bool                                          bShouldShow;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IconTextButton_C_ShowIcon) == 0x000001, "Wrong alignment on IconTextButton_C_ShowIcon");
static_assert(sizeof(IconTextButton_C_ShowIcon) == 0x000001, "Wrong size on IconTextButton_C_ShowIcon");
static_assert(offsetof(IconTextButton_C_ShowIcon, bShouldShow) == 0x000000, "Member 'IconTextButton_C_ShowIcon::bShouldShow' has a wrong offset!");

// Function IconTextButton.IconTextButton_C.UpdateContentAlignment
// 0x0018 (0x0018 - 0x0000)
struct IconTextButton_C_UpdateContentAlignment final
{
public:
	class UPanelSlot*                             CallFunc_GetContentSlot_ReturnValue;               // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBorderSlot*                            K2Node_DynamicCast_AsBorder_Slot;                  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IconTextButton_C_UpdateContentAlignment) == 0x000008, "Wrong alignment on IconTextButton_C_UpdateContentAlignment");
static_assert(sizeof(IconTextButton_C_UpdateContentAlignment) == 0x000018, "Wrong size on IconTextButton_C_UpdateContentAlignment");
static_assert(offsetof(IconTextButton_C_UpdateContentAlignment, CallFunc_GetContentSlot_ReturnValue) == 0x000000, "Member 'IconTextButton_C_UpdateContentAlignment::CallFunc_GetContentSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_UpdateContentAlignment, K2Node_DynamicCast_AsBorder_Slot) == 0x000008, "Member 'IconTextButton_C_UpdateContentAlignment::K2Node_DynamicCast_AsBorder_Slot' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_UpdateContentAlignment, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'IconTextButton_C_UpdateContentAlignment::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function IconTextButton.IconTextButton_C.UpdateStyle
// 0x0003 (0x0003 - 0x0000)
struct IconTextButton_C_UpdateStyle final
{
public:
	bool                                          UsingGamepad;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsErebus_ReturnValue;                     // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IconTextButton_C_UpdateStyle) == 0x000001, "Wrong alignment on IconTextButton_C_UpdateStyle");
static_assert(sizeof(IconTextButton_C_UpdateStyle) == 0x000003, "Wrong size on IconTextButton_C_UpdateStyle");
static_assert(offsetof(IconTextButton_C_UpdateStyle, UsingGamepad) == 0x000000, "Member 'IconTextButton_C_UpdateStyle::UsingGamepad' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_UpdateStyle, CallFunc_IsErebus_ReturnValue) == 0x000001, "Member 'IconTextButton_C_UpdateStyle::CallFunc_IsErebus_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_UpdateStyle, CallFunc_BooleanOR_ReturnValue) == 0x000002, "Member 'IconTextButton_C_UpdateStyle::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function IconTextButton.IconTextButton_C.UpdateText
// 0x0058 (0x0058 - 0x0000)
struct IconTextButton_C_UpdateText final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetDisplayText_ReturnValue;               // 0x0008(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0020(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue_1;                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B[0x5];                                       // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_1;                           // 0x0040(0x0018)()
};
static_assert(alignof(IconTextButton_C_UpdateText) == 0x000008, "Wrong alignment on IconTextButton_C_UpdateText");
static_assert(sizeof(IconTextButton_C_UpdateText) == 0x000058, "Wrong size on IconTextButton_C_UpdateText");
static_assert(offsetof(IconTextButton_C_UpdateText, Temp_bool_Variable) == 0x000000, "Member 'IconTextButton_C_UpdateText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_UpdateText, Temp_bool_Variable_1) == 0x000001, "Member 'IconTextButton_C_UpdateText::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_UpdateText, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'IconTextButton_C_UpdateText::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_UpdateText, CallFunc_TextIsEmpty_ReturnValue) == 0x000003, "Member 'IconTextButton_C_UpdateText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_UpdateText, CallFunc_GetDisplayText_ReturnValue) == 0x000008, "Member 'IconTextButton_C_UpdateText::CallFunc_GetDisplayText_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_UpdateText, K2Node_Select_Default) == 0x000020, "Member 'IconTextButton_C_UpdateText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_UpdateText, CallFunc_TextIsEmpty_ReturnValue_1) == 0x000038, "Member 'IconTextButton_C_UpdateText::CallFunc_TextIsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_UpdateText, CallFunc_Not_PreBool_ReturnValue_1) == 0x000039, "Member 'IconTextButton_C_UpdateText::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_UpdateText, CallFunc_BooleanAND_ReturnValue) == 0x00003A, "Member 'IconTextButton_C_UpdateText::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_UpdateText, K2Node_Select_Default_1) == 0x000040, "Member 'IconTextButton_C_UpdateText::K2Node_Select_Default_1' has a wrong offset!");

// Function IconTextButton.IconTextButton_C.UpdateTextAndStyle
// 0x0002 (0x0002 - 0x0000)
struct IconTextButton_C_UpdateTextAndStyle final
{
public:
	ECommonInputType                              InputType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IconTextButton_C_UpdateTextAndStyle) == 0x000001, "Wrong alignment on IconTextButton_C_UpdateTextAndStyle");
static_assert(sizeof(IconTextButton_C_UpdateTextAndStyle) == 0x000002, "Wrong size on IconTextButton_C_UpdateTextAndStyle");
static_assert(offsetof(IconTextButton_C_UpdateTextAndStyle, InputType) == 0x000000, "Member 'IconTextButton_C_UpdateTextAndStyle::InputType' has a wrong offset!");
static_assert(offsetof(IconTextButton_C_UpdateTextAndStyle, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000001, "Member 'IconTextButton_C_UpdateTextAndStyle::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function IconTextButton.IconTextButton_C.UpdateTextStyle
// 0x0008 (0x0008 - 0x0000)
struct IconTextButton_C_UpdateTextStyle final
{
public:
	TSubclassOf<class UCommonTextStyle>           CallFunc_GetCurrentTextStyleClass_ReturnValue;     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(IconTextButton_C_UpdateTextStyle) == 0x000008, "Wrong alignment on IconTextButton_C_UpdateTextStyle");
static_assert(sizeof(IconTextButton_C_UpdateTextStyle) == 0x000008, "Wrong size on IconTextButton_C_UpdateTextStyle");
static_assert(offsetof(IconTextButton_C_UpdateTextStyle, CallFunc_GetCurrentTextStyleClass_ReturnValue) == 0x000000, "Member 'IconTextButton_C_UpdateTextStyle::CallFunc_GetCurrentTextStyleClass_ReturnValue' has a wrong offset!");

}

