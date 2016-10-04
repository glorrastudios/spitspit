#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1359043831;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t3535390332;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.NativeExpressAdClient
struct  NativeExpressAdClient_t364937443  : public Il2CppObject
{
public:
	// System.IntPtr GoogleMobileAds.iOS.NativeExpressAdClient::nativeExpressAdViewPtr
	IntPtr_t ___nativeExpressAdViewPtr_0;
	// System.IntPtr GoogleMobileAds.iOS.NativeExpressAdClient::nativeExpressAdClientPtr
	IntPtr_t ___nativeExpressAdClientPtr_1;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.NativeExpressAdClient::OnAdLoaded
	EventHandler_1_t1359043831 * ___OnAdLoaded_2;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.iOS.NativeExpressAdClient::OnAdFailedToLoad
	EventHandler_1_t3535390332 * ___OnAdFailedToLoad_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.NativeExpressAdClient::OnAdOpening
	EventHandler_1_t1359043831 * ___OnAdOpening_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.NativeExpressAdClient::OnAdClosed
	EventHandler_1_t1359043831 * ___OnAdClosed_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.NativeExpressAdClient::OnAdLeavingApplication
	EventHandler_1_t1359043831 * ___OnAdLeavingApplication_6;

public:
	inline static int32_t get_offset_of_nativeExpressAdViewPtr_0() { return static_cast<int32_t>(offsetof(NativeExpressAdClient_t364937443, ___nativeExpressAdViewPtr_0)); }
	inline IntPtr_t get_nativeExpressAdViewPtr_0() const { return ___nativeExpressAdViewPtr_0; }
	inline IntPtr_t* get_address_of_nativeExpressAdViewPtr_0() { return &___nativeExpressAdViewPtr_0; }
	inline void set_nativeExpressAdViewPtr_0(IntPtr_t value)
	{
		___nativeExpressAdViewPtr_0 = value;
	}

	inline static int32_t get_offset_of_nativeExpressAdClientPtr_1() { return static_cast<int32_t>(offsetof(NativeExpressAdClient_t364937443, ___nativeExpressAdClientPtr_1)); }
	inline IntPtr_t get_nativeExpressAdClientPtr_1() const { return ___nativeExpressAdClientPtr_1; }
	inline IntPtr_t* get_address_of_nativeExpressAdClientPtr_1() { return &___nativeExpressAdClientPtr_1; }
	inline void set_nativeExpressAdClientPtr_1(IntPtr_t value)
	{
		___nativeExpressAdClientPtr_1 = value;
	}

	inline static int32_t get_offset_of_OnAdLoaded_2() { return static_cast<int32_t>(offsetof(NativeExpressAdClient_t364937443, ___OnAdLoaded_2)); }
	inline EventHandler_1_t1359043831 * get_OnAdLoaded_2() const { return ___OnAdLoaded_2; }
	inline EventHandler_1_t1359043831 ** get_address_of_OnAdLoaded_2() { return &___OnAdLoaded_2; }
	inline void set_OnAdLoaded_2(EventHandler_1_t1359043831 * value)
	{
		___OnAdLoaded_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdLoaded_2, value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_3() { return static_cast<int32_t>(offsetof(NativeExpressAdClient_t364937443, ___OnAdFailedToLoad_3)); }
	inline EventHandler_1_t3535390332 * get_OnAdFailedToLoad_3() const { return ___OnAdFailedToLoad_3; }
	inline EventHandler_1_t3535390332 ** get_address_of_OnAdFailedToLoad_3() { return &___OnAdFailedToLoad_3; }
	inline void set_OnAdFailedToLoad_3(EventHandler_1_t3535390332 * value)
	{
		___OnAdFailedToLoad_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdFailedToLoad_3, value);
	}

	inline static int32_t get_offset_of_OnAdOpening_4() { return static_cast<int32_t>(offsetof(NativeExpressAdClient_t364937443, ___OnAdOpening_4)); }
	inline EventHandler_1_t1359043831 * get_OnAdOpening_4() const { return ___OnAdOpening_4; }
	inline EventHandler_1_t1359043831 ** get_address_of_OnAdOpening_4() { return &___OnAdOpening_4; }
	inline void set_OnAdOpening_4(EventHandler_1_t1359043831 * value)
	{
		___OnAdOpening_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdOpening_4, value);
	}

	inline static int32_t get_offset_of_OnAdClosed_5() { return static_cast<int32_t>(offsetof(NativeExpressAdClient_t364937443, ___OnAdClosed_5)); }
	inline EventHandler_1_t1359043831 * get_OnAdClosed_5() const { return ___OnAdClosed_5; }
	inline EventHandler_1_t1359043831 ** get_address_of_OnAdClosed_5() { return &___OnAdClosed_5; }
	inline void set_OnAdClosed_5(EventHandler_1_t1359043831 * value)
	{
		___OnAdClosed_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdClosed_5, value);
	}

	inline static int32_t get_offset_of_OnAdLeavingApplication_6() { return static_cast<int32_t>(offsetof(NativeExpressAdClient_t364937443, ___OnAdLeavingApplication_6)); }
	inline EventHandler_1_t1359043831 * get_OnAdLeavingApplication_6() const { return ___OnAdLeavingApplication_6; }
	inline EventHandler_1_t1359043831 ** get_address_of_OnAdLeavingApplication_6() { return &___OnAdLeavingApplication_6; }
	inline void set_OnAdLeavingApplication_6(EventHandler_1_t1359043831 * value)
	{
		___OnAdLeavingApplication_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdLeavingApplication_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
