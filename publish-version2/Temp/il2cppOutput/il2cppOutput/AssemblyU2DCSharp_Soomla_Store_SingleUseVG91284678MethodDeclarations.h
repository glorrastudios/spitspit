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

// Soomla.Store.SingleUseVG
struct SingleUseVG_t91284678;
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

// System.Void Soomla.Store.SingleUseVG::.ctor(System.String,System.String,System.String,Soomla.Store.PurchaseType)
extern "C"  void SingleUseVG__ctor_m4169913640 (SingleUseVG_t91284678 * __this, String_t* ___name0, String_t* ___description1, String_t* ___itemId2, PurchaseType_t2779557329 * ___purchaseType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SingleUseVG::.ctor(JSONObject)
extern "C"  void SingleUseVG__ctor_m3276128976 (SingleUseVG_t91284678 * __this, JSONObject_t1752376903 * ___jsonVg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.Store.SingleUseVG::toJSONObject()
extern "C"  JSONObject_t1752376903 * SingleUseVG_toJSONObject_m2755115813 (SingleUseVG_t91284678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.SingleUseVG::Give(System.Int32,System.Boolean)
extern "C"  int32_t SingleUseVG_Give_m4190823680 (SingleUseVG_t91284678 * __this, int32_t ___amount0, bool ___notify1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.SingleUseVG::Take(System.Int32,System.Boolean)
extern "C"  int32_t SingleUseVG_Take_m909956938 (SingleUseVG_t91284678 * __this, int32_t ___amount0, bool ___notify1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.SingleUseVG::canBuy()
extern "C"  bool SingleUseVG_canBuy_m2970970711 (SingleUseVG_t91284678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
