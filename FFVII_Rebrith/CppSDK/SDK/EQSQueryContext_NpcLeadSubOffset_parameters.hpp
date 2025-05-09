#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EQSQueryContext_NpcLeadSubOffset

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function EQSQueryContext_NpcLeadSubOffset.EQSQueryContext_NpcLeadSubOffset_C.ProvideSingleLocation
// 0x112E9AF0 (0x112E9AF0 - 0x0000)
struct EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation final
{
public:
	class UObject*                                QuerierObject;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 QuerierActor;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ResultingLocation;                                 // 0x0010(0x000C)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATresNpcPawnBase*                       K2Node_DynamicCast_AsTres_Npc_Pawn_Base;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATresNpcControllerBase*                 K2Node_DynamicCast_AsTres_Npc_Controller_Base;     // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTresNpcAILeadSplineController*         CallFunc_GetLeadSplineController_ReturnValue;      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLeadSubOffset_ReturnValue;             // 0x0050(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetBaseWayPoint_ReturnValue;              // 0x0060(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetBaseWayPointRotation_ReturnValue;      // 0x006C(0x112E9AF0)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x0078(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0084(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation) == 0x112E9AF0, "Wrong alignment on EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation");
static_assert(sizeof(EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation) == 0x112E9AF0, "Wrong size on EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation");
static_assert(offsetof(EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation, QuerierObject) == 0x000000, "Member 'EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation::QuerierObject' has a wrong offset!");
static_assert(offsetof(EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation, QuerierActor) == 0x000008, "Member 'EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation::QuerierActor' has a wrong offset!");
static_assert(offsetof(EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation, ResultingLocation) == 0x000010, "Member 'EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation::ResultingLocation' has a wrong offset!");
static_assert(offsetof(EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation, K2Node_DynamicCast_AsTres_Npc_Pawn_Base) == 0x000020, "Member 'EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation::K2Node_DynamicCast_AsTres_Npc_Pawn_Base' has a wrong offset!");
static_assert(offsetof(EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation, CallFunc_GetController_ReturnValue) == 0x000030, "Member 'EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation, K2Node_DynamicCast_AsTres_Npc_Controller_Base) == 0x000038, "Member 'EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation::K2Node_DynamicCast_AsTres_Npc_Controller_Base' has a wrong offset!");
static_assert(offsetof(EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation, K2Node_DynamicCast_bSuccess2) == 0x000040, "Member 'EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation, CallFunc_GetLeadSplineController_ReturnValue) == 0x000048, "Member 'EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation::CallFunc_GetLeadSplineController_ReturnValue' has a wrong offset!");
static_assert(offsetof(EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation, CallFunc_GetLeadSubOffset_ReturnValue) == 0x000050, "Member 'EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation::CallFunc_GetLeadSubOffset_ReturnValue' has a wrong offset!");
static_assert(offsetof(EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation, CallFunc_IsValid_ReturnValue) == 0x00005C, "Member 'EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation, CallFunc_GetBaseWayPoint_ReturnValue) == 0x000060, "Member 'EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation::CallFunc_GetBaseWayPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation, CallFunc_GetBaseWayPointRotation_ReturnValue) == 0x00006C, "Member 'EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation::CallFunc_GetBaseWayPointRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation, CallFunc_GreaterGreater_VectorRotator_ReturnValue) == 0x000078, "Member 'EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation::CallFunc_GreaterGreater_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation, CallFunc_Add_VectorVector_ReturnValue) == 0x000084, "Member 'EQSQueryContext_NpcLeadSubOffset_C_ProvideSingleLocation::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");

}

