#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Soomla.Store.Example.ExampleWindow
struct ExampleWindow_t2922717028;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// UnityEngine.Font
struct Font_t1525081276;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D>
struct Dictionary_2_t4147236426;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t1848703245;
// Soomla.Reward
struct Reward_t1570165988;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_Soomla_Store_Example_ExampleWind3778983990.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Soomla.Store.Example.ExampleWindow
struct  ExampleWindow_t2922717028  : public MonoBehaviour_t3012272455
{
public:
	// Soomla.Store.Example.ExampleWindow/GUIState Soomla.Store.Example.ExampleWindow::guiState
	int32_t ___guiState_3;
	// UnityEngine.Vector2 Soomla.Store.Example.ExampleWindow::goodsScrollPosition
	Vector2_t3525329788  ___goodsScrollPosition_4;
	// UnityEngine.Vector2 Soomla.Store.Example.ExampleWindow::productScrollPosition
	Vector2_t3525329788  ___productScrollPosition_5;
	// System.Boolean Soomla.Store.Example.ExampleWindow::isDragging
	bool ___isDragging_6;
	// UnityEngine.Vector2 Soomla.Store.Example.ExampleWindow::startTouch
	Vector2_t3525329788  ___startTouch_7;
	// System.Boolean Soomla.Store.Example.ExampleWindow::checkAffordable
	bool ___checkAffordable_8;
	// System.String Soomla.Store.Example.ExampleWindow::fontSuffix
	String_t* ___fontSuffix_9;
	// UnityEngine.Texture2D Soomla.Store.Example.ExampleWindow::tImgDirect
	Texture2D_t2509538522 * ___tImgDirect_11;
	// UnityEngine.Texture2D Soomla.Store.Example.ExampleWindow::tLogoNew
	Texture2D_t2509538522 * ___tLogoNew_12;
	// UnityEngine.Font Soomla.Store.Example.ExampleWindow::fgoodDog
	Font_t1525081276 * ___fgoodDog_13;
	// UnityEngine.Font Soomla.Store.Example.ExampleWindow::fgoodDogSmall
	Font_t1525081276 * ___fgoodDogSmall_14;
	// UnityEngine.Font Soomla.Store.Example.ExampleWindow::fTitle
	Font_t1525081276 * ___fTitle_15;
	// UnityEngine.Texture2D Soomla.Store.Example.ExampleWindow::tWhitePixel
	Texture2D_t2509538522 * ___tWhitePixel_16;
	// UnityEngine.Texture2D Soomla.Store.Example.ExampleWindow::tMuffins
	Texture2D_t2509538522 * ___tMuffins_17;
	// UnityEngine.Font Soomla.Store.Example.ExampleWindow::fName
	Font_t1525081276 * ___fName_18;
	// UnityEngine.Font Soomla.Store.Example.ExampleWindow::fDesc
	Font_t1525081276 * ___fDesc_19;
	// UnityEngine.Font Soomla.Store.Example.ExampleWindow::fBuy
	Font_t1525081276 * ___fBuy_20;
	// UnityEngine.Texture2D Soomla.Store.Example.ExampleWindow::tBack
	Texture2D_t2509538522 * ___tBack_21;
	// UnityEngine.Texture2D Soomla.Store.Example.ExampleWindow::tGetMore
	Texture2D_t2509538522 * ___tGetMore_22;
	// UnityEngine.Font Soomla.Store.Example.ExampleWindow::tTitle
	Font_t1525081276 * ___tTitle_23;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D> Soomla.Store.Example.ExampleWindow::itemsTextures
	Dictionary_2_t4147236426 * ___itemsTextures_24;
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> Soomla.Store.Example.ExampleWindow::itemsAffordability
	Dictionary_2_t1848703245 * ___itemsAffordability_25;
	// Soomla.Reward Soomla.Store.Example.ExampleWindow::firstLaunchReward
	Reward_t1570165988 * ___firstLaunchReward_26;

public:
	inline static int32_t get_offset_of_guiState_3() { return static_cast<int32_t>(offsetof(ExampleWindow_t2922717028, ___guiState_3)); }
	inline int32_t get_guiState_3() const { return ___guiState_3; }
	inline int32_t* get_address_of_guiState_3() { return &___guiState_3; }
	inline void set_guiState_3(int32_t value)
	{
		___guiState_3 = value;
	}

