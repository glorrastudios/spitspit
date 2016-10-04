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

// Soomla.Store.VirtualGoodsStorageIOS
struct VirtualGoodsStorageIOS_t513796851;
// System.String
struct String_t;
// Soomla.Store.VirtualGood
struct VirtualGood_t840235038;
// Soomla.Store.UpgradeVG
struct UpgradeVG_t3350816643;
// Soomla.Store.EquippableVG
struct EquippableVG_t2375986625;
// Soomla.Store.VirtualItem
struct VirtualItem_t840299124;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Soomla_Store_VirtualGood840235038.h"
#include "AssemblyU2DCSharp_Soomla_Store_UpgradeVG3350816643.h"
#include "AssemblyU2DCSharp_Soomla_Store_EquippableVG2375986625.h"
#include "AssemblyU2DCSharp_Soomla_Store_VirtualItem840299124.h"

// System.Void Soomla.Store.VirtualGoodsStorageIOS::.ctor()
extern "C"  void VirtualGoodsStorageIOS__ctor_m4230626146 (VirtualGoodsStorageIOS_t513796851 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorageIOS::vgStorage_RemoveUpgrades(System.String,System.Boolean)
extern "C"  int32_t VirtualGoodsStorageIOS_vgStorage_RemoveUpgrades_m3132429919 (Il2CppObject * __this /* static, unused */, String_t* ___itemId0, bool ___notify1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorageIOS::vgStorage_AssignCurrentUpgrade(System.String,System.String,System.Boolean)
extern "C"  int32_t VirtualGoodsStorageIOS_vgStorage_AssignCurrentUpgrade_m3385253210 (Il2CppObject * __this /* static, unused */, String_t* ___itemId0, String_t* ___upgradeItemId1, bool ___notify2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorageIOS::vgStorage_GetCurrentUpgrade(System.String,System.String&)
extern "C"  int32_t VirtualGoodsStorageIOS_vgStorage_GetCurrentUpgrade_m518979200 (Il2CppObject * __this /* static, unused */, String_t* ___itemId0, String_t** ___outItemId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorageIOS::vgStorage_IsEquipped(System.String,System.Boolean&)
extern "C"  int32_t VirtualGoodsStorageIOS_vgStorage_IsEquipped_m2927447007 (Il2CppObject * __this /* static, unused */, String_t* ___itemId0, bool* ___outResult1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorageIOS::vgStorage_Equip(System.String,System.Boolean)
extern "C"  int32_t VirtualGoodsStorageIOS_vgStorage_Equip_m3279279492 (Il2CppObject * __this /* static, unused */, String_t* ___itemId0, bool ___notify1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorageIOS::vgStorage_UnEquip(System.String,System.Boolean)
extern "C"  int32_t VirtualGoodsStorageIOS_vgStorage_UnEquip_m3022010923 (Il2CppObject * __this /* static, unused */, String_t* ___itemId0, bool ___notify1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorageIOS::vgStorage_GetBalance(System.String,System.Int32&)
extern "C"  int32_t VirtualGoodsStorageIOS_vgStorage_GetBalance_m701746792 (Il2CppObject * __this /* static, unused */, String_t* ___itemId0, int32_t* ___outBalance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorageIOS::vgStorage_SetBalance(System.String,System.Int32,System.Boolean,System.Int32&)
extern "C"  int32_t VirtualGoodsStorageIOS_vgStorage_SetBalance_m386550842 (Il2CppObject * __this /* static, unused */, String_t* ___itemId0, int32_t ___balance1, bool ___notify2, int32_t* ___outBalance3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorageIOS::vgStorage_Add(System.String,System.Int32,System.Boolean,System.Int32&)
extern "C"  int32_t VirtualGoodsStorageIOS_vgStorage_Add_m3405826403 (Il2CppObject * __this /* static, unused */, String_t* ___itemId0, int32_t ___amount1, bool ___notify2, int32_t* ___outBalance3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorageIOS::vgStorage_Remove(System.String,System.Int32,System.Boolean,System.Int32&)
extern "C"  int32_t VirtualGoodsStorageIOS_vgStorage_Remove_m861235984 (Il2CppObject * __this /* static, unused */, String_t* ___itemId0, int32_t ___amount1, bool ___notify2, int32_t* ___outBalance3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorageIOS::_removeUpgrades(Soomla.Store.VirtualGood,System.Boolean)
extern "C"  void VirtualGoodsStorageIOS__removeUpgrades_m2341184511 (VirtualGoodsStorageIOS_t513796851 * __this, VirtualGood_t840235038 * ___good0, bool ___notify1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorageIOS::_assignCurrentUpgrade(Soomla.Store.VirtualGood,Soomla.Store.UpgradeVG,System.Boolean)
extern "C"  void VirtualGoodsStorageIOS__assignCurrentUpgrade_m3406879373 (VirtualGoodsStorageIOS_t513796851 * __this, VirtualGood_t840235038 * ___good0, UpgradeVG_t3350816643 * ___upgradeVG1, bool ___notify2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.UpgradeVG Soomla.Store.VirtualGoodsStorageIOS::_getCurrentUpgrade(Soomla.Store.VirtualGood)
extern "C"  UpgradeVG_t3350816643 * VirtualGoodsStorageIOS__getCurrentUpgrade_m516074596 (VirtualGoodsStorageIOS_t513796851 * __this, VirtualGood_t840235038 * ___good0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Soomla.Store.VirtualGoodsStorageIOS::_isEquipped(Soomla.Store.EquippableVG)
extern "C"  bool VirtualGoodsStorageIOS__isEquipped_m2153783743 (VirtualGoodsStorageIOS_t513796851 * __this, EquippableVG_t2375986625 * ___good0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorageIOS::_equip(Soomla.Store.EquippableVG,System.Boolean)
extern "C"  void VirtualGoodsStorageIOS__equip_m1279933493 (VirtualGoodsStorageIOS_t513796851 * __this, EquippableVG_t2375986625 * ___good0, bool ___notify1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.VirtualGoodsStorageIOS::_unequip(Soomla.Store.EquippableVG,System.Boolean)
extern "C"  void VirtualGoodsStorageIOS__unequip_m181924860 (VirtualGoodsStorageIOS_t513796851 * __this, EquippableVG_t2375986625 * ___good0, bool ___notify1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorageIOS::_getBalance(Soomla.Store.VirtualItem)
extern "C"  int32_t VirtualGoodsStorageIOS__getBalance_m3733834785 (VirtualGoodsStorageIOS_t513796851 * __this, VirtualItem_t840299124 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorageIOS::_setBalance(Soomla.Store.VirtualItem,System.Int32,System.Boolean)
extern "C"  int32_t VirtualGoodsStorageIOS__setBalance_m2592046299 (VirtualGoodsStorageIOS_t513796851 * __this, VirtualItem_t840299124 * ___item0, int32_t ___balance1, bool ___notify2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorageIOS::_add(Soomla.Store.VirtualItem,System.Int32,System.Boolean)
extern "C"  int32_t VirtualGoodsStorageIOS__add_m3753599498 (VirtualGoodsStorageIOS_t513796851 * __this, VirtualItem_t840299124 * ___item0, int32_t ___amount1, bool ___notify2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.VirtualGoodsStorageIOS::_remove(Soomla.Store.VirtualItem,System.Int32,System.Boolean)
extern "C"  int32_t VirtualGoodsStorageIOS__remove_m2291011525 (VirtualGoodsStorageIOS_t513796851 * __this, VirtualItem_t840299124 * ___item0, int32_t ___amount1, bool ___notify2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
