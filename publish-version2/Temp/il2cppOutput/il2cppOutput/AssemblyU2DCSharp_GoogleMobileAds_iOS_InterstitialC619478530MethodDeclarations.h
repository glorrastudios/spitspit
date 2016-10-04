#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback
struct GADUInterstitialDidFailToReceiveAdWithErrorCallback_t619478530;
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

// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GADUInterstitialDidFailToReceiveAdWithErrorCallback__ctor_m2338407691 (GADUInterstitialDidFailToReceiveAdWithErrorCallback_t619478530 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback::Invoke(System.IntPtr,System.String)
extern "C"  void GADUInterstitialDidFailToReceiveAdWithErrorCallback_Invoke_m1228927307 (GADUInterstitialDidFailToReceiveAdWithErrorCallback_t619478530 * __this, IntPtr_t ___interstitialClient0, String_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_GADUInterstitialDidFailToReceiveAdWithErrorCallback_t619478530(Il2CppObject* delegate, IntPtr_t ___interstitialClient0, String_t* ___error1);
// System.IAsyncResult GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback::BeginInvoke(System.IntPtr,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GADUInterstitialDidFailToReceiveAdWithErrorCallback_BeginInvoke_m1363506612 (GADUInterstitialDidFailToReceiveAdWithErrorCallback_t619478530 * __this, IntPtr_t ___interstitialClient0, String_t* ___error1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback::EndInvoke(System.IAsyncResult)
extern "C"  void GADUInterstitialDidFailToReceiveAdWithErrorCallback_EndInvoke_m3785290907 (GADUInterstitialDidFailToReceiveAdWithErrorCallback_t619478530 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
