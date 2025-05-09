﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PresetList_NewEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PresetList_NewEntry.WBP_PresetList_NewEntry_C
// 0x0028 (0x02F8 - 0x02D0)
class UWBP_PresetList_NewEntry_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_PresetList_EntryNameEdit_C*        NameEdit;                                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBRPresetDescriptor*                    PresetDescriptor;                                  // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(class UBRPreset* Preset)> OnCreateNewPreset;                                 // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__NameEdit_K2Node_ComponentBoundEvent_1_OnCancel__DelegateSignature();
	void BndEvt__NameEdit_K2Node_ComponentBoundEvent_2_OnCommit__DelegateSignature(const class FString& NewName);
	void Construct();
	void ExecuteUbergraph_WBP_PresetList_NewEntry(int32 EntryPoint);
	void FocusTextField();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PresetList_NewEntry_C">();
	}
	static class UWBP_PresetList_NewEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PresetList_NewEntry_C>();
	}
};
static_assert(alignof(UWBP_PresetList_NewEntry_C) == 0x000008, "Wrong alignment on UWBP_PresetList_NewEntry_C");
static_assert(sizeof(UWBP_PresetList_NewEntry_C) == 0x0002F8, "Wrong size on UWBP_PresetList_NewEntry_C");
static_assert(offsetof(UWBP_PresetList_NewEntry_C, UberGraphFrame) == 0x0002D0, "Member 'UWBP_PresetList_NewEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PresetList_NewEntry_C, NameEdit) == 0x0002D8, "Member 'UWBP_PresetList_NewEntry_C::NameEdit' has a wrong offset!");
static_assert(offsetof(UWBP_PresetList_NewEntry_C, PresetDescriptor) == 0x0002E0, "Member 'UWBP_PresetList_NewEntry_C::PresetDescriptor' has a wrong offset!");
static_assert(offsetof(UWBP_PresetList_NewEntry_C, OnCreateNewPreset) == 0x0002E8, "Member 'UWBP_PresetList_NewEntry_C::OnCreateNewPreset' has a wrong offset!");

}

