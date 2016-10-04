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
// UnityEngine.Animator
struct Animator_t792326996;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// obstacle
struct  obstacle_t361935503  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Vector3 obstacle::velocity
	Vector3_t3525329789  ___velocity_2;
	// System.Single obstacle::speed
	float ___speed_3;
	// System.Int32 obstacle::changeTime
	int32_t ___changeTime_4;
	// System.Int32 obstacle::number
	int32_t ___number_5;
	// UnityEngine.GameObject obstacle::bullets
	GameObject_t4012695102 * ___bullets_6;
	// System.Boolean obstacle::back
	bool ___back_7;
	// UnityEngine.Animator obstacle::ani
	Animator_t792326996 * ___ani_8;

public:
	inline static int32_t get_offset_of_velocity_2() { return static_cast<int32_t>(offsetof(obstacle_t361935503, ___velocity_2)); }
	inline Vector3_t3525329789  get_velocity_2() const { return ___velocity_2; }
	inline Vector3_t3525329789 * get_address_of_velocity_2() { return &___velocity_2; }
	inline void set_velocity_2(Vector3_t3525329789  value)
	{
		___velocity_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(obstacle_t361935503, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_changeTime_4() { return static_cast<int32_t>(offsetof(obstacle_t361935503, ___changeTime_4)); }
	inline int32_t get_changeTime_4() const { return ___changeTime_4; }
	inline int32_t* get_address_of_changeTime_4() { return &___changeTime_4; }
	inline void set_changeTime_4(int32_t value)
	{
		___changeTime_4 = value;
	}

	inline static int32_t get_offset_of_number_5() { return static_cast<int32_t>(offsetof(obstacle_t361935503, ___number_5)); }
	inline int32_t get_number_5() const { return ___number_5; }
	inline int32_t* get_address_of_number_5() { return &___number_5; }
	inline void set_number_5(int32_t value)
	{
		___number_5 = value;
	}

	inline static int32_t get_offset_of_bullets_6() { return static_cast<int32_t>(offsetof(obstacle_t361935503, ___bullets_6)); }
	inline GameObject_t4012695102 * get_bullets_6() const { return ___bullets_6; }
	inline GameObject_t4012695102 ** get_address_of_bullets_6() { return &___bullets_6; }
	inline void set_bullets_6(GameObject_t4012695102 * value)
	{
		___bullets_6 = value;
		Il2CppCodeGenWriteBarrier(&___bullets_6, value);
	}

	inline static int32_t get_offset_of_back_7() { return static_cast<int32_t>(offsetof(obstacle_t361935503, ___back_7)); }
	inline bool get_back_7() const { return ___back_7; }
	inline bool* get_address_of_back_7() { return &___back_7; }
	inline void set_back_7(bool value)
	{
		___back_7 = value;
	}

	inline static int32_t get_offset_of_ani_8() { return static_cast<int32_t>(offsetof(obstacle_t361935503, ___ani_8)); }
	inline Animator_t792326996 * get_ani_8() const { return ___ani_8; }
	inline Animator_t792326996 ** get_address_of_ani_8() { return &___ani_8; }
	inline void set_ani_8(Animator_t792326996 * value)
	{
		___ani_8 = value;
		Il2CppCodeGenWriteBarrier(&___ani_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
