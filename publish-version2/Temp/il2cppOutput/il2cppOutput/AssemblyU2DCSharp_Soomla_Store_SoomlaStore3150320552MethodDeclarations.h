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

// Soomla.Store.SoomlaStore
struct SoomlaStore_t3150320552;
// Soomla.Store.IStoreAssets
struct IStoreAssets_t320796049;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void Soomla.Store.SoomlaStore::.ctor()
extern "C"  void SoomlaStore__ctor_m908110101 (SoomlaStore_t3150320552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStore::.cctor()
extern "C"  void SoomlaStore__cctor_m1899513144 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.SoomlaStore Soomla.Store.SoomlaStore::get_instance()
extern "C"  SoomlaStore_t3150320552 * SoomlaStore_get_instance_m88735620 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.SoomlaStore::Initialize(Soomla.Store.IStoreAssets)
extern "C"  bool SoomlaStore_Initialize_m1497100888 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___storeAssets0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStore::BuyMarketItem(System.String,System.String)
extern "C"  void SoomlaStore_BuyMarketItem_m363137846 (Il2CppObject * __this /* static, unused */, String_t* ___productId0, String_t* ___payload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStore::RefreshInventory()
extern "C"  void SoomlaStore_RefreshInventory_m792602896 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStore::RefreshMarketItemsDetails()
extern "C"  void SoomlaStore_RefreshMarketItemsDetails_m2878991852 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStore::RestoreTransactions()
extern "C"  void SoomlaStore_RestoreTransactions_m643212534 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.SoomlaStore::TransactionsAlreadyRestored()
extern "C"  bool SoomlaStore_TransactionsAlreadyRestored_m3220221752 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStore::StartIabServiceInBg()
extern "C"  void SoomlaStore_StartIabServiceInBg_m3946136042 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStore::StopIabServiceInBg()
extern "C"  void SoomlaStore_StopIabServiceInBg_m445527014 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStore::_loadBillingService()
extern "C"  void SoomlaStore__loadBillingService_m3065240562 (SoomlaStore_t3150320552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStore::_buyMarketItem(System.String,System.String)
extern "C"  void SoomlaStore__buyMarketItem_m3160767385 (SoomlaStore_t3150320552 * __this, String_t* ___productId0, String_t* ___payload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStore::_refreshInventory()
extern "C"  void SoomlaStore__refreshInventory_m2071712371 (SoomlaStore_t3150320552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStore::_restoreTransactions()
extern "C"  void SoomlaStore__restoreTransactions_m1643732147 (SoomlaStore_t3150320552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStore::_refreshMarketItemsDetails()
extern "C"  void SoomlaStore__refreshMarketItemsDetails_m3356566505 (SoomlaStore_t3150320552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.SoomlaStore::_transactionsAlreadyRestored()
extern "C"  bool SoomlaStore__transactionsAlreadyRestored_m2955675101 (SoomlaStore_t3150320552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStore::_startIabServiceInBg()
extern "C"  void SoomlaStore__startIabServiceInBg_m651688359 (SoomlaStore_t3150320552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStore::_stopIabServiceInBg()
extern "C"  void SoomlaStore__stopIabServiceInBg_m1309085833 (SoomlaStore_t3150320552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.SoomlaStore::get_Initialized()
extern "C"  bool SoomlaStore_get_Initialized_m729818410 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.SoomlaStore::set_Initialized(System.Boolean)
extern "C"  void SoomlaStore_set_Initialized_m696834145 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
