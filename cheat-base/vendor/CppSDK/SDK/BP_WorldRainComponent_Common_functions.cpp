#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WorldRainComponent_Common

#include "Basic.hpp"

#include "BP_WorldRainComponent_Common_classes.hpp"
#include "BP_WorldRainComponent_Common_parameters.hpp"


namespace SDK
{

// Function BP_WorldRainComponent_Common.BP_WorldRainComponent_Common_C.OnReceiveStartRain
// (Event, Public, BlueprintEvent)

void UBP_WorldRainComponent_Common_C::OnReceiveStartRain()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WorldRainComponent_Common_C", "OnReceiveStartRain");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WorldRainComponent_Common.BP_WorldRainComponent_Common_C.OnReceiveDeactivateRain
// (Event, Public, BlueprintEvent)

void UBP_WorldRainComponent_Common_C::OnReceiveDeactivateRain()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WorldRainComponent_Common_C", "OnReceiveDeactivateRain");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WorldRainComponent_Common.BP_WorldRainComponent_Common_C.ExecuteUbergraph_BP_WorldRainComponent_Common
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WorldRainComponent_Common_C::ExecuteUbergraph_BP_WorldRainComponent_Common(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WorldRainComponent_Common_C", "ExecuteUbergraph_BP_WorldRainComponent_Common");

	Params::BP_WorldRainComponent_Common_C_ExecuteUbergraph_BP_WorldRainComponent_Common Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
