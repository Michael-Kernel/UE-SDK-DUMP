#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: E_ex001_Pawn_Base

#include "Basic.hpp"

#include "E_ex001_Pawn_Base_classes.hpp"


namespace SDK
{

// Function e_ex001_Pawn_Base.e_ex001_Pawn_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AE_ex001_Pawn_Base_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("e_ex001_Pawn_Base_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

