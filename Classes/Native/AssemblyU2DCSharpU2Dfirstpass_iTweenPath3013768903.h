#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1355284822;
// System.Collections.Generic.Dictionary`2<System.String,iTweenPath>
struct Dictionary_2_t3834187273;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTweenPath
struct  iTweenPath_t3013768903  : public MonoBehaviour_t667441552
{
public:
	// System.String iTweenPath::pathName
	String_t* ___pathName_2;
	// UnityEngine.Color iTweenPath::pathColor
	Color_t4194546905  ___pathColor_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> iTweenPath::nodes
	List_1_t1355284822 * ___nodes_4;
	// System.Int32 iTweenPath::nodeCount
	int32_t ___nodeCount_5;
	// System.Boolean iTweenPath::initialized
	bool ___initialized_7;
	// System.String iTweenPath::initialName
	String_t* ___initialName_8;

public:
	inline static int32_t get_offset_of_pathName_2() { return static_cast<int32_t>(offsetof(iTweenPath_t3013768903, ___pathName_2)); }
	inline String_t* get_pathName_2() const { return ___pathName_2; }
	inline String_t** get_address_of_pathName_2() { return &___pathName_2; }
	inline void set_pathName_2(String_t* value)
	{
		___pathName_2 = value;
		Il2CppCodeGenWriteBarrier(&___pathName_2, value);
	}

	inline static int32_t get_offset_of_pathColor_3() { return static_cast<int32_t>(offsetof(iTweenPath_t3013768903, ___pathColor_3)); }
	inline Color_t4194546905  get_pathColor_3() const { return ___pathColor_3; }
	inline Color_t4194546905 * get_address_of_pathColor_3() { return &___pathColor_3; }
	inline void set_pathColor_3(Color_t4194546905  value)
	{
		___pathColor_3 = value;
	}

	inline static int32_t get_offset_of_nodes_4() { return static_cast<int32_t>(offsetof(iTweenPath_t3013768903, ___nodes_4)); }
	inline List_1_t1355284822 * get_nodes_4() const { return ___nodes_4; }
	inline List_1_t1355284822 ** get_address_of_nodes_4() { return &___nodes_4; }
	inline void set_nodes_4(List_1_t1355284822 * value)
	{
		___nodes_4 = value;
		Il2CppCodeGenWriteBarrier(&___nodes_4, value);
	}

	inline static int32_t get_offset_of_nodeCount_5() { return static_cast<int32_t>(offsetof(iTweenPath_t3013768903, ___nodeCount_5)); }
	inline int32_t get_nodeCount_5() const { return ___nodeCount_5; }
	inline int32_t* get_address_of_nodeCount_5() { return &___nodeCount_5; }
	inline void set_nodeCount_5(int32_t value)
	{
		___nodeCount_5 = value;
	}

	inline static int32_t get_offset_of_initialized_7() { return static_cast<int32_t>(offsetof(iTweenPath_t3013768903, ___initialized_7)); }
	inline bool get_initialized_7() const { return ___initialized_7; }
	inline bool* get_address_of_initialized_7() { return &___initialized_7; }
	inline void set_initialized_7(bool value)
	{
		___initialized_7 = value;
	}

	inline static int32_t get_offset_of_initialName_8() { return static_cast<int32_t>(offsetof(iTweenPath_t3013768903, ___initialName_8)); }
	inline String_t* get_initialName_8() const { return ___initialName_8; }
	inline String_t** get_address_of_initialName_8() { return &___initialName_8; }
	inline void set_initialName_8(String_t* value)
	{
		___initialName_8 = value;
		Il2CppCodeGenWriteBarrier(&___initialName_8, value);
	}
};

struct iTweenPath_t3013768903_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,iTweenPath> iTweenPath::paths
	Dictionary_2_t3834187273 * ___paths_6;

public:
	inline static int32_t get_offset_of_paths_6() { return static_cast<int32_t>(offsetof(iTweenPath_t3013768903_StaticFields, ___paths_6)); }
	inline Dictionary_2_t3834187273 * get_paths_6() const { return ___paths_6; }
	inline Dictionary_2_t3834187273 ** get_address_of_paths_6() { return &___paths_6; }
	inline void set_paths_6(Dictionary_2_t3834187273 * value)
	{
		___paths_6 = value;
		Il2CppCodeGenWriteBarrier(&___paths_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
