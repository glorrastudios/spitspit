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

// ObjectDictionary
struct ObjectDictionary_t2756997461;
// System.Collections.Generic.List`1<UnityEngine.UnityKeyValuePair`2<System.String,System.String>>
struct List_1_t2132059976;
// ObjectKvp
struct ObjectKvp_t514353286;
// UnityEngine.UnityKeyValuePair`2<System.String,System.String>
struct UnityKeyValuePair_2_t1335101007;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ObjectKvp514353286.h"
#include "mscorlib_System_String968488902.h"

// System.Void ObjectDictionary::.ctor()
extern "C"  void ObjectDictionary__ctor_m1775396070 (ObjectDictionary_t2756997461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.UnityKeyValuePair`2<System.String,System.String>> ObjectDictionary::get_KeyValuePairs()
extern "C"  List_1_t2132059976 * ObjectDictionary_get_KeyValuePairs_m163758437 (ObjectDictionary_t2756997461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectDictionary::set_KeyValuePairs(System.Collections.Generic.List`1<UnityEngine.UnityKeyValuePair`2<System.String,System.String>>)
extern "C"  void ObjectDictionary_set_KeyValuePairs_m4084395854 (ObjectDictionary_t2756997461 * __this, List_1_t2132059976 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ObjectKvp ObjectDictionary::ConvertUkvp(UnityEngine.UnityKeyValuePair`2<System.String,System.String>)
extern "C"  ObjectKvp_t514353286 * ObjectDictionary_ConvertUkvp_m31536208 (ObjectDictionary_t2756997461 * __this, UnityKeyValuePair_2_t1335101007 * ___ukvp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UnityKeyValuePair`2<System.String,System.String> ObjectDictionary::ConvertOkvp(ObjectKvp)
extern "C"  UnityKeyValuePair_2_t1335101007 * ObjectDictionary_ConvertOkvp_m2611534770 (ObjectDictionary_t2756997461 * __this, ObjectKvp_t514353286 * ___okvp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectDictionary::SetKeyValuePair(System.String,System.String)
extern "C"  void ObjectDictionary_SetKeyValuePair_m4076673004 (ObjectDictionary_t2756997461 * __this, String_t* ___k0, String_t* ___v1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
