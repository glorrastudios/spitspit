#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;
// tiles
struct tiles_t110363525;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// powerUps
struct  powerUps_t858548723  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Text powerUps::text
	Text_t3286458198 * ___text_2;
	// System.Int32 powerUps::hitNumber
	int32_t ___hitNumber_3;
	// tiles powerUps::tile
	tiles_t110363525 * ___tile_4;
	// System.Int32 powerUps::number
	int32_t ___number_5;
	// UnityEngine.GameObject powerUps::gameObj
	GameObject_t4012695102 * ___gameObj_6;
	// System.Boolean powerUps::oneTime
	bool ___oneTime_7;
	// UnityEngine.GameObject powerUps::player
	GameObject_t4012695102 * ___player_8;

public:
	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(powerUps_t858548723, ___text_2)); }
	inline Text_t3286458198 * get_text_2() const { return ___text_2; }
	inline Text_t3286458198 ** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(Text_t3286458198 * value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier(&___text_2, value);
	}

	inline static int32_t get_offset_of_hitNumber_3() { return static_cast<int32_t>(offsetof(powerUps_t858548723, ___hitNumber_3)); }
	inline int32_t get_hitNumber_3() const { return ___hitNumber_3; }
	inline int32_t* get_address_of_hitNumber_3() { return &___hitNumber_3; }
	inline void set_hitNumber_3(int32_t value)
	{
		___hitNumber_3 = value;
	}

	inline static int32_t get_offset_of_tile_4() { return static_cast<int32_t>(offsetof(powerUps_t858548723, ___tile_4)); }
	inline tiles_t110363525 * get_tile_4() const { return ___tile_4; }
	inline tiles_t110363525 ** get_address_of_tile_4() { return &___tile_4; }
	inline void set_tile_4(tiles_t110363525 * value)
	{
		___tile_4 = value;
		Il2CppCodeGenWriteBarrier(&___tile_4, value);
	}

	inline static int32_t get_offset_of_number_5() { return static_cast<int32_t>(offsetof(powerUps_t858548723, ___number_5)); }
	inline int32_t get_number_5() const { return ___number_5; }
	inline int32_t* get_address_of_number_5() { return &___number_5; }
	inline void set_number_5(int32_t value)
	{
		___number_5 = value;
	}

	inline static int32_t get_offset_of_gameObj_6() { return static_cast<int32_t>(offsetof(powerUps_t858548723, ___gameObj_6)); }
	inline GameObject_t4012695102 * get_gameObj_6() const { return ___gameObj_6; }
	inline GameObject_t4012695102 ** get_address_of_gameObj_6() { return &___gameObj_6; }
	inline void set_gameObj_6(GameObject_t4012695102 * value)
	{
		___gameObj_6 = value;
		Il2CppCodeGenWriteBarrier(&___gameObj_6, value);
	}

	inline static int32_t get_offset_of_oneTime_7() { return static_cast<int32_t>(offsetof(powerUps_t858548723, ___oneTime_7)); }
	inline bool get_oneTime_7() const { return ___oneTime_7; }
	inline bool* get_address_of_oneTime_7() { return &___oneTime_7; }
	inline void set_oneTime_7(bool value)
	{
		___oneTime_7 = value;
	}

	inline static int32_t get_offset_of_player_8() { return static_cast<int32_t>(offsetof(powerUps_t858548723, ___player_8)); }
	inline GameObject_t4012695102 * get_player_8() const { return ___player_8; }
	inline GameObject_t4012695102 ** get_address_of_player_8() { return &___player_8; }
	inline void set_player_8(GameObject_t4012695102 * value)
	{
		___player_8 = value;
		Il2CppCodeGenWriteBarrier(&___player_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
