﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_EditGameTab_AdvancedSettings

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_EditGameTabBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_EditGameTab_AdvancedSettings.WBP_EditGameTab_AdvancedSettings_C
// 0x0020 (0x02F0 - 0x02D0)
class UWBP_EditGameTab_AdvancedSettings_C final : public UWBP_EditGameTabBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Button_C*                          EditServerColorPalette;                            // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InspectorPanel_C*                  InspectorPanel_AutoSave;                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InspectorPanel_C*                  InspectorPanel_General;                            // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Apply(bool bAllowAnnounce);
	void BndEvt__WBP_Button_K2Node_ComponentBoundEvent_0_ButtonDelegate__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_WBP_EditGameTab_AdvancedSettings(int32 EntryPoint);
	void OnSettingsUpdated_AutoSave(class UBRGameSettingsBase* SettingsObject);
	void OnSettingsUpdated_General(class UBRGameSettingsBase* SettingsObject);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_EditGameTab_AdvancedSettings_C">();
	}
	static class UWBP_EditGameTab_AdvancedSettings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_EditGameTab_AdvancedSettings_C>();
	}
};
static_assert(alignof(UWBP_EditGameTab_AdvancedSettings_C) == 0x000008, "Wrong alignment on UWBP_EditGameTab_AdvancedSettings_C");
static_assert(sizeof(UWBP_EditGameTab_AdvancedSettings_C) == 0x0002F0, "Wrong size on UWBP_EditGameTab_AdvancedSettings_C");
static_assert(offsetof(UWBP_EditGameTab_AdvancedSettings_C, UberGraphFrame) == 0x0002D0, "Member 'UWBP_EditGameTab_AdvancedSettings_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_EditGameTab_AdvancedSettings_C, EditServerColorPalette) == 0x0002D8, "Member 'UWBP_EditGameTab_AdvancedSettings_C::EditServerColorPalette' has a wrong offset!");
static_assert(offsetof(UWBP_EditGameTab_AdvancedSettings_C, InspectorPanel_AutoSave) == 0x0002E0, "Member 'UWBP_EditGameTab_AdvancedSettings_C::InspectorPanel_AutoSave' has a wrong offset!");
static_assert(offsetof(UWBP_EditGameTab_AdvancedSettings_C, InspectorPanel_General) == 0x0002E8, "Member 'UWBP_EditGameTab_AdvancedSettings_C::InspectorPanel_General' has a wrong offset!");

}

