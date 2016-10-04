#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// layers
struct  layers_t3185235266  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject layers::first
	GameObject_t4012695102 * ___first_2;
	// UnityEngine.Transform layers::firstOne
	Transform_t284553113 * ___firstOne_3;
	// UnityEngine.Transform layers::parentTrans
	Transform_t284553113 * ___parentTrans_4;

public:
	inline static int32_t get_offset_of_first_2() { return static_cast<int32_t>(offsetof(layers_t3185235266, ___first_2)); }
	inline GameObject_t4012695102 * get_first_2() const { return ___first_2; }
	inline GameObject_t4012695102 ** get_address_of_first_2() { return &___first_2; }
	inline void set_first_2(GameObject_t4012695102 * value)
	{
		___first_2 = value;
		Il2CppCodeGenWriteBarrier(&___first_2, value);
	}

	inline static int32_t get_offset_of_firstOne_3() { return static_cast<int32_t>(offsetof(layers_t3185235266, ___firstOne_3)); }
	inline Transform_t284553113 * get_firstOne_3() const { return ___firstOne_3; }
	inline Transform_t284553113 ** get_address_of_firstOne_3() { return &___firstOne_3; }
	inline void set_firstOne_3(Transform_t284553113 * value)
	{
		___firstOne_3 = value;
		Il2CppCodeGenWriteBarrier(&___firstOne_3, value);
	}

	inline static int32_t get_offset_of_parentTrans_4() { return static_cast<int32_t>(offsetof(layers_t3185235266, ___parentTrans_4)); }
	inline Transform_t284553113 * get_parentTrans_4() const { return ___parentTrans_4; }
	inline Transform_t284553113 ** get_address_of_parentTrans_4() { return &___parentTrans_4; }
	inline void set_parentTrans_4(Transform_t284553113 * value)
	{
		___parentTrans_4 = value;
		Il2CppCodeGenWriteBarrier(&___parentTrans_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
