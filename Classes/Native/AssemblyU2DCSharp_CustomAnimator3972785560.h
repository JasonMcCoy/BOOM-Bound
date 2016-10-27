#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2761310900;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t2548470764;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CustomAnimator
struct  CustomAnimator_t3972785560  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Sprite[] CustomAnimator::frames
	SpriteU5BU5D_t2761310900* ___frames_2;
	// System.Single CustomAnimator::frameDelay
	float ___frameDelay_3;
	// System.Boolean CustomAnimator::disableAfterAnimation
	bool ___disableAfterAnimation_4;
	// UnityEngine.SpriteRenderer CustomAnimator::rend
	SpriteRenderer_t2548470764 * ___rend_5;
	// UnityEngine.GameObject CustomAnimator::g
	GameObject_t3674682005 * ___g_6;

public:
	inline static int32_t get_offset_of_frames_2() { return static_cast<int32_t>(offsetof(CustomAnimator_t3972785560, ___frames_2)); }
	inline SpriteU5BU5D_t2761310900* get_frames_2() const { return ___frames_2; }
	inline SpriteU5BU5D_t2761310900** get_address_of_frames_2() { return &___frames_2; }
	inline void set_frames_2(SpriteU5BU5D_t2761310900* value)
	{
		___frames_2 = value;
		Il2CppCodeGenWriteBarrier(&___frames_2, value);
	}

	inline static int32_t get_offset_of_frameDelay_3() { return static_cast<int32_t>(offsetof(CustomAnimator_t3972785560, ___frameDelay_3)); }
	inline float get_frameDelay_3() const { return ___frameDelay_3; }
	inline float* get_address_of_frameDelay_3() { return &___frameDelay_3; }
	inline void set_frameDelay_3(float value)
	{
		___frameDelay_3 = value;
	}

	inline static int32_t get_offset_of_disableAfterAnimation_4() { return static_cast<int32_t>(offsetof(CustomAnimator_t3972785560, ___disableAfterAnimation_4)); }
	inline bool get_disableAfterAnimation_4() const { return ___disableAfterAnimation_4; }
	inline bool* get_address_of_disableAfterAnimation_4() { return &___disableAfterAnimation_4; }
	inline void set_disableAfterAnimation_4(bool value)
	{
		___disableAfterAnimation_4 = value;
	}

	inline static int32_t get_offset_of_rend_5() { return static_cast<int32_t>(offsetof(CustomAnimator_t3972785560, ___rend_5)); }
	inline SpriteRenderer_t2548470764 * get_rend_5() const { return ___rend_5; }
	inline SpriteRenderer_t2548470764 ** get_address_of_rend_5() { return &___rend_5; }
	inline void set_rend_5(SpriteRenderer_t2548470764 * value)
	{
		___rend_5 = value;
		Il2CppCodeGenWriteBarrier(&___rend_5, value);
	}

	inline static int32_t get_offset_of_g_6() { return static_cast<int32_t>(offsetof(CustomAnimator_t3972785560, ___g_6)); }
	inline GameObject_t3674682005 * get_g_6() const { return ___g_6; }
	inline GameObject_t3674682005 ** get_address_of_g_6() { return &___g_6; }
	inline void set_g_6(GameObject_t3674682005 * value)
	{
		___g_6 = value;
		Il2CppCodeGenWriteBarrier(&___g_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
