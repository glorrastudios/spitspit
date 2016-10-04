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
// wholeMap
struct wholeMap_t2327764005;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t2223784725;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// man
struct  man_t107866  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Vector3 man::velocity
	Vector3_t3525329789  ___velocity_2;
	// player4 man::player
	player4_t3801399667 * ___player_3;
	// System.Boolean man::stop
	bool ___stop_4;
	// UnityEngine.Vector3 man::velocity2
	Vector3_t3525329789  ___velocity2_5;
	// wholeMap man::controller
	wholeMap_t2327764005 * ___controller_6;
	// System.Single man::rate
	float ___rate_7;
	// System.Boolean man::startChange
	bool ___startChange_8;
	// System.Single man::target
	float ___target_9;
	// System.Single man::upVelocity
	float ___upVelocity_10;
	// System.Single man::downVelocity
	float ___downVelocity_11;
	// System.Single man::originalUpvelocity
	float ___originalUpvelocity_12;
	// UnityEngine.Vector3 man::lastPosition
	Vector3_t3525329789  ___lastPosition_13;
	// UnityEngine.Vector3 man::direction
	Vector3_t3525329789  ___direction_14;
	// UnityEngine.Vector3 man::lastSpeed
	Vector3_t3525329789  ___lastSpeed_15;
	// System.Collections.IEnumerator man::coroutine
	Il2CppObject * ___coroutine_16;
	// System.Boolean man::isCourtine
	bool ___isCourtine_17;
	// System.Int32 man::number
	int32_t ___number_18;
	// UnityEngine.GameObject man::explosion
	GameObject_t4012695102 * ___explosion_19;
	// UnityEngine.AudioSource man::manSound
	AudioSource_t3628549054 * ___manSound_20;
	// UnityEngine.AudioClip man::coinSound
	AudioClip_t3714538611 * ___coinSound_21;
	// UnityEngine.AudioClip man::hitSound
	AudioClip_t3714538611 * ___hitSound_22;
	// UnityEngine.SpriteRenderer man::spriteColor
	SpriteRenderer_t2223784725 * ___spriteColor_23;

