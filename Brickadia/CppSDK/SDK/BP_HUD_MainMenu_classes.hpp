﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HUD_MainMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Brickadia_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HUD_MainMenu.BP_HUD_MainMenu_C
// 0x0010 (0x04E8 - 0x04D8)
class ABP_HUD_MainMenu_C final : public ABRHUD
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x04E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_HUD_MainMenu(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HUD_MainMenu_C">();
	}
	static class ABP_HUD_MainMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HUD_MainMenu_C>();
	}
};
static_assert(alignof(ABP_HUD_MainMenu_C) == 0x000008, "Wrong alignment on ABP_HUD_MainMenu_C");
static_assert(sizeof(ABP_HUD_MainMenu_C) == 0x0004E8, "Wrong size on ABP_HUD_MainMenu_C");
static_assert(offsetof(ABP_HUD_MainMenu_C, UberGraphFrame) == 0x0004D8, "Member 'ABP_HUD_MainMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_HUD_MainMenu_C, DefaultSceneRoot) == 0x0004E0, "Member 'ABP_HUD_MainMenu_C::DefaultSceneRoot' has a wrong offset!");

}

