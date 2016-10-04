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
// UnityEngine.Animator
struct Animator_t792326996;
// UnityEngine.Canvas
struct Canvas_t3534013893;
// UnityEngine.ParticleSystem
struct ParticleSystem_t56787138;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// button3
struct  button3_t241352513  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject button3::wind
	GameObject_t4012695102 * ___wind_2;
	// UnityEngine.Transform button3::spot
	Transform_t284553113 * ___spot_3;
	// System.Single button3::waittigTime
	float ___waittigTime_4;
	// System.Single button3::nextShoot
	float ___nextShoot_5;
	// UnityEngine.Animator button3::ani
	Animator_t792326996 * ___ani_6;
	// UnityEngine.Canvas button3::canvas
	Canvas_t3534013893 * ___canvas_7;
	// System.Int32 button3::level
	int32_t ___level_8;
	// UnityEngine.ParticleSystem button3::gunParticles
	ParticleSystem_t56787138 * ___gunParticles_9;
	// UnityEngine.AudioSource button3::buttonSound
	AudioSource_t3628549054 * ___buttonSound_10;

public:
	inline static int32_t get_offset_of_wind_2() { return static_cast<int32_t>(offsetof(button3_t241352513, ___wind_2)); }
	inline GameObject_t4012695102 * get_wind_2() const { return ___wind_2; }
	inline GameObject_t4012695102 ** get_address_of_wind_2() { return &___wind_2; }
	inline void set_wind_2(GameObject_t4012695102 * value)
	{
		___wind_2 = value;
		Il2CppCodeGenWriteBarrier(&___wind_2, value);
	}

	inline static int32_t get_offset_of_spot_3() { return static_cast<int32_t>(offsetof(button3_t241352513, ___spot_3)); }
	inline Transform_t284553113 * get_spot_3() const { return ___spot_3; }
	inline Transform_t284553113 ** get_address_of_spot_3() { return &___spot_3; }
	inline void set_spot_3(Transform_t284553113 * value)
	{
		___spot_3 = value;
		Il2CppCodeGenWriteBarrier(&___spot_3, value);
	}

	inline static int32_t get_offset_of_waittigTime_4() { return static_cast<int32_t>(offsetof(button3_t241352513, ___waittigTime_4)); }
	inline float get_waittigTime_4() const { return ___waittigTime_4; }
	inline float* get_address_of_waittigTime_4() { return &___waittigTime_4; }
	inline void set_waittigTime_4(float value)
	{
		___waittigTime_4 = value;
	}

	inline static int32_t get_offset_of_nextShoot_5() { return static_cast<int32_t>(offsetof(button3_t241352513, ___nextShoot_5)); }
	inline float get_nextShoot_5() const { return ___nextShoot_5; }
	inline float* get_address_of_nextShoot_5() { return &___nextShoot_5; }
	inline void set_nextShoot_5(float value)
	{
		___nextShoot_5 = value;
	}

	inline static int32_t get_offset_of_ani_6() { return static_cast<int32_t>(offsetof(button3_t241352513, ___ani_6)); }
	inline Animator_t792326996 * get_ani_6() const { return ___ani_6; }
	inline Animator_t792326996 ** get_address_of_ani_6() { return &___ani_6; }
	inline void set_ani_6(Animator_t792326996 * value)
	{
		___ani_6 = value;
		Il2CppCodeGenWriteBarrier(&___ani_6, value);
	}

	inline static int32_t get_offset_of_canvas_7() { return static_cast<int32_t>(offsetof(button3_t241352513, ___canvas_7)); }
	inline Canvas_t3534013893 * get_canvas_7() const { return ___canvas_7; }
	inline Canvas_t3534013893 ** get_address_of_canvas_7() { return &___canvas_7; }
	inline void set_canvas_7(Canvas_t3534013893 * value)
	{
		___canvas_7 = value;
		Il2CppCodeGenWriteBarrier(&___canvas_7, value);
	}

	inline static int32_t get_offset_of_level_8() { return static_cast<int32_t>(offsetof(button3_t241352513, ___level_8)); }
	inline int32_t get_level_8() const { return ___level_8; }
	inline int32_t* get_address_of_level_8() { return &___level_8; }
	inline void set_level_8(int32_t value)
	{
		___level_8 = value;
	}

	inline static int32_t get_offset_of_gunParticles_9() { return static_cast<int32_t>(offsetof(button3_t241352513, ___gunParticles_9)); }
	inline ParticleSystem_t56787138 * get_gunParticles_9() const { return ___gunParticles_9; }
	inline ParticleSystem_t56787138 ** get_address_of_gunParticles_9() { return &___gunParticles_9; }
	inline void set_gunParticles_9(ParticleSystem_t56787138 * value)
	{
		___gunParticles_9 = value;
		Il2CppCodeGenWriteBarrier(&___gunParticles_9, value);
	}

	inline static int32_t get_offset_of_buttonSound_10() { return static_cast<int32_t>(offsetof(button3_t241352513, ___buttonSound_10)); }
	inline AudioSource_t3628549054 * get_buttonSound_10() const { return ___buttonSound_10; }
	inline AudioSource_t3628549054 ** get_address_of_buttonSound_10() { return &___buttonSound_10; }
	inline void set_buttonSound_10(AudioSource_t3628549054 * value)
	{
		___buttonSound_10 = value;
		Il2CppCodeGenWriteBarrier(&___buttonSound_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
