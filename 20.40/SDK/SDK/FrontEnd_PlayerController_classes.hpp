﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FrontEnd_PlayerController

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FrontEnd_PlayerController.FrontEnd_PlayerController_C
// 0x0000 (0x2B60 - 0x2B60)
class AFrontEnd_PlayerController_C final : public AFortPlayerControllerFrontEnd
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FrontEnd_PlayerController_C">();
	}
	static class AFrontEnd_PlayerController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFrontEnd_PlayerController_C>();
	}
};
static_assert(alignof(AFrontEnd_PlayerController_C) == 0x000010, "Wrong alignment on AFrontEnd_PlayerController_C");
static_assert(sizeof(AFrontEnd_PlayerController_C) == 0x002B60, "Wrong size on AFrontEnd_PlayerController_C");

}

