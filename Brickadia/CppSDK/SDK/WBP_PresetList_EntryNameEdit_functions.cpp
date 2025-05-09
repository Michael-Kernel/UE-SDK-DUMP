﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PresetList_EntryNameEdit

#include "Basic.hpp"

#include "WBP_PresetList_EntryNameEdit_classes.hpp"
#include "WBP_PresetList_EntryNameEdit_parameters.hpp"


namespace SDK
{

// Function WBP_PresetList_EntryNameEdit.WBP_PresetList_EntryNameEdit_C.BndEvt__RenameBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// const class FText&                      Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PresetList_EntryNameEdit_C::BndEvt__RenameBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PresetList_EntryNameEdit_C", "BndEvt__RenameBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::WBP_PresetList_EntryNameEdit_C_BndEvt__RenameBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PresetList_EntryNameEdit.WBP_PresetList_EntryNameEdit_C.BndEvt__RenameBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// const class FText&                      Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PresetList_EntryNameEdit_C::BndEvt__RenameBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PresetList_EntryNameEdit_C", "BndEvt__RenameBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::WBP_PresetList_EntryNameEdit_C_BndEvt__RenameBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PresetList_EntryNameEdit.WBP_PresetList_EntryNameEdit_C.ExecuteUbergraph_WBP_PresetList_EntryNameEdit
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PresetList_EntryNameEdit_C::ExecuteUbergraph_WBP_PresetList_EntryNameEdit(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PresetList_EntryNameEdit_C", "ExecuteUbergraph_WBP_PresetList_EntryNameEdit");

	Params::WBP_PresetList_EntryNameEdit_C_ExecuteUbergraph_WBP_PresetList_EntryNameEdit Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PresetList_EntryNameEdit.WBP_PresetList_EntryNameEdit_C.ProcessNameChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    Name_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_PresetList_EntryNameEdit_C::ProcessNameChanged(const class FString& Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PresetList_EntryNameEdit_C", "ProcessNameChanged");

	Params::WBP_PresetList_EntryNameEdit_C_ProcessNameChanged Parms{};

	Parms.Name_0 = std::move(Name_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PresetList_EntryNameEdit.WBP_PresetList_EntryNameEdit_C.SetNameAndFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    Name_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_PresetList_EntryNameEdit_C::SetNameAndFocus(const class FString& Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PresetList_EntryNameEdit_C", "SetNameAndFocus");

	Params::WBP_PresetList_EntryNameEdit_C_SetNameAndFocus Parms{};

	Parms.Name_0 = std::move(Name_0);

	UObject::ProcessEvent(Func, &Parms);
}

}

