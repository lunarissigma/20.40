﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TournamentDateEntry

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function TournamentDateEntry.TournamentDateEntry_C.EventColor
// 0x01D0 (0x01D0 - 0x0000)
struct TournamentDateEntry_C_EventColor final
{
public:
	struct FFortTournamentDisplayInfo             showdownData;                                      // 0x0000(0x01D0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(TournamentDateEntry_C_EventColor) == 0x000008, "Wrong alignment on TournamentDateEntry_C_EventColor");
static_assert(sizeof(TournamentDateEntry_C_EventColor) == 0x0001D0, "Wrong size on TournamentDateEntry_C_EventColor");
static_assert(offsetof(TournamentDateEntry_C_EventColor, showdownData) == 0x000000, "Member 'TournamentDateEntry_C_EventColor::showdownData' has a wrong offset!");

// Function TournamentDateEntry.TournamentDateEntry_C.ExecuteUbergraph_TournamentDateEntry
// 0x0548 (0x0548 - 0x0000)
struct TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortShowdownEventState                       CallFunc_GetEventTimeState_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26[0x2];                                       // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0028(0x0018)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortTournamentDisplayInfo             K2Node_CustomEvent_showdownData;                   // 0x0048(0x01D0)(ConstParm)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0218(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x022C(0x0014)()
	struct FSlateColor                            K2Node_Select_Default_1;                           // 0x0240(0x0014)()
	uint8                                         Pad_254[0x4];                                      // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetEventBeginTime_ReturnValue;            // 0x0268(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetEventDateAsText_ReturnValue;           // 0x0270(0x0018)()
	struct FDateTime                              CallFunc_GetEventEndTime_ReturnValue;              // 0x0288(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_2;                           // 0x0290(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetEventDateAsText_ReturnValue_1;         // 0x02A0(0x0018)()
	bool                                          CallFunc_EqualEqual_TextText_ReturnValue;          // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B9[0x7];                                      // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetEventBeginTime_ReturnValue_1;          // 0x02C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetEventTimeAsText_ReturnValue;           // 0x02C8(0x0018)()
	struct FDateTime                              CallFunc_GetEventEndTime_ReturnValue_1;            // 0x02E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x02E8(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_GetEventTimeAsText_ReturnValue_1;         // 0x0338(0x0018)()
	struct FDateTime                              CallFunc_GetEventBeginTime_ReturnValue_2;          // 0x0350(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0358(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_GetEventDateAsText_ReturnValue_2;         // 0x03A8(0x0018)()
	struct FDateTime                              CallFunc_GetEventEndTime_ReturnValue_2;            // 0x03C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x03C8(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_GetEventDateAsText_ReturnValue_3;         // 0x0418(0x0018)()
	bool                                          Temp_bool_Variable_4;                              // 0x0430(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_431[0x7];                                      // 0x0431(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0438(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0488(0x0010)(ReferenceParm)
	int32                                         K2Node_Select_Default_3;                           // 0x0498(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49C[0x4];                                      // 0x049C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x04A0(0x0018)()
	class FText                                   K2Node_Select_Default_4;                           // 0x04B8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x04D0(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0520(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0530(0x0018)()
};
static_assert(alignof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry) == 0x000008, "Wrong alignment on TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry");
static_assert(sizeof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry) == 0x000548, "Wrong size on TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, EntryPoint) == 0x000000, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventTimeState_ReturnValue) == 0x000004, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventTimeState_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, Temp_int_Variable) == 0x000008, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00000C, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, Temp_bool_Variable) == 0x00000D, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, Temp_byte_Variable) == 0x00000E, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, Temp_byte_Variable_1) == 0x00000F, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, Temp_bool_Variable_1) == 0x000010, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_Select_Default) == 0x000011, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, Temp_struct_Variable) == 0x000014, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, Temp_bool_Variable_2) == 0x000024, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, Temp_bool_Variable_3) == 0x000025, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, Temp_text_Variable) == 0x000028, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_Event_IsDesignTime) == 0x000040, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_CustomEvent_showdownData) == 0x000048, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_CustomEvent_showdownData' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_MakeStruct_SlateColor) == 0x000218, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_MakeStruct_SlateColor_1) == 0x00022C, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_Select_Default_1) == 0x000240, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000258, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_RandomFloatInRange_ReturnValue) == 0x000260, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, Temp_int_Variable_1) == 0x000264, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventBeginTime_ReturnValue) == 0x000268, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventBeginTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventDateAsText_ReturnValue) == 0x000270, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventDateAsText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventEndTime_ReturnValue) == 0x000288, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_Select_Default_2) == 0x000290, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventDateAsText_ReturnValue_1) == 0x0002A0, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventDateAsText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_EqualEqual_TextText_ReturnValue) == 0x0002B8, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_EqualEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventBeginTime_ReturnValue_1) == 0x0002C0, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventBeginTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventTimeAsText_ReturnValue) == 0x0002C8, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventTimeAsText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventEndTime_ReturnValue_1) == 0x0002E0, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventEndTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_MakeStruct_FormatArgumentData) == 0x0002E8, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventTimeAsText_ReturnValue_1) == 0x000338, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventTimeAsText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventBeginTime_ReturnValue_2) == 0x000350, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventBeginTime_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_MakeStruct_FormatArgumentData_1) == 0x000358, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventDateAsText_ReturnValue_2) == 0x0003A8, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventDateAsText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventEndTime_ReturnValue_2) == 0x0003C0, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventEndTime_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_MakeStruct_FormatArgumentData_2) == 0x0003C8, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventDateAsText_ReturnValue_3) == 0x000418, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventDateAsText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, Temp_bool_Variable_4) == 0x000430, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_MakeStruct_FormatArgumentData_3) == 0x000438, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_MakeArray_Array) == 0x000488, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_Select_Default_3) == 0x000498, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_Format_ReturnValue) == 0x0004A0, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_Select_Default_4) == 0x0004B8, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_MakeStruct_FormatArgumentData_4) == 0x0004D0, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_MakeArray_Array_1) == 0x000520, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_Format_ReturnValue_1) == 0x000530, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_Format_ReturnValue_1' has a wrong offset!");

// Function TournamentDateEntry.TournamentDateEntry_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct TournamentDateEntry_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TournamentDateEntry_C_PreConstruct) == 0x000001, "Wrong alignment on TournamentDateEntry_C_PreConstruct");
static_assert(sizeof(TournamentDateEntry_C_PreConstruct) == 0x000001, "Wrong size on TournamentDateEntry_C_PreConstruct");
static_assert(offsetof(TournamentDateEntry_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'TournamentDateEntry_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

