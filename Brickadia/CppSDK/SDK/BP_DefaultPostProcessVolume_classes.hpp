﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DefaultPostProcessVolume

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DefaultPostProcessVolume.BP_DefaultPostProcessVolume_C
// 0x0008 (0x02B8 - 0x02B0)
class ABP_DefaultPostProcessVolume_C final : public AActor
{
public:
	class UPostProcessComponent*                  PostProcess;                                       // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DefaultPostProcessVolume_C">();
	}
	static class ABP_DefaultPostProcessVolume_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DefaultPostProcessVolume_C>();
	}
};
static_assert(alignof(ABP_DefaultPostProcessVolume_C) == 0x000008, "Wrong alignment on ABP_DefaultPostProcessVolume_C");
static_assert(sizeof(ABP_DefaultPostProcessVolume_C) == 0x0002B8, "Wrong size on ABP_DefaultPostProcessVolume_C");
static_assert(offsetof(ABP_DefaultPostProcessVolume_C, PostProcess) == 0x0002B0, "Member 'ABP_DefaultPostProcessVolume_C::PostProcess' has a wrong offset!");

}

