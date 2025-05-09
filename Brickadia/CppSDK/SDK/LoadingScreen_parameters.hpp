﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoadingScreen

#include "Basic.hpp"


namespace SDK::Params
{

// Function LoadingScreen.LoadingScreenLibrary.GetLoadingFrameIndex
// 0x000C (0x000C - 0x0000)
struct LoadingScreenLibrary_GetLoadingFrameIndex final
{
public:
	int32                                         NumFrames;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Speed;                                             // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LoadingScreenLibrary_GetLoadingFrameIndex) == 0x000004, "Wrong alignment on LoadingScreenLibrary_GetLoadingFrameIndex");
static_assert(sizeof(LoadingScreenLibrary_GetLoadingFrameIndex) == 0x00000C, "Wrong size on LoadingScreenLibrary_GetLoadingFrameIndex");
static_assert(offsetof(LoadingScreenLibrary_GetLoadingFrameIndex, NumFrames) == 0x000000, "Member 'LoadingScreenLibrary_GetLoadingFrameIndex::NumFrames' has a wrong offset!");
static_assert(offsetof(LoadingScreenLibrary_GetLoadingFrameIndex, Speed) == 0x000004, "Member 'LoadingScreenLibrary_GetLoadingFrameIndex::Speed' has a wrong offset!");
static_assert(offsetof(LoadingScreenLibrary_GetLoadingFrameIndex, ReturnValue) == 0x000008, "Member 'LoadingScreenLibrary_GetLoadingFrameIndex::ReturnValue' has a wrong offset!");

}

