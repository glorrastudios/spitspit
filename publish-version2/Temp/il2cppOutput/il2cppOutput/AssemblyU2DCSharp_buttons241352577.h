#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AreaEffector2D
struct AreaEffector2D_t995098976;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// buttons
struct  buttons_t241352577  : public MonoBehaviour_t3012272455
{
public:
	// System.Single buttons::holdSeconds
	float ___holdSeconds_2;
	// System.Boolean buttons::holddown
	bool ___holddown_3;
	// UnityEngine.AreaEffector2D buttons::wind
	AreaEffector2D_t995098976 * ___wind_4;
	// UnityEngine.GameObject buttons::balls
	GameObject_t4012695102 * ___balls_5;
	// UnityEngine.Transform buttons::trans
	Transform_t284553113 * ___trans_6;
	// System.Single buttons::increaseSpeed
	float ___increaseSpeed_7;
	// System.Single buttons::lastTime
	float ___lastTime_8;
	// System.Single buttons::HighestSpeed
	float ___HighestSpeed_9;
	// System.Single buttons::speed
	float ___speed_10;
	// UnityEngine.UI.Text buttons::text
	Text_t3286458198 * ___text_11;

public:
	inline static int32_t get_offset_of_holdSeconds_2() { return static_cast<int32_t>(offsetof(buttons_t241352577, ___holdSeconds_2)); }
	inline float get_holdSeconds_2() const { return ___holdSeconds_2; }
	inline float* get_address_of_holdSeconds_2() { return &___holdSeconds_2; }
	inline void set_holdSeconds_2(float value)
	{
		___holdSeconds_2 = value;
	}

	inline static int32_t get_offset_of_holddown_3() { return static_cast<int32_t>(offsetof(buttons_t241352577, ___holddown_3)); }
	inline bool get_holddown_3() const { return ___holddown_3; }
	inline bool* get_address_of_holddown_3() { return &___holddown_3; }
	inline void set_holddown_3(bool value)
	{
		___holddown_3 = value;
	}

	inline static int32_t get_offset_of_wind_4() { return static_cast<int32_t>(offsetof(buttons_t241352577, ___wind_4)); }
	inline AreaEffector2D_t995098976 * get_wind_4() const { return ___wind_4; }
	inline AreaEffector2D_t995098976 ** get_address_of_wind_4() { return &___wind_4; }
	inline void set_wind_4(AreaEffector2D_t995098976 * value)
	{
		___wind_4 = value;
		Il2CppCodeGenWriteBarrier(&___wind_4, value);
	}

	inline static int32_t get_offset_of_balls_5() { return static_cast<int32_t>(offsetof(buttons_t241352577, ___balls_5)); }
	inline GameObject_t4012695102 * get_balls_5() const { return ___balls_5; }
	inline GameObject_t4012695102 ** get_address_of_balls_5() { return &___balls_5; }
	inline void set_balls_5(GameObject_t4012695102 * value)
	{
		___balls_5 = value;
		Il2CppCodeGenWriteBarrier(&___balls_5, value);
	}

	inline static int32_t get_offset_of_trans_6() { return static_cast<int32_t>(offsetof(buttons_t241352577, ___trans_6)); }
	inline Transform_t284553113 * get_trans_6() const { return ___trans_6; }
	inline Transform_t284553113 ** get_address_of_trans_6() { return &___trans_6; }
	inline void set_trans_6(Transform_t284553113 * value)
	{
		___trans_6 = value;
		Il2CppCodeGenWriteBarrier(&___trans_6, value);
	}

	inline static int32_t get_offset_of_increaseSpeed_7() { return static_cast<int32_t>(offsetof(buttons_t241352577, ___increaseSpeed_7)); }
	inline float get_increaseSpeed_7() const { return ___increaseSpeed_7; }
	inline float* get_address_of_increaseSpeed_7() { return &___increaseSpeed_7; }
	inline void set_increaseSpeed_7(float value)
	{
		___increaseSpeed_7 = value;
	}

	inline static int32_t get_offset_of_lastTime_8() { return static_cast<int32_t>(offsetof(buttons_t241352577, ___lastTime_8)); }
	inline float get_lastTime_8() const { return ___lastTime_8; }
	inline float* get_address_of_lastTime_8() { return &___lastTime_8; }
	inline void set_lastTime_8(float value)
	{
		___lastTime_8 = value;
	}

	inline static int32_t get_offset_of_HighestSpeed_9() { return static_cast<int32_t>(offsetof(buttons_t241352577, ___HighestSpeed_9)); }
	inline float get_HighestSpeed_9() const { return ___HighestSpeed_9; }
	inline float* get_address_of_HighestSpeed_9() { return &___HighestSpeed_9; }
	inline void set_HighestSpeed_9(float value)
	{
		___HighestSpeed_9 = value;
	}

	inline static int32_t get_offset_of_speed_10() { return static_cast<int32_t>(offsetof(buttons_t241352577, ___speed_10)); }
	inline float get_speed_10() const { return ___speed_10; }
	inline float* get_address_of_speed_10() { return &___speed_10; }
	inline void set_speed_10(float value)
	{
		___speed_10 = value;
	}

	inline static int32_t get_offset_of_text_11() { return static_cast<int32_t>(offsetof(buttons_t241352577, ___text_11)); }
	inline Text_t3286458198 * get_text_11() const { return ___text_11; }
	inline Text_t3286458198 ** get_address_of_text_11() { return &___text_11; }
	inline void set_text_11(Text_t3286458198 * value)
	{
		___text_11 = value;
		Il2CppCodeGenWriteBarrier(&___text_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
