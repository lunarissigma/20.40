﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNS_GM_OnDisplayChatEmoji

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GCNS_GM_OnDisplayChatEmoji.GCNS_GM_OnDisplayChatEmoji_C.K2_HandleGameplayCue
// 0x00E8 (0x00E8 - 0x0000)
struct GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGameplayCueEvent                             EventType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 Parameters;                                        // 0x0010(0x00D0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;                 // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue) == 0x000008, "Wrong alignment on GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue");
static_assert(sizeof(GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue) == 0x0000E8, "Wrong size on GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue, MyTarget) == 0x000000, "Member 'GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue, EventType) == 0x000008, "Member 'GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue::EventType' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue, Parameters) == 0x000010, "Member 'GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue::Parameters' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue, CallFunc_SpawnSound2D_ReturnValue) == 0x0000E0, "Member 'GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");

// Function GCNS_GM_OnDisplayChatEmoji.GCNS_GM_OnDisplayChatEmoji_C.OnActive
// 0x00E0 (0x00E0 - 0x0000)
struct GCNS_GM_OnDisplayChatEmoji_C_OnActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00D8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_OnActive_ReturnValue;                     // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCNS_GM_OnDisplayChatEmoji_C_OnActive) == 0x000008, "Wrong alignment on GCNS_GM_OnDisplayChatEmoji_C_OnActive");
static_assert(sizeof(GCNS_GM_OnDisplayChatEmoji_C_OnActive) == 0x0000E0, "Wrong size on GCNS_GM_OnDisplayChatEmoji_C_OnActive");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnActive, MyTarget) == 0x000000, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnActive, Parameters) == 0x000008, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnActive, ReturnValue) == 0x0000D8, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnActive, CallFunc_OnActive_ReturnValue) == 0x0000D9, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnActive::CallFunc_OnActive_ReturnValue' has a wrong offset!");

// Function GCNS_GM_OnDisplayChatEmoji.GCNS_GM_OnDisplayChatEmoji_C.OnExecute
// 0x00E0 (0x00E0 - 0x0000)
struct GCNS_GM_OnDisplayChatEmoji_C_OnExecute final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00D8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_OnExecute_ReturnValue;                    // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCNS_GM_OnDisplayChatEmoji_C_OnExecute) == 0x000008, "Wrong alignment on GCNS_GM_OnDisplayChatEmoji_C_OnExecute");
static_assert(sizeof(GCNS_GM_OnDisplayChatEmoji_C_OnExecute) == 0x0000E0, "Wrong size on GCNS_GM_OnDisplayChatEmoji_C_OnExecute");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnExecute, MyTarget) == 0x000000, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnExecute::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnExecute, Parameters) == 0x000008, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnExecute::Parameters' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnExecute, ReturnValue) == 0x0000D8, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnExecute::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnExecute, CallFunc_OnExecute_ReturnValue) == 0x0000D9, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnExecute::CallFunc_OnExecute_ReturnValue' has a wrong offset!");

// Function GCNS_GM_OnDisplayChatEmoji.GCNS_GM_OnDisplayChatEmoji_C.OnRemove
// 0x00E0 (0x00E0 - 0x0000)
struct GCNS_GM_OnDisplayChatEmoji_C_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00D8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_OnRemove_ReturnValue;                     // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCNS_GM_OnDisplayChatEmoji_C_OnRemove) == 0x000008, "Wrong alignment on GCNS_GM_OnDisplayChatEmoji_C_OnRemove");
static_assert(sizeof(GCNS_GM_OnDisplayChatEmoji_C_OnRemove) == 0x0000E0, "Wrong size on GCNS_GM_OnDisplayChatEmoji_C_OnRemove");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnRemove, MyTarget) == 0x000000, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnRemove, Parameters) == 0x000008, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnRemove, ReturnValue) == 0x0000D8, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnRemove::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnRemove, CallFunc_OnRemove_ReturnValue) == 0x0000D9, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnRemove::CallFunc_OnRemove_ReturnValue' has a wrong offset!");

// Function GCNS_GM_OnDisplayChatEmoji.GCNS_GM_OnDisplayChatEmoji_C.OnStartParticleSystemSpawned
// 0x0328 (0x0328 - 0x0000)
struct GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned final
{
public:
	class UParticleSystemComponent*               SpawnedParticleSysComponent;                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakGameplayCueParameters_NormalizedMagnitude; // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakGameplayCueParameters_RawMagnitude;  // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           CallFunc_BreakGameplayCueParameters_EffectContext; // 0x00E8(0x0018)()
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_MatchedTagName; // 0x0100(0x0004)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_OriginalTag;   // 0x0104(0x0004)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedSourceTags; // 0x0108(0x0020)()
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedTargetTags; // 0x0128(0x0020)()
	struct FVector                                CallFunc_BreakGameplayCueParameters_Location;      // 0x0148(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakGameplayCueParameters_Normal;        // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_Instigator;    // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_EffectCauser;  // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_BreakGameplayCueParameters_SourceObject;  // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakGameplayCueParameters_PhysicalMaterial; // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_GameplayEffectLevel; // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_AbilityLevel;  // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_BreakGameplayCueParameters_TargetAttachComponent; // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy; // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A9[0x7];                                      // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortLiveBroadcastController*           K2Node_DynamicCast_AsFort_Live_Broadcast_Controller; // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B9[0x7];                                      // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaEmojiItemDefinition*             K2Node_DynamicCast_AsAthena_Emoji_Item_Definition; // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C9[0x7];                                      // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        CallFunc_GetPlayerPawn_ReturnValue;                // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaEmojiItemDefinition*             K2Node_DynamicCast_AsAthena_Emoji_Item_Definition_1; // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E1[0x7];                                      // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F2[0x6];                                      // 0x01F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x01F8(0x0028)(UObjectWrapper, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue_1;              // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0228(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_241[0x7];                                      // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0248(0x00E0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned) == 0x000008, "Wrong alignment on GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned");
static_assert(sizeof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned) == 0x000328, "Wrong size on GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, SpawnedParticleSysComponent) == 0x000000, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::SpawnedParticleSysComponent' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, Parameters) == 0x000008, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::Parameters' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_GetPlayerController_ReturnValue) == 0x0000D8, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x0000E0, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x0000E4, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x0000E8, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000100, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x000104, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000108, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000128, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_Location) == 0x000148, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_Normal) == 0x000160, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_Instigator) == 0x000178, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x000180, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x000188, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x000190, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x000198, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x00019C, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0001A0, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0001A8, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_AsFort_Live_Broadcast_Controller) == 0x0001B0, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_AsFort_Live_Broadcast_Controller' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_bSuccess) == 0x0001B8, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_AsAthena_Emoji_Item_Definition) == 0x0001C0, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_AsAthena_Emoji_Item_Definition' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_bSuccess_1) == 0x0001C8, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_GetPlayerPawn_ReturnValue) == 0x0001D0, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_AsAthena_Emoji_Item_Definition_1) == 0x0001D8, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_AsAthena_Emoji_Item_Definition_1' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_bSuccess_2) == 0x0001E0, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x0001E8, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_bSuccess_3) == 0x0001F0, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0001F1, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x0001F8, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_GetPlayerPawn_ReturnValue_1) == 0x000220, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_GetPlayerPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_Add_VectorVector_ReturnValue) == 0x000228, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000240, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000248, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");

}

