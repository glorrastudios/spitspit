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
// Soomla.Store.PurchaseType
struct PurchaseType_t2779557329;

#include "AssemblyU2DCSharp_Soomla_Store_VirtualItem840299124.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.Store.PurchasableVirtualItem
struct  PurchasableVirtualItem_t2555170966  : public VirtualItem_t840299124
{
public:
	// Soomla.Store.PurchaseType Soomla.Store.PurchasableVirtualItem::PurchaseType
	PurchaseType_t2779557329 * ___PurchaseType_6;

public:
	inline static int32_t get_offset_of_PurchaseType_6() { return static_cast<int32_t>(offsetof(PurchasableVirtualItem_t2555170966, ___PurchaseType_6)); }
	inline PurchaseType_t2779557329 * get_PurchaseType_6() const { return ___PurchaseType_6; }
	inline PurchaseType_t2779557329 ** get_address_of_PurchaseType_6() { return &___PurchaseType_6; }
	inline void set_PurchaseType_6(PurchaseType_t2779557329 * value)
	{
		___PurchaseType_6 = value;
		Il2CppCodeGenWriteBarrier(&___PurchaseType_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
