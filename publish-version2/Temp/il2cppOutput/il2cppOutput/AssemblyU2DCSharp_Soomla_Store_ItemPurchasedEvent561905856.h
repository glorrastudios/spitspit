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
// System.String
struct String_t;

#include "AssemblyU2DCSharp_Soomla_SoomlaEvent2098687264.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.Store.ItemPurchasedEvent
struct  ItemPurchasedEvent_t561905856  : public SoomlaEvent_t2098687264
{
public:
	// Soomla.Store.PurchasableVirtualItem Soomla.Store.ItemPurchasedEvent::mItem
	PurchasableVirtualItem_t2555170966 * ___mItem_2;
	// System.String Soomla.Store.ItemPurchasedEvent::mPayload
	String_t* ___mPayload_3;

public:
	inline static int32_t get_offset_of_mItem_2() { return static_cast<int32_t>(offsetof(ItemPurchasedEvent_t561905856, ___mItem_2)); }
	inline PurchasableVirtualItem_t2555170966 * get_mItem_2() const { return ___mItem_2; }
	inline PurchasableVirtualItem_t2555170966 ** get_address_of_mItem_2() { return &___mItem_2; }
	inline void set_mItem_2(PurchasableVirtualItem_t2555170966 * value)
	{
		___mItem_2 = value;
		Il2CppCodeGenWriteBarrier(&___mItem_2, value);
	}

	inline static int32_t get_offset_of_mPayload_3() { return static_cast<int32_t>(offsetof(ItemPurchasedEvent_t561905856, ___mPayload_3)); }
	inline String_t* get_mPayload_3() const { return ___mPayload_3; }
	inline String_t** get_address_of_mPayload_3() { return &___mPayload_3; }
	inline void set_mPayload_3(String_t* value)
	{
		___mPayload_3 = value;
		Il2CppCodeGenWriteBarrier(&___mPayload_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
