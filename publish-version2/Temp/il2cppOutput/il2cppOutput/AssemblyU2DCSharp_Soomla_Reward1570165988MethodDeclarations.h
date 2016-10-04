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

// Soomla.Reward
struct Reward_t1570165988;
// System.String
struct String_t;
// JSONObject
struct JSONObject_t1752376903;
// System.Collections.Generic.List`1<Soomla.Reward>
struct List_1_t2367124957;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_JSONObject1752376903.h"

// System.Void Soomla.Reward::.ctor(System.String,System.String)
extern "C"  void Reward__ctor_m3552203329 (Reward_t1570165988 * __this, String_t* ___id0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Reward::.ctor(JSONObject)
extern "C"  void Reward__ctor_m124487926 (Reward_t1570165988 * __this, JSONObject_t1752376903 * ___jsonReward0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Reward::.cctor()
extern "C"  void Reward__cctor_m2991087600 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Reward::get_Owned()
extern "C"  bool Reward_get_Owned_m3517051563 (Reward_t1570165988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.Reward::toJSONObject()
extern "C"  JSONObject_t1752376903 * Reward_toJSONObject_m1441488979 (Reward_t1570165988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Reward Soomla.Reward::fromJSONObject(JSONObject)
extern "C"  Reward_t1570165988 * Reward_fromJSONObject_m538740876 (Il2CppObject * __this /* static, unused */, JSONObject_t1752376903 * ___rewardObj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Reward::Take()
extern "C"  bool Reward_Take_m3294998234 (Reward_t1570165988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Reward::CanGive()
extern "C"  bool Reward_CanGive_m2342851440 (Reward_t1570165988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Reward::Give()
extern "C"  bool Reward_Give_m2930535140 (Reward_t1570165988 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Reward Soomla.Reward::GetReward(System.String)
extern "C"  Reward_t1570165988 * Reward_GetReward_m237195837 (Il2CppObject * __this /* static, unused */, String_t* ___rewardID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Soomla.Reward> Soomla.Reward::GetRewards()
extern "C"  List_1_t2367124957 * Reward_GetRewards_m713491526 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
