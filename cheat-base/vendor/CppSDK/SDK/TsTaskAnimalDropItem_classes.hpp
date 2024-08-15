#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsTaskAnimalDropItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TsTaskAbortImmediatelyBase_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsTaskAnimalDropItem.TsTaskAnimalDropItem_C
// 0x0010 (0x00C8 - 0x00B8)
class UTsTaskAnimalDropItem_C final : public UTsTaskAbortImmediatelyBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_TsTaskAnimalDropItem_C;             // 0x00B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          DoOnce;                                            // 0x00C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_TsTaskAnimalDropItem(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsTaskAnimalDropItem_C">();
	}
	static class UTsTaskAnimalDropItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsTaskAnimalDropItem_C>();
	}
};
static_assert(alignof(UTsTaskAnimalDropItem_C) == 0x000008, "Wrong alignment on UTsTaskAnimalDropItem_C");
static_assert(sizeof(UTsTaskAnimalDropItem_C) == 0x0000C8, "Wrong size on UTsTaskAnimalDropItem_C");
static_assert(offsetof(UTsTaskAnimalDropItem_C, UberGraphFrame_TsTaskAnimalDropItem_C) == 0x0000B8, "Member 'UTsTaskAnimalDropItem_C::UberGraphFrame_TsTaskAnimalDropItem_C' has a wrong offset!");
static_assert(offsetof(UTsTaskAnimalDropItem_C, DoOnce) == 0x0000C0, "Member 'UTsTaskAnimalDropItem_C::DoOnce' has a wrong offset!");

}
