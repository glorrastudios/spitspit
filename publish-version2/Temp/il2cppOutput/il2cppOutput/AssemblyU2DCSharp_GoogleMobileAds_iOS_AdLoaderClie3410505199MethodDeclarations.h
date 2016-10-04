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

// GoogleMobileAds.iOS.AdLoaderClient/GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback
struct GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback_t3410505199;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void GoogleMobileAds.iOS.AdLoaderClient/GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback__ctor_m1318176250 (GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback_t3410505199 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.AdLoaderClient/GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback::Invoke(System.IntPtr,System.IntPtr,System.String)
extern "C"  void GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback_Invoke_m2974149450 (GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback_t3410505199 * __this, IntPtr_t ___adLoader0, IntPtr_t ___nativeCustomTemplateAd1, String_t* ___templateID2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback_t3410505199(Il2CppObject* delegate, IntPtr_t ___adLoader0, IntPtr_t ___nativeCustomTemplateAd1, String_t* ___templateID2);
// System.IAsyncResult GoogleMobileAds.iOS.AdLoaderClient/GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback_BeginInvoke_m551113503 (GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback_t3410505199 * __this, IntPtr_t ___adLoader0, IntPtr_t ___nativeCustomTemplateAd1, String_t* ___templateID2, AsyncCallback_t1363551830 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.AdLoaderClient/GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback::EndInvoke(System.IAsyncResult)
extern "C"  void GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback_EndInvoke_m1968915722 (GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback_t3410505199 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
