#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NA023

#include "Basic.hpp"

#include "BP_CommonSmallAnimal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NA023.BP_NA023_C
// 0x0010 (0x0790 - 0x0780)
class ABP_NA023_C final : public ABP_CommonSmallAnimal_C
{
public:
	class UCapsuleComponent*                      Root;                                              // 0x0780(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NA023_C">();
	}
	static class ABP_NA023_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NA023_C>();
	}
};
static_assert(alignof(ABP_NA023_C) == 0x000010, "Wrong alignment on ABP_NA023_C");
static_assert(sizeof(ABP_NA023_C) == 0x000790, "Wrong size on ABP_NA023_C");
static_assert(offsetof(ABP_NA023_C, Root) == 0x000780, "Member 'ABP_NA023_C::Root' has a wrong offset!");

}
