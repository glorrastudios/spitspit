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
// wholeMap
struct wholeMap_t2327764005;
// player4
struct player4_t3801399667;
// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// peopleGenerating
struct  peopleGenerating_t4061532385  : public MonoBehaviour_t3012272455
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> peopleGenerating::people
	List_1_t514686775 * ___people_2;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> peopleGenerating::unlockPeople
	List_1_t514686775 * ___unlockPeople_3;
	// System.Int32 peopleGenerating::number
	int32_t ___number_4;
	// wholeMap peopleGenerating::wholeController
	wholeMap_t2327764005 * ___wholeController_5;
	// System.Int32 peopleGenerating::addNumber
	int32_t ___addNumber_6;
	// System.Boolean peopleGenerating::newLevel
	bool ___newLevel_7;
	// System.Int32 peopleGenerating::peopleNumberInLevel
	int32_t ___peopleNumberInLevel_8;
	// System.Int32 peopleGenerating::levelAddPeople
	int32_t ___levelAddPeople_9;
	// System.Int32 peopleGenerating::standardPeopleNumber
	int32_t ___standardPeopleNumber_10;
	// System.Boolean peopleGenerating::continueGenerate
	bool ___continueGenerate_11;
	// player4 peopleGenerating::player
	player4_t3801399667 * ___player_12;
	// System.Single peopleGenerating::nextShoot
	float ___nextShoot_13;
	// System.Single peopleGenerating::waittigTime
	float ___waittigTime_14;
	// System.Boolean peopleGenerating::isStarting
	bool ___isStarting_15;
	// UnityEngine.UI.Text peopleGenerating::text
	Text_t3286458198 * ___text_16;

