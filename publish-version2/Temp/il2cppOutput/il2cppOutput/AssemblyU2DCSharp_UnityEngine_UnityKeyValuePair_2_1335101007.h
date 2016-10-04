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

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityKeyValuePair`2<System.String,System.String>
struct  UnityKeyValuePair_2_t1335101007  : public Il2CppObject
{
public:
	// K UnityEngine.UnityKeyValuePair`2::<Key>k__BackingField
	String_t* ___U3CKeyU3Ek__BackingField_0;
	// V UnityEngine.UnityKeyValuePair`2::<Value>k__BackingField
	String_t* ___U3CValueU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CKeyU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UnityKeyValuePair_2_t1335101007, ___U3CKeyU3Ek__BackingField_0)); }
	inline String_t* get_U3CKeyU3Ek__BackingField_0() const { return ___U3CKeyU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CKeyU3Ek__BackingField_0() { return &___U3CKeyU3Ek__BackingField_0; }
	inline void set_U3CKeyU3Ek__BackingField_0(String_t* value)
	{
		___U3CKeyU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CKeyU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(UnityKeyValuePair_2_t1335101007, ___U3CValueU3Ek__BackingField_1)); }
	inline String_t* get_U3CValueU3Ek__BackingField_1() const { return ___U3CValueU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CValueU3Ek__BackingField_1() { return &___U3CValueU3Ek__BackingField_1; }
	inline void set_U3CValueU3Ek__BackingField_1(String_t* value)
	{
		___U3CValueU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CValueU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
