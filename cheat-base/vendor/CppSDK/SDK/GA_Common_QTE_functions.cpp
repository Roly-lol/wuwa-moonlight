#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Common_QTE

#include "Basic.hpp"

#include "GA_Common_QTE_classes.hpp"
#include "GA_Common_QTE_parameters.hpp"


namespace SDK
{

// Function GA_Common_QTE.GA_Common_QTE_C.ExecuteUbergraph_GA_Common_QTE
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Common_QTE_C::ExecuteUbergraph_GA_Common_QTE(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Common_QTE_C", "ExecuteUbergraph_GA_Common_QTE");

	Params::GA_Common_QTE_C_ExecuteUbergraph_GA_Common_QTE Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Common_QTE.GA_Common_QTE_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Common_QTE_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Common_QTE_C", "K2_OnEndAbility");

	Params::GA_Common_QTE_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Common_QTE.GA_Common_QTE_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Common_QTE_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Common_QTE_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Common_QTE.GA_Common_QTE_C.EventReceived_E8C2FC224B0A82D0076DE58540825291
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Common_QTE_C::EventReceived_E8C2FC224B0A82D0076DE58540825291(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Common_QTE_C", "EventReceived_E8C2FC224B0A82D0076DE58540825291");

	Params::GA_Common_QTE_C_EventReceived_E8C2FC224B0A82D0076DE58540825291 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Common_QTE.GA_Common_QTE_C.OnCompleted_5D118C384AE61F1C80292E81AB2AB65B
// (BlueprintCallable, BlueprintEvent)

void UGA_Common_QTE_C::OnCompleted_5D118C384AE61F1C80292E81AB2AB65B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Common_QTE_C", "OnCompleted_5D118C384AE61F1C80292E81AB2AB65B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Common_QTE.GA_Common_QTE_C.OnBlendOut_5D118C384AE61F1C80292E81AB2AB65B
// (BlueprintCallable, BlueprintEvent)

void UGA_Common_QTE_C::OnBlendOut_5D118C384AE61F1C80292E81AB2AB65B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Common_QTE_C", "OnBlendOut_5D118C384AE61F1C80292E81AB2AB65B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Common_QTE.GA_Common_QTE_C.OnInterrupted_5D118C384AE61F1C80292E81AB2AB65B
// (BlueprintCallable, BlueprintEvent)

void UGA_Common_QTE_C::OnInterrupted_5D118C384AE61F1C80292E81AB2AB65B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Common_QTE_C", "OnInterrupted_5D118C384AE61F1C80292E81AB2AB65B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Common_QTE.GA_Common_QTE_C.OnCancelled_5D118C384AE61F1C80292E81AB2AB65B
// (BlueprintCallable, BlueprintEvent)

void UGA_Common_QTE_C::OnCancelled_5D118C384AE61F1C80292E81AB2AB65B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Common_QTE_C", "OnCancelled_5D118C384AE61F1C80292E81AB2AB65B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Common_QTE.GA_Common_QTE_C.OnTick_5D118C384AE61F1C80292E81AB2AB65B
// (BlueprintCallable, BlueprintEvent)

void UGA_Common_QTE_C::OnTick_5D118C384AE61F1C80292E81AB2AB65B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Common_QTE_C", "OnTick_5D118C384AE61F1C80292E81AB2AB65B");

	UObject::ProcessEvent(Func, nullptr);
}

}
