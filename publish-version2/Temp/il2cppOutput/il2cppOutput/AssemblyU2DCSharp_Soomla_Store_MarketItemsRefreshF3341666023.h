#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Soomla.Store.MarketItem>
struct List_1_t4071767134;

#include "AssemblyU2DCSharp_Soomla_SoomlaEvent2098687264.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.Store.MarketItemsRefreshFinishedEvent
struct  MarketItemsRefreshFinishedEvent_t3341666023  : public SoomlaEvent_t2098687264
{
public:
	// System.Collections.Generic.List`1<Soomla.Store.MarketItem> Soomla.Store.MarketItemsRefreshFinishedEvent::mMarketItems
	List_1_t4071767134 * ___mMarketItems_2;

public:
	inline static int32_t get_offset_of_mMarketItems_2() { return static_cast<int32_t>(offsetof(MarketItemsRefreshFinishedEvent_t3341666023, ___mMarketItems_2)); }
	inline List_1_t4071767134 * get_mMarketItems_2() const { return ___mMarketItems_2; }
	inline List_1_t4071767134 ** get_address_of_mMarketItems_2() { return &___mMarketItems_2; }
	inline void set_mMarketItems_2(List_1_t4071767134 * value)
	{
		___mMarketItems_2 = value;
		Il2CppCodeGenWriteBarrier(&___mMarketItems_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
