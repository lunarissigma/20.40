﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Events_AudioAnalysis_Stem_Component

#include "Basic.hpp"

#include "Events_AudioAnalysis_Stem_Type_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Events_AudioAnalysis_Stem_Component.Events_AudioAnalysis_Stem_Component_C
// 0x0040 (0x00E0 - 0x00A0)
class UEvents_AudioAnalysis_Stem_Component_C final : public UActorComponent
{
public:
	class UAudioSynesthesiaNRT*                   NRT;                                               // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Events_AudioAnalysis_Stem_Type                Type;                                              // 0x00A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x3];                                       // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         NRTLoudness;                                       // 0x00AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NRTOnsetDetected;                                  // 0x00B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TimeLastOnsetDetected;                             // 0x00B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                 NRTConstantQ;                                      // 0x00B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   ParameterName;                                     // 0x00C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialParameterCollection*           MaterialPC;                                        // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ScalarValue;                                       // 0x00D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MappedTimeVar;                                     // 0x00DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateOnset(float InputPin);
	void UpdateLoudness(const float InSeconds);
	void UpdateConstantQ(const float InSeconds);
	void Update(float Time);
	void PostUpdate();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Events_AudioAnalysis_Stem_Component_C">();
	}
	static class UEvents_AudioAnalysis_Stem_Component_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEvents_AudioAnalysis_Stem_Component_C>();
	}
};
static_assert(alignof(UEvents_AudioAnalysis_Stem_Component_C) == 0x000008, "Wrong alignment on UEvents_AudioAnalysis_Stem_Component_C");
static_assert(sizeof(UEvents_AudioAnalysis_Stem_Component_C) == 0x0000E0, "Wrong size on UEvents_AudioAnalysis_Stem_Component_C");
static_assert(offsetof(UEvents_AudioAnalysis_Stem_Component_C, NRT) == 0x0000A0, "Member 'UEvents_AudioAnalysis_Stem_Component_C::NRT' has a wrong offset!");
static_assert(offsetof(UEvents_AudioAnalysis_Stem_Component_C, Type) == 0x0000A8, "Member 'UEvents_AudioAnalysis_Stem_Component_C::Type' has a wrong offset!");
static_assert(offsetof(UEvents_AudioAnalysis_Stem_Component_C, NRTLoudness) == 0x0000AC, "Member 'UEvents_AudioAnalysis_Stem_Component_C::NRTLoudness' has a wrong offset!");
static_assert(offsetof(UEvents_AudioAnalysis_Stem_Component_C, NRTOnsetDetected) == 0x0000B0, "Member 'UEvents_AudioAnalysis_Stem_Component_C::NRTOnsetDetected' has a wrong offset!");
static_assert(offsetof(UEvents_AudioAnalysis_Stem_Component_C, TimeLastOnsetDetected) == 0x0000B4, "Member 'UEvents_AudioAnalysis_Stem_Component_C::TimeLastOnsetDetected' has a wrong offset!");
static_assert(offsetof(UEvents_AudioAnalysis_Stem_Component_C, NRTConstantQ) == 0x0000B8, "Member 'UEvents_AudioAnalysis_Stem_Component_C::NRTConstantQ' has a wrong offset!");
static_assert(offsetof(UEvents_AudioAnalysis_Stem_Component_C, ParameterName) == 0x0000C8, "Member 'UEvents_AudioAnalysis_Stem_Component_C::ParameterName' has a wrong offset!");
static_assert(offsetof(UEvents_AudioAnalysis_Stem_Component_C, MaterialPC) == 0x0000D0, "Member 'UEvents_AudioAnalysis_Stem_Component_C::MaterialPC' has a wrong offset!");
static_assert(offsetof(UEvents_AudioAnalysis_Stem_Component_C, ScalarValue) == 0x0000D8, "Member 'UEvents_AudioAnalysis_Stem_Component_C::ScalarValue' has a wrong offset!");
static_assert(offsetof(UEvents_AudioAnalysis_Stem_Component_C, MappedTimeVar) == 0x0000DC, "Member 'UEvents_AudioAnalysis_Stem_Component_C::MappedTimeVar' has a wrong offset!");

}

