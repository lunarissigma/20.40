﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Armadillo_AnimComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Armadillo_AnimComponent.Armadillo_AnimComponent_C
// 0x0008 (0x00A8 - 0x00A0)
class UArmadillo_AnimComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Armadillo_AnimComponent(int32 EntryPoint);
	void OnBlendOut_ABFD1FD04C68D253804BB3A3C38AEA7B(class FName NotifyName);
	void OnCompleted_ABFD1FD04C68D253804BB3A3C38AEA7B(class FName NotifyName);
	void OnInterrupted_ABFD1FD04C68D253804BB3A3C38AEA7B(class FName NotifyName);
	void OnNotifyBegin_ABFD1FD04C68D253804BB3A3C38AEA7B(class FName NotifyName);
	void OnNotifyEnd_ABFD1FD04C68D253804BB3A3C38AEA7B(class FName NotifyName);
	void PlayAnimation(class USkeletalMeshComponent* Mesh, class UAnimMontage* Montage, bool On);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Armadillo_AnimComponent_C">();
	}
	static class UArmadillo_AnimComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UArmadillo_AnimComponent_C>();
	}
};
static_assert(alignof(UArmadillo_AnimComponent_C) == 0x000008, "Wrong alignment on UArmadillo_AnimComponent_C");
static_assert(sizeof(UArmadillo_AnimComponent_C) == 0x0000A8, "Wrong size on UArmadillo_AnimComponent_C");
static_assert(offsetof(UArmadillo_AnimComponent_C, UberGraphFrame) == 0x0000A0, "Member 'UArmadillo_AnimComponent_C::UberGraphFrame' has a wrong offset!");

}

