﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OptionsDialog_Controls

#include "Basic.hpp"

#include "WBP_OptionsDialog_Controls_classes.hpp"
#include "WBP_OptionsDialog_Controls_parameters.hpp"


namespace SDK
{

// Function WBP_OptionsDialog_Controls.WBP_OptionsDialog_Controls_C.CacheSettingsInstanceAndDescriptor
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_OptionsDialog_Controls_C::CacheSettingsInstanceAndDescriptor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsDialog_Controls_C", "CacheSettingsInstanceAndDescriptor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OptionsDialog_Controls.WBP_OptionsDialog_Controls_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_OptionsDialog_Controls_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsDialog_Controls_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OptionsDialog_Controls.WBP_OptionsDialog_Controls_C.ExecuteUbergraph_WBP_OptionsDialog_Controls
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionsDialog_Controls_C::ExecuteUbergraph_WBP_OptionsDialog_Controls(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsDialog_Controls_C", "ExecuteUbergraph_WBP_OptionsDialog_Controls");

	Params::WBP_OptionsDialog_Controls_C_ExecuteUbergraph_WBP_OptionsDialog_Controls Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

