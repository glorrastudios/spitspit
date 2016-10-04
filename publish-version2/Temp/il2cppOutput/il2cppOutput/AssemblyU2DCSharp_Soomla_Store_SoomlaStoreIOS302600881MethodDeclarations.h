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

// Soomla.Store.SoomlaStoreIOS
struct SoomlaStoreIOS_t302600881;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void Soomla.Store.SoomlaStoreIOS::.ctor()
extern "C"  void SoomlaStoreIOS__ctor_m265143652 (SoomlaStoreIOS_t302600881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStoreIOS::soomlaStore_LoadBillingService()
extern "C"  void SoomlaStoreIOS_soomlaStore_LoadBillingService_m3256879373 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.SoomlaStoreIOS::soomlaStore_BuyMarketItem(System.String,System.String)
extern "C"  int32_t SoomlaStoreIOS_soomlaStore_BuyMarketItem_m1335482790 (Il2CppObject * __this /* static, unused */, String_t* ___productId0, String_t* ___payload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStoreIOS::soomlaStore_RestoreTransactions()
extern "C"  void SoomlaStoreIOS_soomlaStore_RestoreTransactions_m3289567992 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStoreIOS::soomlaStore_RefreshInventory()
extern "C"  void SoomlaStoreIOS_soomlaStore_RefreshInventory_m1790347854 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStoreIOS::soomlaStore_RefreshMarketItemsDetails()
extern "C"  void SoomlaStoreIOS_soomlaStore_RefreshMarketItemsDetails_m3569881710 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStoreIOS::soomlaStore_TransactionsAlreadyRestored(System.Boolean&)
extern "C"  void SoomlaStoreIOS_soomlaStore_TransactionsAlreadyRestored_m322284295 (Il2CppObject * __this /* static, unused */, bool* ___outResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStoreIOS::soomlaStore_SetSSV(System.Boolean,System.String,System.Boolean)
extern "C"  void SoomlaStoreIOS_soomlaStore_SetSSV_m3538521321 (Il2CppObject * __this /* static, unused */, bool ___ssv0, String_t* ___verifyUrl1, bool ___forceOnItunesFailure2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStoreIOS::_loadBillingService()
extern "C"  void SoomlaStoreIOS__loadBillingService_m1475723777 (SoomlaStoreIOS_t302600881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStoreIOS::_buyMarketItem(System.String,System.String)
extern "C"  void SoomlaStoreIOS__buyMarketItem_m1870584936 (SoomlaStoreIOS_t302600881 * __this, String_t* ___productId0, String_t* ___payload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStoreIOS::_refreshInventory()
extern "C"  void SoomlaStoreIOS__refreshInventory_m684585026 (SoomlaStoreIOS_t302600881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStoreIOS::_restoreTransactions()
extern "C"  void SoomlaStoreIOS__restoreTransactions_m3908319364 (SoomlaStoreIOS_t302600881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStoreIOS::_refreshMarketItemsDetails()
extern "C"  void SoomlaStoreIOS__refreshMarketItemsDetails_m3492945658 (SoomlaStoreIOS_t302600881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.SoomlaStoreIOS::_transactionsAlreadyRestored()
extern "C"  bool SoomlaStoreIOS__transactionsAlreadyRestored_m1447071430 (SoomlaStoreIOS_t302600881 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
