#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// peopleGenerating
struct peopleGenerating_t4061532385;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UnityEngine.Canvas
struct Canvas_t3534013893;
// UnityEngine.UI.Text
struct Text_t3286458198;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// ADManager
struct ADManager_t3526476298;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// wholeMap
struct  wholeMap_t2327764005  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 wholeMap::level
	int32_t ___level_2;
	// peopleGenerating wholeMap::people
	peopleGenerating_t4061532385 * ___people_3;
	// System.Int32 wholeMap::number
	int32_t ___number_4;
	// System.Int32 wholeMap::peopleInscene
	int32_t ___peopleInscene_5;
	// System.Collections.IEnumerator wholeMap::coroutine
	Il2CppObject * ___coroutine_6;
	// UnityEngine.Canvas wholeMap::canvas
	Canvas_t3534013893 * ___canvas_7;
	// System.Boolean wholeMap::startLevel
	bool ___startLevel_8;
	// System.Boolean wholeMap::startNextLevel
	bool ___startNextLevel_9;
	// System.Single wholeMap::velocity
	float ___velocity_10;
	// System.Single wholeMap::standard
	float ___standard_11;
	// System.Single wholeMap::time
	float ___time_12;
	// System.Single wholeMap::goalTime
	float ___goalTime_13;
	// System.Boolean wholeMap::firstTime
	bool ___firstTime_14;
	// System.Boolean wholeMap::destinationTime
	bool ___destinationTime_15;
	// System.Int32 wholeMap::peopleAlreadyAppear
	int32_t ___peopleAlreadyAppear_16;
	// System.Int32 wholeMap::lifeNumber
	int32_t ___lifeNumber_17;
	// System.Int32 wholeMap::peopleGenerated
	int32_t ___peopleGenerated_18;
	// System.Boolean wholeMap::startNext
	bool ___startNext_19;
	// UnityEngine.UI.Text wholeMap::scoreText
	Text_t3286458198 * ___scoreText_20;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> wholeMap::hearts
	List_1_t514686775 * ___hearts_21;
	// UnityEngine.UI.Text wholeMap::starText
	Text_t3286458198 * ___starText_22;
	// System.Int32 wholeMap::startCounts
	int32_t ___startCounts_23;
	// UnityEngine.UI.Text wholeMap::result
	Text_t3286458198 * ___result_24;
	// UnityEngine.UI.Text wholeMap::resultStarText
	Text_t3286458198 * ___resultStarText_25;
	// System.Single wholeMap::levelGeneratingTime
	float ___levelGeneratingTime_26;
	// System.Boolean wholeMap::nextLevelStart
	bool ___nextLevelStart_27;
	// System.Single wholeMap::timeShow
	float ___timeShow_28;
	// System.Int32 wholeMap::timeResult
	int32_t ___timeResult_29;
	// System.Int32 wholeMap::numer2
	int32_t ___numer2_30;
	// UnityEngine.UI.Text wholeMap::BestScore
	Text_t3286458198 * ___BestScore_31;
	// UnityEngine.GameObject wholeMap::soundButtonON
	GameObject_t4012695102 * ___soundButtonON_32;
	// UnityEngine.GameObject wholeMap::soundButtonOFF
	GameObject_t4012695102 * ___soundButtonOFF_33;
	// UnityEngine.GameObject wholeMap::effctButtonON
	GameObject_t4012695102 * ___effctButtonON_34;
	// UnityEngine.GameObject wholeMap::effctButtonOFF
	GameObject_t4012695102 * ___effctButtonOFF_35;
	// System.Int32 wholeMap::audioIsOff
	int32_t ___audioIsOff_36;
	// System.Int32 wholeMap::effectisoff
	int32_t ___effectisoff_37;
	// UnityEngine.Canvas wholeMap::soundCanvas
	Canvas_t3534013893 * ___soundCanvas_38;
	// UnityEngine.AudioSource wholeMap::backgroundMusic
	AudioSource_t3628549054 * ___backgroundMusic_39;
	// UnityEngine.AudioSource wholeMap::buttonSound
	AudioSource_t3628549054 * ___buttonSound_40;
	// ADManager wholeMap::ad
	ADManager_t3526476298 * ___ad_41;
	// UnityEngine.AudioClip wholeMap::buttonClip
	AudioClip_t3714538611 * ___buttonClip_42;
	// UnityEngine.AudioClip wholeMap::gameOverClip
	AudioClip_t3714538611 * ___gameOverClip_43;
	// UnityEngine.AudioClip wholeMap::onceClip
	AudioClip_t3714538611 * ___onceClip_44;

