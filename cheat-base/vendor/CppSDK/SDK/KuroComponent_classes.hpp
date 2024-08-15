#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KuroComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "KuroComponent_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class KuroComponent.KuroAnimPerfTestComponent
// 0x00B0 (0x0170 - 0x00C0)
class UKuroAnimPerfTestComponent final : public UActorComponent
{
public:
	int32                                         NumSkeletalMeshActorsToGenerate;                   // 0x00C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAnimPerfTestBornFrom                         BornFrom;                                          // 0x00C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B28[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class APlayerStart>            SkelMeshActorBirthplace;                           // 0x00C8(0x0030)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAnimPerfTestActorsGenMethod                  GenMethod;                                         // 0x00F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAnimPerfTestSkelMeshLifeCycle                LifeCycle;                                         // 0x00F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B29[0x2];                                     // 0x00FA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SkelMeshActorInterval;                             // 0x00FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SkelMeshLOD;                                       // 0x0100(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B2A[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMesh*                          SkelMeshTemplate;                                  // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimationAsset*                        AnimTemplate;                                      // 0x0110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAnimPerfTestRandomGenActorGroup              ActorsRandGenGroup;                                // 0x0118(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAnimPerfTestAnimSeqFilterMethod              AnimSeqFilterMethod;                               // 0x0119(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B2B[0x6];                                     // 0x011A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         AnimSeqFilter;                                     // 0x0120(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USkeletalMesh*>                  RandSkelMeshTemplates;                             // 0x0130(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAnimSequence*>                  RandSkelMeshAniSeqs;                               // 0x0140(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                         GeneratedSkelMeshActors;                           // 0x0150(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1B2C[0x10];                                    // 0x0160(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void DestroySkeletalMeshActors();
	void GenerateSkeletalMeshActors();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroAnimPerfTestComponent">();
	}
	static class UKuroAnimPerfTestComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroAnimPerfTestComponent>();
	}
};
static_assert(alignof(UKuroAnimPerfTestComponent) == 0x000008, "Wrong alignment on UKuroAnimPerfTestComponent");
static_assert(sizeof(UKuroAnimPerfTestComponent) == 0x000170, "Wrong size on UKuroAnimPerfTestComponent");
static_assert(offsetof(UKuroAnimPerfTestComponent, NumSkeletalMeshActorsToGenerate) == 0x0000C0, "Member 'UKuroAnimPerfTestComponent::NumSkeletalMeshActorsToGenerate' has a wrong offset!");
static_assert(offsetof(UKuroAnimPerfTestComponent, BornFrom) == 0x0000C4, "Member 'UKuroAnimPerfTestComponent::BornFrom' has a wrong offset!");
static_assert(offsetof(UKuroAnimPerfTestComponent, SkelMeshActorBirthplace) == 0x0000C8, "Member 'UKuroAnimPerfTestComponent::SkelMeshActorBirthplace' has a wrong offset!");
static_assert(offsetof(UKuroAnimPerfTestComponent, GenMethod) == 0x0000F8, "Member 'UKuroAnimPerfTestComponent::GenMethod' has a wrong offset!");
static_assert(offsetof(UKuroAnimPerfTestComponent, LifeCycle) == 0x0000F9, "Member 'UKuroAnimPerfTestComponent::LifeCycle' has a wrong offset!");
static_assert(offsetof(UKuroAnimPerfTestComponent, SkelMeshActorInterval) == 0x0000FC, "Member 'UKuroAnimPerfTestComponent::SkelMeshActorInterval' has a wrong offset!");
static_assert(offsetof(UKuroAnimPerfTestComponent, SkelMeshLOD) == 0x000100, "Member 'UKuroAnimPerfTestComponent::SkelMeshLOD' has a wrong offset!");
static_assert(offsetof(UKuroAnimPerfTestComponent, SkelMeshTemplate) == 0x000108, "Member 'UKuroAnimPerfTestComponent::SkelMeshTemplate' has a wrong offset!");
static_assert(offsetof(UKuroAnimPerfTestComponent, AnimTemplate) == 0x000110, "Member 'UKuroAnimPerfTestComponent::AnimTemplate' has a wrong offset!");
static_assert(offsetof(UKuroAnimPerfTestComponent, ActorsRandGenGroup) == 0x000118, "Member 'UKuroAnimPerfTestComponent::ActorsRandGenGroup' has a wrong offset!");
static_assert(offsetof(UKuroAnimPerfTestComponent, AnimSeqFilterMethod) == 0x000119, "Member 'UKuroAnimPerfTestComponent::AnimSeqFilterMethod' has a wrong offset!");
static_assert(offsetof(UKuroAnimPerfTestComponent, AnimSeqFilter) == 0x000120, "Member 'UKuroAnimPerfTestComponent::AnimSeqFilter' has a wrong offset!");
static_assert(offsetof(UKuroAnimPerfTestComponent, RandSkelMeshTemplates) == 0x000130, "Member 'UKuroAnimPerfTestComponent::RandSkelMeshTemplates' has a wrong offset!");
static_assert(offsetof(UKuroAnimPerfTestComponent, RandSkelMeshAniSeqs) == 0x000140, "Member 'UKuroAnimPerfTestComponent::RandSkelMeshAniSeqs' has a wrong offset!");
static_assert(offsetof(UKuroAnimPerfTestComponent, GeneratedSkelMeshActors) == 0x000150, "Member 'UKuroAnimPerfTestComponent::GeneratedSkelMeshActors' has a wrong offset!");

