#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SC_Anke_Burst01

#include "Basic.hpp"


namespace SDK::Params
{

// Function SC_Anke_Burst01.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// 0x0038 (0x0038 - 0x0000)
struct SequenceDirector_C_ExecuteUbergraph_SequenceDirector final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BC4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Anke_C*                             K2Node_CustomEvent_BP_Anke;                        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_KuroSeqEvent_C*                     K2Node_CustomEvent_BP_Kuro_Seq_Event;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_InTag;                          // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_QuickInitAndAddDataGroup_MeshComponent_HandleId; // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BC5[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharRenderingComponent_C*              CallFunc_QuickInitAndAddDataGroup_MeshComponent_CharRenderComponent; // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SequenceDirector_C_ExecuteUbergraph_SequenceDirector) == 0x000008, "Wrong alignment on SequenceDirector_C_ExecuteUbergraph_SequenceDirector");
static_assert(sizeof(SequenceDirector_C_ExecuteUbergraph_SequenceDirector) == 0x000038, "Wrong size on SequenceDirector_C_ExecuteUbergraph_SequenceDirector");
static_assert(offsetof(SequenceDirector_C_ExecuteUbergraph_SequenceDirector, EntryPoint) == 0x000000, "Member 'SequenceDirector_C_ExecuteUbergraph_SequenceDirector::EntryPoint' has a wrong offset!");
static_assert(offsetof(SequenceDirector_C_ExecuteUbergraph_SequenceDirector, K2Node_CustomEvent_BP_Anke) == 0x000008, "Member 'SequenceDirector_C_ExecuteUbergraph_SequenceDirector::K2Node_CustomEvent_BP_Anke' has a wrong offset!");
static_assert(offsetof(SequenceDirector_C_ExecuteUbergraph_SequenceDirector, K2Node_CustomEvent_BP_Kuro_Seq_Event) == 0x000010, "Member 'SequenceDirector_C_ExecuteUbergraph_SequenceDirector::K2Node_CustomEvent_BP_Kuro_Seq_Event' has a wrong offset!");
static_assert(offsetof(SequenceDirector_C_ExecuteUbergraph_SequenceDirector, K2Node_CustomEvent_InTag) == 0x000018, "Member 'SequenceDirector_C_ExecuteUbergraph_SequenceDirector::K2Node_CustomEvent_InTag' has a wrong offset!");
static_assert(offsetof(SequenceDirector_C_ExecuteUbergraph_SequenceDirector, CallFunc_QuickInitAndAddDataGroup_MeshComponent_HandleId) == 0x000028, "Member 'SequenceDirector_C_ExecuteUbergraph_SequenceDirector::CallFunc_QuickInitAndAddDataGroup_MeshComponent_HandleId' has a wrong offset!");
static_assert(offsetof(SequenceDirector_C_ExecuteUbergraph_SequenceDirector, CallFunc_QuickInitAndAddDataGroup_MeshComponent_CharRenderComponent) == 0x000030, "Member 'SequenceDirector_C_ExecuteUbergraph_SequenceDirector::CallFunc_QuickInitAndAddDataGroup_MeshComponent_CharRenderComponent' has a wrong offset!");

// Function SC_Anke_Burst01.SequenceDirector_C.BP_Anke_Event_0
// 0x0008 (0x0008 - 0x0000)
struct SequenceDirector_C_BP_Anke_Event_0 final
{
public:
	class ABP_Anke_C*                             BP_Anke;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SequenceDirector_C_BP_Anke_Event_0) == 0x000008, "Wrong alignment on SequenceDirector_C_BP_Anke_Event_0");
static_assert(sizeof(SequenceDirector_C_BP_Anke_Event_0) == 0x000008, "Wrong size on SequenceDirector_C_BP_Anke_Event_0");
static_assert(offsetof(SequenceDirector_C_BP_Anke_Event_0, BP_Anke) == 0x000000, "Member 'SequenceDirector_C_BP_Anke_Event_0::BP_Anke' has a wrong offset!");

// Function SC_Anke_Burst01.SequenceDirector_C.BP_Kuro_Seq_Event_Event_1
// 0x0018 (0x0018 - 0x0000)
struct SequenceDirector_C_BP_Kuro_Seq_Event_Event_1 final
{
public:
	class ABP_KuroSeqEvent_C*                     BP_Kuro_Seq_Event;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 InTag;                                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(SequenceDirector_C_BP_Kuro_Seq_Event_Event_1) == 0x000008, "Wrong alignment on SequenceDirector_C_BP_Kuro_Seq_Event_Event_1");
static_assert(sizeof(SequenceDirector_C_BP_Kuro_Seq_Event_Event_1) == 0x000018, "Wrong size on SequenceDirector_C_BP_Kuro_Seq_Event_Event_1");
static_assert(offsetof(SequenceDirector_C_BP_Kuro_Seq_Event_Event_1, BP_Kuro_Seq_Event) == 0x000000, "Member 'SequenceDirector_C_BP_Kuro_Seq_Event_Event_1::BP_Kuro_Seq_Event' has a wrong offset!");
static_assert(offsetof(SequenceDirector_C_BP_Kuro_Seq_Event_Event_1, InTag) == 0x000008, "Member 'SequenceDirector_C_BP_Kuro_Seq_Event_Event_1::InTag' has a wrong offset!");

// Function SC_Anke_Burst01.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_0
// 0x0008 (0x0008 - 0x0000)
struct SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0 final
{
public:
	class ABP_KuroSeqEvent_C*                     BP_Kuro_Seq_Event;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0) == 0x000008, "Wrong alignment on SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0");
static_assert(sizeof(SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0) == 0x000008, "Wrong size on SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0");
static_assert(offsetof(SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0, BP_Kuro_Seq_Event) == 0x000000, "Member 'SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0::BP_Kuro_Seq_Event' has a wrong offset!");

// Function SC_Anke_Burst01.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1
// 0x0008 (0x0008 - 0x0000)
struct SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_1 final
{
public:
	class ABP_Anke_C*                             BP_Anke;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_1) == 0x000008, "Wrong alignment on SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_1");
static_assert(sizeof(SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_1) == 0x000008, "Wrong size on SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_1");
static_assert(offsetof(SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_1, BP_Anke) == 0x000000, "Member 'SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_1::BP_Anke' has a wrong offset!");

}
