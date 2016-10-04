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

// Soomla.Store.CurrencyBalanceChangedEvent
struct CurrencyBalanceChangedEvent_t2496773927;
// Soomla.Store.VirtualCurrency
struct VirtualCurrency_t3752897010;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Soomla_Store_VirtualCurrency3752897010.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Soomla.Store.CurrencyBalanceChangedEvent::.ctor(Soomla.Store.VirtualCurrency,System.Int32,System.Int32)
extern "C"  void CurrencyBalanceChangedEvent__ctor_m1641902662 (CurrencyBalanceChangedEvent_t2496773927 * __this, VirtualCurrency_t3752897010 * ___item0, int32_t ___balance1, int32_t ___amountAdded2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.CurrencyBalanceChangedEvent::.ctor(Soomla.Store.VirtualCurrency,System.Int32,System.Int32,System.Object)
extern "C"  void CurrencyBalanceChangedEvent__ctor_m3223538324 (CurrencyBalanceChangedEvent_t2496773927 * __this, VirtualCurrency_t3752897010 * ___item0, int32_t ___balance1, int32_t ___amountAdded2, Il2CppObject * ___sender3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.VirtualCurrency Soomla.Store.CurrencyBalanceChangedEvent::getCurrencyItem()
extern "C"  VirtualCurrency_t3752897010 * CurrencyBalanceChangedEvent_getCurrencyItem_m4208242401 (CurrencyBalanceChangedEvent_t2496773927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.CurrencyBalanceChangedEvent::getBalance()
extern "C"  int32_t CurrencyBalanceChangedEvent_getBalance_m672294114 (CurrencyBalanceChangedEvent_t2496773927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.CurrencyBalanceChangedEvent::getAmountAdded()
extern "C"  int32_t CurrencyBalanceChangedEvent_getAmountAdded_m2119305230 (CurrencyBalanceChangedEvent_t2496773927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
