﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Property_Byte

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Brickadia_structs.hpp"


namespace SDK::Params
{

// Function WBP_Property_Byte.WBP_Property_Byte_C.BndEvt__ValueInputBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_Property_Byte_C_BndEvt__ValueInputBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_Property_Byte_C_BndEvt__ValueInputBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Property_Byte_C_BndEvt__ValueInputBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(sizeof(WBP_Property_Byte_C_BndEvt__ValueInputBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000010, "Wrong size on WBP_Property_Byte_C_BndEvt__ValueInputBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(offsetof(WBP_Property_Byte_C_BndEvt__ValueInputBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature, Text) == 0x000000, "Member 'WBP_Property_Byte_C_BndEvt__ValueInputBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature::Text' has a wrong offset!");

// Function WBP_Property_Byte.WBP_Property_Byte_C.BndEvt__ValueInputBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct WBP_Property_Byte_C_BndEvt__ValueInputBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Property_Byte_C_BndEvt__ValueInputBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Property_Byte_C_BndEvt__ValueInputBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(WBP_Property_Byte_C_BndEvt__ValueInputBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000018, "Wrong size on WBP_Property_Byte_C_BndEvt__ValueInputBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(WBP_Property_Byte_C_BndEvt__ValueInputBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'WBP_Property_Byte_C_BndEvt__ValueInputBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(WBP_Property_Byte_C_BndEvt__ValueInputBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000010, "Member 'WBP_Property_Byte_C_BndEvt__ValueInputBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function WBP_Property_Byte.WBP_Property_Byte_C.ExecuteUbergraph_WBP_Property_Byte
// 0x00C0 (0x00C0 - 0x0000)
struct WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0008(0x0010)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInspectorPropertyValue                K2Node_Event_ValueIn;                              // 0x0020(0x0018)(ConstParm, ZeroConstructor)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_UnboxPropertyValue_Byte_bIsValid;         // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_UnboxPropertyValue_Byte_Unboxed;          // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x2];                                       // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_ByteToText_ReturnValue;              // 0x0050(0x0010)()
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInspectorPropertyValue                CallFunc_BoxPropertyValue_Byte_ReturnValue;        // 0x0068(0x0018)(ZeroConstructor)
	bool                                          K2Node_Event_Enabled;                              // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text_1;                 // 0x0088(0x0010)(ConstParm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue_1;           // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AD[0x3];                                       // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_ByteToText_ReturnValue_1;            // 0x00B0(0x0010)()
};
static_assert(alignof(WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte) == 0x000008, "Wrong alignment on WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte");
static_assert(sizeof(WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte) == 0x0000C0, "Wrong size on WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte");
static_assert(offsetof(WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte, EntryPoint) == 0x000000, "Member 'WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte, K2Node_ComponentBoundEvent_Text) == 0x000008, "Member 'WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte, K2Node_ComponentBoundEvent_CommitMethod) == 0x000018, "Member 'WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte, K2Node_Event_ValueIn) == 0x000020, "Member 'WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte::K2Node_Event_ValueIn' has a wrong offset!");
static_assert(offsetof(WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte, CallFunc_Conv_TextToString_ReturnValue) == 0x000038, "Member 'WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte, CallFunc_UnboxPropertyValue_Byte_bIsValid) == 0x000048, "Member 'WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte::CallFunc_UnboxPropertyValue_Byte_bIsValid' has a wrong offset!");
static_assert(offsetof(WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte, CallFunc_UnboxPropertyValue_Byte_Unboxed) == 0x000049, "Member 'WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte::CallFunc_UnboxPropertyValue_Byte_Unboxed' has a wrong offset!");
static_assert(offsetof(WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte, CallFunc_Conv_StringToInt_ReturnValue) == 0x00004C, "Member 'WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte, CallFunc_Conv_ByteToText_ReturnValue) == 0x000050, "Member 'WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte::CallFunc_Conv_ByteToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte, CallFunc_Conv_IntToByte_ReturnValue) == 0x000060, "Member 'WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte, CallFunc_BoxPropertyValue_Byte_ReturnValue) == 0x000068, "Member 'WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte::CallFunc_BoxPropertyValue_Byte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte, K2Node_Event_Enabled) == 0x000080, "Member 'WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte::K2Node_Event_Enabled' has a wrong offset!");
static_assert(offsetof(WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte, K2Node_ComponentBoundEvent_Text_1) == 0x000088, "Member 'WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte::K2Node_ComponentBoundEvent_Text_1' has a wrong offset!");
static_assert(offsetof(WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000098, "Member 'WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte, CallFunc_Conv_StringToInt_ReturnValue_1) == 0x0000A8, "Member 'WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte::CallFunc_Conv_StringToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x0000AC, "Member 'WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte, CallFunc_Conv_ByteToText_ReturnValue_1) == 0x0000B0, "Member 'WBP_Property_Byte_C_ExecuteUbergraph_WBP_Property_Byte::CallFunc_Conv_ByteToText_ReturnValue_1' has a wrong offset!");

// Function WBP_Property_Byte.WBP_Property_Byte_C.OnAvailabilityChange
// 0x0001 (0x0001 - 0x0000)
struct WBP_Property_Byte_C_OnAvailabilityChange final
{
public:
	bool                                          Enabled;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Property_Byte_C_OnAvailabilityChange) == 0x000001, "Wrong alignment on WBP_Property_Byte_C_OnAvailabilityChange");
static_assert(sizeof(WBP_Property_Byte_C_OnAvailabilityChange) == 0x000001, "Wrong size on WBP_Property_Byte_C_OnAvailabilityChange");
static_assert(offsetof(WBP_Property_Byte_C_OnAvailabilityChange, Enabled) == 0x000000, "Member 'WBP_Property_Byte_C_OnAvailabilityChange::Enabled' has a wrong offset!");

// Function WBP_Property_Byte.WBP_Property_Byte_C.OnValueChangedExternally
// 0x0018 (0x0018 - 0x0000)
struct WBP_Property_Byte_C_OnValueChangedExternally final
{
public:
	struct FInspectorPropertyValue                ValueIn;                                           // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};
static_assert(alignof(WBP_Property_Byte_C_OnValueChangedExternally) == 0x000008, "Wrong alignment on WBP_Property_Byte_C_OnValueChangedExternally");
static_assert(sizeof(WBP_Property_Byte_C_OnValueChangedExternally) == 0x000018, "Wrong size on WBP_Property_Byte_C_OnValueChangedExternally");
static_assert(offsetof(WBP_Property_Byte_C_OnValueChangedExternally, ValueIn) == 0x000000, "Member 'WBP_Property_Byte_C_OnValueChangedExternally::ValueIn' has a wrong offset!");

}

