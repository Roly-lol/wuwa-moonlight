#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_WuYinQu_HuangShiGaoDi_Environment

#include "Basic.hpp"

#include "GA_WuYinQu_HuangShiGaoDi_Environment_classes.hpp"
#include "GA_WuYinQu_HuangShiGaoDi_Environment_parameters.hpp"


namespace SDK
{

// Function GA_WuYinQu_HuangShiGaoDi_Environment.GA_WuYinQu_HuangShiGaoDi_Environment_C.ExecuteUbergraph_GA_WuYinQu_HuangShiGaoDi_Environment
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_WuYinQu_HuangShiGaoDi_Environment_C::ExecuteUbergraph_GA_WuYinQu_HuangShiGaoDi_Environment(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WuYinQu_HuangShiGaoDi_Environment_C", "ExecuteUbergraph_GA_WuYinQu_HuangShiGaoDi_Environment");

	Params::GA_WuYinQu_HuangShiGaoDi_Environment_C_ExecuteUbergraph_GA_WuYinQu_HuangShiGaoDi_Environment Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_WuYinQu_HuangShiGaoDi_Environment.GA_WuYinQu_HuangShiGaoDi_Environment_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_WuYinQu_HuangShiGaoDi_Environment_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WuYinQu_HuangShiGaoDi_Environment_C", "K2_OnEndAbility");

	Params::GA_WuYinQu_HuangShiGaoDi_Environment_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_WuYinQu_HuangShiGaoDi_Environment.GA_WuYinQu_HuangShiGaoDi_Environment_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_WuYinQu_HuangShiGaoDi_Environment_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WuYinQu_HuangShiGaoDi_Environment_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_WuYinQu_HuangShiGaoDi_Environment.GA_WuYinQu_HuangShiGaoDi_Environment_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo        ActorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayTagContainer            RelevantTags                                           (Parm, OutParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGA_WuYinQu_HuangShiGaoDi_Environment_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WuYinQu_HuangShiGaoDi_Environment_C", "K2_CanActivateAbility");

	Params::GA_WuYinQu_HuangShiGaoDi_Environment_C_K2_CanActivateAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;
}

}
