#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SWaterEffectObject

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct SWaterEffectObject.SWaterEffectObject
// 0x00B0 (0x00B0 - 0x0000)
struct FSWaterEffectObject final
{
public:
	float                                         Radius_22_17F3D6B6442F4CA6C4EDAF9D624C7497;        // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_312E[0xC];                                     // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Transform_23_6C11AE9A4E3937F99FA86A8FB8A8A129;     // 0x0010(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	TSoftObjectPtr<class UEffectModelBase>        Effect_57_4E5CF9D8490C25797E8CC0BFCEE5D983;        // 0x0040(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          TriggerOnce_31_5812DF7046286E7C0528CBA4CD21A810;   // 0x0070(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          EnableSurfaceEffect_42_51D905A341688290E799958E968DF25F; // 0x0071(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_312F[0x6];                                     // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UEffectModelBase>        WaterSurfaceEffect_58_9B115E3B49603AA9550967AA55544EAA; // 0x0078(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	float                                         TimeAfterSurfaceEffectStop_56_05E050574AF588AEF44FDC80738DD506; // 0x00A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSWaterEffectObject) == 0x000010, "Wrong alignment on FSWaterEffectObject");
static_assert(sizeof(FSWaterEffectObject) == 0x0000B0, "Wrong size on FSWaterEffectObject");
static_assert(offsetof(FSWaterEffectObject, Radius_22_17F3D6B6442F4CA6C4EDAF9D624C7497) == 0x000000, "Member 'FSWaterEffectObject::Radius_22_17F3D6B6442F4CA6C4EDAF9D624C7497' has a wrong offset!");
static_assert(offsetof(FSWaterEffectObject, Transform_23_6C11AE9A4E3937F99FA86A8FB8A8A129) == 0x000010, "Member 'FSWaterEffectObject::Transform_23_6C11AE9A4E3937F99FA86A8FB8A8A129' has a wrong offset!");
static_assert(offsetof(FSWaterEffectObject, Effect_57_4E5CF9D8490C25797E8CC0BFCEE5D983) == 0x000040, "Member 'FSWaterEffectObject::Effect_57_4E5CF9D8490C25797E8CC0BFCEE5D983' has a wrong offset!");
static_assert(offsetof(FSWaterEffectObject, TriggerOnce_31_5812DF7046286E7C0528CBA4CD21A810) == 0x000070, "Member 'FSWaterEffectObject::TriggerOnce_31_5812DF7046286E7C0528CBA4CD21A810' has a wrong offset!");
static_assert(offsetof(FSWaterEffectObject, EnableSurfaceEffect_42_51D905A341688290E799958E968DF25F) == 0x000071, "Member 'FSWaterEffectObject::EnableSurfaceEffect_42_51D905A341688290E799958E968DF25F' has a wrong offset!");
static_assert(offsetof(FSWaterEffectObject, WaterSurfaceEffect_58_9B115E3B49603AA9550967AA55544EAA) == 0x000078, "Member 'FSWaterEffectObject::WaterSurfaceEffect_58_9B115E3B49603AA9550967AA55544EAA' has a wrong offset!");
static_assert(offsetof(FSWaterEffectObject, TimeAfterSurfaceEffectStop_56_05E050574AF588AEF44FDC80738DD506) == 0x0000A8, "Member 'FSWaterEffectObject::TimeAfterSurfaceEffectStop_56_05E050574AF588AEF44FDC80738DD506' has a wrong offset!");

}
