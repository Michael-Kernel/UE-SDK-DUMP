#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SimulateKeypress

#include "Basic.hpp"


namespace SDK::Params
{

// Function SimulateKeypress.SimulateKeypress_C.ExecuteUbergraph_SimulateKeypress
// 0x8080800 (0x8080800 - 0x0000)
struct alignas(0x8080800) SimulateKeypress_C_ExecuteUbergraph_SimulateKeypress final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OwnerActor;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ATresPlayerControllerBase*>      CallFunc_GetAllActorsOfClass_OutActors;            // 0x0018(0x0010)(ZeroConstructor, ReferenceParm)
	class ATresPlayerControllerBase*              CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SimulateKeypress_C_ExecuteUbergraph_SimulateKeypress) == 0x8080800, "Wrong alignment on SimulateKeypress_C_ExecuteUbergraph_SimulateKeypress");
static_assert(sizeof(SimulateKeypress_C_ExecuteUbergraph_SimulateKeypress) == 0x8080800, "Wrong size on SimulateKeypress_C_ExecuteUbergraph_SimulateKeypress");
static_assert(offsetof(SimulateKeypress_C_ExecuteUbergraph_SimulateKeypress, EntryPoint) == 0x000000, "Member 'SimulateKeypress_C_ExecuteUbergraph_SimulateKeypress::EntryPoint' has a wrong offset!");
static_assert(offsetof(SimulateKeypress_C_ExecuteUbergraph_SimulateKeypress, Temp_int_Array_Index_Variable) == 0x000004, "Member 'SimulateKeypress_C_ExecuteUbergraph_SimulateKeypress::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SimulateKeypress_C_ExecuteUbergraph_SimulateKeypress, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'SimulateKeypress_C_ExecuteUbergraph_SimulateKeypress::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SimulateKeypress_C_ExecuteUbergraph_SimulateKeypress, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'SimulateKeypress_C_ExecuteUbergraph_SimulateKeypress::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SimulateKeypress_C_ExecuteUbergraph_SimulateKeypress, K2Node_Event_OwnerActor) == 0x000010, "Member 'SimulateKeypress_C_ExecuteUbergraph_SimulateKeypress::K2Node_Event_OwnerActor' has a wrong offset!");
static_assert(offsetof(SimulateKeypress_C_ExecuteUbergraph_SimulateKeypress, CallFunc_GetAllActorsOfClass_OutActors) == 0x000018, "Member 'SimulateKeypress_C_ExecuteUbergraph_SimulateKeypress::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(SimulateKeypress_C_ExecuteUbergraph_SimulateKeypress, CallFunc_Array_Get_Item) == 0x000028, "Member 'SimulateKeypress_C_ExecuteUbergraph_SimulateKeypress::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SimulateKeypress_C_ExecuteUbergraph_SimulateKeypress, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'SimulateKeypress_C_ExecuteUbergraph_SimulateKeypress::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SimulateKeypress_C_ExecuteUbergraph_SimulateKeypress, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'SimulateKeypress_C_ExecuteUbergraph_SimulateKeypress::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function SimulateKeypress.SimulateKeypress_C.ReceiveExecute
// 0x0008 (0x0008 - 0x0000)
struct SimulateKeypress_C_ReceiveExecute final
{
public:
	class AActor*                                 OwnerActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SimulateKeypress_C_ReceiveExecute) == 0x000008, "Wrong alignment on SimulateKeypress_C_ReceiveExecute");
static_assert(sizeof(SimulateKeypress_C_ReceiveExecute) == 0x000008, "Wrong size on SimulateKeypress_C_ReceiveExecute");
static_assert(offsetof(SimulateKeypress_C_ReceiveExecute, OwnerActor) == 0x000000, "Member 'SimulateKeypress_C_ReceiveExecute::OwnerActor' has a wrong offset!");

}

