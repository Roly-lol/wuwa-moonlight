#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_CommonMaleXL_AimShoot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_CommonMaleXL_AimShoot.GA_CommonMaleXL_AimShoot_C
// 0x0010 (0x0568 - 0x0558)
class UGA_CommonMaleXL_AimShoot_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_CommonMaleXL_AimShoot_C;         // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ATsBaseCharacter_C*                     _r;                                                // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_CommonMaleXL_AimShoot(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_CommonMaleXL_AimShoot_C">();
	}
	static class UGA_CommonMaleXL_AimShoot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_CommonMaleXL_AimShoot_C>();
	}
};
static_assert(alignof(UGA_CommonMaleXL_AimShoot_C) == 0x000008, "Wrong alignment on UGA_CommonMaleXL_AimShoot_C");
static_assert(sizeof(UGA_CommonMaleXL_AimShoot_C) == 0x000568, "Wrong size on UGA_CommonMaleXL_AimShoot_C");
static_assert(offsetof(UGA_CommonMaleXL_AimShoot_C, UberGraphFrame_GA_CommonMaleXL_AimShoot_C) == 0x000558, "Member 'UGA_CommonMaleXL_AimShoot_C::UberGraphFrame_GA_CommonMaleXL_AimShoot_C' has a wrong offset!");
static_assert(offsetof(UGA_CommonMaleXL_AimShoot_C, _r) == 0x000560, "Member 'UGA_CommonMaleXL_AimShoot_C::_r' has a wrong offset!");

}
