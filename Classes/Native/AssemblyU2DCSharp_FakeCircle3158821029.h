#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FakeCircle
struct  FakeCircle_t3158821029  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean FakeCircle::moving
	bool ___moving_2;
	// UnityEngine.Vector3 FakeCircle::point
	Vector3_t4282066566  ___point_3;
	// System.Single FakeCircle::MovementSpeed
	float ___MovementSpeed_4;
	// UnityEngine.GameObject FakeCircle::target
	GameObject_t3674682005 * ___target_5;

public:
	inline static int32_t get_offset_of_moving_2() { return static_cast<int32_t>(offsetof(FakeCircle_t3158821029, ___moving_2)); }
	inline bool get_moving_2() const { return ___moving_2; }
	inline bool* get_address_of_moving_2() { return &___moving_2; }
	inline void set_moving_2(bool value)
	{
		___moving_2 = value;
	}

	inline static int32_t get_offset_of_point_3() { return static_cast<int32_t>(offsetof(FakeCircle_t3158821029, ___point_3)); }
	inline Vector3_t4282066566  get_point_3() const { return ___point_3; }
	inline Vector3_t4282066566 * get_address_of_point_3() { return &___point_3; }
	inline void set_point_3(Vector3_t4282066566  value)
	{
		___point_3 = value;
	}

	inline static int32_t get_offset_of_MovementSpeed_4() { return static_cast<int32_t>(offsetof(FakeCircle_t3158821029, ___MovementSpeed_4)); }
	inline float get_MovementSpeed_4() const { return ___MovementSpeed_4; }
	inline float* get_address_of_MovementSpeed_4() { return &___MovementSpeed_4; }
	inline void set_MovementSpeed_4(float value)
	{
		___MovementSpeed_4 = value;
	}

	inline static int32_t get_offset_of_target_5() { return static_cast<int32_t>(offsetof(FakeCircle_t3158821029, ___target_5)); }
	inline GameObject_t3674682005 * get_target_5() const { return ___target_5; }
	inline GameObject_t3674682005 ** get_address_of_target_5() { return &___target_5; }
	inline void set_target_5(GameObject_t3674682005 * value)
	{
		___target_5 = value;
		Il2CppCodeGenWriteBarrier(&___target_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
