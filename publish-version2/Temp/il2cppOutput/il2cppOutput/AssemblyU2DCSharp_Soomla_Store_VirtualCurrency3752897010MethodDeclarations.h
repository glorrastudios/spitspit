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

// Soomla.Store.VirtualCurrency
struct VirtualCurrency_t3752897010;
// System.String
struct String_t;
// JSONObject
struct JSONObject_t1752376903;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_JSONObject1752376903.h"

// System.Void Soomla.Store.VirtualCurrency::.ctor(System.String,System.String,System.String)
extern "C"  void VirtualCurrency__ctor_m463475663 (VirtualCurrency_t3752897010 * __this, String_t* ___name0, String_t* ___description1, String_t* ___itemId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualCurrency::.ctor(JSONObject)
extern "C"  void VirtualCurrency__ctor_m1927906340 (VirtualCurrency_t3752897010 * __this, JSONObject_t1752376903 * ___jsonVc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.Store.VirtualCurrency::toJSONObject()
extern "C"  JSONObject_t1752376903 * VirtualCurrency_toJSONObject_m623091537 (VirtualCurrency_t3752897010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrency::Give(System.Int32,System.Boolean)
extern "C"  int32_t VirtualCurrency_Give_m732140884 (VirtualCurrency_t3752897010 * __this, int32_t ___amount0, bool ___notify1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrency::Take(System.Int32,System.Boolean)
extern "C"  int32_t VirtualCurrency_Take_m1746241438 (VirtualCurrency_t3752897010 * __this, int32_t ___amount0, bool ___notify1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrency::ResetBalance(System.Int32,System.Boolean)
extern "C"  int32_t VirtualCurrency_ResetBalance_m72508760 (VirtualCurrency_t3752897010 * __this, int32_t ___balance0, bool ___notify1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrency::GetBalance()
extern "C"  int32_t VirtualCurrency_GetBalance_m636711821 (VirtualCurrency_t3752897010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
