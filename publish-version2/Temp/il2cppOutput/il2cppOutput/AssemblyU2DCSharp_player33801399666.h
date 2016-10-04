#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// buttons
struct buttons_t241352577;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// player3
struct  player3_t3801399666  : public MonoBehaviour_t3012272455
{
public:
	// System.Single player3::speed2
	float ___speed2_2;
	// UnityEngine.Vector3 player3::addOn
	Vector3_t3525329789  ___addOn_3;
	// System.Single player3::leftBorder
	float ___leftBorder_4;
	// System.Single player3::rightBorder
	float ___rightBorder_5;
	// System.Single player3::topBorder
	float ___topBorder_6;
	// System.Single player3::bottomBorder
	float ___bottomBorder_7;
	// UnityEngine.Vector3 player3::velocityUp
	Vector3_t3525329789  ___velocityUp_8;
	// UnityEngine.Vector3 player3::velocityDown
	Vector3_t3525329789  ___velocityDown_9;
	// buttons player3::but
	buttons_t241352577 * ___but_10;

public:
	inline static int32_t get_offset_of_speed2_2() { return static_cast<int32_t>(offsetof(player3_t3801399666, ___speed2_2)); }
	inline float get_speed2_2() const { return ___speed2_2; }
	inline float* get_address_of_speed2_2() { return &___speed2_2; }
	inline void set_speed2_2(float value)
	{
		___speed2_2 = value;
	}

	inline static int32_t get_offset_of_addOn_3() { return static_cast<int32_t>(offsetof(player3_t3801399666, ___addOn_3)); }
	inline Vector3_t3525329789  get_addOn_3() const { return ___addOn_3; }
	inline Vector3_t3525329789 * get_address_of_addOn_3() { return &___addOn_3; }
	inline void set_addOn_3(Vector3_t3525329789  value)
	{
		___addOn_3 = value;
	}

	inline static int32_t get_offset_of_leftBorder_4() { return static_cast<int32_t>(offsetof(player3_t3801399666, ___leftBorder_4)); }
	inline float get_leftBorder_4() const { return ___leftBorder_4; }
	inline float* get_address_of_leftBorder_4() { return &___leftBorder_4; }
	inline void set_leftBorder_4(float value)
	{
		___leftBorder_4 = value;
	}

	inline static int32_t get_offset_of_rightBorder_5() { return static_cast<int32_t>(offsetof(player3_t3801399666, ___rightBorder_5)); }
	inline float get_rightBorder_5() const { return ___rightBorder_5; }
	inline float* get_address_of_rightBorder_5() { return &___rightBorder_5; }
	inline void set_rightBorder_5(float value)
	{
		___rightBorder_5 = value;
	}

	inline static int32_t get_offset_of_topBorder_6() { return static_cast<int32_t>(offsetof(player3_t3801399666, ___topBorder_6)); }
	inline float get_topBorder_6() const { return ___topBorder_6; }
	inline float* get_address_of_topBorder_6() { return &___topBorder_6; }
	inline void set_topBorder_6(float value)
	{
		___topBorder_6 = value;
	}

	inline static int32_t get_offset_of_bottomBorder_7() { return static_cast<int32_t>(offsetof(player3_t3801399666, ___bottomBorder_7)); }
	inline float get_bottomBorder_7() const { return ___bottomBorder_7; }
	inline float* get_address_of_bottomBorder_7() { return &___bottomBorder_7; }
	inline void set_bottomBorder_7(float value)
	{
		___bottomBorder_7 = value;
	}

	inline static int32_t get_offset_of_velocityUp_8() { return static_cast<int32_t>(offsetof(player3_t3801399666, ___velocityUp_8)); }
	inline Vector3_t3525329789  get_velocityUp_8() const { return ___velocityUp_8; }
	inline Vector3_t3525329789 * get_address_of_velocityUp_8() { return &___velocityUp_8; }
	inline void set_velocityUp_8(Vector3_t3525329789  value)
	{
		___velocityUp_8 = value;
	}

	inline static int32_t get_offset_of_velocityDown_9() { return static_cast<int32_t>(offsetof(player3_t3801399666, ___velocityDown_9)); }
	inline Vector3_t3525329789  get_velocityDown_9() const { return ___velocityDown_9; }
	inline Vector3_t3525329789 * get_address_of_velocityDown_9() { return &___velocityDown_9; }
	inline void set_velocityDown_9(Vector3_t3525329789  value)
	{
		___velocityDown_9 = value;
	}

	inline static int32_t get_offset_of_but_10() { return static_cast<int32_t>(offsetof(player3_t3801399666, ___but_10)); }
	inline buttons_t241352577 * get_but_10() const { return ___but_10; }
	inline buttons_t241352577 ** get_address_of_but_10() { return &___but_10; }
	inline void set_but_10(buttons_t241352577 * value)
	{
		___but_10 = value;
		Il2CppCodeGenWriteBarrier(&___but_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
