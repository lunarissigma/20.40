﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MotherGameplayUI

#include "Basic.hpp"

#include "GameplayMessages_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// Class MotherGameplayUI.AvocadoEaterHealthBarWidget
// 0x0070 (0x0350 - 0x02E0)
class UAvocadoEaterHealthBarWidget final : public UFortHUDElementWidget
{
public:
	struct FEventMessageTag                       AttachedMessageTag;                                // 0x02E0(0x0004)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FEventMessageTag                       DetachedMessageTag;                                // 0x02E4(0x0004)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FEventMessageTag                       SetMarkerPositionMessageTag;                       // 0x02E8(0x0004)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FEventMessageTag                       TargetDamagedMessageTag;                           // 0x02EC(0x0004)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2F0[0x60];                                     // 0x02F0(0x0060)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnParasiteAttached();
	void OnParasiteDetached();
	void OnSetMarkerPosition(float MarkerPosition);
	void OnTargetDamaged();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AvocadoEaterHealthBarWidget">();
	}
	static class UAvocadoEaterHealthBarWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAvocadoEaterHealthBarWidget>();
	}
};
static_assert(alignof(UAvocadoEaterHealthBarWidget) == 0x000008, "Wrong alignment on UAvocadoEaterHealthBarWidget");
static_assert(sizeof(UAvocadoEaterHealthBarWidget) == 0x000350, "Wrong size on UAvocadoEaterHealthBarWidget");
static_assert(offsetof(UAvocadoEaterHealthBarWidget, AttachedMessageTag) == 0x0002E0, "Member 'UAvocadoEaterHealthBarWidget::AttachedMessageTag' has a wrong offset!");
static_assert(offsetof(UAvocadoEaterHealthBarWidget, DetachedMessageTag) == 0x0002E4, "Member 'UAvocadoEaterHealthBarWidget::DetachedMessageTag' has a wrong offset!");
static_assert(offsetof(UAvocadoEaterHealthBarWidget, SetMarkerPositionMessageTag) == 0x0002E8, "Member 'UAvocadoEaterHealthBarWidget::SetMarkerPositionMessageTag' has a wrong offset!");
static_assert(offsetof(UAvocadoEaterHealthBarWidget, TargetDamagedMessageTag) == 0x0002EC, "Member 'UAvocadoEaterHealthBarWidget::TargetDamagedMessageTag' has a wrong offset!");

// Class MotherGameplayUI.FortGravyGoblinReticleExtensionWidget
// 0x0018 (0x0308 - 0x02F0)
class UFortGravyGoblinReticleExtensionWidget final : public UFortWeaponReticleExtensionWidgetBase
{
public:
	struct FEventMessageTag                       ItemActivatableTag;                                // 0x02F0(0x0004)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FEventMessageTag                       ItemInactivatableTag;                              // 0x02F4(0x0004)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2F8[0x10];                                     // 0x02F8(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnItemActivatable();
	void OnItemInactivatable();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGravyGoblinReticleExtensionWidget">();
	}
	static class UFortGravyGoblinReticleExtensionWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGravyGoblinReticleExtensionWidget>();
	}
};
static_assert(alignof(UFortGravyGoblinReticleExtensionWidget) == 0x000008, "Wrong alignment on UFortGravyGoblinReticleExtensionWidget");
static_assert(sizeof(UFortGravyGoblinReticleExtensionWidget) == 0x000308, "Wrong size on UFortGravyGoblinReticleExtensionWidget");
static_assert(offsetof(UFortGravyGoblinReticleExtensionWidget, ItemActivatableTag) == 0x0002F0, "Member 'UFortGravyGoblinReticleExtensionWidget::ItemActivatableTag' has a wrong offset!");
static_assert(offsetof(UFortGravyGoblinReticleExtensionWidget, ItemInactivatableTag) == 0x0002F4, "Member 'UFortGravyGoblinReticleExtensionWidget::ItemInactivatableTag' has a wrong offset!");

// Class MotherGameplayUI.FortLlamaRoasterReticleExtensionWidget
// 0x0000 (0x02F0 - 0x02F0)
class UFortLlamaRoasterReticleExtensionWidget final : public UFortWeaponReticleExtensionWidgetBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortLlamaRoasterReticleExtensionWidget">();
	}
	static class UFortLlamaRoasterReticleExtensionWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortLlamaRoasterReticleExtensionWidget>();
	}
};
static_assert(alignof(UFortLlamaRoasterReticleExtensionWidget) == 0x000008, "Wrong alignment on UFortLlamaRoasterReticleExtensionWidget");
static_assert(sizeof(UFortLlamaRoasterReticleExtensionWidget) == 0x0002F0, "Wrong size on UFortLlamaRoasterReticleExtensionWidget");

