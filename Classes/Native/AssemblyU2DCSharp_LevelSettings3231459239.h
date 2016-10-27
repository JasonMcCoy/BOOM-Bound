#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Single>
struct List_1_t1365137228;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelSettings
struct  LevelSettings_t3231459239  : public MonoBehaviour_t667441552
{
public:
	// System.Single LevelSettings::initialDelay
	float ___initialDelay_2;
	// System.Single LevelSettings::delayInRound
	float ___delayInRound_3;
	// System.Single LevelSettings::destroyTime
	float ___destroyTime_4;
	// System.Collections.Generic.List`1<System.Single> LevelSettings::delayInExplosions
	List_1_t1365137228 * ___delayInExplosions_5;
	// System.Int32 LevelSettings::currentActive
	int32_t ___currentActive_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> LevelSettings::exploders
	List_1_t747900261 * ___exploders_7;

public:
	inline static int32_t get_offset_of_initialDelay_2() { return static_cast<int32_t>(offsetof(LevelSettings_t3231459239, ___initialDelay_2)); }
	inline float get_initialDelay_2() const { return ___initialDelay_2; }
	inline float* get_address_of_initialDelay_2() { return &___initialDelay_2; }
	inline void set_initialDelay_2(float value)
	{
		___initialDelay_2 = value;
	}

	inline static int32_t get_offset_of_delayInRound_3() { return static_cast<int32_t>(offsetof(LevelSettings_t3231459239, ___delayInRound_3)); }
	inline float get_delayInRound_3() const { return ___delayInRound_3; }
	inline float* get_address_of_delayInRound_3() { return &___delayInRound_3; }
	inline void set_delayInRound_3(float value)
	{
		___delayInRound_3 = value;
	}

	inline static int32_t get_offset_of_destroyTime_4() { return static_cast<int32_t>(offsetof(LevelSettings_t3231459239, ___destroyTime_4)); }
	inline float get_destroyTime_4() const { return ___destroyTime_4; }
	inline float* get_address_of_destroyTime_4() { return &___destroyTime_4; }
	inline void set_destroyTime_4(float value)
	{
		___destroyTime_4 = value;
	}

	inline static int32_t get_offset_of_delayInExplosions_5() { return static_cast<int32_t>(offsetof(LevelSettings_t3231459239, ___delayInExplosions_5)); }
	inline List_1_t1365137228 * get_delayInExplosions_5() const { return ___delayInExplosions_5; }
	inline List_1_t1365137228 ** get_address_of_delayInExplosions_5() { return &___delayInExplosions_5; }
	inline void set_delayInExplosions_5(List_1_t1365137228 * value)
	{
		___delayInExplosions_5 = value;
		Il2CppCodeGenWriteBarrier(&___delayInExplosions_5, value);
	}

	inline static int32_t get_offset_of_currentActive_6() { return static_cast<int32_t>(offsetof(LevelSettings_t3231459239, ___currentActive_6)); }
	inline int32_t get_currentActive_6() const { return ___currentActive_6; }
	inline int32_t* get_address_of_currentActive_6() { return &___currentActive_6; }
	inline void set_currentActive_6(int32_t value)
	{
		___currentActive_6 = value;
	}

	inline static int32_t get_offset_of_exploders_7() { return static_cast<int32_t>(offsetof(LevelSettings_t3231459239, ___exploders_7)); }
	inline List_1_t747900261 * get_exploders_7() const { return ___exploders_7; }
	inline List_1_t747900261 ** get_address_of_exploders_7() { return &___exploders_7; }
	inline void set_exploders_7(List_1_t747900261 * value)
	{
		___exploders_7 = value;
		Il2CppCodeGenWriteBarrier(&___exploders_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
