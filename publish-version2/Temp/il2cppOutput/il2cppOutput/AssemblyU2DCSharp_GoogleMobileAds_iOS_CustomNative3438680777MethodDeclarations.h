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

// GoogleMobileAds.iOS.CustomNativeTemplateClient
struct CustomNativeTemplateClient_t3438680777;
// System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>
struct Action_2_t1946131332;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"

// System.Void GoogleMobileAds.iOS.CustomNativeTemplateClient::.ctor(System.IntPtr,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>)
extern "C"  void CustomNativeTemplateClient__ctor_m3807365913 (CustomNativeTemplateClient_t3438680777 * __this, IntPtr_t ___customNativeAd0, Action_2_t1946131332 * ___clickHandler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.CustomNativeTemplateClient::get_CustomNativeAdPtr()
extern "C"  IntPtr_t CustomNativeTemplateClient_get_CustomNativeAdPtr_m2600204759 (CustomNativeTemplateClient_t3438680777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.CustomNativeTemplateClient::set_CustomNativeAdPtr(System.IntPtr)
extern "C"  void CustomNativeTemplateClient_set_CustomNativeAdPtr_m1950808412 (CustomNativeTemplateClient_t3438680777 * __this, IntPtr_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> GoogleMobileAds.iOS.CustomNativeTemplateClient::GetAvailableAssetNames()
extern "C"  List_1_t1765447871 * CustomNativeTemplateClient_GetAvailableAssetNames_m267146412 (CustomNativeTemplateClient_t3438680777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GoogleMobileAds.iOS.CustomNativeTemplateClient::GetTemplateId()
extern "C"  String_t* CustomNativeTemplateClient_GetTemplateId_m354249530 (CustomNativeTemplateClient_t3438680777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GoogleMobileAds.iOS.CustomNativeTemplateClient::GetImageByteArray(System.String)
extern "C"  ByteU5BU5D_t58506160* CustomNativeTemplateClient_GetImageByteArray_m1675914446 (CustomNativeTemplateClient_t3438680777 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GoogleMobileAds.iOS.CustomNativeTemplateClient::GetText(System.String)
extern "C"  String_t* CustomNativeTemplateClient_GetText_m3356740112 (CustomNativeTemplateClient_t3438680777 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.CustomNativeTemplateClient::PerformClick(System.String)
extern "C"  void CustomNativeTemplateClient_PerformClick_m2033339627 (CustomNativeTemplateClient_t3438680777 * __this, String_t* ___assetName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.CustomNativeTemplateClient::RecordImpression()
extern "C"  void CustomNativeTemplateClient_RecordImpression_m94124490 (CustomNativeTemplateClient_t3438680777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.CustomNativeTemplateClient::DestroyCustomNativeTemplateAd()
extern "C"  void CustomNativeTemplateClient_DestroyCustomNativeTemplateAd_m1353040753 (CustomNativeTemplateClient_t3438680777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.CustomNativeTemplateClient::Dispose()
extern "C"  void CustomNativeTemplateClient_Dispose_m2537590897 (CustomNativeTemplateClient_t3438680777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.CustomNativeTemplateClient::Finalize()
extern "C"  void CustomNativeTemplateClient_Finalize_m316670638 (CustomNativeTemplateClient_t3438680777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.CustomNativeTemplateClient::NativeCustomTemplateDidReceiveClickCallback(System.IntPtr,System.String)
extern "C"  void CustomNativeTemplateClient_NativeCustomTemplateDidReceiveClickCallback_m913088663 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeCustomAd0, String_t* ___assetName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.iOS.CustomNativeTemplateClient GoogleMobileAds.iOS.CustomNativeTemplateClient::IntPtrToAdLoaderClient(System.IntPtr)
extern "C"  CustomNativeTemplateClient_t3438680777 * CustomNativeTemplateClient_IntPtrToAdLoaderClient_m3304848595 (Il2CppObject * __this /* static, unused */, IntPtr_t ___customNativeTemplateAd0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