public:
	inline static int32_t get_offset_of_people_2() { return static_cast<int32_t>(offsetof(peopleGenerating_t4061532385, ___people_2)); }
	inline List_1_t514686775 * get_people_2() const { return ___people_2; }
	inline List_1_t514686775 ** get_address_of_people_2() { return &___people_2; }
	inline void set_people_2(List_1_t514686775 * value)
	{
		___people_2 = value;
		Il2CppCodeGenWriteBarrier(&___people_2, value);
	}

	inline static int32_t get_offset_of_unlockPeople_3() { return static_cast<int32_t>(offsetof(peopleGenerating_t4061532385, ___unlockPeople_3)); }
	inline List_1_t514686775 * get_unlockPeople_3() const { return ___unlockPeople_3; }
	inline List_1_t514686775 ** get_address_of_unlockPeople_3() { return &___unlockPeople_3; }
	inline void set_unlockPeople_3(List_1_t514686775 * value)
	{
		___unlockPeople_3 = value;
		Il2CppCodeGenWriteBarrier(&___unlockPeople_3, value);
	}

	inline static int32_t get_offset_of_number_4() { return static_cast<int32_t>(offsetof(peopleGenerating_t4061532385, ___number_4)); }
	inline int32_t get_number_4() const { return ___number_4; }
	inline int32_t* get_address_of_number_4() { return &___number_4; }
	inline void set_number_4(int32_t value)
	{
		___number_4 = value;
	}

	inline static int32_t get_offset_of_wholeController_5() { return static_cast<int32_t>(offsetof(peopleGenerating_t4061532385, ___wholeController_5)); }
	inline wholeMap_t2327764005 * get_wholeController_5() const { return ___wholeController_5; }
	inline wholeMap_t2327764005 ** get_address_of_wholeController_5() { return &___wholeController_5; }
	inline void set_wholeController_5(wholeMap_t2327764005 * value)
	{
		___wholeController_5 = value;
		Il2CppCodeGenWriteBarrier(&___wholeController_5, value);
	}

	inline static int32_t get_offset_of_addNumber_6() { return static_cast<int32_t>(offsetof(peopleGenerating_t4061532385, ___addNumber_6)); }
	inline int32_t get_addNumber_6() const { return ___addNumber_6; }
	inline int32_t* get_address_of_addNumber_6() { return &___addNumber_6; }
	inline void set_addNumber_6(int32_t value)
	{
		___addNumber_6 = value;
	}

	inline static int32_t get_offset_of_newLevel_7() { return static_cast<int32_t>(offsetof(peopleGenerating_t4061532385, ___newLevel_7)); }
	inline bool get_newLevel_7() const { return ___newLevel_7; }
	inline bool* get_address_of_newLevel_7() { return &___newLevel_7; }
	inline void set_newLevel_7(bool value)
	{
		___newLevel_7 = value;
	}

	inline static int32_t get_offset_of_peopleNumberInLevel_8() { return static_cast<int32_t>(offsetof(peopleGenerating_t4061532385, ___peopleNumberInLevel_8)); }
	inline int32_t get_peopleNumberInLevel_8() const { return ___peopleNumberInLevel_8; }
	inline int32_t* get_address_of_peopleNumberInLevel_8() { return &___peopleNumberInLevel_8; }
	inline void set_peopleNumberInLevel_8(int32_t value)
	{
		___peopleNumberInLevel_8 = value;
	}

	inline static int32_t get_offset_of_levelAddPeople_9() { return static_cast<int32_t>(offsetof(peopleGenerating_t4061532385, ___levelAddPeople_9)); }
	inline int32_t get_levelAddPeople_9() const { return ___levelAddPeople_9; }
	inline int32_t* get_address_of_levelAddPeople_9() { return &___levelAddPeople_9; }
	inline void set_levelAddPeople_9(int32_t value)
	{
		___levelAddPeople_9 = value;
	}

	inline static int32_t get_offset_of_standardPeopleNumber_10() { return static_cast<int32_t>(offsetof(peopleGenerating_t4061532385, ___standardPeopleNumber_10)); }
	inline int32_t get_standardPeopleNumber_10() const { return ___standardPeopleNumber_10; }
	inline int32_t* get_address_of_standardPeopleNumber_10() { return &___standardPeopleNumber_10; }
	inline void set_standardPeopleNumber_10(int32_t value)
	{
		___standardPeopleNumber_10 = value;
	}

	inline static int32_t get_offset_of_continueGenerate_11() { return static_cast<int32_t>(offsetof(peopleGenerating_t4061532385, ___continueGenerate_11)); }
	inline bool get_continueGenerate_11() const { return ___continueGenerate_11; }
	inline bool* get_address_of_continueGenerate_11() { return &___continueGenerate_11; }
	inline void set_continueGenerate_11(bool value)
	{
		___continueGenerate_11 = value;
	}

	inline static int32_t get_offset_of_player_12() { return static_cast<int32_t>(offsetof(peopleGenerating_t4061532385, ___player_12)); }
	inline player4_t3801399667 * get_player_12() const { return ___player_12; }
	inline player4_t3801399667 ** get_address_of_player_12() { return &___player_12; }
	inline void set_player_12(player4_t3801399667 * value)
	{
		___player_12 = value;
		Il2CppCodeGenWriteBarrier(&___player_12, value);
	}

	inline static int32_t get_offset_of_nextShoot_13() { return static_cast<int32_t>(offsetof(peopleGenerating_t4061532385, ___nextShoot_13)); }
	inline float get_nextShoot_13() const { return ___nextShoot_13; }
	inline float* get_address_of_nextShoot_13() { return &___nextShoot_13; }
	inline void set_nextShoot_13(float value)
	{
		___nextShoot_13 = value;
	}

	inline static int32_t get_offset_of_waittigTime_14() { return static_cast<int32_t>(offsetof(peopleGenerating_t4061532385, ___waittigTime_14)); }
	inline float get_waittigTime_14() const { return ___waittigTime_14; }
	inline float* get_address_of_waittigTime_14() { return &___waittigTime_14; }
	inline void set_waittigTime_14(float value)
	{
		___waittigTime_14 = value;
	}

	inline static int32_t get_offset_of_isStarting_15() { return static_cast<int32_t>(offsetof(peopleGenerating_t4061532385, ___isStarting_15)); }
	inline bool get_isStarting_15() const { return ___isStarting_15; }
	inline bool* get_address_of_isStarting_15() { return &___isStarting_15; }
	inline void set_isStarting_15(bool value)
	{
		___isStarting_15 = value;
	}

	inline static int32_t get_offset_of_text_16() { return static_cast<int32_t>(offsetof(peopleGenerating_t4061532385, ___text_16)); }
	inline Text_t3286458198 * get_text_16() const { return ___text_16; }
	inline Text_t3286458198 ** get_address_of_text_16() { return &___text_16; }
	inline void set_text_16(Text_t3286458198 * value)
	{
		___text_16 = value;
		Il2CppCodeGenWriteBarrier(&___text_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
