#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InteractFoliageManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_InteractFoliageManager.BP_InteractFoliageManager_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_InteractFoliageManager_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_InteractFoliageManager_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_InteractFoliageManager_C_ReceiveTick");
static_assert(sizeof(BP_InteractFoliageManager_C_ReceiveTick) == 0x000004, "Wrong size on BP_InteractFoliageManager_C_ReceiveTick");
static_assert(offsetof(BP_InteractFoliageManager_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_InteractFoliageManager_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_InteractFoliageManager.BP_InteractFoliageManager_C.ExecuteUbergraph_BP_InteractFoliageManager
// 0x0180 (0x0180 - 0x0000)
struct BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0028)(ZeroConstructor)
	bool                                          ___bool_Has_Been_Initd_Variable;                   // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          ___bool_IsClosed_Variable;                         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ___bool_Has_Been_Initd_Variable_1;                 // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ___bool_Variable;                                  // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48[0x8];                                       // 0x0048(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetBaseCharacterTransform_ReturnValue;    // 0x0050(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x008C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x00A4(0x0094)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_GetScalarParameterValue_ReturnValue;      // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ___bool_IsClosed_Variable_1;                       // 0x013D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_13E[0x2];                                      // 0x013E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location_1;                // 0x0140(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;                // 0x014C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_1;                   // 0x0158(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x0164(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager) == 0x000010, "Wrong alignment on BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager");
static_assert(sizeof(BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager) == 0x000180, "Wrong size on BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager");
static_assert(offsetof(BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager, EntryPoint) == 0x000000, "Member 'BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager, ___bool_Has_Been_Initd_Variable) == 0x000030, "Member 'BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager::___bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000038, "Member 'BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager, ___bool_IsClosed_Variable) == 0x000040, "Member 'BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager::___bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager, ___bool_Has_Been_Initd_Variable_1) == 0x000041, "Member 'BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager::___bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager, ___bool_Variable) == 0x000042, "Member 'BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager::___bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager, CallFunc_Not_PreBool_ReturnValue) == 0x000043, "Member 'BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager, K2Node_Event_DeltaSeconds) == 0x000044, "Member 'BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager, CallFunc_GetBaseCharacterTransform_ReturnValue) == 0x000050, "Member 'BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager::CallFunc_GetBaseCharacterTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager, CallFunc_BreakTransform_Location) == 0x000080, "Member 'BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager, CallFunc_BreakTransform_Rotation) == 0x00008C, "Member 'BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager, CallFunc_BreakTransform_Scale) == 0x000098, "Member 'BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x0000A4, "Member 'BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager, CallFunc_GetScalarParameterValue_ReturnValue) == 0x000138, "Member 'BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager::CallFunc_GetScalarParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00013C, "Member 'BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager, ___bool_IsClosed_Variable_1) == 0x00013D, "Member 'BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager::___bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager, CallFunc_BreakTransform_Location_1) == 0x000140, "Member 'BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager, CallFunc_BreakTransform_Rotation_1) == 0x00014C, "Member 'BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager, CallFunc_BreakTransform_Scale_1) == 0x000158, "Member 'BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager, CallFunc_Conv_VectorToLinearColor_ReturnValue) == 0x000164, "Member 'BP_InteractFoliageManager_C_ExecuteUbergraph_BP_InteractFoliageManager::CallFunc_Conv_VectorToLinearColor_ReturnValue' has a wrong offset!");

}
