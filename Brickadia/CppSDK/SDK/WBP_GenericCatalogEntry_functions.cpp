﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GenericCatalogEntry

#include "Basic.hpp"

#include "WBP_GenericCatalogEntry_classes.hpp"
#include "WBP_GenericCatalogEntry_parameters.hpp"


namespace SDK
{

// Function WBP_GenericCatalogEntry.WBP_GenericCatalogEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_GenericCatalogEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GenericCatalogEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GenericCatalogEntry.WBP_GenericCatalogEntry_C.ExecuteUbergraph_WBP_GenericCatalogEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GenericCatalogEntry_C::ExecuteUbergraph_WBP_GenericCatalogEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GenericCatalogEntry_C", "ExecuteUbergraph_WBP_GenericCatalogEntry");

	Params::WBP_GenericCatalogEntry_C_ExecuteUbergraph_WBP_GenericCatalogEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GenericCatalogEntry.WBP_GenericCatalogEntry_C.Hover
// (BlueprintCallable, BlueprintEvent)

void UWBP_GenericCatalogEntry_C::Hover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GenericCatalogEntry_C", "Hover");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GenericCatalogEntry.WBP_GenericCatalogEntry_C.StartRealtime
// (BlueprintCallable, BlueprintEvent)

void UWBP_GenericCatalogEntry_C::StartRealtime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GenericCatalogEntry_C", "StartRealtime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GenericCatalogEntry.WBP_GenericCatalogEntry_C.Unhover
// (BlueprintCallable, BlueprintEvent)

void UWBP_GenericCatalogEntry_C::Unhover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GenericCatalogEntry_C", "Unhover");

	UObject::ProcessEvent(Func, nullptr);
}

}

