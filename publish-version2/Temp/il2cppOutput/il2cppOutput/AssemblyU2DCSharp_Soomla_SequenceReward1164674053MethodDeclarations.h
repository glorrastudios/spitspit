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

// Soomla.SequenceReward
struct SequenceReward_t1164674053;
// System.String
struct String_t;
// System.Collections.Generic.List`1<Soomla.Reward>
struct List_1_t2367124957;
// JSONObject
struct JSONObject_t1752376903;
// Soomla.Reward
struct Reward_t1570165988;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_JSONObject1752376903.h"
#include "AssemblyU2DCSharp_Soomla_Reward1570165988.h"

// System.Void Soomla.SequenceReward::.ctor(System.String,System.String,System.Collections.Generic.List`1<Soomla.Reward>)
extern "C"  void SequenceReward__ctor_m3955715254 (SequenceReward_t1164674053 * __this, String_t* ___id0, String_t* ___name1, List_1_t2367124957 * ___rewards2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.SequenceReward::.ctor(JSONObject)
extern "C"  void SequenceReward__ctor_m986514229 (SequenceReward_t1164674053 * __this, JSONObject_t1752376903 * ___jsonReward0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.SequenceReward::.cctor()
extern "C"  void SequenceReward__cctor_m2464912081 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.SequenceReward::toJSONObject()
extern "C"  JSONObject_t1752376903 * SequenceReward_toJSONObject_m1876941940 (SequenceReward_t1164674053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Reward Soomla.SequenceReward::GetLastGivenReward()
extern "C"  Reward_t1570165988 * SequenceReward_GetLastGivenReward_m3108323747 (SequenceReward_t1164674053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.SequenceReward::HasMoreToGive()
extern "C"  bool SequenceReward_HasMoreToGive_m1634209673 (SequenceReward_t1164674053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.SequenceReward::ForceNextRewardToGive(Soomla.Reward)
extern "C"  bool SequenceReward_ForceNextRewardToGive_m1155590205 (SequenceReward_t1164674053 * __this, Reward_t1570165988 * ___reward0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.SequenceReward::giveInner()
extern "C"  bool SequenceReward_giveInner_m1687009107 (SequenceReward_t1164674053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.SequenceReward::takeInner()
extern "C"  bool SequenceReward_takeInner_m4075715869 (SequenceReward_t1164674053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
