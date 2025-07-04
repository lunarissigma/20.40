﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PictureInPictureDescriptors

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "PictureInPictureDescriptors_structs.hpp"
#include "Engine_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// Class PictureInPictureDescriptors.PictureInPictureAnalyticsManager
// 0x0050 (0x0078 - 0x0028)
class UPictureInPictureAnalyticsManager final : public UObject
{
public:
	TMap<class FString, struct FPictureInPictureAnalyticsPayload> PartnerAnalytics;                  // 0x0028(0x0050)(Transient, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PictureInPictureAnalyticsManager">();
	}
	static class UPictureInPictureAnalyticsManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPictureInPictureAnalyticsManager>();
	}
};
static_assert(alignof(UPictureInPictureAnalyticsManager) == 0x000008, "Wrong alignment on UPictureInPictureAnalyticsManager");
static_assert(sizeof(UPictureInPictureAnalyticsManager) == 0x000078, "Wrong size on UPictureInPictureAnalyticsManager");
static_assert(offsetof(UPictureInPictureAnalyticsManager, PartnerAnalytics) == 0x000028, "Member 'UPictureInPictureAnalyticsManager::PartnerAnalytics' has a wrong offset!");

// Class PictureInPictureDescriptors.PictureInPicturePartnerDataAsset
// 0x00C0 (0x00F0 - 0x0030)
class UPictureInPicturePartnerDataAsset final : public UPrimaryDataAsset
{
public:
	class FString                                 PartnerName;                                       // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                 ClientImage;                                       // 0x0040(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MediaHeight;                                       // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MediaWidth;                                        // 0x004C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonActivatableWidget>   MetadataOverlayClass;                              // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPictureInPictureActionConfig>  Actions;                                           // 0x0058(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FPIPVideoPlayerAssetConfig             AssetConfig;                                       // 0x0068(0x0088)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PictureInPicturePartnerDataAsset">();
	}
	static class UPictureInPicturePartnerDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPictureInPicturePartnerDataAsset>();
	}
};
static_assert(alignof(UPictureInPicturePartnerDataAsset) == 0x000008, "Wrong alignment on UPictureInPicturePartnerDataAsset");
static_assert(sizeof(UPictureInPicturePartnerDataAsset) == 0x0000F0, "Wrong size on UPictureInPicturePartnerDataAsset");
static_assert(offsetof(UPictureInPicturePartnerDataAsset, PartnerName) == 0x000030, "Member 'UPictureInPicturePartnerDataAsset::PartnerName' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePartnerDataAsset, ClientImage) == 0x000040, "Member 'UPictureInPicturePartnerDataAsset::ClientImage' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePartnerDataAsset, MediaHeight) == 0x000048, "Member 'UPictureInPicturePartnerDataAsset::MediaHeight' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePartnerDataAsset, MediaWidth) == 0x00004C, "Member 'UPictureInPicturePartnerDataAsset::MediaWidth' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePartnerDataAsset, MetadataOverlayClass) == 0x000050, "Member 'UPictureInPicturePartnerDataAsset::MetadataOverlayClass' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePartnerDataAsset, Actions) == 0x000058, "Member 'UPictureInPicturePartnerDataAsset::Actions' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePartnerDataAsset, AssetConfig) == 0x000068, "Member 'UPictureInPicturePartnerDataAsset::AssetConfig' has a wrong offset!");

// Class PictureInPictureDescriptors.PictureInPictureActionData
// 0x0148 (0x0170 - 0x0028)
#pragma pack(push, 0x1)
class alignas(0x10) UPictureInPictureActionData : public UObject
{
public:
	class FString                                 PartnerName;                                       // 0x0028(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_38[0x8];                                       // 0x0038(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            ActionBrush;                                       // 0x0040(0x00C0)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   ActionText;                                        // 0x0100(0x0018)(BlueprintVisible, NativeAccessSpecifierPublic)
	EPictureInPictureAction                       ActionType;                                        // 0x0118(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              ActionEvent;                                       // 0x0120(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(TMulticastInlineDelegate<void(bool bSuccess)> InCallback)> ActionFiredEvent; // 0x0130(0x0010)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	uint8                                         Pad_140[0x18];                                     // 0x0140(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(bool bSuccess)> CallbackEvent;                                     // 0x0158(0x0010)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	void CallEvent();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PictureInPictureActionData">();
	}
	static class UPictureInPictureActionData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPictureInPictureActionData>();
	}
};
#pragma pack(pop)
static_assert(alignof(UPictureInPictureActionData) == 0x000010, "Wrong alignment on UPictureInPictureActionData");
static_assert(sizeof(UPictureInPictureActionData) == 0x000170, "Wrong size on UPictureInPictureActionData");
static_assert(offsetof(UPictureInPictureActionData, PartnerName) == 0x000028, "Member 'UPictureInPictureActionData::PartnerName' has a wrong offset!");
static_assert(offsetof(UPictureInPictureActionData, ActionBrush) == 0x000040, "Member 'UPictureInPictureActionData::ActionBrush' has a wrong offset!");
static_assert(offsetof(UPictureInPictureActionData, ActionText) == 0x000100, "Member 'UPictureInPictureActionData::ActionText' has a wrong offset!");
static_assert(offsetof(UPictureInPictureActionData, ActionType) == 0x000118, "Member 'UPictureInPictureActionData::ActionType' has a wrong offset!");
static_assert(offsetof(UPictureInPictureActionData, ActionEvent) == 0x000120, "Member 'UPictureInPictureActionData::ActionEvent' has a wrong offset!");
static_assert(offsetof(UPictureInPictureActionData, ActionFiredEvent) == 0x000130, "Member 'UPictureInPictureActionData::ActionFiredEvent' has a wrong offset!");
static_assert(offsetof(UPictureInPictureActionData, CallbackEvent) == 0x000158, "Member 'UPictureInPictureActionData::CallbackEvent' has a wrong offset!");

// Class PictureInPictureDescriptors.PictureInPictureSourceActionData
// 0x0020 (0x0190 - 0x0170)
class UPictureInPictureSourceActionData final : public UPictureInPictureActionData
{
public:
	class FString                                 SourceName;                                        // 0x0168(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const class FString& SourceActionSelected)> SourceActionEvent;     // 0x0178(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_188[0x8];                                      // 0x0188(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PictureInPictureSourceActionData">();
	}
	static class UPictureInPictureSourceActionData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPictureInPictureSourceActionData>();
	}
};
static_assert(alignof(UPictureInPictureSourceActionData) == 0x000010, "Wrong alignment on UPictureInPictureSourceActionData");
static_assert(sizeof(UPictureInPictureSourceActionData) == 0x000190, "Wrong size on UPictureInPictureSourceActionData");
static_assert(offsetof(UPictureInPictureSourceActionData, SourceName) == 0x000168, "Member 'UPictureInPictureSourceActionData::SourceName' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSourceActionData, SourceActionEvent) == 0x000178, "Member 'UPictureInPictureSourceActionData::SourceActionEvent' has a wrong offset!");

}

