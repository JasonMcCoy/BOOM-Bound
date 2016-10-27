#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1355284822;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1365137228;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlyingObjectMover
struct  FlyingObjectMover_t4290318483  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> FlyingObjectMover::Paths
	List_1_t1355284822 * ___Paths_2;
	// System.Collections.Generic.List`1<System.Single> FlyingObjectMover::MovementSpeed
	List_1_t1365137228 * ___MovementSpeed_3;
	// System.Single FlyingObjectMover::startingDelay
	float ___startingDelay_4;
	// System.Boolean FlyingObjectMover::isMoving
	bool ___isMoving_5;
	// System.Boolean FlyingObjectMover::isRotating
	bool ___isRotating_6;
	// System.Int32 FlyingObjectMover::currentPath
	int32_t ___currentPath_7;
	// UnityEngine.Vector3 FlyingObjectMover::startingPos
	Vector3_t4282066566  ___startingPos_8;
	// UnityEngine.Vector3 FlyingObjectMover::startingRot
	Vector3_t4282066566  ___startingRot_9;

public:
	inline static int32_t get_offset_of_Paths_2() { return static_cast<int32_t>(offsetof(FlyingObjectMover_t4290318483, ___Paths_2)); }
	inline List_1_t1355284822 * get_Paths_2() const { return ___Paths_2; }
	inline List_1_t1355284822 ** get_address_of_Paths_2() { return &___Paths_2; }
	inline void set_Paths_2(List_1_t1355284822 * value)
	{
		___Paths_2 = value;
		Il2CppCodeGenWriteBarrier(&___Paths_2, value);
	}

	inline static int32_t get_offset_of_MovementSpeed_3() { return static_cast<int32_t>(offsetof(FlyingObjectMover_t4290318483, ___MovementSpeed_3)); }
	inline List_1_t1365137228 * get_MovementSpeed_3() const { return ___MovementSpeed_3; }
	inline List_1_t1365137228 ** get_address_of_MovementSpeed_3() { return &___MovementSpeed_3; }
	inline void set_MovementSpeed_3(List_1_t1365137228 * value)
	{
		___MovementSpeed_3 = value;
		Il2CppCodeGenWriteBarrier(&___MovementSpeed_3, value);
	}

	inline static int32_t get_offset_of_startingDelay_4() { return static_cast<int32_t>(offsetof(FlyingObjectMover_t4290318483, ___startingDelay_4)); }
	inline float get_startingDelay_4() const { return ___startingDelay_4; }
	inline float* get_address_of_startingDelay_4() { return &___startingDelay_4; }
	inline void set_startingDelay_4(float value)
	{
		___startingDelay_4 = value;
	}

	inline static int32_t get_offset_of_isMoving_5() { return static_cast<int32_t>(offsetof(FlyingObjectMover_t4290318483, ___isMoving_5)); }
	inline bool get_isMoving_5() const { return ___isMoving_5; }
	inline bool* get_address_of_isMoving_5() { return &___isMoving_5; }
	inline void set_isMoving_5(bool value)
	{
		___isMoving_5 = value;
	}

	inline static int32_t get_offset_of_isRotating_6() { return static_cast<int32_t>(offsetof(FlyingObjectMover_t4290318483, ___isRotating_6)); }
	inline bool get_isRotating_6() const { return ___isRotating_6; }
	inline bool* get_address_of_isRotating_6() { return &___isRotating_6; }
	inline void set_isRotating_6(bool value)
	{
		___isRotating_6 = value;
	}

	inline static int32_t get_offset_of_currentPath_7() { return static_cast<int32_t>(offsetof(FlyingObjectMover_t4290318483, ___currentPath_7)); }
	inline int32_t get_currentPath_7() const { return ___currentPath_7; }
	inline int32_t* get_address_of_currentPath_7() { return &___currentPath_7; }
	inline void set_currentPath_7(int32_t value)
	{
		___currentPath_7 = value;
	}

	inline static int32_t get_offset_of_startingPos_8() { return static_cast<int32_t>(offsetof(FlyingObjectMover_t4290318483, ___startingPos_8)); }
	inline Vector3_t4282066566  get_startingPos_8() const { return ___startingPos_8; }
	inline Vector3_t4282066566 * get_address_of_startingPos_8() { return &___startingPos_8; }
	inline void set_startingPos_8(Vector3_t4282066566  value)
	{
		___startingPos_8 = value;
	}

	inline static int32_t get_offset_of_startingRot_9() { return static_cast<int32_t>(offsetof(FlyingObjectMover_t4290318483, ___startingRot_9)); }
	inline Vector3_t4282066566  get_startingRot_9() const { return ___startingRot_9; }
	inline Vector3_t4282066566 * get_address_of_startingRot_9() { return &___startingRot_9; }
	inline void set_startingRot_9(Vector3_t4282066566  value)
	{
		___startingRot_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
