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

// TimerData
struct TimerData_t2056740975;

#include "codegen/il2cpp-codegen.h"

// System.Void TimerData::.ctor(System.Int32)
extern "C"  void TimerData__ctor_m2268433709 (TimerData_t2056740975 * __this, int32_t ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimerData::.ctor(System.Int32,System.Single)
extern "C"  void TimerData__ctor_m3909551442 (TimerData_t2056740975 * __this, int32_t ___level0, float ___miliseconds1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimerData::Load(System.Int32)
extern "C"  void TimerData_Load_m1872663455 (TimerData_t2056740975 * __this, int32_t ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimerData::Save()
extern "C"  void TimerData_Save_m3059193381 (TimerData_t2056740975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TimerData::GetFastestTime()
extern "C"  float TimerData_GetFastestTime_m3913639677 (TimerData_t2056740975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimerData::SetFastestTime(System.Single)
extern "C"  void TimerData_SetFastestTime_m2287268622 (TimerData_t2056740975 * __this, float ___miliseconds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
