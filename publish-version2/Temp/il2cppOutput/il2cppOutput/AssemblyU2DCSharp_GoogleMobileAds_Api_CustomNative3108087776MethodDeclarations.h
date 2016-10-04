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

// GoogleMobileAds.Api.CustomNativeTemplateAd
struct CustomNativeTemplateAd_t3108087776;
// GoogleMobileAds.Common.ICustomNativeTemplateClient
struct ICustomNativeTemplateClient_t127922626;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void GoogleMobileAds.Api.CustomNativeTemplateAd::.ctor(GoogleMobileAds.Common.ICustomNativeTemplateClient)
extern "C"  void CustomNativeTemplateAd__ctor_m833498973 (CustomNativeTemplateAd_t3108087776 * __this, Il2CppObject * ___client0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.CustomNativeTemplateAd::GetAvailableAssetNames()
extern "C"  List_1_t1765447871 * CustomNativeTemplateAd_GetAvailableAssetNames_m2269093687 (CustomNativeTemplateAd_t3108087776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GoogleMobileAds.Api.CustomNativeTemplateAd::GetCustomTemplateId()
extern "C"  String_t* CustomNativeTemplateAd_GetCustomTemplateId_m2507724448 (CustomNativeTemplateAd_t3108087776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D GoogleMobileAds.Api.CustomNativeTemplateAd::GetTexture2D(System.String)
extern "C"  Texture2D_t2509538522 * CustomNativeTemplateAd_GetTexture2D_m2641147859 (CustomNativeTemplateAd_t3108087776 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GoogleMobileAds.Api.CustomNativeTemplateAd::GetText(System.String)
extern "C"  String_t* CustomNativeTemplateAd_GetText_m3558696027 (CustomNativeTemplateAd_t3108087776 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.CustomNativeTemplateAd::PerformClick(System.String)
extern "C"  void CustomNativeTemplateAd_PerformClick_m1612047104 (CustomNativeTemplateAd_t3108087776 * __this, String_t* ___assetName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.CustomNativeTemplateAd::RecordImpression()
extern "C"  void CustomNativeTemplateAd_RecordImpression_m1806993429 (CustomNativeTemplateAd_t3108087776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
