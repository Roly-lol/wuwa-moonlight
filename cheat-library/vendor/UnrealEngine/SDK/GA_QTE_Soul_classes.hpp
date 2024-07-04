#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_QTE_Soul

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_QTE_Soul.GA_QTE_Soul_C
// 0x0010 (0x0540 - 0x0530)
class UGA_QTE_Soul_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_QTE_Soul_C;                      // 0x0530(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ATsBaseCharacter_C*                     __;                                                // 0x0538(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_QTE_Soul(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnCompleted_5D118C384AE61F1C80292E814475B463();
	void OnBlendOut_5D118C384AE61F1C80292E814475B463();
	void OnInterrupted_5D118C384AE61F1C80292E814475B463();
	void OnCancelled_5D118C384AE61F1C80292E814475B463();
	void OnTick_5D118C384AE61F1C80292E814475B463();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_QTE_Soul_C">();
	}
	static class UGA_QTE_Soul_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_QTE_Soul_C>();
	}
};
static_assert(alignof(UGA_QTE_Soul_C) == 0x000008, "Wrong alignment on UGA_QTE_Soul_C");
static_assert(sizeof(UGA_QTE_Soul_C) == 0x000540, "Wrong size on UGA_QTE_Soul_C");
static_assert(offsetof(UGA_QTE_Soul_C, UberGraphFrame_GA_QTE_Soul_C) == 0x000530, "Member 'UGA_QTE_Soul_C::UberGraphFrame_GA_QTE_Soul_C' has a wrong offset!");
static_assert(offsetof(UGA_QTE_Soul_C, __) == 0x000538, "Member 'UGA_QTE_Soul_C::__' has a wrong offset!");

}
