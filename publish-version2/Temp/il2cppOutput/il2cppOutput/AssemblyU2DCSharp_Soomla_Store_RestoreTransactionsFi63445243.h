#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_Soomla_SoomlaEvent2098687264.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.Store.RestoreTransactionsFinishedEvent
struct  RestoreTransactionsFinishedEvent_t63445243  : public SoomlaEvent_t2098687264
{
public:
	// System.Boolean Soomla.Store.RestoreTransactionsFinishedEvent::mSuccess
	bool ___mSuccess_2;

public:
	inline static int32_t get_offset_of_mSuccess_2() { return static_cast<int32_t>(offsetof(RestoreTransactionsFinishedEvent_t63445243, ___mSuccess_2)); }
	inline bool get_mSuccess_2() const { return ___mSuccess_2; }
	inline bool* get_address_of_mSuccess_2() { return &___mSuccess_2; }
	inline void set_mSuccess_2(bool value)
	{
		___mSuccess_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
