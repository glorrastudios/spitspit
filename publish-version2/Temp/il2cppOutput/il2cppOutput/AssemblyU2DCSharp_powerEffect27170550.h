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
// UnityEngine.ParticleSystem
struct ParticleSystem_t56787138;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// powerEffect
struct  powerEffect_t27170550  : public MonoBehaviour_t3012272455
{
public:
	// System.Single powerEffect::time
	float ___time_2;
	// System.Boolean powerEffect::hasWaitTime
	bool ___hasWaitTime_3;
	// System.Int32 powerEffect::number
	int32_t ___number_4;
	// UnityEngine.GameObject powerEffect::player
	GameObject_t4012695102 * ___player_5;
	// UnityEngine.Vector3 powerEffect::distance
	Vector3_t3525329789  ___distance_6;
	// UnityEngine.GameObject powerEffect::bullets
	GameObject_t4012695102 * ___bullets_7;
	// UnityEngine.ParticleSystem powerEffect::gunParticles
	ParticleSystem_t56787138 * ___gunParticles_8;

public:
	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(powerEffect_t27170550, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_hasWaitTime_3() { return static_cast<int32_t>(offsetof(powerEffect_t27170550, ___hasWaitTime_3)); }
	inline bool get_hasWaitTime_3() const { return ___hasWaitTime_3; }
	inline bool* get_address_of_hasWaitTime_3() { return &___hasWaitTime_3; }
	inline void set_hasWaitTime_3(bool value)
	{
		___hasWaitTime_3 = value;
	}

	inline static int32_t get_offset_of_number_4() { return static_cast<int32_t>(offsetof(powerEffect_t27170550, ___number_4)); }
	inline int32_t get_number_4() const { return ___number_4; }
	inline int32_t* get_address_of_number_4() { return &___number_4; }
	inline void set_number_4(int32_t value)
	{
		___number_4 = value;
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(powerEffect_t27170550, ___player_5)); }
	inline GameObject_t4012695102 * get_player_5() const { return ___player_5; }
	inline GameObject_t4012695102 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(GameObject_t4012695102 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier(&___player_5, value);
	}

	inline static int32_t get_offset_of_distance_6() { return static_cast<int32_t>(offsetof(powerEffect_t27170550, ___distance_6)); }
	inline Vector3_t3525329789  get_distance_6() const { return ___distance_6; }
	inline Vector3_t3525329789 * get_address_of_distance_6() { return &___distance_6; }
	inline void set_distance_6(Vector3_t3525329789  value)
	{
		___distance_6 = value;
	}

	inline static int32_t get_offset_of_bullets_7() { return static_cast<int32_t>(offsetof(powerEffect_t27170550, ___bullets_7)); }
	inline GameObject_t4012695102 * get_bullets_7() const { return ___bullets_7; }
	inline GameObject_t4012695102 ** get_address_of_bullets_7() { return &___bullets_7; }
	inline void set_bullets_7(GameObject_t4012695102 * value)
	{
		___bullets_7 = value;
		Il2CppCodeGenWriteBarrier(&___bullets_7, value);
	}

	inline static int32_t get_offset_of_gunParticles_8() { return static_cast<int32_t>(offsetof(powerEffect_t27170550, ___gunParticles_8)); }
	inline ParticleSystem_t56787138 * get_gunParticles_8() const { return ___gunParticles_8; }
	inline ParticleSystem_t56787138 ** get_address_of_gunParticles_8() { return &___gunParticles_8; }
	inline void set_gunParticles_8(ParticleSystem_t56787138 * value)
	{
		___gunParticles_8 = value;
		Il2CppCodeGenWriteBarrier(&___gunParticles_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
