#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Soomla.Reward
struct Reward_t1570165988;

#include "AssemblyU2DCSharp_Soomla_SoomlaEvent2098687264.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.RewardGivenEvent
struct  RewardGivenEvent_t2233781089  : public SoomlaEvent_t2098687264
{
public:
	// Soomla.Reward Soomla.RewardGivenEvent::Reward
	Reward_t1570165988 * ___Reward_2;

public:
	inline static int32_t get_offset_of_Reward_2() { return static_cast<int32_t>(offsetof(RewardGivenEvent_t2233781089, ___Reward_2)); }
	inline Reward_t1570165988 * get_Reward_2() const { return ___Reward_2; }
	inline Reward_t1570165988 ** get_address_of_Reward_2() { return &___Reward_2; }
	inline void set_Reward_2(Reward_t1570165988 * value)
	{
		___Reward_2 = value;
		Il2CppCodeGenWriteBarrier(&___Reward_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
