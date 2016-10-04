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

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.SoomlaEntity`1<Soomla.Reward>
struct  SoomlaEntity_1_t1250626721  : public Il2CppObject
{
public:
	// System.String Soomla.SoomlaEntity`1::Name
	String_t* ___Name_1;
	// System.String Soomla.SoomlaEntity`1::Description
	String_t* ___Description_2;
	// System.String Soomla.SoomlaEntity`1::_id
	String_t* ____id_3;

public:
	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(SoomlaEntity_1_t1250626721, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier(&___Name_1, value);
	}

	inline static int32_t get_offset_of_Description_2() { return static_cast<int32_t>(offsetof(SoomlaEntity_1_t1250626721, ___Description_2)); }
	inline String_t* get_Description_2() const { return ___Description_2; }
	inline String_t** get_address_of_Description_2() { return &___Description_2; }
	inline void set_Description_2(String_t* value)
	{
		___Description_2 = value;
		Il2CppCodeGenWriteBarrier(&___Description_2, value);
	}

	inline static int32_t get_offset_of__id_3() { return static_cast<int32_t>(offsetof(SoomlaEntity_1_t1250626721, ____id_3)); }
	inline String_t* get__id_3() const { return ____id_3; }
	inline String_t** get_address_of__id_3() { return &____id_3; }
	inline void set__id_3(String_t* value)
	{
		____id_3 = value;
		Il2CppCodeGenWriteBarrier(&____id_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
