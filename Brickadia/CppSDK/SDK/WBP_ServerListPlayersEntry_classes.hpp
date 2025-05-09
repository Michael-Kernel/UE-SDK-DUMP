﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ServerListPlayersEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ServerListPlayersEntry.WBP_ServerListPlayersEntry_C
// 0x0048 (0x0318 - 0x02D0)
class UWBP_ServerListPlayersEntry_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Background;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HostIcon;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWS_TextBlock_Default_C*                NameText;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWS_TextBlock_Default_C*                TimeText;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 Name_0;                                            // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FTimespan                              Time;                                              // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bAlternate;                                        // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bHost;                                             // 0x0311(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_ServerListPlayersEntry(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ServerListPlayersEntry_C">();
	}
	static class UWBP_ServerListPlayersEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ServerListPlayersEntry_C>();
	}
};
static_assert(alignof(UWBP_ServerListPlayersEntry_C) == 0x000008, "Wrong alignment on UWBP_ServerListPlayersEntry_C");
static_assert(sizeof(UWBP_ServerListPlayersEntry_C) == 0x000318, "Wrong size on UWBP_ServerListPlayersEntry_C");
static_assert(offsetof(UWBP_ServerListPlayersEntry_C, UberGraphFrame) == 0x0002D0, "Member 'UWBP_ServerListPlayersEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ServerListPlayersEntry_C, Background) == 0x0002D8, "Member 'UWBP_ServerListPlayersEntry_C::Background' has a wrong offset!");
static_assert(offsetof(UWBP_ServerListPlayersEntry_C, HostIcon) == 0x0002E0, "Member 'UWBP_ServerListPlayersEntry_C::HostIcon' has a wrong offset!");
static_assert(offsetof(UWBP_ServerListPlayersEntry_C, NameText) == 0x0002E8, "Member 'UWBP_ServerListPlayersEntry_C::NameText' has a wrong offset!");
static_assert(offsetof(UWBP_ServerListPlayersEntry_C, TimeText) == 0x0002F0, "Member 'UWBP_ServerListPlayersEntry_C::TimeText' has a wrong offset!");
static_assert(offsetof(UWBP_ServerListPlayersEntry_C, Name_0) == 0x0002F8, "Member 'UWBP_ServerListPlayersEntry_C::Name_0' has a wrong offset!");
static_assert(offsetof(UWBP_ServerListPlayersEntry_C, Time) == 0x000308, "Member 'UWBP_ServerListPlayersEntry_C::Time' has a wrong offset!");
static_assert(offsetof(UWBP_ServerListPlayersEntry_C, bAlternate) == 0x000310, "Member 'UWBP_ServerListPlayersEntry_C::bAlternate' has a wrong offset!");
static_assert(offsetof(UWBP_ServerListPlayersEntry_C, bHost) == 0x000311, "Member 'UWBP_ServerListPlayersEntry_C::bHost' has a wrong offset!");

}

