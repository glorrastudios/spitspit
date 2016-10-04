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
// System.Collections.Generic.List`1<Soomla.Reward>
struct List_1_t2367124957;

#include "AssemblyU2DCSharp_Soomla_Reward1570165988.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.SequenceReward
struct  SequenceReward_t1164674053  : public Reward_t1570165988
{
public:
	// System.Collections.Generic.List`1<Soomla.Reward> Soomla.SequenceReward::Rewards
	List_1_t2367124957 * ___Rewards_8;

public:
	inline static int32_t get_offset_of_Rewards_8() { return static_cast<int32_t>(offsetof(SequenceReward_t1164674053, ___Rewards_8)); }
	inline List_1_t2367124957 * get_Rewards_8() const { return ___Rewards_8; }
	inline List_1_t2367124957 ** get_address_of_Rewards_8() { return &___Rewards_8; }
	inline void set_Rewards_8(List_1_t2367124957 * value)
	{
		___Rewards_8 = value;
		Il2CppCodeGenWriteBarrier(&___Rewards_8, value);
	}
};

struct SequenceReward_t1164674053_StaticFields
{
public:
	// System.String Soomla.SequenceReward::TAG
	String_t* ___TAG_7;

public:
	inline static int32_t get_offset_of_TAG_7() { return static_cast<int32_t>(offsetof(SequenceReward_t1164674053_StaticFields, ___TAG_7)); }
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
