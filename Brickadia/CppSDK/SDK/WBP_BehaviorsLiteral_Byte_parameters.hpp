﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BehaviorsLiteral_Byte

#include "Basic.hpp"

#include "Brickadia_structs.hpp"


namespace SDK::Params
{

// Function WBP_BehaviorsLiteral_Byte.WBP_BehaviorsLiteral_Byte_C.ExecuteUbergraph_WBP_BehaviorsLiteral_Byte
// 0x0040 (0x0040 - 0x0000)
struct WBP_BehaviorsLiteral_Byte_C_ExecuteUbergraph_WBP_BehaviorsLiteral_Byte final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBHBoxed                               K2Node_Event_Value;                                // 0x0008(0x0030)(ConstParm)
	uint8                                         CallFunc_BHUnboxValue_OutValue;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BehaviorsLiteral_Byte_C_ExecuteUbergraph_WBP_BehaviorsLiteral_Byte) == 0x000008, "Wrong alignment on WBP_BehaviorsLiteral_Byte_C_ExecuteUbergraph_WBP_BehaviorsLiteral_Byte");
static_assert(sizeof(WBP_BehaviorsLiteral_Byte_C_ExecuteUbergraph_WBP_BehaviorsLiteral_Byte) == 0x000040, "Wrong size on WBP_BehaviorsLiteral_Byte_C_ExecuteUbergraph_WBP_BehaviorsLiteral_Byte");
static_assert(offsetof(WBP_BehaviorsLiteral_Byte_C_ExecuteUbergraph_WBP_BehaviorsLiteral_Byte, EntryPoint) == 0x000000, "Member 'WBP_BehaviorsLiteral_Byte_C_ExecuteUbergraph_WBP_BehaviorsLiteral_Byte::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_BehaviorsLiteral_Byte_C_ExecuteUbergraph_WBP_BehaviorsLiteral_Byte, K2Node_Event_Value) == 0x000008, "Member 'WBP_BehaviorsLiteral_Byte_C_ExecuteUbergraph_WBP_BehaviorsLiteral_Byte::K2Node_Event_Value' has a wrong offset!");
static_assert(offsetof(WBP_BehaviorsLiteral_Byte_C_ExecuteUbergraph_WBP_BehaviorsLiteral_Byte, CallFunc_BHUnboxValue_OutValue) == 0x000038, "Member 'WBP_BehaviorsLiteral_Byte_C_ExecuteUbergraph_WBP_BehaviorsLiteral_Byte::CallFunc_BHUnboxValue_OutValue' has a wrong offset!");
static_assert(offsetof(WBP_BehaviorsLiteral_Byte_C_ExecuteUbergraph_WBP_BehaviorsLiteral_Byte, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00003C, "Member 'WBP_BehaviorsLiteral_Byte_C_ExecuteUbergraph_WBP_BehaviorsLiteral_Byte::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");

// Function WBP_BehaviorsLiteral_Byte.WBP_BehaviorsLiteral_Byte_C.Setup
// 0x0030 (0x0030 - 0x0000)
struct WBP_BehaviorsLiteral_Byte_C_Setup final
{
public:
	struct FBHBoxed                               Value;                                             // 0x0000(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_BehaviorsLiteral_Byte_C_Setup) == 0x000008, "Wrong alignment on WBP_BehaviorsLiteral_Byte_C_Setup");
static_assert(sizeof(WBP_BehaviorsLiteral_Byte_C_Setup) == 0x000030, "Wrong size on WBP_BehaviorsLiteral_Byte_C_Setup");
static_assert(offsetof(WBP_BehaviorsLiteral_Byte_C_Setup, Value) == 0x000000, "Member 'WBP_BehaviorsLiteral_Byte_C_Setup::Value' has a wrong offset!");

}

