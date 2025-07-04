﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameplayBehaviorsModule

#include "Basic.hpp"

#include "AIModule_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayBehaviorsModule_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class GameplayBehaviorsModule.GameplayBehavior
// 0x0060 (0x0088 - 0x0028)
class UGameplayBehavior : public UObject
{
public:
	uint8                                         Pad_28[0x14];                                      // 0x0028(0x0014)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           ActionTag;                                         // 0x003C(0x0004)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_40[0x18];                                      // 0x0040(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         RelevantActors;                                    // 0x0058(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class AActor*                                 TransientSmartObjectOwner;                         // 0x0068(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                 TransientAvatar;                                   // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UGameplayTask*>                  ActiveTasks;                                       // 0x0078(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)

public:
	void K2_AbortBehavior(class AActor* Avatar);
	void K2_EndBehavior(class AActor* Avatar);
	void K2_OnFinished(class AActor* Avatar, bool bWasInterrupted);
	void K2_OnFinishedCharacter(class ACharacter* Avatar, bool bWasInterrupted);
	void K2_OnFinishedPawn(class APawn* Avatar, bool bWasInterrupted);
	void K2_OnTriggered(class AActor* Avatar, const class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner);
	void K2_OnTriggeredCharacter(class ACharacter* Avatar, const class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner);
	void K2_OnTriggeredPawn(class APawn* Avatar, const class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner);
	void K2_TriggerBehavior(class AActor* Avatar, class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner);

	int32 K2_GetNextActorIndexInSequence(int32 CurrentIndex) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayBehavior">();
	}
	static class UGameplayBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayBehavior>();
	}
};
static_assert(alignof(UGameplayBehavior) == 0x000008, "Wrong alignment on UGameplayBehavior");
static_assert(sizeof(UGameplayBehavior) == 0x000088, "Wrong size on UGameplayBehavior");
static_assert(offsetof(UGameplayBehavior, ActionTag) == 0x00003C, "Member 'UGameplayBehavior::ActionTag' has a wrong offset!");
static_assert(offsetof(UGameplayBehavior, RelevantActors) == 0x000058, "Member 'UGameplayBehavior::RelevantActors' has a wrong offset!");
static_assert(offsetof(UGameplayBehavior, TransientSmartObjectOwner) == 0x000068, "Member 'UGameplayBehavior::TransientSmartObjectOwner' has a wrong offset!");
static_assert(offsetof(UGameplayBehavior, TransientAvatar) == 0x000070, "Member 'UGameplayBehavior::TransientAvatar' has a wrong offset!");
static_assert(offsetof(UGameplayBehavior, ActiveTasks) == 0x000078, "Member 'UGameplayBehavior::ActiveTasks' has a wrong offset!");

// Class GameplayBehaviorsModule.GameplayBehavior_AnimationBased
// 0x0010 (0x0098 - 0x0088)
class UGameplayBehavior_AnimationBased final : public UGameplayBehavior
{
public:
	TArray<struct FMontagePlaybackData>           ActivePlayback;                                    // 0x0088(0x0010)(ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

public:
	void OnMontageFinished(class UAnimMontage* Montage, bool bInterrupted, class AActor* InAvatar);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayBehavior_AnimationBased">();
	}
	static class UGameplayBehavior_AnimationBased* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayBehavior_AnimationBased>();
	}
};
static_assert(alignof(UGameplayBehavior_AnimationBased) == 0x000008, "Wrong alignment on UGameplayBehavior_AnimationBased");
static_assert(sizeof(UGameplayBehavior_AnimationBased) == 0x000098, "Wrong size on UGameplayBehavior_AnimationBased");
static_assert(offsetof(UGameplayBehavior_AnimationBased, ActivePlayback) == 0x000088, "Member 'UGameplayBehavior_AnimationBased::ActivePlayback' has a wrong offset!");

