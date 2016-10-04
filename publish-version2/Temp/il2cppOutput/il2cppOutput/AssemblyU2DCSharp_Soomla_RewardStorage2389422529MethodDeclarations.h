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

// Soomla.RewardStorage
struct RewardStorage_t2389422529;
// Soomla.Reward
struct Reward_t1570165988;
// Soomla.SequenceReward
struct SequenceReward_t1164674053;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Soomla_Reward1570165988.h"
#include "mscorlib_System_DateTime339033936.h"
#include "AssemblyU2DCSharp_Soomla_SequenceReward1164674053.h"

// System.Void Soomla.RewardStorage::.ctor()
extern "C"  void RewardStorage__ctor_m118672494 (RewardStorage_t2389422529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.RewardStorage::.cctor()
extern "C"  void RewardStorage__cctor_m3196751103 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.RewardStorage Soomla.RewardStorage::get_instance()
extern "C"  RewardStorage_t2389422529 * RewardStorage_get_instance_m4171062244 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.RewardStorage::SetRewardStatus(Soomla.Reward,System.Boolean)
extern "C"  void RewardStorage_SetRewardStatus_m811983208 (Il2CppObject * __this /* static, unused */, Reward_t1570165988 * ___reward0, bool ___give1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.RewardStorage::SetRewardStatus(Soomla.Reward,System.Boolean,System.Boolean)
extern "C"  void RewardStorage_SetRewardStatus_m998143253 (Il2CppObject * __this /* static, unused */, Reward_t1570165988 * ___reward0, bool ___give1, bool ___notify2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.RewardStorage::IsRewardGiven(Soomla.Reward)
extern "C"  bool RewardStorage_IsRewardGiven_m1038574024 (Il2CppObject * __this /* static, unused */, Reward_t1570165988 * ___reward0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.RewardStorage::GetTimesGiven(Soomla.Reward)
extern "C"  int32_t RewardStorage_GetTimesGiven_m4291724729 (Il2CppObject * __this /* static, unused */, Reward_t1570165988 * ___reward0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Soomla.RewardStorage::GetLastGivenTime(Soomla.Reward)
extern "C"  DateTime_t339033936  RewardStorage_GetLastGivenTime_m573034647 (Il2CppObject * __this /* static, unused */, Reward_t1570165988 * ___reward0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.RewardStorage::GetLastSeqIdxGiven(Soomla.SequenceReward)
extern "C"  int32_t RewardStorage_GetLastSeqIdxGiven_m1297795404 (Il2CppObject * __this /* static, unused */, SequenceReward_t1164674053 * ___reward0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.RewardStorage::SetLastSeqIdxGiven(Soomla.SequenceReward,System.Int32)
extern "C"  void RewardStorage_SetLastSeqIdxGiven_m3135091057 (Il2CppObject * __this /* static, unused */, SequenceReward_t1164674053 * ___reward0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.RewardStorage::_getLastSeqIdxGiven(Soomla.SequenceReward)
extern "C"  int32_t RewardStorage__getLastSeqIdxGiven_m400533331 (RewardStorage_t2389422529 * __this, SequenceReward_t1164674053 * ___seqReward0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.RewardStorage::_setLastSeqIdxGiven(Soomla.SequenceReward,System.Int32)
extern "C"  void RewardStorage__setLastSeqIdxGiven_m3700854566 (RewardStorage_t2389422529 * __this, SequenceReward_t1164674053 * ___seqReward0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.RewardStorage::_setTimesGiven(Soomla.Reward,System.Boolean,System.Boolean)
extern "C"  void RewardStorage__setTimesGiven_m96316660 (RewardStorage_t2389422529 * __this, Reward_t1570165988 * ___reward0, bool ___up1, bool ___notify2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.RewardStorage::_getTimesGiven(Soomla.Reward)
extern "C"  int32_t RewardStorage__getTimesGiven_m3728107602 (RewardStorage_t2389422529 * __this, Reward_t1570165988 * ___reward0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Soomla.RewardStorage::_getLastGivenTime(Soomla.Reward)
extern "C"  DateTime_t339033936  RewardStorage__getLastGivenTime_m1124372948 (RewardStorage_t2389422529 * __this, Reward_t1570165988 * ___reward0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