// Class KuroComponent.KuroChainComponent
// 0x0110 (0x0620 - 0x0510)
#pragma pack(push, 0x1)
class alignas(0x10) UKuroChainComponent : public UMeshComponent
{
public:
	class UStaticMesh*                            ChainMesh;                                         // 0x0510(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Scale;                                             // 0x0518(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Segments;                                          // 0x0524(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                AdditiveRotation;                                  // 0x0528(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ChainLength;                                       // 0x0534(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                EndPoint;                                          // 0x0538(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AttachStart;                                       // 0x0544(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B2D[0x3];                                     // 0x0545(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FComponentReference                    AttachStartTo;                                     // 0x0548(0x0030)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FName                                   AttachStartToSocket;                               // 0x0578(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AttachEnd;                                         // 0x0584(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B2E[0x3];                                     // 0x0585(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FComponentReference                    AttachEndTo;                                       // 0x0588(0x0030)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FName                                   AttachEndToSocket;                                 // 0x05B8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Gravity;                                           // 0x05C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Stiffness;                                         // 0x05C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          SelfCollision;                                     // 0x05CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B2F[0x3];                                     // 0x05CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SelfCollisionWidth;                                // 0x05D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SelfCollisionThreshold;                            // 0x05D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FrameSkip;                                         // 0x05D8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B30[0x4];                                     // 0x05DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UInstancedStaticMeshComponent*          InstanceComponent;                                 // 0x05E0(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B31[0x30];                                    // 0x05E8(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void InitChain();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroChainComponent">();
	}
	static class UKuroChainComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroChainComponent>();
	}
};
#pragma pack(pop)
static_assert(alignof(UKuroChainComponent) == 0x000010, "Wrong alignment on UKuroChainComponent");
static_assert(sizeof(UKuroChainComponent) == 0x000620, "Wrong size on UKuroChainComponent");
static_assert(offsetof(UKuroChainComponent, ChainMesh) == 0x000510, "Member 'UKuroChainComponent::ChainMesh' has a wrong offset!");
static_assert(offsetof(UKuroChainComponent, Scale) == 0x000518, "Member 'UKuroChainComponent::Scale' has a wrong offset!");
static_assert(offsetof(UKuroChainComponent, Segments) == 0x000524, "Member 'UKuroChainComponent::Segments' has a wrong offset!");
static_assert(offsetof(UKuroChainComponent, AdditiveRotation) == 0x000528, "Member 'UKuroChainComponent::AdditiveRotation' has a wrong offset!");
static_assert(offsetof(UKuroChainComponent, ChainLength) == 0x000534, "Member 'UKuroChainComponent::ChainLength' has a wrong offset!");
static_assert(offsetof(UKuroChainComponent, EndPoint) == 0x000538, "Member 'UKuroChainComponent::EndPoint' has a wrong offset!");
static_assert(offsetof(UKuroChainComponent, AttachStart) == 0x000544, "Member 'UKuroChainComponent::AttachStart' has a wrong offset!");
static_assert(offsetof(UKuroChainComponent, AttachStartTo) == 0x000548, "Member 'UKuroChainComponent::AttachStartTo' has a wrong offset!");
static_assert(offsetof(UKuroChainComponent, AttachStartToSocket) == 0x000578, "Member 'UKuroChainComponent::AttachStartToSocket' has a wrong offset!");
static_assert(offsetof(UKuroChainComponent, AttachEnd) == 0x000584, "Member 'UKuroChainComponent::AttachEnd' has a wrong offset!");
static_assert(offsetof(UKuroChainComponent, AttachEndTo) == 0x000588, "Member 'UKuroChainComponent::AttachEndTo' has a wrong offset!");
static_assert(offsetof(UKuroChainComponent, AttachEndToSocket) == 0x0005B8, "Member 'UKuroChainComponent::AttachEndToSocket' has a wrong offset!");
static_assert(offsetof(UKuroChainComponent, Gravity) == 0x0005C4, "Member 'UKuroChainComponent::Gravity' has a wrong offset!");
static_assert(offsetof(UKuroChainComponent, Stiffness) == 0x0005C8, "Member 'UKuroChainComponent::Stiffness' has a wrong offset!");
static_assert(offsetof(UKuroChainComponent, SelfCollision) == 0x0005CC, "Member 'UKuroChainComponent::SelfCollision' has a wrong offset!");
static_assert(offsetof(UKuroChainComponent, SelfCollisionWidth) == 0x0005D0, "Member 'UKuroChainComponent::SelfCollisionWidth' has a wrong offset!");
static_assert(offsetof(UKuroChainComponent, SelfCollisionThreshold) == 0x0005D4, "Member 'UKuroChainComponent::SelfCollisionThreshold' has a wrong offset!");
static_assert(offsetof(UKuroChainComponent, FrameSkip) == 0x0005D8, "Member 'UKuroChainComponent::FrameSkip' has a wrong offset!");
static_assert(offsetof(UKuroChainComponent, InstanceComponent) == 0x0005E0, "Member 'UKuroChainComponent::InstanceComponent' has a wrong offset!");

