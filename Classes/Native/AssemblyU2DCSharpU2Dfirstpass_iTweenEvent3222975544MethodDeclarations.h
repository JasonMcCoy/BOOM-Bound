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

// iTweenEvent
struct iTweenEvent_t3222975544;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t696267445;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "mscorlib_System_String7231557.h"

// System.Void iTweenEvent::.ctor()
extern "C"  void iTweenEvent__ctor_m1160920831 (iTweenEvent_t3222975544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// iTweenEvent iTweenEvent::GetEvent(UnityEngine.GameObject,System.String)
extern "C"  iTweenEvent_t3222975544 * iTweenEvent_GetEvent_m2256626242 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___obj0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> iTweenEvent::get_Values()
extern "C"  Dictionary_2_t696267445 * iTweenEvent_get_Values_m2967791052 (iTweenEvent_t3222975544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTweenEvent::set_Values(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void iTweenEvent_set_Values_m1541683235 (iTweenEvent_t3222975544 * __this, Dictionary_2_t696267445 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTweenEvent::Start()
extern "C"  void iTweenEvent_Start_m108058623 (iTweenEvent_t3222975544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTweenEvent::Play()
extern "C"  void iTweenEvent_Play_m1295687833 (iTweenEvent_t3222975544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTweenEvent::OnDrawGizmos()
extern "C"  void iTweenEvent_OnDrawGizmos_m3368142145 (iTweenEvent_t3222975544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator iTweenEvent::StartEvent()
extern "C"  Il2CppObject * iTweenEvent_StartEvent_m3757899149 (iTweenEvent_t3222975544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTweenEvent::SerializeValues()
extern "C"  void iTweenEvent_SerializeValues_m369637567 (iTweenEvent_t3222975544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTweenEvent::DeserializeValues()
extern "C"  void iTweenEvent_DeserializeValues_m3761899358 (iTweenEvent_t3222975544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
