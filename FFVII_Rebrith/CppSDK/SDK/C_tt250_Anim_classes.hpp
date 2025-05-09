#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: C_tt250_Anim

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TresGame_structs.hpp"
#include "TresGame_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass c_tt250_Anim.c_tt250_Anim_C
// 0x2D7A60 (0x115C1550 - 0x112E9AF0)
class UC_tt250_Anim_C final : public UTresAIAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06D8(0x6F26)(Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_426AF8944884A3099D4F16B3B9E85D10; // 0x06E0(0x112BD)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_6E32B43D484C0A7A3B3193B55868F4BB; // 0x0728(0x115C1550)()
	struct FTresAnimNode_UseCachedPose            TresAnimGraphNode_UseCachedPose_562CB0754F88CFC4513747A911389A58; // 0x0788(0x0038)()
	struct FTresAnimNode_SaveCachedPose           TresAnimGraphNode_SaveCachedPose_B5008102409875411223D8A964A8910E; // 0x07C0(0x112BD)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3394C137408BA74B7D07F2BD073AE088; // 0x0808(0x1129E)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_99CB70FC455BF006C15A618F4D20FA17; // 0x0850(0x112BD)()
	struct FTresAnimNode_ExLookAt                 TresAnimGraphNode_ExLookAt_6515E04B4BA98859C845F6BF2529EFE5; // 0x0898(0x1149AB00)()
	struct FTresAnimNode_UseCachedPose            TresAnimGraphNode_UseCachedPose_942C680A491A9534F9FA2A9D609317AF; // 0x09F0(0x0038)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_A3B0F5E945B52F58311C9B850E125AEC; // 0x0A28(0x115C1550)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_220371B2401E8E5CC5B86A8942E863E0; // 0x0A88(0x112E8D20)()

public:
	void ExecuteUbergraph_c_tt250_Anim(int32 EntryPoint);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_c_tt250_Anim_TresAnimGraphNode_ExLookAt_6515E04B4BA98859C845F6BF2529EFE5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_c_tt250_Anim_AnimGraphNode_LayeredBoneBlend_220371B2401E8E5CC5B86A8942E863E0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"c_tt250_Anim_C">();
	}
	static class UC_tt250_Anim_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UC_tt250_Anim_C>();
	}
};
static_assert(alignof(UC_tt250_Anim_C) == 0x115C1550, "Wrong alignment on UC_tt250_Anim_C");
static_assert(sizeof(UC_tt250_Anim_C) == 0x115C1550, "Wrong size on UC_tt250_Anim_C");
static_assert(offsetof(UC_tt250_Anim_C, UberGraphFrame) == 0x0006D8, "Member 'UC_tt250_Anim_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UC_tt250_Anim_C, AnimGraphNode_Root_426AF8944884A3099D4F16B3B9E85D10) == 0x0006E0, "Member 'UC_tt250_Anim_C::AnimGraphNode_Root_426AF8944884A3099D4F16B3B9E85D10' has a wrong offset!");
static_assert(offsetof(UC_tt250_Anim_C, AnimGraphNode_Slot_6E32B43D484C0A7A3B3193B55868F4BB) == 0x000728, "Member 'UC_tt250_Anim_C::AnimGraphNode_Slot_6E32B43D484C0A7A3B3193B55868F4BB' has a wrong offset!");
static_assert(offsetof(UC_tt250_Anim_C, TresAnimGraphNode_UseCachedPose_562CB0754F88CFC4513747A911389A58) == 0x000788, "Member 'UC_tt250_Anim_C::TresAnimGraphNode_UseCachedPose_562CB0754F88CFC4513747A911389A58' has a wrong offset!");
static_assert(offsetof(UC_tt250_Anim_C, TresAnimGraphNode_SaveCachedPose_B5008102409875411223D8A964A8910E) == 0x0007C0, "Member 'UC_tt250_Anim_C::TresAnimGraphNode_SaveCachedPose_B5008102409875411223D8A964A8910E' has a wrong offset!");
static_assert(offsetof(UC_tt250_Anim_C, AnimGraphNode_ComponentToLocalSpace_3394C137408BA74B7D07F2BD073AE088) == 0x000808, "Member 'UC_tt250_Anim_C::AnimGraphNode_ComponentToLocalSpace_3394C137408BA74B7D07F2BD073AE088' has a wrong offset!");
static_assert(offsetof(UC_tt250_Anim_C, AnimGraphNode_LocalToComponentSpace_99CB70FC455BF006C15A618F4D20FA17) == 0x000850, "Member 'UC_tt250_Anim_C::AnimGraphNode_LocalToComponentSpace_99CB70FC455BF006C15A618F4D20FA17' has a wrong offset!");
static_assert(offsetof(UC_tt250_Anim_C, TresAnimGraphNode_ExLookAt_6515E04B4BA98859C845F6BF2529EFE5) == 0x000898, "Member 'UC_tt250_Anim_C::TresAnimGraphNode_ExLookAt_6515E04B4BA98859C845F6BF2529EFE5' has a wrong offset!");
static_assert(offsetof(UC_tt250_Anim_C, TresAnimGraphNode_UseCachedPose_942C680A491A9534F9FA2A9D609317AF) == 0x0009F0, "Member 'UC_tt250_Anim_C::TresAnimGraphNode_UseCachedPose_942C680A491A9534F9FA2A9D609317AF' has a wrong offset!");
static_assert(offsetof(UC_tt250_Anim_C, AnimGraphNode_Slot_A3B0F5E945B52F58311C9B850E125AEC) == 0x000A28, "Member 'UC_tt250_Anim_C::AnimGraphNode_Slot_A3B0F5E945B52F58311C9B850E125AEC' has a wrong offset!");
static_assert(offsetof(UC_tt250_Anim_C, AnimGraphNode_LayeredBoneBlend_220371B2401E8E5CC5B86A8942E863E0) == 0x000A88, "Member 'UC_tt250_Anim_C::AnimGraphNode_LayeredBoneBlend_220371B2401E8E5CC5B86A8942E863E0' has a wrong offset!");

}