public:
	inline static int32_t get_offset_of_velocity_2() { return static_cast<int32_t>(offsetof(man_t107866, ___velocity_2)); }
	inline Vector3_t3525329789  get_velocity_2() const { return ___velocity_2; }
	inline Vector3_t3525329789 * get_address_of_velocity_2() { return &___velocity_2; }
	inline void set_velocity_2(Vector3_t3525329789  value)
	{
		___velocity_2 = value;
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(man_t107866, ___player_3)); }
	inline player4_t3801399667 * get_player_3() const { return ___player_3; }
	inline player4_t3801399667 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(player4_t3801399667 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}

	inline static int32_t get_offset_of_stop_4() { return static_cast<int32_t>(offsetof(man_t107866, ___stop_4)); }
	inline bool get_stop_4() const { return ___stop_4; }
	inline bool* get_address_of_stop_4() { return &___stop_4; }
	inline void set_stop_4(bool value)
	{
		___stop_4 = value;
	}

	inline static int32_t get_offset_of_velocity2_5() { return static_cast<int32_t>(offsetof(man_t107866, ___velocity2_5)); }
	inline Vector3_t3525329789  get_velocity2_5() const { return ___velocity2_5; }
	inline Vector3_t3525329789 * get_address_of_velocity2_5() { return &___velocity2_5; }
	inline void set_velocity2_5(Vector3_t3525329789  value)
	{
		___velocity2_5 = value;
	}

	inline static int32_t get_offset_of_controller_6() { return static_cast<int32_t>(offsetof(man_t107866, ___controller_6)); }
	inline wholeMap_t2327764005 * get_controller_6() const { return ___controller_6; }
	inline wholeMap_t2327764005 ** get_address_of_controller_6() { return &___controller_6; }
	inline void set_controller_6(wholeMap_t2327764005 * value)
	{
		___controller_6 = value;
		Il2CppCodeGenWriteBarrier(&___controller_6, value);
	}

	inline static int32_t get_offset_of_rate_7() { return static_cast<int32_t>(offsetof(man_t107866, ___rate_7)); }
	inline float get_rate_7() const { return ___rate_7; }
	inline float* get_address_of_rate_7() { return &___rate_7; }
	inline void set_rate_7(float value)
	{
		___rate_7 = value;
	}

	inline static int32_t get_offset_of_startChange_8() { return static_cast<int32_t>(offsetof(man_t107866, ___startChange_8)); }
	inline bool get_startChange_8() const { return ___startChange_8; }
	inline bool* get_address_of_startChange_8() { return &___startChange_8; }
	inline void set_startChange_8(bool value)
	{
		___startChange_8 = value;
	}

	inline static int32_t get_offset_of_target_9() { return static_cast<int32_t>(offsetof(man_t107866, ___target_9)); }
	inline float get_target_9() const { return ___target_9; }
	inline float* get_address_of_target_9() { return &___target_9; }
	inline void set_target_9(float value)
	{
		___target_9 = value;
	}

	inline static int32_t get_offset_of_upVelocity_10() { return static_cast<int32_t>(offsetof(man_t107866, ___upVelocity_10)); }
	inline float get_upVelocity_10() const { return ___upVelocity_10; }
	inline float* get_address_of_upVelocity_10() { return &___upVelocity_10; }
	inline void set_upVelocity_10(float value)
	{
		___upVelocity_10 = value;
	}

	inline static int32_t get_offset_of_downVelocity_11() { return static_cast<int32_t>(offsetof(man_t107866, ___downVelocity_11)); }
	inline float get_downVelocity_11() const { return ___downVelocity_11; }
	inline float* get_address_of_downVelocity_11() { return &___downVelocity_11; }
	inline void set_downVelocity_11(float value)
	{
		___downVelocity_11 = value;
	}

	inline static int32_t get_offset_of_originalUpvelocity_12() { return static_cast<int32_t>(offsetof(man_t107866, ___originalUpvelocity_12)); }
	inline float get_originalUpvelocity_12() const { return ___originalUpvelocity_12; }
	inline float* get_address_of_originalUpvelocity_12() { return &___originalUpvelocity_12; }
	inline void set_originalUpvelocity_12(float value)
	{
		___originalUpvelocity_12 = value;
	}

	inline static int32_t get_offset_of_lastPosition_13() { return static_cast<int32_t>(offsetof(man_t107866, ___lastPosition_13)); }
	inline Vector3_t3525329789  get_lastPosition_13() const { return ___lastPosition_13; }
	inline Vector3_t3525329789 * get_address_of_lastPosition_13() { return &___lastPosition_13; }
	inline void set_lastPosition_13(Vector3_t3525329789  value)
	{
		___lastPosition_13 = value;
	}

	inline static int32_t get_offset_of_direction_14() { return static_cast<int32_t>(offsetof(man_t107866, ___direction_14)); }
	inline Vector3_t3525329789  get_direction_14() const { return ___direction_14; }
	inline Vector3_t3525329789 * get_address_of_direction_14() { return &___direction_14; }
	inline void set_direction_14(Vector3_t3525329789  value)
	{
		___direction_14 = value;
	}

	inline static int32_t get_offset_of_lastSpeed_15() { return static_cast<int32_t>(offsetof(man_t107866, ___lastSpeed_15)); }
	inline Vector3_t3525329789  get_lastSpeed_15() const { return ___lastSpeed_15; }
	inline Vector3_t3525329789 * get_address_of_lastSpeed_15() { return &___lastSpeed_15; }
	inline void set_lastSpeed_15(Vector3_t3525329789  value)
	{
		___lastSpeed_15 = value;
	}

	inline static int32_t get_offset_of_coroutine_16() { return static_cast<int32_t>(offsetof(man_t107866, ___coroutine_16)); }
	inline Il2CppObject * get_coroutine_16() const { return ___coroutine_16; }
	inline Il2CppObject ** get_address_of_coroutine_16() { return &___coroutine_16; }
	inline void set_coroutine_16(Il2CppObject * value)
	{
		___coroutine_16 = value;
		Il2CppCodeGenWriteBarrier(&___coroutine_16, value);
	}

	inline static int32_t get_offset_of_isCourtine_17() { return static_cast<int32_t>(offsetof(man_t107866, ___isCourtine_17)); }
	inline bool get_isCourtine_17() const { return ___isCourtine_17; }
	inline bool* get_address_of_isCourtine_17() { return &___isCourtine_17; }
	inline void set_isCourtine_17(bool value)
	{
		___isCourtine_17 = value;
	}

	inline static int32_t get_offset_of_number_18() { return static_cast<int32_t>(offsetof(man_t107866, ___number_18)); }
	inline int32_t get_number_18() const { return ___number_18; }
	inline int32_t* get_address_of_number_18() { return &___number_18; }
	inline void set_number_18(int32_t value)
	{
		___number_18 = value;
	}

	inline static int32_t get_offset_of_explosion_19() { return static_cast<int32_t>(offsetof(man_t107866, ___explosion_19)); }
	inline GameObject_t4012695102 * get_explosion_19() const { return ___explosion_19; }
	inline GameObject_t4012695102 ** get_address_of_explosion_19() { return &___explosion_19; }
	inline void set_explosion_19(GameObject_t4012695102 * value)
	{
		___explosion_19 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_19, value);
	}

	inline static int32_t get_offset_of_manSound_20() { return static_cast<int32_t>(offsetof(man_t107866, ___manSound_20)); }
	inline AudioSource_t3628549054 * get_manSound_20() const { return ___manSound_20; }
	inline AudioSource_t3628549054 ** get_address_of_manSound_20() { return &___manSound_20; }
	inline void set_manSound_20(AudioSource_t3628549054 * value)
	{
		___manSound_20 = value;
		Il2CppCodeGenWriteBarrier(&___manSound_20, value);
	}

	inline static int32_t get_offset_of_coinSound_21() { return static_cast<int32_t>(offsetof(man_t107866, ___coinSound_21)); }
	inline AudioClip_t3714538611 * get_coinSound_21() const { return ___coinSound_21; }
	inline AudioClip_t3714538611 ** get_address_of_coinSound_21() { return &___coinSound_21; }
	inline void set_coinSound_21(AudioClip_t3714538611 * value)
	{
		___coinSound_21 = value;
		Il2CppCodeGenWriteBarrier(&___coinSound_21, value);
	}

	inline static int32_t get_offset_of_hitSound_22() { return static_cast<int32_t>(offsetof(man_t107866, ___hitSound_22)); }
	inline AudioClip_t3714538611 * get_hitSound_22() const { return ___hitSound_22; }
	inline AudioClip_t3714538611 ** get_address_of_hitSound_22() { return &___hitSound_22; }
	inline void set_hitSound_22(AudioClip_t3714538611 * value)
	{
		___hitSound_22 = value;
		Il2CppCodeGenWriteBarrier(&___hitSound_22, value);
	}

	inline static int32_t get_offset_of_spriteColor_23() { return static_cast<int32_t>(offsetof(man_t107866, ___spriteColor_23)); }
	inline SpriteRenderer_t2223784725 * get_spriteColor_23() const { return ___spriteColor_23; }
	inline SpriteRenderer_t2223784725 ** get_address_of_spriteColor_23() { return &___spriteColor_23; }
	inline void set_spriteColor_23(SpriteRenderer_t2223784725 * value)
	{
		___spriteColor_23 = value;
		Il2CppCodeGenWriteBarrier(&___spriteColor_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