	inline static int32_t get_offset_of_goodsScrollPosition_4() { return static_cast<int32_t>(offsetof(ExampleWindow_t2922717028, ___goodsScrollPosition_4)); }
	inline Vector2_t3525329788  get_goodsScrollPosition_4() const { return ___goodsScrollPosition_4; }
	inline Vector2_t3525329788 * get_address_of_goodsScrollPosition_4() { return &___goodsScrollPosition_4; }
	inline void set_goodsScrollPosition_4(Vector2_t3525329788  value)
	{
		___goodsScrollPosition_4 = value;
	}

	inline static int32_t get_offset_of_productScrollPosition_5() { return static_cast<int32_t>(offsetof(ExampleWindow_t2922717028, ___productScrollPosition_5)); }
	inline Vector2_t3525329788  get_productScrollPosition_5() const { return ___productScrollPosition_5; }
	inline Vector2_t3525329788 * get_address_of_productScrollPosition_5() { return &___productScrollPosition_5; }
	inline void set_productScrollPosition_5(Vector2_t3525329788  value)
	{
		___productScrollPosition_5 = value;
	}

	inline static int32_t get_offset_of_isDragging_6() { return static_cast<int32_t>(offsetof(ExampleWindow_t2922717028, ___isDragging_6)); }
	inline bool get_isDragging_6() const { return ___isDragging_6; }
	inline bool* get_address_of_isDragging_6() { return &___isDragging_6; }
	inline void set_isDragging_6(bool value)
	{
		___isDragging_6 = value;
	}

	inline static int32_t get_offset_of_startTouch_7() { return static_cast<int32_t>(offsetof(ExampleWindow_t2922717028, ___startTouch_7)); }
	inline Vector2_t3525329788  get_startTouch_7() const { return ___startTouch_7; }
	inline Vector2_t3525329788 * get_address_of_startTouch_7() { return &___startTouch_7; }
	inline void set_startTouch_7(Vector2_t3525329788  value)
	{
		___startTouch_7 = value;
	}

	inline static int32_t get_offset_of_checkAffordable_8() { return static_cast<int32_t>(offsetof(ExampleWindow_t2922717028, ___checkAffordable_8)); }
	inline bool get_checkAffordable_8() const { return ___checkAffordable_8; }
	inline bool* get_address_of_checkAffordable_8() { return &___checkAffordable_8; }
	inline void set_checkAffordable_8(bool value)
	{
		___checkAffordable_8 = value;
	}

	inline static int32_t get_offset_of_fontSuffix_9() { return static_cast<int32_t>(offsetof(ExampleWindow_t2922717028, ___fontSuffix_9)); }
	inline String_t* get_fontSuffix_9() const { return ___fontSuffix_9; }
	inline String_t** get_address_of_fontSuffix_9() { return &___fontSuffix_9; }
	inline void set_fontSuffix_9(String_t* value)
	{
		___fontSuffix_9 = value;
		Il2CppCodeGenWriteBarrier(&___fontSuffix_9, value);
	}

	inline static int32_t get_offset_of_tImgDirect_11() { return static_cast<int32_t>(offsetof(ExampleWindow_t2922717028, ___tImgDirect_11)); }
	inline Texture2D_t2509538522 * get_tImgDirect_11() const { return ___tImgDirect_11; }
	inline Texture2D_t2509538522 ** get_address_of_tImgDirect_11() { return &___tImgDirect_11; }
	inline void set_tImgDirect_11(Texture2D_t2509538522 * value)
	{
		___tImgDirect_11 = value;
		Il2CppCodeGenWriteBarrier(&___tImgDirect_11, value);
	}

	inline static int32_t get_offset_of_tLogoNew_12() { return static_cast<int32_t>(offsetof(ExampleWindow_t2922717028, ___tLogoNew_12)); }
	inline Texture2D_t2509538522 * get_tLogoNew_12() const { return ___tLogoNew_12; }
	inline Texture2D_t2509538522 ** get_address_of_tLogoNew_12() { return &___tLogoNew_12; }
	inline void set_tLogoNew_12(Texture2D_t2509538522 * value)
	{
		___tLogoNew_12 = value;
		Il2CppCodeGenWriteBarrier(&___tLogoNew_12, value);
	}

	inline static int32_t get_offset_of_fgoodDog_13() { return static_cast<int32_t>(offsetof(ExampleWindow_t2922717028, ___fgoodDog_13)); }
	inline Font_t1525081276 * get_fgoodDog_13() const { return ___fgoodDog_13; }
	inline Font_t1525081276 ** get_address_of_fgoodDog_13() { return &___fgoodDog_13; }
	inline void set_fgoodDog_13(Font_t1525081276 * value)
	{
		___fgoodDog_13 = value;
		Il2CppCodeGenWriteBarrier(&___fgoodDog_13, value);
	}

