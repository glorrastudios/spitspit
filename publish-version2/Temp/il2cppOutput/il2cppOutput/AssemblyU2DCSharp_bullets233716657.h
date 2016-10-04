#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// bullets
struct  bullets_t233716657  : public MonoBehaviour_t3012272455
{
public:
	// System.Single bullets::speed
	float ___speed_2;
	// System.Single bullets::leftBorder
	float ___leftBorder_3;
	// System.Single bullets::rightBorder
	float ___rightBorder_4;
	// System.Int32 bullets::Number
	int32_t ___Number_5;
	// System.Boolean bullets::hit
	bool ___hit_6;
	// System.Int32 bullets::playerNumber
	int32_t ___playerNumber_7;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(bullets_t233716657, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_leftBorder_3() { return static_cast<int32_t>(offsetof(bullets_t233716657, ___leftBorder_3)); }
	inline float get_leftBorder_3() const { return ___leftBorder_3; }
	inline float* get_address_of_leftBorder_3() { return &___leftBorder_3; }
	inline void set_leftBorder_3(float value)
	{
		___leftBorder_3 = value;
	}

	inline static int32_t get_offset_of_rightBorder_4() { return static_cast<int32_t>(offsetof(bullets_t233716657, ___rightBorder_4)); }
	inline float get_rightBorder_4() const { return ___rightBorder_4; }
	inline float* get_address_of_rightBorder_4() { return &___rightBorder_4; }
	inline void set_rightBorder_4(float value)
	{
		___rightBorder_4 = value;
	}

	inline static int32_t get_offset_of_Number_5() { return static_cast<int32_t>(offsetof(bullets_t233716657, ___Number_5)); }
	inline int32_t get_Number_5() const { return ___Number_5; }
	inline int32_t* get_address_of_Number_5() { return &___Number_5; }
	inline void set_Number_5(int32_t value)
	{
		___Number_5 = value;
	}

	inline static int32_t get_offset_of_hit_6() { return static_cast<int32_t>(offsetof(bullets_t233716657, ___hit_6)); }
	inline bool get_hit_6() const { return ___hit_6; }
	inline bool* get_address_of_hit_6() { return &___hit_6; }
	inline void set_hit_6(bool value)
	{
		___hit_6 = value;
	}

	inline static int32_t get_offset_of_playerNumber_7() { return static_cast<int32_t>(offsetof(bullets_t233716657, ___playerNumber_7)); }
	inline int32_t get_playerNumber_7() const { return ___playerNumber_7; }
	inline int32_t* get_address_of_playerNumber_7() { return &___playerNumber_7; }
	inline void set_playerNumber_7(int32_t value)
	{
		___playerNumber_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
