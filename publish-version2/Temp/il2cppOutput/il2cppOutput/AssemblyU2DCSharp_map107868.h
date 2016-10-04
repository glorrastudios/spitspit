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

// map
struct  map_t107868  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean map::move
	bool ___move_2;
	// System.Single map::lastTime
	float ___lastTime_3;
	// player4 map::player
	player4_t3801399667 * ___player_4;
	// System.Single map::standard
	float ___standard_5;
	// UnityEngine.Vector3 map::velocity
	Vector3_t3525329789  ___velocity_6;
	// System.Int32 map::number
	int32_t ___number_7;
	// System.Single map::ownVelocity
	float ___ownVelocity_8;
	// System.Single map::distance2
	float ___distance2_9;
	// System.Int32 map::length
	int32_t ___length_10;

public:
	inline static int32_t get_offset_of_move_2() { return static_cast<int32_t>(offsetof(map_t107868, ___move_2)); }
	inline bool get_move_2() const { return ___move_2; }
	inline bool* get_address_of_move_2() { return &___move_2; }
	inline void set_move_2(bool value)
	{
		___move_2 = value;
	}

	inline static int32_t get_offset_of_lastTime_3() { return static_cast<int32_t>(offsetof(map_t107868, ___lastTime_3)); }
	inline float get_lastTime_3() const { return ___lastTime_3; }
	inline float* get_address_of_lastTime_3() { return &___lastTime_3; }
	inline void set_lastTime_3(float value)
	{
		___lastTime_3 = value;
	}

	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(map_t107868, ___player_4)); }
	inline player4_t3801399667 * get_player_4() const { return ___player_4; }
	inline player4_t3801399667 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(player4_t3801399667 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier(&___player_4, value);
	}

	inline static int32_t get_offset_of_standard_5() { return static_cast<int32_t>(offsetof(map_t107868, ___standard_5)); }
	inline float get_standard_5() const { return ___standard_5; }
	inline float* get_address_of_standard_5() { return &___standard_5; }
	inline void set_standard_5(float value)
	{
		___standard_5 = value;
	}

	inline static int32_t get_offset_of_velocity_6() { return static_cast<int32_t>(offsetof(map_t107868, ___velocity_6)); }
	inline Vector3_t3525329789  get_velocity_6() const { return ___velocity_6; }
	inline Vector3_t3525329789 * get_address_of_velocity_6() { return &___velocity_6; }
	inline void set_velocity_6(Vector3_t3525329789  value)
	{
		___velocity_6 = value;
	}

	inline static int32_t get_offset_of_number_7() { return static_cast<int32_t>(offsetof(map_t107868, ___number_7)); }
	inline int32_t get_number_7() const { return ___number_7; }
	inline int32_t* get_address_of_number_7() { return &___number_7; }
	inline void set_number_7(int32_t value)
	{
		___number_7 = value;
	}

	inline static int32_t get_offset_of_ownVelocity_8() { return static_cast<int32_t>(offsetof(map_t107868, ___ownVelocity_8)); }
	inline float get_ownVelocity_8() const { return ___ownVelocity_8; }
	inline float* get_address_of_ownVelocity_8() { return &___ownVelocity_8; }
	inline void set_ownVelocity_8(float value)
	{
		___ownVelocity_8 = value;
	}

	inline static int32_t get_offset_of_distance2_9() { return static_cast<int32_t>(offsetof(map_t107868, ___distance2_9)); }
	inline float get_distance2_9() const { return ___distance2_9; }
	inline float* get_address_of_distance2_9() { return &___distance2_9; }
	inline void set_distance2_9(float value)
	{
		___distance2_9 = value;
	}

	inline static int32_t get_offset_of_length_10() { return static_cast<int32_t>(offsetof(map_t107868, ___length_10)); }
	inline int32_t get_length_10() const { return ___length_10; }
	inline int32_t* get_address_of_length_10() { return &___length_10; }
	inline void set_length_10(int32_t value)
	{
		___length_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
