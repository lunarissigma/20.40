﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StoreCamera_Blueprint

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass StoreCamera_Blueprint.StoreCamera_Blueprint_C
// 0x00B0 (0x0A40 - 0x0990)
class AStoreCamera_Blueprint_C final : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0990(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Mesh_DarkenBG;                                     // 0x0998(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       CameraPlaceholderGround;                           // 0x09A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         ChoicePack_NewTrack_0_ACA3841D4D5084BE3482FA8EBB7CE9C0; // 0x09A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ChoicePack__Direction_ACA3841D4D5084BE3482FA8EBB7CE9C0; // 0x09AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9AD[0x3];                                      // 0x09AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ChoicePack;                                        // 0x09B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_6555812E4B246E6144D3C99FC49F7FE9; // 0x09B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_6555812E4B246E6144D3C99FC49F7FE9; // 0x09BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9BD[0x3];                                      // 0x09BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x09C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CameraGroundLoc;                                   // 0x09C8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CameraGroundRot;                                   // 0x09E0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                CameraOriginalLoc;                                 // 0x09F8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CameraOriginalRot;                                 // 0x0A10(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CameraInStartPos;                                  // 0x0A28(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A29[0x7];                                      // 0x0A29(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AStorePinataMaster_Parent_C*            PinataInLevel;                                     // 0x0A30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStoreCardReveal_Parent_C*              CardRevealInLevel;                                 // 0x0A38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void ResetCamera();
	void OpeningCameraTransition();
	void ExecuteUbergraph_StoreCamera_Blueprint(int32 EntryPoint);
	void DarkenBGVisibility(bool Enable);
	void ChoicePackFOV_Out();
	void ChoicePackFOV_In();
	void ChoicePack__UpdateFunc();
	void ChoicePack__FinishedFunc();
	void BP_OnDeactivated(class AFortPlayerController* PlayerController);
	void BP_OnActivated(class AFortPlayerController* PlayerController);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StoreCamera_Blueprint_C">();
	}
	static class AStoreCamera_Blueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AStoreCamera_Blueprint_C>();
	}
};
static_assert(alignof(AStoreCamera_Blueprint_C) == 0x000010, "Wrong alignment on AStoreCamera_Blueprint_C");
static_assert(sizeof(AStoreCamera_Blueprint_C) == 0x000A40, "Wrong size on AStoreCamera_Blueprint_C");
static_assert(offsetof(AStoreCamera_Blueprint_C, UberGraphFrame) == 0x000990, "Member 'AStoreCamera_Blueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AStoreCamera_Blueprint_C, Mesh_DarkenBG) == 0x000998, "Member 'AStoreCamera_Blueprint_C::Mesh_DarkenBG' has a wrong offset!");
static_assert(offsetof(AStoreCamera_Blueprint_C, CameraPlaceholderGround) == 0x0009A0, "Member 'AStoreCamera_Blueprint_C::CameraPlaceholderGround' has a wrong offset!");
static_assert(offsetof(AStoreCamera_Blueprint_C, ChoicePack_NewTrack_0_ACA3841D4D5084BE3482FA8EBB7CE9C0) == 0x0009A8, "Member 'AStoreCamera_Blueprint_C::ChoicePack_NewTrack_0_ACA3841D4D5084BE3482FA8EBB7CE9C0' has a wrong offset!");
static_assert(offsetof(AStoreCamera_Blueprint_C, ChoicePack__Direction_ACA3841D4D5084BE3482FA8EBB7CE9C0) == 0x0009AC, "Member 'AStoreCamera_Blueprint_C::ChoicePack__Direction_ACA3841D4D5084BE3482FA8EBB7CE9C0' has a wrong offset!");
static_assert(offsetof(AStoreCamera_Blueprint_C, ChoicePack) == 0x0009B0, "Member 'AStoreCamera_Blueprint_C::ChoicePack' has a wrong offset!");
static_assert(offsetof(AStoreCamera_Blueprint_C, Timeline_0_NewTrack_0_6555812E4B246E6144D3C99FC49F7FE9) == 0x0009B8, "Member 'AStoreCamera_Blueprint_C::Timeline_0_NewTrack_0_6555812E4B246E6144D3C99FC49F7FE9' has a wrong offset!");
static_assert(offsetof(AStoreCamera_Blueprint_C, Timeline_0__Direction_6555812E4B246E6144D3C99FC49F7FE9) == 0x0009BC, "Member 'AStoreCamera_Blueprint_C::Timeline_0__Direction_6555812E4B246E6144D3C99FC49F7FE9' has a wrong offset!");
static_assert(offsetof(AStoreCamera_Blueprint_C, Timeline_0) == 0x0009C0, "Member 'AStoreCamera_Blueprint_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AStoreCamera_Blueprint_C, CameraGroundLoc) == 0x0009C8, "Member 'AStoreCamera_Blueprint_C::CameraGroundLoc' has a wrong offset!");
static_assert(offsetof(AStoreCamera_Blueprint_C, CameraGroundRot) == 0x0009E0, "Member 'AStoreCamera_Blueprint_C::CameraGroundRot' has a wrong offset!");
static_assert(offsetof(AStoreCamera_Blueprint_C, CameraOriginalLoc) == 0x0009F8, "Member 'AStoreCamera_Blueprint_C::CameraOriginalLoc' has a wrong offset!");
static_assert(offsetof(AStoreCamera_Blueprint_C, CameraOriginalRot) == 0x000A10, "Member 'AStoreCamera_Blueprint_C::CameraOriginalRot' has a wrong offset!");
static_assert(offsetof(AStoreCamera_Blueprint_C, CameraInStartPos) == 0x000A28, "Member 'AStoreCamera_Blueprint_C::CameraInStartPos' has a wrong offset!");
static_assert(offsetof(AStoreCamera_Blueprint_C, PinataInLevel) == 0x000A30, "Member 'AStoreCamera_Blueprint_C::PinataInLevel' has a wrong offset!");
static_assert(offsetof(AStoreCamera_Blueprint_C, CardRevealInLevel) == 0x000A38, "Member 'AStoreCamera_Blueprint_C::CardRevealInLevel' has a wrong offset!");

}

