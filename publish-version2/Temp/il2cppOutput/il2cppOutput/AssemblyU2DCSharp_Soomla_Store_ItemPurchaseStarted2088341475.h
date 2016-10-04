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

// Soomla.Store.ItemPurchaseStartedEvent
struct  ItemPurchaseStartedEvent_t2088341475  : public SoomlaEvent_t2098687264
{
public:
	// Soomla.Store.PurchasableVirtualItem Soomla.Store.ItemPurchaseStartedEvent::mItem
	PurchasableVirtualItem_t2555170966 * ___mItem_2;

public:
	inline static int32_t get_offset_of_mItem_2() { return static_cast<int32_t>(offsetof(ItemPurchaseStartedEvent_t2088341475, ___mItem_2)); }
	inline PurchasableVirtualItem_t2555170966 * get_mItem_2() const { return ___mItem_2; }
	inline PurchasableVirtualItem_t2555170966 ** get_address_of_mItem_2() { return &___mItem_2; }
	inline void set_mItem_2(PurchasableVirtualItem_t2555170966 * value)
	{
		___mItem_2 = value;
		Il2CppCodeGenWriteBarrier(&___mItem_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
