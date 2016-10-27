#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Renderer
struct Renderer_t3076687687;
// LevelSettings
struct LevelSettings_t3231459239;
// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// ReviewController
struct ReviewController_t2155359540;
// UnityEngine.Transform
struct Transform_t1659122786;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1355284822;
// UnityEngine.Animator
struct Animator_t2776330603;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// PlayerController/IndicatorAction
struct IndicatorAction_t2213590131;
// PlayerController/DelegateGameStop
struct DelegateGameStop_t1287275051;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2866526589  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Renderer PlayerController::playerVisibilty
	Renderer_t3076687687 * ___playerVisibilty_2;
	// LevelSettings PlayerController::levelSetting
	LevelSettings_t3231459239 * ___levelSetting_3;
	// UnityEngine.UI.Text PlayerController::levelNoText
	Text_t9039225 * ___levelNoText_4;
	// UnityEngine.UI.Text PlayerController::levelNoText_GameWin
	Text_t9039225 * ___levelNoText_GameWin_5;
	// UnityEngine.UI.Text PlayerController::levelNoText_GameOver
	Text_t9039225 * ___levelNoText_GameOver_6;
	// UnityEngine.Vector3 PlayerController::limitPos
	Vector3_t4282066566  ___limitPos_7;
	// UnityEngine.UI.Text PlayerController::totalCoinsText
	Text_t9039225 * ___totalCoinsText_8;
	// UnityEngine.RectTransform PlayerController::gameWinScreen
	RectTransform_t972643934 * ___gameWinScreen_9;
	// UnityEngine.RectTransform PlayerController::gameOverScreen
	RectTransform_t972643934 * ___gameOverScreen_10;
	// UnityEngine.UI.Text PlayerController::coinLabel
	Text_t9039225 * ___coinLabel_12;
	// System.Int32 PlayerController::winningCoins
	int32_t ___winningCoins_13;
	// UnityEngine.UI.Text PlayerController::totalCoinsLabel
	Text_t9039225 * ___totalCoinsLabel_14;
	// UnityEngine.UI.Text PlayerController::totalCoinsLabel_GameOver
	Text_t9039225 * ___totalCoinsLabel_GameOver_15;
	// System.Single PlayerController::delayMovement
	float ___delayMovement_16;
	// System.Single PlayerController::time1
	float ___time1_17;
	// System.Single PlayerController::time2
	float ___time2_18;
	// System.Single PlayerController::MovementSpeed
	float ___MovementSpeed_19;
	// ReviewController PlayerController::reviewController
	ReviewController_t2155359540 * ___reviewController_20;
	// UnityEngine.Transform PlayerController::_mainCameraTransform
	Transform_t1659122786 * ____mainCameraTransform_21;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> PlayerController::points
	List_1_t1355284822 * ___points_22;
	// UnityEngine.Vector3 PlayerController::previouspos
	Vector3_t4282066566  ___previouspos_23;
	// UnityEngine.Animator PlayerController::_anim
	Animator_t2776330603 * ____anim_24;
	// System.Single PlayerController::levelStartingTime
	float ___levelStartingTime_25;
	// UnityEngine.UI.Text PlayerController::retryCoinText_WinScreen
	Text_t9039225 * ___retryCoinText_WinScreen_26;
	// UnityEngine.UI.Text PlayerController::retryCoinText
	Text_t9039225 * ___retryCoinText_27;
	// UnityEngine.Vector2 PlayerController::stopOnReleaseVector
	Vector2_t4282066565  ___stopOnReleaseVector_28;
	// UnityEngine.Rigidbody2D PlayerController::rigidBody2D
	Rigidbody2D_t1743771669 * ___rigidBody2D_29;
	// System.Single PlayerController::directionThreshold
	float ___directionThreshold_30;
	// System.Int32 PlayerController::animCallNumber
	int32_t ___animCallNumber_31;
	// System.Boolean PlayerController::movementCalled
	bool ___movementCalled_32;
	// System.Boolean PlayerController::movePlayer
	bool ___movePlayer_33;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> PlayerController::LastestPositions
	List_1_t1355284822 * ___LastestPositions_34;
	// UnityEngine.GameObject PlayerController::myCamera
	GameObject_t3674682005 * ___myCamera_35;
	// UnityEngine.AudioSource PlayerController::bgAudioSource
	AudioSource_t1740077639 * ___bgAudioSource_36;

