﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InviteCodeJoinDialog

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Brickadia_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_InviteCodeJoinDialog.WBP_InviteCodeJoinDialog_C
// 0x0030 (0x0310 - 0x02E0)
class UWBP_InviteCodeJoinDialog_C final : public UBRDialogBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Button_C*                          CancelButton;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DialogFrame_SmallHeaderFooter_C*   DialogFrame;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWS_TextBox_LessEmphasis_C*             InviteCodeBox;                                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_C*                          JoinButton;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IconButton_C*                      PasteButton;                                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_136_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__JoinButton_K2Node_ComponentBoundEvent_168_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PasswordBox_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__WBP_InviteCodeJoinDialog_PasteButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__WBP_ShareCodeJoin_ShareCodeBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void ExecuteUbergraph_WBP_InviteCodeJoinDialog(int32 EntryPoint);
	void OnButtonClicked_FC297A1D45380420D89E4CAB05E87B87();
	void OnFailed_4EAAC3C146F4D0E72D460899EC8F9BC9(int32 Sequence);
	void OnOpenDialog();
	void OnSuccess_4EAAC3C146F4D0E72D460899EC8F9BC9(int32 Sequence, const struct FJsonResponse_GetServers_Entry& Response);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InviteCodeJoinDialog_C">();
	}
	static class UWBP_InviteCodeJoinDialog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InviteCodeJoinDialog_C>();
	}
};
static_assert(alignof(UWBP_InviteCodeJoinDialog_C) == 0x000008, "Wrong alignment on UWBP_InviteCodeJoinDialog_C");
static_assert(sizeof(UWBP_InviteCodeJoinDialog_C) == 0x000310, "Wrong size on UWBP_InviteCodeJoinDialog_C");
static_assert(offsetof(UWBP_InviteCodeJoinDialog_C, UberGraphFrame) == 0x0002E0, "Member 'UWBP_InviteCodeJoinDialog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_InviteCodeJoinDialog_C, CancelButton) == 0x0002E8, "Member 'UWBP_InviteCodeJoinDialog_C::CancelButton' has a wrong offset!");
static_assert(offsetof(UWBP_InviteCodeJoinDialog_C, DialogFrame) == 0x0002F0, "Member 'UWBP_InviteCodeJoinDialog_C::DialogFrame' has a wrong offset!");
static_assert(offsetof(UWBP_InviteCodeJoinDialog_C, InviteCodeBox) == 0x0002F8, "Member 'UWBP_InviteCodeJoinDialog_C::InviteCodeBox' has a wrong offset!");
static_assert(offsetof(UWBP_InviteCodeJoinDialog_C, JoinButton) == 0x000300, "Member 'UWBP_InviteCodeJoinDialog_C::JoinButton' has a wrong offset!");
static_assert(offsetof(UWBP_InviteCodeJoinDialog_C, PasteButton) == 0x000308, "Member 'UWBP_InviteCodeJoinDialog_C::PasteButton' has a wrong offset!");

}

