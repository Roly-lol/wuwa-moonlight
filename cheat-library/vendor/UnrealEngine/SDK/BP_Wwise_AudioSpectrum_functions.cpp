#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Wwise_AudioSpectrum

#include "Basic.hpp"

#include "BP_Wwise_AudioSpectrum_classes.hpp"
#include "BP_Wwise_AudioSpectrum_parameters.hpp"


namespace SDK
{

// Function BP_Wwise_AudioSpectrum.BP_Wwise_AudioSpectrum_C.ExecuteUbergraph_BP_Wwise_AudioSpectrum
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wwise_AudioSpectrum_C::ExecuteUbergraph_BP_Wwise_AudioSpectrum(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Wwise_AudioSpectrum_C", "ExecuteUbergraph_BP_Wwise_AudioSpectrum");

	Params::BP_Wwise_AudioSpectrum_C_ExecuteUbergraph_BP_Wwise_AudioSpectrum Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Wwise_AudioSpectrum.BP_Wwise_AudioSpectrum_C.AkCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkComponent*                     Param_Ak                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*                    AkEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wwise_AudioSpectrum_C::AkCall(class UAkComponent* Param_Ak, class UAkAudioEvent* AkEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Wwise_AudioSpectrum_C", "AkCall");

	Params::BP_Wwise_AudioSpectrum_C_AkCall Parms{};

	Parms.Param_Ak = Param_Ak;
	Parms.AkEvent = AkEvent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Wwise_AudioSpectrum.BP_Wwise_AudioSpectrum_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wwise_AudioSpectrum_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Wwise_AudioSpectrum_C", "ReceiveTick");

	Params::BP_Wwise_AudioSpectrum_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Wwise_AudioSpectrum.BP_Wwise_AudioSpectrum_C.NotifyAnalyser
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkComponent*                     Param_Ak                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*                    AkEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wwise_AudioSpectrum_C::NotifyAnalyser(class UAkComponent* Param_Ak, class UAkAudioEvent* AkEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Wwise_AudioSpectrum_C", "NotifyAnalyser");

	Params::BP_Wwise_AudioSpectrum_C_NotifyAnalyser Parms{};

	Parms.Param_Ak = Param_Ak;
	Parms.AkEvent = AkEvent;

	UObject::ProcessEvent(Func, &Parms);
}

}