// Class KuroComponent.KuroCharacterAnimationComponent
// 0x00F0 (0x01B0 - 0x00C0)
class UKuroCharacterAnimationComponent final : public UActorComponent
{
public:
	float                                         BufferTimeLength;                                  // 0x00C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BufferNowTime;                                     // 0x00C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B32[0xE8];                                    // 0x00C8(0x00E8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddModelLocation(const struct FVector& Offset);
	void AddModelQuat(const struct FQuat& Quat, bool LockCenter);
	void GetTransformOffsetInWorld(const struct FTransform& Child, const struct FTransform& Parent);
	void ResetModelLocation();
	void ResetModelQuat();
	void StopModelBuffer();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroCharacterAnimationComponent">();
	}
	static class UKuroCharacterAnimationComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroCharacterAnimationComponent>();
	}
};
static_assert(alignof(UKuroCharacterAnimationComponent) == 0x000008, "Wrong alignment on UKuroCharacterAnimationComponent");
static_assert(sizeof(UKuroCharacterAnimationComponent) == 0x0001B0, "Wrong size on UKuroCharacterAnimationComponent");
static_assert(offsetof(UKuroCharacterAnimationComponent, BufferTimeLength) == 0x0000C0, "Member 'UKuroCharacterAnimationComponent::BufferTimeLength' has a wrong offset!");
static_assert(offsetof(UKuroCharacterAnimationComponent, BufferNowTime) == 0x0000C4, "Member 'UKuroCharacterAnimationComponent::BufferNowTime' has a wrong offset!");

// Class KuroComponent.KuroRegionShapeComponent
// 0x0000 (0x0220 - 0x0220)
class UKuroRegionShapeComponent : public USceneComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroRegionShapeComponent">();
	}
	static class UKuroRegionShapeComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroRegionShapeComponent>();
	}
};
static_assert(alignof(UKuroRegionShapeComponent) == 0x000010, "Wrong alignment on UKuroRegionShapeComponent");
static_assert(sizeof(UKuroRegionShapeComponent) == 0x000220, "Wrong size on UKuroRegionShapeComponent");

// Class KuroComponent.KuroRegionBoxComponent
// 0x0010 (0x0230 - 0x0220)
class UKuroRegionBoxComponent final : public UKuroRegionShapeComponent
{
public:
	struct FVector                                BoxExtent;                                         // 0x0220(0x000C)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1B34[0x4];                                     // 0x022C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroRegionBoxComponent">();
	}
	static class UKuroRegionBoxComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroRegionBoxComponent>();
	}
};
static_assert(alignof(UKuroRegionBoxComponent) == 0x000010, "Wrong alignment on UKuroRegionBoxComponent");
static_assert(sizeof(UKuroRegionBoxComponent) == 0x000230, "Wrong size on UKuroRegionBoxComponent");
static_assert(offsetof(UKuroRegionBoxComponent, BoxExtent) == 0x000220, "Member 'UKuroRegionBoxComponent::BoxExtent' has a wrong offset!");

