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
// UnityEngine.UI.Button
struct Button_t990034267;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.UI.Text
struct Text_t3286458198;
// soomlascript
struct soomlascript_t3105050042;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// selection
struct  selection_t2579001740  : public MonoBehaviour_t3012272455
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> selection::characters
	List_1_t514686775 * ___characters_2;
	// System.Int32 selection::main
	int32_t ___main_3;
	// System.Boolean selection::moving
	bool ___moving_4;
	// System.Boolean selection::hasPress
	bool ___hasPress_5;
	// UnityEngine.UI.Button selection::selectButton
	Button_t990034267 * ___selectButton_6;
	// System.Int32 selection::chosenIndex
	int32_t ___chosenIndex_7;
	// UnityEngine.Transform selection::trans
	Transform_t284553113 * ___trans_8;
	// UnityEngine.UI.Text selection::starText
	Text_t3286458198 * ___starText_9;
	// UnityEngine.UI.Button selection::starCostButton
	Button_t990034267 * ___starCostButton_10;
	// UnityEngine.UI.Button selection::moneyCostButton
	Button_t990034267 * ___moneyCostButton_11;
	// UnityEngine.UI.Button selection::selectedButton
	Button_t990034267 * ___selectedButton_12;
	// UnityEngine.UI.Text selection::starCost
	Text_t3286458198 * ___starCost_13;
	// UnityEngine.UI.Text selection::priceText
	Text_t3286458198 * ___priceText_14;
	// soomlascript selection::soomla
	soomlascript_t3105050042 * ___soomla_15;
	// UnityEngine.UI.Button selection::byeAds
	Button_t990034267 * ___byeAds_16;
	// UnityEngine.UI.Button selection::buyAllChar
	Button_t990034267 * ___buyAllChar_17;
	// UnityEngine.AudioClip selection::ChangingCharacters
	AudioClip_t3714538611 * ___ChangingCharacters_18;
	// UnityEngine.AudioClip selection::CharacterSelected
	AudioClip_t3714538611 * ___CharacterSelected_19;
	// UnityEngine.AudioClip selection::fiveThouandStarsSound
	AudioClip_t3714538611 * ___fiveThouandStarsSound_20;
	// UnityEngine.AudioClip selection::PurchaseSucceeded
	AudioClip_t3714538611 * ___PurchaseSucceeded_21;
	// UnityEngine.AudioClip selection::ButtonSound
	AudioClip_t3714538611 * ___ButtonSound_22;
	// UnityEngine.AudioSource selection::audioPlay
	AudioSource_t3628549054 * ___audioPlay_23;

