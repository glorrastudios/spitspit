#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.SoomlaEvent
struct  SoomlaEvent_t2098687264  : public Il2CppObject
{
public:
	// System.Object Soomla.SoomlaEvent::Sender
	Il2CppObject * ___Sender_0;
	// System.String Soomla.SoomlaEvent::Payload
	String_t* ___Payload_1;

public:
	inline static int32_t get_offset_of_Sender_0() { return static_cast<int32_t>(offsetof(SoomlaEvent_t2098687264, ___Sender_0)); }
	inline Il2CppObject * get_Sender_0() const { return ___Sender_0; }
	inline Il2CppObject ** get_address_of_Sender_0() { return &___Sender_0; }
	inline void set_Sender_0(Il2CppObject * value)
	{
		___Sender_0 = value;
		Il2CppCodeGenWriteBarrier(&___Sender_0, value);
	}

	inline static int32_t get_offset_of_Payload_1() { return static_cast<int32_t>(offsetof(SoomlaEvent_t2098687264, ___Payload_1)); }
	inline String_t* get_Payload_1() const { return ___Payload_1; }
	inline String_t** get_address_of_Payload_1() { return &___Payload_1; }
	inline void set_Payload_1(String_t* value)
	{
		___Payload_1 = value;
		Il2CppCodeGenWriteBarrier(&___Payload_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
