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
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.Collections.Generic.List`1<JSONObject>
struct List_1_t2549335872;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// System.Diagnostics.Stopwatch
struct Stopwatch_t2509581612;
// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t510977541;

#include "AssemblyU2DCSharp_NullCheckable2664269947.h"
#include "AssemblyU2DCSharp_JSONObject_Type2622298.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JSONObject
struct  JSONObject_t1752376903  : public NullCheckable_t2664269947
{
public:
	// JSONObject/Type JSONObject::type
	int32_t ___type_6;
	// System.Collections.Generic.List`1<JSONObject> JSONObject::list
	List_1_t2549335872 * ___list_7;
	// System.Collections.Generic.List`1<System.String> JSONObject::keys
	List_1_t1765447871 * ___keys_8;
	// System.String JSONObject::str
	String_t* ___str_9;
	// System.Double JSONObject::n
	double ___n_10;
	// System.Boolean JSONObject::b
	bool ___b_11;

public:
	inline static int32_t get_offset_of_type_6() { return static_cast<int32_t>(offsetof(JSONObject_t1752376903, ___type_6)); }
	inline int32_t get_type_6() const { return ___type_6; }
	inline int32_t* get_address_of_type_6() { return &___type_6; }
	inline void set_type_6(int32_t value)
	{
		___type_6 = value;
	}

	inline static int32_t get_offset_of_list_7() { return static_cast<int32_t>(offsetof(JSONObject_t1752376903, ___list_7)); }
	inline List_1_t2549335872 * get_list_7() const { return ___list_7; }
	inline List_1_t2549335872 ** get_address_of_list_7() { return &___list_7; }
	inline void set_list_7(List_1_t2549335872 * value)
	{
		___list_7 = value;
		Il2CppCodeGenWriteBarrier(&___list_7, value);
	}

	inline static int32_t get_offset_of_keys_8() { return static_cast<int32_t>(offsetof(JSONObject_t1752376903, ___keys_8)); }
	inline List_1_t1765447871 * get_keys_8() const { return ___keys_8; }
	inline List_1_t1765447871 ** get_address_of_keys_8() { return &___keys_8; }
	inline void set_keys_8(List_1_t1765447871 * value)
	{
		___keys_8 = value;
		Il2CppCodeGenWriteBarrier(&___keys_8, value);
	}

	inline static int32_t get_offset_of_str_9() { return static_cast<int32_t>(offsetof(JSONObject_t1752376903, ___str_9)); }
	inline String_t* get_str_9() const { return ___str_9; }
	inline String_t** get_address_of_str_9() { return &___str_9; }
	inline void set_str_9(String_t* value)
	{
		___str_9 = value;
		Il2CppCodeGenWriteBarrier(&___str_9, value);
	}

	inline static int32_t get_offset_of_n_10() { return static_cast<int32_t>(offsetof(JSONObject_t1752376903, ___n_10)); }
	inline double get_n_10() const { return ___n_10; }
	inline double* get_address_of_n_10() { return &___n_10; }
	inline void set_n_10(double value)
	{
		___n_10 = value;
	}

	inline static int32_t get_offset_of_b_11() { return static_cast<int32_t>(offsetof(JSONObject_t1752376903, ___b_11)); }
	inline bool get_b_11() const { return ___b_11; }
	inline bool* get_address_of_b_11() { return &___b_11; }
	inline void set_b_11(bool value)
	{
		___b_11 = value;
	}
};

struct JSONObject_t1752376903_StaticFields
{
public:
	// System.Char[] JSONObject::WHITESPACE
	CharU5BU5D_t3416858730* ___WHITESPACE_5;
	// System.Diagnostics.Stopwatch JSONObject::printWatch
	Stopwatch_t2509581612 * ___printWatch_12;
	// System.Text.RegularExpressions.MatchEvaluator JSONObject::<>f__am$cache8
	MatchEvaluator_t510977541 * ___U3CU3Ef__amU24cache8_13;

public:
	inline static int32_t get_offset_of_WHITESPACE_5() { return static_cast<int32_t>(offsetof(JSONObject_t1752376903_StaticFields, ___WHITESPACE_5)); }
	inline CharU5BU5D_t3416858730* get_WHITESPACE_5() const { return ___WHITESPACE_5; }
	inline CharU5BU5D_t3416858730** get_address_of_WHITESPACE_5() { return &___WHITESPACE_5; }
	inline void set_WHITESPACE_5(CharU5BU5D_t3416858730* value)
	{
		___WHITESPACE_5 = value;
		Il2CppCodeGenWriteBarrier(&___WHITESPACE_5, value);
	}

	inline static int32_t get_offset_of_printWatch_12() { return static_cast<int32_t>(offsetof(JSONObject_t1752376903_StaticFields, ___printWatch_12)); }
	inline Stopwatch_t2509581612 * get_printWatch_12() const { return ___printWatch_12; }
	inline Stopwatch_t2509581612 ** get_address_of_printWatch_12() { return &___printWatch_12; }
	inline void set_printWatch_12(Stopwatch_t2509581612 * value)
	{
		___printWatch_12 = value;
		Il2CppCodeGenWriteBarrier(&___printWatch_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_13() { return static_cast<int32_t>(offsetof(JSONObject_t1752376903_StaticFields, ___U3CU3Ef__amU24cache8_13)); }
	inline MatchEvaluator_t510977541 * get_U3CU3Ef__amU24cache8_13() const { return ___U3CU3Ef__amU24cache8_13; }
	inline MatchEvaluator_t510977541 ** get_address_of_U3CU3Ef__amU24cache8_13() { return &___U3CU3Ef__amU24cache8_13; }
	inline void set_U3CU3Ef__amU24cache8_13(MatchEvaluator_t510977541 * value)
	{
		___U3CU3Ef__amU24cache8_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache8_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
