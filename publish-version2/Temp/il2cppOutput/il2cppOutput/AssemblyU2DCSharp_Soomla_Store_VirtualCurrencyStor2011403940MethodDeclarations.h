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

// Soomla.Store.VirtualCurrencyStorageIOS
struct VirtualCurrencyStorageIOS_t2011403940;
// System.String
struct String_t;
// Soomla.Store.VirtualItem
struct VirtualItem_t840299124;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Soomla_Store_VirtualItem840299124.h"

// System.Void Soomla.Store.VirtualCurrencyStorageIOS::.ctor()
extern "C"  void VirtualCurrencyStorageIOS__ctor_m3173724825 (VirtualCurrencyStorageIOS_t2011403940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyStorageIOS::vcStorage_GetBalance(System.String,System.Int32&)
extern "C"  int32_t VirtualCurrencyStorageIOS_vcStorage_GetBalance_m3569799047 (Il2CppObject * __this /* static, unused */, String_t* ___itemId0, int32_t* ___outBalance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyStorageIOS::vcStorage_SetBalance(System.String,System.Int32,System.Boolean,System.Int32&)
extern "C"  int32_t VirtualCurrencyStorageIOS_vcStorage_SetBalance_m4161698009 (Il2CppObject * __this /* static, unused */, String_t* ___itemId0, int32_t ___balance1, bool ___notify2, int32_t* ___outBalance3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyStorageIOS::vcStorage_Add(System.String,System.Int32,System.Boolean,System.Int32&)
extern "C"  int32_t VirtualCurrencyStorageIOS_vcStorage_Add_m1440350628 (Il2CppObject * __this /* static, unused */, String_t* ___itemId0, int32_t ___amount1, bool ___notify2, int32_t* ___outBalance3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyStorageIOS::vcStorage_Remove(System.String,System.Int32,System.Boolean,System.Int32&)
extern "C"  int32_t VirtualCurrencyStorageIOS_vcStorage_Remove_m661569327 (Il2CppObject * __this /* static, unused */, String_t* ___itemId0, int32_t ___amount1, bool ___notify2, int32_t* ___outBalance3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyStorageIOS::_getBalance(Soomla.Store.VirtualItem)
extern "C"  int32_t VirtualCurrencyStorageIOS__getBalance_m1092035900 (VirtualCurrencyStorageIOS_t2011403940 * __this, VirtualItem_t840299124 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyStorageIOS::_setBalance(Soomla.Store.VirtualItem,System.Int32,System.Boolean)
extern "C"  int32_t VirtualCurrencyStorageIOS__setBalance_m1734766454 (VirtualCurrencyStorageIOS_t2011403940 * __this, VirtualItem_t840299124 * ___item0, int32_t ___balance1, bool ___notify2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyStorageIOS::_add(Soomla.Store.VirtualItem,System.Int32,System.Boolean)
extern "C"  int32_t VirtualCurrencyStorageIOS__add_m1255036879 (VirtualCurrencyStorageIOS_t2011403940 * __this, VirtualItem_t840299124 * ___item0, int32_t ___amount1, bool ___notify2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualCurrencyStorageIOS::_remove(Soomla.Store.VirtualItem,System.Int32,System.Boolean)
extern "C"  int32_t VirtualCurrencyStorageIOS__remove_m3690235872 (VirtualCurrencyStorageIOS_t2011403940 * __this, VirtualItem_t840299124 * ___item0, int32_t ___amount1, bool ___notify2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
