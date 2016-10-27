#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t3230847821;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ArrayIndexes
struct  ArrayIndexes_t688921735  : public Il2CppObject
{
public:
	// System.Int32[] ArrayIndexes::indexes
	Int32U5BU5D_t3230847821* ___indexes_0;

public:
	inline static int32_t get_offset_of_indexes_0() { return static_cast<int32_t>(offsetof(ArrayIndexes_t688921735, ___indexes_0)); }
	inline Int32U5BU5D_t3230847821* get_indexes_0() const { return ___indexes_0; }
	inline Int32U5BU5D_t3230847821** get_address_of_indexes_0() { return &___indexes_0; }
	inline void set_indexes_0(Int32U5BU5D_t3230847821* value)
	{
		___indexes_0 = value;
		Il2CppCodeGenWriteBarrier(&___indexes_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
