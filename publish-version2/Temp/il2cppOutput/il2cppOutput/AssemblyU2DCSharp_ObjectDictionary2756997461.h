#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<ObjectKvp>
struct List_1_t1311312255;

#include "AssemblyU2DCSharp_UnityEngine_UnityDictionary_1_ge1897667724.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectDictionary
struct  ObjectDictionary_t2756997461  : public UnityDictionary_1_t1897667724
{
public:
	// System.Collections.Generic.List`1<ObjectKvp> ObjectDictionary::values
	List_1_t1311312255 * ___values_0;

public:
	inline static int32_t get_offset_of_values_0() { return static_cast<int32_t>(offsetof(ObjectDictionary_t2756997461, ___values_0)); }
	inline List_1_t1311312255 * get_values_0() const { return ___values_0; }
	inline List_1_t1311312255 ** get_address_of_values_0() { return &___values_0; }
	inline void set_values_0(List_1_t1311312255 * value)
	{
		___values_0 = value;
		Il2CppCodeGenWriteBarrier(&___values_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
