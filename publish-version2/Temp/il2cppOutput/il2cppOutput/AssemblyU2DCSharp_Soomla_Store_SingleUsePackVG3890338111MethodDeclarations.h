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

// Soomla.Store.SingleUsePackVG
struct SingleUsePackVG_t3890338111;
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

// System.Void Soomla.Store.SingleUsePackVG::.ctor(System.String,System.Int32,System.String,System.String,System.String,Soomla.Store.PurchaseType)
extern "C"  void SingleUsePackVG__ctor_m1473247596 (SingleUsePackVG_t3890338111 * __this, String_t* ___goodItemId0, int32_t ___amount1, String_t* ___name2, String_t* ___description3, String_t* ___itemId4, PurchaseType_t2779557329 * ___purchaseType5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SingleUsePackVG::.ctor(JSONObject)
extern "C"  void SingleUsePackVG__ctor_m3575738295 (SingleUsePackVG_t3890338111 * __this, JSONObject_t1752376903 * ___jsonItem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SingleUsePackVG::.cctor()
extern "C"  void SingleUsePackVG__cctor_m1938598927 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.Store.SingleUsePackVG::toJSONObject()
extern "C"  JSONObject_t1752376903 * SingleUsePackVG_toJSONObject_m506369182 (SingleUsePackVG_t3890338111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.SingleUsePackVG::Give(System.Int32,System.Boolean)
extern "C"  int32_t SingleUsePackVG_Give_m2150628071 (SingleUsePackVG_t3890338111 * __this, int32_t ___amount0, bool ___notify1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.SingleUsePackVG::Take(System.Int32,System.Boolean)
extern "C"  int32_t SingleUsePackVG_Take_m3164728625 (SingleUsePackVG_t3890338111 * __this, int32_t ___amount0, bool ___notify1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.SingleUsePackVG::ResetBalance(System.Int32,System.Boolean)
extern "C"  int32_t SingleUsePackVG_ResetBalance_m804620267 (SingleUsePackVG_t3890338111 * __this, int32_t ___balance0, bool ___notify1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.SingleUsePackVG::GetBalance()
extern "C"  int32_t SingleUsePackVG_GetBalance_m3555022874 (SingleUsePackVG_t3890338111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.SingleUsePackVG::canBuy()
extern "C"  bool SingleUsePackVG_canBuy_m350442384 (SingleUsePackVG_t3890338111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
