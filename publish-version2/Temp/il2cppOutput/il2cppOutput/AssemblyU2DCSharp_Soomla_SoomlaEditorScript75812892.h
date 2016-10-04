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
// Soomla.SoomlaEditorScript
struct SoomlaEditorScript_t75812892;
// ObjectDictionary
struct ObjectDictionary_t2756997461;

#include "UnityEngine_UnityEngine_ScriptableObject184905905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.SoomlaEditorScript
struct  SoomlaEditorScript_t75812892  : public ScriptableObject_t184905905
{
public:
	// ObjectDictionary Soomla.SoomlaEditorScript::SoomlaSettings
	ObjectDictionary_t2756997461 * ___SoomlaSettings_8;

public:
	inline static int32_t get_offset_of_SoomlaSettings_8() { return static_cast<int32_t>(offsetof(SoomlaEditorScript_t75812892, ___SoomlaSettings_8)); }
	inline ObjectDictionary_t2756997461 * get_SoomlaSettings_8() const { return ___SoomlaSettings_8; }
	inline ObjectDictionary_t2756997461 ** get_address_of_SoomlaSettings_8() { return &___SoomlaSettings_8; }
	inline void set_SoomlaSettings_8(ObjectDictionary_t2756997461 * value)
	{
		___SoomlaSettings_8 = value;
		Il2CppCodeGenWriteBarrier(&___SoomlaSettings_8, value);
	}
};

struct SoomlaEditorScript_t75812892_StaticFields
{
public:
	// System.String Soomla.SoomlaEditorScript::AND_PUB_KEY_DEFAULT
	String_t* ___AND_PUB_KEY_DEFAULT_5;
	// System.String Soomla.SoomlaEditorScript::ONLY_ONCE_DEFAULT
	String_t* ___ONLY_ONCE_DEFAULT_6;
	// Soomla.SoomlaEditorScript Soomla.SoomlaEditorScript::instance
	SoomlaEditorScript_t75812892 * ___instance_7;

public:
	inline static int32_t get_offset_of_AND_PUB_KEY_DEFAULT_5() { return static_cast<int32_t>(offsetof(SoomlaEditorScript_t75812892_StaticFields, ___AND_PUB_KEY_DEFAULT_5)); }
	inline String_t* get_AND_PUB_KEY_DEFAULT_5() const { return ___AND_PUB_KEY_DEFAULT_5; }
	inline String_t** get_address_of_AND_PUB_KEY_DEFAULT_5() { return &___AND_PUB_KEY_DEFAULT_5; }
	inline void set_AND_PUB_KEY_DEFAULT_5(String_t* value)
	{
		___AND_PUB_KEY_DEFAULT_5 = value;
		Il2CppCodeGenWriteBarrier(&___AND_PUB_KEY_DEFAULT_5, value);
	}

	inline static int32_t get_offset_of_ONLY_ONCE_DEFAULT_6() { return static_cast<int32_t>(offsetof(SoomlaEditorScript_t75812892_StaticFields, ___ONLY_ONCE_DEFAULT_6)); }
	inline String_t* get_ONLY_ONCE_DEFAULT_6() const { return ___ONLY_ONCE_DEFAULT_6; }
	inline String_t** get_address_of_ONLY_ONCE_DEFAULT_6() { return &___ONLY_ONCE_DEFAULT_6; }
	inline void set_ONLY_ONCE_DEFAULT_6(String_t* value)
	{
		___ONLY_ONCE_DEFAULT_6 = value;
		Il2CppCodeGenWriteBarrier(&___ONLY_ONCE_DEFAULT_6, value);
	}

	inline static int32_t get_offset_of_instance_7() { return static_cast<int32_t>(offsetof(SoomlaEditorScript_t75812892_StaticFields, ___instance_7)); }
	inline SoomlaEditorScript_t75812892 * get_instance_7() const { return ___instance_7; }
	inline SoomlaEditorScript_t75812892 ** get_address_of_instance_7() { return &___instance_7; }
	inline void set_instance_7(SoomlaEditorScript_t75812892 * value)
	{
		___instance_7 = value;
		Il2CppCodeGenWriteBarrier(&___instance_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
