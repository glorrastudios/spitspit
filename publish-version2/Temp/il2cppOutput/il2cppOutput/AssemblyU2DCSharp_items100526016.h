#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// tiles
struct tiles_t110363525;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t2223784725;
// wholeMap
struct wholeMap_t2327764005;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// items
struct  items_t100526016  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean items::allstart
	bool ___allstart_2;
	// System.Boolean items::move
	bool ___move_3;
	// tiles items::tile
	tiles_t110363525 * ___tile_4;
	// System.Single items::distance
	float ___distance_5;
	// System.Single items::ownVelocity
	float ___ownVelocity_6;
	// System.Boolean items::Up
	bool ___Up_7;
	// UnityEngine.SpriteRenderer items::spriteColor
	SpriteRenderer_t2223784725 * ___spriteColor_8;
	// System.Int32 items::number
	int32_t ___number_9;
	// wholeMap items::controller
	wholeMap_t2327764005 * ___controller_10;
	// System.Single items::speed
	float ___speed_11;
	// System.Boolean items::border
	bool ___border_12;

public:
	inline static int32_t get_offset_of_allstart_2() { return static_cast<int32_t>(offsetof(items_t100526016, ___allstart_2)); }
	inline bool get_allstart_2() const { return ___allstart_2; }
	inline bool* get_address_of_allstart_2() { return &___allstart_2; }
	inline void set_allstart_2(bool value)
	{
		___allstart_2 = value;
	}

	inline static int32_t get_offset_of_move_3() { return static_cast<int32_t>(offsetof(items_t100526016, ___move_3)); }
	inline bool get_move_3() const { return ___move_3; }
	inline bool* get_address_of_move_3() { return &___move_3; }
	inline void set_move_3(bool value)
	{
		___move_3 = value;
	}

	inline static int32_t get_offset_of_tile_4() { return static_cast<int32_t>(offsetof(items_t100526016, ___tile_4)); }
	inline tiles_t110363525 * get_tile_4() const { return ___tile_4; }
	inline tiles_t110363525 ** get_address_of_tile_4() { return &___tile_4; }
	inline void set_tile_4(tiles_t110363525 * value)
	{
		___tile_4 = value;
		Il2CppCodeGenWriteBarrier(&___tile_4, value);
	}

	inline static int32_t get_offset_of_distance_5() { return static_cast<int32_t>(offsetof(items_t100526016, ___distance_5)); }
	inline float get_distance_5() const { return ___distance_5; }
	inline float* get_address_of_distance_5() { return &___distance_5; }
	inline void set_distance_5(float value)
	{
		___distance_5 = value;
	}

	inline static int32_t get_offset_of_ownVelocity_6() { return static_cast<int32_t>(offsetof(items_t100526016, ___ownVelocity_6)); }
	inline float get_ownVelocity_6() const { return ___ownVelocity_6; }
	inline float* get_address_of_ownVelocity_6() { return &___ownVelocity_6; }
	inline void set_ownVelocity_6(float value)
	{
		___ownVelocity_6 = value;
	}

	inline static int32_t get_offset_of_Up_7() { return static_cast<int32_t>(offsetof(items_t100526016, ___Up_7)); }
	inline bool get_Up_7() const { return ___Up_7; }
	inline bool* get_address_of_Up_7() { return &___Up_7; }
	inline void set_Up_7(bool value)
	{
		___Up_7 = value;
	}

	inline static int32_t get_offset_of_spriteColor_8() { return static_cast<int32_t>(offsetof(items_t100526016, ___spriteColor_8)); }
	inline SpriteRenderer_t2223784725 * get_spriteColor_8() const { return ___spriteColor_8; }
	inline SpriteRenderer_t2223784725 ** get_address_of_spriteColor_8() { return &___spriteColor_8; }
	inline void set_spriteColor_8(SpriteRenderer_t2223784725 * value)
	{
		___spriteColor_8 = value;
		Il2CppCodeGenWriteBarrier(&___spriteColor_8, value);
	}

	inline static int32_t get_offset_of_number_9() { return static_cast<int32_t>(offsetof(items_t100526016, ___number_9)); }
	inline int32_t get_number_9() const { return ___number_9; }
	inline int32_t* get_address_of_number_9() { return &___number_9; }
	inline void set_number_9(int32_t value)
	{
		___number_9 = value;
	}

	inline static int32_t get_offset_of_controller_10() { return static_cast<int32_t>(offsetof(items_t100526016, ___controller_10)); }
	inline wholeMap_t2327764005 * get_controller_10() const { return ___controller_10; }
	inline wholeMap_t2327764005 ** get_address_of_controller_10() { return &___controller_10; }
	inline void set_controller_10(wholeMap_t2327764005 * value)
	{
		___controller_10 = value;
		Il2CppCodeGenWriteBarrier(&___controller_10, value);
	}

	inline static int32_t get_offset_of_speed_11() { return static_cast<int32_t>(offsetof(items_t100526016, ___speed_11)); }
	inline float get_speed_11() const { return ___speed_11; }
	inline float* get_address_of_speed_11() { return &___speed_11; }
	inline void set_speed_11(float value)
	{
		___speed_11 = value;
	}

	inline static int32_t get_offset_of_border_12() { return static_cast<int32_t>(offsetof(items_t100526016, ___border_12)); }
	inline bool get_border_12() const { return ___border_12; }
	inline bool* get_address_of_border_12() { return &___border_12; }
	inline void set_border_12(bool value)
	{
		___border_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
