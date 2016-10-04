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

// Soomla.Store.MarketItem
struct MarketItem_t3274808165;
// System.String
struct String_t;
// JSONObject
struct JSONObject_t1752376903;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_JSONObject1752376903.h"

// System.Void Soomla.Store.MarketItem::.ctor(System.String,System.Double)
extern "C"  void MarketItem__ctor_m4259112142 (MarketItem_t3274808165 * __this, String_t* ___productId0, double ___price1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.MarketItem::.ctor(JSONObject)
extern "C"  void MarketItem__ctor_m2814139145 (MarketItem_t3274808165 * __this, JSONObject_t1752376903 * ___jsonObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.Store.MarketItem::toJSONObject()
extern "C"  JSONObject_t1752376903 * MarketItem_toJSONObject_m3373363872 (MarketItem_t3274808165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
