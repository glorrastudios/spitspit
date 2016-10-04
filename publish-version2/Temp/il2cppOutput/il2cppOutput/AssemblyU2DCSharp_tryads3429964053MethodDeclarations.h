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

// tryads
struct tryads_t3429964053;
// System.String
struct String_t;
// ChartboostSDK.CBLocation
struct CBLocation_t3648673003;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_ChartboostSDK_CBLocation3648673003.h"
#include "AssemblyU2DCSharp_ChartboostSDK_CBImpressionError1909344983.h"
#include "AssemblyU2DCSharp_ChartboostSDK_CBClickError3908805334.h"

// System.Void tryads::.ctor()
extern "C"  void tryads__ctor_m621327142 (tryads_t3429964053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::OnEnable()
extern "C"  void tryads_OnEnable_m719420064 (tryads_t3429964053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::Start()
extern "C"  void tryads_Start_m3863432230 (tryads_t3429964053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::SetupDelegates()
extern "C"  void tryads_SetupDelegates_m2115764847 (tryads_t3429964053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::AddLog(System.String)
extern "C"  void tryads_AddLog_m3476865121 (tryads_t3429964053 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::Update()
extern "C"  void tryads_Update_m3808134311 (tryads_t3429964053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::cacheAds()
extern "C"  void tryads_cacheAds_m2904652044 (tryads_t3429964053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::showAds()
extern "C"  void tryads_showAds_m101829463 (tryads_t3429964053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::didInitialize(System.Boolean)
extern "C"  void tryads_didInitialize_m888995658 (tryads_t3429964053 * __this, bool ___status0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::didFailToLoadInterstitial(ChartboostSDK.CBLocation,ChartboostSDK.CBImpressionError)
extern "C"  void tryads_didFailToLoadInterstitial_m1746082502 (tryads_t3429964053 * __this, CBLocation_t3648673003 * ___location0, int32_t ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::didDismissInterstitial(ChartboostSDK.CBLocation)
extern "C"  void tryads_didDismissInterstitial_m4157944392 (tryads_t3429964053 * __this, CBLocation_t3648673003 * ___location0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::didCloseInterstitial(ChartboostSDK.CBLocation)
extern "C"  void tryads_didCloseInterstitial_m1277276854 (tryads_t3429964053 * __this, CBLocation_t3648673003 * ___location0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::didClickInterstitial(ChartboostSDK.CBLocation)
extern "C"  void tryads_didClickInterstitial_m1149726278 (tryads_t3429964053 * __this, CBLocation_t3648673003 * ___location0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::didCacheInterstitial(ChartboostSDK.CBLocation)
extern "C"  void tryads_didCacheInterstitial_m2768047296 (tryads_t3429964053 * __this, CBLocation_t3648673003 * ___location0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::didDisplayInterstitial(ChartboostSDK.CBLocation)
extern "C"  void tryads_didDisplayInterstitial_m1238380160 (tryads_t3429964053 * __this, CBLocation_t3648673003 * ___location0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::didFailToLoadMoreApps(ChartboostSDK.CBLocation,ChartboostSDK.CBImpressionError)
extern "C"  void tryads_didFailToLoadMoreApps_m2139907009 (tryads_t3429964053 * __this, CBLocation_t3648673003 * ___location0, int32_t ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::didDismissMoreApps(ChartboostSDK.CBLocation)
extern "C"  void tryads_didDismissMoreApps_m3798082243 (tryads_t3429964053 * __this, CBLocation_t3648673003 * ___location0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::didCloseMoreApps(ChartboostSDK.CBLocation)
extern "C"  void tryads_didCloseMoreApps_m1709967921 (tryads_t3429964053 * __this, CBLocation_t3648673003 * ___location0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::didClickMoreApps(ChartboostSDK.CBLocation)
extern "C"  void tryads_didClickMoreApps_m354291137 (tryads_t3429964053 * __this, CBLocation_t3648673003 * ___location0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::didCacheMoreApps(ChartboostSDK.CBLocation)
extern "C"  void tryads_didCacheMoreApps_m1288304955 (tryads_t3429964053 * __this, CBLocation_t3648673003 * ___location0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::didDisplayMoreApps(ChartboostSDK.CBLocation)
extern "C"  void tryads_didDisplayMoreApps_m2113141499 (tryads_t3429964053 * __this, CBLocation_t3648673003 * ___location0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::didFailToRecordClick(ChartboostSDK.CBLocation,ChartboostSDK.CBClickError)
extern "C"  void tryads_didFailToRecordClick_m3358948734 (tryads_t3429964053 * __this, CBLocation_t3648673003 * ___location0, int32_t ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::didFailToLoadRewardedVideo(ChartboostSDK.CBLocation,ChartboostSDK.CBImpressionError)
extern "C"  void tryads_didFailToLoadRewardedVideo_m1528146757 (tryads_t3429964053 * __this, CBLocation_t3648673003 * ___location0, int32_t ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::didDismissRewardedVideo(ChartboostSDK.CBLocation)
extern "C"  void tryads_didDismissRewardedVideo_m2707195929 (tryads_t3429964053 * __this, CBLocation_t3648673003 * ___location0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::didCloseRewardedVideo(ChartboostSDK.CBLocation)
extern "C"  void tryads_didCloseRewardedVideo_m3600815467 (tryads_t3429964053 * __this, CBLocation_t3648673003 * ___location0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::didClickRewardedVideo(ChartboostSDK.CBLocation)
extern "C"  void tryads_didClickRewardedVideo_m3941714907 (tryads_t3429964053 * __this, CBLocation_t3648673003 * ___location0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::didCacheRewardedVideo(ChartboostSDK.CBLocation)
extern "C"  void tryads_didCacheRewardedVideo_m2570058913 (tryads_t3429964053 * __this, CBLocation_t3648673003 * ___location0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean tryads::shouldDisplayRewardedVideo(ChartboostSDK.CBLocation)
extern "C"  bool tryads_shouldDisplayRewardedVideo_m1642007459 (tryads_t3429964053 * __this, CBLocation_t3648673003 * ___location0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::didCompleteRewardedVideo(ChartboostSDK.CBLocation,System.Int32)
extern "C"  void tryads_didCompleteRewardedVideo_m2496679889 (tryads_t3429964053 * __this, CBLocation_t3648673003 * ___location0, int32_t ___reward1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::didDisplayRewardedVideo(ChartboostSDK.CBLocation)
extern "C"  void tryads_didDisplayRewardedVideo_m2395017953 (tryads_t3429964053 * __this, CBLocation_t3648673003 * ___location0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::didCacheInPlay(ChartboostSDK.CBLocation)
extern "C"  void tryads_didCacheInPlay_m124225869 (tryads_t3429964053 * __this, CBLocation_t3648673003 * ___location0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::didFailToLoadInPlay(ChartboostSDK.CBLocation,ChartboostSDK.CBImpressionError)
extern "C"  void tryads_didFailToLoadInPlay_m2151598099 (tryads_t3429964053 * __this, CBLocation_t3648673003 * ___location0, int32_t ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::didPauseClickForConfirmation()
extern "C"  void tryads_didPauseClickForConfirmation_m2646646603 (tryads_t3429964053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::willDisplayVideo(ChartboostSDK.CBLocation)
extern "C"  void tryads_willDisplayVideo_m2394287356 (tryads_t3429964053 * __this, CBLocation_t3648673003 * ___location0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void tryads::didCompleteAppStoreSheetFlow()
extern "C"  void tryads_didCompleteAppStoreSheetFlow_m1570439379 (tryads_t3429964053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
