#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_Soomla_SoomlaEvent2098687264.h"
#include "AssemblyU2DCSharp_Soomla_Store_UnexpectedStoreErro2333003765.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.Store.UnexpectedStoreErrorEvent
struct  UnexpectedStoreErrorEvent_t3812130392  : public SoomlaEvent_t2098687264
{
public:
	// Soomla.Store.UnexpectedStoreErrorEvent/ErrorCode Soomla.Store.UnexpectedStoreErrorEvent::errorCode
	int32_t ___errorCode_2;

public:
	inline static int32_t get_offset_of_errorCode_2() { return static_cast<int32_t>(offsetof(UnexpectedStoreErrorEvent_t3812130392, ___errorCode_2)); }
	inline int32_t get_errorCode_2() const { return ___errorCode_2; }
	inline int32_t* get_address_of_errorCode_2() { return &___errorCode_2; }
	inline void set_errorCode_2(int32_t value)
	{
		___errorCode_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
