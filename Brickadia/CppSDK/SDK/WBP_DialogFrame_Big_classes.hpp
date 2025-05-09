﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DialogFrame_Big

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_DialogFrame_Big.WBP_DialogFrame_Big_C
// 0x0048 (0x0318 - 0x02D0)
class UWBP_DialogFrame_Big_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_IconButton_C*                      CloseButton;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             DialogContentSlot;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             DialogTitleSlot;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DialogTitleText;                                   // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   DialogTitle;                                       // 0x02F8(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	TMulticastInlineDelegate<void()>              OnCloseButtonClicked;                              // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_DialogFrame_Big(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetDialogTitle(const class FText& DialogTitle_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_DialogFrame_Big_C">();
	}
	static class UWBP_DialogFrame_Big_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_DialogFrame_Big_C>();
	}
};
static_assert(alignof(UWBP_DialogFrame_Big_C) == 0x000008, "Wrong alignment on UWBP_DialogFrame_Big_C");
static_assert(sizeof(UWBP_DialogFrame_Big_C) == 0x000318, "Wrong size on UWBP_DialogFrame_Big_C");
static_assert(offsetof(UWBP_DialogFrame_Big_C, UberGraphFrame) == 0x0002D0, "Member 'UWBP_DialogFrame_Big_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_DialogFrame_Big_C, CloseButton) == 0x0002D8, "Member 'UWBP_DialogFrame_Big_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UWBP_DialogFrame_Big_C, DialogContentSlot) == 0x0002E0, "Member 'UWBP_DialogFrame_Big_C::DialogContentSlot' has a wrong offset!");
static_assert(offsetof(UWBP_DialogFrame_Big_C, DialogTitleSlot) == 0x0002E8, "Member 'UWBP_DialogFrame_Big_C::DialogTitleSlot' has a wrong offset!");
static_assert(offsetof(UWBP_DialogFrame_Big_C, DialogTitleText) == 0x0002F0, "Member 'UWBP_DialogFrame_Big_C::DialogTitleText' has a wrong offset!");
static_assert(offsetof(UWBP_DialogFrame_Big_C, DialogTitle) == 0x0002F8, "Member 'UWBP_DialogFrame_Big_C::DialogTitle' has a wrong offset!");
static_assert(offsetof(UWBP_DialogFrame_Big_C, OnCloseButtonClicked) == 0x000308, "Member 'UWBP_DialogFrame_Big_C::OnCloseButtonClicked' has a wrong offset!");

}

