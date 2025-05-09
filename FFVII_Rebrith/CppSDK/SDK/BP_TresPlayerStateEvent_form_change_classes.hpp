#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TresPlayerStateEvent_form_change

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TresGame_structs.hpp"
#include "TresGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TresPlayerStateEvent_form_change.BP_TresPlayerStateEvent_form_change_C
// 0x6ED6 (0x6F26 - 0x0050)
class UBP_TresPlayerStateEvent_form_change_C final : public UTresPlayerStateEvent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0050(0x6F26)(Transient, DuplicateTransient)
	class UCameraAnim*                            Camera_anim;                                       // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlendTime;                                         // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Distance;                                          // 0x0064(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         End_Blend;                                         // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TakeOver;                                          // 0x006C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Reset;                                             // 0x006D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_TresPlayerStateEvent_form_change(int32 EntryPoint);
	void ReceivePlayerDtorState(ETresStateID StateID);
	void Anti_bomb();
	void Anti_brust();
	void Anti_begin();
	void Ripple_drive();
	void LastAlcanam_End();
	void Magne_splash();
	void Sonic_rave();
	void Change_limit_form_shake();
	void Change_limit_form();
	void Stan_impact_sky();
	void Stan_impact_land();
	void ReceiveAnimNotifyEndBpEvent(class ATresCharPawnBase* SendActor, class FName AnimSeqName, ETresAnimNotifyBpEventID EventID, int32 Param);
	void ReceiveAnimNotifyStartBpEvent(class ATresCharPawnBase* SendActor, class FName AnimSeqName, ETresAnimNotifyBpEventID EventID, int32 Param);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TresPlayerStateEvent_form_change_C">();
	}
	static class UBP_TresPlayerStateEvent_form_change_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TresPlayerStateEvent_form_change_C>();
	}
};
static_assert(alignof(UBP_TresPlayerStateEvent_form_change_C) == 0x006F26, "Wrong alignment on UBP_TresPlayerStateEvent_form_change_C");
static_assert(sizeof(UBP_TresPlayerStateEvent_form_change_C) == 0x006F26, "Wrong size on UBP_TresPlayerStateEvent_form_change_C");
static_assert(offsetof(UBP_TresPlayerStateEvent_form_change_C, UberGraphFrame) == 0x000050, "Member 'UBP_TresPlayerStateEvent_form_change_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEvent_form_change_C, Camera_anim) == 0x000058, "Member 'UBP_TresPlayerStateEvent_form_change_C::Camera_anim' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEvent_form_change_C, BlendTime) == 0x000060, "Member 'UBP_TresPlayerStateEvent_form_change_C::BlendTime' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEvent_form_change_C, Distance) == 0x000064, "Member 'UBP_TresPlayerStateEvent_form_change_C::Distance' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEvent_form_change_C, End_Blend) == 0x000068, "Member 'UBP_TresPlayerStateEvent_form_change_C::End_Blend' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEvent_form_change_C, TakeOver) == 0x00006C, "Member 'UBP_TresPlayerStateEvent_form_change_C::TakeOver' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEvent_form_change_C, Reset) == 0x00006D, "Member 'UBP_TresPlayerStateEvent_form_change_C::Reset' has a wrong offset!");

}

