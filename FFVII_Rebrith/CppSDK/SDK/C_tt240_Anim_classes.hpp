#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: C_tt240_Anim

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TresGame_structs.hpp"
#include "TresGame_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass c_tt240_Anim.c_tt240_Anim_C
// 0x2D7A60 (0x115C1550 - 0x112E9AF0)
class UC_tt240_Anim_C final : public UTresAIAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06D8(0x6F26)(Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_11D3C89A4741FAB7CE0C259581B49D6C; // 0x06E0(0x112BD)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_E56F6C8949AD9C4FF918859B08057976; // 0x0728(0x115C1550)()
	struct FTresAnimNode_UseCachedPose            TresAnimGraphNode_UseCachedPose_1F71C046478CC22E7EDCF686C1B31DA7; // 0x0788(0x0038)()
	struct FTresAnimNode_SaveCachedPose           TresAnimGraphNode_SaveCachedPose_D2C8EB1B4823C41708E63F9A9AFAFD1C; // 0x07C0(0x112BD)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_E472BC9D4895F7442E8A9BB3EBDACD46; // 0x0808(0x112BD)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_099137CE46F809139377BE8339F247AB; // 0x0850(0x1129E)()
	struct FTresAnimNode_UseCachedPose            TresAnimGraphNode_UseCachedPose_3E210E3C496CE708BEA3FA88D9EAE9CD; // 0x0898(0x0038)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_7B0C3C714362582F832AAF8389E98493; // 0x08D0(0x115C1550)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_E4B3BF994F0C10CB8F2565A30C551AB8; // 0x0930(0x112E8D20)()
	struct FTresAnimNode_ExLookAt                 TresAnimGraphNode_ExLookAt_AA2B60294D7A08487530038597A4BB2D; // 0x0A10(0x1149AB00)()

public:
	void ExecuteUbergraph_c_tt240_Anim(int32 EntryPoint);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_c_tt240_Anim_AnimGraphNode_LayeredBoneBlend_E4B3BF994F0C10CB8F2565A30C551AB8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_c_tt240_Anim_TresAnimGraphNode_ExLookAt_AA2B60294D7A08487530038597A4BB2D();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"c_tt240_Anim_C">();
	}
	static class UC_tt240_Anim_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UC_tt240_Anim_C>();
	}
};
static_assert(alignof(UC_tt240_Anim_C) == 0x115C1550, "Wrong alignment on UC_tt240_Anim_C");
static_assert(sizeof(UC_tt240_Anim_C) == 0x115C1550, "Wrong size on UC_tt240_Anim_C");
static_assert(offsetof(UC_tt240_Anim_C, UberGraphFrame) == 0x0006D8, "Member 'UC_tt240_Anim_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UC_tt240_Anim_C, AnimGraphNode_Root_11D3C89A4741FAB7CE0C259581B49D6C) == 0x0006E0, "Member 'UC_tt240_Anim_C::AnimGraphNode_Root_11D3C89A4741FAB7CE0C259581B49D6C' has a wrong offset!");
static_assert(offsetof(UC_tt240_Anim_C, AnimGraphNode_Slot_E56F6C8949AD9C4FF918859B08057976) == 0x000728, "Member 'UC_tt240_Anim_C::AnimGraphNode_Slot_E56F6C8949AD9C4FF918859B08057976' has a wrong offset!");
static_assert(offsetof(UC_tt240_Anim_C, TresAnimGraphNode_UseCachedPose_1F71C046478CC22E7EDCF686C1B31DA7) == 0x000788, "Member 'UC_tt240_Anim_C::TresAnimGraphNode_UseCachedPose_1F71C046478CC22E7EDCF686C1B31DA7' has a wrong offset!");
static_assert(offsetof(UC_tt240_Anim_C, TresAnimGraphNode_SaveCachedPose_D2C8EB1B4823C41708E63F9A9AFAFD1C) == 0x0007C0, "Member 'UC_tt240_Anim_C::TresAnimGraphNode_SaveCachedPose_D2C8EB1B4823C41708E63F9A9AFAFD1C' has a wrong offset!");
static_assert(offsetof(UC_tt240_Anim_C, AnimGraphNode_LocalToComponentSpace_E472BC9D4895F7442E8A9BB3EBDACD46) == 0x000808, "Member 'UC_tt240_Anim_C::AnimGraphNode_LocalToComponentSpace_E472BC9D4895F7442E8A9BB3EBDACD46' has a wrong offset!");
static_assert(offsetof(UC_tt240_Anim_C, AnimGraphNode_ComponentToLocalSpace_099137CE46F809139377BE8339F247AB) == 0x000850, "Member 'UC_tt240_Anim_C::AnimGraphNode_ComponentToLocalSpace_099137CE46F809139377BE8339F247AB' has a wrong offset!");
static_assert(offsetof(UC_tt240_Anim_C, TresAnimGraphNode_UseCachedPose_3E210E3C496CE708BEA3FA88D9EAE9CD) == 0x000898, "Member 'UC_tt240_Anim_C::TresAnimGraphNode_UseCachedPose_3E210E3C496CE708BEA3FA88D9EAE9CD' has a wrong offset!");
static_assert(offsetof(UC_tt240_Anim_C, AnimGraphNode_Slot_7B0C3C714362582F832AAF8389E98493) == 0x0008D0, "Member 'UC_tt240_Anim_C::AnimGraphNode_Slot_7B0C3C714362582F832AAF8389E98493' has a wrong offset!");
static_assert(offsetof(UC_tt240_Anim_C, AnimGraphNode_LayeredBoneBlend_E4B3BF994F0C10CB8F2565A30C551AB8) == 0x000930, "Member 'UC_tt240_Anim_C::AnimGraphNode_LayeredBoneBlend_E4B3BF994F0C10CB8F2565A30C551AB8' has a wrong offset!");
static_assert(offsetof(UC_tt240_Anim_C, TresAnimGraphNode_ExLookAt_AA2B60294D7A08487530038597A4BB2D) == 0x000A10, "Member 'UC_tt240_Anim_C::TresAnimGraphNode_ExLookAt_AA2B60294D7A08487530038597A4BB2D' has a wrong offset!");

}

