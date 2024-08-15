#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsTaskBattleWander

#include "Basic.hpp"


namespace SDK::Params
{

// Function TsTaskBattleWander.TsTaskBattleWander_C.ExecuteUbergraph_TsTaskBattleWander
// 0x0030 (0x0030 - 0x0000)
struct TsTaskBattleWander_C_ExecuteUbergraph_TsTaskBattleWander final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2691[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2692[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController_1;                    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsTaskBattleWander_C_ExecuteUbergraph_TsTaskBattleWander) == 0x000008, "Wrong alignment on TsTaskBattleWander_C_ExecuteUbergraph_TsTaskBattleWander");
static_assert(sizeof(TsTaskBattleWander_C_ExecuteUbergraph_TsTaskBattleWander) == 0x000030, "Wrong size on TsTaskBattleWander_C_ExecuteUbergraph_TsTaskBattleWander");
static_assert(offsetof(TsTaskBattleWander_C_ExecuteUbergraph_TsTaskBattleWander, EntryPoint) == 0x000000, "Member 'TsTaskBattleWander_C_ExecuteUbergraph_TsTaskBattleWander::EntryPoint' has a wrong offset!");
static_assert(offsetof(TsTaskBattleWander_C_ExecuteUbergraph_TsTaskBattleWander, K2Node_Event_OwnerController) == 0x000008, "Member 'TsTaskBattleWander_C_ExecuteUbergraph_TsTaskBattleWander::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(TsTaskBattleWander_C_ExecuteUbergraph_TsTaskBattleWander, K2Node_Event_ControlledPawn) == 0x000010, "Member 'TsTaskBattleWander_C_ExecuteUbergraph_TsTaskBattleWander::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(TsTaskBattleWander_C_ExecuteUbergraph_TsTaskBattleWander, K2Node_Event_DeltaSeconds) == 0x000018, "Member 'TsTaskBattleWander_C_ExecuteUbergraph_TsTaskBattleWander::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(TsTaskBattleWander_C_ExecuteUbergraph_TsTaskBattleWander, K2Node_Event_OwnerController_1) == 0x000020, "Member 'TsTaskBattleWander_C_ExecuteUbergraph_TsTaskBattleWander::K2Node_Event_OwnerController_1' has a wrong offset!");
static_assert(offsetof(TsTaskBattleWander_C_ExecuteUbergraph_TsTaskBattleWander, K2Node_Event_ControlledPawn_1) == 0x000028, "Member 'TsTaskBattleWander_C_ExecuteUbergraph_TsTaskBattleWander::K2Node_Event_ControlledPawn_1' has a wrong offset!");

// Function TsTaskBattleWander.TsTaskBattleWander_C.ReceiveTickAI
// 0x0018 (0x0018 - 0x0000)
struct TsTaskBattleWander_C_ReceiveTickAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsTaskBattleWander_C_ReceiveTickAI) == 0x000008, "Wrong alignment on TsTaskBattleWander_C_ReceiveTickAI");
static_assert(sizeof(TsTaskBattleWander_C_ReceiveTickAI) == 0x000018, "Wrong size on TsTaskBattleWander_C_ReceiveTickAI");
static_assert(offsetof(TsTaskBattleWander_C_ReceiveTickAI, OwnerController) == 0x000000, "Member 'TsTaskBattleWander_C_ReceiveTickAI::OwnerController' has a wrong offset!");
static_assert(offsetof(TsTaskBattleWander_C_ReceiveTickAI, ControlledPawn) == 0x000008, "Member 'TsTaskBattleWander_C_ReceiveTickAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(TsTaskBattleWander_C_ReceiveTickAI, DeltaSeconds) == 0x000010, "Member 'TsTaskBattleWander_C_ReceiveTickAI::DeltaSeconds' has a wrong offset!");

// Function TsTaskBattleWander.TsTaskBattleWander_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct TsTaskBattleWander_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsTaskBattleWander_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on TsTaskBattleWander_C_ReceiveExecuteAI");
static_assert(sizeof(TsTaskBattleWander_C_ReceiveExecuteAI) == 0x000010, "Wrong size on TsTaskBattleWander_C_ReceiveExecuteAI");
static_assert(offsetof(TsTaskBattleWander_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'TsTaskBattleWander_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(TsTaskBattleWander_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'TsTaskBattleWander_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

}
