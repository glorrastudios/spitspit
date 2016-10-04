#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_DateTime339033936.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.Schedule/DateTimeRange
struct  DateTimeRange_t2526663234  : public Il2CppObject
{
public:
	// System.DateTime Soomla.Schedule/DateTimeRange::Start
	DateTime_t339033936  ___Start_0;
	// System.DateTime Soomla.Schedule/DateTimeRange::End
	DateTime_t339033936  ___End_1;

public:
	inline static int32_t get_offset_of_Start_0() { return static_cast<int32_t>(offsetof(DateTimeRange_t2526663234, ___Start_0)); }
	inline DateTime_t339033936  get_Start_0() const { return ___Start_0; }
	inline DateTime_t339033936 * get_address_of_Start_0() { return &___Start_0; }
	inline void set_Start_0(DateTime_t339033936  value)
	{
		___Start_0 = value;
	}

	inline static int32_t get_offset_of_End_1() { return static_cast<int32_t>(offsetof(DateTimeRange_t2526663234, ___End_1)); }
	inline DateTime_t339033936  get_End_1() const { return ___End_1; }
	inline DateTime_t339033936 * get_address_of_End_1() { return &___End_1; }
	inline void set_End_1(DateTime_t339033936  value)
	{
		___End_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