// Class GameplayBehaviorsModule.BTTask_StopGameplayBehavior
// 0x0008 (0x0078 - 0x0070)
class UBTTask_StopGameplayBehavior final : public UBTTaskNode
{
public:
	TSubclassOf<class UGameplayBehavior>          BehaviorToStop;                                    // 0x0070(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTTask_StopGameplayBehavior">();
	}
	static class UBTTask_StopGameplayBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_StopGameplayBehavior>();
	}
};
static_assert(alignof(UBTTask_StopGameplayBehavior) == 0x000008, "Wrong alignment on UBTTask_StopGameplayBehavior");
static_assert(sizeof(UBTTask_StopGameplayBehavior) == 0x000078, "Wrong size on UBTTask_StopGameplayBehavior");
static_assert(offsetof(UBTTask_StopGameplayBehavior, BehaviorToStop) == 0x000070, "Member 'UBTTask_StopGameplayBehavior::BehaviorToStop' has a wrong offset!");

// Class GameplayBehaviorsModule.GameplayBehaviorConfig
// 0x0008 (0x0030 - 0x0028)
class UGameplayBehaviorConfig : public UObject
{
public:
	TSubclassOf<class UGameplayBehavior>          BehaviorClass;                                     // 0x0028(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayBehaviorConfig">();
	}
	static class UGameplayBehaviorConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayBehaviorConfig>();
	}
};
static_assert(alignof(UGameplayBehaviorConfig) == 0x000008, "Wrong alignment on UGameplayBehaviorConfig");
static_assert(sizeof(UGameplayBehaviorConfig) == 0x000030, "Wrong size on UGameplayBehaviorConfig");
static_assert(offsetof(UGameplayBehaviorConfig, BehaviorClass) == 0x000028, "Member 'UGameplayBehaviorConfig::BehaviorClass' has a wrong offset!");

// Class GameplayBehaviorsModule.GameplayBehaviorConfig_Animation
// 0x0038 (0x0068 - 0x0030)
class UGameplayBehaviorConfig_Animation final : public UGameplayBehaviorConfig
{
public:
	TSoftObjectPtr<class UAnimMontage>            AnimMontage;                                       // 0x0030(0x0028)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         PlayRate;                                          // 0x0058(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                   StartSectionName;                                  // 0x005C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         bLoop : 1;                                         // 0x0060(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayBehaviorConfig_Animation">();
	}
	static class UGameplayBehaviorConfig_Animation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayBehaviorConfig_Animation>();
	}
};
static_assert(alignof(UGameplayBehaviorConfig_Animation) == 0x000008, "Wrong alignment on UGameplayBehaviorConfig_Animation");
static_assert(sizeof(UGameplayBehaviorConfig_Animation) == 0x000068, "Wrong size on UGameplayBehaviorConfig_Animation");
static_assert(offsetof(UGameplayBehaviorConfig_Animation, AnimMontage) == 0x000030, "Member 'UGameplayBehaviorConfig_Animation::AnimMontage' has a wrong offset!");
static_assert(offsetof(UGameplayBehaviorConfig_Animation, PlayRate) == 0x000058, "Member 'UGameplayBehaviorConfig_Animation::PlayRate' has a wrong offset!");
static_assert(offsetof(UGameplayBehaviorConfig_Animation, StartSectionName) == 0x00005C, "Member 'UGameplayBehaviorConfig_Animation::StartSectionName' has a wrong offset!");

