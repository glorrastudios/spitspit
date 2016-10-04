#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.Singletons.BaseBehaviour
struct  BaseBehaviour_t2889047145  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform Soomla.Singletons.BaseBehaviour::cashedTransform
	Transform_t284553113 * ___cashedTransform_2;

public:
	inline static int32_t get_offset_of_cashedTransform_2() { return static_cast<int32_t>(offsetof(BaseBehaviour_t2889047145, ___cashedTransform_2)); }
	inline Transform_t284553113 * get_cashedTransform_2() const { return ___cashedTransform_2; }
	inline Transform_t284553113 ** get_address_of_cashedTransform_2() { return &___cashedTransform_2; }
	inline void set_cashedTransform_2(Transform_t284553113 * value)
	{
		___cashedTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___cashedTransform_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
