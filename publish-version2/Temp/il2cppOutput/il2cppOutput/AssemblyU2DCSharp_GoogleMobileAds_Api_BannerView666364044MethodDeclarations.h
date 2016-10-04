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

// GoogleMobileAds.Api.BannerView
struct BannerView_t666364044;
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

// System.Void GoogleMobileAds.Api.BannerView::.ctor(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
extern "C"  void BannerView__ctor_m3252890493 (BannerView_t666364044 * __this, String_t* ___adUnitId0, AdSize_t1660344159 * ___adSize1, int32_t ___position2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerView_add_OnAdLoaded_m2913051484 (BannerView_t666364044 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerView_remove_OnAdLoaded_m1663065803 (BannerView_t666364044 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void BannerView_add_OnAdFailedToLoad_m318038100 (BannerView_t666364044 * __this, EventHandler_1_t3535390332 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void BannerView_remove_OnAdFailedToLoad_m977243845 (BannerView_t666364044 * __this, EventHandler_1_t3535390332 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerView_add_OnAdOpening_m2806161141 (BannerView_t666364044 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerView_remove_OnAdOpening_m2711310694 (BannerView_t666364044 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerView_add_OnAdClosed_m1083470293 (BannerView_t666364044 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerView_remove_OnAdClosed_m4128451908 (BannerView_t666364044 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerView_add_OnAdLeavingApplication_m1709351749 (BannerView_t666364044 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::remove_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void BannerView_remove_OnAdLeavingApplication_m4008751156 (BannerView_t666364044 * __this, EventHandler_1_t1359043831 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::LoadAd(GoogleMobileAds.Api.AdRequest)
extern "C"  void BannerView_LoadAd_m471125795 (BannerView_t666364044 * __this, AdRequest_t3426784583 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::Hide()
extern "C"  void BannerView_Hide_m175185225 (BannerView_t666364044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::Show()
extern "C"  void BannerView_Show_m489527364 (BannerView_t666364044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::Destroy()
extern "C"  void BannerView_Destroy_m1743983925 (BannerView_t666364044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<OnAdLoaded>m__2(System.Object,System.EventArgs)
extern "C"  void BannerView_U3COnAdLoadedU3Em__2_m2257727361 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, EventArgs_t516466188 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<OnAdFailedToLoad>m__3(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
extern "C"  void BannerView_U3COnAdFailedToLoadU3Em__3_m2066032712 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, AdFailedToLoadEventArgs_t2692812689 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<OnAdOpening>m__4(System.Object,System.EventArgs)
extern "C"  void BannerView_U3COnAdOpeningU3Em__4_m3820579456 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, EventArgs_t516466188 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<OnAdClosed>m__5(System.Object,System.EventArgs)
extern "C"  void BannerView_U3COnAdClosedU3Em__5_m2787137149 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, EventArgs_t516466188 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<OnAdLeavingApplication>m__6(System.Object,System.EventArgs)
extern "C"  void BannerView_U3COnAdLeavingApplicationU3Em__6_m3510224622 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, EventArgs_t516466188 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<BannerView>m__7(System.Object,System.EventArgs)
extern "C"  void BannerView_U3CBannerViewU3Em__7_m3228168924 (BannerView_t666364044 * __this, Il2CppObject * ___sender0, EventArgs_t516466188 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<BannerView>m__8(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
extern "C"  void BannerView_U3CBannerViewU3Em__8_m3295434100 (BannerView_t666364044 * __this, Il2CppObject * ___sender0, AdFailedToLoadEventArgs_t2692812689 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<BannerView>m__9(System.Object,System.EventArgs)
extern "C"  void BannerView_U3CBannerViewU3Em__9_m3155782366 (BannerView_t666364044 * __this, Il2CppObject * ___sender0, EventArgs_t516466188 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<BannerView>m__A(System.Object,System.EventArgs)
extern "C"  void BannerView_U3CBannerViewU3Em__A_m2866236134 (BannerView_t666364044 * __this, Il2CppObject * ___sender0, EventArgs_t516466188 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.BannerView::<BannerView>m__B(System.Object,System.EventArgs)
extern "C"  void BannerView_U3CBannerViewU3Em__B_m682559207 (BannerView_t666364044 * __this, Il2CppObject * ___sender0, EventArgs_t516466188 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
