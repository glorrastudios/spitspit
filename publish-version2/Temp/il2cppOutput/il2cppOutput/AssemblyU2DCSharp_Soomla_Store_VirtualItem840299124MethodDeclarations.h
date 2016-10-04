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

// Soomla.Store.VirtualItem
struct VirtualItem_t840299124;
// System.String
struct String_t;
// JSONObject
struct JSONObject_t1752376903;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_JSONObject1752376903.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Soomla.Store.VirtualItem::.ctor(System.String,System.String,System.String)
extern "C"  void VirtualItem__ctor_m1109198289 (VirtualItem_t840299124 * __this, String_t* ___name0, String_t* ___description1, String_t* ___itemId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualItem::.ctor(JSONObject)
extern "C"  void VirtualItem__ctor_m3932375650 (VirtualItem_t840299124 * __this, JSONObject_t1752376903 * ___jsonItem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Soomla.Store.VirtualItem::get_ItemId()
extern "C"  String_t* VirtualItem_get_ItemId_m947777429 (VirtualItem_t840299124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualItem::set_ItemId(System.String)
extern "C"  void VirtualItem_set_ItemId_m2210981020 (VirtualItem_t840299124 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.VirtualItem::Equals(System.Object)
extern "C"  bool VirtualItem_Equals_m162543814 (VirtualItem_t840299124 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualItem::GetHashCode()
extern "C"  int32_t VirtualItem_GetHashCode_m1502061546 (VirtualItem_t840299124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualItem::Give(System.Int32)
extern "C"  int32_t VirtualItem_Give_m3517342603 (VirtualItem_t840299124 * __this, int32_t ___amount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualItem::Take(System.Int32)
extern "C"  int32_t VirtualItem_Take_m2524669569 (VirtualItem_t840299124 * __this, int32_t ___amount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualItem::ResetBalance(System.Int32)
extern "C"  int32_t VirtualItem_ResetBalance_m1742891527 (VirtualItem_t840299124 * __this, int32_t ___balance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualItem::Save(System.Boolean)
extern "C"  void VirtualItem_Save_m1338638863 (VirtualItem_t840299124 * __this, bool ___saveToDB0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
