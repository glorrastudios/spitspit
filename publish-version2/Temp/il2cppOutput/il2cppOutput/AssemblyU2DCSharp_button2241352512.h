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
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// button2
struct  button2_t241352512  : public MonoBehaviour_t3012272455
{
public:
	// System.Single button2::holdSeconds
	float ___holdSeconds_2;
	// System.Boolean button2::holddown
	bool ___holddown_3;
	// System.Single button2::lastTime
	float ___lastTime_4;
	// System.Single button2::speed
	float ___speed_5;
	// UnityEngine.Vector3 button2::velocity
	Vector3_t3525329789  ___velocity_6;
	// UnityEngine.Transform button2::wind2
	Transform_t284553113 * ___wind2_7;
	// System.Single button2::original
	float ___original_8;
	// System.Single button2::Highest
	float ___Highest_9;

public:
	inline static int32_t get_offset_of_holdSeconds_2() { return static_cast<int32_t>(offsetof(button2_t241352512, ___holdSeconds_2)); }
	inline float get_holdSeconds_2() const { return ___holdSeconds_2; }
	inline float* get_address_of_holdSeconds_2() { return &___holdSeconds_2; }
	inline void set_holdSeconds_2(float value)
	{
		___holdSeconds_2 = value;
	}

	inline static int32_t get_offset_of_holddown_3() { return static_cast<int32_t>(offsetof(button2_t241352512, ___holddown_3)); }
	inline bool get_holddown_3() const { return ___holddown_3; }
	inline bool* get_address_of_holddown_3() { return &___holddown_3; }
	inline void set_holddown_3(bool value)
	{
		___holddown_3 = value;
	}

	inline static int32_t get_offset_of_lastTime_4() { return static_cast<int32_t>(offsetof(button2_t241352512, ___lastTime_4)); }
	inline float get_lastTime_4() const { return ___lastTime_4; }
	inline float* get_address_of_lastTime_4() { return &___lastTime_4; }
	inline void set_lastTime_4(float value)
	{
		___lastTime_4 = value;
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(button2_t241352512, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_velocity_6() { return static_cast<int32_t>(offsetof(button2_t241352512, ___velocity_6)); }
	inline Vector3_t3525329789  get_velocity_6() const { return ___velocity_6; }
	inline Vector3_t3525329789 * get_address_of_velocity_6() { return &___velocity_6; }
	inline void set_velocity_6(Vector3_t3525329789  value)
	{
		___velocity_6 = value;
	}

	inline static int32_t get_offset_of_wind2_7() { return static_cast<int32_t>(offsetof(button2_t241352512, ___wind2_7)); }
	inline Transform_t284553113 * get_wind2_7() const { return ___wind2_7; }
	inline Transform_t284553113 ** get_address_of_wind2_7() { return &___wind2_7; }
	inline void set_wind2_7(Transform_t284553113 * value)
	{
		___wind2_7 = value;
		Il2CppCodeGenWriteBarrier(&___wind2_7, value);
	}

	inline static int32_t get_offset_of_original_8() { return static_cast<int32_t>(offsetof(button2_t241352512, ___original_8)); }
	inline float get_original_8() const { return ___original_8; }
	inline float* get_address_of_original_8() { return &___original_8; }
	inline void set_original_8(float value)
	{
		___original_8 = value;
	}

	inline static int32_t get_offset_of_Highest_9() { return static_cast<int32_t>(offsetof(button2_t241352512, ___Highest_9)); }
	inline float get_Highest_9() const { return ___Highest_9; }
	inline float* get_address_of_Highest_9() { return &___Highest_9; }
	inline void set_Highest_9(float value)
	{
		___Highest_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