public:
	inline static int32_t get_offset_of_level_2() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___level_2)); }
	inline int32_t get_level_2() const { return ___level_2; }
	inline int32_t* get_address_of_level_2() { return &___level_2; }
	inline void set_level_2(int32_t value)
	{
		___level_2 = value;
	}

	inline static int32_t get_offset_of_people_3() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___people_3)); }
	inline peopleGenerating_t4061532385 * get_people_3() const { return ___people_3; }
	inline peopleGenerating_t4061532385 ** get_address_of_people_3() { return &___people_3; }
	inline void set_people_3(peopleGenerating_t4061532385 * value)
	{
		___people_3 = value;
		Il2CppCodeGenWriteBarrier(&___people_3, value);
	}

	inline static int32_t get_offset_of_number_4() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___number_4)); }
	inline int32_t get_number_4() const { return ___number_4; }
	inline int32_t* get_address_of_number_4() { return &___number_4; }
	inline void set_number_4(int32_t value)
	{
		___number_4 = value;
	}

	inline static int32_t get_offset_of_peopleInscene_5() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___peopleInscene_5)); }
	inline int32_t get_peopleInscene_5() const { return ___peopleInscene_5; }
	inline int32_t* get_address_of_peopleInscene_5() { return &___peopleInscene_5; }
	inline void set_peopleInscene_5(int32_t value)
	{
		___peopleInscene_5 = value;
	}

	inline static int32_t get_offset_of_coroutine_6() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___coroutine_6)); }
	inline Il2CppObject * get_coroutine_6() const { return ___coroutine_6; }
	inline Il2CppObject ** get_address_of_coroutine_6() { return &___coroutine_6; }
	inline void set_coroutine_6(Il2CppObject * value)
	{
		___coroutine_6 = value;
		Il2CppCodeGenWriteBarrier(&___coroutine_6, value);
	}

	inline static int32_t get_offset_of_canvas_7() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___canvas_7)); }
	inline Canvas_t3534013893 * get_canvas_7() const { return ___canvas_7; }
	inline Canvas_t3534013893 ** get_address_of_canvas_7() { return &___canvas_7; }
	inline void set_canvas_7(Canvas_t3534013893 * value)
	{
		___canvas_7 = value;
		Il2CppCodeGenWriteBarrier(&___canvas_7, value);
	}

	inline static int32_t get_offset_of_startLevel_8() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___startLevel_8)); }
	inline bool get_startLevel_8() const { return ___startLevel_8; }
	inline bool* get_address_of_startLevel_8() { return &___startLevel_8; }
	inline void set_startLevel_8(bool value)
	{
		___startLevel_8 = value;
	}

	inline static int32_t get_offset_of_startNextLevel_9() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___startNextLevel_9)); }
	inline bool get_startNextLevel_9() const { return ___startNextLevel_9; }
	inline bool* get_address_of_startNextLevel_9() { return &___startNextLevel_9; }
	inline void set_startNextLevel_9(bool value)
	{
		___startNextLevel_9 = value;
	}

	inline static int32_t get_offset_of_velocity_10() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___velocity_10)); }
	inline float get_velocity_10() const { return ___velocity_10; }
	inline float* get_address_of_velocity_10() { return &___velocity_10; }
	inline void set_velocity_10(float value)
	{
		___velocity_10 = value;
	}

	inline static int32_t get_offset_of_standard_11() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___standard_11)); }
	inline float get_standard_11() const { return ___standard_11; }
	inline float* get_address_of_standard_11() { return &___standard_11; }
	inline void set_standard_11(float value)
	{
		___standard_11 = value;
	}

	inline static int32_t get_offset_of_time_12() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___time_12)); }
	inline float get_time_12() const { return ___time_12; }
	inline float* get_address_of_time_12() { return &___time_12; }
	inline void set_time_12(float value)
	{
		___time_12 = value;
	}

	inline static int32_t get_offset_of_goalTime_13() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___goalTime_13)); }
	inline float get_goalTime_13() const { return ___goalTime_13; }
	inline float* get_address_of_goalTime_13() { return &___goalTime_13; }
	inline void set_goalTime_13(float value)
	{
		___goalTime_13 = value;
	}

	inline static int32_t get_offset_of_firstTime_14() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___firstTime_14)); }
	inline bool get_firstTime_14() const { return ___firstTime_14; }
	inline bool* get_address_of_firstTime_14() { return &___firstTime_14; }
	inline void set_firstTime_14(bool value)
	{
		___firstTime_14 = value;
	}

	inline static int32_t get_offset_of_destinationTime_15() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___destinationTime_15)); }
	inline bool get_destinationTime_15() const { return ___destinationTime_15; }
	inline bool* get_address_of_destinationTime_15() { return &___destinationTime_15; }
	inline void set_destinationTime_15(bool value)
	{
		___destinationTime_15 = value;
	}

	inline static int32_t get_offset_of_peopleAlreadyAppear_16() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___peopleAlreadyAppear_16)); }
	inline int32_t get_peopleAlreadyAppear_16() const { return ___peopleAlreadyAppear_16; }
	inline int32_t* get_address_of_peopleAlreadyAppear_16() { return &___peopleAlreadyAppear_16; }
	inline void set_peopleAlreadyAppear_16(int32_t value)
	{
		___peopleAlreadyAppear_16 = value;
	}

	inline static int32_t get_offset_of_lifeNumber_17() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___lifeNumber_17)); }
	inline int32_t get_lifeNumber_17() const { return ___lifeNumber_17; }
	inline int32_t* get_address_of_lifeNumber_17() { return &___lifeNumber_17; }
	inline void set_lifeNumber_17(int32_t value)
	{
		___lifeNumber_17 = value;
	}

	inline static int32_t get_offset_of_peopleGenerated_18() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___peopleGenerated_18)); }
	inline int32_t get_peopleGenerated_18() const { return ___peopleGenerated_18; }
	inline int32_t* get_address_of_peopleGenerated_18() { return &___peopleGenerated_18; }
	inline void set_peopleGenerated_18(int32_t value)
	{
		___peopleGenerated_18 = value;
	}

	inline static int32_t get_offset_of_startNext_19() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___startNext_19)); }
	inline bool get_startNext_19() const { return ___startNext_19; }
	inline bool* get_address_of_startNext_19() { return &___startNext_19; }
	inline void set_startNext_19(bool value)
	{
		___startNext_19 = value;
	}

	inline static int32_t get_offset_of_scoreText_20() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___scoreText_20)); }
	inline Text_t3286458198 * get_scoreText_20() const { return ___scoreText_20; }
	inline Text_t3286458198 ** get_address_of_scoreText_20() { return &___scoreText_20; }
	inline void set_scoreText_20(Text_t3286458198 * value)
	{
		___scoreText_20 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_20, value);
	}

	inline static int32_t get_offset_of_hearts_21() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___hearts_21)); }
	inline List_1_t514686775 * get_hearts_21() const { return ___hearts_21; }
	inline List_1_t514686775 ** get_address_of_hearts_21() { return &___hearts_21; }
	inline void set_hearts_21(List_1_t514686775 * value)
	{
		___hearts_21 = value;
		Il2CppCodeGenWriteBarrier(&___hearts_21, value);
	}

	inline static int32_t get_offset_of_starText_22() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___starText_22)); }
	inline Text_t3286458198 * get_starText_22() const { return ___starText_22; }
	inline Text_t3286458198 ** get_address_of_starText_22() { return &___starText_22; }
	inline void set_starText_22(Text_t3286458198 * value)
	{
		___starText_22 = value;
		Il2CppCodeGenWriteBarrier(&___starText_22, value);
	}

	inline static int32_t get_offset_of_startCounts_23() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___startCounts_23)); }
	inline int32_t get_startCounts_23() const { return ___startCounts_23; }
	inline int32_t* get_address_of_startCounts_23() { return &___startCounts_23; }
	inline void set_startCounts_23(int32_t value)
	{
		___startCounts_23 = value;
	}

	inline static int32_t get_offset_of_result_24() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___result_24)); }
	inline Text_t3286458198 * get_result_24() const { return ___result_24; }
	inline Text_t3286458198 ** get_address_of_result_24() { return &___result_24; }
	inline void set_result_24(Text_t3286458198 * value)
	{
		___result_24 = value;
		Il2CppCodeGenWriteBarrier(&___result_24, value);
	}

	inline static int32_t get_offset_of_resultStarText_25() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___resultStarText_25)); }
	inline Text_t3286458198 * get_resultStarText_25() const { return ___resultStarText_25; }
	inline Text_t3286458198 ** get_address_of_resultStarText_25() { return &___resultStarText_25; }
	inline void set_resultStarText_25(Text_t3286458198 * value)
	{
		___resultStarText_25 = value;
		Il2CppCodeGenWriteBarrier(&___resultStarText_25, value);
	}

	inline static int32_t get_offset_of_levelGeneratingTime_26() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___levelGeneratingTime_26)); }
	inline float get_levelGeneratingTime_26() const { return ___levelGeneratingTime_26; }
	inline float* get_address_of_levelGeneratingTime_26() { return &___levelGeneratingTime_26; }
	inline void set_levelGeneratingTime_26(float value)
	{
		___levelGeneratingTime_26 = value;
	}

	inline static int32_t get_offset_of_nextLevelStart_27() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___nextLevelStart_27)); }
	inline bool get_nextLevelStart_27() const { return ___nextLevelStart_27; }
	inline bool* get_address_of_nextLevelStart_27() { return &___nextLevelStart_27; }
	inline void set_nextLevelStart_27(bool value)
	{
		___nextLevelStart_27 = value;
	}

	inline static int32_t get_offset_of_timeShow_28() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___timeShow_28)); }
	inline float get_timeShow_28() const { return ___timeShow_28; }
	inline float* get_address_of_timeShow_28() { return &___timeShow_28; }
	inline void set_timeShow_28(float value)
	{
		___timeShow_28 = value;
	}

	inline static int32_t get_offset_of_timeResult_29() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___timeResult_29)); }
	inline int32_t get_timeResult_29() const { return ___timeResult_29; }
	inline int32_t* get_address_of_timeResult_29() { return &___timeResult_29; }
	inline void set_timeResult_29(int32_t value)
	{
		___timeResult_29 = value;
	}

	inline static int32_t get_offset_of_numer2_30() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___numer2_30)); }
	inline int32_t get_numer2_30() const { return ___numer2_30; }
	inline int32_t* get_address_of_numer2_30() { return &___numer2_30; }
	inline void set_numer2_30(int32_t value)
	{
		___numer2_30 = value;
	}

	inline static int32_t get_offset_of_BestScore_31() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___BestScore_31)); }
	inline Text_t3286458198 * get_BestScore_31() const { return ___BestScore_31; }
	inline Text_t3286458198 ** get_address_of_BestScore_31() { return &___BestScore_31; }
	inline void set_BestScore_31(Text_t3286458198 * value)
	{
		___BestScore_31 = value;
		Il2CppCodeGenWriteBarrier(&___BestScore_31, value);
	}

	inline static int32_t get_offset_of_soundButtonON_32() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___soundButtonON_32)); }
	inline GameObject_t4012695102 * get_soundButtonON_32() const { return ___soundButtonON_32; }
	inline GameObject_t4012695102 ** get_address_of_soundButtonON_32() { return &___soundButtonON_32; }
	inline void set_soundButtonON_32(GameObject_t4012695102 * value)
	{
		___soundButtonON_32 = value;
		Il2CppCodeGenWriteBarrier(&___soundButtonON_32, value);
	}

	inline static int32_t get_offset_of_soundButtonOFF_33() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___soundButtonOFF_33)); }
	inline GameObject_t4012695102 * get_soundButtonOFF_33() const { return ___soundButtonOFF_33; }
	inline GameObject_t4012695102 ** get_address_of_soundButtonOFF_33() { return &___soundButtonOFF_33; }
	inline void set_soundButtonOFF_33(GameObject_t4012695102 * value)
	{
		___soundButtonOFF_33 = value;
		Il2CppCodeGenWriteBarrier(&___soundButtonOFF_33, value);
	}

	inline static int32_t get_offset_of_effctButtonON_34() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___effctButtonON_34)); }
	inline GameObject_t4012695102 * get_effctButtonON_34() const { return ___effctButtonON_34; }
	inline GameObject_t4012695102 ** get_address_of_effctButtonON_34() { return &___effctButtonON_34; }
	inline void set_effctButtonON_34(GameObject_t4012695102 * value)
	{
		___effctButtonON_34 = value;
		Il2CppCodeGenWriteBarrier(&___effctButtonON_34, value);
	}

	inline static int32_t get_offset_of_effctButtonOFF_35() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___effctButtonOFF_35)); }
	inline GameObject_t4012695102 * get_effctButtonOFF_35() const { return ___effctButtonOFF_35; }
	inline GameObject_t4012695102 ** get_address_of_effctButtonOFF_35() { return &___effctButtonOFF_35; }
	inline void set_effctButtonOFF_35(GameObject_t4012695102 * value)
	{
		___effctButtonOFF_35 = value;
		Il2CppCodeGenWriteBarrier(&___effctButtonOFF_35, value);
	}

	inline static int32_t get_offset_of_audioIsOff_36() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___audioIsOff_36)); }
	inline int32_t get_audioIsOff_36() const { return ___audioIsOff_36; }
	inline int32_t* get_address_of_audioIsOff_36() { return &___audioIsOff_36; }
	inline void set_audioIsOff_36(int32_t value)
	{
		___audioIsOff_36 = value;
	}

	inline static int32_t get_offset_of_effectisoff_37() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___effectisoff_37)); }
	inline int32_t get_effectisoff_37() const { return ___effectisoff_37; }
	inline int32_t* get_address_of_effectisoff_37() { return &___effectisoff_37; }
	inline void set_effectisoff_37(int32_t value)
	{
		___effectisoff_37 = value;
	}

	inline static int32_t get_offset_of_soundCanvas_38() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___soundCanvas_38)); }
	inline Canvas_t3534013893 * get_soundCanvas_38() const { return ___soundCanvas_38; }
	inline Canvas_t3534013893 ** get_address_of_soundCanvas_38() { return &___soundCanvas_38; }
	inline void set_soundCanvas_38(Canvas_t3534013893 * value)
	{
		___soundCanvas_38 = value;
		Il2CppCodeGenWriteBarrier(&___soundCanvas_38, value);
	}

	inline static int32_t get_offset_of_backgroundMusic_39() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___backgroundMusic_39)); }
	inline AudioSource_t3628549054 * get_backgroundMusic_39() const { return ___backgroundMusic_39; }
	inline AudioSource_t3628549054 ** get_address_of_backgroundMusic_39() { return &___backgroundMusic_39; }
	inline void set_backgroundMusic_39(AudioSource_t3628549054 * value)
	{
		___backgroundMusic_39 = value;
		Il2CppCodeGenWriteBarrier(&___backgroundMusic_39, value);
	}

	inline static int32_t get_offset_of_buttonSound_40() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___buttonSound_40)); }
	inline AudioSource_t3628549054 * get_buttonSound_40() const { return ___buttonSound_40; }
	inline AudioSource_t3628549054 ** get_address_of_buttonSound_40() { return &___buttonSound_40; }
	inline void set_buttonSound_40(AudioSource_t3628549054 * value)
	{
		___buttonSound_40 = value;
		Il2CppCodeGenWriteBarrier(&___buttonSound_40, value);
	}

	inline static int32_t get_offset_of_ad_41() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___ad_41)); }
	inline ADManager_t3526476298 * get_ad_41() const { return ___ad_41; }
	inline ADManager_t3526476298 ** get_address_of_ad_41() { return &___ad_41; }
	inline void set_ad_41(ADManager_t3526476298 * value)
	{
		___ad_41 = value;
		Il2CppCodeGenWriteBarrier(&___ad_41, value);
	}

	inline static int32_t get_offset_of_buttonClip_42() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___buttonClip_42)); }
	inline AudioClip_t3714538611 * get_buttonClip_42() const { return ___buttonClip_42; }
	inline AudioClip_t3714538611 ** get_address_of_buttonClip_42() { return &___buttonClip_42; }
	inline void set_buttonClip_42(AudioClip_t3714538611 * value)
	{
		___buttonClip_42 = value;
		Il2CppCodeGenWriteBarrier(&___buttonClip_42, value);
	}

	inline static int32_t get_offset_of_gameOverClip_43() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___gameOverClip_43)); }
	inline AudioClip_t3714538611 * get_gameOverClip_43() const { return ___gameOverClip_43; }
	inline AudioClip_t3714538611 ** get_address_of_gameOverClip_43() { return &___gameOverClip_43; }
	inline void set_gameOverClip_43(AudioClip_t3714538611 * value)
	{
		___gameOverClip_43 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverClip_43, value);
	}

	inline static int32_t get_offset_of_onceClip_44() { return static_cast<int32_t>(offsetof(wholeMap_t2327764005, ___onceClip_44)); }
	inline AudioClip_t3714538611 * get_onceClip_44() const { return ___onceClip_44; }
	inline AudioClip_t3714538611 ** get_address_of_onceClip_44() { return &___onceClip_44; }
	inline void set_onceClip_44(AudioClip_t3714538611 * value)
	{
		___onceClip_44 = value;
		Il2CppCodeGenWriteBarrier(&___onceClip_44, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
