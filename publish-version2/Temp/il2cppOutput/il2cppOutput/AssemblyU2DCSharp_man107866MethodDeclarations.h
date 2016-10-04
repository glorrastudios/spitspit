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

// man
struct man_t107866;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UnityEngine.Collider2D
struct Collider2D_t1890038195;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Collision2D
struct Collision2D_t452810033;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Collider2D1890038195.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Collision2D452810033.h"

// System.Void man::.ctor()
extern "C"  void man__ctor_m2767889233 (man_t107866 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void man::Start()
extern "C"  void man_Start_m1715027025 (man_t107866 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void man::Update()
extern "C"  void man_Update_m1632082396 (man_t107866 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator man::removeVelocity(UnityEngine.Vector3)
extern "C"  Il2CppObject * man_removeVelocity_m416315181 (man_t107866 * __this, Vector3_t3525329789  ___vel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void man::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void man_OnTriggerEnter2D_m1899489863 (man_t107866 * __this, Collider2D_t1890038195 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator man::waitAndDestory(System.Single,UnityEngine.GameObject)
extern "C"  Il2CppObject * man_waitAndDestory_m689682672 (man_t107866 * __this, float ___time0, GameObject_t4012695102 * ___other1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator man::flasher(System.Single,UnityEngine.GameObject)
extern "C"  Il2CppObject * man_flasher_m2717867559 (man_t107866 * __this, float ___time0, GameObject_t4012695102 * ___other1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void man::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void man_OnCollisionEnter2D_m3319626555 (man_t107866 * __this, Collision2D_t452810033 * ___coll0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
