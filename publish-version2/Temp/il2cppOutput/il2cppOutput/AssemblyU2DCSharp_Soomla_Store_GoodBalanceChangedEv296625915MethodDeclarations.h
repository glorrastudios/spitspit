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

// Soomla.Store.GoodBalanceChangedEvent
struct GoodBalanceChangedEvent_t296625915;
// Soomla.Store.VirtualGood
struct VirtualGood_t840235038;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Soomla_Store_VirtualGood840235038.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Soomla.Store.GoodBalanceChangedEvent::.ctor(Soomla.Store.VirtualGood,System.Int32,System.Int32)
extern "C"  void GoodBalanceChangedEvent__ctor_m471020230 (GoodBalanceChangedEvent_t296625915 * __this, VirtualGood_t840235038 * ___item0, int32_t ___balance1, int32_t ___amountAdded2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.GoodBalanceChangedEvent::.ctor(Soomla.Store.VirtualGood,System.Int32,System.Int32,System.Object)
extern "C"  void GoodBalanceChangedEvent__ctor_m1996368660 (GoodBalanceChangedEvent_t296625915 * __this, VirtualGood_t840235038 * ___item0, int32_t ___balance1, int32_t ___amountAdded2, Il2CppObject * ___sender3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.VirtualGood Soomla.Store.GoodBalanceChangedEvent::getGoodItemId()
extern "C"  VirtualGood_t840235038 * GoodBalanceChangedEvent_getGoodItemId_m2215961312 (GoodBalanceChangedEvent_t296625915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.GoodBalanceChangedEvent::getBalance()
extern "C"  int32_t GoodBalanceChangedEvent_getBalance_m2384531126 (GoodBalanceChangedEvent_t296625915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.GoodBalanceChangedEvent::getAmountAdded()
extern "C"  int32_t GoodBalanceChangedEvent_getAmountAdded_m2257561570 (GoodBalanceChangedEvent_t296625915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
