#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TimerData
struct  TimerData_t2056740975  : public Il2CppObject
{
public:
	// System.Int32 TimerData::levelID
	int32_t ___levelID_0;
	// System.Single TimerData::fastestTime
	float ___fastestTime_1;

public:
	inline static int32_t get_offset_of_levelID_0() { return static_cast<int32_t>(offsetof(TimerData_t2056740975, ___levelID_0)); }
	inline int32_t get_levelID_0() const { return ___levelID_0; }
	inline int32_t* get_address_of_levelID_0() { return &___levelID_0; }
	inline void set_levelID_0(int32_t value)
	{
		___levelID_0 = value;
	}

	inline static int32_t get_offset_of_fastestTime_1() { return static_cast<int32_t>(offsetof(TimerData_t2056740975, ___fastestTime_1)); }
	inline float get_fastestTime_1() const { return ___fastestTime_1; }
	inline float* get_address_of_fastestTime_1() { return &___fastestTime_1; }
	inline void set_fastestTime_1(float value)
	{
		___fastestTime_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
