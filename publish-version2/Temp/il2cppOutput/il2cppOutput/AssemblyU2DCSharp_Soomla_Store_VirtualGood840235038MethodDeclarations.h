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

// Soomla.Store.VirtualGood
struct VirtualGood_t840235038;
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

// System.Void Soomla.Store.VirtualGood::.ctor(System.String,System.String,System.String,Soomla.Store.PurchaseType)
extern "C"  void VirtualGood__ctor_m3381585024 (VirtualGood_t840235038 * __this, String_t* ___name0, String_t* ___description1, String_t* ___itemId2, PurchaseType_t2779557329 * ___purchaseType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGood::.ctor(JSONObject)
extern "C"  void VirtualGood__ctor_m246186104 (VirtualGood_t840235038 * __this, JSONObject_t1752376903 * ___jsonVg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.Store.VirtualGood::toJSONObject()
extern "C"  JSONObject_t1752376903 * VirtualGood_toJSONObject_m1589255805 (VirtualGood_t840235038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGood::ResetBalance(System.Int32,System.Boolean)
extern "C"  int32_t VirtualGood_ResetBalance_m3651636908 (VirtualGood_t840235038 * __this, int32_t ___balance0, bool ___notify1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGood::GetBalance()
extern "C"  int32_t VirtualGood_GetBalance_m470518201 (VirtualGood_t840235038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
