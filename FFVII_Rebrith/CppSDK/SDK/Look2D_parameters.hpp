#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Look2D

#include "Basic.hpp"


namespace SDK::Params
{

// Function Look2D.Look2D_C.Execute
// 0x610068 (0x610068 - 0x0000)
struct alignas(0x610068) Look2D_C_Execute final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsBasicCondtion_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLook2D_ret;                             // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Look2D_C_Execute) == 0x610068, "Wrong alignment on Look2D_C_Execute");
static_assert(sizeof(Look2D_C_Execute) == 0x610068, "Wrong size on Look2D_C_Execute");
static_assert(offsetof(Look2D_C_Execute, ReturnValue) == 0x000000, "Member 'Look2D_C_Execute::ReturnValue' has a wrong offset!");
static_assert(offsetof(Look2D_C_Execute, CallFunc_IsBasicCondtion_ReturnValue) == 0x000001, "Member 'Look2D_C_Execute::CallFunc_IsBasicCondtion_ReturnValue' has a wrong offset!");
static_assert(offsetof(Look2D_C_Execute, CallFunc_IsLook2D_ret) == 0x000002, "Member 'Look2D_C_Execute::CallFunc_IsLook2D_ret' has a wrong offset!");

}

