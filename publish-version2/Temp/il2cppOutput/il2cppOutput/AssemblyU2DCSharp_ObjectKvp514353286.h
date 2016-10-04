#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "AssemblyU2DCSharp_UnityEngine_UnityNameValuePair_13857620748.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectKvp
struct  ObjectKvp_t514353286  : public UnityNameValuePair_1_t3857620748
{
public:
	// System.String ObjectKvp::value
	String_t* ___value_3;

public:
	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(ObjectKvp_t514353286, ___value_3)); }
	inline String_t* get_value_3() const { return ___value_3; }
	inline String_t** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(String_t* value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier(&___value_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
