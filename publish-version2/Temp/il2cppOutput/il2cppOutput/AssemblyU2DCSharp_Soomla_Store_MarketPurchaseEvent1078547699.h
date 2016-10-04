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
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;

#include "AssemblyU2DCSharp_Soomla_SoomlaEvent2098687264.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.Store.MarketPurchaseEvent
struct  MarketPurchaseEvent_t1078547699  : public SoomlaEvent_t2098687264
{
public:
	// Soomla.Store.PurchasableVirtualItem Soomla.Store.MarketPurchaseEvent::PurchasableVirtualItem
	PurchasableVirtualItem_t2555170966 * ___PurchasableVirtualItem_2;
	// System.String Soomla.Store.MarketPurchaseEvent::Payload
	String_t* ___Payload_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Soomla.Store.MarketPurchaseEvent::ExtraInfo
	Dictionary_2_t2606186806 * ___ExtraInfo_4;

public:
	inline static int32_t get_offset_of_PurchasableVirtualItem_2() { return static_cast<int32_t>(offsetof(MarketPurchaseEvent_t1078547699, ___PurchasableVirtualItem_2)); }
	inline PurchasableVirtualItem_t2555170966 * get_PurchasableVirtualItem_2() const { return ___PurchasableVirtualItem_2; }
	inline PurchasableVirtualItem_t2555170966 ** get_address_of_PurchasableVirtualItem_2() { return &___PurchasableVirtualItem_2; }
	inline void set_PurchasableVirtualItem_2(PurchasableVirtualItem_t2555170966 * value)
	{
		___PurchasableVirtualItem_2 = value;
		Il2CppCodeGenWriteBarrier(&___PurchasableVirtualItem_2, value);
	}

	inline static int32_t get_offset_of_Payload_3() { return static_cast<int32_t>(offsetof(MarketPurchaseEvent_t1078547699, ___Payload_3)); }
	inline String_t* get_Payload_3() const { return ___Payload_3; }
	inline String_t** get_address_of_Payload_3() { return &___Payload_3; }
	inline void set_Payload_3(String_t* value)
	{
		___Payload_3 = value;
		Il2CppCodeGenWriteBarrier(&___Payload_3, value);
	}

	inline static int32_t get_offset_of_ExtraInfo_4() { return static_cast<int32_t>(offsetof(MarketPurchaseEvent_t1078547699, ___ExtraInfo_4)); }
	inline Dictionary_2_t2606186806 * get_ExtraInfo_4() const { return ___ExtraInfo_4; }
	inline Dictionary_2_t2606186806 ** get_address_of_ExtraInfo_4() { return &___ExtraInfo_4; }
	inline void set_ExtraInfo_4(Dictionary_2_t2606186806 * value)
	{
		___ExtraInfo_4 = value;
		Il2CppCodeGenWriteBarrier(&___ExtraInfo_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
