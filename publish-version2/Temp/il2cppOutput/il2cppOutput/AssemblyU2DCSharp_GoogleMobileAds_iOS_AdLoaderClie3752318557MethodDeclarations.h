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

// GoogleMobileAds.iOS.AdLoaderClient
struct AdLoaderClient_t3752318557;
// GoogleMobileAds.Api.AdLoader
struct AdLoader_t2155412145;
// System.EventHandler`1<GoogleMobileAds.Api.CustomNativeEventArgs>
struct EventHandler_1_t1892608981;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t3535390332;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t3426784583;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdLoader2155412145.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdRequest3426784583.h"
#include "mscorlib_System_String968488902.h"

// System.Void GoogleMobileAds.iOS.AdLoaderClient::.ctor(GoogleMobileAds.Api.AdLoader)
extern "C"  void AdLoaderClient__ctor_m3575227997 (AdLoaderClient_t3752318557 * __this, AdLoader_t2155412145 * ___unityAdLoader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::add_OnCustomNativeTemplateAdLoaded(System.EventHandler`1<GoogleMobileAds.Api.CustomNativeEventArgs>)
extern "C"  void AdLoaderClient_add_OnCustomNativeTemplateAdLoaded_m1202062035 (AdLoaderClient_t3752318557 * __this, EventHandler_1_t1892608981 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::remove_OnCustomNativeTemplateAdLoaded(System.EventHandler`1<GoogleMobileAds.Api.CustomNativeEventArgs>)
extern "C"  void AdLoaderClient_remove_OnCustomNativeTemplateAdLoaded_m2580924650 (AdLoaderClient_t3752318557 * __this, EventHandler_1_t1892608981 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void AdLoaderClient_add_OnAdFailedToLoad_m3820896945 (AdLoaderClient_t3752318557 * __this, EventHandler_1_t3535390332 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void AdLoaderClient_remove_OnAdFailedToLoad_m4119671624 (AdLoaderClient_t3752318557 * __this, EventHandler_1_t3535390332 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.AdLoaderClient::get_AdLoaderPtr()
extern "C"  IntPtr_t AdLoaderClient_get_AdLoaderPtr_m3707945848 (AdLoaderClient_t3752318557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::set_AdLoaderPtr(System.IntPtr)
extern "C"  void AdLoaderClient_set_AdLoaderPtr_m491438363 (AdLoaderClient_t3752318557 * __this, IntPtr_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::LoadAd(GoogleMobileAds.Api.AdRequest)
extern "C"  void AdLoaderClient_LoadAd_m762610662 (AdLoaderClient_t3752318557 * __this, AdRequest_t3426784583 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::DestroyAdLoader()
extern "C"  void AdLoaderClient_DestroyAdLoader_m1235748398 (AdLoaderClient_t3752318557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::Dispose()
extern "C"  void AdLoaderClient_Dispose_m1568869725 (AdLoaderClient_t3752318557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::Finalize()
extern "C"  void AdLoaderClient_Finalize_m351085378 (AdLoaderClient_t3752318557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::AdLoaderDidReceiveNativeCustomTemplateAdCallback(System.IntPtr,System.IntPtr,System.String)
extern "C"  void AdLoaderClient_AdLoaderDidReceiveNativeCustomTemplateAdCallback_m1224664342 (Il2CppObject * __this /* static, unused */, IntPtr_t ___adLoader0, IntPtr_t ___nativeCustomTemplateAd1, String_t* ___templateID2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.AdLoaderClient::AdLoaderDidFailToReceiveAdWithErrorCallback(System.IntPtr,System.String)
extern "C"  void AdLoaderClient_AdLoaderDidFailToReceiveAdWithErrorCallback_m2757804015 (Il2CppObject * __this /* static, unused */, IntPtr_t ___adLoader0, String_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.iOS.AdLoaderClient GoogleMobileAds.iOS.AdLoaderClient::IntPtrToAdLoaderClient(System.IntPtr)
extern "C"  AdLoaderClient_t3752318557 * AdLoaderClient_IntPtrToAdLoaderClient_m4043389139 (Il2CppObject * __this /* static, unused */, IntPtr_t ___adLoader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
