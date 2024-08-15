#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeLingPipeSDK

#include "Basic.hpp"


namespace SDK::Params
{

// Function WeLingPipeSDK.PipeWrapper.InitPipe
// 0x0001 (0x0001 - 0x0000)
struct PipeWrapper_InitPipe final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PipeWrapper_InitPipe) == 0x000001, "Wrong alignment on PipeWrapper_InitPipe");
static_assert(sizeof(PipeWrapper_InitPipe) == 0x000001, "Wrong size on PipeWrapper_InitPipe");
static_assert(offsetof(PipeWrapper_InitPipe, ReturnValue) == 0x000000, "Member 'PipeWrapper_InitPipe::ReturnValue' has a wrong offset!");

// Function WeLingPipeSDK.PipeWrapper.SendDataToPipeBinary
// 0x0018 (0x0018 - 0x0000)
struct PipeWrapper_SendDataToPipeBinary final
{
public:
	TArray<uint8>                                 Data;                                              // 0x0000(0x0010)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_239E[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PipeWrapper_SendDataToPipeBinary) == 0x000008, "Wrong alignment on PipeWrapper_SendDataToPipeBinary");
static_assert(sizeof(PipeWrapper_SendDataToPipeBinary) == 0x000018, "Wrong size on PipeWrapper_SendDataToPipeBinary");
static_assert(offsetof(PipeWrapper_SendDataToPipeBinary, Data) == 0x000000, "Member 'PipeWrapper_SendDataToPipeBinary::Data' has a wrong offset!");
static_assert(offsetof(PipeWrapper_SendDataToPipeBinary, ReturnValue) == 0x000010, "Member 'PipeWrapper_SendDataToPipeBinary::ReturnValue' has a wrong offset!");

// Function WeLingPipeSDK.PipeWrapper.SendDataToPipeBinaryWithKey
// 0x0028 (0x0028 - 0x0000)
struct PipeWrapper_SendDataToPipeBinaryWithKey final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                 Data;                                              // 0x0010(0x0010)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_239F[0x7];                                     // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PipeWrapper_SendDataToPipeBinaryWithKey) == 0x000008, "Wrong alignment on PipeWrapper_SendDataToPipeBinaryWithKey");
static_assert(sizeof(PipeWrapper_SendDataToPipeBinaryWithKey) == 0x000028, "Wrong size on PipeWrapper_SendDataToPipeBinaryWithKey");
static_assert(offsetof(PipeWrapper_SendDataToPipeBinaryWithKey, Key) == 0x000000, "Member 'PipeWrapper_SendDataToPipeBinaryWithKey::Key' has a wrong offset!");
static_assert(offsetof(PipeWrapper_SendDataToPipeBinaryWithKey, Data) == 0x000010, "Member 'PipeWrapper_SendDataToPipeBinaryWithKey::Data' has a wrong offset!");
static_assert(offsetof(PipeWrapper_SendDataToPipeBinaryWithKey, ReturnValue) == 0x000020, "Member 'PipeWrapper_SendDataToPipeBinaryWithKey::ReturnValue' has a wrong offset!");

// Function WeLingPipeSDK.PipeWrapper.SendDataToPipeBinaryWithKeyEx
// 0x0038 (0x0038 - 0x0000)
struct PipeWrapper_SendDataToPipeBinaryWithKeyEx final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                 Data;                                              // 0x0010(0x0010)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                 Userid;                                            // 0x0020(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_23A0[0x7];                                     // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PipeWrapper_SendDataToPipeBinaryWithKeyEx) == 0x000008, "Wrong alignment on PipeWrapper_SendDataToPipeBinaryWithKeyEx");
static_assert(sizeof(PipeWrapper_SendDataToPipeBinaryWithKeyEx) == 0x000038, "Wrong size on PipeWrapper_SendDataToPipeBinaryWithKeyEx");
static_assert(offsetof(PipeWrapper_SendDataToPipeBinaryWithKeyEx, Key) == 0x000000, "Member 'PipeWrapper_SendDataToPipeBinaryWithKeyEx::Key' has a wrong offset!");
static_assert(offsetof(PipeWrapper_SendDataToPipeBinaryWithKeyEx, Data) == 0x000010, "Member 'PipeWrapper_SendDataToPipeBinaryWithKeyEx::Data' has a wrong offset!");
static_assert(offsetof(PipeWrapper_SendDataToPipeBinaryWithKeyEx, Userid) == 0x000020, "Member 'PipeWrapper_SendDataToPipeBinaryWithKeyEx::Userid' has a wrong offset!");
static_assert(offsetof(PipeWrapper_SendDataToPipeBinaryWithKeyEx, ReturnValue) == 0x000030, "Member 'PipeWrapper_SendDataToPipeBinaryWithKeyEx::ReturnValue' has a wrong offset!");

// Function WeLingPipeSDK.PipeWrapper.TestString
// 0x0010 (0x0010 - 0x0000)
struct PipeWrapper_TestString final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PipeWrapper_TestString) == 0x000008, "Wrong alignment on PipeWrapper_TestString");
static_assert(sizeof(PipeWrapper_TestString) == 0x000010, "Wrong size on PipeWrapper_TestString");
static_assert(offsetof(PipeWrapper_TestString, ReturnValue) == 0x000000, "Member 'PipeWrapper_TestString::ReturnValue' has a wrong offset!");

}
