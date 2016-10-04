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

#include "AssemblyU2DCSharp_Soomla_Store_PurchasableVirtualI2555170966.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.Store.VirtualCurrencyPack
struct  VirtualCurrencyPack_t1843991083  : public PurchasableVirtualItem_t2555170966
{
public:
	// System.Int32 Soomla.Store.VirtualCurrencyPack::CurrencyAmount
	int32_t ___CurrencyAmount_8;
	// System.String Soomla.Store.VirtualCurrencyPack::CurrencyItemId
	String_t* ___CurrencyItemId_9;

public:
	inline static int32_t get_offset_of_CurrencyAmount_8() { return static_cast<int32_t>(offsetof(VirtualCurrencyPack_t1843991083, ___CurrencyAmount_8)); }
	inline int32_t get_CurrencyAmount_8() const { return ___CurrencyAmount_8; }
	inline int32_t* get_address_of_CurrencyAmount_8() { return &___CurrencyAmount_8; }
	inline void set_CurrencyAmount_8(int32_t value)
	{
		___CurrencyAmount_8 = value;
	}

	inline static int32_t get_offset_of_CurrencyItemId_9() { return static_cast<int32_t>(offsetof(VirtualCurrencyPack_t1843991083, ___CurrencyItemId_9)); }
	inline String_t* get_CurrencyItemId_9() const { return ___CurrencyItemId_9; }
	inline String_t** get_address_of_CurrencyItemId_9() { return &___CurrencyItemId_9; }
	inline void set_CurrencyItemId_9(String_t* value)
	{
		___CurrencyItemId_9 = value;
		Il2CppCodeGenWriteBarrier(&___CurrencyItemId_9, value);
	}
};

struct VirtualCurrencyPack_t1843991083_StaticFields
{
public:
	// System.String Soomla.Store.VirtualCurrencyPack::TAG
	String_t* ___TAG_7;

public:
	inline static int32_t get_offset_of_TAG_7() { return static_cast<int32_t>(offsetof(VirtualCurrencyPack_t1843991083_StaticFields, ___TAG_7)); }
	inline String_t* get_TAG_7() const { return ___TAG_7; }
	inline String_t** get_address_of_TAG_7() { return &___TAG_7; }
	inline void set_TAG_7(String_t* value)
	{
		___TAG_7 = value;
		Il2CppCodeGenWriteBarrier(&___TAG_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
