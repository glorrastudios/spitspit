#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Soomla.RewardStorageIOS
struct RewardStorageIOS_t465018326;
// System.String
struct String_t;
// Soomla.SequenceReward
struct SequenceReward_t1164674053;
// Soomla.Reward
struct Reward_t1570165988;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Soomla_SequenceReward1164674053.h"
#include "AssemblyU2DCSharp_Soomla_Reward1570165988.h"
#include "mscorlib_System_DateTime339033936.h"

// System.Void Soomla.RewardStorageIOS::.ctor()
extern "C"  void RewardStorageIOS__ctor_m1370306411 (RewardStorageIOS_t465018326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Soomla.RewardStorageIOS::rewardStorage_GetLastGivenTimeMillis(System.String)
extern "C"  int64_t RewardStorageIOS_rewardStorage_GetLastGivenTimeMillis_m2579564001 (Il2CppObject * __this /* static, unused */, String_t* ___rewardId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.RewardStorageIOS::rewardStorage_GetTimesGiven(System.String)
extern "C"  int32_t RewardStorageIOS_rewardStorage_GetTimesGiven_m3853545969 (Il2CppObject * __this /* static, unused */, String_t* ___rewardId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.RewardStorageIOS::rewardStorage_SetTimesGiven(System.String,System.Boolean,System.Boolean)
extern "C"  void RewardStorageIOS_rewardStorage_SetTimesGiven_m2993683027 (Il2CppObject * __this /* static, unused */, String_t* ___rewardId0, bool ___up1, bool ___notify2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.RewardStorageIOS::rewardStorage_GetLastSeqIdxGiven(System.String)
extern "C"  int32_t RewardStorageIOS_rewardStorage_GetLastSeqIdxGiven_m3797181969 (Il2CppObject * __this /* static, unused */, String_t* ___rewardId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.RewardStorageIOS::rewardStorage_SetLastSeqIdxGiven(System.String,System.Int32)
extern "C"  void RewardStorageIOS_rewardStorage_SetLastSeqIdxGiven_m3815881512 (Il2CppObject * __this /* static, unused */, String_t* ___rewardId0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.RewardStorageIOS::_getLastSeqIdxGiven(Soomla.SequenceReward)
extern "C"  int32_t RewardStorageIOS__getLastSeqIdxGiven_m3474025562 (RewardStorageIOS_t465018326 * __this, SequenceReward_t1164674053 * ___seqReward0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.RewardStorageIOS::_setLastSeqIdxGiven(Soomla.SequenceReward,System.Int32)
extern "C"  void RewardStorageIOS__setLastSeqIdxGiven_m1341271075 (RewardStorageIOS_t465018326 * __this, SequenceReward_t1164674053 * ___seqReward0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.RewardStorageIOS::_setTimesGiven(Soomla.Reward,System.Boolean,System.Boolean)
extern "C"  void RewardStorageIOS__setTimesGiven_m4158161777 (RewardStorageIOS_t465018326 * __this, Reward_t1570165988 * ___reward0, bool ___up1, bool ___notify2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.RewardStorageIOS::_getTimesGiven(Soomla.Reward)
extern "C"  int32_t RewardStorageIOS__getTimesGiven_m3590718443 (RewardStorageIOS_t465018326 * __this, Reward_t1570165988 * ___reward0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Soomla.RewardStorageIOS::_getLastGivenTime(Soomla.Reward)
extern "C"  DateTime_t339033936  RewardStorageIOS__getLastGivenTime_m1191918245 (RewardStorageIOS_t465018326 * __this, Reward_t1570165988 * ___reward0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
