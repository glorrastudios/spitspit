#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;
// player4
struct player4_t3801399667;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;
// wholeMap
struct wholeMap_t2327764005;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// tiles
struct  tiles_t110363525  : public MonoBehaviour_t3012272455
{
public:
	// System.Single tiles::leftside
	float ___leftside_2;
	// System.Single tiles::rightside
	float ___rightside_3;
	// System.Single tiles::topside
	float ___topside_4;
	// System.Single tiles::bottomside
	float ___bottomside_5;
	// System.Int32 tiles::number
	int32_t ___number_6;
	// UnityEngine.Transform tiles::trans
	Transform_t284553113 * ___trans_7;
	// player4 tiles::player
	player4_t3801399667 * ___player_8;
	// System.Single tiles::leftBorder
	float ___leftBorder_9;
	// System.Single tiles::rightBorder
	float ___rightBorder_10;
	// System.Single tiles::topBorder
	float ___topBorder_11;
	// System.Single tiles::bottomBorder
	float ___bottomBorder_12;
	// System.Boolean tiles::move
	bool ___move_13;
	// System.Int32 tiles::length
	int32_t ___length_14;
	// System.Single tiles::standard
	float ___standard_15;
	// System.Int32 tiles::number2
	int32_t ___number2_16;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> tiles::items
	List_1_t514686775 * ___items_17;
	// System.Int32 tiles::numberInGroup
	int32_t ___numberInGroup_18;
	// wholeMap tiles::controller
	wholeMap_t2327764005 * ___controller_19;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> tiles::obstacles
	List_1_t514686775 * ___obstacles_20;
	// System.Int32 tiles::addnewObstaclesLevel
	int32_t ___addnewObstaclesLevel_21;
	// System.Int32 tiles::addNumber
	int32_t ___addNumber_22;
	// System.Int32 tiles::addnewOnstaclesnumber
	int32_t ___addnewOnstaclesnumber_23;
	// System.Int32 tiles::addObstacleAmount
	int32_t ___addObstacleAmount_24;
	// UnityEngine.Vector3 tiles::lastPosition
	Vector3_t3525329789  ___lastPosition_25;
	// System.Single tiles::maxOffset
	float ___maxOffset_26;
	// UnityEngine.Vector3 tiles::lastPosition2
	Vector3_t3525329789  ___lastPosition2_27;
	// System.Single tiles::maxXoffset
	float ___maxXoffset_28;
	// System.Single tiles::lastBorderP
	float ___lastBorderP_29;
	// UnityEngine.GameObject tiles::stars
	GameObject_t4012695102 * ___stars_30;
	// System.Boolean tiles::nextLevelStart
	bool ___nextLevelStart_31;
	// System.Int32 tiles::childNumber
	int32_t ___childNumber_32;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> tiles::borderObjects
	List_1_t514686775 * ___borderObjects_33;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> tiles::borderObjs
	List_1_t514686775 * ___borderObjs_34;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> tiles::powerUps
	List_1_t514686775 * ___powerUps_35;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> tiles::powers
	List_1_t514686775 * ___powers_36;
	// System.Boolean tiles::hasPowerups
	bool ___hasPowerups_37;
	// System.Int32 tiles::addTimes
	int32_t ___addTimes_38;
	// System.Int32 tiles::addLevel
	int32_t ___addLevel_39;
	// System.Int32 tiles::alreadyAddIndex
	int32_t ___alreadyAddIndex_40;
	// System.Single tiles::holdTime
	float ___holdTime_41;
	// System.Boolean tiles::alreadyDestoryed
	bool ___alreadyDestoryed_42;
	// System.Single tiles::nextPower
	float ___nextPower_43;
	// System.Boolean tiles::isStarting
	bool ___isStarting_44;
	// UnityEngine.GameObject tiles::balckHole
	GameObject_t4012695102 * ___balckHole_45;

public:
	inline static int32_t get_offset_of_leftside_2() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___leftside_2)); }
	inline float get_leftside_2() const { return ___leftside_2; }
	inline float* get_address_of_leftside_2() { return &___leftside_2; }
	inline void set_leftside_2(float value)
	{
		___leftside_2 = value;
	}

	inline static int32_t get_offset_of_rightside_3() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___rightside_3)); }
	inline float get_rightside_3() const { return ___rightside_3; }
	inline float* get_address_of_rightside_3() { return &___rightside_3; }
	inline void set_rightside_3(float value)
	{
		___rightside_3 = value;
	}

	inline static int32_t get_offset_of_topside_4() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___topside_4)); }
	inline float get_topside_4() const { return ___topside_4; }
	inline float* get_address_of_topside_4() { return &___topside_4; }
	inline void set_topside_4(float value)
	{
		___topside_4 = value;
	}

	inline static int32_t get_offset_of_bottomside_5() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___bottomside_5)); }
	inline float get_bottomside_5() const { return ___bottomside_5; }
	inline float* get_address_of_bottomside_5() { return &___bottomside_5; }
	inline void set_bottomside_5(float value)
	{
		___bottomside_5 = value;
	}

	inline static int32_t get_offset_of_number_6() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___number_6)); }
	inline int32_t get_number_6() const { return ___number_6; }
	inline int32_t* get_address_of_number_6() { return &___number_6; }
	inline void set_number_6(int32_t value)
	{
		___number_6 = value;
	}

	inline static int32_t get_offset_of_trans_7() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___trans_7)); }
	inline Transform_t284553113 * get_trans_7() const { return ___trans_7; }
	inline Transform_t284553113 ** get_address_of_trans_7() { return &___trans_7; }
	inline void set_trans_7(Transform_t284553113 * value)
	{
		___trans_7 = value;
		Il2CppCodeGenWriteBarrier(&___trans_7, value);
	}

	inline static int32_t get_offset_of_player_8() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___player_8)); }
	inline player4_t3801399667 * get_player_8() const { return ___player_8; }
	inline player4_t3801399667 ** get_address_of_player_8() { return &___player_8; }
	inline void set_player_8(player4_t3801399667 * value)
	{
		___player_8 = value;
		Il2CppCodeGenWriteBarrier(&___player_8, value);
	}

	inline static int32_t get_offset_of_leftBorder_9() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___leftBorder_9)); }
	inline float get_leftBorder_9() const { return ___leftBorder_9; }
	inline float* get_address_of_leftBorder_9() { return &___leftBorder_9; }
	inline void set_leftBorder_9(float value)
	{
		___leftBorder_9 = value;
	}

	inline static int32_t get_offset_of_rightBorder_10() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___rightBorder_10)); }
	inline float get_rightBorder_10() const { return ___rightBorder_10; }
	inline float* get_address_of_rightBorder_10() { return &___rightBorder_10; }
	inline void set_rightBorder_10(float value)
	{
		___rightBorder_10 = value;
	}

	inline static int32_t get_offset_of_topBorder_11() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___topBorder_11)); }
	inline float get_topBorder_11() const { return ___topBorder_11; }
	inline float* get_address_of_topBorder_11() { return &___topBorder_11; }
	inline void set_topBorder_11(float value)
	{
		___topBorder_11 = value;
	}

	inline static int32_t get_offset_of_bottomBorder_12() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___bottomBorder_12)); }
	inline float get_bottomBorder_12() const { return ___bottomBorder_12; }
	inline float* get_address_of_bottomBorder_12() { return &___bottomBorder_12; }
	inline void set_bottomBorder_12(float value)
	{
		___bottomBorder_12 = value;
	}

	inline static int32_t get_offset_of_move_13() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___move_13)); }
	inline bool get_move_13() const { return ___move_13; }
	inline bool* get_address_of_move_13() { return &___move_13; }
	inline void set_move_13(bool value)
	{
		___move_13 = value;
	}

	inline static int32_t get_offset_of_length_14() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___length_14)); }
	inline int32_t get_length_14() const { return ___length_14; }
	inline int32_t* get_address_of_length_14() { return &___length_14; }
	inline void set_length_14(int32_t value)
	{
		___length_14 = value;
	}

	inline static int32_t get_offset_of_standard_15() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___standard_15)); }
	inline float get_standard_15() const { return ___standard_15; }
	inline float* get_address_of_standard_15() { return &___standard_15; }
	inline void set_standard_15(float value)
	{
		___standard_15 = value;
	}

	inline static int32_t get_offset_of_number2_16() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___number2_16)); }
	inline int32_t get_number2_16() const { return ___number2_16; }
	inline int32_t* get_address_of_number2_16() { return &___number2_16; }
	inline void set_number2_16(int32_t value)
	{
		___number2_16 = value;
	}

	inline static int32_t get_offset_of_items_17() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___items_17)); }
	inline List_1_t514686775 * get_items_17() const { return ___items_17; }
	inline List_1_t514686775 ** get_address_of_items_17() { return &___items_17; }
	inline void set_items_17(List_1_t514686775 * value)
	{
		___items_17 = value;
		Il2CppCodeGenWriteBarrier(&___items_17, value);
	}

	inline static int32_t get_offset_of_numberInGroup_18() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___numberInGroup_18)); }
	inline int32_t get_numberInGroup_18() const { return ___numberInGroup_18; }
	inline int32_t* get_address_of_numberInGroup_18() { return &___numberInGroup_18; }
	inline void set_numberInGroup_18(int32_t value)
	{
		___numberInGroup_18 = value;
	}

	inline static int32_t get_offset_of_controller_19() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___controller_19)); }
	inline wholeMap_t2327764005 * get_controller_19() const { return ___controller_19; }
	inline wholeMap_t2327764005 ** get_address_of_controller_19() { return &___controller_19; }
	inline void set_controller_19(wholeMap_t2327764005 * value)
	{
		___controller_19 = value;
		Il2CppCodeGenWriteBarrier(&___controller_19, value);
	}

	inline static int32_t get_offset_of_obstacles_20() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___obstacles_20)); }
	inline List_1_t514686775 * get_obstacles_20() const { return ___obstacles_20; }
	inline List_1_t514686775 ** get_address_of_obstacles_20() { return &___obstacles_20; }
	inline void set_obstacles_20(List_1_t514686775 * value)
	{
		___obstacles_20 = value;
		Il2CppCodeGenWriteBarrier(&___obstacles_20, value);
	}

	inline static int32_t get_offset_of_addnewObstaclesLevel_21() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___addnewObstaclesLevel_21)); }
	inline int32_t get_addnewObstaclesLevel_21() const { return ___addnewObstaclesLevel_21; }
	inline int32_t* get_address_of_addnewObstaclesLevel_21() { return &___addnewObstaclesLevel_21; }
	inline void set_addnewObstaclesLevel_21(int32_t value)
	{
		___addnewObstaclesLevel_21 = value;
	}

	inline static int32_t get_offset_of_addNumber_22() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___addNumber_22)); }
	inline int32_t get_addNumber_22() const { return ___addNumber_22; }
	inline int32_t* get_address_of_addNumber_22() { return &___addNumber_22; }
	inline void set_addNumber_22(int32_t value)
	{
		___addNumber_22 = value;
	}

	inline static int32_t get_offset_of_addnewOnstaclesnumber_23() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___addnewOnstaclesnumber_23)); }
	inline int32_t get_addnewOnstaclesnumber_23() const { return ___addnewOnstaclesnumber_23; }
	inline int32_t* get_address_of_addnewOnstaclesnumber_23() { return &___addnewOnstaclesnumber_23; }
	inline void set_addnewOnstaclesnumber_23(int32_t value)
	{
		___addnewOnstaclesnumber_23 = value;
	}

	inline static int32_t get_offset_of_addObstacleAmount_24() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___addObstacleAmount_24)); }
	inline int32_t get_addObstacleAmount_24() const { return ___addObstacleAmount_24; }
	inline int32_t* get_address_of_addObstacleAmount_24() { return &___addObstacleAmount_24; }
	inline void set_addObstacleAmount_24(int32_t value)
	{
		___addObstacleAmount_24 = value;
	}

	inline static int32_t get_offset_of_lastPosition_25() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___lastPosition_25)); }
	inline Vector3_t3525329789  get_lastPosition_25() const { return ___lastPosition_25; }
	inline Vector3_t3525329789 * get_address_of_lastPosition_25() { return &___lastPosition_25; }
	inline void set_lastPosition_25(Vector3_t3525329789  value)
	{
		___lastPosition_25 = value;
	}

	inline static int32_t get_offset_of_maxOffset_26() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___maxOffset_26)); }
	inline float get_maxOffset_26() const { return ___maxOffset_26; }
	inline float* get_address_of_maxOffset_26() { return &___maxOffset_26; }
	inline void set_maxOffset_26(float value)
	{
		___maxOffset_26 = value;
	}

	inline static int32_t get_offset_of_lastPosition2_27() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___lastPosition2_27)); }
	inline Vector3_t3525329789  get_lastPosition2_27() const { return ___lastPosition2_27; }
	inline Vector3_t3525329789 * get_address_of_lastPosition2_27() { return &___lastPosition2_27; }
	inline void set_lastPosition2_27(Vector3_t3525329789  value)
	{
		___lastPosition2_27 = value;
	}

	inline static int32_t get_offset_of_maxXoffset_28() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___maxXoffset_28)); }
	inline float get_maxXoffset_28() const { return ___maxXoffset_28; }
	inline float* get_address_of_maxXoffset_28() { return &___maxXoffset_28; }
	inline void set_maxXoffset_28(float value)
	{
		___maxXoffset_28 = value;
	}

	inline static int32_t get_offset_of_lastBorderP_29() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___lastBorderP_29)); }
	inline float get_lastBorderP_29() const { return ___lastBorderP_29; }
	inline float* get_address_of_lastBorderP_29() { return &___lastBorderP_29; }
	inline void set_lastBorderP_29(float value)
	{
		___lastBorderP_29 = value;
	}

	inline static int32_t get_offset_of_stars_30() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___stars_30)); }
	inline GameObject_t4012695102 * get_stars_30() const { return ___stars_30; }
	inline GameObject_t4012695102 ** get_address_of_stars_30() { return &___stars_30; }
	inline void set_stars_30(GameObject_t4012695102 * value)
	{
		___stars_30 = value;
		Il2CppCodeGenWriteBarrier(&___stars_30, value);
	}

	inline static int32_t get_offset_of_nextLevelStart_31() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___nextLevelStart_31)); }
	inline bool get_nextLevelStart_31() const { return ___nextLevelStart_31; }
	inline bool* get_address_of_nextLevelStart_31() { return &___nextLevelStart_31; }
	inline void set_nextLevelStart_31(bool value)
	{
		___nextLevelStart_31 = value;
	}

	inline static int32_t get_offset_of_childNumber_32() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___childNumber_32)); }
	inline int32_t get_childNumber_32() const { return ___childNumber_32; }
	inline int32_t* get_address_of_childNumber_32() { return &___childNumber_32; }
	inline void set_childNumber_32(int32_t value)
	{
		___childNumber_32 = value;
	}

	inline static int32_t get_offset_of_borderObjects_33() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___borderObjects_33)); }
	inline List_1_t514686775 * get_borderObjects_33() const { return ___borderObjects_33; }
	inline List_1_t514686775 ** get_address_of_borderObjects_33() { return &___borderObjects_33; }
	inline void set_borderObjects_33(List_1_t514686775 * value)
	{
		___borderObjects_33 = value;
		Il2CppCodeGenWriteBarrier(&___borderObjects_33, value);
	}

	inline static int32_t get_offset_of_borderObjs_34() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___borderObjs_34)); }
	inline List_1_t514686775 * get_borderObjs_34() const { return ___borderObjs_34; }
	inline List_1_t514686775 ** get_address_of_borderObjs_34() { return &___borderObjs_34; }
	inline void set_borderObjs_34(List_1_t514686775 * value)
	{
		___borderObjs_34 = value;
		Il2CppCodeGenWriteBarrier(&___borderObjs_34, value);
	}

	inline static int32_t get_offset_of_powerUps_35() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___powerUps_35)); }
	inline List_1_t514686775 * get_powerUps_35() const { return ___powerUps_35; }
	inline List_1_t514686775 ** get_address_of_powerUps_35() { return &___powerUps_35; }
	inline void set_powerUps_35(List_1_t514686775 * value)
	{
		___powerUps_35 = value;
		Il2CppCodeGenWriteBarrier(&___powerUps_35, value);
	}

	inline static int32_t get_offset_of_powers_36() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___powers_36)); }
	inline List_1_t514686775 * get_powers_36() const { return ___powers_36; }
	inline List_1_t514686775 ** get_address_of_powers_36() { return &___powers_36; }
	inline void set_powers_36(List_1_t514686775 * value)
	{
		___powers_36 = value;
		Il2CppCodeGenWriteBarrier(&___powers_36, value);
	}

	inline static int32_t get_offset_of_hasPowerups_37() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___hasPowerups_37)); }
	inline bool get_hasPowerups_37() const { return ___hasPowerups_37; }
	inline bool* get_address_of_hasPowerups_37() { return &___hasPowerups_37; }
	inline void set_hasPowerups_37(bool value)
	{
		___hasPowerups_37 = value;
	}

	inline static int32_t get_offset_of_addTimes_38() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___addTimes_38)); }
	inline int32_t get_addTimes_38() const { return ___addTimes_38; }
	inline int32_t* get_address_of_addTimes_38() { return &___addTimes_38; }
	inline void set_addTimes_38(int32_t value)
	{
		___addTimes_38 = value;
	}

	inline static int32_t get_offset_of_addLevel_39() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___addLevel_39)); }
	inline int32_t get_addLevel_39() const { return ___addLevel_39; }
	inline int32_t* get_address_of_addLevel_39() { return &___addLevel_39; }
	inline void set_addLevel_39(int32_t value)
	{
		___addLevel_39 = value;
	}

	inline static int32_t get_offset_of_alreadyAddIndex_40() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___alreadyAddIndex_40)); }
	inline int32_t get_alreadyAddIndex_40() const { return ___alreadyAddIndex_40; }
	inline int32_t* get_address_of_alreadyAddIndex_40() { return &___alreadyAddIndex_40; }
	inline void set_alreadyAddIndex_40(int32_t value)
	{
		___alreadyAddIndex_40 = value;
	}

	inline static int32_t get_offset_of_holdTime_41() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___holdTime_41)); }
	inline float get_holdTime_41() const { return ___holdTime_41; }
	inline float* get_address_of_holdTime_41() { return &___holdTime_41; }
	inline void set_holdTime_41(float value)
	{
		___holdTime_41 = value;
	}

	inline static int32_t get_offset_of_alreadyDestoryed_42() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___alreadyDestoryed_42)); }
	inline bool get_alreadyDestoryed_42() const { return ___alreadyDestoryed_42; }
	inline bool* get_address_of_alreadyDestoryed_42() { return &___alreadyDestoryed_42; }
	inline void set_alreadyDestoryed_42(bool value)
	{
		___alreadyDestoryed_42 = value;
	}

	inline static int32_t get_offset_of_nextPower_43() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___nextPower_43)); }
	inline float get_nextPower_43() const { return ___nextPower_43; }
	inline float* get_address_of_nextPower_43() { return &___nextPower_43; }
	inline void set_nextPower_43(float value)
	{
		___nextPower_43 = value;
	}

	inline static int32_t get_offset_of_isStarting_44() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___isStarting_44)); }
	inline bool get_isStarting_44() const { return ___isStarting_44; }
	inline bool* get_address_of_isStarting_44() { return &___isStarting_44; }
	inline void set_isStarting_44(bool value)
	{
		___isStarting_44 = value;
	}

	inline static int32_t get_offset_of_balckHole_45() { return static_cast<int32_t>(offsetof(tiles_t110363525, ___balckHole_45)); }
	inline GameObject_t4012695102 * get_balckHole_45() const { return ___balckHole_45; }
	inline GameObject_t4012695102 ** get_address_of_balckHole_45() { return &___balckHole_45; }
	inline void set_balckHole_45(GameObject_t4012695102 * value)
	{
		___balckHole_45 = value;
		Il2CppCodeGenWriteBarrier(&___balckHole_45, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
