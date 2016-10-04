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

// System.Action`3<System.Object,System.Int32,System.Int32>
struct Action_3_t347896579;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Action`3<System.Object,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_3__ctor_m3769249099_gshared (Action_3_t347896579 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_3__ctor_m3769249099(__this, ___object0, ___method1, method) ((  void (*) (Action_3_t347896579 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_3__ctor_m3769249099_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`3<System.Object,System.Int32,System.Int32>::Invoke(T1,T2,T3)
extern "C"  void Action_3_Invoke_m2878702791_gshared (Action_3_t347896579 * __this, Il2CppObject * ___arg10, int32_t ___arg21, int32_t ___arg32, const MethodInfo* method);
#define Action_3_Invoke_m2878702791(__this, ___arg10, ___arg21, ___arg32, method) ((  void (*) (Action_3_t347896579 *, Il2CppObject *, int32_t, int32_t, const MethodInfo*))Action_3_Invoke_m2878702791_gshared)(__this, ___arg10, ___arg21, ___arg32, method)
// System.IAsyncResult System.Action`3<System.Object,System.Int32,System.Int32>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_3_BeginInvoke_m1610368766_gshared (Action_3_t347896579 * __this, Il2CppObject * ___arg10, int32_t ___arg21, int32_t ___arg32, AsyncCallback_t1363551830 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method);
#define Action_3_BeginInvoke_m1610368766(__this, ___arg10, ___arg21, ___arg32, ___callback3, ___object4, method) ((  Il2CppObject * (*) (Action_3_t347896579 *, Il2CppObject *, int32_t, int32_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_3_BeginInvoke_m1610368766_gshared)(__this, ___arg10, ___arg21, ___arg32, ___callback3, ___object4, method)
// System.Void System.Action`3<System.Object,System.Int32,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_3_EndInvoke_m1579547867_gshared (Action_3_t347896579 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_3_EndInvoke_m1579547867(__this, ___result0, method) ((  void (*) (Action_3_t347896579 *, Il2CppObject *, const MethodInfo*))Action_3_EndInvoke_m1579547867_gshared)(__this, ___result0, method)
