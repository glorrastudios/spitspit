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
// Soomla.Schedule
struct Schedule_t2787348556;
// System.Collections.Generic.Dictionary`2<System.String,Soomla.Reward>
struct Dictionary_2_t3207863892;

#include "AssemblyU2DCSharp_Soomla_SoomlaEntity_1_gen1250626721.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.Reward
struct  Reward_t1570165988  : public SoomlaEntity_1_t1250626721
{
public:
	// Soomla.Schedule Soomla.Reward::Schedule
	Schedule_t2787348556 * ___Schedule_5;

public:
	inline static int32_t get_offset_of_Schedule_5() { return static_cast<int32_t>(offsetof(Reward_t1570165988, ___Schedule_5)); }
	inline Schedule_t2787348556 * get_Schedule_5() const { return ___Schedule_5; }
	inline Schedule_t2787348556 ** get_address_of_Schedule_5() { return &___Schedule_5; }
	inline void set_Schedule_5(Schedule_t2787348556 * value)
	{
		___Schedule_5 = value;
		Il2CppCodeGenWriteBarrier(&___Schedule_5, value);
	}
};

struct Reward_t1570165988_StaticFields
{
public:
	// System.String Soomla.Reward::TAG
	String_t* ___TAG_4;
	// System.Collections.Generic.Dictionary`2<System.String,Soomla.Reward> Soomla.Reward::RewardsMap
	Dictionary_2_t3207863892 * ___RewardsMap_6;

public:
	inline static int32_t get_offset_of_TAG_4() { return static_cast<int32_t>(offsetof(Reward_t1570165988_StaticFields, ___TAG_4)); }
	inline String_t* get_TAG_4() const { return ___TAG_4; }
	inline String_t** get_address_of_TAG_4() { return &___TAG_4; }
	inline void set_TAG_4(String_t* value)
	{
		___TAG_4 = value;
		Il2CppCodeGenWriteBarrier(&___TAG_4, value);
	}

	inline static int32_t get_offset_of_RewardsMap_6() { return static_cast<int32_t>(offsetof(Reward_t1570165988_StaticFields, ___RewardsMap_6)); }
	inline Dictionary_2_t3207863892 * get_RewardsMap_6() const { return ___RewardsMap_6; }
	inline Dictionary_2_t3207863892 ** get_address_of_RewardsMap_6() { return &___RewardsMap_6; }
	inline void set_RewardsMap_6(Dictionary_2_t3207863892 * value)
	{
		___RewardsMap_6 = value;
		Il2CppCodeGenWriteBarrier(&___RewardsMap_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