// Class KuroComponent.KuroRegionCylinderComponent
// 0x0010 (0x0230 - 0x0220)
class UKuroRegionCylinderComponent final : public UKuroRegionShapeComponent
{
public:
	float                                         Radius;                                            // 0x0220(0x0004)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         HalfHeight;                                        // 0x0224(0x0004)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1B35[0x8];                                     // 0x0228(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroRegionCylinderComponent">();
	}
	static class UKuroRegionCylinderComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroRegionCylinderComponent>();
	}
};
static_assert(alignof(UKuroRegionCylinderComponent) == 0x000010, "Wrong alignment on UKuroRegionCylinderComponent");
static_assert(sizeof(UKuroRegionCylinderComponent) == 0x000230, "Wrong size on UKuroRegionCylinderComponent");
static_assert(offsetof(UKuroRegionCylinderComponent, Radius) == 0x000220, "Member 'UKuroRegionCylinderComponent::Radius' has a wrong offset!");
static_assert(offsetof(UKuroRegionCylinderComponent, HalfHeight) == 0x000224, "Member 'UKuroRegionCylinderComponent::HalfHeight' has a wrong offset!");

// Class KuroComponent.KuroRegionDetectComponent
// 0x0100 (0x01C0 - 0x00C0)
class UKuroRegionDetectComponent final : public UActorComponent
{
public:
	TMap<class FString, class UKuroRegionShapeComponent*> RegionMap;                                         // 0x00C0(0x0050)(ExportObject, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class FString, class UKuroRegionEventBinder*> RegionEventMap;                                    // 0x0110(0x0050)(NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class AActor>>          EventTargets;                                      // 0x0160(0x0010)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1B36[0x50];                                    // 0x0170(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UKuroRegionEventBinder* GetRegionEvent(const class FString& RegionName);
	void SetDebugMode(const bool IsOpen);
	void SetEventTarget(class AActor* DetectTarget);
	void SetEventTargets(const TArray<class AActor*>& DetectTargets);

	bool Detect(const struct FVector& Point, const class FString& RegionName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroRegionDetectComponent">();
	}
	static class UKuroRegionDetectComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroRegionDetectComponent>();
	}
};
static_assert(alignof(UKuroRegionDetectComponent) == 0x000008, "Wrong alignment on UKuroRegionDetectComponent");
static_assert(sizeof(UKuroRegionDetectComponent) == 0x0001C0, "Wrong size on UKuroRegionDetectComponent");
static_assert(offsetof(UKuroRegionDetectComponent, RegionMap) == 0x0000C0, "Member 'UKuroRegionDetectComponent::RegionMap' has a wrong offset!");
static_assert(offsetof(UKuroRegionDetectComponent, RegionEventMap) == 0x000110, "Member 'UKuroRegionDetectComponent::RegionEventMap' has a wrong offset!");
static_assert(offsetof(UKuroRegionDetectComponent, EventTargets) == 0x000160, "Member 'UKuroRegionDetectComponent::EventTargets' has a wrong offset!");

// Class KuroComponent.KuroRegionEventBinder
// 0x0020 (0x0050 - 0x0030)
class UKuroRegionEventBinder final : public UObject
{
public:
	class FString                                 RegionName;                                        // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             Callback;                                          // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroRegionEventBinder">();
	}
	static class UKuroRegionEventBinder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroRegionEventBinder>();
	}
};
static_assert(alignof(UKuroRegionEventBinder) == 0x000008, "Wrong alignment on UKuroRegionEventBinder");
static_assert(sizeof(UKuroRegionEventBinder) == 0x000050, "Wrong size on UKuroRegionEventBinder");
static_assert(offsetof(UKuroRegionEventBinder, RegionName) == 0x000030, "Member 'UKuroRegionEventBinder::RegionName' has a wrong offset!");
static_assert(offsetof(UKuroRegionEventBinder, Callback) == 0x000040, "Member 'UKuroRegionEventBinder::Callback' has a wrong offset!");

