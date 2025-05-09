﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ActionBinding_Single

#include "Basic.hpp"

#include "Brickadia_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_ActionBinding_Single.WBP_ActionBinding_Single_C.HandleKeySelected
// 0x0068 (0x0068 - 0x0000)
struct WBP_ActionBinding_Single_C_HandleKeySelected final
{
public:
	struct FBRInputKey_WithModifiers              KeyWithModifiers;                                  // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FKey                                   LV_Key;                                            // 0x0020(0x0018)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          CallFunc_Key_IsMouseButton_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBRInputKey_WithModifiers              K2Node_MakeStruct_None;                            // 0x0040(0x0020)()
	bool                                          CallFunc_Key_IsKeyboardKey_ReturnValue;            // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Key_IsGamepadKey_ReturnValue;             // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ActionBinding_Single_C_HandleKeySelected) == 0x000008, "Wrong alignment on WBP_ActionBinding_Single_C_HandleKeySelected");
static_assert(sizeof(WBP_ActionBinding_Single_C_HandleKeySelected) == 0x000068, "Wrong size on WBP_ActionBinding_Single_C_HandleKeySelected");
static_assert(offsetof(WBP_ActionBinding_Single_C_HandleKeySelected, KeyWithModifiers) == 0x000000, "Member 'WBP_ActionBinding_Single_C_HandleKeySelected::KeyWithModifiers' has a wrong offset!");
static_assert(offsetof(WBP_ActionBinding_Single_C_HandleKeySelected, LV_Key) == 0x000020, "Member 'WBP_ActionBinding_Single_C_HandleKeySelected::LV_Key' has a wrong offset!");
static_assert(offsetof(WBP_ActionBinding_Single_C_HandleKeySelected, CallFunc_Key_IsMouseButton_ReturnValue) == 0x000038, "Member 'WBP_ActionBinding_Single_C_HandleKeySelected::CallFunc_Key_IsMouseButton_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ActionBinding_Single_C_HandleKeySelected, K2Node_MakeStruct_None) == 0x000040, "Member 'WBP_ActionBinding_Single_C_HandleKeySelected::K2Node_MakeStruct_None' has a wrong offset!");
static_assert(offsetof(WBP_ActionBinding_Single_C_HandleKeySelected, CallFunc_Key_IsKeyboardKey_ReturnValue) == 0x000060, "Member 'WBP_ActionBinding_Single_C_HandleKeySelected::CallFunc_Key_IsKeyboardKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ActionBinding_Single_C_HandleKeySelected, CallFunc_BooleanOR_ReturnValue) == 0x000061, "Member 'WBP_ActionBinding_Single_C_HandleKeySelected::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ActionBinding_Single_C_HandleKeySelected, CallFunc_Key_IsGamepadKey_ReturnValue) == 0x000062, "Member 'WBP_ActionBinding_Single_C_HandleKeySelected::CallFunc_Key_IsGamepadKey_ReturnValue' has a wrong offset!");

// Function WBP_ActionBinding_Single.WBP_ActionBinding_Single_C.SetValue
// 0x0020 (0x0020 - 0x0000)
struct WBP_ActionBinding_Single_C_SetValue final
{
public:
	struct FBRInputKey_WithModifiers              KeyWithModifiers;                                  // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_ActionBinding_Single_C_SetValue) == 0x000008, "Wrong alignment on WBP_ActionBinding_Single_C_SetValue");
static_assert(sizeof(WBP_ActionBinding_Single_C_SetValue) == 0x000020, "Wrong size on WBP_ActionBinding_Single_C_SetValue");
static_assert(offsetof(WBP_ActionBinding_Single_C_SetValue, KeyWithModifiers) == 0x000000, "Member 'WBP_ActionBinding_Single_C_SetValue::KeyWithModifiers' has a wrong offset!");

// Function WBP_ActionBinding_Single.WBP_ActionBinding_Single_C.ExecuteUbergraph_WBP_ActionBinding_Single
// 0x0028 (0x0028 - 0x0000)
struct WBP_ActionBinding_Single_C_ExecuteUbergraph_WBP_ActionBinding_Single final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_GenericBindingDialog_C*            CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FBRInputKey_WithModifiers& KeyWithModifiers)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInspectorPropertyDescriptor*           CallFunc_GetDescriptor_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ActionBinding_Single_C_ExecuteUbergraph_WBP_ActionBinding_Single) == 0x000008, "Wrong alignment on WBP_ActionBinding_Single_C_ExecuteUbergraph_WBP_ActionBinding_Single");
static_assert(sizeof(WBP_ActionBinding_Single_C_ExecuteUbergraph_WBP_ActionBinding_Single) == 0x000028, "Wrong size on WBP_ActionBinding_Single_C_ExecuteUbergraph_WBP_ActionBinding_Single");
static_assert(offsetof(WBP_ActionBinding_Single_C_ExecuteUbergraph_WBP_ActionBinding_Single, EntryPoint) == 0x000000, "Member 'WBP_ActionBinding_Single_C_ExecuteUbergraph_WBP_ActionBinding_Single::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ActionBinding_Single_C_ExecuteUbergraph_WBP_ActionBinding_Single, CallFunc_Create_ReturnValue) == 0x000008, "Member 'WBP_ActionBinding_Single_C_ExecuteUbergraph_WBP_ActionBinding_Single::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ActionBinding_Single_C_ExecuteUbergraph_WBP_ActionBinding_Single, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_ActionBinding_Single_C_ExecuteUbergraph_WBP_ActionBinding_Single::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_ActionBinding_Single_C_ExecuteUbergraph_WBP_ActionBinding_Single, CallFunc_GetDescriptor_ReturnValue) == 0x000020, "Member 'WBP_ActionBinding_Single_C_ExecuteUbergraph_WBP_ActionBinding_Single::CallFunc_GetDescriptor_ReturnValue' has a wrong offset!");

}

