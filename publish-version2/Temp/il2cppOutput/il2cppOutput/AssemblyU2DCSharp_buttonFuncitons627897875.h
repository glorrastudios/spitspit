#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.Canvas
struct Canvas_t3534013893;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.UI.Button
struct Button_t990034267;
// System.Action`1<System.Boolean>
struct Action_1_t359458046;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// buttonFuncitons
struct  buttonFuncitons_t627897875  : public MonoBehaviour_t3012272455
{
public:
	// System.String buttonFuncitons::LEADERBOARD_ID
	String_t* ___LEADERBOARD_ID_2;
	// UnityEngine.UI.Text buttonFuncitons::highScoreText
	Text_t3286458198 * ___highScoreText_3;
	// UnityEngine.UI.Text buttonFuncitons::starCount
	Text_t3286458198 * ___starCount_4;
	// UnityEngine.Canvas buttonFuncitons::canvas
	Canvas_t3534013893 * ___canvas_5;
	// UnityEngine.Canvas buttonFuncitons::settngCanvas
	Canvas_t3534013893 * ___settngCanvas_6;
	// UnityEngine.Canvas buttonFuncitons::MainCanvas
	Canvas_t3534013893 * ___MainCanvas_7;
	// System.String buttonFuncitons::APP_ID_ITUNES_CONNECT
	String_t* ___APP_ID_ITUNES_CONNECT_8;
	// UnityEngine.GameObject buttonFuncitons::soundButtonON
	GameObject_t4012695102 * ___soundButtonON_9;
	// UnityEngine.GameObject buttonFuncitons::soundButtonOFF
	GameObject_t4012695102 * ___soundButtonOFF_10;
	// UnityEngine.GameObject buttonFuncitons::effctButtonON
	GameObject_t4012695102 * ___effctButtonON_11;
	// UnityEngine.GameObject buttonFuncitons::effctButtonOFF
	GameObject_t4012695102 * ___effctButtonOFF_12;
	// System.Int32 buttonFuncitons::audioIsOff
	int32_t ___audioIsOff_13;
	// System.Int32 buttonFuncitons::effectisoff
	int32_t ___effectisoff_14;
	// UnityEngine.RectTransform buttonFuncitons::trans
	RectTransform_t3317474837 * ___trans_15;
	// System.Single buttonFuncitons::add
	float ___add_16;
	// System.Single buttonFuncitons::goal
	float ___goal_17;
	// UnityEngine.AudioSource buttonFuncitons::buttonSounds
	AudioSource_t3628549054 * ___buttonSounds_18;
	// UnityEngine.AudioSource buttonFuncitons::backGroundsound
	AudioSource_t3628549054 * ___backGroundsound_19;
	// UnityEngine.UI.Button buttonFuncitons::removeAdsButton
	Button_t990034267 * ___removeAdsButton_20;
	// UnityEngine.UI.Button buttonFuncitons::infoButt
	Button_t990034267 * ___infoButt_21;

public:
	inline static int32_t get_offset_of_LEADERBOARD_ID_2() { return static_cast<int32_t>(offsetof(buttonFuncitons_t627897875, ___LEADERBOARD_ID_2)); }
	inline String_t* get_LEADERBOARD_ID_2() const { return ___LEADERBOARD_ID_2; }
	inline String_t** get_address_of_LEADERBOARD_ID_2() { return &___LEADERBOARD_ID_2; }
	inline void set_LEADERBOARD_ID_2(String_t* value)
	{
		___LEADERBOARD_ID_2 = value;
		Il2CppCodeGenWriteBarrier(&___LEADERBOARD_ID_2, value);
	}

	inline static int32_t get_offset_of_highScoreText_3() { return static_cast<int32_t>(offsetof(buttonFuncitons_t627897875, ___highScoreText_3)); }
	inline Text_t3286458198 * get_highScoreText_3() const { return ___highScoreText_3; }
	inline Text_t3286458198 ** get_address_of_highScoreText_3() { return &___highScoreText_3; }
	inline void set_highScoreText_3(Text_t3286458198 * value)
	{
		___highScoreText_3 = value;
		Il2CppCodeGenWriteBarrier(&___highScoreText_3, value);
	}

	inline static int32_t get_offset_of_starCount_4() { return static_cast<int32_t>(offsetof(buttonFuncitons_t627897875, ___starCount_4)); }
	inline Text_t3286458198 * get_starCount_4() const { return ___starCount_4; }
	inline Text_t3286458198 ** get_address_of_starCount_4() { return &___starCount_4; }
	inline void set_starCount_4(Text_t3286458198 * value)
	{
		___starCount_4 = value;
		Il2CppCodeGenWriteBarrier(&___starCount_4, value);
	}

	inline static int32_t get_offset_of_canvas_5() { return static_cast<int32_t>(offsetof(buttonFuncitons_t627897875, ___canvas_5)); }
	inline Canvas_t3534013893 * get_canvas_5() const { return ___canvas_5; }
	inline Canvas_t3534013893 ** get_address_of_canvas_5() { return &___canvas_5; }
	inline void set_canvas_5(Canvas_t3534013893 * value)
	{
		___canvas_5 = value;
		Il2CppCodeGenWriteBarrier(&___canvas_5, value);
	}