	inline static int32_t get_offset_of_fgoodDogSmall_14() { return static_cast<int32_t>(offsetof(ExampleWindow_t2922717028, ___fgoodDogSmall_14)); }
	inline Font_t1525081276 * get_fgoodDogSmall_14() const { return ___fgoodDogSmall_14; }
	inline Font_t1525081276 ** get_address_of_fgoodDogSmall_14() { return &___fgoodDogSmall_14; }
	inline void set_fgoodDogSmall_14(Font_t1525081276 * value)
	{
		___fgoodDogSmall_14 = value;
		Il2CppCodeGenWriteBarrier(&___fgoodDogSmall_14, value);
	}

	inline static int32_t get_offset_of_fTitle_15() { return static_cast<int32_t>(offsetof(ExampleWindow_t2922717028, ___fTitle_15)); }
	inline Font_t1525081276 * get_fTitle_15() const { return ___fTitle_15; }
	inline Font_t1525081276 ** get_address_of_fTitle_15() { return &___fTitle_15; }
	inline void set_fTitle_15(Font_t1525081276 * value)
	{
		___fTitle_15 = value;
		Il2CppCodeGenWriteBarrier(&___fTitle_15, value);
	}

	inline static int32_t get_offset_of_tWhitePixel_16() { return static_cast<int32_t>(offsetof(ExampleWindow_t2922717028, ___tWhitePixel_16)); }
	inline Texture2D_t2509538522 * get_tWhitePixel_16() const { return ___tWhitePixel_16; }
	inline Texture2D_t2509538522 ** get_address_of_tWhitePixel_16() { return &___tWhitePixel_16; }
	inline void set_tWhitePixel_16(Texture2D_t2509538522 * value)
	{
		___tWhitePixel_16 = value;
		Il2CppCodeGenWriteBarrier(&___tWhitePixel_16, value);
	}

	inline static int32_t get_offset_of_tMuffins_17() { return static_cast<int32_t>(offsetof(ExampleWindow_t2922717028, ___tMuffins_17)); }
	inline Texture2D_t2509538522 * get_tMuffins_17() const { return ___tMuffins_17; }
	inline Texture2D_t2509538522 ** get_address_of_tMuffins_17() { return &___tMuffins_17; }
	inline void set_tMuffins_17(Texture2D_t2509538522 * value)
	{
		___tMuffins_17 = value;
		Il2CppCodeGenWriteBarrier(&___tMuffins_17, value);
	}

	inline static int32_t get_offset_of_fName_18() { return static_cast<int32_t>(offsetof(ExampleWindow_t2922717028, ___fName_18)); }
	inline Font_t1525081276 * get_fName_18() const { return ___fName_18; }
	inline Font_t1525081276 ** get_address_of_fName_18() { return &___fName_18; }
	inline void set_fName_18(Font_t1525081276 * value)
	{
		___fName_18 = value;
		Il2CppCodeGenWriteBarrier(&___fName_18, value);
	}

	inline static int32_t get_offset_of_fDesc_19() { return static_cast<int32_t>(offsetof(ExampleWindow_t2922717028, ___fDesc_19)); }
	inline Font_t1525081276 * get_fDesc_19() const { return ___fDesc_19; }
	inline Font_t1525081276 ** get_address_of_fDesc_19() { return &___fDesc_19; }
	inline void set_fDesc_19(Font_t1525081276 * value)
	{
		___fDesc_19 = value;
		Il2CppCodeGenWriteBarrier(&___fDesc_19, value);
	}

	inline static int32_t get_offset_of_fBuy_20() { return static_cast<int32_t>(offsetof(ExampleWindow_t2922717028, ___fBuy_20)); }
	inline Font_t1525081276 * get_fBuy_20() const { return ___fBuy_20; }
	inline Font_t1525081276 ** get_address_of_fBuy_20() { return &___fBuy_20; }
	inline void set_fBuy_20(Font_t1525081276 * value)
	{
		___fBuy_20 = value;
		Il2CppCodeGenWriteBarrier(&___fBuy_20, value);
	}

