#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Role_Suyan

#include "Basic.hpp"

#include "GA_Role_Suyan_classes.hpp"
#include "GA_Role_Suyan_parameters.hpp"


namespace SDK
{

// Function GA_Role_Suyan.GA_Role_Suyan_C.ExecuteUbergraph_GA_Role_Suyan
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Role_Suyan_C::ExecuteUbergraph_GA_Role_Suyan(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_Suyan_C", "ExecuteUbergraph_GA_Role_Suyan");

	Params::GA_Role_Suyan_C_ExecuteUbergraph_GA_Role_Suyan Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Role_Suyan.GA_Role_Suyan_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Role_Suyan_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_Suyan_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}
