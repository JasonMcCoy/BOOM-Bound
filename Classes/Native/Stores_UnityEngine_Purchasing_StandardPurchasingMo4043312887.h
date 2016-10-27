#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Purchasing.IRawStoreProvider
struct IRawStoreProvider_t3072349169;
// Uniject.IUtil
struct IUtil_t3871085837;
// UnityEngine.ILogger
struct ILogger_t629411471;

#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Exte2903950262.h"
#include "UnityEngine_UnityEngine_RuntimePlatform3050318497.h"
#include "Stores_UnityEngine_Purchasing_FakeStoreUIMode3605244001.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.StandardPurchasingModule
struct  StandardPurchasingModule_t4043312887  : public AbstractPurchasingModule_t2903950262
{
public:
	// UnityEngine.Purchasing.IRawStoreProvider UnityEngine.Purchasing.StandardPurchasingModule::m_PlatformProvider
	Il2CppObject * ___m_PlatformProvider_1;
	// UnityEngine.RuntimePlatform UnityEngine.Purchasing.StandardPurchasingModule::m_RuntimePlatform
	int32_t ___m_RuntimePlatform_2;
	// Uniject.IUtil UnityEngine.Purchasing.StandardPurchasingModule::m_Util
	Il2CppObject * ___m_Util_3;
	// UnityEngine.ILogger UnityEngine.Purchasing.StandardPurchasingModule::m_Logger
	Il2CppObject * ___m_Logger_4;
	// System.Boolean UnityEngine.Purchasing.StandardPurchasingModule::<useMockBillingSystem>k__BackingField
	bool ___U3CuseMockBillingSystemU3Ek__BackingField_5;
	// UnityEngine.Purchasing.FakeStoreUIMode UnityEngine.Purchasing.StandardPurchasingModule::<useFakeStoreUIMode>k__BackingField
	int32_t ___U3CuseFakeStoreUIModeU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_PlatformProvider_1() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t4043312887, ___m_PlatformProvider_1)); }
	inline Il2CppObject * get_m_PlatformProvider_1() const { return ___m_PlatformProvider_1; }
	inline Il2CppObject ** get_address_of_m_PlatformProvider_1() { return &___m_PlatformProvider_1; }
	inline void set_m_PlatformProvider_1(Il2CppObject * value)
	{
		___m_PlatformProvider_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_PlatformProvider_1, value);
	}

	inline static int32_t get_offset_of_m_RuntimePlatform_2() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t4043312887, ___m_RuntimePlatform_2)); }
	inline int32_t get_m_RuntimePlatform_2() const { return ___m_RuntimePlatform_2; }
	inline int32_t* get_address_of_m_RuntimePlatform_2() { return &___m_RuntimePlatform_2; }
	inline void set_m_RuntimePlatform_2(int32_t value)
	{
		___m_RuntimePlatform_2 = value;
	}

	inline static int32_t get_offset_of_m_Util_3() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t4043312887, ___m_Util_3)); }
	inline Il2CppObject * get_m_Util_3() const { return ___m_Util_3; }
	inline Il2CppObject ** get_address_of_m_Util_3() { return &___m_Util_3; }
	inline void set_m_Util_3(Il2CppObject * value)
	{
		___m_Util_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Util_3, value);
	}

	inline static int32_t get_offset_of_m_Logger_4() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t4043312887, ___m_Logger_4)); }
	inline Il2CppObject * get_m_Logger_4() const { return ___m_Logger_4; }
	inline Il2CppObject ** get_address_of_m_Logger_4() { return &___m_Logger_4; }
	inline void set_m_Logger_4(Il2CppObject * value)
	{
		___m_Logger_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Logger_4, value);
	}

	inline static int32_t get_offset_of_U3CuseMockBillingSystemU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t4043312887, ___U3CuseMockBillingSystemU3Ek__BackingField_5)); }
	inline bool get_U3CuseMockBillingSystemU3Ek__BackingField_5() const { return ___U3CuseMockBillingSystemU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CuseMockBillingSystemU3Ek__BackingField_5() { return &___U3CuseMockBillingSystemU3Ek__BackingField_5; }
	inline void set_U3CuseMockBillingSystemU3Ek__BackingField_5(bool value)
	{
		___U3CuseMockBillingSystemU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CuseFakeStoreUIModeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t4043312887, ___U3CuseFakeStoreUIModeU3Ek__BackingField_6)); }
	inline int32_t get_U3CuseFakeStoreUIModeU3Ek__BackingField_6() const { return ___U3CuseFakeStoreUIModeU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CuseFakeStoreUIModeU3Ek__BackingField_6() { return &___U3CuseFakeStoreUIModeU3Ek__BackingField_6; }
	inline void set_U3CuseFakeStoreUIModeU3Ek__BackingField_6(int32_t value)
	{
		___U3CuseFakeStoreUIModeU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
