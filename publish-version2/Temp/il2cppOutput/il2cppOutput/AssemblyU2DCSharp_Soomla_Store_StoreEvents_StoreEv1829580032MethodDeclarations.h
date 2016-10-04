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

// Soomla.Store.StoreEvents/StoreEventPusher
struct StoreEventPusher_t1829580032;
// Soomla.Store.VirtualCurrency
struct VirtualCurrency_t3752897010;
// Soomla.Store.VirtualGood
struct VirtualGood_t840235038;
// Soomla.Store.EquippableVG
struct EquippableVG_t2375986625;
// Soomla.Store.UpgradeVG
struct UpgradeVG_t3350816643;
// Soomla.Store.PurchasableVirtualItem
struct PurchasableVirtualItem_t2555170966;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Soomla_Store_VirtualCurrency3752897010.h"
#include "AssemblyU2DCSharp_Soomla_Store_VirtualGood840235038.h"
#include "AssemblyU2DCSharp_Soomla_Store_EquippableVG2375986625.h"
#include "AssemblyU2DCSharp_Soomla_Store_UpgradeVG3350816643.h"
#include "AssemblyU2DCSharp_Soomla_Store_PurchasableVirtualI2555170966.h"
#include "mscorlib_System_String968488902.h"

// System.Void Soomla.Store.StoreEvents/StoreEventPusher::.ctor()
extern "C"  void StoreEventPusher__ctor_m90917194 (StoreEventPusher_t1829580032 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::PushEventSoomlaStoreInitialized()
extern "C"  void StoreEventPusher_PushEventSoomlaStoreInitialized_m2621545578 (StoreEventPusher_t1829580032 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::PushEventUnexpectedStoreError(System.Int32)
extern "C"  void StoreEventPusher_PushEventUnexpectedStoreError_m3742389585 (StoreEventPusher_t1829580032 * __this, int32_t ___errorCode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::PushEventOnCurrencyBalanceChanged(Soomla.Store.VirtualCurrency,System.Int32,System.Int32)
extern "C"  void StoreEventPusher_PushEventOnCurrencyBalanceChanged_m1672974688 (StoreEventPusher_t1829580032 * __this, VirtualCurrency_t3752897010 * ___currency0, int32_t ___balance1, int32_t ___amountAdded2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::PushEventOnGoodBalanceChanged(Soomla.Store.VirtualGood,System.Int32,System.Int32)
extern "C"  void StoreEventPusher_PushEventOnGoodBalanceChanged_m931844576 (StoreEventPusher_t1829580032 * __this, VirtualGood_t840235038 * ___good0, int32_t ___balance1, int32_t ___amountAdded2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::PushEventOnGoodEquipped(Soomla.Store.EquippableVG)
extern "C"  void StoreEventPusher_PushEventOnGoodEquipped_m4208780952 (StoreEventPusher_t1829580032 * __this, EquippableVG_t2375986625 * ___good0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::PushEventOnGoodUnequipped(Soomla.Store.EquippableVG)
extern "C"  void StoreEventPusher_PushEventOnGoodUnequipped_m3935917599 (StoreEventPusher_t1829580032 * __this, EquippableVG_t2375986625 * ___good0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::PushEventOnGoodUpgrade(Soomla.Store.VirtualGood,Soomla.Store.UpgradeVG)
extern "C"  void StoreEventPusher_PushEventOnGoodUpgrade_m3629938759 (StoreEventPusher_t1829580032 * __this, VirtualGood_t840235038 * ___good0, UpgradeVG_t3350816643 * ___upgrade1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::PushEventOnItemPurchased(Soomla.Store.PurchasableVirtualItem,System.String)
extern "C"  void StoreEventPusher_PushEventOnItemPurchased_m394082679 (StoreEventPusher_t1829580032 * __this, PurchasableVirtualItem_t2555170966 * ___item0, String_t* ___payload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::PushEventOnItemPurchaseStarted(Soomla.Store.PurchasableVirtualItem)
extern "C"  void StoreEventPusher_PushEventOnItemPurchaseStarted_m1514547998 (StoreEventPusher_t1829580032 * __this, PurchasableVirtualItem_t2555170966 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::_pushEventSoomlaStoreInitialized(System.String)
extern "C"  void StoreEventPusher__pushEventSoomlaStoreInitialized_m3540897477 (StoreEventPusher_t1829580032 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::_pushEventUnexpectedStoreError(System.String)
extern "C"  void StoreEventPusher__pushEventUnexpectedStoreError_m3073041967 (StoreEventPusher_t1829580032 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::_pushEventCurrencyBalanceChanged(System.String)
extern "C"  void StoreEventPusher__pushEventCurrencyBalanceChanged_m2571642558 (StoreEventPusher_t1829580032 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::_pushEventGoodBalanceChanged(System.String)
extern "C"  void StoreEventPusher__pushEventGoodBalanceChanged_m2545502354 (StoreEventPusher_t1829580032 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::_pushEventGoodEquipped(System.String)
extern "C"  void StoreEventPusher__pushEventGoodEquipped_m3925154251 (StoreEventPusher_t1829580032 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::_pushEventGoodUnequipped(System.String)
extern "C"  void StoreEventPusher__pushEventGoodUnequipped_m2511640786 (StoreEventPusher_t1829580032 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::_pushEventGoodUpgrade(System.String)
extern "C"  void StoreEventPusher__pushEventGoodUpgrade_m89637372 (StoreEventPusher_t1829580032 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::_pushEventItemPurchased(System.String)
extern "C"  void StoreEventPusher__pushEventItemPurchased_m1573821515 (StoreEventPusher_t1829580032 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/StoreEventPusher::_pushEventItemPurchaseStarted(System.String)
extern "C"  void StoreEventPusher__pushEventItemPurchaseStarted_m62474286 (StoreEventPusher_t1829580032 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
