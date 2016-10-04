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
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;

#include "AssemblyU2DCSharp_Soomla_SoomlaEvent2098687264.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.CustomEvent
struct  CustomEvent_t3287004958  : public SoomlaEvent_t2098687264
{
public:
	// System.String Soomla.CustomEvent::Name
	String_t* ___Name_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Soomla.CustomEvent::Extra
	Dictionary_2_t2606186806 * ___Extra_3;

public:
	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(CustomEvent_t3287004958, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier(&___Name_2, value);
	}

	inline static int32_t get_offset_of_Extra_3() { return static_cast<int32_t>(offsetof(CustomEvent_t3287004958, ___Extra_3)); }
	inline Dictionary_2_t2606186806 * get_Extra_3() const { return ___Extra_3; }
	inline Dictionary_2_t2606186806 ** get_address_of_Extra_3() { return &___Extra_3; }
	inline void set_Extra_3(Dictionary_2_t2606186806 * value)
	{
		___Extra_3 = value;
		Il2CppCodeGenWriteBarrier(&___Extra_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
