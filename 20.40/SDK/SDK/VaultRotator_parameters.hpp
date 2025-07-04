﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VaultRotator

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function VaultRotator.VaultRotator_C.ToggleBackgroundText
// 0x0001 (0x0001 - 0x0000)
struct VaultRotator_C_ToggleBackgroundText final
{
public:
	bool                                          bDisplayText;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VaultRotator_C_ToggleBackgroundText) == 0x000001, "Wrong alignment on VaultRotator_C_ToggleBackgroundText");
static_assert(sizeof(VaultRotator_C_ToggleBackgroundText) == 0x000001, "Wrong size on VaultRotator_C_ToggleBackgroundText");
static_assert(offsetof(VaultRotator_C_ToggleBackgroundText, bDisplayText) == 0x000000, "Member 'VaultRotator_C_ToggleBackgroundText::bDisplayText' has a wrong offset!");

// Function VaultRotator.VaultRotator_C.SwitchPCLighting_LOWDetail
// 0x0001 (0x0001 - 0x0000)
struct VaultRotator_C_SwitchPCLighting_LOWDetail final
{
public:
	bool                                          Visibility;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VaultRotator_C_SwitchPCLighting_LOWDetail) == 0x000001, "Wrong alignment on VaultRotator_C_SwitchPCLighting_LOWDetail");
static_assert(sizeof(VaultRotator_C_SwitchPCLighting_LOWDetail) == 0x000001, "Wrong size on VaultRotator_C_SwitchPCLighting_LOWDetail");
static_assert(offsetof(VaultRotator_C_SwitchPCLighting_LOWDetail, Visibility) == 0x000000, "Member 'VaultRotator_C_SwitchPCLighting_LOWDetail::Visibility' has a wrong offset!");

// Function VaultRotator.VaultRotator_C.SwitchPCLighting
// 0x0001 (0x0001 - 0x0000)
struct VaultRotator_C_SwitchPCLighting final
{
public:
	bool                                          Visibility;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VaultRotator_C_SwitchPCLighting) == 0x000001, "Wrong alignment on VaultRotator_C_SwitchPCLighting");
static_assert(sizeof(VaultRotator_C_SwitchPCLighting) == 0x000001, "Wrong size on VaultRotator_C_SwitchPCLighting");
static_assert(offsetof(VaultRotator_C_SwitchPCLighting, Visibility) == 0x000000, "Member 'VaultRotator_C_SwitchPCLighting::Visibility' has a wrong offset!");

// Function VaultRotator.VaultRotator_C.SwitchMobileLighting
// 0x0001 (0x0001 - 0x0000)
struct VaultRotator_C_SwitchMobileLighting final
{
public:
	bool                                          Visibility;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VaultRotator_C_SwitchMobileLighting) == 0x000001, "Wrong alignment on VaultRotator_C_SwitchMobileLighting");
static_assert(sizeof(VaultRotator_C_SwitchMobileLighting) == 0x000001, "Wrong size on VaultRotator_C_SwitchMobileLighting");
static_assert(offsetof(VaultRotator_C_SwitchMobileLighting, Visibility) == 0x000000, "Member 'VaultRotator_C_SwitchMobileLighting::Visibility' has a wrong offset!");

// Function VaultRotator.VaultRotator_C.SetBackgroundString
// 0x0028 (0x0028 - 0x0000)
struct VaultRotator_C_SetBackgroundString final
{
public:
	class FText                                   CustomText;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UUI_Background_Strings_C*               CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VaultRotator_C_SetBackgroundString) == 0x000008, "Wrong alignment on VaultRotator_C_SetBackgroundString");
