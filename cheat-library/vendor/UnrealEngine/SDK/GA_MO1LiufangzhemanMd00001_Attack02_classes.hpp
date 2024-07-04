#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_MO1LiufangzhemanMd00001_Attack02

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Monster_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_MO1LiufangzhemanMd00001_Attack02.GA_MO1LiufangzhemanMd00001_Attack02_C
// 0x0010 (0x0550 - 0x0540)
class UGA_MO1LiufangzhemanMd00001_Attack02_C final : public UGA_Monster_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_MO1LiufangzhemanMd00001_Attack02_C; // 0x0540(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          _b__;                                              // 0x0548(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GA_MO1LiufangzhemanMd00001_Attack02(int32 EntryPoint);
	void K2_ActivateAbility();
	void OnCompleted_5D118C384AE61F1C80292E81CD90F3BC();
	void OnBlendOut_5D118C384AE61F1C80292E81CD90F3BC();
	void OnInterrupted_5D118C384AE61F1C80292E81CD90F3BC();
	void OnCancelled_5D118C384AE61F1C80292E81CD90F3BC();
	void OnTick_5D118C384AE61F1C80292E81CD90F3BC();
	void EventReceived_18B59F5945020DB23C42FD88B3349666(const struct FGameplayEventData& Payload);
	void EventReceived_18B59F5945020DB23C42FD8809140418(const struct FGameplayEventData& Payload);
	void OnCompleted_5D118C384AE61F1C80292E81C80B11F1();
	void OnBlendOut_5D118C384AE61F1C80292E81C80B11F1();
	void OnInterrupted_5D118C384AE61F1C80292E81C80B11F1();
	void OnCancelled_5D118C384AE61F1C80292E81C80B11F1();
	void OnTick_5D118C384AE61F1C80292E81C80B11F1();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_MO1LiufangzhemanMd00001_Attack02_C">();
	}
	static class UGA_MO1LiufangzhemanMd00001_Attack02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_MO1LiufangzhemanMd00001_Attack02_C>();
	}
};
static_assert(alignof(UGA_MO1LiufangzhemanMd00001_Attack02_C) == 0x000008, "Wrong alignment on UGA_MO1LiufangzhemanMd00001_Attack02_C");
static_assert(sizeof(UGA_MO1LiufangzhemanMd00001_Attack02_C) == 0x000550, "Wrong size on UGA_MO1LiufangzhemanMd00001_Attack02_C");
static_assert(offsetof(UGA_MO1LiufangzhemanMd00001_Attack02_C, UberGraphFrame_GA_MO1LiufangzhemanMd00001_Attack02_C) == 0x000540, "Member 'UGA_MO1LiufangzhemanMd00001_Attack02_C::UberGraphFrame_GA_MO1LiufangzhemanMd00001_Attack02_C' has a wrong offset!");
static_assert(offsetof(UGA_MO1LiufangzhemanMd00001_Attack02_C, _b__) == 0x000548, "Member 'UGA_MO1LiufangzhemanMd00001_Attack02_C::_b__' has a wrong offset!");

}
