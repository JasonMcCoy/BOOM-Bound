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

// AnalyticsManager
struct AnalyticsManager_t4177030503;
// AnalyticsManager/AnalyticsActions
struct AnalyticsActions_t2602604127;
// System.String
struct String_t;
// AnalyticsItem
struct AnalyticsItem_t3748890521;
// UnityEngine.Object
struct Object_t3071478659;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_AnalyticsManager_AnalyticsAction2602604127.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_AnalyticsItem3748890521.h"
#include "UnityEngine_UnityEngine_LogType4286006228.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void AnalyticsManager::.ctor()
extern "C"  void AnalyticsManager__ctor_m353623316 (AnalyticsManager_t4177030503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnalyticsManager::add_OnFreeSkip(AnalyticsManager/AnalyticsActions)
extern "C"  void AnalyticsManager_add_OnFreeSkip_m2339501915 (Il2CppObject * __this /* static, unused */, AnalyticsActions_t2602604127 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnalyticsManager::remove_OnFreeSkip(AnalyticsManager/AnalyticsActions)
extern "C"  void AnalyticsManager_remove_OnFreeSkip_m1261304892 (Il2CppObject * __this /* static, unused */, AnalyticsActions_t2602604127 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AnalyticsManager::get_CompletedLevelTime()
extern "C"  String_t* AnalyticsManager_get_CompletedLevelTime_m1678952578 (AnalyticsManager_t4177030503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnalyticsManager::set_CompletedLevelTime(System.String)
extern "C"  void AnalyticsManager_set_CompletedLevelTime_m3194210639 (AnalyticsManager_t4177030503 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnalyticsManager::Awake()
extern "C"  void AnalyticsManager_Awake_m591228535 (AnalyticsManager_t4177030503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnalyticsManager::Start()
extern "C"  void AnalyticsManager_Start_m3595728404 (AnalyticsManager_t4177030503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnalyticsManager::SendItemToAnaytics(AnalyticsItem)
extern "C"  void AnalyticsManager_SendItemToAnaytics_m1478995657 (AnalyticsManager_t4177030503 * __this, AnalyticsItem_t3748890521 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnalyticsManager::BuyKeyItemCalled()
extern "C"  void AnalyticsManager_BuyKeyItemCalled_m3150110777 (AnalyticsManager_t4177030503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnalyticsManager::BuyKeyItemCanceled()
extern "C"  void AnalyticsManager_BuyKeyItemCanceled_m3401798549 (AnalyticsManager_t4177030503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnalyticsManager::KeyItemBought()
extern "C"  void AnalyticsManager_KeyItemBought_m3085059983 (AnalyticsManager_t4177030503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnalyticsManager::StoreLastLevel(System.String)
extern "C"  void AnalyticsManager_StoreLastLevel_m3567528901 (AnalyticsManager_t4177030503 * __this, String_t* ___levelName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnalyticsManager::OnDisable()
extern "C"  void AnalyticsManager_OnDisable_m2365491067 (AnalyticsManager_t4177030503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnalyticsManager::OnEnable()
extern "C"  void AnalyticsManager_OnEnable_m1309008370 (AnalyticsManager_t4177030503 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnalyticsManager::LogMessageReceived(System.String,System.String,UnityEngine.LogType)
extern "C"  void AnalyticsManager_LogMessageReceived_m3078829743 (AnalyticsManager_t4177030503 * __this, String_t* ___condition0, String_t* ___stackTrace1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnalyticsManager::Assert(System.Boolean,System.String,UnityEngine.Object)
extern "C"  void AnalyticsManager_Assert_m2613050375 (AnalyticsManager_t4177030503 * __this, bool ___condition0, String_t* ___message1, Object_t3071478659 * ___context2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnalyticsManager::AssertNotNull(System.Object,System.String,UnityEngine.Object)
extern "C"  void AnalyticsManager_AssertNotNull_m4164855942 (AnalyticsManager_t4177030503 * __this, Il2CppObject * ___target0, String_t* ___message1, Object_t3071478659 * ___context2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
