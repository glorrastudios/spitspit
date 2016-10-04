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

// Soomla.Store.ItemPurchasedEvent
struct ItemPurchasedEvent_t561905856;
// Soomla.Store.PurchasableVirtualItem
struct PurchasableVirtualItem_t2555170966;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Soomla_Store_PurchasableVirtualI2555170966.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Soomla.Store.ItemPurchasedEvent::.ctor(Soomla.Store.PurchasableVirtualItem,System.String)
extern "C"  void ItemPurchasedEvent__ctor_m1982361293 (ItemPurchasedEvent_t561905856 * __this, PurchasableVirtualItem_t2555170966 * ___item0, String_t* ___payload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.ItemPurchasedEvent::.ctor(Soomla.Store.PurchasableVirtualItem,System.String,System.Object)
extern "C"  void ItemPurchasedEvent__ctor_m3929689819 (ItemPurchasedEvent_t561905856 * __this, PurchasableVirtualItem_t2555170966 * ___item0, String_t* ___payload1, Il2CppObject * ___sender2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.PurchasableVirtualItem Soomla.Store.ItemPurchasedEvent::getItem()
extern "C"  PurchasableVirtualItem_t2555170966 * ItemPurchasedEvent_getItem_m3172091843 (ItemPurchasedEvent_t561905856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Soomla.Store.ItemPurchasedEvent::getPayload()
extern "C"  String_t* ItemPurchasedEvent_getPayload_m3139539940 (ItemPurchasedEvent_t561905856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
