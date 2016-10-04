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

#include "AssemblyU2DCSharp_Soomla_Store_VirtualGood840235038.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.Store.SingleUsePackVG
struct  SingleUsePackVG_t3890338111  : public VirtualGood_t840235038
{
public:
	// System.String Soomla.Store.SingleUsePackVG::GoodItemId
	String_t* ___GoodItemId_8;
	// System.Int32 Soomla.Store.SingleUsePackVG::GoodAmount
	int32_t ___GoodAmount_9;

public:
	inline static int32_t get_offset_of_GoodItemId_8() { return static_cast<int32_t>(offsetof(SingleUsePackVG_t3890338111, ___GoodItemId_8)); }
	inline String_t* get_GoodItemId_8() const { return ___GoodItemId_8; }
	inline String_t** get_address_of_GoodItemId_8() { return &___GoodItemId_8; }
	inline void set_GoodItemId_8(String_t* value)
	{
		___GoodItemId_8 = value;
		Il2CppCodeGenWriteBarrier(&___GoodItemId_8, value);
	}

	inline static int32_t get_offset_of_GoodAmount_9() { return static_cast<int32_t>(offsetof(SingleUsePackVG_t3890338111, ___GoodAmount_9)); }
	inline int32_t get_GoodAmount_9() const { return ___GoodAmount_9; }
	inline int32_t* get_address_of_GoodAmount_9() { return &___GoodAmount_9; }
	inline void set_GoodAmount_9(int32_t value)
	{
		___GoodAmount_9 = value;
	}
};

struct SingleUsePackVG_t3890338111_StaticFields
{
public:
	// System.String Soomla.Store.SingleUsePackVG::TAG
	String_t* ___TAG_7;

public:
	inline static int32_t get_offset_of_TAG_7() { return static_cast<int32_t>(offsetof(SingleUsePackVG_t3890338111_StaticFields, ___TAG_7)); }
	inline String_t* get_TAG_7() const { return ___TAG_7; }
	inline String_t** get_address_of_TAG_7() { return &___TAG_7; }
	inline void set_TAG_7(String_t* value)
	{
		___TAG_7 = value;
		Il2CppCodeGenWriteBarrier(&___TAG_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
