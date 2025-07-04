﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DynamicUI

#include "Basic.hpp"


namespace SDK
{

// Enum DynamicUI.EDynamicUIStrength
// NumValues: 0x0005
enum class EDynamicUIStrength : uint8
{
	Weak                                     = 0,
	Medium                                   = 1,
	Strong                                   = 2,
	Required                                 = 3,
	EDynamicUIStrength_MAX                   = 4,
};

// Enum DynamicUI.EDynamicUIAnchor
// NumValues: 0x000A
enum class EDynamicUIAnchor : uint32
{
	TopLeft                                  = 0,
	TopCenter                                = 1,
	TopRight                                 = 2,
	CenterLeft                               = 3,
	CenterCenter                             = 4,
	CenterRight                              = 5,
	BottomLeft                               = 6,
	BottomCenter                             = 7,
	BottomRight                              = 8,
	EDynamicUIAnchor_MAX                     = 9,
};

// Enum DynamicUI.EDynamicUIAspectRatio
// NumValues: 0x0008
enum class EDynamicUIAspectRatio : uint32
{
	AspectRatio_1_1                          = 0,
	AspectRatio_4_3                          = 1,
	AspectRatio_5_4                          = 2,
	AspectRatio_16_9                         = 3,
	AspectRatio_16_10                        = 4,
	AspectRatio_21_9                         = 5,
	Custom                                   = 6,
	EDynamicUIAspectRatio_MAX                = 7,
};

// Enum DynamicUI.EDynamicUIZOrder
// NumValues: 0x0009
enum class EDynamicUIZOrder : uint32
{
	Back                                     = 1000,
	Middle                                   = 2000,
	Front                                    = 3000,
	Custom                                   = 2500,
	CustomMin                                = 0,
	CustomMax                                = 5000,
	Loading                                  = 30000,
	Top                                      = 50000,
	EDynamicUIZOrder_MAX                     = 50001,
};

// ScriptStruct DynamicUI.DynamicUIAspectRatio
// 0x0008 (0x0008 - 0x0000)
struct FDynamicUIAspectRatio final
{
public:
	EDynamicUIAspectRatio                         AspectRatio;                                       // 0x0000(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CustomAspectRatio;                                 // 0x0004(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDynamicUIAspectRatio) == 0x000004, "Wrong alignment on FDynamicUIAspectRatio");
static_assert(sizeof(FDynamicUIAspectRatio) == 0x000008, "Wrong size on FDynamicUIAspectRatio");
static_assert(offsetof(FDynamicUIAspectRatio, AspectRatio) == 0x000000, "Member 'FDynamicUIAspectRatio::AspectRatio' has a wrong offset!");
static_assert(offsetof(FDynamicUIAspectRatio, CustomAspectRatio) == 0x000004, "Member 'FDynamicUIAspectRatio::CustomAspectRatio' has a wrong offset!");

// ScriptStruct DynamicUI.DynamicUIContraintWidgetTarget
// 0x0030 (0x0030 - 0x0000)
struct FDynamicUIContraintWidgetTarget final
{
public:
	class FName                                   WidgetPath;                                        // 0x0000(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   WidgetClass;                                       // 0x0008(0x0028)(Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDynamicUIContraintWidgetTarget) == 0x000008, "Wrong alignment on FDynamicUIContraintWidgetTarget");
static_assert(sizeof(FDynamicUIContraintWidgetTarget) == 0x000030, "Wrong size on FDynamicUIContraintWidgetTarget");
static_assert(offsetof(FDynamicUIContraintWidgetTarget, WidgetPath) == 0x000000, "Member 'FDynamicUIContraintWidgetTarget::WidgetPath' has a wrong offset!");
static_assert(offsetof(FDynamicUIContraintWidgetTarget, WidgetClass) == 0x000008, "Member 'FDynamicUIContraintWidgetTarget::WidgetClass' has a wrong offset!");

// ScriptStruct DynamicUI.DynamicUIAllowed
// 0x0070 (0x0070 - 0x0000)
struct FDynamicUIAllowed final
{
public:
	TSoftClassPtr<class UClass>                   Widget;                                            // 0x0000(0x0028)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDynamicUIZOrder                              ZOrder;                                            // 0x0028(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CustomZOrder;                                      // 0x002C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   UniqueId;                                          // 0x0030(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UCommonInputActionDomain> ActionDomain;                                     // 0x0038(0x0028)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDynamicUIConstraintBase*               LayoutConstraint;                                  // 0x0060(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsUnique;                                         // 0x0068(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseActionDomain;                                  // 0x0069(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6A[0x6];                                       // 0x006A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FDynamicUIAllowed) == 0x000008, "Wrong alignment on FDynamicUIAllowed");
static_assert(sizeof(FDynamicUIAllowed) == 0x000070, "Wrong size on FDynamicUIAllowed");
static_assert(offsetof(FDynamicUIAllowed, Widget) == 0x000000, "Member 'FDynamicUIAllowed::Widget' has a wrong offset!");
static_assert(offsetof(FDynamicUIAllowed, ZOrder) == 0x000028, "Member 'FDynamicUIAllowed::ZOrder' has a wrong offset!");
static_assert(offsetof(FDynamicUIAllowed, CustomZOrder) == 0x00002C, "Member 'FDynamicUIAllowed::CustomZOrder' has a wrong offset!");
static_assert(offsetof(FDynamicUIAllowed, UniqueId) == 0x000030, "Member 'FDynamicUIAllowed::UniqueId' has a wrong offset!");
static_assert(offsetof(FDynamicUIAllowed, ActionDomain) == 0x000038, "Member 'FDynamicUIAllowed::ActionDomain' has a wrong offset!");
static_assert(offsetof(FDynamicUIAllowed, LayoutConstraint) == 0x000060, "Member 'FDynamicUIAllowed::LayoutConstraint' has a wrong offset!");
static_assert(offsetof(FDynamicUIAllowed, bIsUnique) == 0x000068, "Member 'FDynamicUIAllowed::bIsUnique' has a wrong offset!");
static_assert(offsetof(FDynamicUIAllowed, bUseActionDomain) == 0x000069, "Member 'FDynamicUIAllowed::bUseActionDomain' has a wrong offset!");

// ScriptStruct DynamicUI.DynamicUIUnallowed
// 0x0038 (0x0038 - 0x0000)
struct FDynamicUIUnallowed final
{
public:
	TSoftClassPtr<class UClass>                   Widget;                                            // 0x0000(0x0028)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseUniqueID;                                      // 0x0028(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   UniqueId;                                          // 0x002C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIncludeAll;                                       // 0x0030(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FDynamicUIUnallowed) == 0x000008, "Wrong alignment on FDynamicUIUnallowed");
static_assert(sizeof(FDynamicUIUnallowed) == 0x000038, "Wrong size on FDynamicUIUnallowed");
static_assert(offsetof(FDynamicUIUnallowed, Widget) == 0x000000, "Member 'FDynamicUIUnallowed::Widget' has a wrong offset!");
static_assert(offsetof(FDynamicUIUnallowed, bUseUniqueID) == 0x000028, "Member 'FDynamicUIUnallowed::bUseUniqueID' has a wrong offset!");
static_assert(offsetof(FDynamicUIUnallowed, UniqueId) == 0x00002C, "Member 'FDynamicUIUnallowed::UniqueId' has a wrong offset!");
static_assert(offsetof(FDynamicUIUnallowed, bIncludeAll) == 0x000030, "Member 'FDynamicUIUnallowed::bIncludeAll' has a wrong offset!");

// ScriptStruct DynamicUI.DynamicUIPreload
// 0x0028 (0x0028 - 0x0000)
struct FDynamicUIPreload final
{
public:
	TSoftClassPtr<class UClass>                   Widget;                                            // 0x0000(0x0028)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDynamicUIPreload) == 0x000008, "Wrong alignment on FDynamicUIPreload");
static_assert(sizeof(FDynamicUIPreload) == 0x000028, "Wrong size on FDynamicUIPreload");
static_assert(offsetof(FDynamicUIPreload, Widget) == 0x000000, "Member 'FDynamicUIPreload::Widget' has a wrong offset!");

// ScriptStruct DynamicUI.ContextData
// 0x0010 (0x0010 - 0x0000)
struct FContextData final
{
public:
	TArray<TWeakObjectPtr<class UObject>>         Contexts;                                          // 0x0000(0x0010)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
};
static_assert(alignof(FContextData) == 0x000008, "Wrong alignment on FContextData");
static_assert(sizeof(FContextData) == 0x000010, "Wrong size on FContextData");
static_assert(offsetof(FContextData, Contexts) == 0x000000, "Member 'FContextData::Contexts' has a wrong offset!");

// ScriptStruct DynamicUI.DirectorData
// 0x0038 (0x0038 - 0x0000)
struct FDirectorData final
{
public:
	TSoftClassPtr<class UClass>                   DirectorClass;                                     // 0x0000(0x0028)(Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                  Instance;                                          // 0x0028(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_30[0x8];                                       // 0x0030(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FDirectorData) == 0x000008, "Wrong alignment on FDirectorData");
static_assert(sizeof(FDirectorData) == 0x000038, "Wrong size on FDirectorData");
static_assert(offsetof(FDirectorData, DirectorClass) == 0x000000, "Member 'FDirectorData::DirectorClass' has a wrong offset!");
static_assert(offsetof(FDirectorData, Instance) == 0x000028, "Member 'FDirectorData::Instance' has a wrong offset!");

// ScriptStruct DynamicUI.DynamicUIPlayerData
// 0x00E0 (0x00E0 - 0x0000)
struct FDynamicUIPlayerData final
{
public:
	uint8                                         Pad_0[0x40];                                       // 0x0000(0x0040)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, struct FDirectorData>     ActiveDirectors;                                   // 0x0040(0x0050)(Transient, NativeAccessSpecifierPublic)
	TMap<class UDynamicUIScene*, struct FContextData> ActiveScenes;                                  // 0x0090(0x0050)(Transient, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDynamicUIPlayerData) == 0x000008, "Wrong alignment on FDynamicUIPlayerData");
static_assert(sizeof(FDynamicUIPlayerData) == 0x0000E0, "Wrong size on FDynamicUIPlayerData");
static_assert(offsetof(FDynamicUIPlayerData, ActiveDirectors) == 0x000040, "Member 'FDynamicUIPlayerData::ActiveDirectors' has a wrong offset!");
static_assert(offsetof(FDynamicUIPlayerData, ActiveScenes) == 0x000090, "Member 'FDynamicUIPlayerData::ActiveScenes' has a wrong offset!");

}

