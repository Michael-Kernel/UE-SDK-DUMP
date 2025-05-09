﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UDS_Occlusion_Volume

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UDS_Volume_Actor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass UDS_Occlusion_Volume.UDS_Occlusion_Volume_C
// 0x0020 (0x0328 - 0x0308)
class AUDS_Occlusion_Volume_C final : public AUDS_Volume_Actor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_UDS_Occlusion_Volume_C;             // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          _Interior_Adjusments;                              // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_311[0x7];                                      // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Occlusion_Multiplier;                              // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Block_Weather_Particles;                           // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Configure_Weather_Particle_Blocking();
	void ExecuteUbergraph_UDS_Occlusion_Volume(int32 EntryPoint);
	void Query_Occlusion_Multiplier(const struct FVector& Location, double* Multiplier);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UDS_Occlusion_Volume_C">();
	}
	static class AUDS_Occlusion_Volume_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AUDS_Occlusion_Volume_C>();
	}
};
static_assert(alignof(AUDS_Occlusion_Volume_C) == 0x000008, "Wrong alignment on AUDS_Occlusion_Volume_C");
static_assert(sizeof(AUDS_Occlusion_Volume_C) == 0x000328, "Wrong size on AUDS_Occlusion_Volume_C");
static_assert(offsetof(AUDS_Occlusion_Volume_C, UberGraphFrame_UDS_Occlusion_Volume_C) == 0x000308, "Member 'AUDS_Occlusion_Volume_C::UberGraphFrame_UDS_Occlusion_Volume_C' has a wrong offset!");
static_assert(offsetof(AUDS_Occlusion_Volume_C, _Interior_Adjusments) == 0x000310, "Member 'AUDS_Occlusion_Volume_C::_Interior_Adjusments' has a wrong offset!");
static_assert(offsetof(AUDS_Occlusion_Volume_C, Occlusion_Multiplier) == 0x000318, "Member 'AUDS_Occlusion_Volume_C::Occlusion_Multiplier' has a wrong offset!");
static_assert(offsetof(AUDS_Occlusion_Volume_C, Block_Weather_Particles) == 0x000320, "Member 'AUDS_Occlusion_Volume_C::Block_Weather_Particles' has a wrong offset!");

}

