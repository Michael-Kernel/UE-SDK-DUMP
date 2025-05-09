﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameInstance

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Brickadia_classes.hpp"
#include "NetCore_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C
// 0x0080 (0x04F0 - 0x0470)
class UBP_GameInstance_C final : public UBRGameInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0470(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          bPendingError;                                     // 0x0478(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_479[0x7];                                      // 0x0479(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 PendingErrorTitle;                                 // 0x0480(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 PendingErrorMessage;                               // 0x0490(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UAudioComponent*                        CurrentSong;                                       // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        PreviousSong;                                      // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class USoundBase>>      SongPlaylistSource;                                // 0x04B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TSoftObjectPtr<class USoundBase>>      SongPlaylistShuffled;                              // 0x04C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         NextPlaylistIndex;                                 // 0x04D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D4[0x4];                                      // 0x04D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           NextSongTimer;                                     // 0x04D8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsPlayingFromPlaylist;                            // 0x04E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E1[0x7];                                      // 0x04E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              StartupTimeStamp;                                  // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void DisableBackgroundMusic();
	void EnableBackgroundMusic();
	void ExecuteUbergraph_BP_GameInstance(int32 EntryPoint);
	void ForcePlaySongLooping(TSoftObjectPtr<class USoundBase> Song);
	void GetNextSongDelay(double* Delay);
	void HandleNetworkError(ENetworkFailure FailureType, const class FString& ErrorString, bool bIsServer);
	void HandlePreviousSongComplete();
	void HandleTravelError(ETravelFailure FailureType, const class FString& ErrorString);
	void HangleSongComplete();
	void OnButtonClicked_EF6D5265445B1CDC76E7449B8AC47BE4();
	void OnLoaded_EA74557847793C63A74DE8B3A1428A7B(class UObject* Loaded);
	void PlayNextSongInPlaylist();
	void PlaySong(class USoundBase* Song, double FadeDuration);
	void Private_AsyncLoadAndPlaySong(TSoftObjectPtr<class USoundBase> Song, double FadeDuration);
	void ReceiveInit();
	void ReportErrors();
	void SetTimerForNextSong();
	void ShuffleSongPlaylist();
	void StopSong();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GameInstance_C">();
	}
	static class UBP_GameInstance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GameInstance_C>();
	}
};
static_assert(alignof(UBP_GameInstance_C) == 0x000008, "Wrong alignment on UBP_GameInstance_C");
static_assert(sizeof(UBP_GameInstance_C) == 0x0004F0, "Wrong size on UBP_GameInstance_C");
static_assert(offsetof(UBP_GameInstance_C, UberGraphFrame) == 0x000470, "Member 'UBP_GameInstance_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_GameInstance_C, bPendingError) == 0x000478, "Member 'UBP_GameInstance_C::bPendingError' has a wrong offset!");
static_assert(offsetof(UBP_GameInstance_C, PendingErrorTitle) == 0x000480, "Member 'UBP_GameInstance_C::PendingErrorTitle' has a wrong offset!");
static_assert(offsetof(UBP_GameInstance_C, PendingErrorMessage) == 0x000490, "Member 'UBP_GameInstance_C::PendingErrorMessage' has a wrong offset!");
static_assert(offsetof(UBP_GameInstance_C, CurrentSong) == 0x0004A0, "Member 'UBP_GameInstance_C::CurrentSong' has a wrong offset!");
static_assert(offsetof(UBP_GameInstance_C, PreviousSong) == 0x0004A8, "Member 'UBP_GameInstance_C::PreviousSong' has a wrong offset!");
static_assert(offsetof(UBP_GameInstance_C, SongPlaylistSource) == 0x0004B0, "Member 'UBP_GameInstance_C::SongPlaylistSource' has a wrong offset!");
static_assert(offsetof(UBP_GameInstance_C, SongPlaylistShuffled) == 0x0004C0, "Member 'UBP_GameInstance_C::SongPlaylistShuffled' has a wrong offset!");
static_assert(offsetof(UBP_GameInstance_C, NextPlaylistIndex) == 0x0004D0, "Member 'UBP_GameInstance_C::NextPlaylistIndex' has a wrong offset!");
static_assert(offsetof(UBP_GameInstance_C, NextSongTimer) == 0x0004D8, "Member 'UBP_GameInstance_C::NextSongTimer' has a wrong offset!");
static_assert(offsetof(UBP_GameInstance_C, bIsPlayingFromPlaylist) == 0x0004E0, "Member 'UBP_GameInstance_C::bIsPlayingFromPlaylist' has a wrong offset!");
static_assert(offsetof(UBP_GameInstance_C, StartupTimeStamp) == 0x0004E8, "Member 'UBP_GameInstance_C::StartupTimeStamp' has a wrong offset!");

}

