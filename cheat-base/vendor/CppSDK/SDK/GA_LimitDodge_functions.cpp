#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_LimitDodge

#include "Basic.hpp"

#include "GA_LimitDodge_classes.hpp"
#include "GA_LimitDodge_parameters.hpp"


namespace SDK
{

// Function GA_LimitDodge.GA_LimitDodge_C.ExecuteUbergraph_GA_LimitDodge
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LimitDodge_C::ExecuteUbergraph_GA_LimitDodge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_LimitDodge_C", "ExecuteUbergraph_GA_LimitDodge");

	Params::GA_LimitDodge_C_ExecuteUbergraph_GA_LimitDodge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_LimitDodge.GA_LimitDodge_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_LimitDodge_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_LimitDodge_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_LimitDodge.GA_LimitDodge_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_LimitDodge_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_LimitDodge_C", "K2_OnEndAbility");

	Params::GA_LimitDodge_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

}
