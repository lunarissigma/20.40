﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ControllerDisconnectedModal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ControllerDisconnectedModal.ControllerDisconnectedModal_C
// 0x0020 (0x0660 - 0x0640)
class UControllerDisconnectedModal_C final : public UFortControllerDisconnectedModal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0640(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonActionWidget*                    CommonActionWidget_164;                            // 0x0648(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox;                                          // 0x0650(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_ControllerDisconnectedModal(int32 EntryPoint);
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ControllerDisconnectedModal_C">();
	}
	static class UControllerDisconnectedModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControllerDisconnectedModal_C>();
	}
};
static_assert(alignof(UControllerDisconnectedModal_C) == 0x000010, "Wrong alignment on UControllerDisconnectedModal_C");
static_assert(sizeof(UControllerDisconnectedModal_C) == 0x000660, "Wrong size on UControllerDisconnectedModal_C");
static_assert(offsetof(UControllerDisconnectedModal_C, UberGraphFrame) == 0x000640, "Member 'UControllerDisconnectedModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UControllerDisconnectedModal_C, CommonActionWidget_164) == 0x000648, "Member 'UControllerDisconnectedModal_C::CommonActionWidget_164' has a wrong offset!");
static_assert(offsetof(UControllerDisconnectedModal_C, Lightbox) == 0x000650, "Member 'UControllerDisconnectedModal_C::Lightbox' has a wrong offset!");

}

