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

// Soomla.Store.VirtualItemStorage
struct VirtualItemStorage_t4279700947;
// Soomla.Store.VirtualItem
struct VirtualItem_t840299124;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Soomla_Store_VirtualItem840299124.h"

// System.Void Soomla.Store.VirtualItemStorage::.ctor()
extern "C"  void VirtualItemStorage__ctor_m4172571266 (VirtualItemStorage_t4279700947 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualItemStorage::.cctor()
extern "C"  void VirtualItemStorage__cctor_m18594155 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualItemStorage::_getBalance(Soomla.Store.VirtualItem)
extern "C"  int32_t VirtualItemStorage__getBalance_m3216060993 (VirtualItemStorage_t4279700947 * __this, VirtualItem_t840299124 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualItemStorage::_setBalance(Soomla.Store.VirtualItem,System.Int32,System.Boolean)
extern "C"  int32_t VirtualItemStorage__setBalance_m942306043 (VirtualItemStorage_t4279700947 * __this, VirtualItem_t840299124 * ___item0, int32_t ___balance1, bool ___notify2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualItemStorage::_add(Soomla.Store.VirtualItem,System.Int32,System.Boolean)
extern "C"  int32_t VirtualItemStorage__add_m998969322 (VirtualItemStorage_t4279700947 * __this, VirtualItem_t840299124 * ___item0, int32_t ___amount1, bool ___notify2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualItemStorage::_remove(Soomla.Store.VirtualItem,System.Int32,System.Boolean)
extern "C"  int32_t VirtualItemStorage__remove_m3043562981 (VirtualItemStorage_t4279700947 * __this, VirtualItem_t840299124 * ___item0, int32_t ___amount1, bool ___notify2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
