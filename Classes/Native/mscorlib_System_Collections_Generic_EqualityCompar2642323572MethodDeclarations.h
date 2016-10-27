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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>
struct DefaultComparer_t2642323572;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>::.ctor()
extern "C"  void DefaultComparer__ctor_m2683732618_gshared (DefaultComparer_t2642323572 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m2683732618(__this, method) ((  void (*) (DefaultComparer_t2642323572 *, const MethodInfo*))DefaultComparer__ctor_m2683732618_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>::GetHashCode(T)
extern "C"  int32_t DefaultComparer_GetHashCode_m45379809_gshared (DefaultComparer_t2642323572 * __this, Color_t4194546905  ___obj0, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m45379809(__this, ___obj0, method) ((  int32_t (*) (DefaultComparer_t2642323572 *, Color_t4194546905 , const MethodInfo*))DefaultComparer_GetHashCode_m45379809_gshared)(__this, ___obj0, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>::Equals(T,T)
extern "C"  bool DefaultComparer_Equals_m3300239835_gshared (DefaultComparer_t2642323572 * __this, Color_t4194546905  ___x0, Color_t4194546905  ___y1, const MethodInfo* method);
#define DefaultComparer_Equals_m3300239835(__this, ___x0, ___y1, method) ((  bool (*) (DefaultComparer_t2642323572 *, Color_t4194546905 , Color_t4194546905 , const MethodInfo*))DefaultComparer_Equals_m3300239835_gshared)(__this, ___x0, ___y1, method)
