﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SOMRuntime

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct SOMRuntime.ScriptedObjectMovement_AStarGraphWrapper
// 0x0001 (0x0001 - 0x0000)
struct FScriptedObjectMovement_AStarGraphWrapper final
{
public:
	uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FScriptedObjectMovement_AStarGraphWrapper) == 0x000001, "Wrong alignment on FScriptedObjectMovement_AStarGraphWrapper");
static_assert(sizeof(FScriptedObjectMovement_AStarGraphWrapper) == 0x000001, "Wrong size on FScriptedObjectMovement_AStarGraphWrapper");

// ScriptStruct SOMRuntime.ScriptedObjectMovement_DynamicPathContext
// 0x0038 (0x0038 - 0x0000)
struct FScriptedObjectMovement_DynamicPathContext final
{
public:
	class UFortScriptedObjectMovement_Slot*       SourceSlot;                                        // 0x0000(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortScriptedObjectMovement_Slot*       DestinationSlot;                                   // 0x0008(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class IFortScriptedObjectMovement_GridProviderInterface> GridProvider;          // 0x0010(0x0010)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_20[0x18];                                      // 0x0020(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FScriptedObjectMovement_DynamicPathContext) == 0x000008, "Wrong alignment on FScriptedObjectMovement_DynamicPathContext");
static_assert(sizeof(FScriptedObjectMovement_DynamicPathContext) == 0x000038, "Wrong size on FScriptedObjectMovement_DynamicPathContext");
static_assert(offsetof(FScriptedObjectMovement_DynamicPathContext, SourceSlot) == 0x000000, "Member 'FScriptedObjectMovement_DynamicPathContext::SourceSlot' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_DynamicPathContext, DestinationSlot) == 0x000008, "Member 'FScriptedObjectMovement_DynamicPathContext::DestinationSlot' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_DynamicPathContext, GridProvider) == 0x000010, "Member 'FScriptedObjectMovement_DynamicPathContext::GridProvider' has a wrong offset!");

// ScriptStruct SOMRuntime.ScriptedObjectMovement_Grid
// 0x00C8 (0x00C8 - 0x0000)
struct FScriptedObjectMovement_Grid final
{
public:
	uint8                                         Pad_0[0x50];                                       // 0x0000(0x0050)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CellSize;                                          // 0x0050(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_68[0x60];                                      // 0x0068(0x0060)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FScriptedObjectMovement_Grid) == 0x000008, "Wrong alignment on FScriptedObjectMovement_Grid");
static_assert(sizeof(FScriptedObjectMovement_Grid) == 0x0000C8, "Wrong size on FScriptedObjectMovement_Grid");
static_assert(offsetof(FScriptedObjectMovement_Grid, CellSize) == 0x000050, "Member 'FScriptedObjectMovement_Grid::CellSize' has a wrong offset!");

// ScriptStruct SOMRuntime.FortScriptedObjectMovementPhaseData
// 0x0010 (0x0010 - 0x0000)
struct FFortScriptedObjectMovementPhaseData final
{
public:
	TArray<class AFortScriptedObjectMovement_Structure*> Structures;                                 // 0x0000(0x0010)(Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
};
static_assert(alignof(FFortScriptedObjectMovementPhaseData) == 0x000008, "Wrong alignment on FFortScriptedObjectMovementPhaseData");
static_assert(sizeof(FFortScriptedObjectMovementPhaseData) == 0x000010, "Wrong size on FFortScriptedObjectMovementPhaseData");
static_assert(offsetof(FFortScriptedObjectMovementPhaseData, Structures) == 0x000000, "Member 'FFortScriptedObjectMovementPhaseData::Structures' has a wrong offset!");

// ScriptStruct SOMRuntime.ScriptedObjectMovement_StaticPathStepData
// 0x00F0 (0x00F0 - 0x0000)
struct FScriptedObjectMovement_StaticPathStepData final
{
public:
	struct FTransform                             StartWorldTransform;                               // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             EndWorldTransform;                                 // 0x0060(0x0060)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                         MasterPathStartSplinePoint;                        // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SubSplineStartPoint;                               // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MoveAtServerTimeSecs;                              // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortScriptedObjectMovement_MovableObjectBase* PathTraveler;                               // 0x00D0(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D8[0x8];                                       // 0x00D8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           MoveStyleTag;                                      // 0x00E0(0x0004)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bTeleport;                                         // 0x00E4(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsSkipStep;                                       // 0x00E5(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_E6[0xA];                                       // 0x00E6(0x000A)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FScriptedObjectMovement_StaticPathStepData) == 0x000010, "Wrong alignment on FScriptedObjectMovement_StaticPathStepData");
static_assert(sizeof(FScriptedObjectMovement_StaticPathStepData) == 0x0000F0, "Wrong size on FScriptedObjectMovement_StaticPathStepData");
static_assert(offsetof(FScriptedObjectMovement_StaticPathStepData, StartWorldTransform) == 0x000000, "Member 'FScriptedObjectMovement_StaticPathStepData::StartWorldTransform' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathStepData, EndWorldTransform) == 0x000060, "Member 'FScriptedObjectMovement_StaticPathStepData::EndWorldTransform' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathStepData, MasterPathStartSplinePoint) == 0x0000C0, "Member 'FScriptedObjectMovement_StaticPathStepData::MasterPathStartSplinePoint' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathStepData, SubSplineStartPoint) == 0x0000C4, "Member 'FScriptedObjectMovement_StaticPathStepData::SubSplineStartPoint' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathStepData, MoveAtServerTimeSecs) == 0x0000C8, "Member 'FScriptedObjectMovement_StaticPathStepData::MoveAtServerTimeSecs' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathStepData, PathTraveler) == 0x0000D0, "Member 'FScriptedObjectMovement_StaticPathStepData::PathTraveler' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathStepData, MoveStyleTag) == 0x0000E0, "Member 'FScriptedObjectMovement_StaticPathStepData::MoveStyleTag' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathStepData, bTeleport) == 0x0000E4, "Member 'FScriptedObjectMovement_StaticPathStepData::bTeleport' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathStepData, bIsSkipStep) == 0x0000E5, "Member 'FScriptedObjectMovement_StaticPathStepData::bIsSkipStep' has a wrong offset!");

