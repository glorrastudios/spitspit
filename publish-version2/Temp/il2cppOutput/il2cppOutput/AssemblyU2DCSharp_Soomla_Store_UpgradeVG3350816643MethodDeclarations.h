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

// Soomla.Store.UpgradeVG
struct UpgradeVG_t3350816643;
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

// System.Void Soomla.Store.UpgradeVG::.ctor(System.String,System.String,System.String,System.String,System.String,System.String,Soomla.Store.PurchaseType)
extern "C"  void UpgradeVG__ctor_m639250457 (UpgradeVG_t3350816643 * __this, String_t* ___goodItemId0, String_t* ___nextItemId1, String_t* ___prevItemId2, String_t* ___name3, String_t* ___description4, String_t* ___itemId5, PurchaseType_t2779557329 * ___purchaseType6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.UpgradeVG::.ctor(JSONObject)
extern "C"  void UpgradeVG__ctor_m3493281267 (UpgradeVG_t3350816643 * __this, JSONObject_t1752376903 * ___jsonItem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.UpgradeVG::.cctor()
extern "C"  void UpgradeVG__cctor_m207006291 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.Store.UpgradeVG::toJSONObject()
extern "C"  JSONObject_t1752376903 * UpgradeVG_toJSONObject_m2826426466 (UpgradeVG_t3350816643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.UpgradeVG::canBuy()
extern "C"  bool UpgradeVG_canBuy_m3361351892 (UpgradeVG_t3350816643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.UpgradeVG::Give(System.Int32,System.Boolean)
extern "C"  int32_t UpgradeVG_Give_m3920715427 (UpgradeVG_t3350816643 * __this, int32_t ___amount0, bool ___notify1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.UpgradeVG::Take(System.Int32,System.Boolean)
extern "C"  int32_t UpgradeVG_Take_m639848685 (UpgradeVG_t3350816643 * __this, int32_t ___amount0, bool ___notify1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
