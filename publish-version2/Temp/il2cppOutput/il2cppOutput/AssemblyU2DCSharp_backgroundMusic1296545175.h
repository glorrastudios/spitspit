#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// backgroundMusic
struct backgroundMusic_t1296545175;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// backgroundMusic
struct  backgroundMusic_t1296545175  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.AudioSource backgroundMusic::backGroundsound
	AudioSource_t3628549054 * ___backGroundsound_3;

public:
	inline static int32_t get_offset_of_backGroundsound_3() { return static_cast<int32_t>(offsetof(backgroundMusic_t1296545175, ___backGroundsound_3)); }
	inline AudioSource_t3628549054 * get_backGroundsound_3() const { return ___backGroundsound_3; }
	inline AudioSource_t3628549054 ** get_address_of_backGroundsound_3() { return &___backGroundsound_3; }
	inline void set_backGroundsound_3(AudioSource_t3628549054 * value)
	{
		___backGroundsound_3 = value;
		Il2CppCodeGenWriteBarrier(&___backGroundsound_3, value);
	}
};

struct backgroundMusic_t1296545175_StaticFields
{
public:
	// backgroundMusic backgroundMusic::instance
	backgroundMusic_t1296545175 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(backgroundMusic_t1296545175_StaticFields, ___instance_2)); }
	inline backgroundMusic_t1296545175 * get_instance_2() const { return ___instance_2; }
	inline backgroundMusic_t1296545175 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(backgroundMusic_t1296545175 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
