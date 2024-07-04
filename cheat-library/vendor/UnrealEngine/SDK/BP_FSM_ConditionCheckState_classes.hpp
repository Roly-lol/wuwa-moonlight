#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FSM_ConditionCheckState

#include "Basic.hpp"

#include "KuroUtility_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FSM_ConditionCheckState.BP_FSM_ConditionCheckState_C
// 0x0018 (0x0050 - 0x0038)
class UBP_FSM_ConditionCheckState_C final : public UKuroStateMachineConditionBase
{
public:
	TArray<class FString>                         States;                                            // 0x0038(0x0010)(Edit, BlueprintVisible)
	bool                                          Activated;                                         // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FSM_ConditionCheckState_C">();
	}
	static class UBP_FSM_ConditionCheckState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FSM_ConditionCheckState_C>();
	}
};
static_assert(alignof(UBP_FSM_ConditionCheckState_C) == 0x000008, "Wrong alignment on UBP_FSM_ConditionCheckState_C");
static_assert(sizeof(UBP_FSM_ConditionCheckState_C) == 0x000050, "Wrong size on UBP_FSM_ConditionCheckState_C");
static_assert(offsetof(UBP_FSM_ConditionCheckState_C, States) == 0x000038, "Member 'UBP_FSM_ConditionCheckState_C::States' has a wrong offset!");
static_assert(offsetof(UBP_FSM_ConditionCheckState_C, Activated) == 0x000048, "Member 'UBP_FSM_ConditionCheckState_C::Activated' has a wrong offset!");

}