// Class KuroComponent.KuroRegionSectorComponent
// 0x0010 (0x0230 - 0x0220)
class UKuroRegionSectorComponent final : public UKuroRegionShapeComponent
{
public:
	float                                         Radius;                                            // 0x0220(0x0004)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         Angle;                                             // 0x0224(0x0004)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         HalfHeight;                                        // 0x0228(0x0004)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1B39[0x4];                                     // 0x022C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroRegionSectorComponent">();
	}
	static class UKuroRegionSectorComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroRegionSectorComponent>();
	}
};
static_assert(alignof(UKuroRegionSectorComponent) == 0x000010, "Wrong alignment on UKuroRegionSectorComponent");
static_assert(sizeof(UKuroRegionSectorComponent) == 0x000230, "Wrong size on UKuroRegionSectorComponent");
static_assert(offsetof(UKuroRegionSectorComponent, Radius) == 0x000220, "Member 'UKuroRegionSectorComponent::Radius' has a wrong offset!");
static_assert(offsetof(UKuroRegionSectorComponent, Angle) == 0x000224, "Member 'UKuroRegionSectorComponent::Angle' has a wrong offset!");
static_assert(offsetof(UKuroRegionSectorComponent, HalfHeight) == 0x000228, "Member 'UKuroRegionSectorComponent::HalfHeight' has a wrong offset!");

// Class KuroComponent.KuroRegionSphereComponent
// 0x0010 (0x0230 - 0x0220)
class UKuroRegionSphereComponent final : public UKuroRegionShapeComponent
{
public:
	float                                         Radius;                                            // 0x0220(0x0004)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1B3A[0xC];                                     // 0x0224(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroRegionSphereComponent">();
	}
	static class UKuroRegionSphereComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroRegionSphereComponent>();
	}
};
static_assert(alignof(UKuroRegionSphereComponent) == 0x000010, "Wrong alignment on UKuroRegionSphereComponent");
static_assert(sizeof(UKuroRegionSphereComponent) == 0x000230, "Wrong size on UKuroRegionSphereComponent");
static_assert(offsetof(UKuroRegionSphereComponent, Radius) == 0x000220, "Member 'UKuroRegionSphereComponent::Radius' has a wrong offset!");

// Class KuroComponent.KuroSceneItemGuidePathComponent
// 0x0058 (0x0118 - 0x00C0)
class UKuroSceneItemGuidePathComponent final : public UActorComponent
{
public:
	bool                                          HasFinishTag;                                      // 0x00C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          HasActiveTag;                                      // 0x00C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B3B[0x6];                                     // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      NiagaraComponent;                                  // 0x00C8(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B3C[0x48];                                    // 0x00D0(0x0048)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void StartTick(const struct FLinearColor& Normal, const struct FLinearColor& ChangeCoefficient, const struct FLinearColor& Finish, class FName ParameterName, float TotalCountDown, float CurCountDown);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroSceneItemGuidePathComponent">();
	}
	static class UKuroSceneItemGuidePathComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroSceneItemGuidePathComponent>();
	}
};
static_assert(alignof(UKuroSceneItemGuidePathComponent) == 0x000008, "Wrong alignment on UKuroSceneItemGuidePathComponent");
static_assert(sizeof(UKuroSceneItemGuidePathComponent) == 0x000118, "Wrong size on UKuroSceneItemGuidePathComponent");
static_assert(offsetof(UKuroSceneItemGuidePathComponent, HasFinishTag) == 0x0000C0, "Member 'UKuroSceneItemGuidePathComponent::HasFinishTag' has a wrong offset!");
static_assert(offsetof(UKuroSceneItemGuidePathComponent, HasActiveTag) == 0x0000C1, "Member 'UKuroSceneItemGuidePathComponent::HasActiveTag' has a wrong offset!");
static_assert(offsetof(UKuroSceneItemGuidePathComponent, NiagaraComponent) == 0x0000C8, "Member 'UKuroSceneItemGuidePathComponent::NiagaraComponent' has a wrong offset!");

