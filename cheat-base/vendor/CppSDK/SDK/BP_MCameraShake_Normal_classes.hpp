#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MCameraShake_Normal

#include "Basic.hpp"

#include "KuroAnim_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MCameraShake_Normal.BP_MCameraShake_Normal_C
// 0x0000 (0x01D0 - 0x01D0)
class UBP_MCameraShake_Normal_C final : public UKuroCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MCameraShake_Normal_C">();
	}
	static class UBP_MCameraShake_Normal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MCameraShake_Normal_C>();
	}
};
static_assert(alignof(UBP_MCameraShake_Normal_C) == 0x000010, "Wrong alignment on UBP_MCameraShake_Normal_C");
static_assert(sizeof(UBP_MCameraShake_Normal_C) == 0x0001D0, "Wrong size on UBP_MCameraShake_Normal_C");

}
