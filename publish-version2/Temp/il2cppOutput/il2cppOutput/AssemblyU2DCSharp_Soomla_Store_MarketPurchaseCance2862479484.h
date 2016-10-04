#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Soomla.Store.PurchasableVirtualItem
struct PurchasableVirtualItem_t2555170966;

#include "AssemblyU2DCSharp_Soomla_SoomlaEvent2098687264.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.Store.MarketPurchaseCancelledEvent
struct  MarketPurchaseCancelledEvent_t2862479484  : public SoomlaEvent_t2098687264
{
public:
	// Soomla.Store.PurchasableVirtualItem Soomla.Store.MarketPurchaseCancelledEvent::mPurchasableVirtualItem
	PurchasableVirtualItem_t2555170966 * ___mPurchasableVirtualItem_2;

public:
	inline static int32_t get_offset_of_mPurchasableVirtualItem_2() { return static_cast<int32_t>(offsetof(MarketPurchaseCancelledEvent_t2862479484, ___mPurchasableVirtualItem_2)); }
	inline PurchasableVirtualItem_t2555170966 * get_mPurchasableVirtualItem_2() const { return ___mPurchasableVirtualItem_2; }
	inline PurchasableVirtualItem_t2555170966 ** get_address_of_mPurchasableVirtualItem_2() { return &___mPurchasableVirtualItem_2; }
	inline void set_mPurchasableVirtualItem_2(PurchasableVirtualItem_t2555170966 * value)
	{
		___mPurchasableVirtualItem_2 = value;
		Il2CppCodeGenWriteBarrier(&___mPurchasableVirtualItem_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