// Class MotherGameplayUI.FortMobileActionBBE_GravyGoblinRotate
// 0x0020 (0x0080 - 0x0060)
class UFortMobileActionBBE_GravyGoblinRotate final : public UFortMobileActionButtonBehaviorExtension
{
public:
	struct FEventMessageTag                       HeldObjectRotatableTag;                            // 0x0060(0x0004)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FEventMessageTag                       HeldObjectUnrotatableTag;                          // 0x0064(0x0004)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                           GravyGoblinTag;                                    // 0x0068(0x0004)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_6C[0x14];                                      // 0x006C(0x0014)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMobileActionBBE_GravyGoblinRotate">();
	}
	static class UFortMobileActionBBE_GravyGoblinRotate* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMobileActionBBE_GravyGoblinRotate>();
	}
};
static_assert(alignof(UFortMobileActionBBE_GravyGoblinRotate) == 0x000008, "Wrong alignment on UFortMobileActionBBE_GravyGoblinRotate");
static_assert(sizeof(UFortMobileActionBBE_GravyGoblinRotate) == 0x000080, "Wrong size on UFortMobileActionBBE_GravyGoblinRotate");
static_assert(offsetof(UFortMobileActionBBE_GravyGoblinRotate, HeldObjectRotatableTag) == 0x000060, "Member 'UFortMobileActionBBE_GravyGoblinRotate::HeldObjectRotatableTag' has a wrong offset!");
static_assert(offsetof(UFortMobileActionBBE_GravyGoblinRotate, HeldObjectUnrotatableTag) == 0x000064, "Member 'UFortMobileActionBBE_GravyGoblinRotate::HeldObjectUnrotatableTag' has a wrong offset!");
static_assert(offsetof(UFortMobileActionBBE_GravyGoblinRotate, GravyGoblinTag) == 0x000068, "Member 'UFortMobileActionBBE_GravyGoblinRotate::GravyGoblinTag' has a wrong offset!");

// Class MotherGameplayUI.FortPaddleGingerReticleExtensionWidget
// 0x0060 (0x0350 - 0x02F0)
class UFortPaddleGingerReticleExtensionWidget final : public UFortWeaponReticleExtensionWidgetBase
{
public:
	struct FEventMessageTag                       PropIndexChangedTag;                               // 0x02F0(0x0004)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FEventMessageTag                       PropActivatedTag;                                  // 0x02F4(0x0004)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortKeybindWidget*                     Keybind_ActivateAction;                            // 0x02F8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortKeybindWidget*                     Keybind_CycleCategoryAction;                       // 0x0300(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortKeybindWidget*                     Keybind_CyclePropAction;                           // 0x0308(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_310[0x40];                                     // 0x0310(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnPropActivationChanged(const bool Activated);
	void OnPropIndexChanged(const class FText& CategoryText, int32 PropIndex, int32 MaxPropCount, int32 CategoryIndex, int32 MaxCategoryCount);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPaddleGingerReticleExtensionWidget">();
	}
	static class UFortPaddleGingerReticleExtensionWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPaddleGingerReticleExtensionWidget>();
	}
};
static_assert(alignof(UFortPaddleGingerReticleExtensionWidget) == 0x000008, "Wrong alignment on UFortPaddleGingerReticleExtensionWidget");
static_assert(sizeof(UFortPaddleGingerReticleExtensionWidget) == 0x000350, "Wrong size on UFortPaddleGingerReticleExtensionWidget");
static_assert(offsetof(UFortPaddleGingerReticleExtensionWidget, PropIndexChangedTag) == 0x0002F0, "Member 'UFortPaddleGingerReticleExtensionWidget::PropIndexChangedTag' has a wrong offset!");
static_assert(offsetof(UFortPaddleGingerReticleExtensionWidget, PropActivatedTag) == 0x0002F4, "Member 'UFortPaddleGingerReticleExtensionWidget::PropActivatedTag' has a wrong offset!");
static_assert(offsetof(UFortPaddleGingerReticleExtensionWidget, Keybind_ActivateAction) == 0x0002F8, "Member 'UFortPaddleGingerReticleExtensionWidget::Keybind_ActivateAction' has a wrong offset!");
static_assert(offsetof(UFortPaddleGingerReticleExtensionWidget, Keybind_CycleCategoryAction) == 0x000300, "Member 'UFortPaddleGingerReticleExtensionWidget::Keybind_CycleCategoryAction' has a wrong offset!");
static_assert(offsetof(UFortPaddleGingerReticleExtensionWidget, Keybind_CyclePropAction) == 0x000308, "Member 'UFortPaddleGingerReticleExtensionWidget::Keybind_CyclePropAction' has a wrong offset!");

// Class MotherGameplayUI.FortReactorGradeReticleExtensionWidget
// 0x0000 (0x02F0 - 0x02F0)
class UFortReactorGradeReticleExtensionWidget final : public UFortWeaponReticleExtensionWidgetBase
{
public:
	void OnMinimumChargeReached();
	void OnUpdateChargeToAutoDischarge(const float ChargePercent);
	void OnUpdateChargeToMin(const float ChargePercent);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortReactorGradeReticleExtensionWidget">();
	}
	static class UFortReactorGradeReticleExtensionWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortReactorGradeReticleExtensionWidget>();
	}
};
static_assert(alignof(UFortReactorGradeReticleExtensionWidget) == 0x000008, "Wrong alignment on UFortReactorGradeReticleExtensionWidget");
static_assert(sizeof(UFortReactorGradeReticleExtensionWidget) == 0x0002F0, "Wrong size on UFortReactorGradeReticleExtensionWidget");

}

