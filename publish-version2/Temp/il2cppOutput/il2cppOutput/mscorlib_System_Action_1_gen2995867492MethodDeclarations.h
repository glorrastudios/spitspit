﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Action`1<System.Int32>
struct Action_1_t2995867492;
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

// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m375071632_gshared (Action_1_t2995867492 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_1__ctor_m375071632(__this, ___object0, ___method1, method) ((  void (*) (Action_1_t2995867492 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m375071632_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`1<System.Int32>::Invoke(T)
extern "C"  void Action_1_Invoke_m4053252443_gshared (Action_1_t2995867492 * __this, int32_t ___obj0, const MethodInfo* method);
#define Action_1_Invoke_m4053252443(__this, ___obj0, method) ((  void (*) (Action_1_t2995867492 *, int32_t, const MethodInfo*))Action_1_Invoke_m4053252443_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Action`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m3640105362_gshared (Action_1_t2995867492 * __this, int32_t ___obj0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Action_1_BeginInvoke_m3640105362(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Action_1_t2995867492 *, int32_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m3640105362_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Void System.Action`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m2973204151_gshared (Action_1_t2995867492 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_1_EndInvoke_m2973204151(__this, ___result0, method) ((  void (*) (Action_1_t2995867492 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m2973204151_gshared)(__this, ___result0, method)
