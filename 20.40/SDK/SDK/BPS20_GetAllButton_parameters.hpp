﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPS20_GetAllButton

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BPS20_GetAllButton.BPS20_GetAllButton_C.ExecuteUbergraph_BPS20_GetAllButton
// 0x0038 (0x0038 - 0x0000)
struct BPS20_GetAllButton_C_ExecuteUbergraph_BPS20_GetAllButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue_1;                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;            // 0x0028(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPS20_GetAllButton_C_ExecuteUbergraph_BPS20_GetAllButton) == 0x000008, "Wrong alignment on BPS20_GetAllButton_C_ExecuteUbergraph_BPS20_GetAllButton");
static_assert(sizeof(BPS20_GetAllButton_C_ExecuteUbergraph_BPS20_GetAllButton) == 0x000038, "Wrong size on BPS20_GetAllButton_C_ExecuteUbergraph_BPS20_GetAllButton");
static_assert(offsetof(BPS20_GetAllButton_C_ExecuteUbergraph_BPS20_GetAllButton, EntryPoint) == 0x000000, "Member 'BPS20_GetAllButton_C_ExecuteUbergraph_BPS20_GetAllButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_ExecuteUbergraph_BPS20_GetAllButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'BPS20_GetAllButton_C_ExecuteUbergraph_BPS20_GetAllButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_ExecuteUbergraph_BPS20_GetAllButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'BPS20_GetAllButton_C_ExecuteUbergraph_BPS20_GetAllButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_ExecuteUbergraph_BPS20_GetAllButton, CallFunc_GetContext_ReturnValue) == 0x000018, "Member 'BPS20_GetAllButton_C_ExecuteUbergraph_BPS20_GetAllButton::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_ExecuteUbergraph_BPS20_GetAllButton, CallFunc_GetContext_ReturnValue_1) == 0x000020, "Member 'BPS20_GetAllButton_C_ExecuteUbergraph_BPS20_GetAllButton::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_ExecuteUbergraph_BPS20_GetAllButton, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'BPS20_GetAllButton_C_ExecuteUbergraph_BPS20_GetAllButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function BPS20_GetAllButton.BPS20_GetAllButton_C.Set Text Data
// 0x0270 (0x0270 - 0x0000)
struct BPS20_GetAllButton_C_Set_Text_Data final
{
public:
	bool                                          Page_Complete_0;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Starting_Page;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Ending_Page;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Cost;                                              // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0020(0x0050)(HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00F0(0x0018)()
	bool                                          Temp_bool_Variable_2;                              // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0110(0x0050)(HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0162(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_163[0x1];                                      // 0x0163(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_169[0x3];                                      // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_1;                             // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_171[0x7];                                      // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0178(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_1;            // 0x0190(0x0018)()
	float                                         K2Node_Select_Default_2;                           // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1AC[0x4];                                      // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_3;                           // 0x01B0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x01C8(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_2;            // 0x0218(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0230(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0240(0x0018)()
	class FText                                   K2Node_Select_Default_4;                           // 0x0258(0x0018)(ConstParm)
};
static_assert(alignof(BPS20_GetAllButton_C_Set_Text_Data) == 0x000008, "Wrong alignment on BPS20_GetAllButton_C_Set_Text_Data");
static_assert(sizeof(BPS20_GetAllButton_C_Set_Text_Data) == 0x000270, "Wrong size on BPS20_GetAllButton_C_Set_Text_Data");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, Page_Complete_0) == 0x000000, "Member 'BPS20_GetAllButton_C_Set_Text_Data::Page_Complete_0' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, Starting_Page) == 0x000004, "Member 'BPS20_GetAllButton_C_Set_Text_Data::Starting_Page' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, Ending_Page) == 0x000008, "Member 'BPS20_GetAllButton_C_Set_Text_Data::Ending_Page' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, Cost) == 0x00000C, "Member 'BPS20_GetAllButton_C_Set_Text_Data::Cost' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000010, "Member 'BPS20_GetAllButton_C_Set_Text_Data::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'BPS20_GetAllButton_C_Set_Text_Data::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, K2Node_MakeStruct_FormatArgumentData) == 0x000020, "Member 'BPS20_GetAllButton_C_Set_Text_Data::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, CallFunc_Conv_IntToString_ReturnValue) == 0x000070, "Member 'BPS20_GetAllButton_C_Set_Text_Data::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, CallFunc_Add_IntInt_ReturnValue_1) == 0x000080, "Member 'BPS20_GetAllButton_C_Set_Text_Data::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000088, "Member 'BPS20_GetAllButton_C_Set_Text_Data::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000098, "Member 'BPS20_GetAllButton_C_Set_Text_Data::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, CallFunc_Conv_IntToString_ReturnValue_2) == 0x0000A0, "Member 'BPS20_GetAllButton_C_Set_Text_Data::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, Temp_bool_Variable) == 0x0000B0, "Member 'BPS20_GetAllButton_C_Set_Text_Data::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, CallFunc_Concat_StrStr_ReturnValue) == 0x0000B8, "Member 'BPS20_GetAllButton_C_Set_Text_Data::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000C8, "Member 'BPS20_GetAllButton_C_Set_Text_Data::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, Temp_bool_Variable_1) == 0x0000D8, "Member 'BPS20_GetAllButton_C_Set_Text_Data::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, K2Node_Select_Default) == 0x0000E0, "Member 'BPS20_GetAllButton_C_Set_Text_Data::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, CallFunc_Conv_StringToText_ReturnValue) == 0x0000F0, "Member 'BPS20_GetAllButton_C_Set_Text_Data::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, Temp_bool_Variable_2) == 0x000108, "Member 'BPS20_GetAllButton_C_Set_Text_Data::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, K2Node_MakeStruct_FormatArgumentData_1) == 0x000110, "Member 'BPS20_GetAllButton_C_Set_Text_Data::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, Temp_byte_Variable) == 0x000160, "Member 'BPS20_GetAllButton_C_Set_Text_Data::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, Temp_byte_Variable_1) == 0x000161, "Member 'BPS20_GetAllButton_C_Set_Text_Data::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, Temp_bool_Variable_3) == 0x000162, "Member 'BPS20_GetAllButton_C_Set_Text_Data::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, Temp_float_Variable) == 0x000164, "Member 'BPS20_GetAllButton_C_Set_Text_Data::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, K2Node_Select_Default_1) == 0x000168, "Member 'BPS20_GetAllButton_C_Set_Text_Data::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, Temp_float_Variable_1) == 0x00016C, "Member 'BPS20_GetAllButton_C_Set_Text_Data::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, Temp_bool_Variable_4) == 0x000170, "Member 'BPS20_GetAllButton_C_Set_Text_Data::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, CallFunc_MakeLiteralText_ReturnValue) == 0x000178, "Member 'BPS20_GetAllButton_C_Set_Text_Data::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, CallFunc_MakeLiteralText_ReturnValue_1) == 0x000190, "Member 'BPS20_GetAllButton_C_Set_Text_Data::CallFunc_MakeLiteralText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, K2Node_Select_Default_2) == 0x0001A8, "Member 'BPS20_GetAllButton_C_Set_Text_Data::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, K2Node_Select_Default_3) == 0x0001B0, "Member 'BPS20_GetAllButton_C_Set_Text_Data::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, K2Node_MakeStruct_FormatArgumentData_2) == 0x0001C8, "Member 'BPS20_GetAllButton_C_Set_Text_Data::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, CallFunc_MakeLiteralText_ReturnValue_2) == 0x000218, "Member 'BPS20_GetAllButton_C_Set_Text_Data::CallFunc_MakeLiteralText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, K2Node_MakeArray_Array) == 0x000230, "Member 'BPS20_GetAllButton_C_Set_Text_Data::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, CallFunc_Format_ReturnValue) == 0x000240, "Member 'BPS20_GetAllButton_C_Set_Text_Data::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_Set_Text_Data, K2Node_Select_Default_4) == 0x000258, "Member 'BPS20_GetAllButton_C_Set_Text_Data::K2Node_Select_Default_4' has a wrong offset!");

