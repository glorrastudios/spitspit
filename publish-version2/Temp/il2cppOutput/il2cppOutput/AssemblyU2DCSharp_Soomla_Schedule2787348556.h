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
// System.Collections.Generic.List`1<Soomla.Schedule/DateTimeRange>
struct List_1_t3323622203;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Soomla_Schedule_Recurrence3771856720.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.Schedule
struct  Schedule_t2787348556  : public Il2CppObject
{
public:
	// Soomla.Schedule/Recurrence Soomla.Schedule::RequiredRecurrence
	int32_t ___RequiredRecurrence_1;
	// System.Collections.Generic.List`1<Soomla.Schedule/DateTimeRange> Soomla.Schedule::TimeRanges
	List_1_t3323622203 * ___TimeRanges_2;
	// System.Int32 Soomla.Schedule::ActivationLimit
	int32_t ___ActivationLimit_3;

public:
	inline static int32_t get_offset_of_RequiredRecurrence_1() { return static_cast<int32_t>(offsetof(Schedule_t2787348556, ___RequiredRecurrence_1)); }
	inline int32_t get_RequiredRecurrence_1() const { return ___RequiredRecurrence_1; }
	inline int32_t* get_address_of_RequiredRecurrence_1() { return &___RequiredRecurrence_1; }
	inline void set_RequiredRecurrence_1(int32_t value)
	{
		___RequiredRecurrence_1 = value;
	}

	inline static int32_t get_offset_of_TimeRanges_2() { return static_cast<int32_t>(offsetof(Schedule_t2787348556, ___TimeRanges_2)); }
	inline List_1_t3323622203 * get_TimeRanges_2() const { return ___TimeRanges_2; }
	inline List_1_t3323622203 ** get_address_of_TimeRanges_2() { return &___TimeRanges_2; }
	inline void set_TimeRanges_2(List_1_t3323622203 * value)
	{
		___TimeRanges_2 = value;
		Il2CppCodeGenWriteBarrier(&___TimeRanges_2, value);
	}

	inline static int32_t get_offset_of_ActivationLimit_3() { return static_cast<int32_t>(offsetof(Schedule_t2787348556, ___ActivationLimit_3)); }
	inline int32_t get_ActivationLimit_3() const { return ___ActivationLimit_3; }
	inline int32_t* get_address_of_ActivationLimit_3() { return &___ActivationLimit_3; }
	inline void set_ActivationLimit_3(int32_t value)
	{
		___ActivationLimit_3 = value;
	}
};

struct Schedule_t2787348556_StaticFields
{
public:
	// System.String Soomla.Schedule::TAG
	String_t* ___TAG_0;

public:
	inline static int32_t get_offset_of_TAG_0() { return static_cast<int32_t>(offsetof(Schedule_t2787348556_StaticFields, ___TAG_0)); }
	inline String_t* get_TAG_0() const { return ___TAG_0; }
	inline String_t** get_address_of_TAG_0() { return &___TAG_0; }
	inline void set_TAG_0(String_t* value)
	{
		___TAG_0 = value;
		Il2CppCodeGenWriteBarrier(&___TAG_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