// ScriptStruct SOMRuntime.StaticPathCalendarSplinePointGroup
// 0x0030 (0x0030 - 0x0000)
struct alignas(0x08) FStaticPathCalendarSplinePointGroup final
{
public:
	uint8                                         Pad_0[0x30];                                       // 0x0000(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FStaticPathCalendarSplinePointGroup) == 0x000008, "Wrong alignment on FStaticPathCalendarSplinePointGroup");
static_assert(sizeof(FStaticPathCalendarSplinePointGroup) == 0x000030, "Wrong size on FStaticPathCalendarSplinePointGroup");

// ScriptStruct SOMRuntime.ScriptedObjectMovement_StaticPathSplineInputKeyData
// 0x0028 (0x0028 - 0x0000)
struct FScriptedObjectMovement_StaticPathSplineInputKeyData final
{
public:
	bool                                          bLockGeneratedData;                                // 0x0000(0x0001)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CalendarEvent;                                     // 0x0008(0x0010)(Edit, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PauseCalendarEvent;                                // 0x0018(0x0010)(Edit, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FScriptedObjectMovement_StaticPathSplineInputKeyData) == 0x000008, "Wrong alignment on FScriptedObjectMovement_StaticPathSplineInputKeyData");
static_assert(sizeof(FScriptedObjectMovement_StaticPathSplineInputKeyData) == 0x000028, "Wrong size on FScriptedObjectMovement_StaticPathSplineInputKeyData");
static_assert(offsetof(FScriptedObjectMovement_StaticPathSplineInputKeyData, bLockGeneratedData) == 0x000000, "Member 'FScriptedObjectMovement_StaticPathSplineInputKeyData::bLockGeneratedData' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathSplineInputKeyData, CalendarEvent) == 0x000008, "Member 'FScriptedObjectMovement_StaticPathSplineInputKeyData::CalendarEvent' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathSplineInputKeyData, PauseCalendarEvent) == 0x000018, "Member 'FScriptedObjectMovement_StaticPathSplineInputKeyData::PauseCalendarEvent' has a wrong offset!");

// ScriptStruct SOMRuntime.ScriptedObjectMovement_StepMetaData
// 0x0001 (0x0001 - 0x0000)
struct FScriptedObjectMovement_StepMetaData final
{
public:
	bool                                          bSkipStep;                                         // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FScriptedObjectMovement_StepMetaData) == 0x000001, "Wrong alignment on FScriptedObjectMovement_StepMetaData");
static_assert(sizeof(FScriptedObjectMovement_StepMetaData) == 0x000001, "Wrong size on FScriptedObjectMovement_StepMetaData");
static_assert(offsetof(FScriptedObjectMovement_StepMetaData, bSkipStep) == 0x000000, "Member 'FScriptedObjectMovement_StepMetaData::bSkipStep' has a wrong offset!");

// ScriptStruct SOMRuntime.ScriptedObjectMovement_StaticPathTravelerData
// 0x00C0 (0x00C0 - 0x0000)
struct FScriptedObjectMovement_StaticPathTravelerData final
{
public:
	TArray<class USplineComponent*>               GeneratedSplinesArray;                             // 0x0000(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FScriptedObjectMovement_StepMetaData> StepMetaData;                                // 0x0010(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	class USplineComponent*                       EnterSpline;                                       // 0x0020(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USplineComponent*                       ExitSpline;                                        // 0x0028(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortScriptedObjectMovement_MovableObjectBase* PathTraveler;                               // 0x0030(0x0008)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TravelOrder;                                       // 0x0038(0x0004)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LateralOffset;                                     // 0x003C(0x0004)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLocked;                                           // 0x0040(0x0001)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLockEnterSpline;                                  // 0x0041(0x0001)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLockExitSpline;                                   // 0x0042(0x0001)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43[0x5];                                       // 0x0043(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                TravelerBounds;                                    // 0x0048(0x0018)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x60];                                      // 0x0060(0x0060)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FScriptedObjectMovement_StaticPathTravelerData) == 0x000008, "Wrong alignment on FScriptedObjectMovement_StaticPathTravelerData");
static_assert(sizeof(FScriptedObjectMovement_StaticPathTravelerData) == 0x0000C0, "Wrong size on FScriptedObjectMovement_StaticPathTravelerData");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, GeneratedSplinesArray) == 0x000000, "Member 'FScriptedObjectMovement_StaticPathTravelerData::GeneratedSplinesArray' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, StepMetaData) == 0x000010, "Member 'FScriptedObjectMovement_StaticPathTravelerData::StepMetaData' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, EnterSpline) == 0x000020, "Member 'FScriptedObjectMovement_StaticPathTravelerData::EnterSpline' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, ExitSpline) == 0x000028, "Member 'FScriptedObjectMovement_StaticPathTravelerData::ExitSpline' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, PathTraveler) == 0x000030, "Member 'FScriptedObjectMovement_StaticPathTravelerData::PathTraveler' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, TravelOrder) == 0x000038, "Member 'FScriptedObjectMovement_StaticPathTravelerData::TravelOrder' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, LateralOffset) == 0x00003C, "Member 'FScriptedObjectMovement_StaticPathTravelerData::LateralOffset' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, bLocked) == 0x000040, "Member 'FScriptedObjectMovement_StaticPathTravelerData::bLocked' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, bLockEnterSpline) == 0x000041, "Member 'FScriptedObjectMovement_StaticPathTravelerData::bLockEnterSpline' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, bLockExitSpline) == 0x000042, "Member 'FScriptedObjectMovement_StaticPathTravelerData::bLockExitSpline' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, TravelerBounds) == 0x000048, "Member 'FScriptedObjectMovement_StaticPathTravelerData::TravelerBounds' has a wrong offset!");

