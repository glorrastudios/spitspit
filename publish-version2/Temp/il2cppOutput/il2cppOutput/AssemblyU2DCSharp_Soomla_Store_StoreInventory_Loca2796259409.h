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

// Soomla.Store.StoreInventory/LocalUpgrade
struct  LocalUpgrade_t2796259409  : public Il2CppObject
{
public:
	// System.Int32 Soomla.Store.StoreInventory/LocalUpgrade::level
	int32_t ___level_0;
	// System.String Soomla.Store.StoreInventory/LocalUpgrade::itemId
	String_t* ___itemId_1;

public:
	inline static int32_t get_offset_of_level_0() { return static_cast<int32_t>(offsetof(LocalUpgrade_t2796259409, ___level_0)); }
	inline int32_t get_level_0() const { return ___level_0; }
	inline int32_t* get_address_of_level_0() { return &___level_0; }
	inline void set_level_0(int32_t value)
	{
		___level_0 = value;
	}

	inline static int32_t get_offset_of_itemId_1() { return static_cast<int32_t>(offsetof(LocalUpgrade_t2796259409, ___itemId_1)); }
	inline String_t* get_itemId_1() const { return ___itemId_1; }
	inline String_t** get_address_of_itemId_1() { return &___itemId_1; }
	inline void set_itemId_1(String_t* value)
	{
		___itemId_1 = value;
		Il2CppCodeGenWriteBarrier(&___itemId_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
