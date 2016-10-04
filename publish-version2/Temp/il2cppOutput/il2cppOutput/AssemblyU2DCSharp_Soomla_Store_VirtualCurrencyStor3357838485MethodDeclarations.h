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

// Soomla.Store.VirtualCurrencyStorage
struct VirtualCurrencyStorage_t3357838485;
// Soomla.Store.VirtualItem
struct VirtualItem_t840299124;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Soomla_Store_VirtualItem840299124.h"

// System.Void Soomla.Store.VirtualCurrencyStorage::.ctor()
extern "C"  void VirtualCurrencyStorage__ctor_m2378452992 (VirtualCurrencyStorage_t3357838485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualCurrencyStorage::.cctor()
extern "C"  void VirtualCurrencyStorage__cctor_m235502509 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.VirtualCurrencyStorage Soomla.Store.VirtualCurrencyStorage::get_instance()
extern "C"  VirtualCurrencyStorage_t3357838485 * VirtualCurrencyStorage_get_instance_m417081562 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyStorage::GetBalance(Soomla.Store.VirtualItem)
extern "C"  int32_t VirtualCurrencyStorage_GetBalance_m4124291594 (Il2CppObject * __this /* static, unused */, VirtualItem_t840299124 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyStorage::SetBalance(Soomla.Store.VirtualItem,System.Int32)
extern "C"  int32_t VirtualCurrencyStorage_SetBalance_m1266533145 (Il2CppObject * __this /* static, unused */, VirtualItem_t840299124 * ___item0, int32_t ___balance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyStorage::SetBalance(Soomla.Store.VirtualItem,System.Int32,System.Boolean)
extern "C"  int32_t VirtualCurrencyStorage_SetBalance_m3647134532 (Il2CppObject * __this /* static, unused */, VirtualItem_t840299124 * ___item0, int32_t ___balance1, bool ___notify2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyStorage::Add(Soomla.Store.VirtualItem,System.Int32)
extern "C"  int32_t VirtualCurrencyStorage_Add_m3490667580 (Il2CppObject * __this /* static, unused */, VirtualItem_t840299124 * ___item0, int32_t ___amount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyStorage::Add(Soomla.Store.VirtualItem,System.Int32,System.Boolean)
extern "C"  int32_t VirtualCurrencyStorage_Add_m2235398081 (Il2CppObject * __this /* static, unused */, VirtualItem_t840299124 * ___item0, int32_t ___amount1, bool ___notify2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyStorage::Remove(Soomla.Store.VirtualItem,System.Int32)
extern "C"  int32_t VirtualCurrencyStorage_Remove_m2242768111 (Il2CppObject * __this /* static, unused */, VirtualItem_t840299124 * ___item0, int32_t ___amount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyStorage::Remove(Soomla.Store.VirtualItem,System.Int32,System.Boolean)
extern "C"  int32_t VirtualCurrencyStorage_Remove_m3853191854 (Il2CppObject * __this /* static, unused */, VirtualItem_t840299124 * ___item0, int32_t ___amount1, bool ___notify2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
