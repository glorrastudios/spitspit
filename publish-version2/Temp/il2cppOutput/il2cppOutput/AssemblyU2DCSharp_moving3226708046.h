#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// player3
struct player3_t3801399666;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// moving
struct  moving_t3226708046  : public MonoBehaviour_t3012272455
{
public:
	// System.Single moving::speed
	float ___speed_2;
	// UnityEngine.Vector3 moving::velocity
	Vector3_t3525329789  ___velocity_3;
	// player3 moving::player
	player3_t3801399666 * ___player_4;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(moving_t3226708046, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_velocity_3() { return static_cast<int32_t>(offsetof(moving_t3226708046, ___velocity_3)); }
	inline Vector3_t3525329789  get_velocity_3() const { return ___velocity_3; }
	inline Vector3_t3525329789 * get_address_of_velocity_3() { return &___velocity_3; }
	inline void set_velocity_3(Vector3_t3525329789  value)
	{
		___velocity_3 = value;
	}

	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(moving_t3226708046, ___player_4)); }
	inline player3_t3801399666 * get_player_4() const { return ___player_4; }
	inline player3_t3801399666 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(player3_t3801399666 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier(&___player_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
