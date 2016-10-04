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

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.Store.EquippableVG/EquippingModel
struct  EquippingModel_t2267691719  : public Il2CppObject
{
public:
	// System.String Soomla.Store.EquippableVG/EquippingModel::name
	String_t* ___name_0;
	// System.Int32 Soomla.Store.EquippableVG/EquippingModel::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(EquippingModel_t2267691719, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(EquippingModel_t2267691719, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

struct EquippingModel_t2267691719_StaticFields
{
public:
	// Soomla.Store.EquippableVG/EquippingModel Soomla.Store.EquippableVG/EquippingModel::LOCAL
	EquippingModel_t2267691719 * ___LOCAL_2;
	// Soomla.Store.EquippableVG/EquippingModel Soomla.Store.EquippableVG/EquippingModel::CATEGORY
	EquippingModel_t2267691719 * ___CATEGORY_3;
	// Soomla.Store.EquippableVG/EquippingModel Soomla.Store.EquippableVG/EquippingModel::GLOBAL
	EquippingModel_t2267691719 * ___GLOBAL_4;

public:
	inline static int32_t get_offset_of_LOCAL_2() { return static_cast<int32_t>(offsetof(EquippingModel_t2267691719_StaticFields, ___LOCAL_2)); }
	inline EquippingModel_t2267691719 * get_LOCAL_2() const { return ___LOCAL_2; }
	inline EquippingModel_t2267691719 ** get_address_of_LOCAL_2() { return &___LOCAL_2; }
	inline void set_LOCAL_2(EquippingModel_t2267691719 * value)
	{
		___LOCAL_2 = value;
		Il2CppCodeGenWriteBarrier(&___LOCAL_2, value);
	}

	inline static int32_t get_offset_of_CATEGORY_3() { return static_cast<int32_t>(offsetof(EquippingModel_t2267691719_StaticFields, ___CATEGORY_3)); }
	inline EquippingModel_t2267691719 * get_CATEGORY_3() const { return ___CATEGORY_3; }
	inline EquippingModel_t2267691719 ** get_address_of_CATEGORY_3() { return &___CATEGORY_3; }
	inline void set_CATEGORY_3(EquippingModel_t2267691719 * value)
	{
		___CATEGORY_3 = value;
		Il2CppCodeGenWriteBarrier(&___CATEGORY_3, value);
	}

	inline static int32_t get_offset_of_GLOBAL_4() { return static_cast<int32_t>(offsetof(EquippingModel_t2267691719_StaticFields, ___GLOBAL_4)); }
	inline EquippingModel_t2267691719 * get_GLOBAL_4() const { return ___GLOBAL_4; }
	inline EquippingModel_t2267691719 ** get_address_of_GLOBAL_4() { return &___GLOBAL_4; }
	inline void set_GLOBAL_4(EquippingModel_t2267691719 * value)
	{
		___GLOBAL_4 = value;
		Il2CppCodeGenWriteBarrier(&___GLOBAL_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
