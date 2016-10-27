#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// PlayerController
struct PlayerController_t2866526589;
// PlayerController/IndicatorAction
struct IndicatorAction_t2213590131;
// PlayerController/DelegateGameStop
struct DelegateGameStop_t1287275051;
// UnityEngine.Collider2D
struct Collider2D_t1552025098;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PlayerController_IndicatorAction2213590131.h"
#include "AssemblyU2DCSharp_PlayerController_DelegateGameSto1287275051.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Collider2D1552025098.h"

// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m2658519486 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::add_OnPointSelected(PlayerController/IndicatorAction)
extern "C"  void PlayerController_add_OnPointSelected_m4153752343 (Il2CppObject * __this /* static, unused */, IndicatorAction_t2213590131 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::remove_OnPointSelected(PlayerController/IndicatorAction)
extern "C"  void PlayerController_remove_OnPointSelected_m1083930852 (Il2CppObject * __this /* static, unused */, IndicatorAction_t2213590131 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::add_GameStopEvent(PlayerController/DelegateGameStop)
extern "C"  void PlayerController_add_GameStopEvent_m1022936515 (Il2CppObject * __this /* static, unused */, DelegateGameStop_t1287275051 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::remove_GameStopEvent(PlayerController/DelegateGameStop)
extern "C"  void PlayerController_remove_GameStopEvent_m3833403990 (Il2CppObject * __this /* static, unused */, DelegateGameStop_t1287275051 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Home()
extern "C"  void PlayerController_Home_m9694437 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::TryAgain()
extern "C"  void PlayerController_TryAgain_m2525831787 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::NextLevel()
extern "C"  void PlayerController_NextLevel_m3872848237 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Start()
extern "C"  void PlayerController_Start_m1605657278 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnEnable()
extern "C"  void PlayerController_OnEnable_m2828647688 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Update()
extern "C"  void PlayerController_Update_m2536587535 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::FixedUpdate()
extern "C"  void PlayerController_FixedUpdate_m270852281 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerController::IsPointsAlmostSame(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool PlayerController_IsPointsAlmostSame_m4096545233 (PlayerController_t2866526589 * __this, Vector3_t4282066566  ___pointOne0, Vector3_t4282066566  ___pointTwo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerController::IsDeathEnd(UnityEngine.Vector3)
extern "C"  bool PlayerController_IsDeathEnd_m3326471534 (PlayerController_t2866526589 * __this, Vector3_t4282066566  ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::setPlayerToIdle()
extern "C"  void PlayerController_setPlayerToIdle_m2680088942 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::IdleAnimEffects()
extern "C"  void PlayerController_IdleAnimEffects_m1947960089 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void PlayerController_OnTriggerEnter2D_m2428503418 (PlayerController_t2866526589 * __this, Collider2D_t1552025098 * ___coll0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::EnemyEffects()
extern "C"  void PlayerController_EnemyEffects_m4140476576 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::FinishPointsEffects()
extern "C"  void PlayerController_FinishPointsEffects_m2667985256 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::SendLevelStartedToAnalytics()
extern "C"  void PlayerController_SendLevelStartedToAnalytics_m2086908194 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::SendLevelClearedToAnalytics()
extern "C"  void PlayerController_SendLevelClearedToAnalytics_m2295286743 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::SendLevelFailedToAnalytics()
extern "C"  void PlayerController_SendLevelFailedToAnalytics_m153164504 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::ShowIndicator(UnityEngine.Vector3)
extern "C"  void PlayerController_ShowIndicator_m1230841387 (PlayerController_t2866526589 * __this, Vector3_t4282066566  ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