static_assert(sizeof(VaultRotator_C_SetBackgroundString) == 0x000028, "Wrong size on VaultRotator_C_SetBackgroundString");
static_assert(offsetof(VaultRotator_C_SetBackgroundString, CustomText) == 0x000000, "Member 'VaultRotator_C_SetBackgroundString::CustomText' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_SetBackgroundString, CallFunc_Create_ReturnValue) == 0x000018, "Member 'VaultRotator_C_SetBackgroundString::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_SetBackgroundString, CallFunc_TextIsEmpty_ReturnValue) == 0x000020, "Member 'VaultRotator_C_SetBackgroundString::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");

// Function VaultRotator.VaultRotator_C.SetBackgroundColor
// 0x0020 (0x0020 - 0x0000)
struct VaultRotator_C_SetBackgroundColor final
{
public:
	struct FLinearColor                           RGBA0;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           RGBA1;                                             // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VaultRotator_C_SetBackgroundColor) == 0x000004, "Wrong alignment on VaultRotator_C_SetBackgroundColor");
static_assert(sizeof(VaultRotator_C_SetBackgroundColor) == 0x000020, "Wrong size on VaultRotator_C_SetBackgroundColor");
static_assert(offsetof(VaultRotator_C_SetBackgroundColor, RGBA0) == 0x000000, "Member 'VaultRotator_C_SetBackgroundColor::RGBA0' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_SetBackgroundColor, RGBA1) == 0x000010, "Member 'VaultRotator_C_SetBackgroundColor::RGBA1' has a wrong offset!");

// Function VaultRotator.VaultRotator_C.PlaySoundWhenEnabled
// 0x0010 (0x0010 - 0x0000)
struct VaultRotator_C_PlaySoundWhenEnabled final
{
public:
	class USoundBase*                             Sound;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSoundEnabled_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VaultRotator_C_PlaySoundWhenEnabled) == 0x000008, "Wrong alignment on VaultRotator_C_PlaySoundWhenEnabled");
static_assert(sizeof(VaultRotator_C_PlaySoundWhenEnabled) == 0x000010, "Wrong size on VaultRotator_C_PlaySoundWhenEnabled");
static_assert(offsetof(VaultRotator_C_PlaySoundWhenEnabled, Sound) == 0x000000, "Member 'VaultRotator_C_PlaySoundWhenEnabled::Sound' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_PlaySoundWhenEnabled, CallFunc_IsSoundEnabled_ReturnValue) == 0x000008, "Member 'VaultRotator_C_PlaySoundWhenEnabled::CallFunc_IsSoundEnabled_ReturnValue' has a wrong offset!");

// Function VaultRotator.VaultRotator_C.OnUpdateBackgroundColor
// 0x0001 (0x0001 - 0x0000)
struct VaultRotator_C_OnUpdateBackgroundColor final
{
public:
	bool                                          bEnableAutotestBackground;                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VaultRotator_C_OnUpdateBackgroundColor) == 0x000001, "Wrong alignment on VaultRotator_C_OnUpdateBackgroundColor");
static_assert(sizeof(VaultRotator_C_OnUpdateBackgroundColor) == 0x000001, "Wrong size on VaultRotator_C_OnUpdateBackgroundColor");
static_assert(offsetof(VaultRotator_C_OnUpdateBackgroundColor, bEnableAutotestBackground) == 0x000000, "Member 'VaultRotator_C_OnUpdateBackgroundColor::bEnableAutotestBackground' has a wrong offset!");

// Function VaultRotator.VaultRotator_C.OnTargetZoomLevelSet
// 0x0004 (0x0004 - 0x0000)
struct VaultRotator_C_OnTargetZoomLevelSet final
{
public:
	float                                         TargetZoomLevel_0;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VaultRotator_C_OnTargetZoomLevelSet) == 0x000004, "Wrong alignment on VaultRotator_C_OnTargetZoomLevelSet");
static_assert(sizeof(VaultRotator_C_OnTargetZoomLevelSet) == 0x000004, "Wrong size on VaultRotator_C_OnTargetZoomLevelSet");
static_assert(offsetof(VaultRotator_C_OnTargetZoomLevelSet, TargetZoomLevel_0) == 0x000000, "Member 'VaultRotator_C_OnTargetZoomLevelSet::TargetZoomLevel_0' has a wrong offset!");

// Function VaultRotator.VaultRotator_C.OnSetBackgroundMessageText
// 0x0018 (0x0018 - 0x0000)
struct VaultRotator_C_OnSetBackgroundMessageText final
{
public:
	class FText                                   BackgroundMessageText;                             // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(VaultRotator_C_OnSetBackgroundMessageText) == 0x000008, "Wrong alignment on VaultRotator_C_OnSetBackgroundMessageText");
static_assert(sizeof(VaultRotator_C_OnSetBackgroundMessageText) == 0x000018, "Wrong size on VaultRotator_C_OnSetBackgroundMessageText");
static_assert(offsetof(VaultRotator_C_OnSetBackgroundMessageText, BackgroundMessageText) == 0x000000, "Member 'VaultRotator_C_OnSetBackgroundMessageText::BackgroundMessageText' has a wrong offset!");

// Function VaultRotator.VaultRotator_C.OnCameraTransitionReady
// 0x0018 (0x0018 - 0x0000)
struct VaultRotator_C_OnCameraTransitionReady final
{
public:
	bool                                          bPrimaryToSecondary;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UFortAccountItemDefinition*       PrimaryRequestedItem;                              // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSceneTransitionOptions                Options;                                           // 0x0010(0x0002)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(VaultRotator_C_OnCameraTransitionReady) == 0x000008, "Wrong alignment on VaultRotator_C_OnCameraTransitionReady");
static_assert(sizeof(VaultRotator_C_OnCameraTransitionReady) == 0x000018, "Wrong size on VaultRotator_C_OnCameraTransitionReady");
static_assert(offsetof(VaultRotator_C_OnCameraTransitionReady, bPrimaryToSecondary) == 0x000000, "Member 'VaultRotator_C_OnCameraTransitionReady::bPrimaryToSecondary' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_OnCameraTransitionReady, PrimaryRequestedItem) == 0x000008, "Member 'VaultRotator_C_OnCameraTransitionReady::PrimaryRequestedItem' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_OnCameraTransitionReady, Options) == 0x000010, "Member 'VaultRotator_C_OnCameraTransitionReady::Options' has a wrong offset!");

// Function VaultRotator.VaultRotator_C.LightControl
// 0x0018 (0x0018 - 0x0000)
struct VaultRotator_C_LightControl final
{
public:
	bool                                          Active;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMobileGame_ReturnValue;                 // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsErebus_ReturnValue;                     // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsErebus_ReturnValue_1;                   // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetShadowQuality_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VaultRotator_C_LightControl) == 0x000008, "Wrong alignment on VaultRotator_C_LightControl");
static_assert(sizeof(VaultRotator_C_LightControl) == 0x000018, "Wrong size on VaultRotator_C_LightControl");
static_assert(offsetof(VaultRotator_C_LightControl, Active) == 0x000000, "Member 'VaultRotator_C_LightControl::Active' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_LightControl, CallFunc_IsMobileGame_ReturnValue) == 0x000001, "Member 'VaultRotator_C_LightControl::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_LightControl, CallFunc_IsErebus_ReturnValue) == 0x000002, "Member 'VaultRotator_C_LightControl::CallFunc_IsErebus_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_LightControl, CallFunc_IsErebus_ReturnValue_1) == 0x000003, "Member 'VaultRotator_C_LightControl::CallFunc_IsErebus_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_LightControl, CallFunc_BooleanOR_ReturnValue) == 0x000004, "Member 'VaultRotator_C_LightControl::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_LightControl, CallFunc_GetGameUserSettings_ReturnValue) == 0x000008, "Member 'VaultRotator_C_LightControl::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_LightControl, CallFunc_GetShadowQuality_ReturnValue) == 0x000010, "Member 'VaultRotator_C_LightControl::CallFunc_GetShadowQuality_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_LightControl, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000014, "Member 'VaultRotator_C_LightControl::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_LightControl, CallFunc_BooleanOR_ReturnValue_1) == 0x000015, "Member 'VaultRotator_C_LightControl::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_LightControl, CallFunc_BooleanOR_ReturnValue_2) == 0x000016, "Member 'VaultRotator_C_LightControl::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");

