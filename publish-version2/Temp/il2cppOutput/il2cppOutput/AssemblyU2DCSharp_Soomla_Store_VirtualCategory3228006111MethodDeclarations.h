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

// Soomla.Store.VirtualCategory
struct VirtualCategory_t3228006111;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// JSONObject
struct JSONObject_t1752376903;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_JSONObject1752376903.h"

// System.Void Soomla.Store.VirtualCategory::.ctor(System.String,System.Collections.Generic.List`1<System.String>)
extern "C"  void VirtualCategory__ctor_m2823381814 (VirtualCategory_t3228006111 * __this, String_t* ___name0, List_1_t1765447871 * ___goodItemIds1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualCategory::.ctor(JSONObject)
extern "C"  void VirtualCategory__ctor_m1645915671 (VirtualCategory_t3228006111 * __this, JSONObject_t1752376903 * ___jsonItem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.Store.VirtualCategory::toJSONObject()
extern "C"  JSONObject_t1752376903 * VirtualCategory_toJSONObject_m3825529406 (VirtualCategory_t3228006111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
