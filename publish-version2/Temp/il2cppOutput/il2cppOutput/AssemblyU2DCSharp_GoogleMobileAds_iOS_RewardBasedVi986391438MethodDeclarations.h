﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback
struct GADURewardBasedVideoAdDidRewardCallback_t986391438;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GADURewardBasedVideoAdDidRewardCallback__ctor_m1833658117 (GADURewardBasedVideoAdDidRewardCallback_t986391438 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback::Invoke(System.IntPtr,System.String,System.Double)
extern "C"  void GADURewardBasedVideoAdDidRewardCallback_Invoke_m1657487693 (GADURewardBasedVideoAdDidRewardCallback_t986391438 * __this, IntPtr_t ___rewardBasedVideoAdClient0, String_t* ___rewardType1, double ___rewardAmount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_GADURewardBasedVideoAdDidRewardCallback_t986391438(Il2CppObject* delegate, IntPtr_t ___rewardBasedVideoAdClient0, String_t* ___rewardType1, double ___rewardAmount2);
// System.IAsyncResult GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback::BeginInvoke(System.IntPtr,System.String,System.Double,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GADURewardBasedVideoAdDidRewardCallback_BeginInvoke_m861138430 (GADURewardBasedVideoAdDidRewardCallback_t986391438 * __this, IntPtr_t ___rewardBasedVideoAdClient0, String_t* ___rewardType1, double ___rewardAmount2, AsyncCallback_t1363551830 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback::EndInvoke(System.IAsyncResult)
extern "C"  void GADURewardBasedVideoAdDidRewardCallback_EndInvoke_m1418535829 (GADURewardBasedVideoAdDidRewardCallback_t986391438 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
