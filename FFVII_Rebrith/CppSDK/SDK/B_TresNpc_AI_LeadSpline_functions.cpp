#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_TresNpc_AI_LeadSpline

#include "Basic.hpp"

#include "B_TresNpc_AI_LeadSpline_classes.hpp"
#include "B_TresNpc_AI_LeadSpline_parameters.hpp"


namespace SDK
{

// Function B_TresNpc_AI_LeadSpline.B_TresNpc_AI_LeadSpline_C.ExecuteUbergraph_B_TresNpc_AI_LeadSpline
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_TresNpc_AI_LeadSpline_C::ExecuteUbergraph_B_TresNpc_AI_LeadSpline(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TresNpc_AI_LeadSpline_C", "ExecuteUbergraph_B_TresNpc_AI_LeadSpline");

	Params::B_TresNpc_AI_LeadSpline_C_ExecuteUbergraph_B_TresNpc_AI_LeadSpline Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_TresNpc_AI_LeadSpline.B_TresNpc_AI_LeadSpline_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_TresNpc_AI_LeadSpline_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TresNpc_AI_LeadSpline_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_TresNpc_AI_LeadSpline.B_TresNpc_AI_LeadSpline_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_TresNpc_AI_LeadSpline_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TresNpc_AI_LeadSpline_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

