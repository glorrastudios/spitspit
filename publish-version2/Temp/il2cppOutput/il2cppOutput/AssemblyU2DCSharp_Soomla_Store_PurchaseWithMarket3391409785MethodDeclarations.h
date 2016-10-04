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

// Soomla.Store.PurchaseWithMarket
struct PurchaseWithMarket_t3391409785;
// System.String
struct String_t;
// Soomla.Store.MarketItem
struct MarketItem_t3274808165;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Soomla_Store_MarketItem3274808165.h"

// System.Void Soomla.Store.PurchaseWithMarket::.ctor(System.String,System.Double)
extern "C"  void PurchaseWithMarket__ctor_m2914367970 (PurchaseWithMarket_t3391409785 * __this, String_t* ___productId0, double ___price1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.PurchaseWithMarket::.ctor(Soomla.Store.MarketItem)
extern "C"  void PurchaseWithMarket__ctor_m3490446619 (PurchaseWithMarket_t3391409785 * __this, MarketItem_t3274808165 * ___marketItem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.PurchaseWithMarket::Buy(System.String)
extern "C"  void PurchaseWithMarket_Buy_m1337593346 (PurchaseWithMarket_t3391409785 * __this, String_t* ___payload0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.PurchaseWithMarket::CanAfford()
extern "C"  bool PurchaseWithMarket_CanAfford_m3677653054 (PurchaseWithMarket_t3391409785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Soomla.Store.PurchaseWithMarket::GetPrice()
extern "C"  String_t* PurchaseWithMarket_GetPrice_m2053598840 (PurchaseWithMarket_t3391409785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
