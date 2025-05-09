﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OptionsDialog_Graphics

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_OptionsDialogBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_OptionsDialog_Graphics.WBP_OptionsDialog_Graphics_C
// 0x0030 (0x0340 - 0x0310)
class UWBP_OptionsDialog_Graphics_C final : public UWBP_OptionsDialogBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_OptionsDialog_Graphics_C;       // 0x0310(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_DialogFrame_SmallHeaderFooter_C*   DialogFrame;                                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PresetList_Dropdown_C*             Presets;                                           // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 DefaultDescriptorClass;                            // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBRGameUserSettings*                    CachedSettingsInstance;                            // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UInspectorPropertyDescriptorList*       CachedSettingsDescriptor;                          // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__Presets_K2Node_ComponentBoundEvent_0_OnSavePreset__DelegateSignature(class UBRPreset* Preset);
	void BndEvt__Presets_K2Node_ComponentBoundEvent_1_OnLoadPreset__DelegateSignature(class UBRPreset* Preset);
	void BndEvt__Presets_K2Node_ComponentBoundEvent_2_OnResetToDefaults__DelegateSignature();
	void CacheSettingsInstanceAndDescriptor();
	void Construct();
	void DiscardLocalSettings();
	void ExecuteUbergraph_WBP_OptionsDialog_Graphics(int32 EntryPoint);
	void HandleEdited();
	void HandleEditedExternally();
	void HasRestartRequiredChanges(bool* bReturnValue);
	void HasUnsavedChanges(bool* bReturnValue);
	void RefreshLocalSettings();
	void SaveLocalSettings();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_OptionsDialog_Graphics_C">();
	}
	static class UWBP_OptionsDialog_Graphics_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_OptionsDialog_Graphics_C>();
	}
};
static_assert(alignof(UWBP_OptionsDialog_Graphics_C) == 0x000008, "Wrong alignment on UWBP_OptionsDialog_Graphics_C");
static_assert(sizeof(UWBP_OptionsDialog_Graphics_C) == 0x000340, "Wrong size on UWBP_OptionsDialog_Graphics_C");
static_assert(offsetof(UWBP_OptionsDialog_Graphics_C, UberGraphFrame_WBP_OptionsDialog_Graphics_C) == 0x000310, "Member 'UWBP_OptionsDialog_Graphics_C::UberGraphFrame_WBP_OptionsDialog_Graphics_C' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsDialog_Graphics_C, DialogFrame) == 0x000318, "Member 'UWBP_OptionsDialog_Graphics_C::DialogFrame' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsDialog_Graphics_C, Presets) == 0x000320, "Member 'UWBP_OptionsDialog_Graphics_C::Presets' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsDialog_Graphics_C, DefaultDescriptorClass) == 0x000328, "Member 'UWBP_OptionsDialog_Graphics_C::DefaultDescriptorClass' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsDialog_Graphics_C, CachedSettingsInstance) == 0x000330, "Member 'UWBP_OptionsDialog_Graphics_C::CachedSettingsInstance' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsDialog_Graphics_C, CachedSettingsDescriptor) == 0x000338, "Member 'UWBP_OptionsDialog_Graphics_C::CachedSettingsDescriptor' has a wrong offset!");

}

