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

// GoogleMobileAds.iOS.BannerClient
struct BannerClient_t471724787;
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

// System.Void GoogleMobileAds.iOS.BannerClient::.ctor()
extern "C"  void BannerClient__ctor_m1468810442 (BannerClient_t471724787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerClient_add_OnAdLoaded_m1900440841 (BannerClient_t471724787 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerClient_remove_OnAdLoaded_m2829687294 (BannerClient_t471724787 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void BannerClient_add_OnAdFailedToLoad_m2470756423 (BannerClient_t471724787 * __this, EventHandler_1_t3535390332 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void BannerClient_remove_OnAdFailedToLoad_m157140466 (BannerClient_t471724787 * __this, EventHandler_1_t3535390332 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerClient_add_OnAdOpening_m1480002280 (BannerClient_t471724787 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerClient_remove_OnAdOpening_m221871251 (BannerClient_t471724787 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerClient_add_OnAdClosed_m70859650 (BannerClient_t471724787 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerClient_remove_OnAdClosed_m1000106103 (BannerClient_t471724787 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::add_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerClient_add_OnAdLeavingApplication_m3794620786 (BannerClient_t471724787 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::remove_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerClient_remove_OnAdLeavingApplication_m3851663079 (BannerClient_t471724787 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.BannerClient::get_BannerViewPtr()
extern "C"  IntPtr_t BannerClient_get_BannerViewPtr_m993871399 (BannerClient_t471724787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::set_BannerViewPtr(System.IntPtr)
extern "C"  void BannerClient_set_BannerViewPtr_m2390443468 (BannerClient_t471724787 * __this, IntPtr_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::CreateBannerView(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
extern "C"  void BannerClient_CreateBannerView_m398772435 (BannerClient_t471724787 * __this, String_t* ___adUnitId0, AdSize_t1660344159 * ___adSize1, int32_t ___position2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::LoadAd(GoogleMobileAds.Api.AdRequest)
extern "C"  void BannerClient_LoadAd_m2371590672 (BannerClient_t471724787 * __this, AdRequest_t3426784583 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::ShowBannerView()
extern "C"  void BannerClient_ShowBannerView_m1979322184 (BannerClient_t471724787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::HideBannerView()
extern "C"  void BannerClient_HideBannerView_m2765279757 (BannerClient_t471724787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::DestroyBannerView()
extern "C"  void BannerClient_DestroyBannerView_m395695155 (BannerClient_t471724787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::Dispose()
extern "C"  void BannerClient_Dispose_m2675844743 (BannerClient_t471724787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::Finalize()
extern "C"  void BannerClient_Finalize_m307572568 (BannerClient_t471724787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::AdViewDidReceiveAdCallback(System.IntPtr)
extern "C"  void BannerClient_AdViewDidReceiveAdCallback_m2089632262 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bannerClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::AdViewDidFailToReceiveAdWithErrorCallback(System.IntPtr,System.String)
extern "C"  void BannerClient_AdViewDidFailToReceiveAdWithErrorCallback_m63959831 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bannerClient0, String_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::AdViewWillPresentScreenCallback(System.IntPtr)
extern "C"  void BannerClient_AdViewWillPresentScreenCallback_m3816853178 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bannerClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::AdViewDidDismissScreenCallback(System.IntPtr)
extern "C"  void BannerClient_AdViewDidDismissScreenCallback_m3559037910 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bannerClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.BannerClient::AdViewWillLeaveApplicationCallback(System.IntPtr)
extern "C"  void BannerClient_AdViewWillLeaveApplicationCallback_m2846623010 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bannerClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.iOS.BannerClient GoogleMobileAds.iOS.BannerClient::IntPtrToBannerClient(System.IntPtr)
extern "C"  BannerClient_t471724787 * BannerClient_IntPtrToBannerClient_m2060306237 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bannerClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
