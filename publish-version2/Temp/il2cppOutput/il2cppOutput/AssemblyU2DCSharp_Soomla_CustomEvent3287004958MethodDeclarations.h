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

// Soomla.CustomEvent
struct CustomEvent_t3287004958;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Soomla.CustomEvent::.ctor(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void CustomEvent__ctor_m1845197350 (CustomEvent_t3287004958 * __this, String_t* ___name0, Dictionary_2_t2606186806 * ___extra1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Soomla.CustomEvent::.ctor(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Object)
extern "C"  void CustomEvent__ctor_m3752200820 (CustomEvent_t3287004958 * __this, String_t* ___name0, Dictionary_2_t2606186806 * ___extra1, Il2CppObject * ___sender2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Soomla.CustomEvent::GetName()
extern "C"  String_t* CustomEvent_GetName_m1573885581 (CustomEvent_t3287004958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Soomla.CustomEvent::GetExtra()
extern "C"  Dictionary_2_t2606186806 * CustomEvent_GetExtra_m2773687803 (CustomEvent_t3287004958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
