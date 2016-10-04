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
// Soomla.Store.EquippableVG/EquippingModel
struct EquippingModel_t2267691719;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "AssemblyU2DCSharp_Soomla_Store_LifetimeVG1847981616.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.Store.EquippableVG
struct  EquippableVG_t2375986625  : public LifetimeVG_t1847981616
{
public:
	// Soomla.Store.EquippableVG/EquippingModel Soomla.Store.EquippableVG::Equipping
	EquippingModel_t2267691719 * ___Equipping_9;

public:
	inline static int32_t get_offset_of_Equipping_9() { return static_cast<int32_t>(offsetof(EquippableVG_t2375986625, ___Equipping_9)); }
	inline EquippingModel_t2267691719 * get_Equipping_9() const { return ___Equipping_9; }
	inline EquippingModel_t2267691719 ** get_address_of_Equipping_9() { return &___Equipping_9; }
	inline void set_Equipping_9(EquippingModel_t2267691719 * value)
	{
		___Equipping_9 = value;
		Il2CppCodeGenWriteBarrier(&___Equipping_9, value);
	}
};

struct EquippableVG_t2375986625_StaticFields
{
public:
	// System.String Soomla.Store.EquippableVG::TAG
	String_t* ___TAG_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Soomla.Store.EquippableVG::<>f__switch$map2
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map2_10;

public:
	inline static int32_t get_offset_of_TAG_8() { return static_cast<int32_t>(offsetof(EquippableVG_t2375986625_StaticFields, ___TAG_8)); }
	inline String_t* get_TAG_8() const { return ___TAG_8; }
	inline String_t** get_address_of_TAG_8() { return &___TAG_8; }
	inline void set_TAG_8(String_t* value)
	{
		___TAG_8 = value;
		Il2CppCodeGenWriteBarrier(&___TAG_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2_10() { return static_cast<int32_t>(offsetof(EquippableVG_t2375986625_StaticFields, ___U3CU3Ef__switchU24map2_10)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map2_10() const { return ___U3CU3Ef__switchU24map2_10; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map2_10() { return &___U3CU3Ef__switchU24map2_10; }
	inline void set_U3CU3Ef__switchU24map2_10(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map2_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map2_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
