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

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t3883920346;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23312956448.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m252712190_gshared (Predicate_1_t3883920346 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Predicate_1__ctor_m252712190(__this, ___object0, ___method1, method) ((  void (*) (Predicate_1_t3883920346 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m252712190_gshared)(__this, ___object0, ___method1, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m684566468_gshared (Predicate_1_t3883920346 * __this, KeyValuePair_2_t3312956448  ___obj0, const MethodInfo* method);
#define Predicate_1_Invoke_m684566468(__this, ___obj0, method) ((  bool (*) (Predicate_1_t3883920346 *, KeyValuePair_2_t3312956448 , const MethodInfo*))Predicate_1_Invoke_m684566468_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m2552303187_gshared (Predicate_1_t3883920346 * __this, KeyValuePair_2_t3312956448  ___obj0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m2552303187(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Predicate_1_t3883920346 *, KeyValuePair_2_t3312956448 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m2552303187_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m3276267152_gshared (Predicate_1_t3883920346 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Predicate_1_EndInvoke_m3276267152(__this, ___result0, method) ((  bool (*) (Predicate_1_t3883920346 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m3276267152_gshared)(__this, ___result0, method)
