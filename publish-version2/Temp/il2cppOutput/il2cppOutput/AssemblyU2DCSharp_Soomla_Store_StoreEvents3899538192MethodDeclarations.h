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

// Soomla.Store.StoreEvents
struct StoreEvents_t3899538192;
// Soomla.Store.StoreEvents/RunLaterDelegate
struct RunLaterDelegate_t742861702;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.String
struct String_t;
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
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;
// System.Collections.Generic.List`1<Soomla.Store.MarketItem>
struct List_1_t4071767134;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Soomla_Store_StoreEvents_RunLater742861702.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Soomla_Store_VirtualCurrency3752897010.h"
#include "AssemblyU2DCSharp_Soomla_Store_VirtualGood840235038.h"
#include "AssemblyU2DCSharp_Soomla_Store_EquippableVG2375986625.h"
#include "AssemblyU2DCSharp_Soomla_Store_UpgradeVG3350816643.h"
#include "AssemblyU2DCSharp_Soomla_Store_PurchasableVirtualI2555170966.h"

// System.Void Soomla.Store.StoreEvents::.ctor()
extern "C"  void StoreEvents__ctor_m881481389 (StoreEvents_t3899538192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::.cctor()
extern "C"  void StoreEvents__cctor_m1074023072 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.StoreEvents::get_DontDestroySingleton()
extern "C"  bool StoreEvents_get_DontDestroySingleton_m3683596310 (StoreEvents_t3899538192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::eventDispatcher_Init()
extern "C"  void StoreEvents_eventDispatcher_Init_m1325154085 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::RunLater(Soomla.Store.StoreEvents/RunLaterDelegate)
extern "C"  void StoreEvents_RunLater_m3310169555 (StoreEvents_t3899538192 * __this, RunLaterDelegate_t742861702 * ___runLaterDelegate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Soomla.Store.StoreEvents::RunLaterPriv(System.Single,Soomla.Store.StoreEvents/RunLaterDelegate)
extern "C"  Il2CppObject * StoreEvents_RunLaterPriv_m2563736129 (StoreEvents_t3899538192 * __this, float ___delay0, RunLaterDelegate_t742861702 * ___runLaterDelegate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::Initialize()
extern "C"  void StoreEvents_Initialize_m773727239 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onBillingSupported(System.String)
extern "C"  void StoreEvents_onBillingSupported_m1165172569 (StoreEvents_t3899538192 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onBillingNotSupported(System.String)
extern "C"  void StoreEvents_onBillingNotSupported_m3073648448 (StoreEvents_t3899538192 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onCurrencyBalanceChanged(System.String)
extern "C"  void StoreEvents_onCurrencyBalanceChanged_m764550691 (StoreEvents_t3899538192 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onCurrencyBalanceChanged(System.String,System.Boolean)
extern "C"  void StoreEvents_onCurrencyBalanceChanged_m3059731194 (StoreEvents_t3899538192 * __this, String_t* ___message0, bool ___alsoPush1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onGoodBalanceChanged(System.String)
extern "C"  void StoreEvents_onGoodBalanceChanged_m3867720311 (StoreEvents_t3899538192 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onGoodBalanceChanged(System.String,System.Boolean)
extern "C"  void StoreEvents_onGoodBalanceChanged_m431651878 (StoreEvents_t3899538192 * __this, String_t* ___message0, bool ___alsoPush1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onGoodEquipped(System.String)
extern "C"  void StoreEvents_onGoodEquipped_m505748336 (StoreEvents_t3899538192 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onGoodEquipped(System.String,System.Boolean)
extern "C"  void StoreEvents_onGoodEquipped_m1353902605 (StoreEvents_t3899538192 * __this, String_t* ___message0, bool ___alsoPush1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onGoodUnequipped(System.String)
extern "C"  void StoreEvents_onGoodUnequipped_m2112537911 (StoreEvents_t3899538192 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onGoodUnequipped(System.String,System.Boolean)
extern "C"  void StoreEvents_onGoodUnequipped_m1915328870 (StoreEvents_t3899538192 * __this, String_t* ___message0, bool ___alsoPush1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onGoodUpgrade(System.String)
extern "C"  void StoreEvents_onGoodUpgrade_m3858659255 (StoreEvents_t3899538192 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onGoodUpgrade(System.String,System.Boolean)
extern "C"  void StoreEvents_onGoodUpgrade_m3068827366 (StoreEvents_t3899538192 * __this, String_t* ___message0, bool ___alsoPush1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onItemPurchased(System.String)
extern "C"  void StoreEvents_onItemPurchased_m2946420550 (StoreEvents_t3899538192 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onItemPurchased(System.String,System.Boolean)
extern "C"  void StoreEvents_onItemPurchased_m204230519 (StoreEvents_t3899538192 * __this, String_t* ___message0, bool ___alsoPush1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onItemPurchaseStarted(System.String)
extern "C"  void StoreEvents_onItemPurchaseStarted_m2396525289 (StoreEvents_t3899538192 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onItemPurchaseStarted(System.String,System.Boolean)
extern "C"  void StoreEvents_onItemPurchaseStarted_m2160390516 (StoreEvents_t3899538192 * __this, String_t* ___message0, bool ___alsoPush1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onMarketPurchaseCancelled(System.String)
extern "C"  void StoreEvents_onMarketPurchaseCancelled_m3652619714 (StoreEvents_t3899538192 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onMarketPurchaseDeferred(System.String)
extern "C"  void StoreEvents_onMarketPurchaseDeferred_m2523432976 (StoreEvents_t3899538192 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onMarketPurchase(System.String)
extern "C"  void StoreEvents_onMarketPurchase_m4156194799 (StoreEvents_t3899538192 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onMarketPurchaseStarted(System.String)
extern "C"  void StoreEvents_onMarketPurchaseStarted_m287501586 (StoreEvents_t3899538192 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onMarketRefund(System.String)
extern "C"  void StoreEvents_onMarketRefund_m4081227864 (StoreEvents_t3899538192 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onRestoreTransactionsFinished(System.String)
extern "C"  void StoreEvents_onRestoreTransactionsFinished_m2998917377 (StoreEvents_t3899538192 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onRestoreTransactionsStarted(System.String)
extern "C"  void StoreEvents_onRestoreTransactionsStarted_m3791552174 (StoreEvents_t3899538192 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onMarketItemsRefreshStarted(System.String)
extern "C"  void StoreEvents_onMarketItemsRefreshStarted_m2810354444 (StoreEvents_t3899538192 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onMarketItemsRefreshFailed(System.String)
extern "C"  void StoreEvents_onMarketItemsRefreshFailed_m2342212152 (StoreEvents_t3899538192 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onMarketItemsRefreshFinished(System.String)
extern "C"  void StoreEvents_onMarketItemsRefreshFinished_m2646558819 (StoreEvents_t3899538192 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onUnexpectedStoreError(System.String)
extern "C"  void StoreEvents_onUnexpectedStoreError_m2414179028 (StoreEvents_t3899538192 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onUnexpectedStoreError(System.String,System.Boolean)
extern "C"  void StoreEvents_onUnexpectedStoreError_m3595853353 (StoreEvents_t3899538192 * __this, String_t* ___message0, bool ___alsoPush1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onVerificationStarted(System.String)
extern "C"  void StoreEvents_onVerificationStarted_m1413615760 (StoreEvents_t3899538192 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onSoomlaStoreInitialized(System.String)
extern "C"  void StoreEvents_onSoomlaStoreInitialized_m1733805610 (StoreEvents_t3899538192 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::onSoomlaStoreInitialized(System.String,System.Boolean)
extern "C"  void StoreEvents_onSoomlaStoreInitialized_m4270994451 (StoreEvents_t3899538192 * __this, String_t* ___message0, bool ___alsoPush1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnBillingNotSupported>m__32()
extern "C"  void StoreEvents_U3COnBillingNotSupportedU3Em__32_m2878371072 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnBillingSupported>m__33()
extern "C"  void StoreEvents_U3COnBillingSupportedU3Em__33_m1032504744 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnCurrencyBalanceChanged>m__34(Soomla.Store.VirtualCurrency,System.Int32,System.Int32)
extern "C"  void StoreEvents_U3COnCurrencyBalanceChangedU3Em__34_m3587234543 (Il2CppObject * __this /* static, unused */, VirtualCurrency_t3752897010 * p0, int32_t p1, int32_t p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnGoodBalanceChanged>m__35(Soomla.Store.VirtualGood,System.Int32,System.Int32)
extern "C"  void StoreEvents_U3COnGoodBalanceChangedU3Em__35_m2958516976 (Il2CppObject * __this /* static, unused */, VirtualGood_t840235038 * p0, int32_t p1, int32_t p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnGoodEquipped>m__36(Soomla.Store.EquippableVG)
extern "C"  void StoreEvents_U3COnGoodEquippedU3Em__36_m39645415 (Il2CppObject * __this /* static, unused */, EquippableVG_t2375986625 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnGoodUnEquipped>m__37(Soomla.Store.EquippableVG)
extern "C"  void StoreEvents_U3COnGoodUnEquippedU3Em__37_m1121671725 (Il2CppObject * __this /* static, unused */, EquippableVG_t2375986625 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnGoodUpgrade>m__38(Soomla.Store.VirtualGood,Soomla.Store.UpgradeVG)
extern "C"  void StoreEvents_U3COnGoodUpgradeU3Em__38_m1631576754 (Il2CppObject * __this /* static, unused */, VirtualGood_t840235038 * p0, UpgradeVG_t3350816643 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnItemPurchased>m__39(Soomla.Store.PurchasableVirtualItem,System.String)
extern "C"  void StoreEvents_U3COnItemPurchasedU3Em__39_m4115360897 (Il2CppObject * __this /* static, unused */, PurchasableVirtualItem_t2555170966 * p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnItemPurchaseStarted>m__3A(Soomla.Store.PurchasableVirtualItem)
extern "C"  void StoreEvents_U3COnItemPurchaseStartedU3Em__3A_m1436779296 (Il2CppObject * __this /* static, unused */, PurchasableVirtualItem_t2555170966 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnMarketPurchaseCancelled>m__3B(Soomla.Store.PurchasableVirtualItem)
extern "C"  void StoreEvents_U3COnMarketPurchaseCancelledU3Em__3B_m3050935064 (Il2CppObject * __this /* static, unused */, PurchasableVirtualItem_t2555170966 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnMarketPurchaseDeferred>m__3C(Soomla.Store.PurchasableVirtualItem,System.String)
extern "C"  void StoreEvents_U3COnMarketPurchaseDeferredU3Em__3C_m3124650401 (Il2CppObject * __this /* static, unused */, PurchasableVirtualItem_t2555170966 * p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnMarketPurchase>m__3D(Soomla.Store.PurchasableVirtualItem,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void StoreEvents_U3COnMarketPurchaseU3Em__3D_m2020177656 (Il2CppObject * __this /* static, unused */, PurchasableVirtualItem_t2555170966 * p0, String_t* p1, Dictionary_2_t2606186806 * p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnMarketPurchaseStarted>m__3E(Soomla.Store.PurchasableVirtualItem)
extern "C"  void StoreEvents_U3COnMarketPurchaseStartedU3Em__3E_m4178152517 (Il2CppObject * __this /* static, unused */, PurchasableVirtualItem_t2555170966 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnMarketRefund>m__3F(Soomla.Store.PurchasableVirtualItem)
extern "C"  void StoreEvents_U3COnMarketRefundU3Em__3F_m175225930 (Il2CppObject * __this /* static, unused */, PurchasableVirtualItem_t2555170966 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnRestoreTransactionsFinished>m__40(System.Boolean)
extern "C"  void StoreEvents_U3COnRestoreTransactionsFinishedU3Em__40_m2319319987 (Il2CppObject * __this /* static, unused */, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnRestoreTransactionsStarted>m__41()
extern "C"  void StoreEvents_U3COnRestoreTransactionsStartedU3Em__41_m2409819344 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnMarketItemsRefreshStarted>m__42()
extern "C"  void StoreEvents_U3COnMarketItemsRefreshStartedU3Em__42_m3204314899 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnMarketItemsRefreshFailed>m__43(System.String)
extern "C"  void StoreEvents_U3COnMarketItemsRefreshFailedU3Em__43_m2509301754 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnMarketItemsRefreshFinished>m__44(System.Collections.Generic.List`1<Soomla.Store.MarketItem>)
extern "C"  void StoreEvents_U3COnMarketItemsRefreshFinishedU3Em__44_m4010084509 (Il2CppObject * __this /* static, unused */, List_1_t4071767134 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnUnexpectedStoreError>m__45(System.Int32)
extern "C"  void StoreEvents_U3COnUnexpectedStoreErrorU3Em__45_m3376208575 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnVerificationStarted>m__46(Soomla.Store.PurchasableVirtualItem)
extern "C"  void StoreEvents_U3COnVerificationStartedU3Em__46_m3589426355 (Il2CppObject * __this /* static, unused */, PurchasableVirtualItem_t2555170966 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents::<OnSoomlaStoreInitialized>m__47()
extern "C"  void StoreEvents_U3COnSoomlaStoreInitializedU3Em__47_m579184474 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
