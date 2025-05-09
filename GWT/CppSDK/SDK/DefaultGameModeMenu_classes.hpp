#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DefaultGameModeMenu

#include "Basic.hpp"

#include "Snowfall_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DefaultGameModeMenu.DefaultGameModeMenu_C
// 0x0008 (0x02D8 - 0x02D0)
class ADefaultGameModeMenu_C final : public ASnowfallGameModeMenu
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DefaultGameModeMenu_C">();
	}
	static class ADefaultGameModeMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADefaultGameModeMenu_C>();
	}
};
static_assert(alignof(ADefaultGameModeMenu_C) == 0x000008, "Wrong alignment on ADefaultGameModeMenu_C");
static_assert(sizeof(ADefaultGameModeMenu_C) == 0x0002D8, "Wrong size on ADefaultGameModeMenu_C");
static_assert(offsetof(ADefaultGameModeMenu_C, DefaultSceneRoot) == 0x0002D0, "Member 'ADefaultGameModeMenu_C::DefaultSceneRoot' has a wrong offset!");

}

