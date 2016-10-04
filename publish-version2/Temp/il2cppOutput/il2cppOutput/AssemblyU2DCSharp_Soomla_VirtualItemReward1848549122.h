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

#include "AssemblyU2DCSharp_Soomla_Reward1570165988.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.VirtualItemReward
struct  VirtualItemReward_t1848549122  : public Reward_t1570165988
{
public:
	// System.String Soomla.VirtualItemReward::AssociatedItemId
	String_t* ___AssociatedItemId_8;
	// System.Int32 Soomla.VirtualItemReward::Amount
	int32_t ___Amount_9;

public:
	inline static int32_t get_offset_of_AssociatedItemId_8() { return static_cast<int32_t>(offsetof(VirtualItemReward_t1848549122, ___AssociatedItemId_8)); }
	inline String_t* get_AssociatedItemId_8() const { return ___AssociatedItemId_8; }
	inline String_t** get_address_of_AssociatedItemId_8() { return &___AssociatedItemId_8; }
	inline void set_AssociatedItemId_8(String_t* value)
	{
		___AssociatedItemId_8 = value;
		Il2CppCodeGenWriteBarrier(&___AssociatedItemId_8, value);
	}

	inline static int32_t get_offset_of_Amount_9() { return static_cast<int32_t>(offsetof(VirtualItemReward_t1848549122, ___Amount_9)); }
	inline int32_t get_Amount_9() const { return ___Amount_9; }
	inline int32_t* get_address_of_Amount_9() { return &___Amount_9; }
	inline void set_Amount_9(int32_t value)
	{
		___Amount_9 = value;
	}
};

struct VirtualItemReward_t1848549122_StaticFields
{
public:
	// System.String Soomla.VirtualItemReward::TAG
	String_t* ___TAG_7;

public:
	inline static int32_t get_offset_of_TAG_7() { return static_cast<int32_t>(offsetof(VirtualItemReward_t1848549122_StaticFields, ___TAG_7)); }
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
