#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TresPlayerStateEventCamera_MikeBowling

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TresGame_structs.hpp"
#include "TresGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TresPlayerStateEventCamera_MikeBowling.BP_TresPlayerStateEventCamera_MikeBowling_C
// 0x6ED6 (0x6F26 - 0x0050)
class UBP_TresPlayerStateEventCamera_MikeBowling_C final : public UTresPlayerStateEvent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0050(0x6F26)(Transient, DuplicateTransient)
	class ATresCharPawnBase*                      Tres_Char_Pawn_base;                               // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATresCameraAnim*                        Cut01_Short;                                       // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATresCameraAnim*                        Cut02;                                             // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATresCameraAnim*                        Cut01_Long;                                        // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MikeBowling_START;                                 // 0x0078(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_TresPlayerStateEventCamera_MikeBowling(int32 EntryPoint);
	void ReceivePlayerDtorState(ETresStateID StateID);
	void ReceiveAnimNotifyStartBpEvent(class ATresCharPawnBase* SendActor, class FName AnimSeqName, ETresAnimNotifyBpEventID EventID, int32 Param);
	void ReceivePlayerSpecificAction(ETresPlayerSpecificActionID ActionID, int32 SubID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TresPlayerStateEventCamera_MikeBowling_C">();
	}
	static class UBP_TresPlayerStateEventCamera_MikeBowling_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TresPlayerStateEventCamera_MikeBowling_C>();
	}
};
static_assert(alignof(UBP_TresPlayerStateEventCamera_MikeBowling_C) == 0x006F26, "Wrong alignment on UBP_TresPlayerStateEventCamera_MikeBowling_C");
static_assert(sizeof(UBP_TresPlayerStateEventCamera_MikeBowling_C) == 0x006F26, "Wrong size on UBP_TresPlayerStateEventCamera_MikeBowling_C");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_MikeBowling_C, UberGraphFrame) == 0x000050, "Member 'UBP_TresPlayerStateEventCamera_MikeBowling_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_MikeBowling_C, Tres_Char_Pawn_base) == 0x000058, "Member 'UBP_TresPlayerStateEventCamera_MikeBowling_C::Tres_Char_Pawn_base' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_MikeBowling_C, Cut01_Short) == 0x000060, "Member 'UBP_TresPlayerStateEventCamera_MikeBowling_C::Cut01_Short' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_MikeBowling_C, Cut02) == 0x000068, "Member 'UBP_TresPlayerStateEventCamera_MikeBowling_C::Cut02' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_MikeBowling_C, Cut01_Long) == 0x000070, "Member 'UBP_TresPlayerStateEventCamera_MikeBowling_C::Cut01_Long' has a wrong offset!");
static_assert(offsetof(UBP_TresPlayerStateEventCamera_MikeBowling_C, MikeBowling_START) == 0x000078, "Member 'UBP_TresPlayerStateEventCamera_MikeBowling_C::MikeBowling_START' has a wrong offset!");

}

