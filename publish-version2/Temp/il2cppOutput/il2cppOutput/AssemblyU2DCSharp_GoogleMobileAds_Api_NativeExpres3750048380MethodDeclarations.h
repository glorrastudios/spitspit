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

// GoogleMobileAds.Api.NativeExpressAdView
struct NativeExpressAdView_t3750048380;
// System.String
struct String_t;
// GoogleMobileAds.Api.AdSize
struct AdSize_t1660344159;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1359043831;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t3535390332;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t3426784583;
// System.Object
struct Il2CppObject;
// System.EventArgs
struct EventArgs_t516466188;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_t2692812689;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdSize1660344159.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdPosition271673095.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdRequest3426784583.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_EventArgs516466188.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdFailedToLo2692812689.h"

// System.Void GoogleMobileAds.Api.NativeExpressAdView::.ctor(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
extern "C"  void NativeExpressAdView__ctor_m1458265315 (NativeExpressAdView_t3750048380 * __this, String_t* ___adUnitId0, AdSize_t1660344159 * ___adSize1, int32_t ___position2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdView_add_OnAdLoaded_m26184886 (NativeExpressAdView_t3750048380 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdView_remove_OnAdLoaded_m1445379889 (NativeExpressAdView_t3750048380 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void NativeExpressAdView_add_OnAdFailedToLoad_m391318074 (NativeExpressAdView_t3750048380 * __this, EventHandler_1_t3535390332 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void NativeExpressAdView_remove_OnAdFailedToLoad_m2217562911 (NativeExpressAdView_t3750048380 * __this, EventHandler_1_t3535390332 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdView_add_OnAdOpening_m3507609819 (NativeExpressAdView_t3750048380 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdView_remove_OnAdOpening_m258014656 (NativeExpressAdView_t3750048380 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdView_add_OnAdClosed_m2491570991 (NativeExpressAdView_t3750048380 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdView_remove_OnAdClosed_m3910765994 (NativeExpressAdView_t3750048380 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::add_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdView_add_OnAdLeavingApplication_m1498109343 (NativeExpressAdView_t3750048380 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::remove_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void NativeExpressAdView_remove_OnAdLeavingApplication_m3013322650 (NativeExpressAdView_t3750048380 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::LoadAd(GoogleMobileAds.Api.AdRequest)
extern "C"  void NativeExpressAdView_LoadAd_m785398525 (NativeExpressAdView_t3750048380 * __this, AdRequest_t3426784583 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::Hide()
extern "C"  void NativeExpressAdView_Hide_m4052370607 (NativeExpressAdView_t3750048380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::Show()
extern "C"  void NativeExpressAdView_Show_m71745450 (NativeExpressAdView_t3750048380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::Destroy()
extern "C"  void NativeExpressAdView_Destroy_m2418207759 (NativeExpressAdView_t3750048380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::<NativeExpressAdView>m__16(System.Object,System.EventArgs)
extern "C"  void NativeExpressAdView_U3CNativeExpressAdViewU3Em__16_m3613089248 (NativeExpressAdView_t3750048380 * __this, Il2CppObject * ___sender0, EventArgs_t516466188 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::<NativeExpressAdView>m__17(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
extern "C"  void NativeExpressAdView_U3CNativeExpressAdViewU3Em__17_m3418096 (NativeExpressAdView_t3750048380 * __this, Il2CppObject * ___sender0, AdFailedToLoadEventArgs_t2692812689 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::<NativeExpressAdView>m__18(System.Object,System.EventArgs)
extern "C"  void NativeExpressAdView_U3CNativeExpressAdViewU3Em__18_m3540702690 (NativeExpressAdView_t3750048380 * __this, Il2CppObject * ___sender0, EventArgs_t516466188 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::<NativeExpressAdView>m__19(System.Object,System.EventArgs)
extern "C"  void NativeExpressAdView_U3CNativeExpressAdViewU3Em__19_m1357025763 (NativeExpressAdView_t3750048380 * __this, Il2CppObject * ___sender0, EventArgs_t516466188 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.NativeExpressAdView::<NativeExpressAdView>m__1A(System.Object,System.EventArgs)
extern "C"  void NativeExpressAdView_U3CNativeExpressAdViewU3Em__1A_m1067479531 (NativeExpressAdView_t3750048380 * __this, Il2CppObject * ___sender0, EventArgs_t516466188 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
