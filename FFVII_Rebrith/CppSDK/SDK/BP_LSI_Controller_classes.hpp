#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LSI_Controller

#include "Basic.hpp"

#include "TresGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LSI_Controller.BP_LSI_Controller_C
// 0x0000 (0x1EF72E00 - 0x1EF72E00)
class ABP_LSI_Controller_C final : public ATresLSIPlayerController
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LSI_Controller_C">();
	}
	static class ABP_LSI_Controller_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LSI_Controller_C>();
	}
};
static_assert(alignof(ABP_LSI_Controller_C) == 0x1EF72E00, "Wrong alignment on ABP_LSI_Controller_C");
static_assert(sizeof(ABP_LSI_Controller_C) == 0x1EF72E00, "Wrong size on ABP_LSI_Controller_C");

}

