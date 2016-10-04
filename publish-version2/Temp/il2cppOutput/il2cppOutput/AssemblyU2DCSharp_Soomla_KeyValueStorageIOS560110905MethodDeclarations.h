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

// Soomla.KeyValueStorageIOS
struct KeyValueStorageIOS_t560110905;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_IntPtr676692020.h"

// System.Void Soomla.KeyValueStorageIOS::.ctor()
extern "C"  void KeyValueStorageIOS__ctor_m3722541352 (KeyValueStorageIOS_t560110905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.KeyValueStorageIOS::keyValStorage_GetValue(System.String,System.IntPtr&)
extern "C"  void KeyValueStorageIOS_keyValStorage_GetValue_m994236089 (Il2CppObject * __this /* static, unused */, String_t* ___key0, IntPtr_t* ___outResult1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.KeyValueStorageIOS::keyValStorage_SetValue(System.String,System.String)
extern "C"  void KeyValueStorageIOS_keyValStorage_SetValue_m1674083373 (Il2CppObject * __this /* static, unused */, String_t* ___key0, String_t* ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.KeyValueStorageIOS::keyValStorage_DeleteKeyValue(System.String)
extern "C"  void KeyValueStorageIOS_keyValStorage_DeleteKeyValue_m1408888259 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.KeyValueStorageIOS::keyValStorage_GetEncryptedKeys(System.IntPtr&)
extern "C"  void KeyValueStorageIOS_keyValStorage_GetEncryptedKeys_m4092226076 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___outResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.KeyValueStorageIOS::keyValStorage_Purge()
extern "C"  void KeyValueStorageIOS_keyValStorage_Purge_m1965212939 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Soomla.KeyValueStorageIOS::_getValue(System.String)
extern "C"  String_t* KeyValueStorageIOS__getValue_m46053759 (KeyValueStorageIOS_t560110905 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.KeyValueStorageIOS::_setValue(System.String,System.String)
extern "C"  void KeyValueStorageIOS__setValue_m1074175818 (KeyValueStorageIOS_t560110905 * __this, String_t* ___key0, String_t* ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.KeyValueStorageIOS::_deleteKeyValue(System.String)
extern "C"  void KeyValueStorageIOS__deleteKeyValue_m1124564448 (KeyValueStorageIOS_t560110905 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> Soomla.KeyValueStorageIOS::_getEncryptedKeys()
extern "C"  List_1_t1765447871 * KeyValueStorageIOS__getEncryptedKeys_m2873635672 (KeyValueStorageIOS_t560110905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.KeyValueStorageIOS::_purge()
extern "C"  void KeyValueStorageIOS__purge_m1911769320 (KeyValueStorageIOS_t560110905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
