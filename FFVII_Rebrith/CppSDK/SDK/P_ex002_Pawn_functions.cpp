#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: P_ex002_Pawn

#include "Basic.hpp"

#include "P_ex002_Pawn_classes.hpp"


namespace SDK
{

// Function p_ex002_Pawn.p_ex002_Pawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AP_ex002_Pawn_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_ex002_Pawn_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

