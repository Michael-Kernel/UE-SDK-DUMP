﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UDW_Defaults

#include "Basic.hpp"

#include "Ultra_Dynamic_Weather_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_UDW_Defaults.BP_UDW_Defaults_C
// 0x0000 (0x1C40 - 0x1C40)
class ABP_UDW_Defaults_C final : public AUltra_Dynamic_Weather_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UDW_Defaults_C">();
	}
	static class ABP_UDW_Defaults_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_UDW_Defaults_C>();
	}
};
static_assert(alignof(ABP_UDW_Defaults_C) == 0x000008, "Wrong alignment on ABP_UDW_Defaults_C");
static_assert(sizeof(ABP_UDW_Defaults_C) == 0x001C40, "Wrong size on ABP_UDW_Defaults_C");

}

