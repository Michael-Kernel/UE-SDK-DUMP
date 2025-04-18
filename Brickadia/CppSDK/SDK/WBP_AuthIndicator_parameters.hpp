﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_AuthIndicator

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Brickadia_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_AuthIndicator.WBP_AuthIndicator_C.CustomEvent
// 0x0010 (0x0010 - 0x0000)
struct WBP_AuthIndicator_C_CustomEvent final
{
public:
	class FString                                 DisplayName;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_AuthIndicator_C_CustomEvent) == 0x000008, "Wrong alignment on WBP_AuthIndicator_C_CustomEvent");
static_assert(sizeof(WBP_AuthIndicator_C_CustomEvent) == 0x000010, "Wrong size on WBP_AuthIndicator_C_CustomEvent");
static_assert(offsetof(WBP_AuthIndicator_C_CustomEvent, DisplayName) == 0x000000, "Member 'WBP_AuthIndicator_C_CustomEvent::DisplayName' has a wrong offset!");

// Function WBP_AuthIndicator.WBP_AuthIndicator_C.ExecuteUbergraph_WBP_AuthIndicator
// 0x0080 (0x0080 - 0x0000)
struct WBP_AuthIndicator_C_ExecuteUbergraph_WBP_AuthIndicator final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBRAuthSubsystem*                       CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& DisplayName)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EBRAuthState                                  K2Node_CustomEvent_NewState;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBRAuthState                                  K2Node_CustomEvent_PreviousState;                  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_ErrorCode;                      // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_ErrorMessage;                   // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UBRAuthSubsystem*                       CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EBRAuthState NewState, EBRAuthState PreviousState, const class FString& ErrorCode, const class FString& ErrorMessage)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABRHUD*                                 CallFunc_Get_ReturnValue;                          // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_DisplayName;                    // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UWBP_ChangeDisplayNameDialog_C*         CallFunc_OpenDialogByClass_ReturnValue;            // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_AuthIndicator_C_ExecuteUbergraph_WBP_AuthIndicator) == 0x000008, "Wrong alignment on WBP_AuthIndicator_C_ExecuteUbergraph_WBP_AuthIndicator");
static_assert(sizeof(WBP_AuthIndicator_C_ExecuteUbergraph_WBP_AuthIndicator) == 0x000080, "Wrong size on WBP_AuthIndicator_C_ExecuteUbergraph_WBP_AuthIndicator");
static_assert(offsetof(WBP_AuthIndicator_C_ExecuteUbergraph_WBP_AuthIndicator, EntryPoint) == 0x000000, "Member 'WBP_AuthIndicator_C_ExecuteUbergraph_WBP_AuthIndicator::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_ExecuteUbergraph_WBP_AuthIndicator, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000008, "Member 'WBP_AuthIndicator_C_ExecuteUbergraph_WBP_AuthIndicator::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_ExecuteUbergraph_WBP_AuthIndicator, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_AuthIndicator_C_ExecuteUbergraph_WBP_AuthIndicator::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_ExecuteUbergraph_WBP_AuthIndicator, K2Node_CustomEvent_NewState) == 0x000020, "Member 'WBP_AuthIndicator_C_ExecuteUbergraph_WBP_AuthIndicator::K2Node_CustomEvent_NewState' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_ExecuteUbergraph_WBP_AuthIndicator, K2Node_CustomEvent_PreviousState) == 0x000021, "Member 'WBP_AuthIndicator_C_ExecuteUbergraph_WBP_AuthIndicator::K2Node_CustomEvent_PreviousState' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_ExecuteUbergraph_WBP_AuthIndicator, K2Node_CustomEvent_ErrorCode) == 0x000028, "Member 'WBP_AuthIndicator_C_ExecuteUbergraph_WBP_AuthIndicator::K2Node_CustomEvent_ErrorCode' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_ExecuteUbergraph_WBP_AuthIndicator, K2Node_CustomEvent_ErrorMessage) == 0x000038, "Member 'WBP_AuthIndicator_C_ExecuteUbergraph_WBP_AuthIndicator::K2Node_CustomEvent_ErrorMessage' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_ExecuteUbergraph_WBP_AuthIndicator, CallFunc_GetGameInstanceSubsystem_ReturnValue_1) == 0x000048, "Member 'WBP_AuthIndicator_C_ExecuteUbergraph_WBP_AuthIndicator::CallFunc_GetGameInstanceSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_ExecuteUbergraph_WBP_AuthIndicator, K2Node_CreateDelegate_OutputDelegate_1) == 0x000050, "Member 'WBP_AuthIndicator_C_ExecuteUbergraph_WBP_AuthIndicator::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_ExecuteUbergraph_WBP_AuthIndicator, CallFunc_Get_ReturnValue) == 0x000060, "Member 'WBP_AuthIndicator_C_ExecuteUbergraph_WBP_AuthIndicator::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_ExecuteUbergraph_WBP_AuthIndicator, K2Node_CustomEvent_DisplayName) == 0x000068, "Member 'WBP_AuthIndicator_C_ExecuteUbergraph_WBP_AuthIndicator::K2Node_CustomEvent_DisplayName' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_ExecuteUbergraph_WBP_AuthIndicator, CallFunc_OpenDialogByClass_ReturnValue) == 0x000078, "Member 'WBP_AuthIndicator_C_ExecuteUbergraph_WBP_AuthIndicator::CallFunc_OpenDialogByClass_ReturnValue' has a wrong offset!");

