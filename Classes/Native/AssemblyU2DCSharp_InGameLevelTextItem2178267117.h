#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;
// InGameLevelTextItem
struct InGameLevelTextItem_t2178267117;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InGameLevelTextItem
struct  InGameLevelTextItem_t2178267117  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text InGameLevelTextItem::shadowText
	Text_t9039225 * ___shadowText_2;
	// UnityEngine.UI.Text InGameLevelTextItem::levelText
	Text_t9039225 * ___levelText_3;
	// UnityEngine.UI.Text InGameLevelTextItem::timeText
	Text_t9039225 * ___timeText_4;

public:
	inline static int32_t get_offset_of_shadowText_2() { return static_cast<int32_t>(offsetof(InGameLevelTextItem_t2178267117, ___shadowText_2)); }
	inline Text_t9039225 * get_shadowText_2() const { return ___shadowText_2; }
	inline Text_t9039225 ** get_address_of_shadowText_2() { return &___shadowText_2; }
	inline void set_shadowText_2(Text_t9039225 * value)
	{
		___shadowText_2 = value;
		Il2CppCodeGenWriteBarrier(&___shadowText_2, value);
	}

	inline static int32_t get_offset_of_levelText_3() { return static_cast<int32_t>(offsetof(InGameLevelTextItem_t2178267117, ___levelText_3)); }
	inline Text_t9039225 * get_levelText_3() const { return ___levelText_3; }
	inline Text_t9039225 ** get_address_of_levelText_3() { return &___levelText_3; }
	inline void set_levelText_3(Text_t9039225 * value)
	{
		___levelText_3 = value;
		Il2CppCodeGenWriteBarrier(&___levelText_3, value);
	}

	inline static int32_t get_offset_of_timeText_4() { return static_cast<int32_t>(offsetof(InGameLevelTextItem_t2178267117, ___timeText_4)); }
	inline Text_t9039225 * get_timeText_4() const { return ___timeText_4; }
	inline Text_t9039225 ** get_address_of_timeText_4() { return &___timeText_4; }
	inline void set_timeText_4(Text_t9039225 * value)
	{
		___timeText_4 = value;
		Il2CppCodeGenWriteBarrier(&___timeText_4, value);
	}
};

struct InGameLevelTextItem_t2178267117_StaticFields
{
public:
	// InGameLevelTextItem InGameLevelTextItem::instance
	InGameLevelTextItem_t2178267117 * ___instance_5;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(InGameLevelTextItem_t2178267117_StaticFields, ___instance_5)); }
	inline InGameLevelTextItem_t2178267117 * get_instance_5() const { return ___instance_5; }
	inline InGameLevelTextItem_t2178267117 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(InGameLevelTextItem_t2178267117 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
