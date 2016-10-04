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

// Soomla.Schedule
struct Schedule_t2787348556;
// System.Collections.Generic.List`1<Soomla.Schedule/DateTimeRange>
struct List_1_t3323622203;
// JSONObject
struct JSONObject_t1752376903;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime339033936.h"
#include "AssemblyU2DCSharp_Soomla_Schedule_Recurrence3771856720.h"
#include "AssemblyU2DCSharp_JSONObject1752376903.h"

// System.Void Soomla.Schedule::.ctor(System.Int32)
extern "C"  void Schedule__ctor_m124063878 (Schedule_t2787348556 * __this, int32_t ___activationLimit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Schedule::.ctor(System.DateTime,System.DateTime,Soomla.Schedule/Recurrence,System.Int32)
extern "C"  void Schedule__ctor_m1035217647 (Schedule_t2787348556 * __this, DateTime_t339033936  ___startTime0, DateTime_t339033936  ___endTime1, int32_t ___recurrence2, int32_t ___activationLimit3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Schedule::.ctor(System.Collections.Generic.List`1<Soomla.Schedule/DateTimeRange>,Soomla.Schedule/Recurrence,System.Int32)
extern "C"  void Schedule__ctor_m1946701692 (Schedule_t2787348556 * __this, List_1_t3323622203 * ___timeRanges0, int32_t ___recurrence1, int32_t ___activationLimit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Schedule::.ctor(JSONObject)
extern "C"  void Schedule__ctor_m2134877774 (Schedule_t2787348556 * __this, JSONObject_t1752376903 * ___jsonSched0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Schedule::.cctor()
extern "C"  void Schedule__cctor_m802512792 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Schedule Soomla.Schedule::AnyTimeOnce()
extern "C"  Schedule_t2787348556 * Schedule_AnyTimeOnce_m2035453802 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Schedule Soomla.Schedule::AnyTimeLimited(System.Int32)
extern "C"  Schedule_t2787348556 * Schedule_AnyTimeLimited_m1195598788 (Il2CppObject * __this /* static, unused */, int32_t ___activationLimit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Schedule Soomla.Schedule::AnyTimeUnLimited()
extern "C"  Schedule_t2787348556 * Schedule_AnyTimeUnLimited_m3294730842 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.Schedule::toJSONObject()
extern "C"  JSONObject_t1752376903 * Schedule_toJSONObject_m1122713467 (Schedule_t2787348556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Schedule::Approve(System.Int32)
extern "C"  bool Schedule_Approve_m3348827237 (Schedule_t2787348556 * __this, int32_t ___activationTimes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
