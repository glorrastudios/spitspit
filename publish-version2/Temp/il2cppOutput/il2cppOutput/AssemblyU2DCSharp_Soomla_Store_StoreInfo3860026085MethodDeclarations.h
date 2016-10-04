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

// Soomla.Store.StoreInfo
struct StoreInfo_t3860026085;
// Soomla.Store.PurchasableVirtualItem[]
struct PurchasableVirtualItemU5BU5D_t3234899;
// Soomla.Store.IStoreAssets
struct IStoreAssets_t320796049;
// Soomla.Store.VirtualItem
struct VirtualItem_t840299124;
// System.String
struct String_t;
// Soomla.Store.PurchasableVirtualItem
struct PurchasableVirtualItem_t2555170966;
// Soomla.Store.VirtualCategory
struct VirtualCategory_t3228006111;
// Soomla.Store.UpgradeVG
struct UpgradeVG_t3350816643;
// System.Collections.Generic.List`1<Soomla.Store.UpgradeVG>
struct List_1_t4147775612;
// System.Collections.Generic.List`1<Soomla.Store.VirtualItem>
struct List_1_t1637258093;
// JSONObject
struct JSONObject_t1752376903;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Soomla_Store_VirtualItem840299124.h"
#include "AssemblyU2DCSharp_JSONObject1752376903.h"
#include "AssemblyU2DCSharp_Soomla_Store_UpgradeVG3350816643.h"

// System.Void Soomla.Store.StoreInfo::.ctor()
extern "C"  void StoreInfo__ctor_m673150840 (StoreInfo_t3860026085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInfo::.cctor()
extern "C"  void StoreInfo__cctor_m3205710645 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.StoreInfo Soomla.Store.StoreInfo::get_instance()
extern "C"  StoreInfo_t3860026085 * StoreInfo_get_instance_m1258796004 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.StoreInfo::assetsArrayHasMarketIdDuplicates(Soomla.Store.PurchasableVirtualItem[])
extern "C"  bool StoreInfo_assetsArrayHasMarketIdDuplicates_m2933684513 (Il2CppObject * __this /* static, unused */, PurchasableVirtualItemU5BU5D_t3234899* ___assetsArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInfo::validateStoreAssets(Soomla.Store.IStoreAssets)
extern "C"  void StoreInfo_validateStoreAssets_m2884408455 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___storeAssets0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInfo::SetStoreAssets(Soomla.Store.IStoreAssets)
extern "C"  void StoreInfo_SetStoreAssets_m1904796285 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___storeAssets0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.VirtualItem Soomla.Store.StoreInfo::GetItemByItemId(System.String)
extern "C"  VirtualItem_t840299124 * StoreInfo_GetItemByItemId_m3707996393 (Il2CppObject * __this /* static, unused */, String_t* ___itemId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.PurchasableVirtualItem Soomla.Store.StoreInfo::GetPurchasableItemWithProductId(System.String)
extern "C"  PurchasableVirtualItem_t2555170966 * StoreInfo_GetPurchasableItemWithProductId_m3036091274 (Il2CppObject * __this /* static, unused */, String_t* ___productId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.VirtualCategory Soomla.Store.StoreInfo::GetCategoryForVirtualGood(System.String)
extern "C"  VirtualCategory_t3228006111 * StoreInfo_GetCategoryForVirtualGood_m3721417529 (Il2CppObject * __this /* static, unused */, String_t* ___goodItemId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.UpgradeVG Soomla.Store.StoreInfo::GetFirstUpgradeForVirtualGood(System.String)
extern "C"  UpgradeVG_t3350816643 * StoreInfo_GetFirstUpgradeForVirtualGood_m1677981127 (Il2CppObject * __this /* static, unused */, String_t* ___goodItemId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.UpgradeVG Soomla.Store.StoreInfo::GetLastUpgradeForVirtualGood(System.String)
extern "C"  UpgradeVG_t3350816643 * StoreInfo_GetLastUpgradeForVirtualGood_m3481298155 (Il2CppObject * __this /* static, unused */, String_t* ___goodItemId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Soomla.Store.UpgradeVG> Soomla.Store.StoreInfo::GetUpgradesForVirtualGood(System.String)
extern "C"  List_1_t4147775612 * StoreInfo_GetUpgradesForVirtualGood_m2861429652 (Il2CppObject * __this /* static, unused */, String_t* ___goodItemId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInfo::Save()
extern "C"  void StoreInfo_Save_m109362441 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInfo::Save(Soomla.Store.VirtualItem,System.Boolean)
extern "C"  void StoreInfo_Save_m2684301926 (Il2CppObject * __this /* static, unused */, VirtualItem_t840299124 * ___virtualItem0, bool ___saveToDB1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInfo::Save(System.Collections.Generic.List`1<Soomla.Store.VirtualItem>,System.Boolean)
extern "C"  void StoreInfo_Save_m1757768706 (Il2CppObject * __this /* static, unused */, List_1_t1637258093 * ___virtualItems0, bool ___saveToDB1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInfo::_setStoreAssets(Soomla.Store.IStoreAssets)
extern "C"  void StoreInfo__setStoreAssets_m990585556 (StoreInfo_t3860026085 * __this, Il2CppObject * ___storeAssets0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInfo::loadNativeFromDB()
extern "C"  void StoreInfo_loadNativeFromDB_m1409358225 (StoreInfo_t3860026085 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Soomla.Store.StoreInfo::IStoreAssetsToJSON(Soomla.Store.IStoreAssets)
extern "C"  String_t* StoreInfo_IStoreAssetsToJSON_m2310776542 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___storeAssets0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInfo::initializeFromDB()
extern "C"  void StoreInfo_initializeFromDB_m3320055172 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInfo::fromJSONObject(JSONObject)
extern "C"  void StoreInfo_fromJSONObject_m277674934 (Il2CppObject * __this /* static, unused */, JSONObject_t1752376903 * ___storeJSON0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInfo::updateAggregatedLists()
extern "C"  void StoreInfo_updateAggregatedLists_m318082301 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInfo::replaceVirtualItem(Soomla.Store.VirtualItem)
extern "C"  void StoreInfo_replaceVirtualItem_m3763160708 (Il2CppObject * __this /* static, unused */, VirtualItem_t840299124 * ___virtualItem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.Store.StoreInfo::toJSONObject()
extern "C"  JSONObject_t1752376903 * StoreInfo_toJSONObject_m3299000260 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Soomla.Store.StoreInfo::keyMetaStoreInfo()
extern "C"  String_t* StoreInfo_keyMetaStoreInfo_m3807663706 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.StoreInfo::<GetFirstUpgradeForVirtualGood>m__48(Soomla.Store.UpgradeVG)
extern "C"  bool StoreInfo_U3CGetFirstUpgradeForVirtualGoodU3Em__48_m1949921431 (Il2CppObject * __this /* static, unused */, UpgradeVG_t3350816643 * ___up0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.StoreInfo::<GetLastUpgradeForVirtualGood>m__49(Soomla.Store.UpgradeVG)
extern "C"  bool StoreInfo_U3CGetLastUpgradeForVirtualGoodU3Em__49_m2452174176 (Il2CppObject * __this /* static, unused */, UpgradeVG_t3350816643 * ___up0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
