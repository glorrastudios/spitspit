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

#include "AssemblyU2DCSharp_Soomla_SoomlaEvent2098687264.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.MarketItemsRefreshFailedEvent
struct  MarketItemsRefreshFailedEvent_t3126712315  : public SoomlaEvent_t2098687264
{
public:
	// System.String Soomla.MarketItemsRefreshFailedEvent::ErrorMessage
	String_t* ___ErrorMessage_2;

public:
	inline static int32_t get_offset_of_ErrorMessage_2() { return static_cast<int32_t>(offsetof(MarketItemsRefreshFailedEvent_t3126712315, ___ErrorMessage_2)); }
	inline String_t* get_ErrorMessage_2() const { return ___ErrorMessage_2; }
	inline String_t** get_address_of_ErrorMessage_2() { return &___ErrorMessage_2; }
	inline void set_ErrorMessage_2(String_t* value)
	{
		___ErrorMessage_2 = value;
		Il2CppCodeGenWriteBarrier(&___ErrorMessage_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
