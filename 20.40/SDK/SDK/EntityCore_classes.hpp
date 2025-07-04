﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EntityCore

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "EntityCore_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class EntityCore.EntityComponent
// 0x0038 (0x0060 - 0x0028)
class UEntityComponent : public UObject
{
public:
	uint8                                         Pad_28[0x38];                                      // 0x0028(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityComponent">();
	}
	static class UEntityComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityComponent>();
	}
};
static_assert(alignof(UEntityComponent) == 0x000008, "Wrong alignment on UEntityComponent");
static_assert(sizeof(UEntityComponent) == 0x000060, "Wrong size on UEntityComponent");

// Class EntityCore.EntityDataBackedComponent
// 0x0008 (0x0068 - 0x0060)
class UEntityDataBackedComponent : public UEntityComponent
{
public:
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityDataBackedComponent">();
	}
	static class UEntityDataBackedComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityDataBackedComponent>();
	}
};
static_assert(alignof(UEntityDataBackedComponent) == 0x000008, "Wrong alignment on UEntityDataBackedComponent");
static_assert(sizeof(UEntityDataBackedComponent) == 0x000068, "Wrong size on UEntityDataBackedComponent");

// Class EntityCore.EntityPositionComponent
// 0x0000 (0x0068 - 0x0068)
class UEntityPositionComponent : public UEntityDataBackedComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityPositionComponent">();
	}
	static class UEntityPositionComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityPositionComponent>();
	}
};
static_assert(alignof(UEntityPositionComponent) == 0x000008, "Wrong alignment on UEntityPositionComponent");
static_assert(sizeof(UEntityPositionComponent) == 0x000068, "Wrong size on UEntityPositionComponent");

// Class EntityCore.EntityEnableableComponent
// 0x0020 (0x0080 - 0x0060)
class UEntityEnableableComponent : public UEntityComponent
{
public:
	uint8                                         IsEnabled : 1;                                     // 0x0060(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         LastIsEnabled : 1;                                 // 0x0060(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_61[0x1F];                                      // 0x0061(0x001F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnRep_Enabled();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityEnableableComponent">();
	}
	static class UEntityEnableableComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityEnableableComponent>();
	}
};
static_assert(alignof(UEntityEnableableComponent) == 0x000008, "Wrong alignment on UEntityEnableableComponent");
static_assert(sizeof(UEntityEnableableComponent) == 0x000080, "Wrong size on UEntityEnableableComponent");

// Class EntityCore.EntityCoreSubsystem
// 0x0120 (0x0150 - 0x0030)
class UEntityCoreSubsystem final : public UWorldSubsystem
{
public:
	uint8                                         Pad_30[0x10];                                      // 0x0030(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<uint32, struct FEntityComponentContainer> ComponentMap;                                     // 0x0040(0x0050)(Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_90[0x58];                                      // 0x0090(0x0058)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UEntityComponent*>               ComponentArray;                                    // 0x00E8(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TMap<uint32, class UEntity*>                  Entities;                                          // 0x00F8(0x0050)(Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_148[0x8];                                      // 0x0148(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityCoreSubsystem">();
	}
	static class UEntityCoreSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityCoreSubsystem>();
	}
};
static_assert(alignof(UEntityCoreSubsystem) == 0x000008, "Wrong alignment on UEntityCoreSubsystem");
static_assert(sizeof(UEntityCoreSubsystem) == 0x000150, "Wrong size on UEntityCoreSubsystem");
static_assert(offsetof(UEntityCoreSubsystem, ComponentMap) == 0x000040, "Member 'UEntityCoreSubsystem::ComponentMap' has a wrong offset!");
static_assert(offsetof(UEntityCoreSubsystem, ComponentArray) == 0x0000E8, "Member 'UEntityCoreSubsystem::ComponentArray' has a wrong offset!");
static_assert(offsetof(UEntityCoreSubsystem, Entities) == 0x0000F8, "Member 'UEntityCoreSubsystem::Entities' has a wrong offset!");

// Class EntityCore.EntityRotationComponent
// 0x0000 (0x0068 - 0x0068)
class UEntityRotationComponent : public UEntityDataBackedComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityRotationComponent">();
	}
	static class UEntityRotationComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityRotationComponent>();
	}
};
static_assert(alignof(UEntityRotationComponent) == 0x000008, "Wrong alignment on UEntityRotationComponent");
static_assert(sizeof(UEntityRotationComponent) == 0x000068, "Wrong size on UEntityRotationComponent");

// Class EntityCore.EntityScaleComponent
// 0x0000 (0x0068 - 0x0068)
class UEntityScaleComponent : public UEntityDataBackedComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityScaleComponent">();
	}
	static class UEntityScaleComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityScaleComponent>();
	}
};
static_assert(alignof(UEntityScaleComponent) == 0x000008, "Wrong alignment on UEntityScaleComponent");
static_assert(sizeof(UEntityScaleComponent) == 0x000068, "Wrong size on UEntityScaleComponent");

// Class EntityCore.Entity
// 0x0010 (0x0038 - 0x0028)
class UEntity final : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class ULevel*                                 Level;                                             // 0x0030(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Entity">();
	}
	static class UEntity* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntity>();
	}
};
static_assert(alignof(UEntity) == 0x000008, "Wrong alignment on UEntity");
static_assert(sizeof(UEntity) == 0x000038, "Wrong size on UEntity");
static_assert(offsetof(UEntity, Level) == 0x000030, "Member 'UEntity::Level' has a wrong offset!");

// Class EntityCore.EntityCoreDataBackedRelativePositionComponent
// 0x0000 (0x0068 - 0x0068)
class UEntityCoreDataBackedRelativePositionComponent final : public UEntityDataBackedComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityCoreDataBackedRelativePositionComponent">();
	}
	static class UEntityCoreDataBackedRelativePositionComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityCoreDataBackedRelativePositionComponent>();
	}
};
static_assert(alignof(UEntityCoreDataBackedRelativePositionComponent) == 0x000008, "Wrong alignment on UEntityCoreDataBackedRelativePositionComponent");
static_assert(sizeof(UEntityCoreDataBackedRelativePositionComponent) == 0x000068, "Wrong size on UEntityCoreDataBackedRelativePositionComponent");

// Class EntityCore.EntityTickableComponent
// 0x0038 (0x00B8 - 0x0080)
class UEntityTickableComponent : public UEntityEnableableComponent
{
public:
	uint8                                         Pad_80[0x38];                                      // 0x0080(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityTickableComponent">();
	}
	static class UEntityTickableComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityTickableComponent>();
	}
};
static_assert(alignof(UEntityTickableComponent) == 0x000008, "Wrong alignment on UEntityTickableComponent");
static_assert(sizeof(UEntityTickableComponent) == 0x0000B8, "Wrong size on UEntityTickableComponent");

// Class EntityCore.EntityScriptComponent
// 0x0000 (0x00B8 - 0x00B8)
class UEntityScriptComponent final : public UEntityTickableComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityScriptComponent">();
	}
	static class UEntityScriptComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityScriptComponent>();
	}
};
static_assert(alignof(UEntityScriptComponent) == 0x000008, "Wrong alignment on UEntityScriptComponent");
static_assert(sizeof(UEntityScriptComponent) == 0x0000B8, "Wrong size on UEntityScriptComponent");

}

