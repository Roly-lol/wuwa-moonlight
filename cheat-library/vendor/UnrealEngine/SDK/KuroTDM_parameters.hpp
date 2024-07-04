#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KuroTDM

#include "Basic.hpp"


namespace SDK::Params
{

// Function KuroTDM.TDMStaticLibrary.EnableDeviceInfo
// 0x0001 (0x0001 - 0x0000)
struct TDMStaticLibrary_EnableDeviceInfo final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TDMStaticLibrary_EnableDeviceInfo) == 0x000001, "Wrong alignment on TDMStaticLibrary_EnableDeviceInfo");
static_assert(sizeof(TDMStaticLibrary_EnableDeviceInfo) == 0x000001, "Wrong size on TDMStaticLibrary_EnableDeviceInfo");
static_assert(offsetof(TDMStaticLibrary_EnableDeviceInfo, Enable) == 0x000000, "Member 'TDMStaticLibrary_EnableDeviceInfo::Enable' has a wrong offset!");

// Function KuroTDM.TDMStaticLibrary.EnableDeviceInfoCollect
// 0x0018 (0x0018 - 0x0000)
struct TDMStaticLibrary_EnableDeviceInfoCollect final
{
public:
	class FString                                 Model;                                             // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          State;                                             // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_230E[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ReturnValue;                                       // 0x0014(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TDMStaticLibrary_EnableDeviceInfoCollect) == 0x000008, "Wrong alignment on TDMStaticLibrary_EnableDeviceInfoCollect");
static_assert(sizeof(TDMStaticLibrary_EnableDeviceInfoCollect) == 0x000018, "Wrong size on TDMStaticLibrary_EnableDeviceInfoCollect");
static_assert(offsetof(TDMStaticLibrary_EnableDeviceInfoCollect, Model) == 0x000000, "Member 'TDMStaticLibrary_EnableDeviceInfoCollect::Model' has a wrong offset!");
static_assert(offsetof(TDMStaticLibrary_EnableDeviceInfoCollect, State) == 0x000010, "Member 'TDMStaticLibrary_EnableDeviceInfoCollect::State' has a wrong offset!");
static_assert(offsetof(TDMStaticLibrary_EnableDeviceInfoCollect, ReturnValue) == 0x000014, "Member 'TDMStaticLibrary_EnableDeviceInfoCollect::ReturnValue' has a wrong offset!");

// Function KuroTDM.TDMStaticLibrary.GetDeviceInfo
// 0x0010 (0x0010 - 0x0000)
struct TDMStaticLibrary_GetDeviceInfo final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TDMStaticLibrary_GetDeviceInfo) == 0x000008, "Wrong alignment on TDMStaticLibrary_GetDeviceInfo");
static_assert(sizeof(TDMStaticLibrary_GetDeviceInfo) == 0x000010, "Wrong size on TDMStaticLibrary_GetDeviceInfo");
static_assert(offsetof(TDMStaticLibrary_GetDeviceInfo, ReturnValue) == 0x000000, "Member 'TDMStaticLibrary_GetDeviceInfo::ReturnValue' has a wrong offset!");

// Function KuroTDM.TDMStaticLibrary.Initialize
// 0x0038 (0x0038 - 0x0000)
struct TDMStaticLibrary_Initialize final
{
public:
	class FString                                 AppId;                                             // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 AppChannel;                                        // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 AppKey;                                            // 0x0020(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_230F[0x7];                                     // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(TDMStaticLibrary_Initialize) == 0x000008, "Wrong alignment on TDMStaticLibrary_Initialize");
static_assert(sizeof(TDMStaticLibrary_Initialize) == 0x000038, "Wrong size on TDMStaticLibrary_Initialize");
static_assert(offsetof(TDMStaticLibrary_Initialize, AppId) == 0x000000, "Member 'TDMStaticLibrary_Initialize::AppId' has a wrong offset!");
static_assert(offsetof(TDMStaticLibrary_Initialize, AppChannel) == 0x000010, "Member 'TDMStaticLibrary_Initialize::AppChannel' has a wrong offset!");
static_assert(offsetof(TDMStaticLibrary_Initialize, AppKey) == 0x000020, "Member 'TDMStaticLibrary_Initialize::AppKey' has a wrong offset!");
static_assert(offsetof(TDMStaticLibrary_Initialize, ReturnValue) == 0x000030, "Member 'TDMStaticLibrary_Initialize::ReturnValue' has a wrong offset!");

// Function KuroTDM.TDMStaticLibrary.SetRouterAddress
// 0x0018 (0x0018 - 0x0000)
struct TDMStaticLibrary_SetRouterAddress final
{
public:
	bool                                          IsTest;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2310[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Address;                                           // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TDMStaticLibrary_SetRouterAddress) == 0x000008, "Wrong alignment on TDMStaticLibrary_SetRouterAddress");
static_assert(sizeof(TDMStaticLibrary_SetRouterAddress) == 0x000018, "Wrong size on TDMStaticLibrary_SetRouterAddress");
static_assert(offsetof(TDMStaticLibrary_SetRouterAddress, IsTest) == 0x000000, "Member 'TDMStaticLibrary_SetRouterAddress::IsTest' has a wrong offset!");
static_assert(offsetof(TDMStaticLibrary_SetRouterAddress, Address) == 0x000008, "Member 'TDMStaticLibrary_SetRouterAddress::Address' has a wrong offset!");

}
