#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Hook_SwingingEnd

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GA_Hook_SwingingEnd.GA_Hook_SwingingEnd_C.ExecuteUbergraph_GA_Hook_SwingingEnd
// 0x0410 (0x0410 - 0x0000)
struct GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x0008(0x00B8)()
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate;              // 0x00C0(0x0028)(ZeroConstructor)
	struct FGameplayEventData                     ___struct_Variable;                                // 0x00E8(0x00B8)()
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A9[0x7];                                      // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FGameplayTag& Tag)>     K2Node_CreateDelegate_OutputDelegate_1;            // 0x01B0(0x0028)(ZeroConstructor)
	struct FGameplayTag                           K2Node_CustomEvent_Tag;                            // 0x01D8(0x000C)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ___struct_Variable_1;                              // 0x01E4(0x000C)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc__________SpeedRatio;                      // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F4[0x4];                                      // 0x01F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc__________;                                // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc______________;                            // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_201[0x7];                                      // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________1;                              // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________2;                              // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_______________1;                          // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_219[0x7];                                      // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     K2Node_DynamicCast_AsTs_Base_Character;            // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_231[0x7];                                      // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0238(0x0028)(ZeroConstructor)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_264[0x4];                                      // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc___________3;                              // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0278(0x0028)(ZeroConstructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A1[0x7];                                      // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x02A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C1[0x7];                                      // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_____GA______________;                     // 0x02C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x02D8(0x0028)(ZeroConstructor)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0300(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0310(0x0028)(ZeroConstructor)
	class UAnimMontage*                           CallFunc___________4;                              // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0341(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_342[0x6];                                      // 0x0342(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x0348(0x0028)(ZeroConstructor)
	class ATsBaseCharacter_C*                     CallFunc___________5;                              // 0x0370(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________6;                              // 0x0378(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0380(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x03B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x03BC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMoveInput_ReturnValue;                 // 0x03C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C9[0x3];                                      // 0x03C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_InverseTransformDirection_ReturnValue;    // 0x03CC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x03D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x03DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x03E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E4[0x4];                                      // 0x03E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________7;                              // 0x03E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x03F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FC[0x4];                                      // 0x03FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue;           // 0x0400(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0408(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd) == 0x000010, "Wrong alignment on GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd");
