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

// Soomla.Store.VirtualGoodsStorage
struct VirtualGoodsStorage_t1296446118;
// Soomla.Store.VirtualGood
struct VirtualGood_t840235038;
// Soomla.Store.UpgradeVG
struct UpgradeVG_t3350816643;
// Soomla.Store.EquippableVG
struct EquippableVG_t2375986625;
// Soomla.Store.VirtualItem
struct VirtualItem_t840299124;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Soomla_Store_VirtualGood840235038.h"
#include "AssemblyU2DCSharp_Soomla_Store_UpgradeVG3350816643.h"
#include "AssemblyU2DCSharp_Soomla_Store_EquippableVG2375986625.h"
#include "AssemblyU2DCSharp_Soomla_Store_VirtualItem840299124.h"

// System.Void Soomla.Store.VirtualGoodsStorage::.ctor()
extern "C"  void VirtualGoodsStorage__ctor_m1676813271 (VirtualGoodsStorage_t1296446118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorage::.cctor()
extern "C"  void VirtualGoodsStorage__cctor_m4254474934 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.VirtualGoodsStorage Soomla.Store.VirtualGoodsStorage::get_instance()
extern "C"  VirtualGoodsStorage_t1296446118 * VirtualGoodsStorage_get_instance_m225801028 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorage::RemoveUpgrades(Soomla.Store.VirtualGood)
extern "C"  void VirtualGoodsStorage_RemoveUpgrades_m906786060 (Il2CppObject * __this /* static, unused */, VirtualGood_t840235038 * ___good0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorage::RemoveUpgrades(Soomla.Store.VirtualGood,System.Boolean)
extern "C"  void VirtualGoodsStorage_RemoveUpgrades_m3102844145 (Il2CppObject * __this /* static, unused */, VirtualGood_t840235038 * ___good0, bool ___notify1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorage::AssignCurrentUpgrade(Soomla.Store.VirtualGood,Soomla.Store.UpgradeVG)
extern "C"  void VirtualGoodsStorage_AssignCurrentUpgrade_m3137645666 (Il2CppObject * __this /* static, unused */, VirtualGood_t840235038 * ___good0, UpgradeVG_t3350816643 * ___upgradeVG1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorage::AssignCurrentUpgrade(Soomla.Store.VirtualGood,Soomla.Store.UpgradeVG,System.Boolean)
extern "C"  void VirtualGoodsStorage_AssignCurrentUpgrade_m3265599195 (Il2CppObject * __this /* static, unused */, VirtualGood_t840235038 * ___good0, UpgradeVG_t3350816643 * ___upgradeVG1, bool ___notify2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.UpgradeVG Soomla.Store.VirtualGoodsStorage::GetCurrentUpgrade(Soomla.Store.VirtualGood)
extern "C"  UpgradeVG_t3350816643 * VirtualGoodsStorage_GetCurrentUpgrade_m3238914646 (Il2CppObject * __this /* static, unused */, VirtualGood_t840235038 * ___good0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.VirtualGoodsStorage::IsEquipped(Soomla.Store.EquippableVG)
extern "C"  bool VirtualGoodsStorage_IsEquipped_m2272731441 (Il2CppObject * __this /* static, unused */, EquippableVG_t2375986625 * ___good0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorage::Equip(Soomla.Store.EquippableVG)
extern "C"  void VirtualGoodsStorage_Equip_m688940438 (Il2CppObject * __this /* static, unused */, EquippableVG_t2375986625 * ___good0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorage::Equip(Soomla.Store.EquippableVG,System.Boolean)
extern "C"  void VirtualGoodsStorage_Equip_m1479626535 (Il2CppObject * __this /* static, unused */, EquippableVG_t2375986625 * ___good0, bool ___notify1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorage::UnEquip(Soomla.Store.EquippableVG)
extern "C"  void VirtualGoodsStorage_UnEquip_m3218366799 (Il2CppObject * __this /* static, unused */, EquippableVG_t2375986625 * ___good0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorage::UnEquip(Soomla.Store.EquippableVG,System.Boolean)
extern "C"  void VirtualGoodsStorage_UnEquip_m167856718 (Il2CppObject * __this /* static, unused */, EquippableVG_t2375986625 * ___good0, bool ___notify1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorage::GetBalance(Soomla.Store.VirtualItem)
extern "C"  int32_t VirtualGoodsStorage_GetBalance_m2727580527 (Il2CppObject * __this /* static, unused */, VirtualItem_t840299124 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorage::SetBalance(Soomla.Store.VirtualItem,System.Int32)
extern "C"  int32_t VirtualGoodsStorage_SetBalance_m2547256788 (Il2CppObject * __this /* static, unused */, VirtualItem_t840299124 * ___item0, int32_t ___balance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorage::SetBalance(Soomla.Store.VirtualItem,System.Int32,System.Boolean)
extern "C"  int32_t VirtualGoodsStorage_SetBalance_m2247910185 (Il2CppObject * __this /* static, unused */, VirtualItem_t840299124 * ___item0, int32_t ___balance1, bool ___notify2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorage::Add(Soomla.Store.VirtualItem,System.Int32)
extern "C"  int32_t VirtualGoodsStorage_Add_m3933724129 (Il2CppObject * __this /* static, unused */, VirtualItem_t840299124 * ___item0, int32_t ___amount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorage::Add(Soomla.Store.VirtualItem,System.Int32,System.Boolean)
extern "C"  int32_t VirtualGoodsStorage_Add_m833017724 (Il2CppObject * __this /* static, unused */, VirtualItem_t840299124 * ___item0, int32_t ___amount1, bool ___notify2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorage::Remove(Soomla.Store.VirtualItem,System.Int32)
extern "C"  int32_t VirtualGoodsStorage_Remove_m2905918762 (Il2CppObject * __this /* static, unused */, VirtualItem_t840299124 * ___item0, int32_t ___amount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorage::Remove(Soomla.Store.VirtualItem,System.Int32,System.Boolean)
extern "C"  int32_t VirtualGoodsStorage_Remove_m2686864659 (Il2CppObject * __this /* static, unused */, VirtualItem_t840299124 * ___item0, int32_t ___amount1, bool ___notify2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorage::_removeUpgrades(Soomla.Store.VirtualGood,System.Boolean)
extern "C"  void VirtualGoodsStorage__removeUpgrades_m1471785002 (VirtualGoodsStorage_t1296446118 * __this, VirtualGood_t840235038 * ___good0, bool ___notify1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorage::_assignCurrentUpgrade(Soomla.Store.VirtualGood,Soomla.Store.UpgradeVG,System.Boolean)
extern "C"  void VirtualGoodsStorage__assignCurrentUpgrade_m626141762 (VirtualGoodsStorage_t1296446118 * __this, VirtualGood_t840235038 * ___good0, UpgradeVG_t3350816643 * ___upgradeVG1, bool ___notify2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.UpgradeVG Soomla.Store.VirtualGoodsStorage::_getCurrentUpgrade(Soomla.Store.VirtualGood)
extern "C"  UpgradeVG_t3350816643 * VirtualGoodsStorage__getCurrentUpgrade_m2420799111 (VirtualGoodsStorage_t1296446118 * __this, VirtualGood_t840235038 * ___good0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.VirtualGoodsStorage::_isEquipped(Soomla.Store.EquippableVG)
extern "C"  bool VirtualGoodsStorage__isEquipped_m659655826 (VirtualGoodsStorage_t1296446118 * __this, EquippableVG_t2375986625 * ___good0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorage::_equip(Soomla.Store.EquippableVG,System.Boolean)
extern "C"  void VirtualGoodsStorage__equip_m701012832 (VirtualGoodsStorage_t1296446118 * __this, EquippableVG_t2375986625 * ___good0, bool ___notify1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorage::_unequip(Soomla.Store.EquippableVG,System.Boolean)
extern "C"  void VirtualGoodsStorage__unequip_m2184918119 (VirtualGoodsStorage_t1296446118 * __this, EquippableVG_t2375986625 * ___good0, bool ___notify1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
