﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ForwardingChannels

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class ForwardingChannels.ForwardingChannelFactory
// 0x0000 (0x0000 - 0x0000)
class IForwardingChannelFactory final
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ForwardingChannelFactory">();
	}
	static class IForwardingChannelFactory* GetDefaultObj()
	{
		return GetDefaultObjImpl<IForwardingChannelFactory>();
	}

	class UObject* AsUObject()
	{
		return reinterpret_cast<UObject*>(this);
	}
	const class UObject* AsUObject() const
	{
		return reinterpret_cast<const UObject*>(this);
	}
};
static_assert(alignof(IForwardingChannelFactory) == 0x000001, "Wrong alignment on IForwardingChannelFactory");
static_assert(sizeof(IForwardingChannelFactory) == 0x000001, "Wrong size on IForwardingChannelFactory");

// Class ForwardingChannels.ForwardingChannelsSubsystem
// 0x0068 (0x0098 - 0x0030)
class UForwardingChannelsSubsystem final : public UGameInstanceSubsystem
{
public:
	TArray<TScriptInterface<class IForwardingChannelFactory>> ForwardingChannelFactories;            // 0x0030(0x0010)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                         Pad_40[0x58];                                      // 0x0040(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ForwardingChannelsSubsystem">();
	}
	static class UForwardingChannelsSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UForwardingChannelsSubsystem>();
	}
};
static_assert(alignof(UForwardingChannelsSubsystem) == 0x000008, "Wrong alignment on UForwardingChannelsSubsystem");
static_assert(sizeof(UForwardingChannelsSubsystem) == 0x000098, "Wrong size on UForwardingChannelsSubsystem");
static_assert(offsetof(UForwardingChannelsSubsystem, ForwardingChannelFactories) == 0x000030, "Member 'UForwardingChannelsSubsystem::ForwardingChannelFactories' has a wrong offset!");

}