// ScriptStruct SOMRuntime.ScriptedObjectMovementCalendarEventData
// 0x0028 (0x0028 - 0x0000)
struct alignas(0x08) FScriptedObjectMovementCalendarEventData final
{
public:
	uint8                                         Pad_0[0x28];                                       // 0x0000(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FScriptedObjectMovementCalendarEventData) == 0x000008, "Wrong alignment on FScriptedObjectMovementCalendarEventData");
static_assert(sizeof(FScriptedObjectMovementCalendarEventData) == 0x000028, "Wrong size on FScriptedObjectMovementCalendarEventData");

// ScriptStruct SOMRuntime.ScriptedObjectMovement_StaticPathCalendarCheatDefinitionData
// 0x0018 (0x0018 - 0x0000)
struct FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData final
{
public:
	class FString                                 EventName;                                         // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DurationTimeSeconds;                               // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DelayStartTimeSeconds;                             // 0x0014(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData) == 0x000008, "Wrong alignment on FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData");
static_assert(sizeof(FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData) == 0x000018, "Wrong size on FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData");
static_assert(offsetof(FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData, EventName) == 0x000000, "Member 'FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData::EventName' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData, DurationTimeSeconds) == 0x000010, "Member 'FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData::DurationTimeSeconds' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData, DelayStartTimeSeconds) == 0x000014, "Member 'FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData::DelayStartTimeSeconds' has a wrong offset!");

}

