#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FloatingStaticMesh

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FloatingStaticMesh.BP_FloatingStaticMesh_C
// 0x0018 (0x0338 - 0x0320)
class ABP_FloatingStaticMesh_C final : public AKuroFloatingStaticMesh
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMeshComp;                                    // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_FloatingStaticMesh(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FloatingStaticMesh_C">();
	}
	static class ABP_FloatingStaticMesh_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FloatingStaticMesh_C>();
	}
};
static_assert(alignof(ABP_FloatingStaticMesh_C) == 0x000008, "Wrong alignment on ABP_FloatingStaticMesh_C");
static_assert(sizeof(ABP_FloatingStaticMesh_C) == 0x000338, "Wrong size on ABP_FloatingStaticMesh_C");
static_assert(offsetof(ABP_FloatingStaticMesh_C, UberGraphFrame) == 0x000320, "Member 'ABP_FloatingStaticMesh_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_FloatingStaticMesh_C, StaticMeshComp) == 0x000328, "Member 'ABP_FloatingStaticMesh_C::StaticMeshComp' has a wrong offset!");
static_assert(offsetof(ABP_FloatingStaticMesh_C, Scene) == 0x000330, "Member 'ABP_FloatingStaticMesh_C::Scene' has a wrong offset!");

}
