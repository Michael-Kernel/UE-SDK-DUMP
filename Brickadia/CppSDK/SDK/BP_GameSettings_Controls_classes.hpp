﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameSettings_Controls

#include "Basic.hpp"

#include "Brickadia_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GameSettings_Controls.BP_GameSettings_Controls_C
// 0x0000 (0x0180 - 0x0180)
class UBP_GameSettings_Controls_C final : public UBRGameSettingsBase_Controls
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GameSettings_Controls_C">();
	}
	static class UBP_GameSettings_Controls_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GameSettings_Controls_C>();
	}
};
static_assert(alignof(UBP_GameSettings_Controls_C) == 0x000008, "Wrong alignment on UBP_GameSettings_Controls_C");
static_assert(sizeof(UBP_GameSettings_Controls_C) == 0x000180, "Wrong size on UBP_GameSettings_Controls_C");

}

