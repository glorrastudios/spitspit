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

// Soomla.Store.StoreInfoIOS
struct StoreInfoIOS_t3311103572;
// System.String
struct String_t;
// Soomla.Store.IStoreAssets
struct IStoreAssets_t320796049;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void Soomla.Store.StoreInfoIOS::.ctor()
extern "C"  void StoreInfoIOS__ctor_m1390491681 (StoreInfoIOS_t3311103572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.StoreInfoIOS::storeInfo_SetStoreAssets(System.String,System.Int32)
extern "C"  int32_t StoreInfoIOS_storeInfo_SetStoreAssets_m2825132956 (Il2CppObject * __this /* static, unused */, String_t* ___storeMetaJSON0, int32_t ___version1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Soomla.Store.StoreInfoIOS::storeInfo_LoadFromDB()
extern "C"  int32_t StoreInfoIOS_storeInfo_LoadFromDB_m976195699 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInfoIOS::_setStoreAssets(Soomla.Store.IStoreAssets)
extern "C"  void StoreInfoIOS__setStoreAssets_m2024642955 (StoreInfoIOS_t3311103572 * __this, Il2CppObject * ___storeAssets0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreInfoIOS::loadNativeFromDB()
extern "C"  void StoreInfoIOS_loadNativeFromDB_m3874325832 (StoreInfoIOS_t3311103572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
