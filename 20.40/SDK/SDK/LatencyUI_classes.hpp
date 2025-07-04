﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LatencyUI

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// Class LatencyUI.LatencyGraph
// 0x0048 (0x02C0 - 0x0278)
class ULatencyGraph final : public UUserWidget
{
public:
	struct FColor                                 TotalLatencyLineColor;                             // 0x0278(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FColor                                 GameLatencyLineColor;                              // 0x027C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FColor                                 RenderLatencyLineColor;                            // 0x0280(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FColor                                 DriverLatencyLineColor;                            // 0x0284(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FColor                                 OSWorkQueueLatencyLineColor;                       // 0x0288(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FColor                                 GPURenderLatencyLineColor;                         // 0x028C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FColor                                 BackgroundColor;                                   // 0x0290(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         MaxLatencyToGraph;                                 // 0x0294(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                              DesiredSize;                                       // 0x0298(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2A8[0x18];                                     // 0x02A8(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LatencyGraph">();
	}
	static class ULatencyGraph* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULatencyGraph>();
	}
};
static_assert(alignof(ULatencyGraph) == 0x000008, "Wrong alignment on ULatencyGraph");
static_assert(sizeof(ULatencyGraph) == 0x0002C0, "Wrong size on ULatencyGraph");
static_assert(offsetof(ULatencyGraph, TotalLatencyLineColor) == 0x000278, "Member 'ULatencyGraph::TotalLatencyLineColor' has a wrong offset!");
static_assert(offsetof(ULatencyGraph, GameLatencyLineColor) == 0x00027C, "Member 'ULatencyGraph::GameLatencyLineColor' has a wrong offset!");
static_assert(offsetof(ULatencyGraph, RenderLatencyLineColor) == 0x000280, "Member 'ULatencyGraph::RenderLatencyLineColor' has a wrong offset!");
static_assert(offsetof(ULatencyGraph, DriverLatencyLineColor) == 0x000284, "Member 'ULatencyGraph::DriverLatencyLineColor' has a wrong offset!");
static_assert(offsetof(ULatencyGraph, OSWorkQueueLatencyLineColor) == 0x000288, "Member 'ULatencyGraph::OSWorkQueueLatencyLineColor' has a wrong offset!");
static_assert(offsetof(ULatencyGraph, GPURenderLatencyLineColor) == 0x00028C, "Member 'ULatencyGraph::GPURenderLatencyLineColor' has a wrong offset!");
static_assert(offsetof(ULatencyGraph, BackgroundColor) == 0x000290, "Member 'ULatencyGraph::BackgroundColor' has a wrong offset!");
static_assert(offsetof(ULatencyGraph, MaxLatencyToGraph) == 0x000294, "Member 'ULatencyGraph::MaxLatencyToGraph' has a wrong offset!");
static_assert(offsetof(ULatencyGraph, DesiredSize) == 0x000298, "Member 'ULatencyGraph::DesiredSize' has a wrong offset!");

// Class LatencyUI.LatencyWidget
// 0x00F8 (0x0370 - 0x0278)
class ULatencyWidget final : public UUserWidget
{
public:
	uint8                                         Pad_278[0x8];                                      // 0x0278(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonTextBlock*                       TotalLatencyUI;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                       GameLatencyUI;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                       RenderLatencyUI;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                       OSWorkLatencyUI;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                       DriverLatencyUI;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                       GPURenderLatencyUI;                                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                       TweakLatencyUI;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2B8[0xB8];                                     // 0x02B8(0x00B8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void StartTimer();
	void StopTimer();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LatencyWidget">();
	}
	static class ULatencyWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULatencyWidget>();
	}
};
static_assert(alignof(ULatencyWidget) == 0x000008, "Wrong alignment on ULatencyWidget");
static_assert(sizeof(ULatencyWidget) == 0x000370, "Wrong size on ULatencyWidget");
static_assert(offsetof(ULatencyWidget, TotalLatencyUI) == 0x000280, "Member 'ULatencyWidget::TotalLatencyUI' has a wrong offset!");
static_assert(offsetof(ULatencyWidget, GameLatencyUI) == 0x000288, "Member 'ULatencyWidget::GameLatencyUI' has a wrong offset!");
static_assert(offsetof(ULatencyWidget, RenderLatencyUI) == 0x000290, "Member 'ULatencyWidget::RenderLatencyUI' has a wrong offset!");
static_assert(offsetof(ULatencyWidget, OSWorkLatencyUI) == 0x000298, "Member 'ULatencyWidget::OSWorkLatencyUI' has a wrong offset!");
static_assert(offsetof(ULatencyWidget, DriverLatencyUI) == 0x0002A0, "Member 'ULatencyWidget::DriverLatencyUI' has a wrong offset!");
static_assert(offsetof(ULatencyWidget, GPURenderLatencyUI) == 0x0002A8, "Member 'ULatencyWidget::GPURenderLatencyUI' has a wrong offset!");
static_assert(offsetof(ULatencyWidget, TweakLatencyUI) == 0x0002B0, "Member 'ULatencyWidget::TweakLatencyUI' has a wrong offset!");

}

