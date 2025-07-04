﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CosmeticLoadoutSelector

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CosmeticLoadoutSelector.CosmeticLoadoutSelector_C
// 0x0020 (0x02E8 - 0x02C8)
class UCosmeticLoadoutSelector_C final : public UFortCosmeticLoadoutSelector
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Background;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    Left_InputActionDisplay;                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    Right_InputActionDisplay;                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CosmeticLoadoutSelector(int32 EntryPoint);
	void OnLoadoutSet(int32 Selection);
	void OnNumLoadoutsFound(int32 NumLoadouts);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CosmeticLoadoutSelector_C">();
	}
	static class UCosmeticLoadoutSelector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCosmeticLoadoutSelector_C>();
	}
};
static_assert(alignof(UCosmeticLoadoutSelector_C) == 0x000008, "Wrong alignment on UCosmeticLoadoutSelector_C");
static_assert(sizeof(UCosmeticLoadoutSelector_C) == 0x0002E8, "Wrong size on UCosmeticLoadoutSelector_C");
static_assert(offsetof(UCosmeticLoadoutSelector_C, UberGraphFrame) == 0x0002C8, "Member 'UCosmeticLoadoutSelector_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutSelector_C, Background) == 0x0002D0, "Member 'UCosmeticLoadoutSelector_C::Background' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutSelector_C, Left_InputActionDisplay) == 0x0002D8, "Member 'UCosmeticLoadoutSelector_C::Left_InputActionDisplay' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutSelector_C, Right_InputActionDisplay) == 0x0002E0, "Member 'UCosmeticLoadoutSelector_C::Right_InputActionDisplay' has a wrong offset!");

}

