﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_AudioCatalogTabButton

#include "Basic.hpp"

#include "WBP_AudioCatalogTabButton_classes.hpp"
#include "WBP_AudioCatalogTabButton_parameters.hpp"


namespace SDK
{

// Function WBP_AudioCatalogTabButton.WBP_AudioCatalogTabButton_C.ExecuteUbergraph_WBP_AudioCatalogTabButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AudioCatalogTabButton_C::ExecuteUbergraph_WBP_AudioCatalogTabButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AudioCatalogTabButton_C", "ExecuteUbergraph_WBP_AudioCatalogTabButton");

	Params::WBP_AudioCatalogTabButton_C_ExecuteUbergraph_WBP_AudioCatalogTabButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_AudioCatalogTabButton.WBP_AudioCatalogTabButton_C.SetShowSelected
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    Selected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AudioCatalogTabButton_C::SetShowSelected(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_AudioCatalogTabButton_C", "SetShowSelected");

	Params::WBP_AudioCatalogTabButton_C_SetShowSelected Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);
}

}