	inline static int32_t get_offset_of_settngCanvas_6() { return static_cast<int32_t>(offsetof(buttonFuncitons_t627897875, ___settngCanvas_6)); }
	inline Canvas_t3534013893 * get_settngCanvas_6() const { return ___settngCanvas_6; }
	inline Canvas_t3534013893 ** get_address_of_settngCanvas_6() { return &___settngCanvas_6; }
	inline void set_settngCanvas_6(Canvas_t3534013893 * value)
	{
		___settngCanvas_6 = value;
		Il2CppCodeGenWriteBarrier(&___settngCanvas_6, value);
	}

	inline static int32_t get_offset_of_MainCanvas_7() { return static_cast<int32_t>(offsetof(buttonFuncitons_t627897875, ___MainCanvas_7)); }
	inline Canvas_t3534013893 * get_MainCanvas_7() const { return ___MainCanvas_7; }
	inline Canvas_t3534013893 ** get_address_of_MainCanvas_7() { return &___MainCanvas_7; }
	inline void set_MainCanvas_7(Canvas_t3534013893 * value)
	{
		___MainCanvas_7 = value;
		Il2CppCodeGenWriteBarrier(&___MainCanvas_7, value);
	}

	inline static int32_t get_offset_of_APP_ID_ITUNES_CONNECT_8() { return static_cast<int32_t>(offsetof(buttonFuncitons_t627897875, ___APP_ID_ITUNES_CONNECT_8)); }
	inline String_t* get_APP_ID_ITUNES_CONNECT_8() const { return ___APP_ID_ITUNES_CONNECT_8; }
	inline String_t** get_address_of_APP_ID_ITUNES_CONNECT_8() { return &___APP_ID_ITUNES_CONNECT_8; }
	inline void set_APP_ID_ITUNES_CONNECT_8(String_t* value)
	{
		___APP_ID_ITUNES_CONNECT_8 = value;
		Il2CppCodeGenWriteBarrier(&___APP_ID_ITUNES_CONNECT_8, value);
	}

	inline static int32_t get_offset_of_soundButtonON_9() { return static_cast<int32_t>(offsetof(buttonFuncitons_t627897875, ___soundButtonON_9)); }
	inline GameObject_t4012695102 * get_soundButtonON_9() const { return ___soundButtonON_9; }
	inline GameObject_t4012695102 ** get_address_of_soundButtonON_9() { return &___soundButtonON_9; }
	inline void set_soundButtonON_9(GameObject_t4012695102 * value)
	{
		___soundButtonON_9 = value;
		Il2CppCodeGenWriteBarrier(&___soundButtonON_9, value);
	}

	inline static int32_t get_offset_of_soundButtonOFF_10() { return static_cast<int32_t>(offsetof(buttonFuncitons_t627897875, ___soundButtonOFF_10)); }
	inline GameObject_t4012695102 * get_soundButtonOFF_10() const { return ___soundButtonOFF_10; }
	inline GameObject_t4012695102 ** get_address_of_soundButtonOFF_10() { return &___soundButtonOFF_10; }
	inline void set_soundButtonOFF_10(GameObject_t4012695102 * value)
	{
		___soundButtonOFF_10 = value;
		Il2CppCodeGenWriteBarrier(&___soundButtonOFF_10, value);
	}

	inline static int32_t get_offset_of_effctButtonON_11() { return static_cast<int32_t>(offsetof(buttonFuncitons_t627897875, ___effctButtonON_11)); }
	inline GameObject_t4012695102 * get_effctButtonON_11() const { return ___effctButtonON_11; }
	inline GameObject_t4012695102 ** get_address_of_effctButtonON_11() { return &___effctButtonON_11; }
	inline void set_effctButtonON_11(GameObject_t4012695102 * value)
	{
		___effctButtonON_11 = value;
		Il2CppCodeGenWriteBarrier(&___effctButtonON_11, value);
	}

	inline static int32_t get_offset_of_effctButtonOFF_12() { return static_cast<int32_t>(offsetof(buttonFuncitons_t627897875, ___effctButtonOFF_12)); }
	inline GameObject_t4012695102 * get_effctButtonOFF_12() const { return ___effctButtonOFF_12; }
	inline GameObject_t4012695102 ** get_address_of_effctButtonOFF_12() { return &___effctButtonOFF_12; }
	inline void set_effctButtonOFF_12(GameObject_t4012695102 * value)
	{
		___effctButtonOFF_12 = value;
		Il2CppCodeGenWriteBarrier(&___effctButtonOFF_12, value);
	}

	inline static int32_t get_offset_of_audioIsOff_13() { return static_cast<int32_t>(offsetof(buttonFuncitons_t627897875, ___audioIsOff_13)); }
	inline int32_t get_audioIsOff_13() const { return ___audioIsOff_13; }
	inline int32_t* get_address_of_audioIsOff_13() { return &___audioIsOff_13; }
	inline void set_audioIsOff_13(int32_t value)
	{
		___audioIsOff_13 = value;
	}

