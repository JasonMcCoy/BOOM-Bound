#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AnalyticsManager
struct AnalyticsManager_t4177030503;
// System.String
struct String_t;
// AnalyticsManager/AnalyticsActions
struct AnalyticsActions_t2602604127;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnalyticsManager
struct  AnalyticsManager_t4177030503  : public MonoBehaviour_t667441552
{
public:
	// System.String AnalyticsManager::_iosApiKey
	String_t* ____iosApiKey_3;
	// System.String AnalyticsManager::_androidApiKey
	String_t* ____androidApiKey_4;
	// System.String AnalyticsManager::<CompletedLevelTime>k__BackingField
	String_t* ___U3CCompletedLevelTimeU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of__iosApiKey_3() { return static_cast<int32_t>(offsetof(AnalyticsManager_t4177030503, ____iosApiKey_3)); }
	inline String_t* get__iosApiKey_3() const { return ____iosApiKey_3; }
	inline String_t** get_address_of__iosApiKey_3() { return &____iosApiKey_3; }
	inline void set__iosApiKey_3(String_t* value)
	{
		____iosApiKey_3 = value;
		Il2CppCodeGenWriteBarrier(&____iosApiKey_3, value);
	}

	inline static int32_t get_offset_of__androidApiKey_4() { return static_cast<int32_t>(offsetof(AnalyticsManager_t4177030503, ____androidApiKey_4)); }
	inline String_t* get__androidApiKey_4() const { return ____androidApiKey_4; }
	inline String_t** get_address_of__androidApiKey_4() { return &____androidApiKey_4; }
	inline void set__androidApiKey_4(String_t* value)
	{
		____androidApiKey_4 = value;
		Il2CppCodeGenWriteBarrier(&____androidApiKey_4, value);
	}

	inline static int32_t get_offset_of_U3CCompletedLevelTimeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AnalyticsManager_t4177030503, ___U3CCompletedLevelTimeU3Ek__BackingField_6)); }
	inline String_t* get_U3CCompletedLevelTimeU3Ek__BackingField_6() const { return ___U3CCompletedLevelTimeU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CCompletedLevelTimeU3Ek__BackingField_6() { return &___U3CCompletedLevelTimeU3Ek__BackingField_6; }
	inline void set_U3CCompletedLevelTimeU3Ek__BackingField_6(String_t* value)
	{
		___U3CCompletedLevelTimeU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCompletedLevelTimeU3Ek__BackingField_6, value);
	}
};

struct AnalyticsManager_t4177030503_StaticFields
{
public:
	// AnalyticsManager AnalyticsManager::instance
	AnalyticsManager_t4177030503 * ___instance_2;
	// AnalyticsManager/AnalyticsActions AnalyticsManager::OnFreeSkip
	AnalyticsActions_t2602604127 * ___OnFreeSkip_5;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(AnalyticsManager_t4177030503_StaticFields, ___instance_2)); }
	inline AnalyticsManager_t4177030503 * get_instance_2() const { return ___instance_2; }
	inline AnalyticsManager_t4177030503 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(AnalyticsManager_t4177030503 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}

	inline static int32_t get_offset_of_OnFreeSkip_5() { return static_cast<int32_t>(offsetof(AnalyticsManager_t4177030503_StaticFields, ___OnFreeSkip_5)); }
	inline AnalyticsActions_t2602604127 * get_OnFreeSkip_5() const { return ___OnFreeSkip_5; }
	inline AnalyticsActions_t2602604127 ** get_address_of_OnFreeSkip_5() { return &___OnFreeSkip_5; }
	inline void set_OnFreeSkip_5(AnalyticsActions_t2602604127 * value)
	{
		___OnFreeSkip_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnFreeSkip_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
