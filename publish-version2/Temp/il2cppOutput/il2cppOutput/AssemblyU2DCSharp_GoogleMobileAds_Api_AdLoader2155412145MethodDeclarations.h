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

// GoogleMobileAds.Api.AdLoader
struct AdLoader_t2155412145;
// GoogleMobileAds.Api.AdLoader/Builder
struct Builder_t1895597947;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t3535390332;
// System.EventHandler`1<GoogleMobileAds.Api.CustomNativeEventArgs>
struct EventHandler_1_t1892608981;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>>
struct Dictionary_2_t3583829236;
// System.String
struct String_t;
// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType>
struct HashSet_1_t143865390;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t3667177573;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t3426784583;
// System.Object
struct Il2CppObject;
// GoogleMobileAds.Api.CustomNativeEventArgs
struct CustomNativeEventArgs_t1050031338;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_t2692812689;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdLoader_Bui1895597947.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdRequest3426784583.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_CustomNative1050031338.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdFailedToLo2692812689.h"

// System.Void GoogleMobileAds.Api.AdLoader::.ctor(GoogleMobileAds.Api.AdLoader/Builder)
extern "C"  void AdLoader__ctor_m560222633 (AdLoader_t2155412145 * __this, Builder_t1895597947 * ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.AdLoader::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void AdLoader_add_OnAdFailedToLoad_m3142821753 (AdLoader_t2155412145 * __this, EventHandler_1_t3535390332 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.AdLoader::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void AdLoader_remove_OnAdFailedToLoad_m2812819840 (AdLoader_t2155412145 * __this, EventHandler_1_t3535390332 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.AdLoader::add_OnCustomNativeTemplateAdLoaded(System.EventHandler`1<GoogleMobileAds.Api.CustomNativeEventArgs>)
extern "C"  void AdLoader_add_OnCustomNativeTemplateAdLoaded_m3970071451 (AdLoader_t2155412145 * __this, EventHandler_1_t1892608981 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.AdLoader::remove_OnCustomNativeTemplateAdLoaded(System.EventHandler`1<GoogleMobileAds.Api.CustomNativeEventArgs>)
extern "C"  void AdLoader_remove_OnCustomNativeTemplateAdLoaded_m977353506 (AdLoader_t2155412145 * __this, EventHandler_1_t1892608981 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>> GoogleMobileAds.Api.AdLoader::get_CustomNativeTemplateClickHandlers()
extern "C"  Dictionary_2_t3583829236 * AdLoader_get_CustomNativeTemplateClickHandlers_m1020252363 (AdLoader_t2155412145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.AdLoader::set_CustomNativeTemplateClickHandlers(System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>>)
extern "C"  void AdLoader_set_CustomNativeTemplateClickHandlers_m3201019676 (AdLoader_t2155412145 * __this, Dictionary_2_t3583829236 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GoogleMobileAds.Api.AdLoader::get_AdUnitId()
extern "C"  String_t* AdLoader_get_AdUnitId_m513465690 (AdLoader_t2155412145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.AdLoader::set_AdUnitId(System.String)
extern "C"  void AdLoader_set_AdUnitId_m2648300983 (AdLoader_t2155412145 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType> GoogleMobileAds.Api.AdLoader::get_AdTypes()
extern "C"  HashSet_1_t143865390 * AdLoader_get_AdTypes_m1820371517 (AdLoader_t2155412145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.AdLoader::set_AdTypes(System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType>)
extern "C"  void AdLoader_set_AdTypes_m1994184920 (AdLoader_t2155412145 * __this, HashSet_1_t143865390 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdLoader::get_TemplateIds()
extern "C"  HashSet_1_t3667177573 * AdLoader_get_TemplateIds_m3692215916 (AdLoader_t2155412145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.AdLoader::set_TemplateIds(System.Collections.Generic.HashSet`1<System.String>)
extern "C"  void AdLoader_set_TemplateIds_m3051550887 (AdLoader_t2155412145 * __this, HashSet_1_t3667177573 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.AdLoader::LoadAd(GoogleMobileAds.Api.AdRequest)
extern "C"  void AdLoader_LoadAd_m3643073566 (AdLoader_t2155412145 * __this, AdRequest_t3426784583 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.AdLoader::<AdLoader>m__0(System.Object,GoogleMobileAds.Api.CustomNativeEventArgs)
extern "C"  void AdLoader_U3CAdLoaderU3Em__0_m3343821219 (AdLoader_t2155412145 * __this, Il2CppObject * ___sender0, CustomNativeEventArgs_t1050031338 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.AdLoader::<AdLoader>m__1(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
extern "C"  void AdLoader_U3CAdLoaderU3Em__1_m4115927291 (AdLoader_t2155412145 * __this, Il2CppObject * ___sender0, AdFailedToLoadEventArgs_t2692812689 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
