#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// JSONObject
struct JSONObject_t1752376903;
// System.String
struct String_t;
// Soomla.Store.PurchaseWithVirtualItem
struct PurchaseWithVirtualItem_t2966680205;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.Store.PurchaseWithVirtualItem/<Buy>c__AnonStorey19
struct  U3CBuyU3Ec__AnonStorey19_t4123054747  : public Il2CppObject
{
public:
	// JSONObject Soomla.Store.PurchaseWithVirtualItem/<Buy>c__AnonStorey19::eventJSON
	JSONObject_t1752376903 * ___eventJSON_0;
	// System.String Soomla.Store.PurchaseWithVirtualItem/<Buy>c__AnonStorey19::payload
	String_t* ___payload_1;
	// Soomla.Store.PurchaseWithVirtualItem Soomla.Store.PurchaseWithVirtualItem/<Buy>c__AnonStorey19::<>f__this
	PurchaseWithVirtualItem_t2966680205 * ___U3CU3Ef__this_2;

public:
	inline static int32_t get_offset_of_eventJSON_0() { return static_cast<int32_t>(offsetof(U3CBuyU3Ec__AnonStorey19_t4123054747, ___eventJSON_0)); }
	inline JSONObject_t1752376903 * get_eventJSON_0() const { return ___eventJSON_0; }
	inline JSONObject_t1752376903 ** get_address_of_eventJSON_0() { return &___eventJSON_0; }
	inline void set_eventJSON_0(JSONObject_t1752376903 * value)
	{
		___eventJSON_0 = value;
		Il2CppCodeGenWriteBarrier(&___eventJSON_0, value);
	}

	inline static int32_t get_offset_of_payload_1() { return static_cast<int32_t>(offsetof(U3CBuyU3Ec__AnonStorey19_t4123054747, ___payload_1)); }
	inline String_t* get_payload_1() const { return ___payload_1; }
	inline String_t** get_address_of_payload_1() { return &___payload_1; }
	inline void set_payload_1(String_t* value)
	{
		___payload_1 = value;
		Il2CppCodeGenWriteBarrier(&___payload_1, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_2() { return static_cast<int32_t>(offsetof(U3CBuyU3Ec__AnonStorey19_t4123054747, ___U3CU3Ef__this_2)); }
	inline PurchaseWithVirtualItem_t2966680205 * get_U3CU3Ef__this_2() const { return ___U3CU3Ef__this_2; }
	inline PurchaseWithVirtualItem_t2966680205 ** get_address_of_U3CU3Ef__this_2() { return &___U3CU3Ef__this_2; }
	inline void set_U3CU3Ef__this_2(PurchaseWithVirtualItem_t2966680205 * value)
	{
		___U3CU3Ef__this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
