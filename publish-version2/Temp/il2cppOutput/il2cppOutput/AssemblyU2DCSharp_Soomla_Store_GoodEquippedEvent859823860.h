#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Soomla.Store.EquippableVG
struct EquippableVG_t2375986625;

#include "AssemblyU2DCSharp_Soomla_SoomlaEvent2098687264.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.Store.GoodEquippedEvent
struct  GoodEquippedEvent_t859823860  : public SoomlaEvent_t2098687264
{
public:
	// Soomla.Store.EquippableVG Soomla.Store.GoodEquippedEvent::mItem
	EquippableVG_t2375986625 * ___mItem_2;

public:
	inline static int32_t get_offset_of_mItem_2() { return static_cast<int32_t>(offsetof(GoodEquippedEvent_t859823860, ___mItem_2)); }
	inline EquippableVG_t2375986625 * get_mItem_2() const { return ___mItem_2; }
	inline EquippableVG_t2375986625 ** get_address_of_mItem_2() { return &___mItem_2; }
	inline void set_mItem_2(EquippableVG_t2375986625 * value)
	{
		___mItem_2 = value;
		Il2CppCodeGenWriteBarrier(&___mItem_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
