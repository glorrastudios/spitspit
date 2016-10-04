#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// button3
struct button3_t241352513;
// player4
struct player4_t3801399667;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// dragScript
struct  dragScript_t2875732767  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Vector3 dragScript::dist
	Vector3_t3525329789  ___dist_2;
	// System.Single dragScript::posX
	float ___posX_3;
	// System.Single dragScript::posY
	float ___posY_4;
	// System.Boolean dragScript::isDragging
	bool ___isDragging_5;
	// System.Int32 dragScript::choosen
	int32_t ___choosen_6;
	// System.Int32 dragScript::lastTime
	int32_t ___lastTime_7;
	// UnityEngine.LayerMask dragScript::layer
	LayerMask_t1862190090  ___layer_8;
	// button3 dragScript::buttons
	button3_t241352513 * ___buttons_9;
	// player4 dragScript::player
	player4_t3801399667 * ___player_10;
	// UnityEngine.AudioSource dragScript::shootingSource
	AudioSource_t3628549054 * ___shootingSource_11;
	// UnityEngine.Transform dragScript::trans
	Transform_t284553113 * ___trans_12;

public:
	inline static int32_t get_offset_of_dist_2() { return static_cast<int32_t>(offsetof(dragScript_t2875732767, ___dist_2)); }
	inline Vector3_t3525329789  get_dist_2() const { return ___dist_2; }
	inline Vector3_t3525329789 * get_address_of_dist_2() { return &___dist_2; }
	inline void set_dist_2(Vector3_t3525329789  value)
	{
		___dist_2 = value;
	}

	inline static int32_t get_offset_of_posX_3() { return static_cast<int32_t>(offsetof(dragScript_t2875732767, ___posX_3)); }
	inline float get_posX_3() const { return ___posX_3; }
	inline float* get_address_of_posX_3() { return &___posX_3; }
	inline void set_posX_3(float value)
	{
		___posX_3 = value;
	}

	inline static int32_t get_offset_of_posY_4() { return static_cast<int32_t>(offsetof(dragScript_t2875732767, ___posY_4)); }
	inline float get_posY_4() const { return ___posY_4; }
	inline float* get_address_of_posY_4() { return &___posY_4; }
	inline void set_posY_4(float value)
	{
		___posY_4 = value;
	}

	inline static int32_t get_offset_of_isDragging_5() { return static_cast<int32_t>(offsetof(dragScript_t2875732767, ___isDragging_5)); }
	inline bool get_isDragging_5() const { return ___isDragging_5; }
	inline bool* get_address_of_isDragging_5() { return &___isDragging_5; }
	inline void set_isDragging_5(bool value)
	{
		___isDragging_5 = value;
	}

	inline static int32_t get_offset_of_choosen_6() { return static_cast<int32_t>(offsetof(dragScript_t2875732767, ___choosen_6)); }
	inline int32_t get_choosen_6() const { return ___choosen_6; }
	inline int32_t* get_address_of_choosen_6() { return &___choosen_6; }
	inline void set_choosen_6(int32_t value)
	{
		___choosen_6 = value;
	}

	inline static int32_t get_offset_of_lastTime_7() { return static_cast<int32_t>(offsetof(dragScript_t2875732767, ___lastTime_7)); }
	inline int32_t get_lastTime_7() const { return ___lastTime_7; }
	inline int32_t* get_address_of_lastTime_7() { return &___lastTime_7; }
	inline void set_lastTime_7(int32_t value)
	{
		___lastTime_7 = value;
	}

	inline static int32_t get_offset_of_layer_8() { return static_cast<int32_t>(offsetof(dragScript_t2875732767, ___layer_8)); }
	inline LayerMask_t1862190090  get_layer_8() const { return ___layer_8; }
	inline LayerMask_t1862190090 * get_address_of_layer_8() { return &___layer_8; }
	inline void set_layer_8(LayerMask_t1862190090  value)
	{
		___layer_8 = value;
	}

	inline static int32_t get_offset_of_buttons_9() { return static_cast<int32_t>(offsetof(dragScript_t2875732767, ___buttons_9)); }
	inline button3_t241352513 * get_buttons_9() const { return ___buttons_9; }
	inline button3_t241352513 ** get_address_of_buttons_9() { return &___buttons_9; }
	inline void set_buttons_9(button3_t241352513 * value)
	{
		___buttons_9 = value;
		Il2CppCodeGenWriteBarrier(&___buttons_9, value);
	}

	inline static int32_t get_offset_of_player_10() { return static_cast<int32_t>(offsetof(dragScript_t2875732767, ___player_10)); }
	inline player4_t3801399667 * get_player_10() const { return ___player_10; }
	inline player4_t3801399667 ** get_address_of_player_10() { return &___player_10; }
	inline void set_player_10(player4_t3801399667 * value)
	{
		___player_10 = value;
		Il2CppCodeGenWriteBarrier(&___player_10, value);
	}

	inline static int32_t get_offset_of_shootingSource_11() { return static_cast<int32_t>(offsetof(dragScript_t2875732767, ___shootingSource_11)); }
	inline AudioSource_t3628549054 * get_shootingSource_11() const { return ___shootingSource_11; }
	inline AudioSource_t3628549054 ** get_address_of_shootingSource_11() { return &___shootingSource_11; }
	inline void set_shootingSource_11(AudioSource_t3628549054 * value)
	{
		___shootingSource_11 = value;
		Il2CppCodeGenWriteBarrier(&___shootingSource_11, value);
	}

	inline static int32_t get_offset_of_trans_12() { return static_cast<int32_t>(offsetof(dragScript_t2875732767, ___trans_12)); }
	inline Transform_t284553113 * get_trans_12() const { return ___trans_12; }
	inline Transform_t284553113 ** get_address_of_trans_12() { return &___trans_12; }
	inline void set_trans_12(Transform_t284553113 * value)
	{
		___trans_12 = value;
		Il2CppCodeGenWriteBarrier(&___trans_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
