#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// player4
struct player4_t3801399667;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// shooting
struct  shooting_t3949701987  : public MonoBehaviour_t3012272455
{
public:
	// System.Single shooting::speed
	float ___speed_2;
	// UnityEngine.Vector3 shooting::velocity
	Vector3_t3525329789  ___velocity_3;
	// player4 shooting::player
	player4_t3801399667 * ___player_4;
	// System.Int32 shooting::number
	int32_t ___number_5;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(shooting_t3949701987, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_velocity_3() { return static_cast<int32_t>(offsetof(shooting_t3949701987, ___velocity_3)); }
	inline Vector3_t3525329789  get_velocity_3() const { return ___velocity_3; }
	inline Vector3_t3525329789 * get_address_of_velocity_3() { return &___velocity_3; }
	inline void set_velocity_3(Vector3_t3525329789  value)
	{
		___velocity_3 = value;
	}

	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(shooting_t3949701987, ___player_4)); }
	inline player4_t3801399667 * get_player_4() const { return ___player_4; }
	inline player4_t3801399667 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(player4_t3801399667 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier(&___player_4, value);
	}

	inline static int32_t get_offset_of_number_5() { return static_cast<int32_t>(offsetof(shooting_t3949701987, ___number_5)); }
	inline int32_t get_number_5() const { return ___number_5; }
	inline int32_t* get_address_of_number_5() { return &___number_5; }
	inline void set_number_5(int32_t value)
	{
		___number_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
