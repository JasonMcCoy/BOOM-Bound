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

// PlayerController/IndicatorAction
struct IndicatorAction_t2213590131;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void PlayerController/IndicatorAction::.ctor(System.Object,System.IntPtr)
extern "C"  void IndicatorAction__ctor_m950768538 (IndicatorAction_t2213590131 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController/IndicatorAction::Invoke(UnityEngine.Vector3)
extern "C"  void IndicatorAction_Invoke_m2282243813 (IndicatorAction_t2213590131 * __this, Vector3_t4282066566  ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult PlayerController/IndicatorAction::BeginInvoke(UnityEngine.Vector3,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * IndicatorAction_BeginInvoke_m2183358236 (IndicatorAction_t2213590131 * __this, Vector3_t4282066566  ___pos0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController/IndicatorAction::EndInvoke(System.IAsyncResult)
extern "C"  void IndicatorAction_EndInvoke_m1253892778 (IndicatorAction_t2213590131 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
