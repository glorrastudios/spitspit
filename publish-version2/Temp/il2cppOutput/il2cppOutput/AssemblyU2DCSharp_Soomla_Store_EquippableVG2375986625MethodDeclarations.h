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

// Soomla.Store.EquippableVG
struct EquippableVG_t2375986625;
// Soomla.Store.EquippableVG/EquippingModel
struct EquippingModel_t2267691719;
// System.String
struct String_t;
// Soomla.Store.PurchaseType
struct PurchaseType_t2779557329;
// JSONObject
struct JSONObject_t1752376903;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Soomla_Store_EquippableVG_Equipp2267691719.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Soomla_Store_PurchaseType2779557329.h"
#include "AssemblyU2DCSharp_JSONObject1752376903.h"

// System.Void Soomla.Store.EquippableVG::.ctor(Soomla.Store.EquippableVG/EquippingModel,System.String,System.String,System.String,Soomla.Store.PurchaseType)
extern "C"  void EquippableVG__ctor_m444241358 (EquippableVG_t2375986625 * __this, EquippingModel_t2267691719 * ___equippingModel0, String_t* ___name1, String_t* ___description2, String_t* ___itemId3, PurchaseType_t2779557329 * ___purchaseType4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.EquippableVG::.ctor(JSONObject)
extern "C"  void EquippableVG__ctor_m3121474605 (EquippableVG_t2375986625 * __this, JSONObject_t1752376903 * ___jsonItem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.EquippableVG::.cctor()
extern "C"  void EquippableVG__cctor_m711602905 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject Soomla.Store.EquippableVG::toJSONObject()
extern "C"  JSONObject_t1752376903 * EquippableVG_toJSONObject_m3483529596 (EquippableVG_t2375986625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.EquippableVG::Equip()
extern "C"  void EquippableVG_Equip_m347636898 (EquippableVG_t2375986625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.EquippableVG::Equip(System.Boolean)
extern "C"  void EquippableVG_Equip_m1958835865 (EquippableVG_t2375986625 * __this, bool ___notify0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.EquippableVG::Unequip()
extern "C"  void EquippableVG_Unequip_m2499112873 (EquippableVG_t2375986625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.EquippableVG::Unequip(System.Boolean)
extern "C"  void EquippableVG_Unequip_m3146189152 (EquippableVG_t2375986625 * __this, bool ___notify0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