// Function BPS20_GetAllButton.BPS20_GetAllButton_C.UpdateTextAndStyle
// 0x0008 (0x0008 - 0x0000)
struct BPS20_GetAllButton_C_UpdateTextAndStyle final
{
public:
	ECommonInputType                              Input_Type;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsErebus_ReturnValue;                     // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPS20_GetAllButton_C_UpdateTextAndStyle) == 0x000001, "Wrong alignment on BPS20_GetAllButton_C_UpdateTextAndStyle");
static_assert(sizeof(BPS20_GetAllButton_C_UpdateTextAndStyle) == 0x000008, "Wrong size on BPS20_GetAllButton_C_UpdateTextAndStyle");
static_assert(offsetof(BPS20_GetAllButton_C_UpdateTextAndStyle, Input_Type) == 0x000000, "Member 'BPS20_GetAllButton_C_UpdateTextAndStyle::Input_Type' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_UpdateTextAndStyle, Temp_bool_Variable) == 0x000001, "Member 'BPS20_GetAllButton_C_UpdateTextAndStyle::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_UpdateTextAndStyle, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'BPS20_GetAllButton_C_UpdateTextAndStyle::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_UpdateTextAndStyle, Temp_byte_Variable) == 0x000003, "Member 'BPS20_GetAllButton_C_UpdateTextAndStyle::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_UpdateTextAndStyle, Temp_byte_Variable_1) == 0x000004, "Member 'BPS20_GetAllButton_C_UpdateTextAndStyle::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_UpdateTextAndStyle, CallFunc_IsErebus_ReturnValue) == 0x000005, "Member 'BPS20_GetAllButton_C_UpdateTextAndStyle::CallFunc_IsErebus_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_UpdateTextAndStyle, CallFunc_BooleanOR_ReturnValue) == 0x000006, "Member 'BPS20_GetAllButton_C_UpdateTextAndStyle::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS20_GetAllButton_C_UpdateTextAndStyle, K2Node_Select_Default) == 0x000007, "Member 'BPS20_GetAllButton_C_UpdateTextAndStyle::K2Node_Select_Default' has a wrong offset!");

}

