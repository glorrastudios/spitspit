#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t24671498;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ADManager
struct  ADManager_t3526476298  : public MonoBehaviour_t3012272455
{
public:
	// GoogleMobileAds.Api.InterstitialAd ADManager::interstitial
	InterstitialAd_t24671498 * ___interstitial_2;

public:
	inline static int32_t get_offset_of_interstitial_2() { return static_cast<int32_t>(offsetof(ADManager_t3526476298, ___interstitial_2)); }
	inline InterstitialAd_t24671498 * get_interstitial_2() const { return ___interstitial_2; }
	inline InterstitialAd_t24671498 ** get_address_of_interstitial_2() { return &___interstitial_2; }
	inline void set_interstitial_2(InterstitialAd_t24671498 * value)
	{
		___interstitial_2 = value;
		Il2CppCodeGenWriteBarrier(&___interstitial_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
