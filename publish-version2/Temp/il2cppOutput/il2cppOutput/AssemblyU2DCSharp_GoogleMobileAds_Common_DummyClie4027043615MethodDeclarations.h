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

// GoogleMobileAds.Common.DummyClient
struct DummyClient_t4027043615;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1359043831;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t3535390332;
// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_t2991605429;
// System.EventHandler`1<GoogleMobileAds.Api.CustomNativeEventArgs>
struct EventHandler_1_t1892608981;
// System.String
struct String_t;
// GoogleMobileAds.Api.AdSize
struct AdSize_t1660344159;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t3426784583;
// GoogleMobileAds.Api.IDefaultInAppPurchaseProcessor
struct IDefaultInAppPurchaseProcessor_t2166849928;
// GoogleMobileAds.Api.ICustomInAppPurchaseProcessor
struct ICustomInAppPurchaseProcessor_t137891690;
// GoogleMobileAds.Api.AdLoader/Builder
struct Builder_t1895597947;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdSize1660344159.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdPosition271673095.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdRequest3426784583.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdLoader_Bui1895597947.h"

// System.Void GoogleMobileAds.Common.DummyClient::.ctor()
extern "C"  void DummyClient__ctor_m1398304626 (DummyClient_t4027043615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void DummyClient_add_OnAdLoaded_m1789110193 (DummyClient_t4027043615 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void DummyClient_remove_OnAdLoaded_m1893105238 (DummyClient_t4027043615 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void DummyClient_add_OnAdFailedToLoad_m1221556895 (DummyClient_t4027043615 * __this, EventHandler_1_t3535390332 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void DummyClient_remove_OnAdFailedToLoad_m1145621658 (DummyClient_t4027043615 * __this, EventHandler_1_t3535390332 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void DummyClient_add_OnAdOpening_m2323719488 (DummyClient_t4027043615 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void DummyClient_remove_OnAdOpening_m1252598587 (DummyClient_t4027043615 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::add_OnAdStarted(System.EventHandler`1<System.EventArgs>)
extern "C"  void DummyClient_add_OnAdStarted_m115678263 (DummyClient_t4027043615 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::remove_OnAdStarted(System.EventHandler`1<System.EventArgs>)
extern "C"  void DummyClient_remove_OnAdStarted_m3339524658 (DummyClient_t4027043615 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void DummyClient_add_OnAdClosed_m4254496298 (DummyClient_t4027043615 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void DummyClient_remove_OnAdClosed_m63524047 (DummyClient_t4027043615 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::add_OnAdRewarded(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
extern "C"  void DummyClient_add_OnAdRewarded_m4026491948 (DummyClient_t4027043615 * __this, EventHandler_1_t2991605429 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::remove_OnAdRewarded(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
extern "C"  void DummyClient_remove_OnAdRewarded_m2098490193 (DummyClient_t4027043615 * __this, EventHandler_1_t2991605429 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::add_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void DummyClient_add_OnAdLeavingApplication_m3984576538 (DummyClient_t4027043615 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::remove_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void DummyClient_remove_OnAdLeavingApplication_m2056574783 (DummyClient_t4027043615 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::add_OnCustomNativeTemplateAdLoaded(System.EventHandler`1<GoogleMobileAds.Api.CustomNativeEventArgs>)
extern "C"  void DummyClient_add_OnCustomNativeTemplateAdLoaded_m2137834945 (DummyClient_t4027043615 * __this, EventHandler_1_t1892608981 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::remove_OnCustomNativeTemplateAdLoaded(System.EventHandler`1<GoogleMobileAds.Api.CustomNativeEventArgs>)
extern "C"  void DummyClient_remove_OnCustomNativeTemplateAdLoaded_m1558968124 (DummyClient_t4027043615 * __this, EventHandler_1_t1892608981 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GoogleMobileAds.Common.DummyClient::get_UserId()
extern "C"  String_t* DummyClient_get_UserId_m829728388 (DummyClient_t4027043615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::set_UserId(System.String)
extern "C"  void DummyClient_set_UserId_m719094349 (DummyClient_t4027043615 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::CreateBannerView(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
extern "C"  void DummyClient_CreateBannerView_m328292731 (DummyClient_t4027043615 * __this, String_t* ___adUnitId0, AdSize_t1660344159 * ___adSize1, int32_t ___position2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::LoadAd(GoogleMobileAds.Api.AdRequest)
extern "C"  void DummyClient_LoadAd_m3318066872 (DummyClient_t4027043615 * __this, AdRequest_t3426784583 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::ShowBannerView()
extern "C"  void DummyClient_ShowBannerView_m1550803360 (DummyClient_t4027043615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::HideBannerView()
extern "C"  void DummyClient_HideBannerView_m2336760933 (DummyClient_t4027043615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::DestroyBannerView()
extern "C"  void DummyClient_DestroyBannerView_m3329180379 (DummyClient_t4027043615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::CreateInterstitialAd(System.String)
extern "C"  void DummyClient_CreateInterstitialAd_m1513658053 (DummyClient_t4027043615 * __this, String_t* ___adUnitId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleMobileAds.Common.DummyClient::IsLoaded()
extern "C"  bool DummyClient_IsLoaded_m2599687381 (DummyClient_t4027043615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::ShowInterstitial()
extern "C"  void DummyClient_ShowInterstitial_m2068163227 (DummyClient_t4027043615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::DestroyInterstitial()
extern "C"  void DummyClient_DestroyInterstitial_m1691494678 (DummyClient_t4027043615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::CreateRewardBasedVideoAd()
extern "C"  void DummyClient_CreateRewardBasedVideoAd_m2875758920 (DummyClient_t4027043615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::SetUserId(System.String)
extern "C"  void DummyClient_SetUserId_m1814898090 (DummyClient_t4027043615 * __this, String_t* ___userId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::LoadAd(GoogleMobileAds.Api.AdRequest,System.String)
extern "C"  void DummyClient_LoadAd_m2439689460 (DummyClient_t4027043615 * __this, AdRequest_t3426784583 * ___request0, String_t* ___adUnitId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::DestroyRewardBasedVideoAd()
extern "C"  void DummyClient_DestroyRewardBasedVideoAd_m2442923844 (DummyClient_t4027043615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::ShowRewardBasedVideoAd()
extern "C"  void DummyClient_ShowRewardBasedVideoAd_m1162320137 (DummyClient_t4027043615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::SetDefaultInAppPurchaseProcessor(GoogleMobileAds.Api.IDefaultInAppPurchaseProcessor)
extern "C"  void DummyClient_SetDefaultInAppPurchaseProcessor_m3658382060 (DummyClient_t4027043615 * __this, Il2CppObject * ___processor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::SetCustomInAppPurchaseProcessor(GoogleMobileAds.Api.ICustomInAppPurchaseProcessor)
extern "C"  void DummyClient_SetCustomInAppPurchaseProcessor_m1670149752 (DummyClient_t4027043615 * __this, Il2CppObject * ___processor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::CreateAdLoader(GoogleMobileAds.Api.AdLoader/Builder)
extern "C"  void DummyClient_CreateAdLoader_m1047444821 (DummyClient_t4027043615 * __this, Builder_t1895597947 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::Load(GoogleMobileAds.Api.AdRequest)
extern "C"  void DummyClient_Load_m3194271131 (DummyClient_t4027043615 * __this, AdRequest_t3426784583 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::CreateNativeExpressAdView(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
extern "C"  void DummyClient_CreateNativeExpressAdView_m1487232069 (DummyClient_t4027043615 * __this, String_t* ___adUnitId0, AdSize_t1660344159 * ___adSize1, int32_t ___position2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::SetAdSize(GoogleMobileAds.Api.AdSize)
extern "C"  void DummyClient_SetAdSize_m2667276965 (DummyClient_t4027043615 * __this, AdSize_t1660344159 * ___adSize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::ShowNativeExpressAdView()
extern "C"  void DummyClient_ShowNativeExpressAdView_m3729057204 (DummyClient_t4027043615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::HideNativeExpressAdView()
extern "C"  void DummyClient_HideNativeExpressAdView_m2259316879 (DummyClient_t4027043615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::DestroyNativeExpressAdView()
extern "C"  void DummyClient_DestroyNativeExpressAdView_m478099161 (DummyClient_t4027043615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
