#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t4006040370;
// UnityEngine.UI.Image
struct Image_t3354615620;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// character
struct  character_t1564195625  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean character::moving
	bool ___moving_2;
	// System.Single character::goal
	float ___goal_3;
	// System.Single character::offset
	float ___offset_4;
	// UnityEngine.Sprite character::color
	Sprite_t4006040370 * ___color_5;
	// UnityEngine.Sprite character::gray
	Sprite_t4006040370 * ___gray_6;
	// UnityEngine.UI.Image character::spriteSheet
	Image_t3354615620 * ___spriteSheet_7;
	// System.Int32 character::needStar
	int32_t ___needStar_8;

public:
	inline static int32_t get_offset_of_moving_2() { return static_cast<int32_t>(offsetof(character_t1564195625, ___moving_2)); }
	inline bool get_moving_2() const { return ___moving_2; }
	inline bool* get_address_of_moving_2() { return &___moving_2; }
	inline void set_moving_2(bool value)
	{
		___moving_2 = value;
	}

	inline static int32_t get_offset_of_goal_3() { return static_cast<int32_t>(offsetof(character_t1564195625, ___goal_3)); }
	inline float get_goal_3() const { return ___goal_3; }
	inline float* get_address_of_goal_3() { return &___goal_3; }
	inline void set_goal_3(float value)
	{
		___goal_3 = value;
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(character_t1564195625, ___offset_4)); }
	inline float get_offset_4() const { return ___offset_4; }
	inline float* get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(float value)
	{
		___offset_4 = value;
	}

	inline static int32_t get_offset_of_color_5() { return static_cast<int32_t>(offsetof(character_t1564195625, ___color_5)); }
	inline Sprite_t4006040370 * get_color_5() const { return ___color_5; }
	inline Sprite_t4006040370 ** get_address_of_color_5() { return &___color_5; }
	inline void set_color_5(Sprite_t4006040370 * value)
	{
		___color_5 = value;
		Il2CppCodeGenWriteBarrier(&___color_5, value);
	}

	inline static int32_t get_offset_of_gray_6() { return static_cast<int32_t>(offsetof(character_t1564195625, ___gray_6)); }
	inline Sprite_t4006040370 * get_gray_6() const { return ___gray_6; }
	inline Sprite_t4006040370 ** get_address_of_gray_6() { return &___gray_6; }
	inline void set_gray_6(Sprite_t4006040370 * value)
	{
		___gray_6 = value;
		Il2CppCodeGenWriteBarrier(&___gray_6, value);
	}

	inline static int32_t get_offset_of_spriteSheet_7() { return static_cast<int32_t>(offsetof(character_t1564195625, ___spriteSheet_7)); }
	inline Image_t3354615620 * get_spriteSheet_7() const { return ___spriteSheet_7; }
	inline Image_t3354615620 ** get_address_of_spriteSheet_7() { return &___spriteSheet_7; }
	inline void set_spriteSheet_7(Image_t3354615620 * value)
	{
		___spriteSheet_7 = value;
		Il2CppCodeGenWriteBarrier(&___spriteSheet_7, value);
	}

	inline static int32_t get_offset_of_needStar_8() { return static_cast<int32_t>(offsetof(character_t1564195625, ___needStar_8)); }
	inline int32_t get_needStar_8() const { return ___needStar_8; }
	inline int32_t* get_address_of_needStar_8() { return &___needStar_8; }
	inline void set_needStar_8(int32_t value)
	{
		___needStar_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
