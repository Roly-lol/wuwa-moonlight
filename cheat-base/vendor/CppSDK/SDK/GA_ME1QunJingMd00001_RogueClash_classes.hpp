#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ME1QunJingMd00001_RogueClash

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Monster_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_ME1QunJingMd00001_RogueClash.GA_ME1QunJingMd00001_RogueClash_C
// 0x0010 (0x0578 - 0x0568)
class UGA_ME1QunJingMd00001_RogueClash_C final : public UGA_Monster_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_ME1QunJingMd00001_RogueClash_C;  // 0x0568(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          ___b___;                                           // 0x0570(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ___b____0;                                         // 0x0571(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GA_ME1QunJingMd00001_RogueClash(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnCompleted_5D118C384AE61F1C80292E81E58CA961();
	void OnBlendOut_5D118C384AE61F1C80292E81E58CA961();
	void OnInterrupted_5D118C384AE61F1C80292E81E58CA961();
	void OnCancelled_5D118C384AE61F1C80292E81E58CA961();
	void OnTick_5D118C384AE61F1C80292E81E58CA961();
	void OnCompleted_5D118C384AE61F1C80292E8150EB6D81();
	void OnBlendOut_5D118C384AE61F1C80292E8150EB6D81();
	void OnInterrupted_5D118C384AE61F1C80292E8150EB6D81();
	void OnCancelled_5D118C384AE61F1C80292E8150EB6D81();
	void OnTick_5D118C384AE61F1C80292E8150EB6D81();
	void OnCompleted_5D118C384AE61F1C80292E81959B412F();
	void OnBlendOut_5D118C384AE61F1C80292E81959B412F();
	void OnInterrupted_5D118C384AE61F1C80292E81959B412F();
	void OnCancelled_5D118C384AE61F1C80292E81959B412F();
	void OnTick_5D118C384AE61F1C80292E81959B412F();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_ME1QunJingMd00001_RogueClash_C">();
	}
	static class UGA_ME1QunJingMd00001_RogueClash_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_ME1QunJingMd00001_RogueClash_C>();
	}
};
static_assert(alignof(UGA_ME1QunJingMd00001_RogueClash_C) == 0x000008, "Wrong alignment on UGA_ME1QunJingMd00001_RogueClash_C");
static_assert(sizeof(UGA_ME1QunJingMd00001_RogueClash_C) == 0x000578, "Wrong size on UGA_ME1QunJingMd00001_RogueClash_C");
static_assert(offsetof(UGA_ME1QunJingMd00001_RogueClash_C, UberGraphFrame_GA_ME1QunJingMd00001_RogueClash_C) == 0x000568, "Member 'UGA_ME1QunJingMd00001_RogueClash_C::UberGraphFrame_GA_ME1QunJingMd00001_RogueClash_C' has a wrong offset!");
static_assert(offsetof(UGA_ME1QunJingMd00001_RogueClash_C, ___b___) == 0x000570, "Member 'UGA_ME1QunJingMd00001_RogueClash_C::___b___' has a wrong offset!");
static_assert(offsetof(UGA_ME1QunJingMd00001_RogueClash_C, ___b____0) == 0x000571, "Member 'UGA_ME1QunJingMd00001_RogueClash_C::___b____0' has a wrong offset!");

}
