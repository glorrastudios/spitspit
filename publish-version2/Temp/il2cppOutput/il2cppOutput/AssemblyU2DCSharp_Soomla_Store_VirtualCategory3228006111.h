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
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.Store.VirtualCategory
struct  VirtualCategory_t3228006111  : public Il2CppObject
{
public:
	// System.String Soomla.Store.VirtualCategory::Name
	String_t* ___Name_1;
	// System.Collections.Generic.List`1<System.String> Soomla.Store.VirtualCategory::GoodItemIds
	List_1_t1765447871 * ___GoodItemIds_2;

public:
	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(VirtualCategory_t3228006111, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier(&___Name_1, value);
	}

	inline static int32_t get_offset_of_GoodItemIds_2() { return static_cast<int32_t>(offsetof(VirtualCategory_t3228006111, ___GoodItemIds_2)); }
	inline List_1_t1765447871 * get_GoodItemIds_2() const { return ___GoodItemIds_2; }
	inline List_1_t1765447871 ** get_address_of_GoodItemIds_2() { return &___GoodItemIds_2; }
	inline void set_GoodItemIds_2(List_1_t1765447871 * value)
	{
		___GoodItemIds_2 = value;
		Il2CppCodeGenWriteBarrier(&___GoodItemIds_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
