#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.SpriteRenderer>
struct List_1_t3916656316;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnimatorHandlerX
struct  AnimatorHandlerX_t1817087605  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<UnityEngine.SpriteRenderer> AnimatorHandlerX::customAnimators
	List_1_t3916656316 * ___customAnimators_2;

public:
	inline static int32_t get_offset_of_customAnimators_2() { return static_cast<int32_t>(offsetof(AnimatorHandlerX_t1817087605, ___customAnimators_2)); }
	inline List_1_t3916656316 * get_customAnimators_2() const { return ___customAnimators_2; }
	inline List_1_t3916656316 ** get_address_of_customAnimators_2() { return &___customAnimators_2; }
	inline void set_customAnimators_2(List_1_t3916656316 * value)
	{
		___customAnimators_2 = value;
		Il2CppCodeGenWriteBarrier(&___customAnimators_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
