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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BestLevelUI
struct  BestLevelUI_t3625408116  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text BestLevelUI::scoreText
	Text_t9039225 * ___scoreText_2;

public:
	inline static int32_t get_offset_of_scoreText_2() { return static_cast<int32_t>(offsetof(BestLevelUI_t3625408116, ___scoreText_2)); }
	inline Text_t9039225 * get_scoreText_2() const { return ___scoreText_2; }
	inline Text_t9039225 ** get_address_of_scoreText_2() { return &___scoreText_2; }
	inline void set_scoreText_2(Text_t9039225 * value)
	{
		___scoreText_2 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