public:
	inline static int32_t get_offset_of_playerVisibilty_2() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___playerVisibilty_2)); }
	inline Renderer_t3076687687 * get_playerVisibilty_2() const { return ___playerVisibilty_2; }
	inline Renderer_t3076687687 ** get_address_of_playerVisibilty_2() { return &___playerVisibilty_2; }
	inline void set_playerVisibilty_2(Renderer_t3076687687 * value)
	{
		___playerVisibilty_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerVisibilty_2, value);
	}

	inline static int32_t get_offset_of_levelSetting_3() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___levelSetting_3)); }
	inline LevelSettings_t3231459239 * get_levelSetting_3() const { return ___levelSetting_3; }
	inline LevelSettings_t3231459239 ** get_address_of_levelSetting_3() { return &___levelSetting_3; }
	inline void set_levelSetting_3(LevelSettings_t3231459239 * value)
	{
		___levelSetting_3 = value;
		Il2CppCodeGenWriteBarrier(&___levelSetting_3, value);
	}

	inline static int32_t get_offset_of_levelNoText_4() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___levelNoText_4)); }
	inline Text_t9039225 * get_levelNoText_4() const { return ___levelNoText_4; }
	inline Text_t9039225 ** get_address_of_levelNoText_4() { return &___levelNoText_4; }
	inline void set_levelNoText_4(Text_t9039225 * value)
	{
		___levelNoText_4 = value;
		Il2CppCodeGenWriteBarrier(&___levelNoText_4, value);
	}

	inline static int32_t get_offset_of_levelNoText_GameWin_5() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___levelNoText_GameWin_5)); }
	inline Text_t9039225 * get_levelNoText_GameWin_5() const { return ___levelNoText_GameWin_5; }
	inline Text_t9039225 ** get_address_of_levelNoText_GameWin_5() { return &___levelNoText_GameWin_5; }
	inline void set_levelNoText_GameWin_5(Text_t9039225 * value)
	{
		___levelNoText_GameWin_5 = value;
		Il2CppCodeGenWriteBarrier(&___levelNoText_GameWin_5, value);
	}

	inline static int32_t get_offset_of_levelNoText_GameOver_6() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___levelNoText_GameOver_6)); }
	inline Text_t9039225 * get_levelNoText_GameOver_6() const { return ___levelNoText_GameOver_6; }
	inline Text_t9039225 ** get_address_of_levelNoText_GameOver_6() { return &___levelNoText_GameOver_6; }
	inline void set_levelNoText_GameOver_6(Text_t9039225 * value)
	{
		___levelNoText_GameOver_6 = value;
		Il2CppCodeGenWriteBarrier(&___levelNoText_GameOver_6, value);
	}

	inline static int32_t get_offset_of_limitPos_7() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___limitPos_7)); }
	inline Vector3_t4282066566  get_limitPos_7() const { return ___limitPos_7; }
	inline Vector3_t4282066566 * get_address_of_limitPos_7() { return &___limitPos_7; }
	inline void set_limitPos_7(Vector3_t4282066566  value)
	{
		___limitPos_7 = value;
	}

	inline static int32_t get_offset_of_totalCoinsText_8() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___totalCoinsText_8)); }
	inline Text_t9039225 * get_totalCoinsText_8() const { return ___totalCoinsText_8; }
	inline Text_t9039225 ** get_address_of_totalCoinsText_8() { return &___totalCoinsText_8; }
	inline void set_totalCoinsText_8(Text_t9039225 * value)
	{
		___totalCoinsText_8 = value;
		Il2CppCodeGenWriteBarrier(&___totalCoinsText_8, value);
	}

	inline static int32_t get_offset_of_gameWinScreen_9() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___gameWinScreen_9)); }
	inline RectTransform_t972643934 * get_gameWinScreen_9() const { return ___gameWinScreen_9; }
	inline RectTransform_t972643934 ** get_address_of_gameWinScreen_9() { return &___gameWinScreen_9; }
	inline void set_gameWinScreen_9(RectTransform_t972643934 * value)
	{
		___gameWinScreen_9 = value;
		Il2CppCodeGenWriteBarrier(&___gameWinScreen_9, value);
	}

	inline static int32_t get_offset_of_gameOverScreen_10() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___gameOverScreen_10)); }
	inline RectTransform_t972643934 * get_gameOverScreen_10() const { return ___gameOverScreen_10; }
	inline RectTransform_t972643934 ** get_address_of_gameOverScreen_10() { return &___gameOverScreen_10; }
	inline void set_gameOverScreen_10(RectTransform_t972643934 * value)
	{
		___gameOverScreen_10 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverScreen_10, value);
	}

	inline static int32_t get_offset_of_coinLabel_12() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___coinLabel_12)); }
	inline Text_t9039225 * get_coinLabel_12() const { return ___coinLabel_12; }
	inline Text_t9039225 ** get_address_of_coinLabel_12() { return &___coinLabel_12; }
	inline void set_coinLabel_12(Text_t9039225 * value)
	{
		___coinLabel_12 = value;
		Il2CppCodeGenWriteBarrier(&___coinLabel_12, value);
	}

	inline static int32_t get_offset_of_winningCoins_13() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___winningCoins_13)); }
	inline int32_t get_winningCoins_13() const { return ___winningCoins_13; }
	inline int32_t* get_address_of_winningCoins_13() { return &___winningCoins_13; }
	inline void set_winningCoins_13(int32_t value)
	{
		___winningCoins_13 = value;
	}

	inline static int32_t get_offset_of_totalCoinsLabel_14() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___totalCoinsLabel_14)); }
	inline Text_t9039225 * get_totalCoinsLabel_14() const { return ___totalCoinsLabel_14; }
	inline Text_t9039225 ** get_address_of_totalCoinsLabel_14() { return &___totalCoinsLabel_14; }
	inline void set_totalCoinsLabel_14(Text_t9039225 * value)
	{
		___totalCoinsLabel_14 = value;
		Il2CppCodeGenWriteBarrier(&___totalCoinsLabel_14, value);
	}

	inline static int32_t get_offset_of_totalCoinsLabel_GameOver_15() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___totalCoinsLabel_GameOver_15)); }
	inline Text_t9039225 * get_totalCoinsLabel_GameOver_15() const { return ___totalCoinsLabel_GameOver_15; }
	inline Text_t9039225 ** get_address_of_totalCoinsLabel_GameOver_15() { return &___totalCoinsLabel_GameOver_15; }
	inline void set_totalCoinsLabel_GameOver_15(Text_t9039225 * value)
	{
		___totalCoinsLabel_GameOver_15 = value;
		Il2CppCodeGenWriteBarrier(&___totalCoinsLabel_GameOver_15, value);
	}

	inline static int32_t get_offset_of_delayMovement_16() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___delayMovement_16)); }
	inline float get_delayMovement_16() const { return ___delayMovement_16; }
	inline float* get_address_of_delayMovement_16() { return &___delayMovement_16; }
	inline void set_delayMovement_16(float value)
	{
		___delayMovement_16 = value;
	}

	inline static int32_t get_offset_of_time1_17() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___time1_17)); }
	inline float get_time1_17() const { return ___time1_17; }
	inline float* get_address_of_time1_17() { return &___time1_17; }
	inline void set_time1_17(float value)
	{
		___time1_17 = value;
	}

	inline static int32_t get_offset_of_time2_18() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___time2_18)); }
	inline float get_time2_18() const { return ___time2_18; }
	inline float* get_address_of_time2_18() { return &___time2_18; }
	inline void set_time2_18(float value)
	{
		___time2_18 = value;
	}

	inline static int32_t get_offset_of_MovementSpeed_19() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___MovementSpeed_19)); }
	inline float get_MovementSpeed_19() const { return ___MovementSpeed_19; }
	inline float* get_address_of_MovementSpeed_19() { return &___MovementSpeed_19; }
	inline void set_MovementSpeed_19(float value)
	{
		___MovementSpeed_19 = value;
	}

	inline static int32_t get_offset_of_reviewController_20() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___reviewController_20)); }
	inline ReviewController_t2155359540 * get_reviewController_20() const { return ___reviewController_20; }
	inline ReviewController_t2155359540 ** get_address_of_reviewController_20() { return &___reviewController_20; }
	inline void set_reviewController_20(ReviewController_t2155359540 * value)
	{
		___reviewController_20 = value;
		Il2CppCodeGenWriteBarrier(&___reviewController_20, value);
	}

	inline static int32_t get_offset_of__mainCameraTransform_21() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ____mainCameraTransform_21)); }
	inline Transform_t1659122786 * get__mainCameraTransform_21() const { return ____mainCameraTransform_21; }
	inline Transform_t1659122786 ** get_address_of__mainCameraTransform_21() { return &____mainCameraTransform_21; }
	inline void set__mainCameraTransform_21(Transform_t1659122786 * value)
	{
		____mainCameraTransform_21 = value;
		Il2CppCodeGenWriteBarrier(&____mainCameraTransform_21, value);
	}

	inline static int32_t get_offset_of_points_22() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___points_22)); }
	inline List_1_t1355284822 * get_points_22() const { return ___points_22; }
	inline List_1_t1355284822 ** get_address_of_points_22() { return &___points_22; }
	inline void set_points_22(List_1_t1355284822 * value)
	{
		___points_22 = value;
		Il2CppCodeGenWriteBarrier(&___points_22, value);
	}

	inline static int32_t get_offset_of_previouspos_23() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___previouspos_23)); }
	inline Vector3_t4282066566  get_previouspos_23() const { return ___previouspos_23; }
	inline Vector3_t4282066566 * get_address_of_previouspos_23() { return &___previouspos_23; }
	inline void set_previouspos_23(Vector3_t4282066566  value)
	{
		___previouspos_23 = value;
	}

	inline static int32_t get_offset_of__anim_24() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ____anim_24)); }
	inline Animator_t2776330603 * get__anim_24() const { return ____anim_24; }
	inline Animator_t2776330603 ** get_address_of__anim_24() { return &____anim_24; }
	inline void set__anim_24(Animator_t2776330603 * value)
	{
		____anim_24 = value;
		Il2CppCodeGenWriteBarrier(&____anim_24, value);
	}

	inline static int32_t get_offset_of_levelStartingTime_25() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___levelStartingTime_25)); }
	inline float get_levelStartingTime_25() const { return ___levelStartingTime_25; }
	inline float* get_address_of_levelStartingTime_25() { return &___levelStartingTime_25; }
	inline void set_levelStartingTime_25(float value)
	{
		___levelStartingTime_25 = value;
	}

	inline static int32_t get_offset_of_retryCoinText_WinScreen_26() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___retryCoinText_WinScreen_26)); }
	inline Text_t9039225 * get_retryCoinText_WinScreen_26() const { return ___retryCoinText_WinScreen_26; }
	inline Text_t9039225 ** get_address_of_retryCoinText_WinScreen_26() { return &___retryCoinText_WinScreen_26; }
	inline void set_retryCoinText_WinScreen_26(Text_t9039225 * value)
	{
		___retryCoinText_WinScreen_26 = value;
		Il2CppCodeGenWriteBarrier(&___retryCoinText_WinScreen_26, value);
	}

	inline static int32_t get_offset_of_retryCoinText_27() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___retryCoinText_27)); }
	inline Text_t9039225 * get_retryCoinText_27() const { return ___retryCoinText_27; }
	inline Text_t9039225 ** get_address_of_retryCoinText_27() { return &___retryCoinText_27; }
	inline void set_retryCoinText_27(Text_t9039225 * value)
	{
		___retryCoinText_27 = value;
		Il2CppCodeGenWriteBarrier(&___retryCoinText_27, value);
	}

	inline static int32_t get_offset_of_stopOnReleaseVector_28() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___stopOnReleaseVector_28)); }
	inline Vector2_t4282066565  get_stopOnReleaseVector_28() const { return ___stopOnReleaseVector_28; }
	inline Vector2_t4282066565 * get_address_of_stopOnReleaseVector_28() { return &___stopOnReleaseVector_28; }
	inline void set_stopOnReleaseVector_28(Vector2_t4282066565  value)
	{
		___stopOnReleaseVector_28 = value;
	}

	inline static int32_t get_offset_of_rigidBody2D_29() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___rigidBody2D_29)); }
	inline Rigidbody2D_t1743771669 * get_rigidBody2D_29() const { return ___rigidBody2D_29; }
	inline Rigidbody2D_t1743771669 ** get_address_of_rigidBody2D_29() { return &___rigidBody2D_29; }
	inline void set_rigidBody2D_29(Rigidbody2D_t1743771669 * value)
	{
		___rigidBody2D_29 = value;
		Il2CppCodeGenWriteBarrier(&___rigidBody2D_29, value);
	}

	inline static int32_t get_offset_of_directionThreshold_30() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___directionThreshold_30)); }
	inline float get_directionThreshold_30() const { return ___directionThreshold_30; }
	inline float* get_address_of_directionThreshold_30() { return &___directionThreshold_30; }
	inline void set_directionThreshold_30(float value)
	{
		___directionThreshold_30 = value;
	}

	inline static int32_t get_offset_of_animCallNumber_31() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___animCallNumber_31)); }
	inline int32_t get_animCallNumber_31() const { return ___animCallNumber_31; }
	inline int32_t* get_address_of_animCallNumber_31() { return &___animCallNumber_31; }
	inline void set_animCallNumber_31(int32_t value)
	{
		___animCallNumber_31 = value;
	}

	inline static int32_t get_offset_of_movementCalled_32() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___movementCalled_32)); }
	inline bool get_movementCalled_32() const { return ___movementCalled_32; }
	inline bool* get_address_of_movementCalled_32() { return &___movementCalled_32; }
	inline void set_movementCalled_32(bool value)
	{
		___movementCalled_32 = value;
	}

	inline static int32_t get_offset_of_movePlayer_33() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___movePlayer_33)); }
	inline bool get_movePlayer_33() const { return ___movePlayer_33; }
	inline bool* get_address_of_movePlayer_33() { return &___movePlayer_33; }
	inline void set_movePlayer_33(bool value)
	{
		___movePlayer_33 = value;
	}

	inline static int32_t get_offset_of_LastestPositions_34() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___LastestPositions_34)); }
	inline List_1_t1355284822 * get_LastestPositions_34() const { return ___LastestPositions_34; }
	inline List_1_t1355284822 ** get_address_of_LastestPositions_34() { return &___LastestPositions_34; }
	inline void set_LastestPositions_34(List_1_t1355284822 * value)
	{
		___LastestPositions_34 = value;
		Il2CppCodeGenWriteBarrier(&___LastestPositions_34, value);
	}

	inline static int32_t get_offset_of_myCamera_35() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___myCamera_35)); }
	inline GameObject_t3674682005 * get_myCamera_35() const { return ___myCamera_35; }
	inline GameObject_t3674682005 ** get_address_of_myCamera_35() { return &___myCamera_35; }
	inline void set_myCamera_35(GameObject_t3674682005 * value)
	{
		___myCamera_35 = value;
		Il2CppCodeGenWriteBarrier(&___myCamera_35, value);
	}

	inline static int32_t get_offset_of_bgAudioSource_36() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___bgAudioSource_36)); }
	inline AudioSource_t1740077639 * get_bgAudioSource_36() const { return ___bgAudioSource_36; }
	inline AudioSource_t1740077639 ** get_address_of_bgAudioSource_36() { return &___bgAudioSource_36; }
	inline void set_bgAudioSource_36(AudioSource_t1740077639 * value)
	{
		___bgAudioSource_36 = value;
		Il2CppCodeGenWriteBarrier(&___bgAudioSource_36, value);
	}
};

