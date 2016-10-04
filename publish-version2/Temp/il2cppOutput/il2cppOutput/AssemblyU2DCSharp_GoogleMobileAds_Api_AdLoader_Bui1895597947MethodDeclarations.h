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

// GoogleMobileAds.Api.AdLoader/Builder
struct Builder_t1895597947;
// System.String
struct String_t;
// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType>
struct HashSet_1_t143865390;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t3667177573;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>>
struct Dictionary_2_t3583829236;
// System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>
struct Action_2_t1946131332;
// GoogleMobileAds.Api.AdLoader
struct AdLoader_t2155412145;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void GoogleMobileAds.Api.AdLoader/Builder::.ctor(System.String)
extern "C"  void Builder__ctor_m3319317270 (Builder_t1895597947 * __this, String_t* ___adUnitId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GoogleMobileAds.Api.AdLoader/Builder::get_AdUnitId()
extern "C"  String_t* Builder_get_AdUnitId_m2350332870 (Builder_t1895597947 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.AdLoader/Builder::set_AdUnitId(System.String)
extern "C"  void Builder_set_AdUnitId_m675797963 (Builder_t1895597947 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType> GoogleMobileAds.Api.AdLoader/Builder::get_AdTypes()
extern "C"  HashSet_1_t143865390 * Builder_get_AdTypes_m3217875281 (Builder_t1895597947 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.AdLoader/Builder::set_AdTypes(System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType>)
extern "C"  void Builder_set_AdTypes_m2798226156 (Builder_t1895597947 * __this, HashSet_1_t143865390 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdLoader/Builder::get_TemplateIds()
extern "C"  HashSet_1_t3667177573 * Builder_get_TemplateIds_m914551936 (Builder_t1895597947 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.AdLoader/Builder::set_TemplateIds(System.Collections.Generic.HashSet`1<System.String>)
extern "C"  void Builder_set_TemplateIds_m145940755 (Builder_t1895597947 * __this, HashSet_1_t3667177573 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>> GoogleMobileAds.Api.AdLoader/Builder::get_CustomNativeTemplateClickHandlers()
extern "C"  Dictionary_2_t3583829236 * Builder_get_CustomNativeTemplateClickHandlers_m1215762911 (Builder_t1895597947 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.AdLoader/Builder::set_CustomNativeTemplateClickHandlers(System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>>)
extern "C"  void Builder_set_CustomNativeTemplateClickHandlers_m592703280 (Builder_t1895597947 * __this, Dictionary_2_t3583829236 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdLoader/Builder GoogleMobileAds.Api.AdLoader/Builder::ForCustomNativeAd(System.String)
extern "C"  Builder_t1895597947 * Builder_ForCustomNativeAd_m4120269298 (Builder_t1895597947 * __this, String_t* ___templateId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdLoader/Builder GoogleMobileAds.Api.AdLoader/Builder::ForCustomNativeAd(System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>)
extern "C"  Builder_t1895597947 * Builder_ForCustomNativeAd_m896644843 (Builder_t1895597947 * __this, String_t* ___templateId0, Action_2_t1946131332 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdLoader GoogleMobileAds.Api.AdLoader/Builder::Build()
extern "C"  AdLoader_t2155412145 * Builder_Build_m239764414 (Builder_t1895597947 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
