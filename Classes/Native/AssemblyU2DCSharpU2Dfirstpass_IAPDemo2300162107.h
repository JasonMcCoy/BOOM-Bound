#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Purchasing.IStoreController
struct IStoreController_t782956868;
// UnityEngine.Purchasing.IAppleExtensions
struct IAppleExtensions_t2219280629;
// UnityEngine.UI.Selectable
struct Selectable_t1885181538;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IAPDemo
struct  IAPDemo_t2300162107  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Purchasing.IStoreController IAPDemo::m_Controller
	Il2CppObject * ___m_Controller_2;
	// UnityEngine.Purchasing.IAppleExtensions IAPDemo::m_AppleExtensions
	Il2CppObject * ___m_AppleExtensions_3;
	// System.Int32 IAPDemo::m_SelectedItemIndex
	int32_t ___m_SelectedItemIndex_4;
	// System.Boolean IAPDemo::m_PurchaseInProgress
	bool ___m_PurchaseInProgress_5;
	// UnityEngine.UI.Selectable IAPDemo::m_InteractableSelectable
	Selectable_t1885181538 * ___m_InteractableSelectable_6;

public:
	inline static int32_t get_offset_of_m_Controller_2() { return static_cast<int32_t>(offsetof(IAPDemo_t2300162107, ___m_Controller_2)); }
	inline Il2CppObject * get_m_Controller_2() const { return ___m_Controller_2; }
	inline Il2CppObject ** get_address_of_m_Controller_2() { return &___m_Controller_2; }
	inline void set_m_Controller_2(Il2CppObject * value)
	{
		___m_Controller_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Controller_2, value);
	}

	inline static int32_t get_offset_of_m_AppleExtensions_3() { return static_cast<int32_t>(offsetof(IAPDemo_t2300162107, ___m_AppleExtensions_3)); }
	inline Il2CppObject * get_m_AppleExtensions_3() const { return ___m_AppleExtensions_3; }
	inline Il2CppObject ** get_address_of_m_AppleExtensions_3() { return &___m_AppleExtensions_3; }
	inline void set_m_AppleExtensions_3(Il2CppObject * value)
	{
		___m_AppleExtensions_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_AppleExtensions_3, value);
	}

	inline static int32_t get_offset_of_m_SelectedItemIndex_4() { return static_cast<int32_t>(offsetof(IAPDemo_t2300162107, ___m_SelectedItemIndex_4)); }
	inline int32_t get_m_SelectedItemIndex_4() const { return ___m_SelectedItemIndex_4; }
	inline int32_t* get_address_of_m_SelectedItemIndex_4() { return &___m_SelectedItemIndex_4; }
	inline void set_m_SelectedItemIndex_4(int32_t value)
	{
		___m_SelectedItemIndex_4 = value;
	}

	inline static int32_t get_offset_of_m_PurchaseInProgress_5() { return static_cast<int32_t>(offsetof(IAPDemo_t2300162107, ___m_PurchaseInProgress_5)); }
	inline bool get_m_PurchaseInProgress_5() const { return ___m_PurchaseInProgress_5; }
	inline bool* get_address_of_m_PurchaseInProgress_5() { return &___m_PurchaseInProgress_5; }
	inline void set_m_PurchaseInProgress_5(bool value)
	{
		___m_PurchaseInProgress_5 = value;
	}

	inline static int32_t get_offset_of_m_InteractableSelectable_6() { return static_cast<int32_t>(offsetof(IAPDemo_t2300162107, ___m_InteractableSelectable_6)); }
	inline Selectable_t1885181538 * get_m_InteractableSelectable_6() const { return ___m_InteractableSelectable_6; }
	inline Selectable_t1885181538 ** get_address_of_m_InteractableSelectable_6() { return &___m_InteractableSelectable_6; }
	inline void set_m_InteractableSelectable_6(Selectable_t1885181538 * value)
	{
		___m_InteractableSelectable_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_InteractableSelectable_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
