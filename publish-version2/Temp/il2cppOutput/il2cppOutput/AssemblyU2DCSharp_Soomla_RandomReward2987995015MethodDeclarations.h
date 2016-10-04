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

// Soomla.RandomReward
struct RandomReward_t2987995015;
// System.String
struct String_t;
// System.Collections.Generic.List`1<Soomla.Reward>
struct List_1_t2367124957;
// JSONObject
struct JSONObject_t1752376903;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_JSONObject1752376903.h"

// System.Void Soomla.RandomReward::.ctor(System.String,System.String,System.Collections.Generic.List`1<Soomla.Reward>)
extern "C"  void RandomReward__ctor_m2178978996 (RandomReward_t2987995015 * __this, String_t* ___id0, String_t* ___name1, List_1_t2367124957 * ___rewards2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.RandomReward::.ctor(JSONObject)
extern "C"  void RandomReward__ctor_m128385715 (RandomReward_t2987995015 * __this, JSONObject_t1752376903 * ___jsonReward0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.RandomReward::.cctor()
extern "C"  void RandomReward__cctor_m2230488467 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.RandomReward::toJSONObject()
extern "C"  JSONObject_t1752376903 * RandomReward_toJSONObject_m57221174 (RandomReward_t2987995015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.RandomReward::giveInner()
extern "C"  bool RandomReward_giveInner_m3234957905 (RandomReward_t2987995015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.RandomReward::takeInner()
extern "C"  bool RandomReward_takeInner_m1328697371 (RandomReward_t2987995015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
