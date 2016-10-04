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

// GoogleMobileAds.iOS.Externs
struct Externs_t457448815;
// System.String
struct String_t;
// GoogleMobileAds.iOS.BannerClient/GADUAdViewDidReceiveAdCallback
struct GADUAdViewDidReceiveAdCallback_t828479199;
// GoogleMobileAds.iOS.BannerClient/GADUAdViewDidFailToReceiveAdWithErrorCallback
struct GADUAdViewDidFailToReceiveAdWithErrorCallback_t735575558;
// GoogleMobileAds.iOS.BannerClient/GADUAdViewWillPresentScreenCallback
struct GADUAdViewWillPresentScreenCallback_t1789361351;
// GoogleMobileAds.iOS.BannerClient/GADUAdViewDidDismissScreenCallback
struct GADUAdViewDidDismissScreenCallback_t3216358927;
// GoogleMobileAds.iOS.BannerClient/GADUAdViewWillLeaveApplicationCallback
struct GADUAdViewWillLeaveApplicationCallback_t158649667;
// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidReceiveAdCallback
struct GADUInterstitialDidReceiveAdCallback_t607428195;
// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback
struct GADUInterstitialDidFailToReceiveAdWithErrorCallback_t619478530;
// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillPresentScreenCallback
struct GADUInterstitialWillPresentScreenCallback_t383813571;
// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidDismissScreenCallback
struct GADUInterstitialDidDismissScreenCallback_t2062640019;
// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillLeaveApplicationCallback
struct GADUInterstitialWillLeaveApplicationCallback_t3415871687;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidReceiveAdCallback
struct GADURewardBasedVideoAdDidReceiveAdCallback_t1577911185;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback
struct GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t349394708;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidOpenCallback
struct GADURewardBasedVideoAdDidOpenCallback_t1667507753;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidStartCallback
struct GADURewardBasedVideoAdDidStartCallback_t1323634829;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCloseCallback
struct GADURewardBasedVideoAdDidCloseCallback_t2448438307;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback
struct GADURewardBasedVideoAdDidRewardCallback_t986391438;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdWillLeaveApplicationCallback
struct GADURewardBasedVideoAdWillLeaveApplicationCallback_t1367959541;
// System.String[]
struct StringU5BU5D_t2956870243;
// GoogleMobileAds.iOS.AdLoaderClient/GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback
struct GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback_t3410505199;
// GoogleMobileAds.iOS.AdLoaderClient/GADUAdLoaderDidFailToReceiveAdWithErrorCallback
struct GADUAdLoaderDidFailToReceiveAdWithErrorCallback_t1110441304;
// GoogleMobileAds.iOS.CustomNativeTemplateClient/GADUNativeCustomTemplateDidReceiveClick
struct GADUNativeCustomTemplateDidReceiveClick_t320716855;
// GoogleMobileAds.iOS.NativeExpressAdClient/GADUNativeExpressAdViewDidReceiveAdCallback
struct GADUNativeExpressAdViewDidReceiveAdCallback_t3933345890;
// GoogleMobileAds.iOS.NativeExpressAdClient/GADUNativeExpressAdViewDidFailToReceiveAdWithErrorCallback
struct GADUNativeExpressAdViewDidFailToReceiveAdWithErrorCallback_t523888163;
// GoogleMobileAds.iOS.NativeExpressAdClient/GADUNativeExpressAdViewWillPresentScreenCallback
struct GADUNativeExpressAdViewWillPresentScreenCallback_t3695867172;
// GoogleMobileAds.iOS.NativeExpressAdClient/GADUNativeExpressAdViewDidDismissScreenCallback
struct GADUNativeExpressAdViewDidDismissScreenCallback_t2446575122;
// GoogleMobileAds.iOS.NativeExpressAdClient/GADUNativeExpressAdViewWillLeaveApplicationCallback
struct GADUNativeExpressAdViewWillLeaveApplicationCallback_t226040774;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_BannerClient_828479199.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_BannerClient_735575558.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_BannerClient1789361351.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_BannerClient3216358927.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_BannerClient_158649667.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_InterstitialC607428195.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_InterstitialC619478530.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_InterstitialC383813571.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_Interstitial2062640019.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_Interstitial3415871687.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_RewardBasedV1577911185.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_RewardBasedVi349394708.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_RewardBasedV1667507753.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_RewardBasedV1323634829.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_RewardBasedV2448438307.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_RewardBasedVi986391438.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_RewardBasedV1367959541.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_NativeAdType3073264283.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_AdLoaderClie3410505199.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_AdLoaderClie1110441304.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_CustomNativeT320716855.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_NativeExpres3933345890.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_NativeExpress523888163.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_NativeExpres3695867172.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_NativeExpres2446575122.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_NativeExpress226040774.h"

