#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t508032043;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t2223784725;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// changSprite
struct  changSprite_t2140811898  : public MonoBehaviour_t3012272455
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Sprite> changSprite::SpriteList
	List_1_t508032043 * ___SpriteList_2;
	// UnityEngine.SpriteRenderer changSprite::spriteSheet
	SpriteRenderer_t2223784725 * ___spriteSheet_3;
	// System.Int32 changSprite::index
	int32_t ___index_4;
	// System.Boolean changSprite::isGetGoal
	bool ___isGetGoal_5;

public:
	inline static int32_t get_offset_of_SpriteList_2() { return static_cast<int32_t>(offsetof(changSprite_t2140811898, ___SpriteList_2)); }
	inline List_1_t508032043 * get_SpriteList_2() const { return ___SpriteList_2; }
	inline List_1_t508032043 ** get_address_of_SpriteList_2() { return &___SpriteList_2; }
	inline void set_SpriteList_2(List_1_t508032043 * value)
	{
		___SpriteList_2 = value;
		Il2CppCodeGenWriteBarrier(&___SpriteList_2, value);
	}

	inline static int32_t get_offset_of_spriteSheet_3() { return static_cast<int32_t>(offsetof(changSprite_t2140811898, ___spriteSheet_3)); }
	inline SpriteRenderer_t2223784725 * get_spriteSheet_3() const { return ___spriteSheet_3; }
	inline SpriteRenderer_t2223784725 ** get_address_of_spriteSheet_3() { return &___spriteSheet_3; }
	inline void set_spriteSheet_3(SpriteRenderer_t2223784725 * value)
	{
		___spriteSheet_3 = value;
		Il2CppCodeGenWriteBarrier(&___spriteSheet_3, value);
	}

	inline static int32_t get_offset_of_index_4() { return static_cast<int32_t>(offsetof(changSprite_t2140811898, ___index_4)); }
	inline int32_t get_index_4() const { return ___index_4; }
	inline int32_t* get_address_of_index_4() { return &___index_4; }
	inline void set_index_4(int32_t value)
	{
		___index_4 = value;
	}

	inline static int32_t get_offset_of_isGetGoal_5() { return static_cast<int32_t>(offsetof(changSprite_t2140811898, ___isGetGoal_5)); }
	inline bool get_isGetGoal_5() const { return ___isGetGoal_5; }
	inline bool* get_address_of_isGetGoal_5() { return &___isGetGoal_5; }
	inline void set_isGetGoal_5(bool value)
	{
		___isGetGoal_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
