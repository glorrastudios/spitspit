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

// Soomla.Store.Example.ExampleEventHandler
struct ExampleEventHandler_t2092820292;
// Soomla.Store.PurchasableVirtualItem
struct PurchasableVirtualItem_t2555170966;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;
// Soomla.Store.EquippableVG
struct EquippableVG_t2375986625;
// Soomla.Store.VirtualGood
struct VirtualGood_t840235038;
// Soomla.Store.UpgradeVG
struct UpgradeVG_t3350816643;
// Soomla.Store.VirtualCurrency
struct VirtualCurrency_t3752897010;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Soomla_Store_PurchasableVirtualI2555170966.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Soomla_Store_EquippableVG2375986625.h"
#include "AssemblyU2DCSharp_Soomla_Store_VirtualGood840235038.h"
#include "AssemblyU2DCSharp_Soomla_Store_UpgradeVG3350816643.h"
#include "AssemblyU2DCSharp_Soomla_Store_VirtualCurrency3752897010.h"

// System.Void Soomla.Store.Example.ExampleEventHandler::.ctor()
extern "C"  void ExampleEventHandler__ctor_m2090379345 (ExampleEventHandler_t2092820292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onUnexpectedStoreError(System.Int32)
extern "C"  void ExampleEventHandler_onUnexpectedStoreError_m4258553883 (ExampleEventHandler_t2092820292 * __this, int32_t ___errorCode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onMarketPurchase(Soomla.Store.PurchasableVirtualItem,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void ExampleEventHandler_onMarketPurchase_m2630779428 (ExampleEventHandler_t2092820292 * __this, PurchasableVirtualItem_t2555170966 * ___pvi0, String_t* ___payload1, Dictionary_2_t2606186806 * ___extra2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onMarketRefund(Soomla.Store.PurchasableVirtualItem)
extern "C"  void ExampleEventHandler_onMarketRefund_m1478805280 (ExampleEventHandler_t2092820292 * __this, PurchasableVirtualItem_t2555170966 * ___pvi0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onItemPurchased(Soomla.Store.PurchasableVirtualItem,System.String)
extern "C"  void ExampleEventHandler_onItemPurchased_m3217943170 (ExampleEventHandler_t2092820292 * __this, PurchasableVirtualItem_t2555170966 * ___pvi0, String_t* ___payload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onGoodEquipped(Soomla.Store.EquippableVG)
extern "C"  void ExampleEventHandler_onGoodEquipped_m3077543725 (ExampleEventHandler_t2092820292 * __this, EquippableVG_t2375986625 * ___good0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onGoodUnequipped(Soomla.Store.EquippableVG)
extern "C"  void ExampleEventHandler_onGoodUnequipped_m3443668340 (ExampleEventHandler_t2092820292 * __this, EquippableVG_t2375986625 * ___good0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onGoodUpgrade(Soomla.Store.VirtualGood,Soomla.Store.UpgradeVG)
extern "C"  void ExampleEventHandler_onGoodUpgrade_m1194157778 (ExampleEventHandler_t2092820292 * __this, VirtualGood_t840235038 * ___good0, UpgradeVG_t3350816643 * ___currentUpgrade1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onBillingSupported()
extern "C"  void ExampleEventHandler_onBillingSupported_m2986620709 (ExampleEventHandler_t2092820292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onBillingNotSupported()
extern "C"  void ExampleEventHandler_onBillingNotSupported_m1474131110 (ExampleEventHandler_t2092820292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onMarketPurchaseStarted(Soomla.Store.PurchasableVirtualItem)
extern "C"  void ExampleEventHandler_onMarketPurchaseStarted_m908162450 (ExampleEventHandler_t2092820292 * __this, PurchasableVirtualItem_t2555170966 * ___pvi0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onItemPurchaseStarted(Soomla.Store.PurchasableVirtualItem)
extern "C"  void ExampleEventHandler_onItemPurchaseStarted_m3360823081 (ExampleEventHandler_t2092820292 * __this, PurchasableVirtualItem_t2555170966 * ___pvi0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onMarketPurchaseCancelled(Soomla.Store.PurchasableVirtualItem)
extern "C"  void ExampleEventHandler_onMarketPurchaseCancelled_m640592706 (ExampleEventHandler_t2092820292 * __this, PurchasableVirtualItem_t2555170966 * ___pvi0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onMarketPurchaseDeferred(Soomla.Store.PurchasableVirtualItem,System.String)
extern "C"  void ExampleEventHandler_onMarketPurchaseDeferred_m2068114964 (ExampleEventHandler_t2092820292 * __this, PurchasableVirtualItem_t2555170966 * ___pvi0, String_t* ___payload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onCurrencyBalanceChanged(Soomla.Store.VirtualCurrency,System.Int32,System.Int32)
extern "C"  void ExampleEventHandler_onCurrencyBalanceChanged_m3505132331 (ExampleEventHandler_t2092820292 * __this, VirtualCurrency_t3752897010 * ___virtualCurrency0, int32_t ___balance1, int32_t ___amountAdded2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onGoodBalanceChanged(Soomla.Store.VirtualGood,System.Int32,System.Int32)
extern "C"  void ExampleEventHandler_onGoodBalanceChanged_m3635891883 (ExampleEventHandler_t2092820292 * __this, VirtualGood_t840235038 * ___good0, int32_t ___balance1, int32_t ___amountAdded2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onRestoreTransactionsStarted()
extern "C"  void ExampleEventHandler_onRestoreTransactionsStarted_m3967495856 (ExampleEventHandler_t2092820292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onRestoreTransactionsFinished(System.Boolean)
extern "C"  void ExampleEventHandler_onRestoreTransactionsFinished_m2453123580 (ExampleEventHandler_t2092820292 * __this, bool ___success0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onVerificationStarted(Soomla.Store.PurchasableVirtualItem)
extern "C"  void ExampleEventHandler_onVerificationStarted_m332090768 (ExampleEventHandler_t2092820292 * __this, PurchasableVirtualItem_t2555170966 * ___pvi0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.Example.ExampleEventHandler::onSoomlaStoreInitialized()
extern "C"  void ExampleEventHandler_onSoomlaStoreInitialized_m1459927988 (ExampleEventHandler_t2092820292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
