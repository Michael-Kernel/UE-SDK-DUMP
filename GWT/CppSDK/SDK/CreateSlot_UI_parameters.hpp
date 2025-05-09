#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CreateSlot_UI

#include "Basic.hpp"


namespace SDK::Params
{

// Function CreateSlot_UI.CreateSlot_UI_C.PlayOpenAnim
// 0x0004 (0x0004 - 0x0000)
struct CreateSlot_UI_C_PlayOpenAnim final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CreateSlot_UI_C_PlayOpenAnim) == 0x000004, "Wrong alignment on CreateSlot_UI_C_PlayOpenAnim");
static_assert(sizeof(CreateSlot_UI_C_PlayOpenAnim) == 0x000004, "Wrong size on CreateSlot_UI_C_PlayOpenAnim");
static_assert(offsetof(CreateSlot_UI_C_PlayOpenAnim, Index_0) == 0x000000, "Member 'CreateSlot_UI_C_PlayOpenAnim::Index_0' has a wrong offset!");

// Function CreateSlot_UI.CreateSlot_UI_C.ExecuteUbergraph_CreateSlot_UI
// 0x0020 (0x0020 - 0x0000)
struct CreateSlot_UI_C_ExecuteUbergraph_CreateSlot_UI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index;                          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CreateSlot_UI_C_ExecuteUbergraph_CreateSlot_UI) == 0x000008, "Wrong alignment on CreateSlot_UI_C_ExecuteUbergraph_CreateSlot_UI");
static_assert(sizeof(CreateSlot_UI_C_ExecuteUbergraph_CreateSlot_UI) == 0x000020, "Wrong size on CreateSlot_UI_C_ExecuteUbergraph_CreateSlot_UI");
static_assert(offsetof(CreateSlot_UI_C_ExecuteUbergraph_CreateSlot_UI, EntryPoint) == 0x000000, "Member 'CreateSlot_UI_C_ExecuteUbergraph_CreateSlot_UI::EntryPoint' has a wrong offset!");
static_assert(offsetof(CreateSlot_UI_C_ExecuteUbergraph_CreateSlot_UI, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000004, "Member 'CreateSlot_UI_C_ExecuteUbergraph_CreateSlot_UI::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreateSlot_UI_C_ExecuteUbergraph_CreateSlot_UI, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000008, "Member 'CreateSlot_UI_C_ExecuteUbergraph_CreateSlot_UI::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreateSlot_UI_C_ExecuteUbergraph_CreateSlot_UI, K2Node_CustomEvent_Index) == 0x00000C, "Member 'CreateSlot_UI_C_ExecuteUbergraph_CreateSlot_UI::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(CreateSlot_UI_C_ExecuteUbergraph_CreateSlot_UI, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000010, "Member 'CreateSlot_UI_C_ExecuteUbergraph_CreateSlot_UI::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreateSlot_UI_C_ExecuteUbergraph_CreateSlot_UI, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'CreateSlot_UI_C_ExecuteUbergraph_CreateSlot_UI::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

