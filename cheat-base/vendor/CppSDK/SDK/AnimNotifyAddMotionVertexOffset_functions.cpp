#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotifyAddMotionVertexOffset

#include "Basic.hpp"

#include "AnimNotifyAddMotionVertexOffset_classes.hpp"
#include "AnimNotifyAddMotionVertexOffset_parameters.hpp"


namespace SDK
{

// Function AnimNotifyAddMotionVertexOffset.AnimNotifyAddMotionVertexOffset_C.GetNotifyName
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UAnimNotifyAddMotionVertexOffset_C::GetNotifyName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotifyAddMotionVertexOffset_C", "GetNotifyName");

	Params::AnimNotifyAddMotionVertexOffset_C_GetNotifyName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
