#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Summon_ChangeCharacter_Air

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Summon_Soul_Father_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Summon_ChangeCharacter_Air.GA_Summon_ChangeCharacter_Air_C
// 0x0040 (0x0598 - 0x0558)
class UGA_Summon_ChangeCharacter_Air_C final : public UGA_Summon_Soul_Father_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Summon_ChangeCharacter_Air_C;    // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int64                                         ___S_ID_0;                                         // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ______0;                                           // 0x0568(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3682[0x3];                                     // 0x0569(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ______0;                                           // 0x056C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __;                                                // 0x0570(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          _0__;                                              // 0x0574(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3683[0x3];                                     // 0x0575(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     __i_S;                                             // 0x0578(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __i_ID;                                            // 0x0580(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___;                                               // 0x0584(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     B_;                                                // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlockTime;                                         // 0x0590(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Summon_ChangeCharacter_Air(int32 EntryPoint);
	void K2_ActivateAbility();
	void OnCompleted_5D118C384AE61F1C80292E8105F434DC();
	void OnBlendOut_5D118C384AE61F1C80292E8105F434DC();
	void OnInterrupted_5D118C384AE61F1C80292E8105F434DC();
	void OnCancelled_5D118C384AE61F1C80292E8105F434DC();
	void OnTick_5D118C384AE61F1C80292E8105F434DC();
	void OnCompleted_5D118C384AE61F1C80292E81C0BEF616();
	void OnBlendOut_5D118C384AE61F1C80292E81C0BEF616();
	void OnInterrupted_5D118C384AE61F1C80292E81C0BEF616();
	void OnCancelled_5D118C384AE61F1C80292E81C0BEF616();
	void OnTick_5D118C384AE61F1C80292E81C0BEF616();
	void OnCompleted_5D118C384AE61F1C80292E8159A2FCF0();
	void OnBlendOut_5D118C384AE61F1C80292E8159A2FCF0();
	void OnInterrupted_5D118C384AE61F1C80292E8159A2FCF0();
	void OnCancelled_5D118C384AE61F1C80292E8159A2FCF0();
	void OnTick_5D118C384AE61F1C80292E8159A2FCF0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Summon_ChangeCharacter_Air_C">();
	}
	static class UGA_Summon_ChangeCharacter_Air_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Summon_ChangeCharacter_Air_C>();
	}
};
static_assert(alignof(UGA_Summon_ChangeCharacter_Air_C) == 0x000008, "Wrong alignment on UGA_Summon_ChangeCharacter_Air_C");
static_assert(sizeof(UGA_Summon_ChangeCharacter_Air_C) == 0x000598, "Wrong size on UGA_Summon_ChangeCharacter_Air_C");
static_assert(offsetof(UGA_Summon_ChangeCharacter_Air_C, UberGraphFrame_GA_Summon_ChangeCharacter_Air_C) == 0x000558, "Member 'UGA_Summon_ChangeCharacter_Air_C::UberGraphFrame_GA_Summon_ChangeCharacter_Air_C' has a wrong offset!");
static_assert(offsetof(UGA_Summon_ChangeCharacter_Air_C, ___S_ID_0) == 0x000560, "Member 'UGA_Summon_ChangeCharacter_Air_C::___S_ID_0' has a wrong offset!");
static_assert(offsetof(UGA_Summon_ChangeCharacter_Air_C, ______0) == 0x000568, "Member 'UGA_Summon_ChangeCharacter_Air_C::______0' has a wrong offset!");
static_assert(offsetof(UGA_Summon_ChangeCharacter_Air_C, ______0) == 0x00056C, "Member 'UGA_Summon_ChangeCharacter_Air_C::______0' has a wrong offset!");
static_assert(offsetof(UGA_Summon_ChangeCharacter_Air_C, __) == 0x000570, "Member 'UGA_Summon_ChangeCharacter_Air_C::__' has a wrong offset!");
static_assert(offsetof(UGA_Summon_ChangeCharacter_Air_C, _0__) == 0x000574, "Member 'UGA_Summon_ChangeCharacter_Air_C::_0__' has a wrong offset!");
static_assert(offsetof(UGA_Summon_ChangeCharacter_Air_C, __i_S) == 0x000578, "Member 'UGA_Summon_ChangeCharacter_Air_C::__i_S' has a wrong offset!");
static_assert(offsetof(UGA_Summon_ChangeCharacter_Air_C, __i_ID) == 0x000580, "Member 'UGA_Summon_ChangeCharacter_Air_C::__i_ID' has a wrong offset!");
static_assert(offsetof(UGA_Summon_ChangeCharacter_Air_C, ___) == 0x000584, "Member 'UGA_Summon_ChangeCharacter_Air_C::___' has a wrong offset!");
static_assert(offsetof(UGA_Summon_ChangeCharacter_Air_C, B_) == 0x000588, "Member 'UGA_Summon_ChangeCharacter_Air_C::B_' has a wrong offset!");
static_assert(offsetof(UGA_Summon_ChangeCharacter_Air_C, BlockTime) == 0x000590, "Member 'UGA_Summon_ChangeCharacter_Air_C::BlockTime' has a wrong offset!");

}
