﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TeamMemberPedestal_XPBoostInfo

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TeamMemberPedestal_XPBoostInfo.TeamMemberPedestal_XPBoostInfo_C
// 0x0010 (0x1040 - 0x1030)
class UTeamMemberPedestal_XPBoostInfo_C final : public UFortTeamMemberXPBoostInfo
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                               PrimaryOvr;                                        // 0x1038(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo(int32 EntryPoint);
	void OnCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TeamMemberPedestal_XPBoostInfo_C">();
	}
	static class UTeamMemberPedestal_XPBoostInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTeamMemberPedestal_XPBoostInfo_C>();
	}
};
static_assert(alignof(UTeamMemberPedestal_XPBoostInfo_C) == 0x000010, "Wrong alignment on UTeamMemberPedestal_XPBoostInfo_C");
static_assert(sizeof(UTeamMemberPedestal_XPBoostInfo_C) == 0x001040, "Wrong size on UTeamMemberPedestal_XPBoostInfo_C");
static_assert(offsetof(UTeamMemberPedestal_XPBoostInfo_C, UberGraphFrame) == 0x001030, "Member 'UTeamMemberPedestal_XPBoostInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTeamMemberPedestal_XPBoostInfo_C, PrimaryOvr) == 0x001038, "Member 'UTeamMemberPedestal_XPBoostInfo_C::PrimaryOvr' has a wrong offset!");

}

