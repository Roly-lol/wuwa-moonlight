#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ME1JiancuxiongMd00001_Attack09

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Monster_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_ME1JiancuxiongMd00001_Attack09.GA_ME1JiancuxiongMd00001_Attack09_C
// 0x0008 (0x0570 - 0x0568)
class UGA_ME1JiancuxiongMd00001_Attack09_C final : public UGA_Monster_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_ME1JiancuxiongMd00001_Attack09_C; // 0x0568(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_ME1JiancuxiongMd00001_Attack09(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnCompleted_5D118C384AE61F1C80292E8103822385();
	void OnBlendOut_5D118C384AE61F1C80292E8103822385();
	void OnInterrupted_5D118C384AE61F1C80292E8103822385();
	void OnCancelled_5D118C384AE61F1C80292E8103822385();
	void OnTick_5D118C384AE61F1C80292E8103822385();
	void OnCompleted_5D118C384AE61F1C80292E812127A01D();
	void OnBlendOut_5D118C384AE61F1C80292E812127A01D();
	void OnInterrupted_5D118C384AE61F1C80292E812127A01D();
	void OnCancelled_5D118C384AE61F1C80292E812127A01D();
	void OnTick_5D118C384AE61F1C80292E812127A01D();
	void OnCompleted_5D118C384AE61F1C80292E810760FAFF();
	void OnBlendOut_5D118C384AE61F1C80292E810760FAFF();
	void OnInterrupted_5D118C384AE61F1C80292E810760FAFF();
	void OnCancelled_5D118C384AE61F1C80292E810760FAFF();
	void OnTick_5D118C384AE61F1C80292E810760FAFF();
	void OnCompleted_5D118C384AE61F1C80292E8156C81060();
	void OnBlendOut_5D118C384AE61F1C80292E8156C81060();
	void OnInterrupted_5D118C384AE61F1C80292E8156C81060();
	void OnCancelled_5D118C384AE61F1C80292E8156C81060();
	void OnTick_5D118C384AE61F1C80292E8156C81060();
	void OnCompleted_5D118C384AE61F1C80292E81191B2D7B();
	void OnBlendOut_5D118C384AE61F1C80292E81191B2D7B();
	void OnInterrupted_5D118C384AE61F1C80292E81191B2D7B();
	void OnCancelled_5D118C384AE61F1C80292E81191B2D7B();
	void OnTick_5D118C384AE61F1C80292E81191B2D7B();
	void OnCompleted_5D118C384AE61F1C80292E81E5D9A011();
	void OnBlendOut_5D118C384AE61F1C80292E81E5D9A011();
	void OnInterrupted_5D118C384AE61F1C80292E81E5D9A011();
	void OnCancelled_5D118C384AE61F1C80292E81E5D9A011();
	void OnTick_5D118C384AE61F1C80292E81E5D9A011();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_ME1JiancuxiongMd00001_Attack09_C">();
	}
	static class UGA_ME1JiancuxiongMd00001_Attack09_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_ME1JiancuxiongMd00001_Attack09_C>();
	}
};
static_assert(alignof(UGA_ME1JiancuxiongMd00001_Attack09_C) == 0x000008, "Wrong alignment on UGA_ME1JiancuxiongMd00001_Attack09_C");
static_assert(sizeof(UGA_ME1JiancuxiongMd00001_Attack09_C) == 0x000570, "Wrong size on UGA_ME1JiancuxiongMd00001_Attack09_C");
static_assert(offsetof(UGA_ME1JiancuxiongMd00001_Attack09_C, UberGraphFrame_GA_ME1JiancuxiongMd00001_Attack09_C) == 0x000568, "Member 'UGA_ME1JiancuxiongMd00001_Attack09_C::UberGraphFrame_GA_ME1JiancuxiongMd00001_Attack09_C' has a wrong offset!");

}
