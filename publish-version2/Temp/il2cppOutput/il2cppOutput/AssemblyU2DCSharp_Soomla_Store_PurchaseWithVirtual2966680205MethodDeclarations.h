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

// Soomla.Store.PurchaseWithVirtualItem
struct PurchaseWithVirtualItem_t2966680205;
// System.String
struct String_t;
// Soomla.Store.VirtualItem
struct VirtualItem_t840299124;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Soomla_Store_VirtualItem840299124.h"

// System.Void Soomla.Store.PurchaseWithVirtualItem::.ctor(System.String,System.Int32)
extern "C"  void PurchaseWithVirtualItem__ctor_m2349298405 (PurchaseWithVirtualItem_t2966680205 * __this, String_t* ___targetItemId0, int32_t ___amount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.PurchaseWithVirtualItem::Buy(System.String)
extern "C"  void PurchaseWithVirtualItem_Buy_m3996343374 (PurchaseWithVirtualItem_t2966680205 * __this, String_t* ___payload0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.PurchaseWithVirtualItem::CanAfford()
extern "C"  bool PurchaseWithVirtualItem_CanAfford_m1383622282 (PurchaseWithVirtualItem_t2966680205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Soomla.Store.PurchaseWithVirtualItem::GetPrice()
extern "C"  String_t* PurchaseWithVirtualItem_GetPrice_m1059529450 (PurchaseWithVirtualItem_t2966680205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.VirtualItem Soomla.Store.PurchaseWithVirtualItem::getTargetVirtualItem()
extern "C"  VirtualItem_t840299124 * PurchaseWithVirtualItem_getTargetVirtualItem_m2852842166 (PurchaseWithVirtualItem_t2966680205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.PurchaseWithVirtualItem::checkTargetBalance(Soomla.Store.VirtualItem)
extern "C"  bool PurchaseWithVirtualItem_checkTargetBalance_m26258969 (PurchaseWithVirtualItem_t2966680205 * __this, VirtualItem_t840299124 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