public:
	inline static int32_t get_offset_of_characters_2() { return static_cast<int32_t>(offsetof(selection_t2579001740, ___characters_2)); }
	inline List_1_t514686775 * get_characters_2() const { return ___characters_2; }
	inline List_1_t514686775 ** get_address_of_characters_2() { return &___characters_2; }
	inline void set_characters_2(List_1_t514686775 * value)
	{
		___characters_2 = value;
		Il2CppCodeGenWriteBarrier(&___characters_2, value);
	}

	inline static int32_t get_offset_of_main_3() { return static_cast<int32_t>(offsetof(selection_t2579001740, ___main_3)); }
	inline int32_t get_main_3() const { return ___main_3; }
	inline int32_t* get_address_of_main_3() { return &___main_3; }
	inline void set_main_3(int32_t value)
	{
		___main_3 = value;
	}

	inline static int32_t get_offset_of_moving_4() { return static_cast<int32_t>(offsetof(selection_t2579001740, ___moving_4)); }
	inline bool get_moving_4() const { return ___moving_4; }
	inline bool* get_address_of_moving_4() { return &___moving_4; }
	inline void set_moving_4(bool value)
	{
		___moving_4 = value;
	}

	inline static int32_t get_offset_of_hasPress_5() { return static_cast<int32_t>(offsetof(selection_t2579001740, ___hasPress_5)); }
	inline bool get_hasPress_5() const { return ___hasPress_5; }
	inline bool* get_address_of_hasPress_5() { return &___hasPress_5; }
	inline void set_hasPress_5(bool value)
	{
		___hasPress_5 = value;
	}

	inline static int32_t get_offset_of_selectButton_6() { return static_cast<int32_t>(offsetof(selection_t2579001740, ___selectButton_6)); }
	inline Button_t990034267 * get_selectButton_6() const { return ___selectButton_6; }
	inline Button_t990034267 ** get_address_of_selectButton_6() { return &___selectButton_6; }
	inline void set_selectButton_6(Button_t990034267 * value)
	{
		___selectButton_6 = value;
		Il2CppCodeGenWriteBarrier(&___selectButton_6, value);
	}

	inline static int32_t get_offset_of_chosenIndex_7() { return static_cast<int32_t>(offsetof(selection_t2579001740, ___chosenIndex_7)); }
	inline int32_t get_chosenIndex_7() const { return ___chosenIndex_7; }
	inline int32_t* get_address_of_chosenIndex_7() { return &___chosenIndex_7; }
	inline void set_chosenIndex_7(int32_t value)
	{
		___chosenIndex_7 = value;
	}

	inline static int32_t get_offset_of_trans_8() { return static_cast<int32_t>(offsetof(selection_t2579001740, ___trans_8)); }
	inline Transform_t284553113 * get_trans_8() const { return ___trans_8; }
	inline Transform_t284553113 ** get_address_of_trans_8() { return &___trans_8; }
	inline void set_trans_8(Transform_t284553113 * value)
	{
		___trans_8 = value;
		Il2CppCodeGenWriteBarrier(&___trans_8, value);
	}

	inline static int32_t get_offset_of_starText_9() { return static_cast<int32_t>(offsetof(selection_t2579001740, ___starText_9)); }
	inline Text_t3286458198 * get_starText_9() const { return ___starText_9; }
	inline Text_t3286458198 ** get_address_of_starText_9() { return &___starText_9; }
	inline void set_starText_9(Text_t3286458198 * value)
	{
		___starText_9 = value;
		Il2CppCodeGenWriteBarrier(&___starText_9, value);
	}

	inline static int32_t get_offset_of_starCostButton_10() { return static_cast<int32_t>(offsetof(selection_t2579001740, ___starCostButton_10)); }
	inline Button_t990034267 * get_starCostButton_10() const { return ___starCostButton_10; }
	inline Button_t990034267 ** get_address_of_starCostButton_10() { return &___starCostButton_10; }
	inline void set_starCostButton_10(Button_t990034267 * value)
	{
		___starCostButton_10 = value;
		Il2CppCodeGenWriteBarrier(&___starCostButton_10, value);
	}

	inline static int32_t get_offset_of_moneyCostButton_11() { return static_cast<int32_t>(offsetof(selection_t2579001740, ___moneyCostButton_11)); }
	inline Button_t990034267 * get_moneyCostButton_11() const { return ___moneyCostButton_11; }
	inline Button_t990034267 ** get_address_of_moneyCostButton_11() { return &___moneyCostButton_11; }
	inline void set_moneyCostButton_11(Button_t990034267 * value)
	{
		___moneyCostButton_11 = value;
		Il2CppCodeGenWriteBarrier(&___moneyCostButton_11, value);
	}

	inline static int32_t get_offset_of_selectedButton_12() { return static_cast<int32_t>(offsetof(selection_t2579001740, ___selectedButton_12)); }
	inline Button_t990034267 * get_selectedButton_12() const { return ___selectedButton_12; }
	inline Button_t990034267 ** get_address_of_selectedButton_12() { return &___selectedButton_12; }
	inline void set_selectedButton_12(Button_t990034267 * value)
	{
		___selectedButton_12 = value;
		Il2CppCodeGenWriteBarrier(&___selectedButton_12, value);
	}

	inline static int32_t get_offset_of_starCost_13() { return static_cast<int32_t>(offsetof(selection_t2579001740, ___starCost_13)); }
	inline Text_t3286458198 * get_starCost_13() const { return ___starCost_13; }
	inline Text_t3286458198 ** get_address_of_starCost_13() { return &___starCost_13; }
	inline void set_starCost_13(Text_t3286458198 * value)
	{
		___starCost_13 = value;
		Il2CppCodeGenWriteBarrier(&___starCost_13, value);
	}

	inline static int32_t get_offset_of_priceText_14() { return static_cast<int32_t>(offsetof(selection_t2579001740, ___priceText_14)); }
	inline Text_t3286458198 * get_priceText_14() const { return ___priceText_14; }
	inline Text_t3286458198 ** get_address_of_priceText_14() { return &___priceText_14; }
	inline void set_priceText_14(Text_t3286458198 * value)
	{
		___priceText_14 = value;
		Il2CppCodeGenWriteBarrier(&___priceText_14, value);
	}

	inline static int32_t get_offset_of_soomla_15() { return static_cast<int32_t>(offsetof(selection_t2579001740, ___soomla_15)); }
	inline soomlascript_t3105050042 * get_soomla_15() const { return ___soomla_15; }
	inline soomlascript_t3105050042 ** get_address_of_soomla_15() { return &___soomla_15; }
	inline void set_soomla_15(soomlascript_t3105050042 * value)
	{
		___soomla_15 = value;
		Il2CppCodeGenWriteBarrier(&___soomla_15, value);
	}

	inline static int32_t get_offset_of_byeAds_16() { return static_cast<int32_t>(offsetof(selection_t2579001740, ___byeAds_16)); }
	inline Button_t990034267 * get_byeAds_16() const { return ___byeAds_16; }
	inline Button_t990034267 ** get_address_of_byeAds_16() { return &___byeAds_16; }
	inline void set_byeAds_16(Button_t990034267 * value)
	{
		___byeAds_16 = value;
		Il2CppCodeGenWriteBarrier(&___byeAds_16, value);
	}

	inline static int32_t get_offset_of_buyAllChar_17() { return static_cast<int32_t>(offsetof(selection_t2579001740, ___buyAllChar_17)); }
	inline Button_t990034267 * get_buyAllChar_17() const { return ___buyAllChar_17; }
	inline Button_t990034267 ** get_address_of_buyAllChar_17() { return &___buyAllChar_17; }
	inline void set_buyAllChar_17(Button_t990034267 * value)
	{
		___buyAllChar_17 = value;
		Il2CppCodeGenWriteBarrier(&___buyAllChar_17, value);
	}

	inline static int32_t get_offset_of_ChangingCharacters_18() { return static_cast<int32_t>(offsetof(selection_t2579001740, ___ChangingCharacters_18)); }
	inline AudioClip_t3714538611 * get_ChangingCharacters_18() const { return ___ChangingCharacters_18; }
	inline AudioClip_t3714538611 ** get_address_of_ChangingCharacters_18() { return &___ChangingCharacters_18; }
	inline void set_ChangingCharacters_18(AudioClip_t3714538611 * value)
	{
		___ChangingCharacters_18 = value;
		Il2CppCodeGenWriteBarrier(&___ChangingCharacters_18, value);
	}

	inline static int32_t get_offset_of_CharacterSelected_19() { return static_cast<int32_t>(offsetof(selection_t2579001740, ___CharacterSelected_19)); }
	inline AudioClip_t3714538611 * get_CharacterSelected_19() const { return ___CharacterSelected_19; }
	inline AudioClip_t3714538611 ** get_address_of_CharacterSelected_19() { return &___CharacterSelected_19; }
	inline void set_CharacterSelected_19(AudioClip_t3714538611 * value)
	{
		___CharacterSelected_19 = value;
		Il2CppCodeGenWriteBarrier(&___CharacterSelected_19, value);
	}

	inline static int32_t get_offset_of_fiveThouandStarsSound_20() { return static_cast<int32_t>(offsetof(selection_t2579001740, ___fiveThouandStarsSound_20)); }
	inline AudioClip_t3714538611 * get_fiveThouandStarsSound_20() const { return ___fiveThouandStarsSound_20; }
	inline AudioClip_t3714538611 ** get_address_of_fiveThouandStarsSound_20() { return &___fiveThouandStarsSound_20; }
	inline void set_fiveThouandStarsSound_20(AudioClip_t3714538611 * value)
	{
		___fiveThouandStarsSound_20 = value;
		Il2CppCodeGenWriteBarrier(&___fiveThouandStarsSound_20, value);
	}

	inline static int32_t get_offset_of_PurchaseSucceeded_21() { return static_cast<int32_t>(offsetof(selection_t2579001740, ___PurchaseSucceeded_21)); }
	inline AudioClip_t3714538611 * get_PurchaseSucceeded_21() const { return ___PurchaseSucceeded_21; }
	inline AudioClip_t3714538611 ** get_address_of_PurchaseSucceeded_21() { return &___PurchaseSucceeded_21; }
	inline void set_PurchaseSucceeded_21(AudioClip_t3714538611 * value)
	{
		___PurchaseSucceeded_21 = value;
		Il2CppCodeGenWriteBarrier(&___PurchaseSucceeded_21, value);
	}

	inline static int32_t get_offset_of_ButtonSound_22() { return static_cast<int32_t>(offsetof(selection_t2579001740, ___ButtonSound_22)); }
	inline AudioClip_t3714538611 * get_ButtonSound_22() const { return ___ButtonSound_22; }
	inline AudioClip_t3714538611 ** get_address_of_ButtonSound_22() { return &___ButtonSound_22; }
	inline void set_ButtonSound_22(AudioClip_t3714538611 * value)
	{
		___ButtonSound_22 = value;
		Il2CppCodeGenWriteBarrier(&___ButtonSound_22, value);
	}

	inline static int32_t get_offset_of_audioPlay_23() { return static_cast<int32_t>(offsetof(selection_t2579001740, ___audioPlay_23)); }
	inline AudioSource_t3628549054 * get_audioPlay_23() const { return ___audioPlay_23; }
	inline AudioSource_t3628549054 ** get_address_of_audioPlay_23() { return &___audioPlay_23; }
	inline void set_audioPlay_23(AudioSource_t3628549054 * value)
	{
		___audioPlay_23 = value;
		Il2CppCodeGenWriteBarrier(&___audioPlay_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