	inline static int32_t get_offset_of_effectisoff_14() { return static_cast<int32_t>(offsetof(buttonFuncitons_t627897875, ___effectisoff_14)); }
	inline int32_t get_effectisoff_14() const { return ___effectisoff_14; }
	inline int32_t* get_address_of_effectisoff_14() { return &___effectisoff_14; }
	inline void set_effectisoff_14(int32_t value)
	{
		___effectisoff_14 = value;
	}

	inline static int32_t get_offset_of_trans_15() { return static_cast<int32_t>(offsetof(buttonFuncitons_t627897875, ___trans_15)); }
	inline RectTransform_t3317474837 * get_trans_15() const { return ___trans_15; }
	inline RectTransform_t3317474837 ** get_address_of_trans_15() { return &___trans_15; }
	inline void set_trans_15(RectTransform_t3317474837 * value)
	{
		___trans_15 = value;
		Il2CppCodeGenWriteBarrier(&___trans_15, value);
	}

	inline static int32_t get_offset_of_add_16() { return static_cast<int32_t>(offsetof(buttonFuncitons_t627897875, ___add_16)); }
	inline float get_add_16() const { return ___add_16; }
	inline float* get_address_of_add_16() { return &___add_16; }
	inline void set_add_16(float value)
	{
		___add_16 = value;
	}

	inline static int32_t get_offset_of_goal_17() { return static_cast<int32_t>(offsetof(buttonFuncitons_t627897875, ___goal_17)); }
	inline float get_goal_17() const { return ___goal_17; }
	inline float* get_address_of_goal_17() { return &___goal_17; }
	inline void set_goal_17(float value)
	{
		___goal_17 = value;
	}

	inline static int32_t get_offset_of_buttonSounds_18() { return static_cast<int32_t>(offsetof(buttonFuncitons_t627897875, ___buttonSounds_18)); }
	inline AudioSource_t3628549054 * get_buttonSounds_18() const { return ___buttonSounds_18; }
	inline AudioSource_t3628549054 ** get_address_of_buttonSounds_18() { return &___buttonSounds_18; }
	inline void set_buttonSounds_18(AudioSource_t3628549054 * value)
	{
		___buttonSounds_18 = value;
		Il2CppCodeGenWriteBarrier(&___buttonSounds_18, value);
	}

	inline static int32_t get_offset_of_backGroundsound_19() { return static_cast<int32_t>(offsetof(buttonFuncitons_t627897875, ___backGroundsound_19)); }
	inline AudioSource_t3628549054 * get_backGroundsound_19() const { return ___backGroundsound_19; }
	inline AudioSource_t3628549054 ** get_address_of_backGroundsound_19() { return &___backGroundsound_19; }
	inline void set_backGroundsound_19(AudioSource_t3628549054 * value)
	{
		___backGroundsound_19 = value;
		Il2CppCodeGenWriteBarrier(&___backGroundsound_19, value);
	}

	inline static int32_t get_offset_of_removeAdsButton_20() { return static_cast<int32_t>(offsetof(buttonFuncitons_t627897875, ___removeAdsButton_20)); }
	inline Button_t990034267 * get_removeAdsButton_20() const { return ___removeAdsButton_20; }
	inline Button_t990034267 ** get_address_of_removeAdsButton_20() { return &___removeAdsButton_20; }
	inline void set_removeAdsButton_20(Button_t990034267 * value)
	{
		___removeAdsButton_20 = value;
		Il2CppCodeGenWriteBarrier(&___removeAdsButton_20, value);
	}

	inline static int32_t get_offset_of_infoButt_21() { return static_cast<int32_t>(offsetof(buttonFuncitons_t627897875, ___infoButt_21)); }
	inline Button_t990034267 * get_infoButt_21() const { return ___infoButt_21; }
	inline Button_t990034267 ** get_address_of_infoButt_21() { return &___infoButt_21; }
	inline void set_infoButt_21(Button_t990034267 * value)
	{
		___infoButt_21 = value;
		Il2CppCodeGenWriteBarrier(&___infoButt_21, value);
	}
};

struct buttonFuncitons_t627897875_StaticFields
{
public:
	// System.Action`1<System.Boolean> buttonFuncitons::<>f__am$cache14
	Action_1_t359458046 * ___U3CU3Ef__amU24cache14_22;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache14_22() { return static_cast<int32_t>(offsetof(buttonFuncitons_t627897875_StaticFields, ___U3CU3Ef__amU24cache14_22)); }
	inline Action_1_t359458046 * get_U3CU3Ef__amU24cache14_22() const { return ___U3CU3Ef__amU24cache14_22; }
	inline Action_1_t359458046 ** get_address_of_U3CU3Ef__amU24cache14_22() { return &___U3CU3Ef__amU24cache14_22; }
	inline void set_U3CU3Ef__amU24cache14_22(Action_1_t359458046 * value)
	{
		___U3CU3Ef__amU24cache14_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache14_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
