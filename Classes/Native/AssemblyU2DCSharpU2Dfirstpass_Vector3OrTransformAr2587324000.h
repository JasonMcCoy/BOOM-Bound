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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3792884695;
// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vector3OrTransformArray
struct  Vector3OrTransformArray_t2587324000  : public Il2CppObject
{
public:
	// System.Int32 Vector3OrTransformArray::selected
	int32_t ___selected_4;
	// UnityEngine.Vector3[] Vector3OrTransformArray::vectorArray
	Vector3U5BU5D_t215400611* ___vectorArray_5;
	// UnityEngine.Transform[] Vector3OrTransformArray::transformArray
	TransformU5BU5D_t3792884695* ___transformArray_6;
	// System.String Vector3OrTransformArray::pathName
	String_t* ___pathName_7;

public:
	inline static int32_t get_offset_of_selected_4() { return static_cast<int32_t>(offsetof(Vector3OrTransformArray_t2587324000, ___selected_4)); }
	inline int32_t get_selected_4() const { return ___selected_4; }
	inline int32_t* get_address_of_selected_4() { return &___selected_4; }
	inline void set_selected_4(int32_t value)
	{
		___selected_4 = value;
	}

	inline static int32_t get_offset_of_vectorArray_5() { return static_cast<int32_t>(offsetof(Vector3OrTransformArray_t2587324000, ___vectorArray_5)); }
	inline Vector3U5BU5D_t215400611* get_vectorArray_5() const { return ___vectorArray_5; }
	inline Vector3U5BU5D_t215400611** get_address_of_vectorArray_5() { return &___vectorArray_5; }
	inline void set_vectorArray_5(Vector3U5BU5D_t215400611* value)
	{
		___vectorArray_5 = value;
		Il2CppCodeGenWriteBarrier(&___vectorArray_5, value);
	}

	inline static int32_t get_offset_of_transformArray_6() { return static_cast<int32_t>(offsetof(Vector3OrTransformArray_t2587324000, ___transformArray_6)); }
	inline TransformU5BU5D_t3792884695* get_transformArray_6() const { return ___transformArray_6; }
	inline TransformU5BU5D_t3792884695** get_address_of_transformArray_6() { return &___transformArray_6; }
	inline void set_transformArray_6(TransformU5BU5D_t3792884695* value)
	{
		___transformArray_6 = value;
		Il2CppCodeGenWriteBarrier(&___transformArray_6, value);
	}

	inline static int32_t get_offset_of_pathName_7() { return static_cast<int32_t>(offsetof(Vector3OrTransformArray_t2587324000, ___pathName_7)); }
	inline String_t* get_pathName_7() const { return ___pathName_7; }
	inline String_t** get_address_of_pathName_7() { return &___pathName_7; }
	inline void set_pathName_7(String_t* value)
	{
		___pathName_7 = value;
		Il2CppCodeGenWriteBarrier(&___pathName_7, value);
	}
};

struct Vector3OrTransformArray_t2587324000_StaticFields
{
public:
	// System.String[] Vector3OrTransformArray::choices
	StringU5BU5D_t4054002952* ___choices_0;
	// System.Int32 Vector3OrTransformArray::vector3Selected
	int32_t ___vector3Selected_1;
	// System.Int32 Vector3OrTransformArray::transformSelected
	int32_t ___transformSelected_2;
	// System.Int32 Vector3OrTransformArray::iTweenPathSelected
	int32_t ___iTweenPathSelected_3;

public:
	inline static int32_t get_offset_of_choices_0() { return static_cast<int32_t>(offsetof(Vector3OrTransformArray_t2587324000_StaticFields, ___choices_0)); }
	inline StringU5BU5D_t4054002952* get_choices_0() const { return ___choices_0; }
	inline StringU5BU5D_t4054002952** get_address_of_choices_0() { return &___choices_0; }
	inline void set_choices_0(StringU5BU5D_t4054002952* value)
	{
		___choices_0 = value;
		Il2CppCodeGenWriteBarrier(&___choices_0, value);
	}

	inline static int32_t get_offset_of_vector3Selected_1() { return static_cast<int32_t>(offsetof(Vector3OrTransformArray_t2587324000_StaticFields, ___vector3Selected_1)); }
	inline int32_t get_vector3Selected_1() const { return ___vector3Selected_1; }
	inline int32_t* get_address_of_vector3Selected_1() { return &___vector3Selected_1; }
	inline void set_vector3Selected_1(int32_t value)
	{
		___vector3Selected_1 = value;
	}

	inline static int32_t get_offset_of_transformSelected_2() { return static_cast<int32_t>(offsetof(Vector3OrTransformArray_t2587324000_StaticFields, ___transformSelected_2)); }
	inline int32_t get_transformSelected_2() const { return ___transformSelected_2; }
	inline int32_t* get_address_of_transformSelected_2() { return &___transformSelected_2; }
	inline void set_transformSelected_2(int32_t value)
	{
		___transformSelected_2 = value;
	}

	inline static int32_t get_offset_of_iTweenPathSelected_3() { return static_cast<int32_t>(offsetof(Vector3OrTransformArray_t2587324000_StaticFields, ___iTweenPathSelected_3)); }
	inline int32_t get_iTweenPathSelected_3() const { return ___iTweenPathSelected_3; }
	inline int32_t* get_address_of_iTweenPathSelected_3() { return &___iTweenPathSelected_3; }
	inline void set_iTweenPathSelected_3(int32_t value)
	{
		___iTweenPathSelected_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
