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

// UnityEngine.Purchasing.StandardPurchasingModule
struct StandardPurchasingModule_t4043312887;
// Uniject.IUtil
struct IUtil_t3871085837;
// UnityEngine.ILogger
struct ILogger_t629411471;
// UnityEngine.Purchasing.IRawStoreProvider
struct IRawStoreProvider_t3072349169;
// UnityEngine.RuntimePlatform[]
struct RuntimePlatformU5BU5D_t2169002428;
// UnityEngine.Purchasing.Extension.IStore
struct IStore_t1928375778;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RuntimePlatform3050318497.h"
#include "Stores_UnityEngine_Purchasing_FakeStoreUIMode3605244001.h"

// System.Void UnityEngine.Purchasing.StandardPurchasingModule::.ctor(Uniject.IUtil,UnityEngine.ILogger,UnityEngine.Purchasing.IRawStoreProvider,UnityEngine.RuntimePlatform)
extern "C"  void StandardPurchasingModule__ctor_m1924124392 (StandardPurchasingModule_t4043312887 * __this, Il2CppObject * ___util0, Il2CppObject * ___logger1, Il2CppObject * ___platformProvider2, int32_t ___platform3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.StandardPurchasingModule::get_useMockBillingSystem()
extern "C"  bool StandardPurchasingModule_get_useMockBillingSystem_m2837249379 (StandardPurchasingModule_t4043312887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.StandardPurchasingModule::set_useMockBillingSystem(System.Boolean)
extern "C"  void StandardPurchasingModule_set_useMockBillingSystem_m2141347402 (StandardPurchasingModule_t4043312887 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.FakeStoreUIMode UnityEngine.Purchasing.StandardPurchasingModule::get_useFakeStoreUIMode()
extern "C"  int32_t StandardPurchasingModule_get_useFakeStoreUIMode_m2119726599 (StandardPurchasingModule_t4043312887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.StandardPurchasingModule::set_useFakeStoreUIMode(UnityEngine.Purchasing.FakeStoreUIMode)
extern "C"  void StandardPurchasingModule_set_useFakeStoreUIMode_m2074317900 (StandardPurchasingModule_t4043312887 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule::Instance()
extern "C"  StandardPurchasingModule_t4043312887 * StandardPurchasingModule_Instance_m33401695 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.StandardPurchasingModule::Configure()
extern "C"  void StandardPurchasingModule_Configure_m976994123 (StandardPurchasingModule_t4043312887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.StandardPurchasingModule::OnPlatforms(UnityEngine.RuntimePlatform[])
extern "C"  bool StandardPurchasingModule_OnPlatforms_m4084484186 (StandardPurchasingModule_t4043312887 * __this, RuntimePlatformU5BU5D_t2169002428* ___platforms0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.StandardPurchasingModule::OnAndroidPlatform()
extern "C"  bool StandardPurchasingModule_OnAndroidPlatform_m2904082692 (StandardPurchasingModule_t4043312887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateMacAppStore()
extern "C"  Il2CppObject * StandardPurchasingModule_InstantiateMacAppStore_m1651998127 (StandardPurchasingModule_t4043312887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateAppleAppStore()
extern "C"  Il2CppObject * StandardPurchasingModule_InstantiateAppleAppStore_m932828730 (StandardPurchasingModule_t4043312887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateApple()
extern "C"  Il2CppObject * StandardPurchasingModule_InstantiateApple_m2493970394 (StandardPurchasingModule_t4043312887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateGooglePlay()
extern "C"  Il2CppObject * StandardPurchasingModule_InstantiateGooglePlay_m3463616559 (StandardPurchasingModule_t4043312887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::instantiateWinRT()
extern "C"  Il2CppObject * StandardPurchasingModule_instantiateWinRT_m2794595966 (StandardPurchasingModule_t4043312887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateFakeStore()
extern "C"  Il2CppObject * StandardPurchasingModule_InstantiateFakeStore_m529454860 (StandardPurchasingModule_t4043312887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.StandardPurchasingModule::<OnPlatforms>m__0(UnityEngine.RuntimePlatform)
extern "C"  bool StandardPurchasingModule_U3COnPlatformsU3Em__0_m763768193 (StandardPurchasingModule_t4043312887 * __this, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
