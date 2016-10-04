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

// Soomla.Store.PurchasableVirtualItem
struct PurchasableVirtualItem_t2555170966;
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

// System.Void Soomla.Store.PurchasableVirtualItem::.ctor(System.String,System.String,System.String,Soomla.Store.PurchaseType)
extern "C"  void PurchasableVirtualItem__ctor_m3541153984 (PurchasableVirtualItem_t2555170966 * __this, String_t* ___name0, String_t* ___description1, String_t* ___itemId2, PurchaseType_t2779557329 * ___purchaseType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.PurchasableVirtualItem::.ctor(JSONObject)
extern "C"  void PurchasableVirtualItem__ctor_m22832184 (PurchasableVirtualItem_t2555170966 * __this, JSONObject_t1752376903 * ___jsonItem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.PurchasableVirtualItem::CanAfford()
extern "C"  bool PurchasableVirtualItem_CanAfford_m2888766785 (PurchasableVirtualItem_t2555170966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.PurchasableVirtualItem::Buy(System.String)
extern "C"  void PurchasableVirtualItem_Buy_m3203247519 (PurchasableVirtualItem_t2555170966 * __this, String_t* ___payload0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.Store.PurchasableVirtualItem::toJSONObject()
extern "C"  JSONObject_t1752376903 * PurchasableVirtualItem_toJSONObject_m2201231569 (PurchasableVirtualItem_t2555170966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
