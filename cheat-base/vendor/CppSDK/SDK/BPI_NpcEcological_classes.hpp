#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_NpcEcological

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_NpcEcological.BPI_NpcEcological_C
// 0x0000 (0x0030 - 0x0030)
class IBPI_NpcEcological_C final : public IInterface
{
public:
	void HandleWeatherChanged();
	void HandleDayStateChanged();
	void HandleQuestChanged();
	void HandlePlayerEnter();
	void HandlePlayerExit();
	void HandlePlayerImpact();
	void HandlePlayerImpactEnd();
	void HandlePlayerAttack();
	void HandlePlayerAttackEnd();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_NpcEcological_C">();
	}
	static class IBPI_NpcEcological_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_NpcEcological_C>();
	}
};
static_assert(alignof(IBPI_NpcEcological_C) == 0x000008, "Wrong alignment on IBPI_NpcEcological_C");
static_assert(sizeof(IBPI_NpcEcological_C) == 0x000030, "Wrong size on IBPI_NpcEcological_C");

}
