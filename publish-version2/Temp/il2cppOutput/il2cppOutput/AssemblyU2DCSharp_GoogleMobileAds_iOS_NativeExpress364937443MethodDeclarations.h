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

// GoogleMobileAds.iOS.NativeExpressAdClient
struct NativeExpressAdClient_t364937443;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1359043831;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t3535390332;
// System.String
struct String_t;
// GoogleMobileAds.Api.AdSize
struct AdSize_t1660344159;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t3426784583;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdSize1660344159.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdPosition271673095.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdRequest3426784583.h"

// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::.ctor()
extern "C"  void NativeExpressAdClient__ctor_m1420334430 (NativeExpressAdClient_t364937443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdClient_add_OnAdLoaded_m34588061 (NativeExpressAdClient_t364937443 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdClient_remove_OnAdLoaded_m2676263146 (NativeExpressAdClient_t364937443 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void NativeExpressAdClient_add_OnAdFailedToLoad_m1097058867 (NativeExpressAdClient_t364937443 * __this, EventHandler_1_t3535390332 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void NativeExpressAdClient_remove_OnAdFailedToLoad_m3076613254 (NativeExpressAdClient_t364937443 * __this, EventHandler_1_t3535390332 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdClient_add_OnAdOpening_m3768108244 (NativeExpressAdClient_t364937443 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdClient_remove_OnAdOpening_m4055657255 (NativeExpressAdClient_t364937443 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdClient_add_OnAdClosed_m2499974166 (NativeExpressAdClient_t364937443 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdClient_remove_OnAdClosed_m846681955 (NativeExpressAdClient_t364937443 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::add_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdClient_add_OnAdLeavingApplication_m2071096326 (NativeExpressAdClient_t364937443 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::remove_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdClient_remove_OnAdLeavingApplication_m373531603 (NativeExpressAdClient_t364937443 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.NativeExpressAdClient::get_NativeExpressAdViewPtr()
extern "C"  IntPtr_t NativeExpressAdClient_get_NativeExpressAdViewPtr_m2963577831 (NativeExpressAdClient_t364937443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::set_NativeExpressAdViewPtr(System.IntPtr)
extern "C"  void NativeExpressAdClient_set_NativeExpressAdViewPtr_m1805488356 (NativeExpressAdClient_t364937443 * __this, IntPtr_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::CreateNativeExpressAdView(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
extern "C"  void NativeExpressAdClient_CreateNativeExpressAdView_m1335509721 (NativeExpressAdClient_t364937443 * __this, String_t* ___adUnitId0, AdSize_t1660344159 * ___adSize1, int32_t ___position2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::LoadAd(GoogleMobileAds.Api.AdRequest)
extern "C"  void NativeExpressAdClient_LoadAd_m2258612132 (NativeExpressAdClient_t364937443 * __this, AdRequest_t3426784583 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::ShowNativeExpressAdView()
extern "C"  void NativeExpressAdClient_ShowNativeExpressAdView_m1690822816 (NativeExpressAdClient_t364937443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::HideNativeExpressAdView()
extern "C"  void NativeExpressAdClient_HideNativeExpressAdView_m221082491 (NativeExpressAdClient_t364937443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::DestroyNativeExpressAdView()
extern "C"  void NativeExpressAdClient_DestroyNativeExpressAdView_m1685077101 (NativeExpressAdClient_t364937443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::Dispose()
extern "C"  void NativeExpressAdClient_Dispose_m3335037467 (NativeExpressAdClient_t364937443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::Finalize()
extern "C"  void NativeExpressAdClient_Finalize_m3562677828 (NativeExpressAdClient_t364937443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::NativeExpressAdViewDidReceiveAdCallback(System.IntPtr)
extern "C"  void NativeExpressAdClient_NativeExpressAdViewDidReceiveAdCallback_m1418453163 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeExpressClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::NativeExpressAdViewDidFailToReceiveAdWithErrorCallback(System.IntPtr,System.String)
extern "C"  void NativeExpressAdClient_NativeExpressAdViewDidFailToReceiveAdWithErrorCallback_m3586699922 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeExpressClient0, String_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::NativeExpressAdViewWillPresentScreenCallback(System.IntPtr)
extern "C"  void NativeExpressAdClient_NativeExpressAdViewWillPresentScreenCallback_m293883701 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeExpressClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::NativeExpressAdViewDidDismissScreenCallback(System.IntPtr)
extern "C"  void NativeExpressAdClient_NativeExpressAdViewDidDismissScreenCallback_m951541755 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeExpressClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.NativeExpressAdClient::NativeExpressAdViewWillLeaveApplicationCallback(System.IntPtr)
extern "C"  void NativeExpressAdClient_NativeExpressAdViewWillLeaveApplicationCallback_m1883778759 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeExpressClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.iOS.NativeExpressAdClient GoogleMobileAds.iOS.NativeExpressAdClient::IntPtrToNativeExpressAdClient(System.IntPtr)
extern "C"  NativeExpressAdClient_t364937443 * NativeExpressAdClient_IntPtrToNativeExpressAdClient_m3208507301 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeExpressAdClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
