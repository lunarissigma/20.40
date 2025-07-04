﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ActivatableMovieWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ActivatableMovieWidget.ActivatableMovieWidget_C
// 0x0010 (0x0618 - 0x0608)
class UActivatableMovieWidget_C final : public UFortActivatableVideoPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0608(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USafeZone*                              MainSafeZone;                                      // 0x0610(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_ActivatableMovieWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ActivatableMovieWidget_C">();
	}
	static class UActivatableMovieWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActivatableMovieWidget_C>();
	}
};
static_assert(alignof(UActivatableMovieWidget_C) == 0x000008, "Wrong alignment on UActivatableMovieWidget_C");
static_assert(sizeof(UActivatableMovieWidget_C) == 0x000618, "Wrong size on UActivatableMovieWidget_C");
static_assert(offsetof(UActivatableMovieWidget_C, UberGraphFrame) == 0x000608, "Member 'UActivatableMovieWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UActivatableMovieWidget_C, MainSafeZone) == 0x000610, "Member 'UActivatableMovieWidget_C::MainSafeZone' has a wrong offset!");

}

