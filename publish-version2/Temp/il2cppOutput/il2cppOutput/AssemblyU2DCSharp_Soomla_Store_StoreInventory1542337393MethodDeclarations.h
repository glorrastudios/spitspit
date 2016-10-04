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

// Soomla.Store.StoreInventory
struct StoreInventory_t1542337393;
// System.String
struct String_t;
// Soomla.Store.EquippableVG
struct EquippableVG_t2375986625;
// Soomla.Store.VirtualCategory
struct VirtualCategory_t3228006111;
// Soomla.Store.VirtualGood
struct VirtualGood_t840235038;
// Soomla.Store.UpgradeVG
struct UpgradeVG_t3350816643;
// Soomla.Store.VirtualCurrency
struct VirtualCurrency_t3752897010;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Soomla_Store_VirtualCategory3228006111.h"
#include "AssemblyU2DCSharp_Soomla_Store_VirtualGood840235038.h"
#include "AssemblyU2DCSharp_Soomla_Store_UpgradeVG3350816643.h"
#include "AssemblyU2DCSharp_Soomla_Store_EquippableVG2375986625.h"
#include "AssemblyU2DCSharp_Soomla_Store_VirtualCurrency3752897010.h"

// System.Void Soomla.Store.StoreInventory::.ctor()
extern "C"  void StoreInventory__ctor_m544849060 (StoreInventory_t1542337393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::.cctor()
extern "C"  void StoreInventory__cctor_m3523322761 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.StoreInventory::CanAfford(System.String)
extern "C"  bool StoreInventory_CanAfford_m312869500 (Il2CppObject * __this /* static, unused */, String_t* ___itemId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::BuyItem(System.String)
extern "C"  void StoreInventory_BuyItem_m2087160039 (Il2CppObject * __this /* static, unused */, String_t* ___itemId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::BuyItem(System.String,System.String)
extern "C"  void StoreInventory_BuyItem_m4061106403 (Il2CppObject * __this /* static, unused */, String_t* ___itemId0, String_t* ___payload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.StoreInventory::GetItemBalance(System.String)
extern "C"  int32_t StoreInventory_GetItemBalance_m2515193533 (Il2CppObject * __this /* static, unused */, String_t* ___itemId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::GiveItem(System.String,System.Int32)
extern "C"  void StoreInventory_GiveItem_m1136322937 (Il2CppObject * __this /* static, unused */, String_t* ___itemId0, int32_t ___amount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::TakeItem(System.String,System.Int32)
extern "C"  void StoreInventory_TakeItem_m1405967087 (Il2CppObject * __this /* static, unused */, String_t* ___itemId0, int32_t ___amount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::EquipVirtualGood(System.String)
extern "C"  void StoreInventory_EquipVirtualGood_m1142071882 (Il2CppObject * __this /* static, unused */, String_t* ___goodItemId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::UnEquipVirtualGood(System.String)
extern "C"  void StoreInventory_UnEquipVirtualGood_m321555505 (Il2CppObject * __this /* static, unused */, String_t* ___goodItemId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.StoreInventory::IsVirtualGoodEquipped(System.String)
extern "C"  bool StoreInventory_IsVirtualGoodEquipped_m3522627791 (Il2CppObject * __this /* static, unused */, String_t* ___goodItemId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.EquippableVG Soomla.Store.StoreInventory::GetEquippedVirtualGood(Soomla.Store.VirtualCategory)
extern "C"  EquippableVG_t2375986625 * StoreInventory_GetEquippedVirtualGood_m1108111322 (Il2CppObject * __this /* static, unused */, VirtualCategory_t3228006111 * ___category0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.StoreInventory::GetGoodUpgradeLevel(System.String)
extern "C"  int32_t StoreInventory_GetGoodUpgradeLevel_m2871145847 (Il2CppObject * __this /* static, unused */, String_t* ___goodItemId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Soomla.Store.StoreInventory::GetGoodCurrentUpgrade(System.String)
extern "C"  String_t* StoreInventory_GetGoodCurrentUpgrade_m2552448903 (Il2CppObject * __this /* static, unused */, String_t* ___goodItemId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::UpgradeGood(System.String)
extern "C"  void StoreInventory_UpgradeGood_m961295143 (Il2CppObject * __this /* static, unused */, String_t* ___goodItemId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::RemoveGoodUpgrades(System.String)
extern "C"  void StoreInventory_RemoveGoodUpgrades_m1761697226 (Il2CppObject * __this /* static, unused */, String_t* ___goodItemId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::RefreshLocalInventory()
extern "C"  void StoreInventory_RefreshLocalInventory_m669711022 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::RefreshOnGoodUpgrade(Soomla.Store.VirtualGood,Soomla.Store.UpgradeVG)
extern "C"  void StoreInventory_RefreshOnGoodUpgrade_m2116743644 (Il2CppObject * __this /* static, unused */, VirtualGood_t840235038 * ___vg0, UpgradeVG_t3350816643 * ___uvg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::RefreshOnGoodEquipped(Soomla.Store.EquippableVG)
extern "C"  void StoreInventory_RefreshOnGoodEquipped_m2092300771 (Il2CppObject * __this /* static, unused */, EquippableVG_t2375986625 * ___equippable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::RefreshOnGoodUnEquipped(Soomla.Store.EquippableVG)
extern "C"  void StoreInventory_RefreshOnGoodUnEquipped_m2137180810 (Il2CppObject * __this /* static, unused */, EquippableVG_t2375986625 * ___equippable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::RefreshOnCurrencyBalanceChanged(Soomla.Store.VirtualCurrency,System.Int32,System.Int32)
extern "C"  void StoreInventory_RefreshOnCurrencyBalanceChanged_m2925834165 (Il2CppObject * __this /* static, unused */, VirtualCurrency_t3752897010 * ___virtualCurrency0, int32_t ___balance1, int32_t ___amountAdded2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::RefreshOnGoodBalanceChanged(Soomla.Store.VirtualGood,System.Int32,System.Int32)
extern "C"  void StoreInventory_RefreshOnGoodBalanceChanged_m896668981 (Il2CppObject * __this /* static, unused */, VirtualGood_t840235038 * ___good0, int32_t ___balance1, int32_t ___amountAdded2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInventory::UpdateLocalBalance(System.String,System.Int32)
extern "C"  void StoreInventory_UpdateLocalBalance_m615532623 (Il2CppObject * __this /* static, unused */, String_t* ___itemId0, int32_t ___balance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