	inline static int32_t get_offset_of_tBack_21() { return static_cast<int32_t>(offsetof(ExampleWindow_t2922717028, ___tBack_21)); }
	inline Texture2D_t2509538522 * get_tBack_21() const { return ___tBack_21; }
	inline Texture2D_t2509538522 ** get_address_of_tBack_21() { return &___tBack_21; }
	inline void set_tBack_21(Texture2D_t2509538522 * value)
	{
		___tBack_21 = value;
		Il2CppCodeGenWriteBarrier(&___tBack_21, value);
	}

	inline static int32_t get_offset_of_tGetMore_22() { return static_cast<int32_t>(offsetof(ExampleWindow_t2922717028, ___tGetMore_22)); }
	inline Texture2D_t2509538522 * get_tGetMore_22() const { return ___tGetMore_22; }
	inline Texture2D_t2509538522 ** get_address_of_tGetMore_22() { return &___tGetMore_22; }
	inline void set_tGetMore_22(Texture2D_t2509538522 * value)
	{
		___tGetMore_22 = value;
		Il2CppCodeGenWriteBarrier(&___tGetMore_22, value);
	}

	inline static int32_t get_offset_of_tTitle_23() { return static_cast<int32_t>(offsetof(ExampleWindow_t2922717028, ___tTitle_23)); }
	inline Font_t1525081276 * get_tTitle_23() const { return ___tTitle_23; }
	inline Font_t1525081276 ** get_address_of_tTitle_23() { return &___tTitle_23; }
	inline void set_tTitle_23(Font_t1525081276 * value)
	{
		___tTitle_23 = value;
		Il2CppCodeGenWriteBarrier(&___tTitle_23, value);
	}

	inline static int32_t get_offset_of_itemsTextures_24() { return static_cast<int32_t>(offsetof(ExampleWindow_t2922717028, ___itemsTextures_24)); }
	inline Dictionary_2_t4147236426 * get_itemsTextures_24() const { return ___itemsTextures_24; }
	inline Dictionary_2_t4147236426 ** get_address_of_itemsTextures_24() { return &___itemsTextures_24; }
	inline void set_itemsTextures_24(Dictionary_2_t4147236426 * value)
	{
		___itemsTextures_24 = value;
		Il2CppCodeGenWriteBarrier(&___itemsTextures_24, value);
	}

	inline static int32_t get_offset_of_itemsAffordability_25() { return static_cast<int32_t>(offsetof(ExampleWindow_t2922717028, ___itemsAffordability_25)); }
	inline Dictionary_2_t1848703245 * get_itemsAffordability_25() const { return ___itemsAffordability_25; }
	inline Dictionary_2_t1848703245 ** get_address_of_itemsAffordability_25() { return &___itemsAffordability_25; }
	inline void set_itemsAffordability_25(Dictionary_2_t1848703245 * value)
	{
		___itemsAffordability_25 = value;
		Il2CppCodeGenWriteBarrier(&___itemsAffordability_25, value);
	}

	inline static int32_t get_offset_of_firstLaunchReward_26() { return static_cast<int32_t>(offsetof(ExampleWindow_t2922717028, ___firstLaunchReward_26)); }
	inline Reward_t1570165988 * get_firstLaunchReward_26() const { return ___firstLaunchReward_26; }
	inline Reward_t1570165988 ** get_address_of_firstLaunchReward_26() { return &___firstLaunchReward_26; }
	inline void set_firstLaunchReward_26(Reward_t1570165988 * value)
	{
		___firstLaunchReward_26 = value;
		Il2CppCodeGenWriteBarrier(&___firstLaunchReward_26, value);
	}
};

struct ExampleWindow_t2922717028_StaticFields
{
public:
	// Soomla.Store.Example.ExampleWindow Soomla.Store.Example.ExampleWindow::instance
	ExampleWindow_t2922717028 * ___instance_2;
	// System.Boolean Soomla.Store.Example.ExampleWindow::isVisible
	bool ___isVisible_10;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(ExampleWindow_t2922717028_StaticFields, ___instance_2)); }
	inline ExampleWindow_t2922717028 * get_instance_2() const { return ___instance_2; }
	inline ExampleWindow_t2922717028 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(ExampleWindow_t2922717028 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}

	inline static int32_t get_offset_of_isVisible_10() { return static_cast<int32_t>(offsetof(ExampleWindow_t2922717028_StaticFields, ___isVisible_10)); }
	inline bool get_isVisible_10() const { return ___isVisible_10; }
	inline bool* get_address_of_isVisible_10() { return &___isVisible_10; }
	inline void set_isVisible_10(bool value)
	{
		___isVisible_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
