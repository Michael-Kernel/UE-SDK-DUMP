﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BlogListing

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_BlogListing.WBP_BlogListing_C
// 0x0038 (0x0308 - 0x02D0)
class UWBP_BlogListing_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Button_C*                          ChangelogButton;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_C*                          DiscordButton;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_C*                          MorePostsButton;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           PostContainer;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Button_C*                          WebsiteButtonb;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         WorkSequenceNumber;                                // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__ChangelogButton_K2Node_ComponentBoundEvent_1_ButtonDelegate__DelegateSignature();
	void BndEvt__DiscordButton_K2Node_ComponentBoundEvent_2_ButtonDelegate__DelegateSignature();
	void BndEvt__MorePostsButton_K2Node_ComponentBoundEvent_0_ButtonDelegate__DelegateSignature();
	void BndEvt__WebsiteButtonb_K2Node_ComponentBoundEvent_3_ButtonDelegate__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_WBP_BlogListing(int32 EntryPoint);
	void OnError_DC1D399941CFDB42C9D34589AF4229CA(int32 Sequence);
	void OnWorkComplete_DC1D399941CFDB42C9D34589AF4229CA(int32 Sequence, const struct FJsonResponse_BlogListing& Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BlogListing_C">();
	}
	static class UWBP_BlogListing_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BlogListing_C>();
	}
};
static_assert(alignof(UWBP_BlogListing_C) == 0x000008, "Wrong alignment on UWBP_BlogListing_C");
static_assert(sizeof(UWBP_BlogListing_C) == 0x000308, "Wrong size on UWBP_BlogListing_C");
static_assert(offsetof(UWBP_BlogListing_C, UberGraphFrame) == 0x0002D0, "Member 'UWBP_BlogListing_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_BlogListing_C, ChangelogButton) == 0x0002D8, "Member 'UWBP_BlogListing_C::ChangelogButton' has a wrong offset!");
static_assert(offsetof(UWBP_BlogListing_C, DiscordButton) == 0x0002E0, "Member 'UWBP_BlogListing_C::DiscordButton' has a wrong offset!");
static_assert(offsetof(UWBP_BlogListing_C, MorePostsButton) == 0x0002E8, "Member 'UWBP_BlogListing_C::MorePostsButton' has a wrong offset!");
static_assert(offsetof(UWBP_BlogListing_C, PostContainer) == 0x0002F0, "Member 'UWBP_BlogListing_C::PostContainer' has a wrong offset!");
static_assert(offsetof(UWBP_BlogListing_C, WebsiteButtonb) == 0x0002F8, "Member 'UWBP_BlogListing_C::WebsiteButtonb' has a wrong offset!");
static_assert(offsetof(UWBP_BlogListing_C, WorkSequenceNumber) == 0x000300, "Member 'UWBP_BlogListing_C::WorkSequenceNumber' has a wrong offset!");

}

