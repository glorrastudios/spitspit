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

// Soomla.CoreEvents/Action
struct Action_t1955883606;
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

// System.Void Soomla.CoreEvents/Action::.ctor(System.Object,System.IntPtr)
extern "C"  void Action__ctor_m2393333845 (Action_t1955883606 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.CoreEvents/Action::Invoke()
extern "C"  void Action_Invoke_m3646508271 (Action_t1955883606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_Action_t1955883606(Il2CppObject* delegate);
// System.IAsyncResult Soomla.CoreEvents/Action::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_BeginInvoke_m2493814068 (Action_t1955883606 * __this, AsyncCallback_t1363551830 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.CoreEvents/Action::EndInvoke(System.IAsyncResult)
extern "C"  void Action_EndInvoke_m2667201765 (Action_t1955883606 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
