﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// DG.Tweening.Tween
struct Tween_t675658773;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.DOTweenComponent/<WaitForStart>d__19
struct  U3CWaitForStartU3Ed__19_t256528201  : public Il2CppObject
{
public:
	// System.Int32 DG.Tweening.Core.DOTweenComponent/<WaitForStart>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DG.Tweening.Core.DOTweenComponent/<WaitForStart>d__19::<>2__current
	Il2CppObject * ___U3CU3E2__current_1;
	// DG.Tweening.Tween DG.Tweening.Core.DOTweenComponent/<WaitForStart>d__19::t
	Tween_t675658773 * ___t_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitForStartU3Ed__19_t256528201, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitForStartU3Ed__19_t256528201, ___U3CU3E2__current_1)); }
	inline Il2CppObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Il2CppObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Il2CppObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3E2__current_1, value);
	}

	inline static int32_t get_offset_of_t_2() { return static_cast<int32_t>(offsetof(U3CWaitForStartU3Ed__19_t256528201, ___t_2)); }
	inline Tween_t675658773 * get_t_2() const { return ___t_2; }
	inline Tween_t675658773 ** get_address_of_t_2() { return &___t_2; }
	inline void set_t_2(Tween_t675658773 * value)
	{
		___t_2 = value;
		Il2CppCodeGenWriteBarrier(&___t_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
