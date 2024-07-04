#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Passive_Bailian_Rogue

#include "Basic.hpp"

#include "GA_Passive_Bailian_Rogue_classes.hpp"
#include "GA_Passive_Bailian_Rogue_parameters.hpp"


namespace SDK
{

// Function GA_Passive_Bailian_Rogue.GA_Passive_Bailian_Rogue_C.ExecuteUbergraph_GA_Passive_Bailian_Rogue
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Passive_Bailian_Rogue_C::ExecuteUbergraph_GA_Passive_Bailian_Rogue(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_Bailian_Rogue_C", "ExecuteUbergraph_GA_Passive_Bailian_Rogue");

	Params::GA_Passive_Bailian_Rogue_C_ExecuteUbergraph_GA_Passive_Bailian_Rogue Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Passive_Bailian_Rogue.GA_Passive_Bailian_Rogue_C.^��}-
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATsBaseCharacter_C*               _r                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSHitInformation                 __pn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)

void UGA_Passive_Bailian_Rogue_C::____Minus(class ATsBaseCharacter_C* _r, const struct FSHitInformation& __pn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_Bailian_Rogue_C", "^��}-");

	Params::GA_Passive_Bailian_Rogue_C_____Minus Parms{};

	Parms._r = _r;
	Parms.__pn = std::move(__pn);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Passive_Bailian_Rogue.GA_Passive_Bailian_Rogue_C.'�P9
// (BlueprintCallable, BlueprintEvent)

void UGA_Passive_Bailian_Rogue_C::__P9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_Bailian_Rogue_C", "'�P9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Passive_Bailian_Rogue.GA_Passive_Bailian_Rogue_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Passive_Bailian_Rogue_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_Bailian_Rogue_C", "K2_OnEndAbility");

	Params::GA_Passive_Bailian_Rogue_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Passive_Bailian_Rogue.GA_Passive_Bailian_Rogue_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Passive_Bailian_Rogue_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_Bailian_Rogue_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Passive_Bailian_Rogue.GA_Passive_Bailian_Rogue_C.OnFinish_056156B947AA9044B06C73B910D453D4
// (BlueprintCallable, BlueprintEvent)

void UGA_Passive_Bailian_Rogue_C::OnFinish_056156B947AA9044B06C73B910D453D4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_Bailian_Rogue_C", "OnFinish_056156B947AA9044B06C73B910D453D4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Passive_Bailian_Rogue.GA_Passive_Bailian_Rogue_C.OnFinish_24EB8B844D21D066CA74859F896AA054
// (BlueprintCallable, BlueprintEvent)

void UGA_Passive_Bailian_Rogue_C::OnFinish_24EB8B844D21D066CA74859F896AA054()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_Bailian_Rogue_C", "OnFinish_24EB8B844D21D066CA74859F896AA054");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Passive_Bailian_Rogue.GA_Passive_Bailian_Rogue_C.EventReceived_18B59F5945020DB23C42FD885280A0D0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Passive_Bailian_Rogue_C::EventReceived_18B59F5945020DB23C42FD885280A0D0(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_Bailian_Rogue_C", "EventReceived_18B59F5945020DB23C42FD885280A0D0");

	Params::GA_Passive_Bailian_Rogue_C_EventReceived_18B59F5945020DB23C42FD885280A0D0 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Passive_Bailian_Rogue.GA_Passive_Bailian_Rogue_C.OnFinish_B092FC5E4D581E3C0790AE86EF80D3BB
// (BlueprintCallable, BlueprintEvent)

void UGA_Passive_Bailian_Rogue_C::OnFinish_B092FC5E4D581E3C0790AE86EF80D3BB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_Bailian_Rogue_C", "OnFinish_B092FC5E4D581E3C0790AE86EF80D3BB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Passive_Bailian_Rogue.GA_Passive_Bailian_Rogue_C.OnFinish_704CBA004A3FA84A92CA06919C4280A9
// (BlueprintCallable, BlueprintEvent)

void UGA_Passive_Bailian_Rogue_C::OnFinish_704CBA004A3FA84A92CA06919C4280A9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_Bailian_Rogue_C", "OnFinish_704CBA004A3FA84A92CA06919C4280A9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Passive_Bailian_Rogue.GA_Passive_Bailian_Rogue_C.Removed_DB9F64004F8908FEAD99D381F3D22D70
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     Tag                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UGA_Passive_Bailian_Rogue_C::Removed_DB9F64004F8908FEAD99D381F3D22D70(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_Bailian_Rogue_C", "Removed_DB9F64004F8908FEAD99D381F3D22D70");

	Params::GA_Passive_Bailian_Rogue_C_Removed_DB9F64004F8908FEAD99D381F3D22D70 Parms{};

	Parms.Tag = std::move(Tag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Passive_Bailian_Rogue.GA_Passive_Bailian_Rogue_C.EventReceived_18B59F5945020DB23C42FD8859D1CA2E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Passive_Bailian_Rogue_C::EventReceived_18B59F5945020DB23C42FD8859D1CA2E(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_Bailian_Rogue_C", "EventReceived_18B59F5945020DB23C42FD8859D1CA2E");

	Params::GA_Passive_Bailian_Rogue_C_EventReceived_18B59F5945020DB23C42FD8859D1CA2E Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Passive_Bailian_Rogue.GA_Passive_Bailian_Rogue_C.EventReceived_18B59F5945020DB23C42FD887802422F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Passive_Bailian_Rogue_C::EventReceived_18B59F5945020DB23C42FD887802422F(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_Bailian_Rogue_C", "EventReceived_18B59F5945020DB23C42FD887802422F");

	Params::GA_Passive_Bailian_Rogue_C_EventReceived_18B59F5945020DB23C42FD887802422F Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Passive_Bailian_Rogue.GA_Passive_Bailian_Rogue_C.EventReceived_18B59F5945020DB23C42FD883DA72164
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Passive_Bailian_Rogue_C::EventReceived_18B59F5945020DB23C42FD883DA72164(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_Bailian_Rogue_C", "EventReceived_18B59F5945020DB23C42FD883DA72164");

	Params::GA_Passive_Bailian_Rogue_C_EventReceived_18B59F5945020DB23C42FD883DA72164 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Passive_Bailian_Rogue.GA_Passive_Bailian_Rogue_C.EventReceived_18B59F5945020DB23C42FD88764B4BC3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Passive_Bailian_Rogue_C::EventReceived_18B59F5945020DB23C42FD88764B4BC3(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Passive_Bailian_Rogue_C", "EventReceived_18B59F5945020DB23C42FD88764B4BC3");

	Params::GA_Passive_Bailian_Rogue_C_EventReceived_18B59F5945020DB23C42FD88764B4BC3 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

}