// System.Void GoogleMobileAds.iOS.Externs::.ctor()
extern "C"  void Externs__ctor_m3383499218 (Externs_t457448815 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateRequest()
extern "C"  IntPtr_t Externs_GADUCreateRequest_m3172610253 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUAddTestDevice(System.IntPtr,System.String)
extern "C"  void Externs_GADUAddTestDevice_m3944259554 (Il2CppObject * __this /* static, unused */, IntPtr_t ___request0, String_t* ___deviceId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUAddKeyword(System.IntPtr,System.String)
extern "C"  void Externs_GADUAddKeyword_m1466805259 (Il2CppObject * __this /* static, unused */, IntPtr_t ___request0, String_t* ___keyword1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetBirthday(System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C"  void Externs_GADUSetBirthday_m4032274183 (Il2CppObject * __this /* static, unused */, IntPtr_t ___request0, int32_t ___year1, int32_t ___month2, int32_t ___day3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetGender(System.IntPtr,System.Int32)
extern "C"  void Externs_GADUSetGender_m1709457451 (Il2CppObject * __this /* static, unused */, IntPtr_t ___request0, int32_t ___genderCode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUTagForChildDirectedTreatment(System.IntPtr,System.Boolean)
extern "C"  void Externs_GADUTagForChildDirectedTreatment_m1408538185 (Il2CppObject * __this /* static, unused */, IntPtr_t ___request0, bool ___childDirectedTreatment1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetExtra(System.IntPtr,System.String,System.String)
extern "C"  void Externs_GADUSetExtra_m972914561 (Il2CppObject * __this /* static, unused */, IntPtr_t ___request0, String_t* ___key1, String_t* ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetRequestAgent(System.IntPtr,System.String)
extern "C"  void Externs_GADUSetRequestAgent_m3592021267 (Il2CppObject * __this /* static, unused */, IntPtr_t ___request0, String_t* ___requestAgent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADURelease(System.IntPtr)
extern "C"  void Externs_GADURelease_m3782573160 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateBannerView(System.IntPtr,System.String,System.Int32,System.Int32,System.Int32)
extern "C"  IntPtr_t Externs_GADUCreateBannerView_m3709576508 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bannerClient0, String_t* ___adUnitId1, int32_t ___width2, int32_t ___height3, int32_t ___positionAtTop4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateSmartBannerView(System.IntPtr,System.String,System.Int32)
extern "C"  IntPtr_t Externs_GADUCreateSmartBannerView_m2959172191 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bannerClient0, String_t* ___adUnitId1, int32_t ___positionAtTop2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetBannerCallbacks(System.IntPtr,GoogleMobileAds.iOS.BannerClient/GADUAdViewDidReceiveAdCallback,GoogleMobileAds.iOS.BannerClient/GADUAdViewDidFailToReceiveAdWithErrorCallback,GoogleMobileAds.iOS.BannerClient/GADUAdViewWillPresentScreenCallback,GoogleMobileAds.iOS.BannerClient/GADUAdViewDidDismissScreenCallback,GoogleMobileAds.iOS.BannerClient/GADUAdViewWillLeaveApplicationCallback)
extern "C"  void Externs_GADUSetBannerCallbacks_m1396516047 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bannerView0, GADUAdViewDidReceiveAdCallback_t828479199 * ___adReceivedCallback1, GADUAdViewDidFailToReceiveAdWithErrorCallback_t735575558 * ___adFailedCallback2, GADUAdViewWillPresentScreenCallback_t1789361351 * ___willPresentCallback3, GADUAdViewDidDismissScreenCallback_t3216358927 * ___didDismissCallback4, GADUAdViewWillLeaveApplicationCallback_t158649667 * ___willLeaveCallback5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUHideBannerView(System.IntPtr)
extern "C"  void Externs_GADUHideBannerView_m4090640356 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bannerView0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUShowBannerView(System.IntPtr)
extern "C"  void Externs_GADUShowBannerView_m1630769801 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bannerView0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADURemoveBannerView(System.IntPtr)
extern "C"  void Externs_GADURemoveBannerView_m3410424290 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bannerView0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADURequestBannerAd(System.IntPtr,System.IntPtr)
extern "C"  void Externs_GADURequestBannerAd_m4237526847 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bannerView0, IntPtr_t ___request1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateInterstitial(System.IntPtr,System.String)
extern "C"  IntPtr_t Externs_GADUCreateInterstitial_m2723672384 (Il2CppObject * __this /* static, unused */, IntPtr_t ___interstitialClient0, String_t* ___adUnitId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetInterstitialCallbacks(System.IntPtr,GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidReceiveAdCallback,GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback,GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillPresentScreenCallback,GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidDismissScreenCallback,GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillLeaveApplicationCallback)
extern "C"  void Externs_GADUSetInterstitialCallbacks_m4068511555 (Il2CppObject * __this /* static, unused */, IntPtr_t ___interstitial0, GADUInterstitialDidReceiveAdCallback_t607428195 * ___adReceivedCallback1, GADUInterstitialDidFailToReceiveAdWithErrorCallback_t619478530 * ___adFailedCallback2, GADUInterstitialWillPresentScreenCallback_t383813571 * ___willPresentCallback3, GADUInterstitialDidDismissScreenCallback_t2062640019 * ___didDismissCallback4, GADUInterstitialWillLeaveApplicationCallback_t3415871687 * ___willLeaveCallback5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleMobileAds.iOS.Externs::GADUInterstitialReady(System.IntPtr)
extern "C"  bool Externs_GADUInterstitialReady_m232812900 (Il2CppObject * __this /* static, unused */, IntPtr_t ___interstitial0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUShowInterstitial(System.IntPtr)
extern "C"  void Externs_GADUShowInterstitial_m32200750 (Il2CppObject * __this /* static, unused */, IntPtr_t ___interstitial0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADURequestInterstitial(System.IntPtr,System.IntPtr)
extern "C"  void Externs_GADURequestInterstitial_m1136309026 (Il2CppObject * __this /* static, unused */, IntPtr_t ___interstitial0, IntPtr_t ___request1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateRewardBasedVideoAd(System.IntPtr)
extern "C"  IntPtr_t Externs_GADUCreateRewardBasedVideoAd_m2063325206 (Il2CppObject * __this /* static, unused */, IntPtr_t ___rewardBasedVideo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleMobileAds.iOS.Externs::GADURewardBasedVideoAdReady(System.IntPtr)
extern "C"  bool Externs_GADURewardBasedVideoAdReady_m2978385106 (Il2CppObject * __this /* static, unused */, IntPtr_t ___rewardBasedVideo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUShowRewardBasedVideoAd(System.IntPtr)
extern "C"  void Externs_GADUShowRewardBasedVideoAd_m892979392 (Il2CppObject * __this /* static, unused */, IntPtr_t ___rewardBasedVideo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADURequestRewardBasedVideoAd(System.IntPtr,System.IntPtr,System.String)
extern "C"  void Externs_GADURequestRewardBasedVideoAd_m563139824 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bannerView0, IntPtr_t ___request1, String_t* ___adUnitId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetRewardBasedVideoAdCallbacks(System.IntPtr,GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidReceiveAdCallback,GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback,GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidOpenCallback,GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidStartCallback,GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCloseCallback,GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback,GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdWillLeaveApplicationCallback)
extern "C"  void Externs_GADUSetRewardBasedVideoAdCallbacks_m2963263372 (Il2CppObject * __this /* static, unused */, IntPtr_t ___rewardBasedVideo0, GADURewardBasedVideoAdDidReceiveAdCallback_t1577911185 * ___adReceivedCallback1, GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t349394708 * ___adFailedCallback2, GADURewardBasedVideoAdDidOpenCallback_t1667507753 * ___didOpenCallback3, GADURewardBasedVideoAdDidStartCallback_t1323634829 * ___didStartCallback4, GADURewardBasedVideoAdDidCloseCallback_t2448438307 * ___didCloseCallback5, GADURewardBasedVideoAdDidRewardCallback_t986391438 * ___didRewardcallback6, GADURewardBasedVideoAdWillLeaveApplicationCallback_t1367959541 * ___willLeaveCallback7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateAdLoader(System.IntPtr,System.String,System.String[],System.Int32,GoogleMobileAds.iOS.NativeAdTypes&)
extern "C"  IntPtr_t Externs_GADUCreateAdLoader_m3866437694 (Il2CppObject * __this /* static, unused */, IntPtr_t ___adLoader0, String_t* ___adUnitId1, StringU5BU5D_t2956870243* ___templateIds2, int32_t ___templateIdsCount3, NativeAdTypes_t3073264283 * ___types4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADURequestNativeAd(System.IntPtr,System.IntPtr)
extern "C"  void Externs_GADURequestNativeAd_m2428983540 (Il2CppObject * __this /* static, unused */, IntPtr_t ___adLoader0, IntPtr_t ___request1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetAdLoaderCallbacks(System.IntPtr,GoogleMobileAds.iOS.AdLoaderClient/GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback,GoogleMobileAds.iOS.AdLoaderClient/GADUAdLoaderDidFailToReceiveAdWithErrorCallback)
extern "C"  void Externs_GADUSetAdLoaderCallbacks_m1359227192 (Il2CppObject * __this /* static, unused */, IntPtr_t ___adLoader0, GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback_t3410505199 * ___adReceivedCallback1, GADUAdLoaderDidFailToReceiveAdWithErrorCallback_t1110441304 * ___adFailedCallback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GoogleMobileAds.iOS.Externs::GADUNativeCustomTemplateAdTemplateID(System.IntPtr)
extern "C"  String_t* Externs_GADUNativeCustomTemplateAdTemplateID_m2200679232 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeCustomTemplateAd0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GoogleMobileAds.iOS.Externs::GADUNativeCustomTemplateAdImageAsBytesForKey(System.IntPtr,System.String)
extern "C"  String_t* Externs_GADUNativeCustomTemplateAdImageAsBytesForKey_m2535654653 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeCustomTemplateAd0, String_t* ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GoogleMobileAds.iOS.Externs::GADUNativeCustomTemplateAdStringForKey(System.IntPtr,System.String)
extern "C"  String_t* Externs_GADUNativeCustomTemplateAdStringForKey_m1598890762 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeCustomTemplateAd0, String_t* ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUNativeCustomTemplateAdRecordImpression(System.IntPtr)
extern "C"  void Externs_GADUNativeCustomTemplateAdRecordImpression_m186981144 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeCustomTemplateAd0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUNativeCustomTemplateAdPerformClickOnAssetWithKey(System.IntPtr,System.String,System.Boolean)
extern "C"  void Externs_GADUNativeCustomTemplateAdPerformClickOnAssetWithKey_m3886548574 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeCustomTemplateAd0, String_t* ___assetName1, bool ___customClickAction2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUNativeCustomTemplateAdAvailableAssetKeys(System.IntPtr)
extern "C"  IntPtr_t Externs_GADUNativeCustomTemplateAdAvailableAssetKeys_m2978341548 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeCustomTemplateAd0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GoogleMobileAds.iOS.Externs::GADUNativeCustomTemplateAdNumberOfAvailableAssetKeys(System.IntPtr)
extern "C"  int32_t Externs_GADUNativeCustomTemplateAdNumberOfAvailableAssetKeys_m420572709 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeCustomTemplateAd0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetNativeCustomTemplateAdUnityClient(System.IntPtr,System.IntPtr)
extern "C"  void Externs_GADUSetNativeCustomTemplateAdUnityClient_m3748779180 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeCustomTemplateAd0, IntPtr_t ___nativeCustomTemplateClient1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetNativeCustomTemplateAdCallbacks(System.IntPtr,GoogleMobileAds.iOS.CustomNativeTemplateClient/GADUNativeCustomTemplateDidReceiveClick)
extern "C"  void Externs_GADUSetNativeCustomTemplateAdCallbacks_m2732316615 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeCustomTemplateAd0, GADUNativeCustomTemplateDidReceiveClick_t320716855 * ___adClickedCallback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateNativeExpressAdView(System.IntPtr,System.String,System.Int32,System.Int32,System.Int32)
extern "C"  IntPtr_t Externs_GADUCreateNativeExpressAdView_m382355590 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeExpressClient0, String_t* ___adUnitId1, int32_t ___width2, int32_t ___height3, int32_t ___positionAtTop4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetNativeExpressAdCallbacks(System.IntPtr,GoogleMobileAds.iOS.NativeExpressAdClient/GADUNativeExpressAdViewDidReceiveAdCallback,GoogleMobileAds.iOS.NativeExpressAdClient/GADUNativeExpressAdViewDidFailToReceiveAdWithErrorCallback,GoogleMobileAds.iOS.NativeExpressAdClient/GADUNativeExpressAdViewWillPresentScreenCallback,GoogleMobileAds.iOS.NativeExpressAdClient/GADUNativeExpressAdViewDidDismissScreenCallback,GoogleMobileAds.iOS.NativeExpressAdClient/GADUNativeExpressAdViewWillLeaveApplicationCallback)
extern "C"  void Externs_GADUSetNativeExpressAdCallbacks_m3986018346 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bannerView0, GADUNativeExpressAdViewDidReceiveAdCallback_t3933345890 * ___adReceivedCallback1, GADUNativeExpressAdViewDidFailToReceiveAdWithErrorCallback_t523888163 * ___adFailedCallback2, GADUNativeExpressAdViewWillPresentScreenCallback_t3695867172 * ___willPresentCallback3, GADUNativeExpressAdViewDidDismissScreenCallback_t2446575122 * ___didDismissCallback4, GADUNativeExpressAdViewWillLeaveApplicationCallback_t226040774 * ___willLeaveCallback5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUHideNativeExpressAdView(System.IntPtr)
extern "C"  void Externs_GADUHideNativeExpressAdView_m2314840048 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeExpresAdView0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUShowNativeExpressAdView(System.IntPtr)
extern "C"  void Externs_GADUShowNativeExpressAdView_m3738400491 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeExpresAdView0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADURemoveNativeExpressAdView(System.IntPtr)
extern "C"  void Externs_GADURemoveNativeExpressAdView_m1218661298 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeExpresAdView0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADURequestNativeExpressAd(System.IntPtr,System.IntPtr)
extern "C"  void Externs_GADURequestNativeExpressAd_m3318069432 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeExpresAdView0, IntPtr_t ___request1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
