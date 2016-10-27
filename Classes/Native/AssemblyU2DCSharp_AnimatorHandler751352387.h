#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.SpriteRenderer>
struct List_1_t3916656316;
// UnityEngine.Sprite
struct Sprite_t3199167241;
// System.Collections.Generic.List`1<UnityEngine.Animator>
struct List_1_t4144516155;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnimatorHandler
struct  AnimatorHandler_t751352387  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<UnityEngine.SpriteRenderer> AnimatorHandler::_sprite
	List_1_t3916656316 * ____sprite_2;
	// UnityEngine.Sprite AnimatorHandler::image
	Sprite_t3199167241 * ___image_3;
	// System.Collections.Generic.List`1<UnityEngine.Animator> AnimatorHandler::_anim
	List_1_t4144516155 * ____anim_4;

public:
	inline static int32_t get_offset_of__sprite_2() { return static_cast<int32_t>(offsetof(AnimatorHandler_t751352387, ____sprite_2)); }
	inline List_1_t3916656316 * get__sprite_2() const { return ____sprite_2; }
	inline List_1_t3916656316 ** get_address_of__sprite_2() { return &____sprite_2; }
	inline void set__sprite_2(List_1_t3916656316 * value)
	{
		____sprite_2 = value;
		Il2CppCodeGenWriteBarrier(&____sprite_2, value);
	}

	inline static int32_t get_offset_of_image_3() { return static_cast<int32_t>(offsetof(AnimatorHandler_t751352387, ___image_3)); }
	inline Sprite_t3199167241 * get_image_3() const { return ___image_3; }
	inline Sprite_t3199167241 ** get_address_of_image_3() { return &___image_3; }
	inline void set_image_3(Sprite_t3199167241 * value)
	{
		___image_3 = value;
		Il2CppCodeGenWriteBarrier(&___image_3, value);
	}

	inline static int32_t get_offset_of__anim_4() { return static_cast<int32_t>(offsetof(AnimatorHandler_t751352387, ____anim_4)); }
	inline List_1_t4144516155 * get__anim_4() const { return ____anim_4; }
	inline List_1_t4144516155 ** get_address_of__anim_4() { return &____anim_4; }
	inline void set__anim_4(List_1_t4144516155 * value)
	{
		____anim_4 = value;
		Il2CppCodeGenWriteBarrier(&____anim_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
