#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Button
struct Button_t990034267;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Buttons
struct  Buttons_t1906005857  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Button Buttons::button
	Button_t990034267 * ___button_2;
	// UnityEngine.GameObject Buttons::bullet
	GameObject_t4012695102 * ___bullet_3;
	// UnityEngine.Transform Buttons::shotSpawn
	Transform_t284553113 * ___shotSpawn_4;
	// System.Int32 Buttons::playerNumber
	int32_t ___playerNumber_5;

public:
	inline static int32_t get_offset_of_button_2() { return static_cast<int32_t>(offsetof(Buttons_t1906005857, ___button_2)); }
	inline Button_t990034267 * get_button_2() const { return ___button_2; }
	inline Button_t990034267 ** get_address_of_button_2() { return &___button_2; }
	inline void set_button_2(Button_t990034267 * value)
	{
		___button_2 = value;
		Il2CppCodeGenWriteBarrier(&___button_2, value);
	}

	inline static int32_t get_offset_of_bullet_3() { return static_cast<int32_t>(offsetof(Buttons_t1906005857, ___bullet_3)); }
	inline GameObject_t4012695102 * get_bullet_3() const { return ___bullet_3; }
	inline GameObject_t4012695102 ** get_address_of_bullet_3() { return &___bullet_3; }
	inline void set_bullet_3(GameObject_t4012695102 * value)
	{
		___bullet_3 = value;
		Il2CppCodeGenWriteBarrier(&___bullet_3, value);
	}

	inline static int32_t get_offset_of_shotSpawn_4() { return static_cast<int32_t>(offsetof(Buttons_t1906005857, ___shotSpawn_4)); }
	inline Transform_t284553113 * get_shotSpawn_4() const { return ___shotSpawn_4; }
	inline Transform_t284553113 ** get_address_of_shotSpawn_4() { return &___shotSpawn_4; }
	inline void set_shotSpawn_4(Transform_t284553113 * value)
	{
		___shotSpawn_4 = value;
		Il2CppCodeGenWriteBarrier(&___shotSpawn_4, value);
	}

	inline static int32_t get_offset_of_playerNumber_5() { return static_cast<int32_t>(offsetof(Buttons_t1906005857, ___playerNumber_5)); }
	inline int32_t get_playerNumber_5() const { return ___playerNumber_5; }
	inline int32_t* get_address_of_playerNumber_5() { return &___playerNumber_5; }
	inline void set_playerNumber_5(int32_t value)
	{
		___playerNumber_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