// Function WBP_AuthIndicator.WBP_AuthIndicator_C.OnAuthStateChanged_Event
// 0x0028 (0x0028 - 0x0000)
struct WBP_AuthIndicator_C_OnAuthStateChanged_Event final
{
public:
	EBRAuthState                                  NewState;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBRAuthState                                  PreviousState;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ErrorCode;                                         // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 ErrorMessage;                                      // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_AuthIndicator_C_OnAuthStateChanged_Event) == 0x000008, "Wrong alignment on WBP_AuthIndicator_C_OnAuthStateChanged_Event");
static_assert(sizeof(WBP_AuthIndicator_C_OnAuthStateChanged_Event) == 0x000028, "Wrong size on WBP_AuthIndicator_C_OnAuthStateChanged_Event");
static_assert(offsetof(WBP_AuthIndicator_C_OnAuthStateChanged_Event, NewState) == 0x000000, "Member 'WBP_AuthIndicator_C_OnAuthStateChanged_Event::NewState' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_OnAuthStateChanged_Event, PreviousState) == 0x000001, "Member 'WBP_AuthIndicator_C_OnAuthStateChanged_Event::PreviousState' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_OnAuthStateChanged_Event, ErrorCode) == 0x000008, "Member 'WBP_AuthIndicator_C_OnAuthStateChanged_Event::ErrorCode' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_OnAuthStateChanged_Event, ErrorMessage) == 0x000018, "Member 'WBP_AuthIndicator_C_OnAuthStateChanged_Event::ErrorMessage' has a wrong offset!");

// Function WBP_AuthIndicator.WBP_AuthIndicator_C.Redraw
// 0x01D8 (0x01D8 - 0x0000)
struct WBP_AuthIndicator_C_Redraw final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0010)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UBRAuthSubsystem*                       CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBRAuthSubsystem*                       CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FBRAuthUserData                        CallFunc_GetAuthUserData_ReturnValue;              // 0x0028(0x0030)(ConstParm)
	EBRAuthState                                  CallFunc_GetAuthState_ReturnValue;                 // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A[0x6];                                       // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0060(0x0010)()
	class UBRAuthSubsystem*                       CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_None;                            // 0x0078(0x0048)(HasGetValueTypeHash)
	bool                                          CallFunc_IsSteamBuild_ReturnValue;                 // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00C8(0x0010)(ReferenceParm)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00E0(0x0010)()
	EBRAuthState                                  CallFunc_GetAuthState_ReturnValue_1;               // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x00F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F6[0x2];                                       // 0x00F6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_None_1;                          // 0x00F8(0x0048)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_None_2;                          // 0x0140(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0188(0x0010)(ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x0198(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x01A8(0x0010)()
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x01B8(0x0010)()
	class UBRAuthSubsystem*                       CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0x01C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EBRAuthState                                  CallFunc_GetAuthState_ReturnValue_2;               // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x01D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x01D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x01D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x01D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_AuthIndicator_C_Redraw) == 0x000008, "Wrong alignment on WBP_AuthIndicator_C_Redraw");
