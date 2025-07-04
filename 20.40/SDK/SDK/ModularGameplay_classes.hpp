﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ModularGameplay

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class ModularGameplay.GameFrameworkComponent
// 0x0000 (0x00A0 - 0x00A0)
class UGameFrameworkComponent : public UActorComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFrameworkComponent">();
	}
	static class UGameFrameworkComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFrameworkComponent>();
	}
};
static_assert(alignof(UGameFrameworkComponent) == 0x000008, "Wrong alignment on UGameFrameworkComponent");
static_assert(sizeof(UGameFrameworkComponent) == 0x0000A0, "Wrong size on UGameFrameworkComponent");

// Class ModularGameplay.ControllerComponent
// 0x0000 (0x00A0 - 0x00A0)
class UControllerComponent : public UGameFrameworkComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ControllerComponent">();
	}
	static class UControllerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControllerComponent>();
	}
};
static_assert(alignof(UControllerComponent) == 0x000008, "Wrong alignment on UControllerComponent");
static_assert(sizeof(UControllerComponent) == 0x0000A0, "Wrong size on UControllerComponent");

// Class ModularGameplay.GameFrameworkComponentManager
// 0x0140 (0x0170 - 0x0030)
class UGameFrameworkComponentManager final : public UGameInstanceSubsystem
{
public:
	uint8                                         Pad_30[0x140];                                     // 0x0030(0x0140)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddReceiver(class AActor* Receiver, bool bAddOnlyInGameWorlds);
	void RemoveReceiver(class AActor* Receiver);
	void SendExtensionEvent(class AActor* Receiver, class FName EventName, bool bOnlyInGameWorlds);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFrameworkComponentManager">();
	}
	static class UGameFrameworkComponentManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFrameworkComponentManager>();
	}
};
static_assert(alignof(UGameFrameworkComponentManager) == 0x000008, "Wrong alignment on UGameFrameworkComponentManager");
static_assert(sizeof(UGameFrameworkComponentManager) == 0x000170, "Wrong size on UGameFrameworkComponentManager");

// Class ModularGameplay.GameStateComponent
// 0x0000 (0x00A0 - 0x00A0)
class UGameStateComponent : public UGameFrameworkComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameStateComponent">();
	}
	static class UGameStateComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameStateComponent>();
	}
};
static_assert(alignof(UGameStateComponent) == 0x000008, "Wrong alignment on UGameStateComponent");
static_assert(sizeof(UGameStateComponent) == 0x0000A0, "Wrong size on UGameStateComponent");

// Class ModularGameplay.PawnComponent
// 0x0000 (0x00A0 - 0x00A0)
class UPawnComponent : public UGameFrameworkComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PawnComponent">();
	}
	static class UPawnComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPawnComponent>();
	}
};
static_assert(alignof(UPawnComponent) == 0x000008, "Wrong alignment on UPawnComponent");
static_assert(sizeof(UPawnComponent) == 0x0000A0, "Wrong size on UPawnComponent");

// Class ModularGameplay.PlayerStateComponent
// 0x0000 (0x00A0 - 0x00A0)
class UPlayerStateComponent : public UGameFrameworkComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayerStateComponent">();
	}
	static class UPlayerStateComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerStateComponent>();
	}
};
static_assert(alignof(UPlayerStateComponent) == 0x000008, "Wrong alignment on UPlayerStateComponent");
static_assert(sizeof(UPlayerStateComponent) == 0x0000A0, "Wrong size on UPlayerStateComponent");

}

