#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t3354615620;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// joystick2
struct  joystick2_t983277174  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Image joystick2::bgImg
	Image_t3354615620 * ___bgImg_2;
	// UnityEngine.UI.Image joystick2::joyStick
	Image_t3354615620 * ___joyStick_3;
	// UnityEngine.Vector2 joystick2::inputVector
	Vector2_t3525329788  ___inputVector_4;
	// System.Single joystick2::rightBorder
	float ___rightBorder_5;
	// System.Int32 joystick2::playerNumber
	int32_t ___playerNumber_6;
	// System.Boolean joystick2::draggable
	bool ___draggable_7;

public:
	inline static int32_t get_offset_of_bgImg_2() { return static_cast<int32_t>(offsetof(joystick2_t983277174, ___bgImg_2)); }
	inline Image_t3354615620 * get_bgImg_2() const { return ___bgImg_2; }
	inline Image_t3354615620 ** get_address_of_bgImg_2() { return &___bgImg_2; }
	inline void set_bgImg_2(Image_t3354615620 * value)
	{
		___bgImg_2 = value;
		Il2CppCodeGenWriteBarrier(&___bgImg_2, value);
	}

	inline static int32_t get_offset_of_joyStick_3() { return static_cast<int32_t>(offsetof(joystick2_t983277174, ___joyStick_3)); }
	inline Image_t3354615620 * get_joyStick_3() const { return ___joyStick_3; }
	inline Image_t3354615620 ** get_address_of_joyStick_3() { return &___joyStick_3; }
	inline void set_joyStick_3(Image_t3354615620 * value)
	{
		___joyStick_3 = value;
		Il2CppCodeGenWriteBarrier(&___joyStick_3, value);
	}

	inline static int32_t get_offset_of_inputVector_4() { return static_cast<int32_t>(offsetof(joystick2_t983277174, ___inputVector_4)); }
	inline Vector2_t3525329788  get_inputVector_4() const { return ___inputVector_4; }
	inline Vector2_t3525329788 * get_address_of_inputVector_4() { return &___inputVector_4; }
	inline void set_inputVector_4(Vector2_t3525329788  value)
	{
		___inputVector_4 = value;
	}

	inline static int32_t get_offset_of_rightBorder_5() { return static_cast<int32_t>(offsetof(joystick2_t983277174, ___rightBorder_5)); }
	inline float get_rightBorder_5() const { return ___rightBorder_5; }
	inline float* get_address_of_rightBorder_5() { return &___rightBorder_5; }
	inline void set_rightBorder_5(float value)
	{
		___rightBorder_5 = value;
	}

	inline static int32_t get_offset_of_playerNumber_6() { return static_cast<int32_t>(offsetof(joystick2_t983277174, ___playerNumber_6)); }
	inline int32_t get_playerNumber_6() const { return ___playerNumber_6; }
	inline int32_t* get_address_of_playerNumber_6() { return &___playerNumber_6; }
	inline void set_playerNumber_6(int32_t value)
	{
		___playerNumber_6 = value;
	}

	inline static int32_t get_offset_of_draggable_7() { return static_cast<int32_t>(offsetof(joystick2_t983277174, ___draggable_7)); }
	inline bool get_draggable_7() const { return ___draggable_7; }
	inline bool* get_address_of_draggable_7() { return &___draggable_7; }
	inline void set_draggable_7(bool value)
	{
		___draggable_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
