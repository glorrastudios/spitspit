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

// Soomla.Store.StoreEvents/RunLaterDelegate
struct RunLaterDelegate_t742861702;
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

// System.Void Soomla.Store.StoreEvents/RunLaterDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void RunLaterDelegate__ctor_m3590850590 (RunLaterDelegate_t742861702 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/RunLaterDelegate::Invoke()
extern "C"  void RunLaterDelegate_Invoke_m2333318648 (RunLaterDelegate_t742861702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_RunLaterDelegate_t742861702(Il2CppObject* delegate);
// System.IAsyncResult Soomla.Store.StoreEvents/RunLaterDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * RunLaterDelegate_BeginInvoke_m2906958227 (RunLaterDelegate_t742861702 * __this, AsyncCallback_t1363551830 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.Store.StoreEvents/RunLaterDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void RunLaterDelegate_EndInvoke_m913324334 (RunLaterDelegate_t742861702 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
