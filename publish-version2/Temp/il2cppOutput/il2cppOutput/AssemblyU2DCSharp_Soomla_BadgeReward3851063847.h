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

// Soomla.BadgeReward
struct  BadgeReward_t3851063847  : public Reward_t1570165988
{
public:
	// System.String Soomla.BadgeReward::IconUrl
	String_t* ___IconUrl_7;

public:
	inline static int32_t get_offset_of_IconUrl_7() { return static_cast<int32_t>(offsetof(BadgeReward_t3851063847, ___IconUrl_7)); }
	inline String_t* get_IconUrl_7() const { return ___IconUrl_7; }
	inline String_t** get_address_of_IconUrl_7() { return &___IconUrl_7; }
	inline void set_IconUrl_7(String_t* value)
	{
		___IconUrl_7 = value;
		Il2CppCodeGenWriteBarrier(&___IconUrl_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
