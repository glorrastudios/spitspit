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

// Soomla.CoreEvents
struct CoreEvents_t2723118925;
// System.String
struct String_t;
// Soomla.Reward
struct Reward_t1570165988;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Soomla_Reward1570165988.h"

// System.Void Soomla.CoreEvents::.ctor()
extern "C"  void CoreEvents__ctor_m1837663892 (CoreEvents_t2723118925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.CoreEvents::.cctor()
extern "C"  void CoreEvents__cctor_m650909593 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.CoreEvents::soomlaCore_Init(System.String,System.Boolean)
extern "C"  void CoreEvents_soomlaCore_Init_m4115241582 (Il2CppObject * __this /* static, unused */, String_t* ___secret0, bool ___debug1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.CoreEvents::get_DontDestroySingleton()
extern "C"  bool CoreEvents_get_DontDestroySingleton_m962707943 (CoreEvents_t2723118925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.CoreEvents::Initialize()
extern "C"  void CoreEvents_Initialize_m2715077760 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.CoreEvents::onRewardGiven(System.String)
extern "C"  void CoreEvents_onRewardGiven_m2300503905 (CoreEvents_t2723118925 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.CoreEvents::onRewardTaken(System.String)
extern "C"  void CoreEvents_onRewardTaken_m1824457943 (CoreEvents_t2723118925 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.CoreEvents::onCustomEvent(System.String)
extern "C"  void CoreEvents_onCustomEvent_m3556160998 (CoreEvents_t2723118925 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.CoreEvents::<OnRewardGiven>m__2E(Soomla.Reward)
extern "C"  void CoreEvents_U3COnRewardGivenU3Em__2E_m3139214655 (Il2CppObject * __this /* static, unused */, Reward_t1570165988 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.CoreEvents::<OnRewardTaken>m__2F(Soomla.Reward)
extern "C"  void CoreEvents_U3COnRewardTakenU3Em__2F_m3206817812 (Il2CppObject * __this /* static, unused */, Reward_t1570165988 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.CoreEvents::<OnCustomEvent>m__30(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void CoreEvents_U3COnCustomEventU3Em__30_m1802416031 (Il2CppObject * __this /* static, unused */, String_t* p0, Dictionary_2_t2606186806 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