// Function VaultRotator.VaultRotator_C.ExecuteUbergraph_VaultRotator
// 0x0630 (0x0630 - 0x0000)
struct VaultRotator_C_ExecuteUbergraph_VaultRotator final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsErebus_ReturnValue;                     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimelineLength_ReturnValue;            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimelineLength_ReturnValue_1;          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetPlaybackPosition_ReturnValue;          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetPlaybackPosition_ReturnValue_1;        // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetShadowQuality_ReturnValue;             // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakVector_X;                            // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_Select_Default_1;                           // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0xC];                                       // 0x0084(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0090(0x0060)(IsPlainOldData, NoDestructor)
	struct FInterpolatedTransitionCamera          CallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue; // 0x00F0(0x0070)(NoDestructor)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_2;                // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeTransform_SweepHitResult;   // 0x0178(0x00E0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_BreakVector_X_1;                          // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_264[0x4];                                      // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_3;                // 0x0268(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x0280(0x0060)(IsPlainOldData, NoDestructor)
	struct FInterpolatedTransitionCamera          CallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue_1; // 0x02E0(0x0070)(NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeTransform_SweepHitResult_1; // 0x0350(0x00E0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0430(0x00E0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult_1;  // 0x0510(0x00E0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          K2Node_Event_bPrimaryToSecondary;                  // 0x05F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F1[0x7];                                      // 0x05F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UFortAccountItemDefinition*       K2Node_Event_PrimaryRequestedItem;                 // 0x05F8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSceneTransitionOptions                K2Node_Event_Options;                              // 0x0600(0x0002)(ConstParm, NoDestructor)
	bool                                          CallFunc_IsMobileGame_ReturnValue;                 // 0x0602(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0603(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0604(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0605(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0606(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_607[0x1];                                      // 0x0607(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_TargetZoomLevel;                      // 0x0608(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x060C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x060D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x060E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x060F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Event_BackgroundMessageText;                // 0x0610(0x0018)(ConstParm)
	bool                                          K2Node_Event_bEnableAutotestBackground;            // 0x0628(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VaultRotator_C_ExecuteUbergraph_VaultRotator) == 0x000010, "Wrong alignment on VaultRotator_C_ExecuteUbergraph_VaultRotator");
