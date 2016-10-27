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

// PlayerController/DelegateGameStop
struct DelegateGameStop_t1287275051;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void PlayerController/DelegateGameStop::.ctor(System.Object,System.IntPtr)
extern "C"  void DelegateGameStop__ctor_m2383543426 (DelegateGameStop_t1287275051 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController/DelegateGameStop::Invoke(System.Boolean)
extern "C"  void DelegateGameStop_Invoke_m2283596755 (DelegateGameStop_t1287275051 * __this, bool ___stopped0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult PlayerController/DelegateGameStop::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DelegateGameStop_BeginInvoke_m89699192 (DelegateGameStop_t1287275051 * __this, bool ___stopped0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController/DelegateGameStop::EndInvoke(System.IAsyncResult)
extern "C"  void DelegateGameStop_EndInvoke_m1749811090 (DelegateGameStop_t1287275051 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