static_assert(sizeof(WBP_AuthIndicator_C_Redraw) == 0x0001D8, "Wrong size on WBP_AuthIndicator_C_Redraw");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, Text) == 0x000000, "Member 'WBP_AuthIndicator_C_Redraw::Text' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, Temp_bool_Variable) == 0x000010, "Member 'WBP_AuthIndicator_C_Redraw::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, Temp_byte_Variable) == 0x000011, "Member 'WBP_AuthIndicator_C_Redraw::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, Temp_byte_Variable_1) == 0x000012, "Member 'WBP_AuthIndicator_C_Redraw::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, Temp_bool_Variable_1) == 0x000013, "Member 'WBP_AuthIndicator_C_Redraw::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, Temp_byte_Variable_2) == 0x000014, "Member 'WBP_AuthIndicator_C_Redraw::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, Temp_byte_Variable_3) == 0x000015, "Member 'WBP_AuthIndicator_C_Redraw::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000018, "Member 'WBP_AuthIndicator_C_Redraw::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, CallFunc_GetGameInstanceSubsystem_ReturnValue_1) == 0x000020, "Member 'WBP_AuthIndicator_C_Redraw::CallFunc_GetGameInstanceSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, CallFunc_GetAuthUserData_ReturnValue) == 0x000028, "Member 'WBP_AuthIndicator_C_Redraw::CallFunc_GetAuthUserData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, CallFunc_GetAuthState_ReturnValue) == 0x000058, "Member 'WBP_AuthIndicator_C_Redraw::CallFunc_GetAuthState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, K2Node_SwitchEnum_CmpSuccess) == 0x000059, "Member 'WBP_AuthIndicator_C_Redraw::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, CallFunc_Conv_StringToText_ReturnValue) == 0x000060, "Member 'WBP_AuthIndicator_C_Redraw::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, CallFunc_GetGameInstanceSubsystem_ReturnValue_2) == 0x000070, "Member 'WBP_AuthIndicator_C_Redraw::CallFunc_GetGameInstanceSubsystem_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, K2Node_MakeStruct_None) == 0x000078, "Member 'WBP_AuthIndicator_C_Redraw::K2Node_MakeStruct_None' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, CallFunc_IsSteamBuild_ReturnValue) == 0x0000C0, "Member 'WBP_AuthIndicator_C_Redraw::CallFunc_IsSteamBuild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, K2Node_MakeArray_Array) == 0x0000C8, "Member 'WBP_AuthIndicator_C_Redraw::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, CallFunc_Not_PreBool_ReturnValue) == 0x0000D8, "Member 'WBP_AuthIndicator_C_Redraw::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, CallFunc_Format_ReturnValue) == 0x0000E0, "Member 'WBP_AuthIndicator_C_Redraw::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, CallFunc_GetAuthState_ReturnValue_1) == 0x0000F0, "Member 'WBP_AuthIndicator_C_Redraw::CallFunc_GetAuthState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000F1, "Member 'WBP_AuthIndicator_C_Redraw::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000F2, "Member 'WBP_AuthIndicator_C_Redraw::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, CallFunc_BooleanAND_ReturnValue) == 0x0000F3, "Member 'WBP_AuthIndicator_C_Redraw::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, K2Node_Select_Default) == 0x0000F4, "Member 'WBP_AuthIndicator_C_Redraw::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, K2Node_Select_Default_1) == 0x0000F5, "Member 'WBP_AuthIndicator_C_Redraw::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, K2Node_MakeStruct_None_1) == 0x0000F8, "Member 'WBP_AuthIndicator_C_Redraw::K2Node_MakeStruct_None_1' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, K2Node_MakeStruct_None_2) == 0x000140, "Member 'WBP_AuthIndicator_C_Redraw::K2Node_MakeStruct_None_2' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, K2Node_MakeArray_Array_1) == 0x000188, "Member 'WBP_AuthIndicator_C_Redraw::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, K2Node_MakeArray_Array_2) == 0x000198, "Member 'WBP_AuthIndicator_C_Redraw::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, CallFunc_Format_ReturnValue_1) == 0x0001A8, "Member 'WBP_AuthIndicator_C_Redraw::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, CallFunc_Format_ReturnValue_2) == 0x0001B8, "Member 'WBP_AuthIndicator_C_Redraw::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, CallFunc_GetGameInstanceSubsystem_ReturnValue_3) == 0x0001C8, "Member 'WBP_AuthIndicator_C_Redraw::CallFunc_GetGameInstanceSubsystem_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, CallFunc_GetAuthState_ReturnValue_2) == 0x0001D0, "Member 'WBP_AuthIndicator_C_Redraw::CallFunc_GetAuthState_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0001D1, "Member 'WBP_AuthIndicator_C_Redraw::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, Temp_byte_Variable_4) == 0x0001D2, "Member 'WBP_AuthIndicator_C_Redraw::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, Temp_byte_Variable_5) == 0x0001D3, "Member 'WBP_AuthIndicator_C_Redraw::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, Temp_bool_Variable_2) == 0x0001D4, "Member 'WBP_AuthIndicator_C_Redraw::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_AuthIndicator_C_Redraw, K2Node_Select_Default_2) == 0x0001D5, "Member 'WBP_AuthIndicator_C_Redraw::K2Node_Select_Default_2' has a wrong offset!");

}

