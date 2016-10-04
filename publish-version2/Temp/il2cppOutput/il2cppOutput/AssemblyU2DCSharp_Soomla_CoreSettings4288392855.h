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

// Soomla.CoreSettings
struct  CoreSettings_t4288392855  : public Il2CppObject
{
public:

public:
};

struct CoreSettings_t4288392855_StaticFields
{
public:
	// System.String Soomla.CoreSettings::CoreModulePrefix
	String_t* ___CoreModulePrefix_0;
	// System.String Soomla.CoreSettings::ONLY_ONCE_DEFAULT
	String_t* ___ONLY_ONCE_DEFAULT_1;
	// System.String Soomla.CoreSettings::soomlaSecret
	String_t* ___soomlaSecret_2;
	// System.String Soomla.CoreSettings::debugMessages
	String_t* ___debugMessages_3;
	// System.String Soomla.CoreSettings::debugUnityMessages
	String_t* ___debugUnityMessages_4;

public:
	inline static int32_t get_offset_of_CoreModulePrefix_0() { return static_cast<int32_t>(offsetof(CoreSettings_t4288392855_StaticFields, ___CoreModulePrefix_0)); }
	inline String_t* get_CoreModulePrefix_0() const { return ___CoreModulePrefix_0; }
	inline String_t** get_address_of_CoreModulePrefix_0() { return &___CoreModulePrefix_0; }
	inline void set_CoreModulePrefix_0(String_t* value)
	{
		___CoreModulePrefix_0 = value;
		Il2CppCodeGenWriteBarrier(&___CoreModulePrefix_0, value);
	}

	inline static int32_t get_offset_of_ONLY_ONCE_DEFAULT_1() { return static_cast<int32_t>(offsetof(CoreSettings_t4288392855_StaticFields, ___ONLY_ONCE_DEFAULT_1)); }
	inline String_t* get_ONLY_ONCE_DEFAULT_1() const { return ___ONLY_ONCE_DEFAULT_1; }
	inline String_t** get_address_of_ONLY_ONCE_DEFAULT_1() { return &___ONLY_ONCE_DEFAULT_1; }
	inline void set_ONLY_ONCE_DEFAULT_1(String_t* value)
	{
		___ONLY_ONCE_DEFAULT_1 = value;
		Il2CppCodeGenWriteBarrier(&___ONLY_ONCE_DEFAULT_1, value);
	}

	inline static int32_t get_offset_of_soomlaSecret_2() { return static_cast<int32_t>(offsetof(CoreSettings_t4288392855_StaticFields, ___soomlaSecret_2)); }
	inline String_t* get_soomlaSecret_2() const { return ___soomlaSecret_2; }
	inline String_t** get_address_of_soomlaSecret_2() { return &___soomlaSecret_2; }
	inline void set_soomlaSecret_2(String_t* value)
	{
		___soomlaSecret_2 = value;
		Il2CppCodeGenWriteBarrier(&___soomlaSecret_2, value);
	}

	inline static int32_t get_offset_of_debugMessages_3() { return static_cast<int32_t>(offsetof(CoreSettings_t4288392855_StaticFields, ___debugMessages_3)); }
	inline String_t* get_debugMessages_3() const { return ___debugMessages_3; }
	inline String_t** get_address_of_debugMessages_3() { return &___debugMessages_3; }
	inline void set_debugMessages_3(String_t* value)
	{
		___debugMessages_3 = value;
		Il2CppCodeGenWriteBarrier(&___debugMessages_3, value);
	}

	inline static int32_t get_offset_of_debugUnityMessages_4() { return static_cast<int32_t>(offsetof(CoreSettings_t4288392855_StaticFields, ___debugUnityMessages_4)); }
	inline String_t* get_debugUnityMessages_4() const { return ___debugUnityMessages_4; }
	inline String_t** get_address_of_debugUnityMessages_4() { return &___debugUnityMessages_4; }
	inline void set_debugUnityMessages_4(String_t* value)
	{
		___debugUnityMessages_4 = value;
		Il2CppCodeGenWriteBarrier(&___debugUnityMessages_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