static_assert(sizeof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd) == 0x000410, "Wrong size on GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, EntryPoint) == 0x000000, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, K2Node_CustomEvent_Payload) == 0x000008, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, K2Node_CreateDelegate_OutputDelegate) == 0x0000C0, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, ___struct_Variable) == 0x0000E8, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::___struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc_WaitGameplayEvent_ReturnValue) == 0x0001A0, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc_IsValid_ReturnValue) == 0x0001A8, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001B0, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, K2Node_CustomEvent_Tag) == 0x0001D8, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::K2Node_CustomEvent_Tag' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, ___struct_Variable_1) == 0x0001E4, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::___struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc__________SpeedRatio) == 0x0001F0, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc__________SpeedRatio' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc__________) == 0x0001F8, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc__________' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc______________) == 0x000200, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc______________' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc___________1) == 0x000208, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc___________1' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc___________2) == 0x000210, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc___________2' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc_______________1) == 0x000218, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc_______________1' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000220, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, K2Node_DynamicCast_AsTs_Base_Character) == 0x000228, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::K2Node_DynamicCast_AsTs_Base_Character' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, K2Node_DynamicCast_bSuccess) == 0x000230, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, K2Node_CreateDelegate_OutputDelegate_2) == 0x000238, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000260, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc___________3) == 0x000268, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc___________3' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x000270, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, K2Node_CreateDelegate_OutputDelegate_3) == 0x000278, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc_IsValid_ReturnValue_1) == 0x0002A0, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc_GetDisplayName_ReturnValue) == 0x0002A8, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc_GetObjectClass_ReturnValue) == 0x0002B8, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x0002C0, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc_____GA______________) == 0x0002C8, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc_____GA______________' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, K2Node_CreateDelegate_OutputDelegate_4) == 0x0002D8, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc_Conv_NameToString_ReturnValue) == 0x000300, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, K2Node_CreateDelegate_OutputDelegate_5) == 0x000310, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc___________4) == 0x000338, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc___________4' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc_IsValid_ReturnValue_2) == 0x000340, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, K2Node_Event_bWasCancelled) == 0x000341, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, K2Node_CreateDelegate_OutputDelegate_6) == 0x000348, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc___________5) == 0x000370, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc___________5' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc___________6) == 0x000378, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc___________6' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc_GetTransform_ReturnValue) == 0x000380, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc_GetVelocity_ReturnValue) == 0x0003B0, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0003BC, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc_HasMoveInput_ReturnValue) == 0x0003C8, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc_HasMoveInput_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc_InverseTransformDirection_ReturnValue) == 0x0003CC, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc_InverseTransformDirection_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc_BreakVector_X) == 0x0003D8, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc_BreakVector_Y) == 0x0003DC, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc_BreakVector_Z) == 0x0003E0, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc___________7) == 0x0003E8, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc___________7' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc_MakeVector_ReturnValue) == 0x0003F0, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc_WaitGameplayTagAdd_ReturnValue) == 0x000400, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc_WaitGameplayTagAdd_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd, CallFunc_IsValid_ReturnValue_3) == 0x000408, "Member 'GA_Hook_SwingingEnd_C_ExecuteUbergraph_GA_Hook_SwingingEnd::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function GA_Hook_SwingingEnd.GA_Hook_SwingingEnd_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Hook_SwingingEnd_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Hook_SwingingEnd_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Hook_SwingingEnd_C_K2_OnEndAbility");
static_assert(sizeof(GA_Hook_SwingingEnd_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Hook_SwingingEnd_C_K2_OnEndAbility");
static_assert(offsetof(GA_Hook_SwingingEnd_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Hook_SwingingEnd_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Hook_SwingingEnd.GA_Hook_SwingingEnd_C.Added_54E5FB1C47764D94BD245DAB78EF78CB
// 0x000C (0x000C - 0x0000)
struct GA_Hook_SwingingEnd_C_Added_54E5FB1C47764D94BD245DAB78EF78CB final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Hook_SwingingEnd_C_Added_54E5FB1C47764D94BD245DAB78EF78CB) == 0x000004, "Wrong alignment on GA_Hook_SwingingEnd_C_Added_54E5FB1C47764D94BD245DAB78EF78CB");
static_assert(sizeof(GA_Hook_SwingingEnd_C_Added_54E5FB1C47764D94BD245DAB78EF78CB) == 0x00000C, "Wrong size on GA_Hook_SwingingEnd_C_Added_54E5FB1C47764D94BD245DAB78EF78CB");
static_assert(offsetof(GA_Hook_SwingingEnd_C_Added_54E5FB1C47764D94BD245DAB78EF78CB, Tag) == 0x000000, "Member 'GA_Hook_SwingingEnd_C_Added_54E5FB1C47764D94BD245DAB78EF78CB::Tag' has a wrong offset!");

// Function GA_Hook_SwingingEnd.GA_Hook_SwingingEnd_C.EventReceived_395B7D3941A9DA8F2A9D14B334F75D10
// 0x00B8 (0x00B8 - 0x0000)
struct GA_Hook_SwingingEnd_C_EventReceived_395B7D3941A9DA8F2A9D14B334F75D10 final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Hook_SwingingEnd_C_EventReceived_395B7D3941A9DA8F2A9D14B334F75D10) == 0x000008, "Wrong alignment on GA_Hook_SwingingEnd_C_EventReceived_395B7D3941A9DA8F2A9D14B334F75D10");
static_assert(sizeof(GA_Hook_SwingingEnd_C_EventReceived_395B7D3941A9DA8F2A9D14B334F75D10) == 0x0000B8, "Wrong size on GA_Hook_SwingingEnd_C_EventReceived_395B7D3941A9DA8F2A9D14B334F75D10");
static_assert(offsetof(GA_Hook_SwingingEnd_C_EventReceived_395B7D3941A9DA8F2A9D14B334F75D10, Payload) == 0x000000, "Member 'GA_Hook_SwingingEnd_C_EventReceived_395B7D3941A9DA8F2A9D14B334F75D10::Payload' has a wrong offset!");

}
