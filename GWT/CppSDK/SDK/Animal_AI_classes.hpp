#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Animal_AI

#include "Basic.hpp"

#include "TangoLib_structs.hpp"
#include "Snowfall_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Animal_AI.Animal_AI_C
// 0x0050 (0x0470 - 0x0420)
class AAnimal_AI_C final : public ASnfAnimalAIController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0420(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTngAIPerceptionComponent*              TngAIPerception;                                   // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       MovementPath;                                      // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETngSplineFollowingBehavior                   MovementPathBehavior;                              // 0x0438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_439[0x7];                                      // 0x0439(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ATargetPoint*>                   MovementPoints;                                    // 0x0440(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                         MovementThrottle;                                  // 0x0450(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   EnemyContactRateBBKey;                             // 0x0454(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45C[0x4];                                      // 0x045C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnFirstEnemyContact;                               // 0x0460(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnFirstEnemyContact__DelegateSignature();
	void ExecuteUbergraph_Animal_AI(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void IsLostedInSightActor(class AActor* CheckActor, bool* Result);
	float GetAIEnemyContactRate();
	bool OnChangeAIState(class FName NewState);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Animal_AI_C">();
	}
	static class AAnimal_AI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAnimal_AI_C>();
	}
};
static_assert(alignof(AAnimal_AI_C) == 0x000008, "Wrong alignment on AAnimal_AI_C");
static_assert(sizeof(AAnimal_AI_C) == 0x000470, "Wrong size on AAnimal_AI_C");
static_assert(offsetof(AAnimal_AI_C, UberGraphFrame) == 0x000420, "Member 'AAnimal_AI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAnimal_AI_C, TngAIPerception) == 0x000428, "Member 'AAnimal_AI_C::TngAIPerception' has a wrong offset!");
static_assert(offsetof(AAnimal_AI_C, MovementPath) == 0x000430, "Member 'AAnimal_AI_C::MovementPath' has a wrong offset!");
static_assert(offsetof(AAnimal_AI_C, MovementPathBehavior) == 0x000438, "Member 'AAnimal_AI_C::MovementPathBehavior' has a wrong offset!");
static_assert(offsetof(AAnimal_AI_C, MovementPoints) == 0x000440, "Member 'AAnimal_AI_C::MovementPoints' has a wrong offset!");
static_assert(offsetof(AAnimal_AI_C, MovementThrottle) == 0x000450, "Member 'AAnimal_AI_C::MovementThrottle' has a wrong offset!");
static_assert(offsetof(AAnimal_AI_C, EnemyContactRateBBKey) == 0x000454, "Member 'AAnimal_AI_C::EnemyContactRateBBKey' has a wrong offset!");
static_assert(offsetof(AAnimal_AI_C, OnFirstEnemyContact) == 0x000460, "Member 'AAnimal_AI_C::OnFirstEnemyContact' has a wrong offset!");

}

