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
// Soomla.Store.UpgradeVG
struct UpgradeVG_t3350816643;

#include "AssemblyU2DCSharp_Soomla_SoomlaEvent2098687264.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.Store.GoodUpgradeEvent
struct  GoodUpgradeEvent_t1651210545  : public SoomlaEvent_t2098687264
{
public:
	// Soomla.Store.VirtualGood Soomla.Store.GoodUpgradeEvent::mItem
	VirtualGood_t840235038 * ___mItem_2;
	// Soomla.Store.UpgradeVG Soomla.Store.GoodUpgradeEvent::mCurrentUpgradeItem
	UpgradeVG_t3350816643 * ___mCurrentUpgradeItem_3;

public:
	inline static int32_t get_offset_of_mItem_2() { return static_cast<int32_t>(offsetof(GoodUpgradeEvent_t1651210545, ___mItem_2)); }
	inline VirtualGood_t840235038 * get_mItem_2() const { return ___mItem_2; }
	inline VirtualGood_t840235038 ** get_address_of_mItem_2() { return &___mItem_2; }
	inline void set_mItem_2(VirtualGood_t840235038 * value)
	{
		___mItem_2 = value;
		Il2CppCodeGenWriteBarrier(&___mItem_2, value);
	}

	inline static int32_t get_offset_of_mCurrentUpgradeItem_3() { return static_cast<int32_t>(offsetof(GoodUpgradeEvent_t1651210545, ___mCurrentUpgradeItem_3)); }
	inline UpgradeVG_t3350816643 * get_mCurrentUpgradeItem_3() const { return ___mCurrentUpgradeItem_3; }
	inline UpgradeVG_t3350816643 ** get_address_of_mCurrentUpgradeItem_3() { return &___mCurrentUpgradeItem_3; }
	inline void set_mCurrentUpgradeItem_3(UpgradeVG_t3350816643 * value)
	{
		___mCurrentUpgradeItem_3 = value;
		Il2CppCodeGenWriteBarrier(&___mCurrentUpgradeItem_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
