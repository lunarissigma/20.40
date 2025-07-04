﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ColorCalibration

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ColorCalibration.ColorCalibration_C
// 0x0010 (0x03D0 - 0x03C0)
class UColorCalibration_C final : public UFortColorCalibrationScreen
{
public:
	class UFortHUDElementWrapper_C*               FortHUDElementWrapper;                             // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageMask;                                         // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ColorCalibration_C">();
	}
	static class UColorCalibration_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UColorCalibration_C>();
	}
};
static_assert(alignof(UColorCalibration_C) == 0x000008, "Wrong alignment on UColorCalibration_C");
static_assert(sizeof(UColorCalibration_C) == 0x0003D0, "Wrong size on UColorCalibration_C");
static_assert(offsetof(UColorCalibration_C, FortHUDElementWrapper) == 0x0003C0, "Member 'UColorCalibration_C::FortHUDElementWrapper' has a wrong offset!");
static_assert(offsetof(UColorCalibration_C, ImageMask) == 0x0003C8, "Member 'UColorCalibration_C::ImageMask' has a wrong offset!");

}

