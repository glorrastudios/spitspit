#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t346249057;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityDictionary`2/UnityDictionaryEnumerator<System.Object,System.Object>
struct  UnityDictionaryEnumerator_t1576183844  : public Il2CppObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<K,V>[] UnityEngine.UnityDictionary`2/UnityDictionaryEnumerator::items
	KeyValuePair_2U5BU5D_t346249057* ___items_0;
	// System.Int32 UnityEngine.UnityDictionary`2/UnityDictionaryEnumerator::index
	int32_t ___index_1;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(UnityDictionaryEnumerator_t1576183844, ___items_0)); }
	inline KeyValuePair_2U5BU5D_t346249057* get_items_0() const { return ___items_0; }
	inline KeyValuePair_2U5BU5D_t346249057** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(KeyValuePair_2U5BU5D_t346249057* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier(&___items_0, value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(UnityDictionaryEnumerator_t1576183844, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
