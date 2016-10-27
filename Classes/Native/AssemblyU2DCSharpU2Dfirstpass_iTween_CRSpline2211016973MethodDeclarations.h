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

// iTween/CRSpline
struct CRSpline_t2211016973;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void iTween/CRSpline::.ctor(UnityEngine.Vector3[])
extern "C"  void CRSpline__ctor_m3985760045 (CRSpline_t2211016973 * __this, Vector3U5BU5D_t215400611* ___pts0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween/CRSpline::Interp(System.Single)
extern "C"  Vector3_t4282066566  CRSpline_Interp_m2118961751 (CRSpline_t2211016973 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
