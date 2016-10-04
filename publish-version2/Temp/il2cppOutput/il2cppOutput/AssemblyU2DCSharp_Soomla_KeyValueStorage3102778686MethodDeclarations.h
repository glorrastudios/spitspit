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

// Soomla.KeyValueStorage
struct KeyValueStorage_t3102778686;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void Soomla.KeyValueStorage::.ctor()
extern "C"  void KeyValueStorage__ctor_m356199377 (KeyValueStorage_t3102778686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.KeyValueStorage::.cctor()
extern "C"  void KeyValueStorage__cctor_m1970149884 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Soomla.KeyValueStorage Soomla.KeyValueStorage::get_instance()
extern "C"  KeyValueStorage_t3102778686 * KeyValueStorage_get_instance_m670592004 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Soomla.KeyValueStorage::GetValue(System.String)
extern "C"  String_t* KeyValueStorage_GetValue_m1505596913 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.KeyValueStorage::SetValue(System.String,System.String)
extern "C"  void KeyValueStorage_SetValue_m1674388924 (Il2CppObject * __this /* static, unused */, String_t* ___key0, String_t* ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.KeyValueStorage::DeleteKeyValue(System.String)
extern "C"  void KeyValueStorage_DeleteKeyValue_m2867631698 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> Soomla.KeyValueStorage::GetEncryptedKeys()
extern "C"  List_1_t1765447871 * KeyValueStorage_GetEncryptedKeys_m2269097638 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.KeyValueStorage::Purge()
extern "C"  void KeyValueStorage_Purge_m979780314 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Soomla.KeyValueStorage::_getValue(System.String)
extern "C"  String_t* KeyValueStorage__getValue_m1959146780 (KeyValueStorage_t3102778686 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.KeyValueStorage::_setValue(System.String,System.String)
extern "C"  void KeyValueStorage__setValue_m3520124801 (KeyValueStorage_t3102778686 * __this, String_t* ___key0, String_t* ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.KeyValueStorage::_deleteKeyValue(System.String)
extern "C"  void KeyValueStorage__deleteKeyValue_m1240259863 (KeyValueStorage_t3102778686 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> Soomla.KeyValueStorage::_getEncryptedKeys()
extern "C"  List_1_t1765447871 * KeyValueStorage__getEncryptedKeys_m2186380735 (KeyValueStorage_t3102778686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.KeyValueStorage::_purge()
extern "C"  void KeyValueStorage__purge_m634383199 (KeyValueStorage_t3102778686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
