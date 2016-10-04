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

// Soomla.BadgeReward
struct BadgeReward_t3851063847;
// System.String
struct String_t;
// JSONObject
struct JSONObject_t1752376903;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_JSONObject1752376903.h"

// System.Void Soomla.BadgeReward::.ctor(System.String,System.String)
extern "C"  void BadgeReward__ctor_m2396884534 (BadgeReward_t3851063847 * __this, String_t* ___id0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.BadgeReward::.ctor(System.String,System.String,System.String)
extern "C"  void BadgeReward__ctor_m2177802226 (BadgeReward_t3851063847 * __this, String_t* ___id0, String_t* ___name1, String_t* ___iconUrl2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.BadgeReward::.ctor(JSONObject)
extern "C"  void BadgeReward__ctor_m768913505 (BadgeReward_t3851063847 * __this, JSONObject_t1752376903 * ___jsonReward0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.BadgeReward::toJSONObject()
extern "C"  JSONObject_t1752376903 * BadgeReward_toJSONObject_m3987433396 (BadgeReward_t3851063847 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.BadgeReward::giveInner()
extern "C"  bool BadgeReward_giveInner_m383364759 (BadgeReward_t3851063847 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.BadgeReward::takeInner()
extern "C"  bool BadgeReward_takeInner_m2772071521 (BadgeReward_t3851063847 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
