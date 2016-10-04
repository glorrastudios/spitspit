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

// Soomla.Store.LifetimeVG
struct LifetimeVG_t1847981616;
// System.String
struct String_t;
// Soomla.Store.PurchaseType
struct PurchaseType_t2779557329;
// JSONObject
struct JSONObject_t1752376903;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Soomla_Store_PurchaseType2779557329.h"
#include "AssemblyU2DCSharp_JSONObject1752376903.h"

// System.Void Soomla.Store.LifetimeVG::.ctor(System.String,System.String,System.String,Soomla.Store.PurchaseType)
extern "C"  void LifetimeVG__ctor_m3699772762 (LifetimeVG_t1847981616 * __this, String_t* ___name0, String_t* ___description1, String_t* ___itemId2, PurchaseType_t2779557329 * ___purchaseType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.LifetimeVG::.ctor(JSONObject)
extern "C"  void LifetimeVG__ctor_m2734341726 (LifetimeVG_t1847981616 * __this, JSONObject_t1752376903 * ___jsonVg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.LifetimeVG::.cctor()
extern "C"  void LifetimeVG__cctor_m3163288968 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.Store.LifetimeVG::toJSONObject()
extern "C"  JSONObject_t1752376903 * LifetimeVG_toJSONObject_m3133462379 (LifetimeVG_t1847981616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.LifetimeVG::Give(System.Int32,System.Boolean)
extern "C"  int32_t LifetimeVG_Give_m980687850 (LifetimeVG_t1847981616 * __this, int32_t ___amount0, bool ___notify1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.LifetimeVG::Take(System.Int32,System.Boolean)
extern "C"  int32_t LifetimeVG_Take_m1994788404 (LifetimeVG_t1847981616 * __this, int32_t ___amount0, bool ___notify1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.LifetimeVG::canBuy()
extern "C"  bool LifetimeVG_canBuy_m3581873441 (LifetimeVG_t1847981616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