static_assert(sizeof(VaultRotator_C_ExecuteUbergraph_VaultRotator) == 0x000630, "Wrong size on VaultRotator_C_ExecuteUbergraph_VaultRotator");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, EntryPoint) == 0x000000, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::EntryPoint' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_IsErebus_ReturnValue) == 0x000004, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_IsErebus_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, Temp_byte_Variable) == 0x000005, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, Temp_byte_Variable_1) == 0x000006, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, K2Node_SwitchEnum_CmpSuccess) == 0x000007, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_GetTimelineLength_ReturnValue) == 0x000014, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_GetTimelineLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_GetTimelineLength_ReturnValue_1) == 0x000018, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_GetTimelineLength_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_GetPlaybackPosition_ReturnValue) == 0x00001C, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_GetPlaybackPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_GetPlaybackPosition_ReturnValue_1) == 0x000020, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_GetPlaybackPosition_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000024, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000028, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, K2Node_Select_Default) == 0x00002C, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_GetGameUserSettings_ReturnValue) == 0x000030, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_GetShadowQuality_ReturnValue) == 0x000038, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_GetShadowQuality_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00003C, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_MakeRotator_ReturnValue) == 0x000040, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_BreakVector_X) == 0x000058, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_BreakVector_Y) == 0x00005C, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_BreakVector_Z) == 0x000060, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_MakeRotator_ReturnValue_1) == 0x000068, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, K2Node_Select_Default_1) == 0x000080, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_MakeTransform_ReturnValue) == 0x000090, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue) == 0x0000F0, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_MakeRotator_ReturnValue_2) == 0x000160, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_MakeRotator_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_K2_SetRelativeTransform_SweepHitResult) == 0x000178, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_K2_SetRelativeTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_BreakVector_X_1) == 0x000258, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_BreakVector_Y_1) == 0x00025C, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_BreakVector_Z_1) == 0x000260, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_MakeRotator_ReturnValue_3) == 0x000268, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_MakeRotator_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_MakeTransform_ReturnValue_1) == 0x000280, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue_1) == 0x0002E0, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_K2_SetRelativeTransform_SweepHitResult_1) == 0x000350, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_K2_SetRelativeTransform_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000430, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_K2_SetRelativeRotation_SweepHitResult_1) == 0x000510, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_K2_SetRelativeRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, K2Node_Event_bPrimaryToSecondary) == 0x0005F0, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::K2Node_Event_bPrimaryToSecondary' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, K2Node_Event_PrimaryRequestedItem) == 0x0005F8, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::K2Node_Event_PrimaryRequestedItem' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, K2Node_Event_Options) == 0x000600, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::K2Node_Event_Options' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_IsMobileGame_ReturnValue) == 0x000602, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_BooleanOR_ReturnValue) == 0x000603, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, K2Node_SwitchEnum_CmpSuccess_1) == 0x000604, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_BooleanOR_ReturnValue_1) == 0x000605, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_BooleanOR_ReturnValue_2) == 0x000606, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, K2Node_Event_TargetZoomLevel) == 0x000608, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::K2Node_Event_TargetZoomLevel' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x00060C, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x00060D, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_Less_FloatFloat_ReturnValue) == 0x00060E, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00060F, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, K2Node_Event_BackgroundMessageText) == 0x000610, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::K2Node_Event_BackgroundMessageText' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, K2Node_Event_bEnableAutotestBackground) == 0x000628, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::K2Node_Event_bEnableAutotestBackground' has a wrong offset!");

}