// Class KuroComponent.KuroSceneItemMoveComponent
// 0x0110 (0x01D0 - 0x00C0)
class UKuroSceneItemMoveComponent final : public UActorComponent
{
public:
	uint8                                         Pad_1B3D[0x8];                                     // 0x00C0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnStopCallback;                                    // 0x00C8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<float>                                 SplineSpeeds;                                      // 0x00D8(0x0010)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 SplineWaitTimes;                                   // 0x00E8(0x0010)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B3E[0xD8];                                    // 0x00F8(0x00D8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddMoveTarget(const struct FVector& Loc, float MoveTime, float WaitTime, float MaxSpeed, float Acceleration);
	bool AddRotationStep(const struct FRotator& BeginRotation, const struct FRotator& EndRotation, float TimeSec, float CdSec, class UCurveFloat* RotateCurve);
	bool GetNextMoveTarget(struct FVector* NextTarget, struct FVector* CurrentVelocity);
	bool InitRotationData(class AActor* TargetActor, bool IsLoop);
	void OnStopMoveToFirstPoint();
	void SetTickingMoveEnable(bool bEnabled);
	void SetTickingRotateEnable(bool bEnabled);
	void StartMoveWithSpline(class USplineComponent* SplineComponent, bool Repeat, bool Cycle, bool KeepLookAt, const TArray<float>& Speeds, const TArray<float>& WaitTimes);
	bool StartRotate();
	void StopAllMove();
	bool StopRotate(EKuroSceneItemStopRotateMethod StopMethod);

	ESimpleRunState GetSimpleRunState() const;
	bool IsMoving() const;
	bool IsRotating() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroSceneItemMoveComponent">();
	}
	static class UKuroSceneItemMoveComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroSceneItemMoveComponent>();
	}
};
static_assert(alignof(UKuroSceneItemMoveComponent) == 0x000008, "Wrong alignment on UKuroSceneItemMoveComponent");
static_assert(sizeof(UKuroSceneItemMoveComponent) == 0x0001D0, "Wrong size on UKuroSceneItemMoveComponent");
static_assert(offsetof(UKuroSceneItemMoveComponent, OnStopCallback) == 0x0000C8, "Member 'UKuroSceneItemMoveComponent::OnStopCallback' has a wrong offset!");
static_assert(offsetof(UKuroSceneItemMoveComponent, SplineSpeeds) == 0x0000D8, "Member 'UKuroSceneItemMoveComponent::SplineSpeeds' has a wrong offset!");
static_assert(offsetof(UKuroSceneItemMoveComponent, SplineWaitTimes) == 0x0000E8, "Member 'UKuroSceneItemMoveComponent::SplineWaitTimes' has a wrong offset!");

// Class KuroComponent.KuroSplineChainComponent
// 0x0030 (0x0650 - 0x0620)
class UKuroSplineChainComponent final : public UKuroChainComponent
{
public:
	float                                         SplineMaxLength;                                   // 0x0618(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MeshMinScale;                                      // 0x061C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MeshMaxScale;                                      // 0x0620(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MeshXYScaleRatio;                                  // 0x0624(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SegmentLengthMinScale;                             // 0x0628(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SegmentLengthMaxScale;                             // 0x062C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USplineComponent*                       SplineComponent;                                   // 0x0630(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B43[0x18];                                    // 0x0638(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void UpdateSplineChainIndex();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroSplineChainComponent">();
	}
	static class UKuroSplineChainComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroSplineChainComponent>();
	}
};
static_assert(alignof(UKuroSplineChainComponent) == 0x000010, "Wrong alignment on UKuroSplineChainComponent");
static_assert(sizeof(UKuroSplineChainComponent) == 0x000650, "Wrong size on UKuroSplineChainComponent");
static_assert(offsetof(UKuroSplineChainComponent, SplineMaxLength) == 0x000618, "Member 'UKuroSplineChainComponent::SplineMaxLength' has a wrong offset!");
static_assert(offsetof(UKuroSplineChainComponent, MeshMinScale) == 0x00061C, "Member 'UKuroSplineChainComponent::MeshMinScale' has a wrong offset!");
static_assert(offsetof(UKuroSplineChainComponent, MeshMaxScale) == 0x000620, "Member 'UKuroSplineChainComponent::MeshMaxScale' has a wrong offset!");
static_assert(offsetof(UKuroSplineChainComponent, MeshXYScaleRatio) == 0x000624, "Member 'UKuroSplineChainComponent::MeshXYScaleRatio' has a wrong offset!");
static_assert(offsetof(UKuroSplineChainComponent, SegmentLengthMinScale) == 0x000628, "Member 'UKuroSplineChainComponent::SegmentLengthMinScale' has a wrong offset!");
static_assert(offsetof(UKuroSplineChainComponent, SegmentLengthMaxScale) == 0x00062C, "Member 'UKuroSplineChainComponent::SegmentLengthMaxScale' has a wrong offset!");
static_assert(offsetof(UKuroSplineChainComponent, SplineComponent) == 0x000630, "Member 'UKuroSplineChainComponent::SplineComponent' has a wrong offset!");

}
