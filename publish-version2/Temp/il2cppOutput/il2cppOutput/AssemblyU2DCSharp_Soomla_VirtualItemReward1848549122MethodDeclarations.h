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

// Soomla.VirtualItemReward
struct VirtualItemReward_t1848549122;
// System.String
struct String_t;
// JSONObject
struct JSONObject_t1752376903;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_JSONObject1752376903.h"

// System.Void Soomla.VirtualItemReward::.ctor(System.String,System.String,System.String,System.Int32)
extern "C"  void VirtualItemReward__ctor_m2282081450 (VirtualItemReward_t1848549122 * __this, String_t* ___rewardId0, String_t* ___name1, String_t* ___associatedItemId2, int32_t ___amount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.VirtualItemReward::.ctor(JSONObject)
extern "C"  void VirtualItemReward__ctor_m3446028902 (VirtualItemReward_t1848549122 * __this, JSONObject_t1752376903 * ___jsonReward0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.VirtualItemReward::.cctor()
extern "C"  void VirtualItemReward__cctor_m636178560 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.VirtualItemReward::toJSONObject()
extern "C"  JSONObject_t1752376903 * VirtualItemReward_toJSONObject_m3022412623 (VirtualItemReward_t1848549122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.VirtualItemReward::giveInner()
extern "C"  bool VirtualItemReward_giveInner_m2079070044 (VirtualItemReward_t1848549122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.VirtualItemReward::takeInner()
extern "C"  bool VirtualItemReward_takeInner_m172809510 (VirtualItemReward_t1848549122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
