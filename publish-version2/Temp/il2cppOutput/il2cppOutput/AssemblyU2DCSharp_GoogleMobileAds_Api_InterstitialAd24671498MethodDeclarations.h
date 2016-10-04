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

// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t24671498;
// System.String
struct String_t;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1359043831;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t3535390332;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t3426784583;
// GoogleMobileAds.Api.IDefaultInAppPurchaseProcessor
struct IDefaultInAppPurchaseProcessor_t2166849928;
// GoogleMobileAds.Api.ICustomInAppPurchaseProcessor
struct ICustomInAppPurchaseProcessor_t137891690;
// System.Object
struct Il2CppObject;
// System.EventArgs
struct EventArgs_t516466188;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_t2692812689;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdRequest3426784583.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_EventArgs516466188.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdFailedToLo2692812689.h"

// System.Void GoogleMobileAds.Api.InterstitialAd::.ctor(System.String)
extern "C"  void InterstitialAd__ctor_m1046007939 (InterstitialAd_t24671498 * __this, String_t* ___adUnitId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialAd_add_OnAdLoaded_m4237114142 (InterstitialAd_t24671498 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialAd_remove_OnAdLoaded_m1834063817 (InterstitialAd_t24671498 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void InterstitialAd_add_OnAdFailedToLoad_m2620049618 (InterstitialAd_t24671498 * __this, EventHandler_1_t3535390332 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void InterstitialAd_remove_OnAdFailedToLoad_m2459561351 (InterstitialAd_t24671498 * __this, EventHandler_1_t3535390332 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialAd_add_OnAdOpening_m902430579 (InterstitialAd_t24671498 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialAd_remove_OnAdOpening_m3717281832 (InterstitialAd_t24671498 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialAd_add_OnAdClosed_m2407532951 (InterstitialAd_t24671498 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialAd_remove_OnAdClosed_m4482626 (InterstitialAd_t24671498 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialAd_add_OnAdLeavingApplication_m3027150855 (InterstitialAd_t24671498 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialAd_remove_OnAdLeavingApplication_m2265865266 (InterstitialAd_t24671498 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::LoadAd(GoogleMobileAds.Api.AdRequest)
extern "C"  void InterstitialAd_LoadAd_m1017394021 (InterstitialAd_t24671498 * __this, AdRequest_t3426784583 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleMobileAds.Api.InterstitialAd::IsLoaded()
extern "C"  bool InterstitialAd_IsLoaded_m3292594248 (InterstitialAd_t24671498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::Show()
extern "C"  void InterstitialAd_Show_m2208969794 (InterstitialAd_t24671498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::Destroy()
extern "C"  void InterstitialAd_Destroy_m3873443959 (InterstitialAd_t24671498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::SetInAppPurchaseProcessor(GoogleMobileAds.Api.IDefaultInAppPurchaseProcessor)
extern "C"  void InterstitialAd_SetInAppPurchaseProcessor_m3823557434 (InterstitialAd_t24671498 * __this, Il2CppObject * ___processor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::SetInAppPurchaseProcessor(GoogleMobileAds.Api.ICustomInAppPurchaseProcessor)
extern "C"  void InterstitialAd_SetInAppPurchaseProcessor_m288847068 (InterstitialAd_t24671498 * __this, Il2CppObject * ___processor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<OnAdLoaded>m__C(System.Object,System.EventArgs)
extern "C"  void InterstitialAd_U3COnAdLoadedU3Em__C_m2187094544 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, EventArgs_t516466188 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<OnAdFailedToLoad>m__D(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
extern "C"  void InterstitialAd_U3COnAdFailedToLoadU3Em__D_m1356935897 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, AdFailedToLoadEventArgs_t2692812689 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<OnAdOpening>m__E(System.Object,System.EventArgs)
extern "C"  void InterstitialAd_U3COnAdOpeningU3Em__E_m2909665235 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, EventArgs_t516466188 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<OnAdClosed>m__F(System.Object,System.EventArgs)
extern "C"  void InterstitialAd_U3COnAdClosedU3Em__F_m2716504332 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, EventArgs_t516466188 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<OnAdLeavingApplication>m__10(System.Object,System.EventArgs)
extern "C"  void InterstitialAd_U3COnAdLeavingApplicationU3Em__10_m3326726527 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, EventArgs_t516466188 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__11(System.Object,System.EventArgs)
extern "C"  void InterstitialAd_U3CInterstitialAdU3Em__11_m4230168625 (InterstitialAd_t24671498 * __this, Il2CppObject * ___sender0, EventArgs_t516466188 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__12(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
extern "C"  void InterstitialAd_U3CInterstitialAdU3Em__12_m3518126847 (InterstitialAd_t24671498 * __this, Il2CppObject * ___sender0, AdFailedToLoadEventArgs_t2692812689 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__13(System.Object,System.EventArgs)
extern "C"  void InterstitialAd_U3CInterstitialAdU3Em__13_m4157782067 (InterstitialAd_t24671498 * __this, Il2CppObject * ___sender0, EventArgs_t516466188 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__14(System.Object,System.EventArgs)
extern "C"  void InterstitialAd_U3CInterstitialAdU3Em__14_m1974105140 (InterstitialAd_t24671498 * __this, Il2CppObject * ___sender0, EventArgs_t516466188 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__15(System.Object,System.EventArgs)
extern "C"  void InterstitialAd_U3CInterstitialAdU3Em__15_m4085395509 (InterstitialAd_t24671498 * __this, Il2CppObject * ___sender0, EventArgs_t516466188 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
