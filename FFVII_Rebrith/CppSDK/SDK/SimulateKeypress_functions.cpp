#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SimulateKeypress

#include "Basic.hpp"

#include "SimulateKeypress_classes.hpp"
#include "SimulateKeypress_parameters.hpp"


namespace SDK
{

// Function SimulateKeypress.SimulateKeypress_C.ExecuteUbergraph_SimulateKeypress
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USimulateKeypress_C::ExecuteUbergraph_SimulateKeypress(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimulateKeypress_C", "ExecuteUbergraph_SimulateKeypress");

	Params::SimulateKeypress_C_ExecuteUbergraph_SimulateKeypress Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SimulateKeypress.SimulateKeypress_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                           OwnerActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USimulateKeypress_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimulateKeypress_C", "ReceiveExecute");

	Params::SimulateKeypress_C_ReceiveExecute Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);
}

}

