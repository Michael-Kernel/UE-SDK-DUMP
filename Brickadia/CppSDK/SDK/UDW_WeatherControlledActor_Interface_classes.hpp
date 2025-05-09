﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UDW_WeatherControlledActor_Interface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass UDW_WeatherControlledActor_Interface.UDW_WeatherControlledActor_Interface_C
// 0x0000 (0x0028 - 0x0028)
class IUDW_WeatherControlledActor_Interface_C final : public IInterface
{
public:
	void UDW_Editor_Update();
	void UDW_Instant_Update();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UDW_WeatherControlledActor_Interface_C">();
	}
	static class IUDW_WeatherControlledActor_Interface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IUDW_WeatherControlledActor_Interface_C>();
	}
};
static_assert(alignof(IUDW_WeatherControlledActor_Interface_C) == 0x000008, "Wrong alignment on IUDW_WeatherControlledActor_Interface_C");
static_assert(sizeof(IUDW_WeatherControlledActor_Interface_C) == 0x000028, "Wrong size on IUDW_WeatherControlledActor_Interface_C");

}

