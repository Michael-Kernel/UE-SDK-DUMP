#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TresGameMode_3_TT

#include "Basic.hpp"

#include "TresGameMode_3_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TresGameMode_3_TT.TresGameMode_3_TT_C
// 0x0000 (0x1EF72E00 - 0x1EF72E00)
class ATresGameMode_3_TT_C final : public ATresGameMode_3_Base_C
{
public:
	void UserConstructionScript();
	void BPE_OverrideMapJumpPath(class UObject* From, int32 InFadeKind, class FName& InMapName, class FName& InPlayerStartTag, class FName* OutMapName, class FName* OutPlayerStartTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TresGameMode_3_TT_C">();
	}
	static class ATresGameMode_3_TT_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATresGameMode_3_TT_C>();
	}
};
static_assert(alignof(ATresGameMode_3_TT_C) == 0x1EF72E00, "Wrong alignment on ATresGameMode_3_TT_C");
static_assert(sizeof(ATresGameMode_3_TT_C) == 0x1EF72E00, "Wrong size on ATresGameMode_3_TT_C");

}

