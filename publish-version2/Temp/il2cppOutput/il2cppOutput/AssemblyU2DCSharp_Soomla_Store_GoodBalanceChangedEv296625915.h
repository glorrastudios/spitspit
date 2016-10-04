#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Soomla.Store.VirtualGood
struct VirtualGood_t840235038;

#include "AssemblyU2DCSharp_Soomla_SoomlaEvent2098687264.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.Store.GoodBalanceChangedEvent
struct  GoodBalanceChangedEvent_t296625915  : public SoomlaEvent_t2098687264
{
public:
	// Soomla.Store.VirtualGood Soomla.Store.GoodBalanceChangedEvent::mItem
	VirtualGood_t840235038 * ___mItem_2;
	// System.Int32 Soomla.Store.GoodBalanceChangedEvent::mBalance
	int32_t ___mBalance_3;
	// System.Int32 Soomla.Store.GoodBalanceChangedEvent::mAmountAdded
	int32_t ___mAmountAdded_4;

public:
	inline static int32_t get_offset_of_mItem_2() { return static_cast<int32_t>(offsetof(GoodBalanceChangedEvent_t296625915, ___mItem_2)); }
	inline VirtualGood_t840235038 * get_mItem_2() const { return ___mItem_2; }
	inline VirtualGood_t840235038 ** get_address_of_mItem_2() { return &___mItem_2; }
	inline void set_mItem_2(VirtualGood_t840235038 * value)
	{
		___mItem_2 = value;
		Il2CppCodeGenWriteBarrier(&___mItem_2, value);
	}

	inline static int32_t get_offset_of_mBalance_3() { return static_cast<int32_t>(offsetof(GoodBalanceChangedEvent_t296625915, ___mBalance_3)); }
	inline int32_t get_mBalance_3() const { return ___mBalance_3; }
	inline int32_t* get_address_of_mBalance_3() { return &___mBalance_3; }
	inline void set_mBalance_3(int32_t value)
	{
		___mBalance_3 = value;
	}

	inline static int32_t get_offset_of_mAmountAdded_4() { return static_cast<int32_t>(offsetof(GoodBalanceChangedEvent_t296625915, ___mAmountAdded_4)); }
	inline int32_t get_mAmountAdded_4() const { return ___mAmountAdded_4; }
	inline int32_t* get_address_of_mAmountAdded_4() { return &___mAmountAdded_4; }
	inline void set_mAmountAdded_4(int32_t value)
	{
		___mAmountAdded_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
