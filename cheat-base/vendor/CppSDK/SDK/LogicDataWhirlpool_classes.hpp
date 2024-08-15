#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LogicDataWhirlpool

#include "Basic.hpp"

#include "LogicDataBase_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass LogicDataWhirlpool.LogicDataWhirlpool_C
// 0x0008 (0x0048 - 0x0040)
class ULogicDataWhirlpool_C final : public ULogicDataBase_C
{
public:
	uint8                                         Pad_2512[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         WeightLimit;                                       // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                         MoveTime;                                          // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LogicDataWhirlpool_C">();
	}
	static class ULogicDataWhirlpool_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULogicDataWhirlpool_C>();
	}
};
static_assert(alignof(ULogicDataWhirlpool_C) == 0x000008, "Wrong alignment on ULogicDataWhirlpool_C");
static_assert(sizeof(ULogicDataWhirlpool_C) == 0x000048, "Wrong size on ULogicDataWhirlpool_C");
static_assert(offsetof(ULogicDataWhirlpool_C, WeightLimit) == 0x00003C, "Member 'ULogicDataWhirlpool_C::WeightLimit' has a wrong offset!");
static_assert(offsetof(ULogicDataWhirlpool_C, MoveTime) == 0x000040, "Member 'ULogicDataWhirlpool_C::MoveTime' has a wrong offset!");

}
