#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DrawHDR_UI

#include "Basic.hpp"

#include "Snowfall_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DrawHDR_UI.DrawHDR_UI_C
// 0x0008 (0x0350 - 0x0348)
class UDrawHDR_UI_C final : public USnfOptionHDRWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0348(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_DrawHDR_UI(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DrawHDR_UI_C">();
	}
	static class UDrawHDR_UI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDrawHDR_UI_C>();
	}
};
static_assert(alignof(UDrawHDR_UI_C) == 0x000008, "Wrong alignment on UDrawHDR_UI_C");
static_assert(sizeof(UDrawHDR_UI_C) == 0x000350, "Wrong size on UDrawHDR_UI_C");
static_assert(offsetof(UDrawHDR_UI_C, UberGraphFrame) == 0x000348, "Member 'UDrawHDR_UI_C::UberGraphFrame' has a wrong offset!");

}