struct PlayerController_t2866526589_StaticFields
{
public:
	// System.Int32 PlayerController::totalCoins
	int32_t ___totalCoins_11;
	// System.Boolean PlayerController::isGameOver
	bool ___isGameOver_37;
	// PlayerController/IndicatorAction PlayerController::OnPointSelected
	IndicatorAction_t2213590131 * ___OnPointSelected_38;
	// PlayerController/DelegateGameStop PlayerController::GameStopEvent
	DelegateGameStop_t1287275051 * ___GameStopEvent_39;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> PlayerController::<>f__switch$map0
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map0_40;

public:
	inline static int32_t get_offset_of_totalCoins_11() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589_StaticFields, ___totalCoins_11)); }
	inline int32_t get_totalCoins_11() const { return ___totalCoins_11; }
	inline int32_t* get_address_of_totalCoins_11() { return &___totalCoins_11; }
	inline void set_totalCoins_11(int32_t value)
	{
		___totalCoins_11 = value;
	}

	inline static int32_t get_offset_of_isGameOver_37() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589_StaticFields, ___isGameOver_37)); }
	inline bool get_isGameOver_37() const { return ___isGameOver_37; }
	inline bool* get_address_of_isGameOver_37() { return &___isGameOver_37; }
	inline void set_isGameOver_37(bool value)
	{
		___isGameOver_37 = value;
	}

	inline static int32_t get_offset_of_OnPointSelected_38() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589_StaticFields, ___OnPointSelected_38)); }
	inline IndicatorAction_t2213590131 * get_OnPointSelected_38() const { return ___OnPointSelected_38; }
	inline IndicatorAction_t2213590131 ** get_address_of_OnPointSelected_38() { return &___OnPointSelected_38; }
	inline void set_OnPointSelected_38(IndicatorAction_t2213590131 * value)
	{
		___OnPointSelected_38 = value;
		Il2CppCodeGenWriteBarrier(&___OnPointSelected_38, value);
	}

	inline static int32_t get_offset_of_GameStopEvent_39() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589_StaticFields, ___GameStopEvent_39)); }
	inline DelegateGameStop_t1287275051 * get_GameStopEvent_39() const { return ___GameStopEvent_39; }
	inline DelegateGameStop_t1287275051 ** get_address_of_GameStopEvent_39() { return &___GameStopEvent_39; }
	inline void set_GameStopEvent_39(DelegateGameStop_t1287275051 * value)
	{
		___GameStopEvent_39 = value;
		Il2CppCodeGenWriteBarrier(&___GameStopEvent_39, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_40() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589_StaticFields, ___U3CU3Ef__switchU24map0_40)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map0_40() const { return ___U3CU3Ef__switchU24map0_40; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map0_40() { return &___U3CU3Ef__switchU24map0_40; }
	inline void set_U3CU3Ef__switchU24map0_40(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map0_40 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_40, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
