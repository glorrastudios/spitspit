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

// Soomla.Store.VirtualCurrencyPack
struct VirtualCurrencyPack_t1843991083;
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

// System.Void Soomla.Store.VirtualCurrencyPack::.ctor(System.String,System.String,System.String,System.Int32,System.String,Soomla.Store.PurchaseType)
extern "C"  void VirtualCurrencyPack__ctor_m1983429008 (VirtualCurrencyPack_t1843991083 * __this, String_t* ___name0, String_t* ___description1, String_t* ___itemId2, int32_t ___currencyAmount3, String_t* ___currencyItemId4, PurchaseType_t2779557329 * ___purchaseType5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualCurrencyPack::.ctor(JSONObject)
extern "C"  void VirtualCurrencyPack__ctor_m2486478155 (VirtualCurrencyPack_t1843991083 * __this, JSONObject_t1752376903 * ___jsonItem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualCurrencyPack::.cctor()
extern "C"  void VirtualCurrencyPack__cctor_m3460243451 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.Store.VirtualCurrencyPack::toJSONObject()
extern "C"  JSONObject_t1752376903 * VirtualCurrencyPack_toJSONObject_m3123637386 (VirtualCurrencyPack_t1843991083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyPack::Give(System.Int32,System.Boolean)
extern "C"  int32_t VirtualCurrencyPack_Give_m3450085243 (VirtualCurrencyPack_t1843991083 * __this, int32_t ___amount0, bool ___notify1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyPack::Take(System.Int32,System.Boolean)
extern "C"  int32_t VirtualCurrencyPack_Take_m169218501 (VirtualCurrencyPack_t1843991083 * __this, int32_t ___amount0, bool ___notify1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyPack::ResetBalance(System.Int32,System.Boolean)
extern "C"  int32_t VirtualCurrencyPack_ResetBalance_m546691199 (VirtualCurrencyPack_t1843991083 * __this, int32_t ___balance0, bool ___notify1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyPack::GetBalance()
extern "C"  int32_t VirtualCurrencyPack_GetBalance_m2031943430 (VirtualCurrencyPack_t1843991083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.VirtualCurrencyPack::canBuy()
extern "C"  bool VirtualCurrencyPack_canBuy_m1535298940 (VirtualCurrencyPack_t1843991083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
