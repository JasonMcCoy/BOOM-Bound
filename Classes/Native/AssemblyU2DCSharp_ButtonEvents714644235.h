#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t538875265;
// UnityEngine.UI.Toggle
struct Toggle_t110812896;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ButtonEvents
struct  ButtonEvents_t714644235  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Image ButtonEvents::fade
	Image_t538875265 * ___fade_2;
	// UnityEngine.UI.Toggle ButtonEvents::soundToggle
	Toggle_t110812896 * ___soundToggle_3;

public:
	inline static int32_t get_offset_of_fade_2() { return static_cast<int32_t>(offsetof(ButtonEvents_t714644235, ___fade_2)); }
	inline Image_t538875265 * get_fade_2() const { return ___fade_2; }
	inline Image_t538875265 ** get_address_of_fade_2() { return &___fade_2; }
	inline void set_fade_2(Image_t538875265 * value)
	{
		___fade_2 = value;
		Il2CppCodeGenWriteBarrier(&___fade_2, value);
	}

	inline static int32_t get_offset_of_soundToggle_3() { return static_cast<int32_t>(offsetof(ButtonEvents_t714644235, ___soundToggle_3)); }
	inline Toggle_t110812896 * get_soundToggle_3() const { return ___soundToggle_3; }
	inline Toggle_t110812896 ** get_address_of_soundToggle_3() { return &___soundToggle_3; }
	inline void set_soundToggle_3(Toggle_t110812896 * value)
	{
		___soundToggle_3 = value;
		Il2CppCodeGenWriteBarrier(&___soundToggle_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
