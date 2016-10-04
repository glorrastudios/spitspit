#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t2223784725;
// UnityEngine.Animator
struct Animator_t792326996;
// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_t216530284;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// player4
struct  player4_t3801399667  : public MonoBehaviour_t3012272455
{
public:
	// System.Single player4::leftBorder
	float ___leftBorder_2;
	// System.Single player4::rightBorder
	float ___rightBorder_3;
	// System.Single player4::topBorder
	float ___topBorder_4;
	// System.Single player4::bottomBorder
	float ___bottomBorder_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> player4::SpriteList
	List_1_t514686775 * ___SpriteList_6;
	// UnityEngine.SpriteRenderer player4::spriteSheet
	SpriteRenderer_t2223784725 * ___spriteSheet_7;
	// System.Int32 player4::chosenIndex
	int32_t ___chosenIndex_8;
	// UnityEngine.Animator player4::ani
	Animator_t792326996 * ___ani_9;
	// UnityEngine.Material player4::material
	Material_t1886596500 * ___material_10;
	// UnityEngine.AudioSource player4::shootingSource
	AudioSource_t3628549054 * ___shootingSource_11;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> player4::clips
	List_1_t216530284 * ___clips_12;
	// System.Int32 player4::number
	int32_t ___number_13;

public:
	inline static int32_t get_offset_of_leftBorder_2() { return static_cast<int32_t>(offsetof(player4_t3801399667, ___leftBorder_2)); }
	inline float get_leftBorder_2() const { return ___leftBorder_2; }
	inline float* get_address_of_leftBorder_2() { return &___leftBorder_2; }
	inline void set_leftBorder_2(float value)
	{
		___leftBorder_2 = value;
	}

	inline static int32_t get_offset_of_rightBorder_3() { return static_cast<int32_t>(offsetof(player4_t3801399667, ___rightBorder_3)); }
	inline float get_rightBorder_3() const { return ___rightBorder_3; }
	inline float* get_address_of_rightBorder_3() { return &___rightBorder_3; }
	inline void set_rightBorder_3(float value)
	{
		___rightBorder_3 = value;
	}

	inline static int32_t get_offset_of_topBorder_4() { return static_cast<int32_t>(offsetof(player4_t3801399667, ___topBorder_4)); }
	inline float get_topBorder_4() const { return ___topBorder_4; }
	inline float* get_address_of_topBorder_4() { return &___topBorder_4; }
	inline void set_topBorder_4(float value)
	{
		___topBorder_4 = value;
	}

	inline static int32_t get_offset_of_bottomBorder_5() { return static_cast<int32_t>(offsetof(player4_t3801399667, ___bottomBorder_5)); }
	inline float get_bottomBorder_5() const { return ___bottomBorder_5; }
	inline float* get_address_of_bottomBorder_5() { return &___bottomBorder_5; }
	inline void set_bottomBorder_5(float value)
	{
		___bottomBorder_5 = value;
	}

	inline static int32_t get_offset_of_SpriteList_6() { return static_cast<int32_t>(offsetof(player4_t3801399667, ___SpriteList_6)); }
	inline List_1_t514686775 * get_SpriteList_6() const { return ___SpriteList_6; }
	inline List_1_t514686775 ** get_address_of_SpriteList_6() { return &___SpriteList_6; }
	inline void set_SpriteList_6(List_1_t514686775 * value)
	{
		___SpriteList_6 = value;
		Il2CppCodeGenWriteBarrier(&___SpriteList_6, value);
	}

	inline static int32_t get_offset_of_spriteSheet_7() { return static_cast<int32_t>(offsetof(player4_t3801399667, ___spriteSheet_7)); }
	inline SpriteRenderer_t2223784725 * get_spriteSheet_7() const { return ___spriteSheet_7; }
	inline SpriteRenderer_t2223784725 ** get_address_of_spriteSheet_7() { return &___spriteSheet_7; }
	inline void set_spriteSheet_7(SpriteRenderer_t2223784725 * value)
	{
		___spriteSheet_7 = value;
		Il2CppCodeGenWriteBarrier(&___spriteSheet_7, value);
	}

	inline static int32_t get_offset_of_chosenIndex_8() { return static_cast<int32_t>(offsetof(player4_t3801399667, ___chosenIndex_8)); }
	inline int32_t get_chosenIndex_8() const { return ___chosenIndex_8; }
	inline int32_t* get_address_of_chosenIndex_8() { return &___chosenIndex_8; }
	inline void set_chosenIndex_8(int32_t value)
	{
		___chosenIndex_8 = value;
	}

	inline static int32_t get_offset_of_ani_9() { return static_cast<int32_t>(offsetof(player4_t3801399667, ___ani_9)); }
	inline Animator_t792326996 * get_ani_9() const { return ___ani_9; }
	inline Animator_t792326996 ** get_address_of_ani_9() { return &___ani_9; }
	inline void set_ani_9(Animator_t792326996 * value)
	{
		___ani_9 = value;
		Il2CppCodeGenWriteBarrier(&___ani_9, value);
	}

	inline static int32_t get_offset_of_material_10() { return static_cast<int32_t>(offsetof(player4_t3801399667, ___material_10)); }
	inline Material_t1886596500 * get_material_10() const { return ___material_10; }
	inline Material_t1886596500 ** get_address_of_material_10() { return &___material_10; }
	inline void set_material_10(Material_t1886596500 * value)
	{
		___material_10 = value;
		Il2CppCodeGenWriteBarrier(&___material_10, value);
	}

	inline static int32_t get_offset_of_shootingSource_11() { return static_cast<int32_t>(offsetof(player4_t3801399667, ___shootingSource_11)); }
	inline AudioSource_t3628549054 * get_shootingSource_11() const { return ___shootingSource_11; }
	inline AudioSource_t3628549054 ** get_address_of_shootingSource_11() { return &___shootingSource_11; }
	inline void set_shootingSource_11(AudioSource_t3628549054 * value)
	{
		___shootingSource_11 = value;
		Il2CppCodeGenWriteBarrier(&___shootingSource_11, value);
	}

	inline static int32_t get_offset_of_clips_12() { return static_cast<int32_t>(offsetof(player4_t3801399667, ___clips_12)); }
	inline List_1_t216530284 * get_clips_12() const { return ___clips_12; }
	inline List_1_t216530284 ** get_address_of_clips_12() { return &___clips_12; }
	inline void set_clips_12(List_1_t216530284 * value)
	{
		___clips_12 = value;
		Il2CppCodeGenWriteBarrier(&___clips_12, value);
	}

	inline static int32_t get_offset_of_number_13() { return static_cast<int32_t>(offsetof(player4_t3801399667, ___number_13)); }
	inline int32_t get_number_13() const { return ___number_13; }
	inline int32_t* get_address_of_number_13() { return &___number_13; }
	inline void set_number_13(int32_t value)
	{
		___number_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
