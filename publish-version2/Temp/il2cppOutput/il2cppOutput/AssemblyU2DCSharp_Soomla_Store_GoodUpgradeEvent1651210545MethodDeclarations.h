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

// Soomla.Store.GoodUpgradeEvent
struct GoodUpgradeEvent_t1651210545;
// Soomla.Store.VirtualGood
struct VirtualGood_t840235038;
// Soomla.Store.UpgradeVG
struct UpgradeVG_t3350816643;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Soomla_Store_VirtualGood840235038.h"
#include "AssemblyU2DCSharp_Soomla_Store_UpgradeVG3350816643.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Soomla.Store.GoodUpgradeEvent::.ctor(Soomla.Store.VirtualGood,Soomla.Store.UpgradeVG)
extern "C"  void GoodUpgradeEvent__ctor_m4160493853 (GoodUpgradeEvent_t1651210545 * __this, VirtualGood_t840235038 * ___item0, UpgradeVG_t3350816643 * ___upgradeVGItem1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.GoodUpgradeEvent::.ctor(Soomla.Store.VirtualGood,Soomla.Store.UpgradeVG,System.Object)
extern "C"  void GoodUpgradeEvent__ctor_m133016875 (GoodUpgradeEvent_t1651210545 * __this, VirtualGood_t840235038 * ___item0, UpgradeVG_t3350816643 * ___upgradeVGItem1, Il2CppObject * ___sender2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.VirtualGood Soomla.Store.GoodUpgradeEvent::getGoodItem()
extern "C"  VirtualGood_t840235038 * GoodUpgradeEvent_getGoodItem_m3760669129 (GoodUpgradeEvent_t1651210545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.Store.UpgradeVG Soomla.Store.GoodUpgradeEvent::getCurrentUpgrade()
extern "C"  UpgradeVG_t3350816643 * GoodUpgradeEvent_getCurrentUpgrade_m4116048055 (GoodUpgradeEvent_t1651210545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
