﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SoundLibrary

#include "Basic.hpp"

#include "SoundLibrary_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function SoundLibrary.SoundLibraryContext.CreateEventName
// 0x0008 (0x0008 - 0x0000)
struct SoundLibraryContext_CreateEventName final
{
public:
	struct FGameplayTag                           OutEventName;                                      // 0x0000(0x0004)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(SoundLibraryContext_CreateEventName) == 0x000004, "Wrong alignment on SoundLibraryContext_CreateEventName");
static_assert(sizeof(SoundLibraryContext_CreateEventName) == 0x000008, "Wrong size on SoundLibraryContext_CreateEventName");
static_assert(offsetof(SoundLibraryContext_CreateEventName, OutEventName) == 0x000000, "Member 'SoundLibraryContext_CreateEventName::OutEventName' has a wrong offset!");
static_assert(offsetof(SoundLibraryContext_CreateEventName, ReturnValue) == 0x000004, "Member 'SoundLibraryContext_CreateEventName::ReturnValue' has a wrong offset!");

// Function SoundLibrary.SoundLibraryContext.PlaySound
// 0x0038 (0x0038 - 0x0000)
struct SoundLibraryContext_PlaySound final
{
public:
	class USoundBase*                             Sound;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundLibraryPlaySoundResult           OutResults;                                        // 0x0008(0x0028)(Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(SoundLibraryContext_PlaySound) == 0x000008, "Wrong alignment on SoundLibraryContext_PlaySound");
static_assert(sizeof(SoundLibraryContext_PlaySound) == 0x000038, "Wrong size on SoundLibraryContext_PlaySound");
static_assert(offsetof(SoundLibraryContext_PlaySound, Sound) == 0x000000, "Member 'SoundLibraryContext_PlaySound::Sound' has a wrong offset!");
static_assert(offsetof(SoundLibraryContext_PlaySound, OutResults) == 0x000008, "Member 'SoundLibraryContext_PlaySound::OutResults' has a wrong offset!");
static_assert(offsetof(SoundLibraryContext_PlaySound, ReturnValue) == 0x000030, "Member 'SoundLibraryContext_PlaySound::ReturnValue' has a wrong offset!");

// Function SoundLibrary.SoundLibraryAnimContext.ConfigureContext
// 0x0030 (0x0030 - 0x0000)
struct SoundLibraryAnimContext_ConfigureContext final
{
public:
	class AActor*                                 OwningActor;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                      InAnimation;                                       // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundLibraryAnimContextSettings       InSettings;                                        // 0x0010(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(SoundLibraryAnimContext_ConfigureContext) == 0x000008, "Wrong alignment on SoundLibraryAnimContext_ConfigureContext");
static_assert(sizeof(SoundLibraryAnimContext_ConfigureContext) == 0x000030, "Wrong size on SoundLibraryAnimContext_ConfigureContext");
static_assert(offsetof(SoundLibraryAnimContext_ConfigureContext, OwningActor) == 0x000000, "Member 'SoundLibraryAnimContext_ConfigureContext::OwningActor' has a wrong offset!");
static_assert(offsetof(SoundLibraryAnimContext_ConfigureContext, InAnimation) == 0x000008, "Member 'SoundLibraryAnimContext_ConfigureContext::InAnimation' has a wrong offset!");
static_assert(offsetof(SoundLibraryAnimContext_ConfigureContext, InSettings) == 0x000010, "Member 'SoundLibraryAnimContext_ConfigureContext::InSettings' has a wrong offset!");

// Function SoundLibrary.SoundLibrarySubsystem.AddLibraries
// 0x0018 (0x0018 - 0x0000)
struct SoundLibrarySubsystem_AddLibraries final
{
public:
	const class AActor*                           Actor;                                             // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USoundLibrary*>                  Libraries;                                         // 0x0008(0x0010)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(SoundLibrarySubsystem_AddLibraries) == 0x000008, "Wrong alignment on SoundLibrarySubsystem_AddLibraries");
static_assert(sizeof(SoundLibrarySubsystem_AddLibraries) == 0x000018, "Wrong size on SoundLibrarySubsystem_AddLibraries");
static_assert(offsetof(SoundLibrarySubsystem_AddLibraries, Actor) == 0x000000, "Member 'SoundLibrarySubsystem_AddLibraries::Actor' has a wrong offset!");
static_assert(offsetof(SoundLibrarySubsystem_AddLibraries, Libraries) == 0x000008, "Member 'SoundLibrarySubsystem_AddLibraries::Libraries' has a wrong offset!");

// Function SoundLibrary.SoundLibrarySubsystem.AddLibrariesByClass
// 0x0018 (0x0018 - 0x0000)
struct SoundLibrarySubsystem_AddLibrariesByClass final
{
public:
	const class AActor*                           Actor;                                             // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class USoundLibrary>>      Libraries;                                         // 0x0008(0x0010)(Parm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};
static_assert(alignof(SoundLibrarySubsystem_AddLibrariesByClass) == 0x000008, "Wrong alignment on SoundLibrarySubsystem_AddLibrariesByClass");
static_assert(sizeof(SoundLibrarySubsystem_AddLibrariesByClass) == 0x000018, "Wrong size on SoundLibrarySubsystem_AddLibrariesByClass");
static_assert(offsetof(SoundLibrarySubsystem_AddLibrariesByClass, Actor) == 0x000000, "Member 'SoundLibrarySubsystem_AddLibrariesByClass::Actor' has a wrong offset!");
static_assert(offsetof(SoundLibrarySubsystem_AddLibrariesByClass, Libraries) == 0x000008, "Member 'SoundLibrarySubsystem_AddLibrariesByClass::Libraries' has a wrong offset!");

// Function SoundLibrary.SoundLibrarySubsystem.AddLibrary
// 0x0010 (0x0010 - 0x0000)
struct SoundLibrarySubsystem_AddLibrary final
{
public:
	const class AActor*                           Actor;                                             // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundLibrary*                          Library;                                           // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SoundLibrarySubsystem_AddLibrary) == 0x000008, "Wrong alignment on SoundLibrarySubsystem_AddLibrary");
static_assert(sizeof(SoundLibrarySubsystem_AddLibrary) == 0x000010, "Wrong size on SoundLibrarySubsystem_AddLibrary");
static_assert(offsetof(SoundLibrarySubsystem_AddLibrary, Actor) == 0x000000, "Member 'SoundLibrarySubsystem_AddLibrary::Actor' has a wrong offset!");
static_assert(offsetof(SoundLibrarySubsystem_AddLibrary, Library) == 0x000008, "Member 'SoundLibrarySubsystem_AddLibrary::Library' has a wrong offset!");

// Function SoundLibrary.SoundLibrarySubsystem.AddLibraryByClass
// 0x0010 (0x0010 - 0x0000)
struct SoundLibrarySubsystem_AddLibraryByClass final
{
public:
	const class AActor*                           Actor;                                             // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USoundLibrary>              Library;                                           // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SoundLibrarySubsystem_AddLibraryByClass) == 0x000008, "Wrong alignment on SoundLibrarySubsystem_AddLibraryByClass");
static_assert(sizeof(SoundLibrarySubsystem_AddLibraryByClass) == 0x000010, "Wrong size on SoundLibrarySubsystem_AddLibraryByClass");
static_assert(offsetof(SoundLibrarySubsystem_AddLibraryByClass, Actor) == 0x000000, "Member 'SoundLibrarySubsystem_AddLibraryByClass::Actor' has a wrong offset!");
static_assert(offsetof(SoundLibrarySubsystem_AddLibraryByClass, Library) == 0x000008, "Member 'SoundLibrarySubsystem_AddLibraryByClass::Library' has a wrong offset!");

// Function SoundLibrary.SoundLibrarySubsystem.DisableEventsForActor
// 0x0008 (0x0008 - 0x0000)
struct SoundLibrarySubsystem_DisableEventsForActor final
{
public:
	const class AActor*                           Actor;                                             // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SoundLibrarySubsystem_DisableEventsForActor) == 0x000008, "Wrong alignment on SoundLibrarySubsystem_DisableEventsForActor");
static_assert(sizeof(SoundLibrarySubsystem_DisableEventsForActor) == 0x000008, "Wrong size on SoundLibrarySubsystem_DisableEventsForActor");
static_assert(offsetof(SoundLibrarySubsystem_DisableEventsForActor, Actor) == 0x000000, "Member 'SoundLibrarySubsystem_DisableEventsForActor::Actor' has a wrong offset!");

// Function SoundLibrary.SoundLibrarySubsystem.EnableEventsForActor
// 0x0008 (0x0008 - 0x0000)
struct SoundLibrarySubsystem_EnableEventsForActor final
{
public:
	const class AActor*                           Actor;                                             // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SoundLibrarySubsystem_EnableEventsForActor) == 0x000008, "Wrong alignment on SoundLibrarySubsystem_EnableEventsForActor");
static_assert(sizeof(SoundLibrarySubsystem_EnableEventsForActor) == 0x000008, "Wrong size on SoundLibrarySubsystem_EnableEventsForActor");
static_assert(offsetof(SoundLibrarySubsystem_EnableEventsForActor, Actor) == 0x000000, "Member 'SoundLibrarySubsystem_EnableEventsForActor::Actor' has a wrong offset!");

// Function SoundLibrary.SoundLibrarySubsystem.PlaySound
// 0x0030 (0x0030 - 0x0000)
struct SoundLibrarySubsystem_PlaySound final
{
public:
	const class USoundLibraryContext*             Context;                                           // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundLibraryPlaySoundResult           OutResults;                                        // 0x0008(0x0028)(Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(SoundLibrarySubsystem_PlaySound) == 0x000008, "Wrong alignment on SoundLibrarySubsystem_PlaySound");
static_assert(sizeof(SoundLibrarySubsystem_PlaySound) == 0x000030, "Wrong size on SoundLibrarySubsystem_PlaySound");
static_assert(offsetof(SoundLibrarySubsystem_PlaySound, Context) == 0x000000, "Member 'SoundLibrarySubsystem_PlaySound::Context' has a wrong offset!");
static_assert(offsetof(SoundLibrarySubsystem_PlaySound, OutResults) == 0x000008, "Member 'SoundLibrarySubsystem_PlaySound::OutResults' has a wrong offset!");

// Function SoundLibrary.SoundLibrarySubsystem.PlaySoundSimple
// 0x0088 (0x0088 - 0x0000)
struct SoundLibrarySubsystem_PlaySoundSimple final
{
public:
	class AActor*                                 OwningActor;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSimpleSoundLibraryContextSettings     InSettings;                                        // 0x0008(0x0058)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FSoundLibraryPlaySoundResult           ReturnValue;                                       // 0x0060(0x0028)(Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(SoundLibrarySubsystem_PlaySoundSimple) == 0x000008, "Wrong alignment on SoundLibrarySubsystem_PlaySoundSimple");
static_assert(sizeof(SoundLibrarySubsystem_PlaySoundSimple) == 0x000088, "Wrong size on SoundLibrarySubsystem_PlaySoundSimple");
static_assert(offsetof(SoundLibrarySubsystem_PlaySoundSimple, OwningActor) == 0x000000, "Member 'SoundLibrarySubsystem_PlaySoundSimple::OwningActor' has a wrong offset!");
static_assert(offsetof(SoundLibrarySubsystem_PlaySoundSimple, InSettings) == 0x000008, "Member 'SoundLibrarySubsystem_PlaySoundSimple::InSettings' has a wrong offset!");
static_assert(offsetof(SoundLibrarySubsystem_PlaySoundSimple, ReturnValue) == 0x000060, "Member 'SoundLibrarySubsystem_PlaySoundSimple::ReturnValue' has a wrong offset!");

// Function SoundLibrary.SoundLibrarySubsystem.RemoveLibraries
// 0x0018 (0x0018 - 0x0000)
struct SoundLibrarySubsystem_RemoveLibraries final
{
public:
	const class AActor*                           Actor;                                             // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USoundLibrary*>                  Libraries;                                         // 0x0008(0x0010)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(SoundLibrarySubsystem_RemoveLibraries) == 0x000008, "Wrong alignment on SoundLibrarySubsystem_RemoveLibraries");
static_assert(sizeof(SoundLibrarySubsystem_RemoveLibraries) == 0x000018, "Wrong size on SoundLibrarySubsystem_RemoveLibraries");
static_assert(offsetof(SoundLibrarySubsystem_RemoveLibraries, Actor) == 0x000000, "Member 'SoundLibrarySubsystem_RemoveLibraries::Actor' has a wrong offset!");
static_assert(offsetof(SoundLibrarySubsystem_RemoveLibraries, Libraries) == 0x000008, "Member 'SoundLibrarySubsystem_RemoveLibraries::Libraries' has a wrong offset!");

// Function SoundLibrary.SoundLibrarySubsystem.RemoveLibrariesByClass
// 0x0018 (0x0018 - 0x0000)
struct SoundLibrarySubsystem_RemoveLibrariesByClass final
{
public:
	const class AActor*                           Actor;                                             // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class USoundLibrary>>      Libraries;                                         // 0x0008(0x0010)(Parm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};
static_assert(alignof(SoundLibrarySubsystem_RemoveLibrariesByClass) == 0x000008, "Wrong alignment on SoundLibrarySubsystem_RemoveLibrariesByClass");
static_assert(sizeof(SoundLibrarySubsystem_RemoveLibrariesByClass) == 0x000018, "Wrong size on SoundLibrarySubsystem_RemoveLibrariesByClass");
static_assert(offsetof(SoundLibrarySubsystem_RemoveLibrariesByClass, Actor) == 0x000000, "Member 'SoundLibrarySubsystem_RemoveLibrariesByClass::Actor' has a wrong offset!");
static_assert(offsetof(SoundLibrarySubsystem_RemoveLibrariesByClass, Libraries) == 0x000008, "Member 'SoundLibrarySubsystem_RemoveLibrariesByClass::Libraries' has a wrong offset!");

// Function SoundLibrary.SoundLibrarySubsystem.RemoveLibrary
// 0x0010 (0x0010 - 0x0000)
struct SoundLibrarySubsystem_RemoveLibrary final
{
public:
	const class AActor*                           Actor;                                             // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundLibrary*                          Library;                                           // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SoundLibrarySubsystem_RemoveLibrary) == 0x000008, "Wrong alignment on SoundLibrarySubsystem_RemoveLibrary");
static_assert(sizeof(SoundLibrarySubsystem_RemoveLibrary) == 0x000010, "Wrong size on SoundLibrarySubsystem_RemoveLibrary");
static_assert(offsetof(SoundLibrarySubsystem_RemoveLibrary, Actor) == 0x000000, "Member 'SoundLibrarySubsystem_RemoveLibrary::Actor' has a wrong offset!");
static_assert(offsetof(SoundLibrarySubsystem_RemoveLibrary, Library) == 0x000008, "Member 'SoundLibrarySubsystem_RemoveLibrary::Library' has a wrong offset!");

// Function SoundLibrary.SoundLibrarySubsystem.RemoveLibraryByClass
// 0x0010 (0x0010 - 0x0000)
struct SoundLibrarySubsystem_RemoveLibraryByClass final
{
public:
	const class AActor*                           Actor;                                             // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USoundLibrary>              Library;                                           // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SoundLibrarySubsystem_RemoveLibraryByClass) == 0x000008, "Wrong alignment on SoundLibrarySubsystem_RemoveLibraryByClass");
static_assert(sizeof(SoundLibrarySubsystem_RemoveLibraryByClass) == 0x000010, "Wrong size on SoundLibrarySubsystem_RemoveLibraryByClass");
static_assert(offsetof(SoundLibrarySubsystem_RemoveLibraryByClass, Actor) == 0x000000, "Member 'SoundLibrarySubsystem_RemoveLibraryByClass::Actor' has a wrong offset!");
static_assert(offsetof(SoundLibrarySubsystem_RemoveLibraryByClass, Library) == 0x000008, "Member 'SoundLibrarySubsystem_RemoveLibraryByClass::Library' has a wrong offset!");

// Function SoundLibrary.SimpleSoundLibraryContext.ConfigureContext
// 0x0060 (0x0060 - 0x0000)
struct SimpleSoundLibraryContext_ConfigureContext final
{
public:
	class AActor*                                 OwningActor;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSimpleSoundLibraryContextSettings     InSettings;                                        // 0x0008(0x0058)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(SimpleSoundLibraryContext_ConfigureContext) == 0x000008, "Wrong alignment on SimpleSoundLibraryContext_ConfigureContext");
static_assert(sizeof(SimpleSoundLibraryContext_ConfigureContext) == 0x000060, "Wrong size on SimpleSoundLibraryContext_ConfigureContext");
static_assert(offsetof(SimpleSoundLibraryContext_ConfigureContext, OwningActor) == 0x000000, "Member 'SimpleSoundLibraryContext_ConfigureContext::OwningActor' has a wrong offset!");
static_assert(offsetof(SimpleSoundLibraryContext_ConfigureContext, InSettings) == 0x000008, "Member 'SimpleSoundLibraryContext_ConfigureContext::InSettings' has a wrong offset!");

// Function SoundLibrary.AttachedSoundLibraryContext.ConfigureContext
// 0x0058 (0x0058 - 0x0000)
struct AttachedSoundLibraryContext_ConfigureContext final
{
public:
	class AActor*                                 OwningActor;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttachedSoundLibraryContextSettings   InSettings;                                        // 0x0008(0x0050)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(AttachedSoundLibraryContext_ConfigureContext) == 0x000008, "Wrong alignment on AttachedSoundLibraryContext_ConfigureContext");
static_assert(sizeof(AttachedSoundLibraryContext_ConfigureContext) == 0x000058, "Wrong size on AttachedSoundLibraryContext_ConfigureContext");
static_assert(offsetof(AttachedSoundLibraryContext_ConfigureContext, OwningActor) == 0x000000, "Member 'AttachedSoundLibraryContext_ConfigureContext::OwningActor' has a wrong offset!");
static_assert(offsetof(AttachedSoundLibraryContext_ConfigureContext, InSettings) == 0x000008, "Member 'AttachedSoundLibraryContext_ConfigureContext::InSettings' has a wrong offset!");

}

