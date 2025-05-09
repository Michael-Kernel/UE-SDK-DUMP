#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: G_TresPrizeFoodGimmickSkeletalBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "G_TresPrizeGimmickSkeletalBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass g_TresPrizeFoodGimmickSkeletalBase.g_TresPrizeFoodGimmickSkeletalBase_C
// 0x0000 (0x1EF72E00 - 0x1EF72E00)
#pragma pack(push, 0x1)
class alignas(0x1EF72E00) AG_TresPrizeFoodGimmickSkeletalBase_C : public AG_TresPrizeGimmickSkeletalBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_G_TresPrizeFoodGimmickSkeletalBase_C; // 0x0720(0x6F26)(Transient, DuplicateTransient)
	class USphereComponent*                       VoiceArea;                                         // 0x0728(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>             DMat_Body;                                         // 0x0730(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	float                                         Brightness;                                        // 0x0740(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Roughness_Intensity;                               // 0x0744(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CubeMap_Intensity;                                 // 0x0748(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseFieldvoiceRemote;                               // 0x074C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UseFieldvoiceEvent;                                // 0x074D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UseFieldvoiceDoOnce;                               // 0x074E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UseFieldvoiceGetVoice;                             // 0x074F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	UMulticastDelegateProperty_                   OnPlayFieldVoice;                                  // 0x0750(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnPlayFieldVoice__DelegateSignature();
	void ExecuteUbergraph_g_TresPrizeFoodGimmickSkeletalBase(int32 EntryPoint);
	void ReceiveBeginPlay();
	void BndEvt__voiceArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnSpawnPrize();
	void BPEV_OnStopGimmickForPlan(bool PlayAnimation);
	void BPEV_OnStartGimmickForPlan(bool PlayAnimation);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"g_TresPrizeFoodGimmickSkeletalBase_C">();
	}
	static class AG_TresPrizeFoodGimmickSkeletalBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AG_TresPrizeFoodGimmickSkeletalBase_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(AG_TresPrizeFoodGimmickSkeletalBase_C) == 0x1EF72E00, "Wrong alignment on AG_TresPrizeFoodGimmickSkeletalBase_C");
static_assert(sizeof(AG_TresPrizeFoodGimmickSkeletalBase_C) == 0x1EF72E00, "Wrong size on AG_TresPrizeFoodGimmickSkeletalBase_C");
static_assert(offsetof(AG_TresPrizeFoodGimmickSkeletalBase_C, UberGraphFrame_G_TresPrizeFoodGimmickSkeletalBase_C) == 0x000720, "Member 'AG_TresPrizeFoodGimmickSkeletalBase_C::UberGraphFrame_G_TresPrizeFoodGimmickSkeletalBase_C' has a wrong offset!");
static_assert(offsetof(AG_TresPrizeFoodGimmickSkeletalBase_C, VoiceArea) == 0x000728, "Member 'AG_TresPrizeFoodGimmickSkeletalBase_C::VoiceArea' has a wrong offset!");
static_assert(offsetof(AG_TresPrizeFoodGimmickSkeletalBase_C, DMat_Body) == 0x000730, "Member 'AG_TresPrizeFoodGimmickSkeletalBase_C::DMat_Body' has a wrong offset!");
static_assert(offsetof(AG_TresPrizeFoodGimmickSkeletalBase_C, Brightness) == 0x000740, "Member 'AG_TresPrizeFoodGimmickSkeletalBase_C::Brightness' has a wrong offset!");
static_assert(offsetof(AG_TresPrizeFoodGimmickSkeletalBase_C, Roughness_Intensity) == 0x000744, "Member 'AG_TresPrizeFoodGimmickSkeletalBase_C::Roughness_Intensity' has a wrong offset!");
static_assert(offsetof(AG_TresPrizeFoodGimmickSkeletalBase_C, CubeMap_Intensity) == 0x000748, "Member 'AG_TresPrizeFoodGimmickSkeletalBase_C::CubeMap_Intensity' has a wrong offset!");
static_assert(offsetof(AG_TresPrizeFoodGimmickSkeletalBase_C, UseFieldvoiceRemote) == 0x00074C, "Member 'AG_TresPrizeFoodGimmickSkeletalBase_C::UseFieldvoiceRemote' has a wrong offset!");
static_assert(offsetof(AG_TresPrizeFoodGimmickSkeletalBase_C, UseFieldvoiceEvent) == 0x00074D, "Member 'AG_TresPrizeFoodGimmickSkeletalBase_C::UseFieldvoiceEvent' has a wrong offset!");
static_assert(offsetof(AG_TresPrizeFoodGimmickSkeletalBase_C, UseFieldvoiceDoOnce) == 0x00074E, "Member 'AG_TresPrizeFoodGimmickSkeletalBase_C::UseFieldvoiceDoOnce' has a wrong offset!");
static_assert(offsetof(AG_TresPrizeFoodGimmickSkeletalBase_C, UseFieldvoiceGetVoice) == 0x00074F, "Member 'AG_TresPrizeFoodGimmickSkeletalBase_C::UseFieldvoiceGetVoice' has a wrong offset!");
static_assert(offsetof(AG_TresPrizeFoodGimmickSkeletalBase_C, OnPlayFieldVoice) == 0x000750, "Member 'AG_TresPrizeFoodGimmickSkeletalBase_C::OnPlayFieldVoice' has a wrong offset!");

}

