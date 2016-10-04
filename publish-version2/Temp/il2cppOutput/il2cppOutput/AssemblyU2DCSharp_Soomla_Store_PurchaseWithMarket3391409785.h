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
// Soomla.Store.MarketItem
struct MarketItem_t3274808165;

#include "AssemblyU2DCSharp_Soomla_Store_PurchaseType2779557329.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.Store.PurchaseWithMarket
struct  PurchaseWithMarket_t3391409785  : public PurchaseType_t2779557329
{
public:
	// Soomla.Store.MarketItem Soomla.Store.PurchaseWithMarket::MarketItem
	MarketItem_t3274808165 * ___MarketItem_2;

public:
	inline static int32_t get_offset_of_MarketItem_2() { return static_cast<int32_t>(offsetof(PurchaseWithMarket_t3391409785, ___MarketItem_2)); }
	inline MarketItem_t3274808165 * get_MarketItem_2() const { return ___MarketItem_2; }
	inline MarketItem_t3274808165 ** get_address_of_MarketItem_2() { return &___MarketItem_2; }
	inline void set_MarketItem_2(MarketItem_t3274808165 * value)
	{
		___MarketItem_2 = value;
		Il2CppCodeGenWriteBarrier(&___MarketItem_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
