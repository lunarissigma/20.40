﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Commando_FragGrenade

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C
// 0x02F8 (0x0CE8 - 0x09F0)
class AB_Prj_Commando_FragGrenade_C final : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x09F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URotatingMovementComponent*             RotatingMovement;                                  // 0x09F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Fuse_Particle;                                     // 0x0A00(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh;                                              // 0x0A08(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        GrenadeFuse_AudioComponent;                        // 0x0A10(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Effect_Distance;                                   // 0x0A18(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        P_Explosion;                                       // 0x0A20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Cue_DistantSound;                                  // 0x0A28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Cue_CloseSound;                                    // 0x0A30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExplosionRadius;                                   // 0x0A38(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         NumberOfBouncesTillExplode;                        // 0x0A3C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentNumberOfBounces;                            // 0x0A40(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A44[0x4];                                      // 0x0A44(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Cue_GrenadeFuseSound;                              // 0x0A48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BouncePawnAgainstPawnGravityScale;                 // 0x0A50(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A54[0x4];                                      // 0x0A54(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UForceFeedbackEffect*                   ExplosionForceFeedbackNear;                        // 0x0A58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                   ExplosionForceFeedbackFar;                         // 0x0A60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxClusterGrenades;                                // 0x0A68(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           EC_ClusterExplosion;                               // 0x0A6C(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasCluster;                                       // 0x0A70(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_A71[0x7];                                      // 0x0A71(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Prj_Cluster;                                       // 0x0A78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec       ClusterContainerSpec;                              // 0x0A80(0x00B8)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          bHasKeepOut;                                       // 0x0B38(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B39[0x7];                                      // 0x0B39(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortGameplayEffectContainerSpec       KeepOutContainerSpec;                              // 0x0B40(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 AOE_KeepOut;                                       // 0x0BF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasClusterTactical;                               // 0x0C00(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_C01[0x7];                                      // 0x0C01(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortGameplayEffectContainerSpec       Cluster_Tactical_Container_Spec;                   // 0x0C08(0x00B8)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FGameplayTagContainer                  TC_ActorTagsThatShouldExplodeOnOverlap;            // 0x0CC0(0x0020)(Edit, BlueprintVisible)
	struct FGameplayTag                           T_Event_GrenadeExploded;                           // 0x0CE0(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Bind_Destroy_Grenade();
	float CalcGrenadeSpeed(float Angle);
	void CheckKeepOutAndCluster();
	void ExecuteUbergraph_B_Prj_Commando_FragGrenade(int32 EntryPoint);
	void Force_On_Exploded_Effects();
	void On_Destroy_Grenade(class AActor* DestroyedActor);
	void OnBounce(const struct FHitResult& Hit);
	void OnExploded(const TArray<class AActor*>& HitActors, const TArray<struct FHitResult>& HitResults);
	void OnRep_StoredHit();
	void OnStop(const struct FHitResult& Hit);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void SendExplodedEvent();
	void SpawnClusters();
	void SpawnKeepOut();
	void Stop_Rotation();
	void TriggerDoExplsoion();
	void Unbind_Destroy_Grenade();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Prj_Commando_FragGrenade_C">();
	}
	static class AB_Prj_Commando_FragGrenade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Prj_Commando_FragGrenade_C>();
	}
};
static_assert(alignof(AB_Prj_Commando_FragGrenade_C) == 0x000008, "Wrong alignment on AB_Prj_Commando_FragGrenade_C");
static_assert(sizeof(AB_Prj_Commando_FragGrenade_C) == 0x000CE8, "Wrong size on AB_Prj_Commando_FragGrenade_C");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, UberGraphFrame) == 0x0009F0, "Member 'AB_Prj_Commando_FragGrenade_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, RotatingMovement) == 0x0009F8, "Member 'AB_Prj_Commando_FragGrenade_C::RotatingMovement' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, Fuse_Particle) == 0x000A00, "Member 'AB_Prj_Commando_FragGrenade_C::Fuse_Particle' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, Mesh) == 0x000A08, "Member 'AB_Prj_Commando_FragGrenade_C::Mesh' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, GrenadeFuse_AudioComponent) == 0x000A10, "Member 'AB_Prj_Commando_FragGrenade_C::GrenadeFuse_AudioComponent' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, Effect_Distance) == 0x000A18, "Member 'AB_Prj_Commando_FragGrenade_C::Effect_Distance' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, P_Explosion) == 0x000A20, "Member 'AB_Prj_Commando_FragGrenade_C::P_Explosion' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, Cue_DistantSound) == 0x000A28, "Member 'AB_Prj_Commando_FragGrenade_C::Cue_DistantSound' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, Cue_CloseSound) == 0x000A30, "Member 'AB_Prj_Commando_FragGrenade_C::Cue_CloseSound' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, ExplosionRadius) == 0x000A38, "Member 'AB_Prj_Commando_FragGrenade_C::ExplosionRadius' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, NumberOfBouncesTillExplode) == 0x000A3C, "Member 'AB_Prj_Commando_FragGrenade_C::NumberOfBouncesTillExplode' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, CurrentNumberOfBounces) == 0x000A40, "Member 'AB_Prj_Commando_FragGrenade_C::CurrentNumberOfBounces' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, Cue_GrenadeFuseSound) == 0x000A48, "Member 'AB_Prj_Commando_FragGrenade_C::Cue_GrenadeFuseSound' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, BouncePawnAgainstPawnGravityScale) == 0x000A50, "Member 'AB_Prj_Commando_FragGrenade_C::BouncePawnAgainstPawnGravityScale' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, ExplosionForceFeedbackNear) == 0x000A58, "Member 'AB_Prj_Commando_FragGrenade_C::ExplosionForceFeedbackNear' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, ExplosionForceFeedbackFar) == 0x000A60, "Member 'AB_Prj_Commando_FragGrenade_C::ExplosionForceFeedbackFar' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, MaxClusterGrenades) == 0x000A68, "Member 'AB_Prj_Commando_FragGrenade_C::MaxClusterGrenades' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, EC_ClusterExplosion) == 0x000A6C, "Member 'AB_Prj_Commando_FragGrenade_C::EC_ClusterExplosion' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, bHasCluster) == 0x000A70, "Member 'AB_Prj_Commando_FragGrenade_C::bHasCluster' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, Prj_Cluster) == 0x000A78, "Member 'AB_Prj_Commando_FragGrenade_C::Prj_Cluster' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, ClusterContainerSpec) == 0x000A80, "Member 'AB_Prj_Commando_FragGrenade_C::ClusterContainerSpec' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, bHasKeepOut) == 0x000B38, "Member 'AB_Prj_Commando_FragGrenade_C::bHasKeepOut' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, KeepOutContainerSpec) == 0x000B40, "Member 'AB_Prj_Commando_FragGrenade_C::KeepOutContainerSpec' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, AOE_KeepOut) == 0x000BF8, "Member 'AB_Prj_Commando_FragGrenade_C::AOE_KeepOut' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, bHasClusterTactical) == 0x000C00, "Member 'AB_Prj_Commando_FragGrenade_C::bHasClusterTactical' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, Cluster_Tactical_Container_Spec) == 0x000C08, "Member 'AB_Prj_Commando_FragGrenade_C::Cluster_Tactical_Container_Spec' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, TC_ActorTagsThatShouldExplodeOnOverlap) == 0x000CC0, "Member 'AB_Prj_Commando_FragGrenade_C::TC_ActorTagsThatShouldExplodeOnOverlap' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, T_Event_GrenadeExploded) == 0x000CE0, "Member 'AB_Prj_Commando_FragGrenade_C::T_Event_GrenadeExploded' has a wrong offset!");

}

