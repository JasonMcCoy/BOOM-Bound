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

// System.Collections.Generic.Dictionary`2/Transform`1<iTweenEvent/TweenType,System.Object,System.Collections.Generic.KeyValuePair`2<iTweenEvent/TweenType,System.Object>>
struct Transform_1_t2725865083;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22390984394.h"
#include "AssemblyU2DCSharpU2Dfirstpass_iTweenEvent_TweenTyp2723270414.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<iTweenEvent/TweenType,System.Object,System.Collections.Generic.KeyValuePair`2<iTweenEvent/TweenType,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m252775420_gshared (Transform_1_t2725865083 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m252775420(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2725865083 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m252775420_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<iTweenEvent/TweenType,System.Object,System.Collections.Generic.KeyValuePair`2<iTweenEvent/TweenType,System.Object>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t2390984394  Transform_1_Invoke_m3033833212_gshared (Transform_1_t2725865083 * __this, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3033833212(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t2390984394  (*) (Transform_1_t2725865083 *, int32_t, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m3033833212_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<iTweenEvent/TweenType,System.Object,System.Collections.Generic.KeyValuePair`2<iTweenEvent/TweenType,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3827945639_gshared (Transform_1_t2725865083 * __this, int32_t ___key0, Il2CppObject * ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3827945639(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2725865083 *, int32_t, Il2CppObject *, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3827945639_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<iTweenEvent/TweenType,System.Object,System.Collections.Generic.KeyValuePair`2<iTweenEvent/TweenType,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t2390984394  Transform_1_EndInvoke_m4590606_gshared (Transform_1_t2725865083 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m4590606(__this, ___result0, method) ((  KeyValuePair_2_t2390984394  (*) (Transform_1_t2725865083 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m4590606_gshared)(__this, ___result0, method)
