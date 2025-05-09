﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FolderPathEntryBase

#include "Basic.hpp"

#include "WBP_FolderPathEntryBase_classes.hpp"
#include "WBP_FolderPathEntryBase_parameters.hpp"


namespace SDK
{

// Function WBP_FolderPathEntryBase.WBP_FolderPathEntryBase_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_FolderPathEntryBase_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FolderPathEntryBase_C", "BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_FolderPathEntryBase.WBP_FolderPathEntryBase_C.ExecuteUbergraph_WBP_FolderPathEntryBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FolderPathEntryBase_C::ExecuteUbergraph_WBP_FolderPathEntryBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FolderPathEntryBase_C", "ExecuteUbergraph_WBP_FolderPathEntryBase");

	Params::WBP_FolderPathEntryBase_C_ExecuteUbergraph_WBP_FolderPathEntryBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FolderPathEntryBase.WBP_FolderPathEntryBase_C.OnDragEnter
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             PointerEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*               Operation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_FolderPathEntryBase_C::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FolderPathEntryBase_C", "OnDragEnter");

	Params::WBP_FolderPathEntryBase_C_OnDragEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FolderPathEntryBase.WBP_FolderPathEntryBase_C.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FPointerEvent&             PointerEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*               Operation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_FolderPathEntryBase_C::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FolderPathEntryBase_C", "OnDragLeave");

	Params::WBP_FolderPathEntryBase_C_OnDragLeave Parms{};

	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FolderPathEntryBase.WBP_FolderPathEntryBase_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FPointerEvent&             PointerEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*               Operation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_FolderPathEntryBase_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FolderPathEntryBase_C", "OnDrop");

	Params::WBP_FolderPathEntryBase_C_OnDrop Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_FolderPathEntryBase.WBP_FolderPathEntryBase_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FolderPathEntryBase_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FolderPathEntryBase_C", "PreConstruct");

	Params::WBP_FolderPathEntryBase_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FolderPathEntryBase.WBP_FolderPathEntryBase_C.SetPathSegmentInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PathSegmentIndex_0                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FText&                      PathSegmentText_0                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_FolderPathEntryBase_C::SetPathSegmentInfo(int32 PathSegmentIndex_0, const class FText& PathSegmentText_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FolderPathEntryBase_C", "SetPathSegmentInfo");

	Params::WBP_FolderPathEntryBase_C_SetPathSegmentInfo Parms{};

	Parms.PathSegmentIndex_0 = PathSegmentIndex_0;
	Parms.PathSegmentText_0 = std::move(PathSegmentText_0);

	UObject::ProcessEvent(Func, &Parms);
}

}

