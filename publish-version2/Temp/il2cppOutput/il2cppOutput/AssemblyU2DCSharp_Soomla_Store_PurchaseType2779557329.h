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

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.Store.PurchaseType
struct  PurchaseType_t2779557329  : public Il2CppObject
{
public:
	// Soomla.Store.PurchasableVirtualItem Soomla.Store.PurchaseType::AssociatedItem
	PurchasableVirtualItem_t2555170966 * ___AssociatedItem_0;

public:
	inline static int32_t get_offset_of_AssociatedItem_0() { return static_cast<int32_t>(offsetof(PurchaseType_t2779557329, ___AssociatedItem_0)); }
	inline PurchasableVirtualItem_t2555170966 * get_AssociatedItem_0() const { return ___AssociatedItem_0; }
	inline PurchasableVirtualItem_t2555170966 ** get_address_of_AssociatedItem_0() { return &___AssociatedItem_0; }
	inline void set_AssociatedItem_0(PurchasableVirtualItem_t2555170966 * value)
	{
		___AssociatedItem_0 = value;
		Il2CppCodeGenWriteBarrier(&___AssociatedItem_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
