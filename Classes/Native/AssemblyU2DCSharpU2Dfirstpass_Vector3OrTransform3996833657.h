#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t4054002952;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vector3OrTransform
struct  Vector3OrTransform_t3996833657  : public Il2CppObject
{
public:
	// System.Int32 Vector3OrTransform::selected
	int32_t ___selected_3;
	// UnityEngine.Vector3 Vector3OrTransform::vector
	Vector3_t4282066566  ___vector_4;
	// UnityEngine.Transform Vector3OrTransform::transform
	Transform_t1659122786 * ___transform_5;

public:
	inline static int32_t get_offset_of_selected_3() { return static_cast<int32_t>(offsetof(Vector3OrTransform_t3996833657, ___selected_3)); }
	inline int32_t get_selected_3() const { return ___selected_3; }
	inline int32_t* get_address_of_selected_3() { return &___selected_3; }
	inline void set_selected_3(int32_t value)
	{
		___selected_3 = value;
	}

	inline static int32_t get_offset_of_vector_4() { return static_cast<int32_t>(offsetof(Vector3OrTransform_t3996833657, ___vector_4)); }
	inline Vector3_t4282066566  get_vector_4() const { return ___vector_4; }
	inline Vector3_t4282066566 * get_address_of_vector_4() { return &___vector_4; }
	inline void set_vector_4(Vector3_t4282066566  value)
	{
		___vector_4 = value;
	}

	inline static int32_t get_offset_of_transform_5() { return static_cast<int32_t>(offsetof(Vector3OrTransform_t3996833657, ___transform_5)); }
	inline Transform_t1659122786 * get_transform_5() const { return ___transform_5; }
	inline Transform_t1659122786 ** get_address_of_transform_5() { return &___transform_5; }
	inline void set_transform_5(Transform_t1659122786 * value)
	{
		___transform_5 = value;
		Il2CppCodeGenWriteBarrier(&___transform_5, value);
	}
};

struct Vector3OrTransform_t3996833657_StaticFields
{
public:
	// System.String[] Vector3OrTransform::choices
	StringU5BU5D_t4054002952* ___choices_0;
	// System.Int32 Vector3OrTransform::vector3Selected
	int32_t ___vector3Selected_1;
	// System.Int32 Vector3OrTransform::transformSelected
	int32_t ___transformSelected_2;

public:
	inline static int32_t get_offset_of_choices_0() { return static_cast<int32_t>(offsetof(Vector3OrTransform_t3996833657_StaticFields, ___choices_0)); }
	inline StringU5BU5D_t4054002952* get_choices_0() const { return ___choices_0; }
	inline StringU5BU5D_t4054002952** get_address_of_choices_0() { return &___choices_0; }
	inline void set_choices_0(StringU5BU5D_t4054002952* value)
	{
		___choices_0 = value;
		Il2CppCodeGenWriteBarrier(&___choices_0, value);
	}

	inline static int32_t get_offset_of_vector3Selected_1() { return static_cast<int32_t>(offsetof(Vector3OrTransform_t3996833657_StaticFields, ___vector3Selected_1)); }
	inline int32_t get_vector3Selected_1() const { return ___vector3Selected_1; }
	inline int32_t* get_address_of_vector3Selected_1() { return &___vector3Selected_1; }
	inline void set_vector3Selected_1(int32_t value)
	{
		___vector3Selected_1 = value;
	}

	inline static int32_t get_offset_of_transformSelected_2() { return static_cast<int32_t>(offsetof(Vector3OrTransform_t3996833657_StaticFields, ___transformSelected_2)); }
	inline int32_t get_transformSelected_2() const { return ___transformSelected_2; }
	inline int32_t* get_address_of_transformSelected_2() { return &___transformSelected_2; }
	inline void set_transformSelected_2(int32_t value)
	{
		___transformSelected_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
