#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TimerData
struct TimerData_t2056740975;
// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TimerController
struct  TimerController_t2709417121  : public MonoBehaviour_t667441552
{
public:
	// TimerData TimerController::timerData
	TimerData_t2056740975 * ___timerData_2;
	// System.Single TimerController::levelTime
	float ___levelTime_3;
	// System.Single TimerController::startTime
	float ___startTime_4;
	// System.Boolean TimerController::running
	bool ___running_5;
	// UnityEngine.UI.Text TimerController::txtTimer
	Text_t9039225 * ___txtTimer_6;
	// UnityEngine.UI.Text TimerController::txtFastestTime
	Text_t9039225 * ___txtFastestTime_7;
	// UnityEngine.UI.Text TimerController::timerLevelText
	Text_t9039225 * ___timerLevelText_8;
	// UnityEngine.UI.Text TimerController::bestTimeText
	Text_t9039225 * ___bestTimeText_9;
	// UnityEngine.UI.Text TimerController::timerLevelText_GameOver
	Text_t9039225 * ___timerLevelText_GameOver_10;
	// UnityEngine.UI.Text TimerController::bestTimeText_GameOver
	Text_t9039225 * ___bestTimeText_GameOver_11;
	// System.Single TimerController::levelStartingTime
	float ___levelStartingTime_12;

public:
	inline static int32_t get_offset_of_timerData_2() { return static_cast<int32_t>(offsetof(TimerController_t2709417121, ___timerData_2)); }
	inline TimerData_t2056740975 * get_timerData_2() const { return ___timerData_2; }
	inline TimerData_t2056740975 ** get_address_of_timerData_2() { return &___timerData_2; }
	inline void set_timerData_2(TimerData_t2056740975 * value)
	{
		___timerData_2 = value;
		Il2CppCodeGenWriteBarrier(&___timerData_2, value);
	}

	inline static int32_t get_offset_of_levelTime_3() { return static_cast<int32_t>(offsetof(TimerController_t2709417121, ___levelTime_3)); }
	inline float get_levelTime_3() const { return ___levelTime_3; }
	inline float* get_address_of_levelTime_3() { return &___levelTime_3; }
	inline void set_levelTime_3(float value)
	{
		___levelTime_3 = value;
	}

	inline static int32_t get_offset_of_startTime_4() { return static_cast<int32_t>(offsetof(TimerController_t2709417121, ___startTime_4)); }
	inline float get_startTime_4() const { return ___startTime_4; }
	inline float* get_address_of_startTime_4() { return &___startTime_4; }
	inline void set_startTime_4(float value)
	{
		___startTime_4 = value;
	}

	inline static int32_t get_offset_of_running_5() { return static_cast<int32_t>(offsetof(TimerController_t2709417121, ___running_5)); }
	inline bool get_running_5() const { return ___running_5; }
	inline bool* get_address_of_running_5() { return &___running_5; }
	inline void set_running_5(bool value)
	{
		___running_5 = value;
	}

	inline static int32_t get_offset_of_txtTimer_6() { return static_cast<int32_t>(offsetof(TimerController_t2709417121, ___txtTimer_6)); }
	inline Text_t9039225 * get_txtTimer_6() const { return ___txtTimer_6; }
	inline Text_t9039225 ** get_address_of_txtTimer_6() { return &___txtTimer_6; }
	inline void set_txtTimer_6(Text_t9039225 * value)
	{
		___txtTimer_6 = value;
		Il2CppCodeGenWriteBarrier(&___txtTimer_6, value);
	}

	inline static int32_t get_offset_of_txtFastestTime_7() { return static_cast<int32_t>(offsetof(TimerController_t2709417121, ___txtFastestTime_7)); }
	inline Text_t9039225 * get_txtFastestTime_7() const { return ___txtFastestTime_7; }
	inline Text_t9039225 ** get_address_of_txtFastestTime_7() { return &___txtFastestTime_7; }
	inline void set_txtFastestTime_7(Text_t9039225 * value)
	{
		___txtFastestTime_7 = value;
		Il2CppCodeGenWriteBarrier(&___txtFastestTime_7, value);
	}

	inline static int32_t get_offset_of_timerLevelText_8() { return static_cast<int32_t>(offsetof(TimerController_t2709417121, ___timerLevelText_8)); }
	inline Text_t9039225 * get_timerLevelText_8() const { return ___timerLevelText_8; }
	inline Text_t9039225 ** get_address_of_timerLevelText_8() { return &___timerLevelText_8; }
	inline void set_timerLevelText_8(Text_t9039225 * value)
	{
		___timerLevelText_8 = value;
		Il2CppCodeGenWriteBarrier(&___timerLevelText_8, value);
	}

	inline static int32_t get_offset_of_bestTimeText_9() { return static_cast<int32_t>(offsetof(TimerController_t2709417121, ___bestTimeText_9)); }
	inline Text_t9039225 * get_bestTimeText_9() const { return ___bestTimeText_9; }
	inline Text_t9039225 ** get_address_of_bestTimeText_9() { return &___bestTimeText_9; }
	inline void set_bestTimeText_9(Text_t9039225 * value)
	{
		___bestTimeText_9 = value;
		Il2CppCodeGenWriteBarrier(&___bestTimeText_9, value);
	}

	inline static int32_t get_offset_of_timerLevelText_GameOver_10() { return static_cast<int32_t>(offsetof(TimerController_t2709417121, ___timerLevelText_GameOver_10)); }
	inline Text_t9039225 * get_timerLevelText_GameOver_10() const { return ___timerLevelText_GameOver_10; }
	inline Text_t9039225 ** get_address_of_timerLevelText_GameOver_10() { return &___timerLevelText_GameOver_10; }
	inline void set_timerLevelText_GameOver_10(Text_t9039225 * value)
	{
		___timerLevelText_GameOver_10 = value;
		Il2CppCodeGenWriteBarrier(&___timerLevelText_GameOver_10, value);
	}

	inline static int32_t get_offset_of_bestTimeText_GameOver_11() { return static_cast<int32_t>(offsetof(TimerController_t2709417121, ___bestTimeText_GameOver_11)); }
	inline Text_t9039225 * get_bestTimeText_GameOver_11() const { return ___bestTimeText_GameOver_11; }
	inline Text_t9039225 ** get_address_of_bestTimeText_GameOver_11() { return &___bestTimeText_GameOver_11; }
	inline void set_bestTimeText_GameOver_11(Text_t9039225 * value)
	{
		___bestTimeText_GameOver_11 = value;
		Il2CppCodeGenWriteBarrier(&___bestTimeText_GameOver_11, value);
	}

	inline static int32_t get_offset_of_levelStartingTime_12() { return static_cast<int32_t>(offsetof(TimerController_t2709417121, ___levelStartingTime_12)); }
	inline float get_levelStartingTime_12() const { return ___levelStartingTime_12; }
	inline float* get_address_of_levelStartingTime_12() { return &___levelStartingTime_12; }
	inline void set_levelStartingTime_12(float value)
	{
		___levelStartingTime_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
