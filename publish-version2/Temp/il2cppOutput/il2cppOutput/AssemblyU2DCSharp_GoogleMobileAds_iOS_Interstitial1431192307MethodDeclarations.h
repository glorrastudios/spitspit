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

// GoogleMobileAds.iOS.InterstitialClient
struct InterstitialClient_t1431192307;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1359043831;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t3535390332;
// System.String
struct String_t;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t3426784583;
// GoogleMobileAds.Api.IDefaultInAppPurchaseProcessor
struct IDefaultInAppPurchaseProcessor_t2166849928;
// GoogleMobileAds.Api.ICustomInAppPurchaseProcessor
struct ICustomInAppPurchaseProcessor_t137891690;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdRequest3426784583.h"

// System.Void GoogleMobileAds.iOS.InterstitialClient::.ctor()
extern "C"  void InterstitialClient__ctor_m934446666 (InterstitialClient_t1431192307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialClient_add_OnAdLoaded_m3797134985 (InterstitialClient_t1431192307 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialClient_remove_OnAdLoaded_m2655185022 (InterstitialClient_t1431192307 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void InterstitialClient_add_OnAdFailedToLoad_m3632639687 (InterstitialClient_t1431192307 * __this, EventHandler_1_t3535390332 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void InterstitialClient_remove_OnAdFailedToLoad_m680019826 (InterstitialClient_t1431192307 * __this, EventHandler_1_t3535390332 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialClient_add_OnAdOpening_m147978600 (InterstitialClient_t1431192307 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialClient_remove_OnAdOpening_m3402235411 (InterstitialClient_t1431192307 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::add_OnAdClosing(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialClient_add_OnAdClosing_m3241746091 (InterstitialClient_t1431192307 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::remove_OnAdClosing(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialClient_remove_OnAdClosing_m2201035606 (InterstitialClient_t1431192307 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialClient_add_OnAdClosed_m1967553794 (InterstitialClient_t1431192307 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialClient_remove_OnAdClosed_m825603831 (InterstitialClient_t1431192307 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::add_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialClient_add_OnAdLeavingApplication_m2917421810 (InterstitialClient_t1431192307 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::remove_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void InterstitialClient_remove_OnAdLeavingApplication_m1797997927 (InterstitialClient_t1431192307 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.InterstitialClient::get_InterstitialPtr()
extern "C"  IntPtr_t InterstitialClient_get_InterstitialPtr_m1887945420 (InterstitialClient_t1431192307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::set_InterstitialPtr(System.IntPtr)
extern "C"  void InterstitialClient_set_InterstitialPtr_m3943331143 (InterstitialClient_t1431192307 * __this, IntPtr_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::CreateInterstitialAd(System.String)
extern "C"  void InterstitialClient_CreateInterstitialAd_m1285454237 (InterstitialClient_t1431192307 * __this, String_t* ___adUnitId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::LoadAd(GoogleMobileAds.Api.AdRequest)
extern "C"  void InterstitialClient_LoadAd_m3057531792 (InterstitialClient_t1431192307 * __this, AdRequest_t3426784583 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleMobileAds.iOS.InterstitialClient::IsLoaded()
extern "C"  bool InterstitialClient_IsLoaded_m1950577917 (InterstitialClient_t1431192307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::ShowInterstitial()
extern "C"  void InterstitialClient_ShowInterstitial_m4240792771 (InterstitialClient_t1431192307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::DestroyInterstitial()
extern "C"  void InterstitialClient_DestroyInterstitial_m1341089262 (InterstitialClient_t1431192307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::Dispose()
extern "C"  void InterstitialClient_Dispose_m253364231 (InterstitialClient_t1431192307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::Finalize()
extern "C"  void InterstitialClient_Finalize_m2520088024 (InterstitialClient_t1431192307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::SetDefaultInAppPurchaseProcessor(GoogleMobileAds.Api.IDefaultInAppPurchaseProcessor)
extern "C"  void InterstitialClient_SetDefaultInAppPurchaseProcessor_m1578435348 (InterstitialClient_t1431192307 * __this, Il2CppObject * ___processor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::SetCustomInAppPurchaseProcessor(GoogleMobileAds.Api.ICustomInAppPurchaseProcessor)
extern "C"  void InterstitialClient_SetCustomInAppPurchaseProcessor_m3026643104 (InterstitialClient_t1431192307 * __this, Il2CppObject * ___processor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::InterstitialDidReceiveAdCallback(System.IntPtr)
extern "C"  void InterstitialClient_InterstitialDidReceiveAdCallback_m3834273282 (Il2CppObject * __this /* static, unused */, IntPtr_t ___interstitialClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::InterstitialDidFailToReceiveAdWithErrorCallback(System.IntPtr,System.String)
extern "C"  void InterstitialClient_InterstitialDidFailToReceiveAdWithErrorCallback_m2030413979 (Il2CppObject * __this /* static, unused */, IntPtr_t ___interstitialClient0, String_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::InterstitialWillPresentScreenCallback(System.IntPtr)
extern "C"  void InterstitialClient_InterstitialWillPresentScreenCallback_m2994835518 (Il2CppObject * __this /* static, unused */, IntPtr_t ___interstitialClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::InterstitialDidDismissScreenCallback(System.IntPtr)
extern "C"  void InterstitialClient_InterstitialDidDismissScreenCallback_m2147047890 (Il2CppObject * __this /* static, unused */, IntPtr_t ___interstitialClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.InterstitialClient::InterstitialWillLeaveApplicationCallback(System.IntPtr)
extern "C"  void InterstitialClient_InterstitialWillLeaveApplicationCallback_m4022035742 (Il2CppObject * __this /* static, unused */, IntPtr_t ___interstitialClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.iOS.InterstitialClient GoogleMobileAds.iOS.InterstitialClient::IntPtrToInterstitialClient(System.IntPtr)
extern "C"  InterstitialClient_t1431192307 * InterstitialClient_IntPtrToInterstitialClient_m1567230269 (Il2CppObject * __this /* static, unused */, IntPtr_t ___interstitialClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
