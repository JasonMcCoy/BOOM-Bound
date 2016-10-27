#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameController
struct GameController_t2782302542;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t2782302542  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean GameController::gameOver
	bool ___gameOver_3;
	// System.Int32 GameController::currentLevel
	int32_t ___currentLevel_4;
	// UnityEngine.GameObject GameController::LevelTextPrefab
	GameObject_t3674682005 * ___LevelTextPrefab_5;
	// UnityEngine.GameObject GameController::PointIndicatorPrefab
	GameObject_t3674682005 * ___PointIndicatorPrefab_6;
	// UnityEngine.Transform GameController::CanvasTransform
	Transform_t1659122786 * ___CanvasTransform_7;

public:
	inline static int32_t get_offset_of_gameOver_3() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___gameOver_3)); }
	inline bool get_gameOver_3() const { return ___gameOver_3; }
	inline bool* get_address_of_gameOver_3() { return &___gameOver_3; }
	inline void set_gameOver_3(bool value)
	{
		___gameOver_3 = value;
	}

	inline static int32_t get_offset_of_currentLevel_4() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___currentLevel_4)); }
	inline int32_t get_currentLevel_4() const { return ___currentLevel_4; }
	inline int32_t* get_address_of_currentLevel_4() { return &___currentLevel_4; }
	inline void set_currentLevel_4(int32_t value)
	{
		___currentLevel_4 = value;
	}

	inline static int32_t get_offset_of_LevelTextPrefab_5() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___LevelTextPrefab_5)); }
	inline GameObject_t3674682005 * get_LevelTextPrefab_5() const { return ___LevelTextPrefab_5; }
	inline GameObject_t3674682005 ** get_address_of_LevelTextPrefab_5() { return &___LevelTextPrefab_5; }
	inline void set_LevelTextPrefab_5(GameObject_t3674682005 * value)
	{
		___LevelTextPrefab_5 = value;
		Il2CppCodeGenWriteBarrier(&___LevelTextPrefab_5, value);
	}

	inline static int32_t get_offset_of_PointIndicatorPrefab_6() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___PointIndicatorPrefab_6)); }
	inline GameObject_t3674682005 * get_PointIndicatorPrefab_6() const { return ___PointIndicatorPrefab_6; }
	inline GameObject_t3674682005 ** get_address_of_PointIndicatorPrefab_6() { return &___PointIndicatorPrefab_6; }
	inline void set_PointIndicatorPrefab_6(GameObject_t3674682005 * value)
	{
		___PointIndicatorPrefab_6 = value;
		Il2CppCodeGenWriteBarrier(&___PointIndicatorPrefab_6, value);
	}

	inline static int32_t get_offset_of_CanvasTransform_7() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___CanvasTransform_7)); }
	inline Transform_t1659122786 * get_CanvasTransform_7() const { return ___CanvasTransform_7; }
	inline Transform_t1659122786 ** get_address_of_CanvasTransform_7() { return &___CanvasTransform_7; }
	inline void set_CanvasTransform_7(Transform_t1659122786 * value)
	{
		___CanvasTransform_7 = value;
		Il2CppCodeGenWriteBarrier(&___CanvasTransform_7, value);
	}
};

struct GameController_t2782302542_StaticFields
{
public:
	// GameController GameController::Instance
	GameController_t2782302542 * ___Instance_2;

public:
	inline static int32_t get_offset_of_Instance_2() { return static_cast<int32_t>(offsetof(GameController_t2782302542_StaticFields, ___Instance_2)); }
	inline GameController_t2782302542 * get_Instance_2() const { return ___Instance_2; }
	inline GameController_t2782302542 ** get_address_of_Instance_2() { return &___Instance_2; }
	inline void set_Instance_2(GameController_t2782302542 * value)
	{
		___Instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
