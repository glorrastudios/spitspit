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

#include "AssemblyU2DCSharp_Soomla_Store_PurchaseType2779557329.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.Store.PurchaseWithVirtualItem
struct  PurchaseWithVirtualItem_t2966680205  : public PurchaseType_t2779557329
{
public:
	// System.String Soomla.Store.PurchaseWithVirtualItem::TargetItemId
	String_t* ___TargetItemId_2;
	// System.Int32 Soomla.Store.PurchaseWithVirtualItem::Amount
	int32_t ___Amount_3;

public:
	inline static int32_t get_offset_of_TargetItemId_2() { return static_cast<int32_t>(offsetof(PurchaseWithVirtualItem_t2966680205, ___TargetItemId_2)); }
	inline String_t* get_TargetItemId_2() const { return ___TargetItemId_2; }
	inline String_t** get_address_of_TargetItemId_2() { return &___TargetItemId_2; }
	inline void set_TargetItemId_2(String_t* value)
	{
		___TargetItemId_2 = value;
		Il2CppCodeGenWriteBarrier(&___TargetItemId_2, value);
	}

	inline static int32_t get_offset_of_Amount_3() { return static_cast<int32_t>(offsetof(PurchaseWithVirtualItem_t2966680205, ___Amount_3)); }
	inline int32_t get_Amount_3() const { return ___Amount_3; }
	inline int32_t* get_address_of_Amount_3() { return &___Amount_3; }
	inline void set_Amount_3(int32_t value)
	{
		___Amount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
