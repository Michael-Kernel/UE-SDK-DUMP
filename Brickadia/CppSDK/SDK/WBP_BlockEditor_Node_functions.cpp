﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BlockEditor_Node

#include "Basic.hpp"

#include "WBP_BlockEditor_Node_classes.hpp"
#include "WBP_BlockEditor_Node_parameters.hpp"


namespace SDK
{

// Function WBP_BlockEditor_Node.WBP_BlockEditor_Node_C.ExecuteUbergraph_WBP_BlockEditor_Node
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BlockEditor_Node_C::ExecuteUbergraph_WBP_BlockEditor_Node(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BlockEditor_Node_C", "ExecuteUbergraph_WBP_BlockEditor_Node");

	Params::WBP_BlockEditor_Node_C_ExecuteUbergraph_WBP_BlockEditor_Node Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_BlockEditor_Node.WBP_BlockEditor_Node_C.HandleNodeChainVisual
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FBHResolvedTypeInfo&       Type                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    bHasLastType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FBHResolvedTypeInfo&       LastType                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_BlockEditor_Node_C::HandleNodeChainVisual(const struct FBHResolvedTypeInfo& Type, bool bHasLastType, const struct FBHResolvedTypeInfo& LastType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_BlockEditor_Node_C", "HandleNodeChainVisual");

	Params::WBP_BlockEditor_Node_C_HandleNodeChainVisual Parms{};

	Parms.Type = std::move(Type);
	Parms.bHasLastType = bHasLastType;
	Parms.LastType = std::move(LastType);

	UObject::ProcessEvent(Func, &Parms);
}

}

