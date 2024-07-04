#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Foliage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum Foliage.EFoliageScaling
// NumValues: 0x0006
enum class EFoliageScaling : uint8
{
	Uniform                                  = 0,
	Free                                     = 1,
	LockXY                                   = 2,
	LockXZ                                   = 3,
	LockYZ                                   = 4,
	EFoliageScaling_MAX                      = 5,
};

// Enum Foliage.EVertexColorMaskChannel
// NumValues: 0x0006
enum class EVertexColorMaskChannel : uint8
{
	Red                                      = 0,
	Green                                    = 1,
	Blue                                     = 2,
	Alpha                                    = 3,
	MAX_None                                 = 4,
	EVertexColorMaskChannel_MAX              = 5,
};

// Enum Foliage.FoliageVertexColorMask
// NumValues: 0x0006
enum class EFoliageVertexColorMask : uint8
{
	FOLIAGEVERTEXCOLORMASK_Disabled          = 0,
	FOLIAGEVERTEXCOLORMASK_Red               = 1,
	FOLIAGEVERTEXCOLORMASK_Green             = 2,
	FOLIAGEVERTEXCOLORMASK_Blue              = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha             = 4,
	FOLIAGEVERTEXCOLORMASK_MAX               = 5,
};

// Enum Foliage.ESimulationQuery
// NumValues: 0x0005
enum class ESimulationQuery : uint8
{
	None                                     = 0,
	CollisionOverlap                         = 1,
	ShadeOverlap                             = 2,
	AnyOverlap                               = 3,
	ESimulationQuery_MAX                     = 4,
};

// Enum Foliage.ESimulationOverlap
// NumValues: 0x0004
enum class ESimulationOverlap : uint8
{
	CollisionOverlap                         = 0,
	ShadeOverlap                             = 1,
	None                                     = 2,
	ESimulationOverlap_MAX                   = 3,
};

// ScriptStruct Foliage.FoliageDensityFalloff
// 0x0090 (0x0090 - 0x0000)
struct FFoliageDensityFalloff final
{
public:
	bool                                          bUseFalloffCurve;                                  // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25AA[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRuntimeFloatCurve                     FalloffCurve;                                      // 0x0008(0x0088)(Edit, NativeAccessSpecifierPublic)
};
static_assert(alignof(FFoliageDensityFalloff) == 0x000008, "Wrong alignment on FFoliageDensityFalloff");
static_assert(sizeof(FFoliageDensityFalloff) == 0x000090, "Wrong size on FFoliageDensityFalloff");
static_assert(offsetof(FFoliageDensityFalloff, bUseFalloffCurve) == 0x000000, "Member 'FFoliageDensityFalloff::bUseFalloffCurve' has a wrong offset!");
static_assert(offsetof(FFoliageDensityFalloff, FalloffCurve) == 0x000008, "Member 'FFoliageDensityFalloff::FalloffCurve' has a wrong offset!");

// ScriptStruct Foliage.FoliageVertexColorChannelMask
// 0x000C (0x000C - 0x0000)
struct FFoliageVertexColorChannelMask final
{
public:
	uint8                                         UseMask : 1;                                       // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_25AB[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaskThreshold;                                     // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         InvertMask : 1;                                    // 0x0008(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_25AC[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FFoliageVertexColorChannelMask) == 0x000004, "Wrong alignment on FFoliageVertexColorChannelMask");
static_assert(sizeof(FFoliageVertexColorChannelMask) == 0x00000C, "Wrong size on FFoliageVertexColorChannelMask");
static_assert(offsetof(FFoliageVertexColorChannelMask, MaskThreshold) == 0x000004, "Member 'FFoliageVertexColorChannelMask::MaskThreshold' has a wrong offset!");

// ScriptStruct Foliage.FoliageTypeObject
// 0x0020 (0x0020 - 0x0000)
struct FFoliageTypeObject final
{
public:
	class UObject*                                FoliageTypeObject;                                 // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFoliageType*                           TypeInstance;                                      // 0x0008(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bIsAsset;                                          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_25AD[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UFoliageType_InstancedStaticMesh> Type;                                              // 0x0018(0x0008)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FFoliageTypeObject) == 0x000008, "Wrong alignment on FFoliageTypeObject");
static_assert(sizeof(FFoliageTypeObject) == 0x000020, "Wrong size on FFoliageTypeObject");
static_assert(offsetof(FFoliageTypeObject, FoliageTypeObject) == 0x000000, "Member 'FFoliageTypeObject::FoliageTypeObject' has a wrong offset!");
static_assert(offsetof(FFoliageTypeObject, TypeInstance) == 0x000008, "Member 'FFoliageTypeObject::TypeInstance' has a wrong offset!");
static_assert(offsetof(FFoliageTypeObject, bIsAsset) == 0x000010, "Member 'FFoliageTypeObject::bIsAsset' has a wrong offset!");
static_assert(offsetof(FFoliageTypeObject, Type) == 0x000018, "Member 'FFoliageTypeObject::Type' has a wrong offset!");

// ScriptStruct Foliage.PCGFoliageInstance
// 0x0018 (0x0018 - 0x0000)
struct FPCGFoliageInstance final
{
public:
	class UFoliageType*                           FoliageType;                                       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                 IDs;                                               // 0x0008(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPCGFoliageInstance) == 0x000008, "Wrong alignment on FPCGFoliageInstance");
static_assert(sizeof(FPCGFoliageInstance) == 0x000018, "Wrong size on FPCGFoliageInstance");
static_assert(offsetof(FPCGFoliageInstance, FoliageType) == 0x000000, "Member 'FPCGFoliageInstance::FoliageType' has a wrong offset!");
static_assert(offsetof(FPCGFoliageInstance, IDs) == 0x000008, "Member 'FPCGFoliageInstance::IDs' has a wrong offset!");

// ScriptStruct Foliage.ProceduralFoliageInstance
// 0x0050 (0x0050 - 0x0000)
struct FProceduralFoliageInstance final
{
public:
	struct FQuat                                  Rotation;                                          // 0x0000(0x0010)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                Location;                                          // 0x0010(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Age;                                               // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Normal;                                            // 0x0020(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Scale;                                             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFoliageType*                           Type;                                              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25AE[0x18];                                    // 0x0038(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FProceduralFoliageInstance) == 0x000010, "Wrong alignment on FProceduralFoliageInstance");
static_assert(sizeof(FProceduralFoliageInstance) == 0x000050, "Wrong size on FProceduralFoliageInstance");
static_assert(offsetof(FProceduralFoliageInstance, Rotation) == 0x000000, "Member 'FProceduralFoliageInstance::Rotation' has a wrong offset!");
static_assert(offsetof(FProceduralFoliageInstance, Location) == 0x000010, "Member 'FProceduralFoliageInstance::Location' has a wrong offset!");
static_assert(offsetof(FProceduralFoliageInstance, Age) == 0x00001C, "Member 'FProceduralFoliageInstance::Age' has a wrong offset!");
static_assert(offsetof(FProceduralFoliageInstance, Normal) == 0x000020, "Member 'FProceduralFoliageInstance::Normal' has a wrong offset!");
static_assert(offsetof(FProceduralFoliageInstance, Scale) == 0x00002C, "Member 'FProceduralFoliageInstance::Scale' has a wrong offset!");
static_assert(offsetof(FProceduralFoliageInstance, Type) == 0x000030, "Member 'FProceduralFoliageInstance::Type' has a wrong offset!");

}
