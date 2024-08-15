#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KuroInput

#include "Basic.hpp"

#include "KuroInput_classes.hpp"
#include "KuroInput_parameters.hpp"


namespace SDK
{

// Function KuroInput.BasePlayerController.SetKuroForceFeedbackConfig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EGlobalKuroForceFeedbackType            FeedbackConfig                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   GlobalFeedbackCoef                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABasePlayerController::SetKuroForceFeedbackConfig(EGlobalKuroForceFeedbackType FeedbackConfig, int32 GlobalFeedbackCoef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BasePlayerController", "SetKuroForceFeedbackConfig");

	Params::BasePlayerController_SetKuroForceFeedbackConfig Parms{};

	Parms.FeedbackConfig = FeedbackConfig;
	Parms.GlobalFeedbackCoef = GlobalFeedbackCoef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function KuroInput.BasePlayerController.AddActionBinding
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                             ActionName                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EInputEvent                             KeyEvent                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                          Object                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             FuncName                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABasePlayerController::AddActionBinding(const class FName& ActionName, const EInputEvent KeyEvent, class UObject* Object, const class FName& FuncName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasePlayerController", "AddActionBinding");

	Params::BasePlayerController_AddActionBinding Parms{};

	Parms.ActionName = ActionName;
	Parms.KeyEvent = KeyEvent;
	Parms.Object = Object;
	Parms.FuncName = FuncName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function KuroInput.BasePlayerController.AddAxisBinding
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                             AxisName                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                          Object                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             FuncName                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABasePlayerController::AddAxisBinding(const class FName& AxisName, class UObject* Object, const class FName& FuncName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasePlayerController", "AddAxisBinding");

	Params::BasePlayerController_AddAxisBinding Parms{};

	Parms.AxisName = AxisName;
	Parms.Object = Object;
	Parms.FuncName = FuncName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function KuroInput.BasePlayerController.AddKeyBinding
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInputChord                      Chord                                                  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EInputEvent                             KeyEvent                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                          Object                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             FuncName                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABasePlayerController::AddKeyBinding(const struct FInputChord& Chord, const EInputEvent KeyEvent, class UObject* Object, const class FName& FuncName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasePlayerController", "AddKeyBinding");

	Params::BasePlayerController_AddKeyBinding Parms{};

	Parms.Chord = std::move(Chord);
	Parms.KeyEvent = KeyEvent;
	Parms.Object = Object;
	Parms.FuncName = FuncName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function KuroInput.BasePlayerController.AddTouchBinding
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// EInputEvent                             KeyEvent                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                          Object                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             FuncName                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABasePlayerController::AddTouchBinding(const EInputEvent KeyEvent, class UObject* Object, const class FName& FuncName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasePlayerController", "AddTouchBinding");

	Params::BasePlayerController_AddTouchBinding Parms{};

	Parms.KeyEvent = KeyEvent;
	Parms.Object = Object;
	Parms.FuncName = FuncName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function KuroInput.BasePlayerController.ClearActionBindings
// (Final, Native, Public, BlueprintCallable)

void ABasePlayerController::ClearActionBindings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasePlayerController", "ClearActionBindings");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function KuroInput.BasePlayerController.ClearAxisBindings
// (Final, Native, Public, BlueprintCallable)

void ABasePlayerController::ClearAxisBindings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasePlayerController", "ClearAxisBindings");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function KuroInput.BasePlayerController.ClearKeyBindings
// (Final, Native, Public, BlueprintCallable)

void ABasePlayerController::ClearKeyBindings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasePlayerController", "ClearKeyBindings");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function KuroInput.BasePlayerController.ClearTouchBindings
// (Final, Native, Public, BlueprintCallable)

void ABasePlayerController::ClearTouchBindings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasePlayerController", "ClearTouchBindings");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function KuroInput.BasePlayerController.FlushPressedKeys
// (Final, Native, Public, BlueprintCallable)

void ABasePlayerController::FlushPressedKeys()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasePlayerController", "FlushPressedKeys");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function KuroInput.BasePlayerController.OnReceivedPlayer
// (Event, Public, BlueprintEvent)

void ABasePlayerController::OnReceivedPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasePlayerController", "OnReceivedPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KuroInput.BasePlayerController.PlayKuroForceFeedback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UKuroForceFeedbackEffect*         ForceFeedbackEffect                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             Tag                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bLooping                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bIgnoreTimeDilation                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bPlayWhilePaused                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABasePlayerController::PlayKuroForceFeedback(class UKuroForceFeedbackEffect* ForceFeedbackEffect, class FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasePlayerController", "PlayKuroForceFeedback");

	Params::BasePlayerController_PlayKuroForceFeedback Parms{};

	Parms.ForceFeedbackEffect = ForceFeedbackEffect;
	Parms.Tag = Tag;
	Parms.bLooping = bLooping;
	Parms.bIgnoreTimeDilation = bIgnoreTimeDilation;
	Parms.bPlayWhilePaused = bPlayWhilePaused;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function KuroInput.BasePlayerController.ReceiveOnDeviceChanged
// (Event, Public, BlueprintEvent)

void ABasePlayerController::ReceiveOnDeviceChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasePlayerController", "ReceiveOnDeviceChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KuroInput.BasePlayerController.ReceivePostProcessInput
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bGamePaused                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABasePlayerController::ReceivePostProcessInput(const float DeltaTime, const bool bGamePaused)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasePlayerController", "ReceivePostProcessInput");

	Params::BasePlayerController_ReceivePostProcessInput Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.bGamePaused = bGamePaused;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KuroInput.BasePlayerController.ReceivePreProcessInput
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bGamePaused                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABasePlayerController::ReceivePreProcessInput(const float DeltaTime, const bool bGamePaused)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasePlayerController", "ReceivePreProcessInput");

	Params::BasePlayerController_ReceivePreProcessInput Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.bGamePaused = bGamePaused;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KuroInput.BasePlayerController.ReceiveSetupInputComponent
// (Event, Public, BlueprintEvent)

void ABasePlayerController::ReceiveSetupInputComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasePlayerController", "ReceiveSetupInputComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KuroInput.BasePlayerController.StopKuroForceFeedback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UKuroForceFeedbackEffect*         ForceFeedbackEffect                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             Tag                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABasePlayerController::StopKuroForceFeedback(class UKuroForceFeedbackEffect* ForceFeedbackEffect, class FName Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasePlayerController", "StopKuroForceFeedback");

	Params::BasePlayerController_StopKuroForceFeedback Parms{};

	Parms.ForceFeedbackEffect = ForceFeedbackEffect;
	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function KuroInput.KuroInputFunctionLibrary.ApplyInputMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*                InPlayerController                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKuroInputFunctionLibrary::ApplyInputMode(class APlayerController* InPlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KuroInputFunctionLibrary", "ApplyInputMode");

	Params::KuroInputFunctionLibrary_ApplyInputMode Parms{};

	Parms.InPlayerController = InPlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function KuroInput.KuroInputFunctionLibrary.ClearInputModeReply
// (Final, Native, Static, Public, BlueprintCallable)

void UKuroInputFunctionLibrary::ClearInputModeReply()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KuroInputFunctionLibrary", "ClearInputModeReply");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function KuroInput.KuroInputFunctionLibrary.HasInputModeReply
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FInputModeReply                  InputModeReply                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UKuroInputFunctionLibrary::HasInputModeReply(const struct FInputModeReply& InputModeReply)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KuroInputFunctionLibrary", "HasInputModeReply");

	Params::KuroInputFunctionLibrary_HasInputModeReply Parms{};

	Parms.InputModeReply = std::move(InputModeReply);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function KuroInput.KuroInputFunctionLibrary.ReplyInputMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*                InPlayerController                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputModeReply                  InputModeReply                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKuroInputFunctionLibrary::ReplyInputMode(class APlayerController* InPlayerController, const struct FInputModeReply& InputModeReply)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KuroInputFunctionLibrary", "ReplyInputMode");

	Params::KuroInputFunctionLibrary_ReplyInputMode Parms{};

	Parms.InPlayerController = InPlayerController;
	Parms.InputModeReply = std::move(InputModeReply);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function KuroInput.KuroInputFunctionLibrary.ResetInputMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*                InPlayerController                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKuroInputFunctionLibrary::ResetInputMode(class APlayerController* InPlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KuroInputFunctionLibrary", "ResetInputMode");

	Params::KuroInputFunctionLibrary_ResetInputMode Parms{};

	Parms.InPlayerController = InPlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function KuroInput.KuroInputFunctionLibrary.SetGameAndUIInputMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*                InPlayerController                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Reason                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bLockMouseToViewport                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bHideCursorDuringCapture                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputModeReply                  ReturnValue                                            (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FInputModeReply UKuroInputFunctionLibrary::SetGameAndUIInputMode(class APlayerController* InPlayerController, const class FString& Reason, bool bLockMouseToViewport, bool bHideCursorDuringCapture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KuroInputFunctionLibrary", "SetGameAndUIInputMode");

	Params::KuroInputFunctionLibrary_SetGameAndUIInputMode Parms{};

	Parms.InPlayerController = InPlayerController;
	Parms.Reason = std::move(Reason);
	Parms.bLockMouseToViewport = bLockMouseToViewport;
	Parms.bHideCursorDuringCapture = bHideCursorDuringCapture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function KuroInput.KuroInputFunctionLibrary.SetGameOnlyInputMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*                InPlayerController                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Reason                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputModeReply                  ReturnValue                                            (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FInputModeReply UKuroInputFunctionLibrary::SetGameOnlyInputMode(class APlayerController* InPlayerController, const class FString& Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KuroInputFunctionLibrary", "SetGameOnlyInputMode");

	Params::KuroInputFunctionLibrary_SetGameOnlyInputMode Parms{};

	Parms.InPlayerController = InPlayerController;
	Parms.Reason = std::move(Reason);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function KuroInput.KuroInputFunctionLibrary.SetUIOnlyInputMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*                InPlayerController                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Reason                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bLockMouseToViewport                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputModeReply                  ReturnValue                                            (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FInputModeReply UKuroInputFunctionLibrary::SetUIOnlyInputMode(class APlayerController* InPlayerController, const class FString& Reason, bool bLockMouseToViewport)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KuroInputFunctionLibrary", "SetUIOnlyInputMode");

	Params::KuroInputFunctionLibrary_SetUIOnlyInputMode Parms{};

	Parms.InPlayerController = InPlayerController;
	Parms.Reason = std::move(Reason);
	Parms.bLockMouseToViewport = bLockMouseToViewport;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