// Class GameplayBehaviorsModule.GameplayBehaviorConfig_BehaviorTree
// 0x0030 (0x0060 - 0x0030)
class UGameplayBehaviorConfig_BehaviorTree final : public UGameplayBehaviorConfig
{
public:
	TSoftObjectPtr<class UBehaviorTree>           BehaviorTree;                                      // 0x0030(0x0028)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         bRevertToPreviousBTOnFinish : 1;                   // 0x0058(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayBehaviorConfig_BehaviorTree">();
	}
	static class UGameplayBehaviorConfig_BehaviorTree* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayBehaviorConfig_BehaviorTree>();
	}
};
static_assert(alignof(UGameplayBehaviorConfig_BehaviorTree) == 0x000008, "Wrong alignment on UGameplayBehaviorConfig_BehaviorTree");
static_assert(sizeof(UGameplayBehaviorConfig_BehaviorTree) == 0x000060, "Wrong size on UGameplayBehaviorConfig_BehaviorTree");
static_assert(offsetof(UGameplayBehaviorConfig_BehaviorTree, BehaviorTree) == 0x000030, "Member 'UGameplayBehaviorConfig_BehaviorTree::BehaviorTree' has a wrong offset!");

// Class GameplayBehaviorsModule.GameplayBehaviorManager
// 0x0058 (0x0090 - 0x0038)
class UGameplayBehaviorManager final : public UAISubsystem
{
public:
	TMap<class AActor*, struct FAgentGameplayBehaviors> AgentGameplayBehaviors;                      // 0x0038(0x0050)(Protected, NativeAccessSpecifierProtected)
	uint8                                         bCreateIfMissing : 1;                              // 0x0088(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayBehaviorManager">();
	}
	static class UGameplayBehaviorManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayBehaviorManager>();
	}
};
static_assert(alignof(UGameplayBehaviorManager) == 0x000008, "Wrong alignment on UGameplayBehaviorManager");
static_assert(sizeof(UGameplayBehaviorManager) == 0x000090, "Wrong size on UGameplayBehaviorManager");
static_assert(offsetof(UGameplayBehaviorManager, AgentGameplayBehaviors) == 0x000038, "Member 'UGameplayBehaviorManager::AgentGameplayBehaviors' has a wrong offset!");

// Class GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameplayBehaviorsBlueprintFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayBehaviorsBlueprintFunctionLibrary">();
	}
	static class UGameplayBehaviorsBlueprintFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayBehaviorsBlueprintFunctionLibrary>();
	}
};
static_assert(alignof(UGameplayBehaviorsBlueprintFunctionLibrary) == 0x000008, "Wrong alignment on UGameplayBehaviorsBlueprintFunctionLibrary");
static_assert(sizeof(UGameplayBehaviorsBlueprintFunctionLibrary) == 0x000028, "Wrong size on UGameplayBehaviorsBlueprintFunctionLibrary");

// Class GameplayBehaviorsModule.GameplayBehavior_BehaviorTree
// 0x0020 (0x00A8 - 0x0088)
class UGameplayBehavior_BehaviorTree final : public UGameplayBehavior
{
public:
	class UBehaviorTree*                          PreviousBT;                                        // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AAIController*                          AIController;                                      // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bSingleRun;                                        // 0x0098(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_99[0xF];                                       // 0x0099(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayBehavior_BehaviorTree">();
	}
	static class UGameplayBehavior_BehaviorTree* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayBehavior_BehaviorTree>();
	}
};
static_assert(alignof(UGameplayBehavior_BehaviorTree) == 0x000008, "Wrong alignment on UGameplayBehavior_BehaviorTree");
static_assert(sizeof(UGameplayBehavior_BehaviorTree) == 0x0000A8, "Wrong size on UGameplayBehavior_BehaviorTree");
static_assert(offsetof(UGameplayBehavior_BehaviorTree, PreviousBT) == 0x000088, "Member 'UGameplayBehavior_BehaviorTree::PreviousBT' has a wrong offset!");
static_assert(offsetof(UGameplayBehavior_BehaviorTree, AIController) == 0x000090, "Member 'UGameplayBehavior_BehaviorTree::AIController' has a wrong offset!");
static_assert(offsetof(UGameplayBehavior_BehaviorTree, bSingleRun) == 0x000098, "Member 'UGameplayBehavior_BehaviorTree::bSingleRun' has a wrong offset!");

}

