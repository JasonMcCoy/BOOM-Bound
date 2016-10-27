#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// System.Boolean[]
struct BooleanU5BU5D_t3456302923;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// UnityEngine.Color[]
struct ColorU5BU5D_t2441545636;
// UnityEngine.Space[]
struct SpaceU5BU5D_t475976725;
// iTween/EaseType[]
struct EaseTypeU5BU5D_t1164036792;
// iTween/LoopType[]
struct LoopTypeU5BU5D_t481312618;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3792884695;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t3001083477;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t44861630;
// ArrayIndexes[]
struct ArrayIndexesU5BU5D_t4071347582;
// iTweenPath[]
struct iTweenPathU5BU5D_t1031506494;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t696267445;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharpU2Dfirstpass_iTweenEvent_TweenTyp2723270414.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTweenEvent
struct  iTweenEvent_t3222975544  : public MonoBehaviour_t667441552
{
public:
	// System.String iTweenEvent::tweenName
	String_t* ___tweenName_2;
	// System.Boolean iTweenEvent::playAutomatically
	bool ___playAutomatically_3;
	// System.Single iTweenEvent::delay
	float ___delay_4;
	// iTweenEvent/TweenType iTweenEvent::type
	int32_t ___type_5;
	// System.Boolean iTweenEvent::showIconInInspector
	bool ___showIconInInspector_6;
	// System.String[] iTweenEvent::keys
	StringU5BU5D_t4054002952* ___keys_7;
	// System.Int32[] iTweenEvent::indexes
	Int32U5BU5D_t3230847821* ___indexes_8;
	// System.String[] iTweenEvent::metadatas
	StringU5BU5D_t4054002952* ___metadatas_9;
	// System.Int32[] iTweenEvent::ints
	Int32U5BU5D_t3230847821* ___ints_10;
	// System.Single[] iTweenEvent::floats
	SingleU5BU5D_t2316563989* ___floats_11;
	// System.Boolean[] iTweenEvent::bools
	BooleanU5BU5D_t3456302923* ___bools_12;
	// System.String[] iTweenEvent::strings
	StringU5BU5D_t4054002952* ___strings_13;
	// UnityEngine.Vector3[] iTweenEvent::vector3s
	Vector3U5BU5D_t215400611* ___vector3s_14;
	// UnityEngine.Color[] iTweenEvent::colors
	ColorU5BU5D_t2441545636* ___colors_15;
	// UnityEngine.Space[] iTweenEvent::spaces
	SpaceU5BU5D_t475976725* ___spaces_16;
	// iTween/EaseType[] iTweenEvent::easeTypes
	EaseTypeU5BU5D_t1164036792* ___easeTypes_17;
	// iTween/LoopType[] iTweenEvent::loopTypes
	LoopTypeU5BU5D_t481312618* ___loopTypes_18;
	// UnityEngine.GameObject[] iTweenEvent::gameObjects
	GameObjectU5BU5D_t2662109048* ___gameObjects_19;
	// UnityEngine.Transform[] iTweenEvent::transforms
	TransformU5BU5D_t3792884695* ___transforms_20;
	// UnityEngine.AudioClip[] iTweenEvent::audioClips
	AudioClipU5BU5D_t3001083477* ___audioClips_21;
	// UnityEngine.AudioSource[] iTweenEvent::audioSources
	AudioSourceU5BU5D_t44861630* ___audioSources_22;
	// ArrayIndexes[] iTweenEvent::vector3Arrays
	ArrayIndexesU5BU5D_t4071347582* ___vector3Arrays_23;
	// ArrayIndexes[] iTweenEvent::transformArrays
	ArrayIndexesU5BU5D_t4071347582* ___transformArrays_24;
	// iTweenPath[] iTweenEvent::paths
	iTweenPathU5BU5D_t1031506494* ___paths_25;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> iTweenEvent::values
	Dictionary_2_t696267445 * ___values_26;

public:
	inline static int32_t get_offset_of_tweenName_2() { return static_cast<int32_t>(offsetof(iTweenEvent_t3222975544, ___tweenName_2)); }
	inline String_t* get_tweenName_2() const { return ___tweenName_2; }
	inline String_t** get_address_of_tweenName_2() { return &___tweenName_2; }
	inline void set_tweenName_2(String_t* value)
	{
		___tweenName_2 = value;
		Il2CppCodeGenWriteBarrier(&___tweenName_2, value);
	}

	inline static int32_t get_offset_of_playAutomatically_3() { return static_cast<int32_t>(offsetof(iTweenEvent_t3222975544, ___playAutomatically_3)); }
	inline bool get_playAutomatically_3() const { return ___playAutomatically_3; }
	inline bool* get_address_of_playAutomatically_3() { return &___playAutomatically_3; }
	inline void set_playAutomatically_3(bool value)
	{
		___playAutomatically_3 = value;
	}

	inline static int32_t get_offset_of_delay_4() { return static_cast<int32_t>(offsetof(iTweenEvent_t3222975544, ___delay_4)); }
	inline float get_delay_4() const { return ___delay_4; }
	inline float* get_address_of_delay_4() { return &___delay_4; }
	inline void set_delay_4(float value)
	{
		___delay_4 = value;
	}

	inline static int32_t get_offset_of_type_5() { return static_cast<int32_t>(offsetof(iTweenEvent_t3222975544, ___type_5)); }
	inline int32_t get_type_5() const { return ___type_5; }
	inline int32_t* get_address_of_type_5() { return &___type_5; }
	inline void set_type_5(int32_t value)
	{
		___type_5 = value;
	}

	inline static int32_t get_offset_of_showIconInInspector_6() { return static_cast<int32_t>(offsetof(iTweenEvent_t3222975544, ___showIconInInspector_6)); }
	inline bool get_showIconInInspector_6() const { return ___showIconInInspector_6; }
	inline bool* get_address_of_showIconInInspector_6() { return &___showIconInInspector_6; }
	inline void set_showIconInInspector_6(bool value)
	{
		___showIconInInspector_6 = value;
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(iTweenEvent_t3222975544, ___keys_7)); }
	inline StringU5BU5D_t4054002952* get_keys_7() const { return ___keys_7; }
	inline StringU5BU5D_t4054002952** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(StringU5BU5D_t4054002952* value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier(&___keys_7, value);
	}

	inline static int32_t get_offset_of_indexes_8() { return static_cast<int32_t>(offsetof(iTweenEvent_t3222975544, ___indexes_8)); }
	inline Int32U5BU5D_t3230847821* get_indexes_8() const { return ___indexes_8; }
	inline Int32U5BU5D_t3230847821** get_address_of_indexes_8() { return &___indexes_8; }
	inline void set_indexes_8(Int32U5BU5D_t3230847821* value)
	{
		___indexes_8 = value;
		Il2CppCodeGenWriteBarrier(&___indexes_8, value);
	}

	inline static int32_t get_offset_of_metadatas_9() { return static_cast<int32_t>(offsetof(iTweenEvent_t3222975544, ___metadatas_9)); }
	inline StringU5BU5D_t4054002952* get_metadatas_9() const { return ___metadatas_9; }
	inline StringU5BU5D_t4054002952** get_address_of_metadatas_9() { return &___metadatas_9; }
	inline void set_metadatas_9(StringU5BU5D_t4054002952* value)
	{
		___metadatas_9 = value;
		Il2CppCodeGenWriteBarrier(&___metadatas_9, value);
	}

	inline static int32_t get_offset_of_ints_10() { return static_cast<int32_t>(offsetof(iTweenEvent_t3222975544, ___ints_10)); }
	inline Int32U5BU5D_t3230847821* get_ints_10() const { return ___ints_10; }
	inline Int32U5BU5D_t3230847821** get_address_of_ints_10() { return &___ints_10; }
	inline void set_ints_10(Int32U5BU5D_t3230847821* value)
	{
		___ints_10 = value;
		Il2CppCodeGenWriteBarrier(&___ints_10, value);
	}

	inline static int32_t get_offset_of_floats_11() { return static_cast<int32_t>(offsetof(iTweenEvent_t3222975544, ___floats_11)); }
	inline SingleU5BU5D_t2316563989* get_floats_11() const { return ___floats_11; }
	inline SingleU5BU5D_t2316563989** get_address_of_floats_11() { return &___floats_11; }
	inline void set_floats_11(SingleU5BU5D_t2316563989* value)
	{
		___floats_11 = value;
		Il2CppCodeGenWriteBarrier(&___floats_11, value);
	}

	inline static int32_t get_offset_of_bools_12() { return static_cast<int32_t>(offsetof(iTweenEvent_t3222975544, ___bools_12)); }
	inline BooleanU5BU5D_t3456302923* get_bools_12() const { return ___bools_12; }
	inline BooleanU5BU5D_t3456302923** get_address_of_bools_12() { return &___bools_12; }
	inline void set_bools_12(BooleanU5BU5D_t3456302923* value)
	{
		___bools_12 = value;
		Il2CppCodeGenWriteBarrier(&___bools_12, value);
	}

	inline static int32_t get_offset_of_strings_13() { return static_cast<int32_t>(offsetof(iTweenEvent_t3222975544, ___strings_13)); }
	inline StringU5BU5D_t4054002952* get_strings_13() const { return ___strings_13; }
	inline StringU5BU5D_t4054002952** get_address_of_strings_13() { return &___strings_13; }
	inline void set_strings_13(StringU5BU5D_t4054002952* value)
	{
		___strings_13 = value;
		Il2CppCodeGenWriteBarrier(&___strings_13, value);
	}

	inline static int32_t get_offset_of_vector3s_14() { return static_cast<int32_t>(offsetof(iTweenEvent_t3222975544, ___vector3s_14)); }
	inline Vector3U5BU5D_t215400611* get_vector3s_14() const { return ___vector3s_14; }
	inline Vector3U5BU5D_t215400611** get_address_of_vector3s_14() { return &___vector3s_14; }
	inline void set_vector3s_14(Vector3U5BU5D_t215400611* value)
	{
		___vector3s_14 = value;
		Il2CppCodeGenWriteBarrier(&___vector3s_14, value);
	}

	inline static int32_t get_offset_of_colors_15() { return static_cast<int32_t>(offsetof(iTweenEvent_t3222975544, ___colors_15)); }
	inline ColorU5BU5D_t2441545636* get_colors_15() const { return ___colors_15; }
	inline ColorU5BU5D_t2441545636** get_address_of_colors_15() { return &___colors_15; }
	inline void set_colors_15(ColorU5BU5D_t2441545636* value)
	{
		___colors_15 = value;
		Il2CppCodeGenWriteBarrier(&___colors_15, value);
	}

	inline static int32_t get_offset_of_spaces_16() { return static_cast<int32_t>(offsetof(iTweenEvent_t3222975544, ___spaces_16)); }
	inline SpaceU5BU5D_t475976725* get_spaces_16() const { return ___spaces_16; }
	inline SpaceU5BU5D_t475976725** get_address_of_spaces_16() { return &___spaces_16; }
	inline void set_spaces_16(SpaceU5BU5D_t475976725* value)
	{
		___spaces_16 = value;
		Il2CppCodeGenWriteBarrier(&___spaces_16, value);
	}

	inline static int32_t get_offset_of_easeTypes_17() { return static_cast<int32_t>(offsetof(iTweenEvent_t3222975544, ___easeTypes_17)); }
	inline EaseTypeU5BU5D_t1164036792* get_easeTypes_17() const { return ___easeTypes_17; }
	inline EaseTypeU5BU5D_t1164036792** get_address_of_easeTypes_17() { return &___easeTypes_17; }
	inline void set_easeTypes_17(EaseTypeU5BU5D_t1164036792* value)
	{
		___easeTypes_17 = value;
		Il2CppCodeGenWriteBarrier(&___easeTypes_17, value);
	}

	inline static int32_t get_offset_of_loopTypes_18() { return static_cast<int32_t>(offsetof(iTweenEvent_t3222975544, ___loopTypes_18)); }
	inline LoopTypeU5BU5D_t481312618* get_loopTypes_18() const { return ___loopTypes_18; }
	inline LoopTypeU5BU5D_t481312618** get_address_of_loopTypes_18() { return &___loopTypes_18; }
	inline void set_loopTypes_18(LoopTypeU5BU5D_t481312618* value)
	{
		___loopTypes_18 = value;
		Il2CppCodeGenWriteBarrier(&___loopTypes_18, value);
	}

	inline static int32_t get_offset_of_gameObjects_19() { return static_cast<int32_t>(offsetof(iTweenEvent_t3222975544, ___gameObjects_19)); }
	inline GameObjectU5BU5D_t2662109048* get_gameObjects_19() const { return ___gameObjects_19; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_gameObjects_19() { return &___gameObjects_19; }
	inline void set_gameObjects_19(GameObjectU5BU5D_t2662109048* value)
	{
		___gameObjects_19 = value;
		Il2CppCodeGenWriteBarrier(&___gameObjects_19, value);
	}

	inline static int32_t get_offset_of_transforms_20() { return static_cast<int32_t>(offsetof(iTweenEvent_t3222975544, ___transforms_20)); }
	inline TransformU5BU5D_t3792884695* get_transforms_20() const { return ___transforms_20; }
	inline TransformU5BU5D_t3792884695** get_address_of_transforms_20() { return &___transforms_20; }
	inline void set_transforms_20(TransformU5BU5D_t3792884695* value)
	{
		___transforms_20 = value;
		Il2CppCodeGenWriteBarrier(&___transforms_20, value);
	}

	inline static int32_t get_offset_of_audioClips_21() { return static_cast<int32_t>(offsetof(iTweenEvent_t3222975544, ___audioClips_21)); }
	inline AudioClipU5BU5D_t3001083477* get_audioClips_21() const { return ___audioClips_21; }
	inline AudioClipU5BU5D_t3001083477** get_address_of_audioClips_21() { return &___audioClips_21; }
	inline void set_audioClips_21(AudioClipU5BU5D_t3001083477* value)
	{
		___audioClips_21 = value;
		Il2CppCodeGenWriteBarrier(&___audioClips_21, value);
	}

	inline static int32_t get_offset_of_audioSources_22() { return static_cast<int32_t>(offsetof(iTweenEvent_t3222975544, ___audioSources_22)); }
	inline AudioSourceU5BU5D_t44861630* get_audioSources_22() const { return ___audioSources_22; }
	inline AudioSourceU5BU5D_t44861630** get_address_of_audioSources_22() { return &___audioSources_22; }
	inline void set_audioSources_22(AudioSourceU5BU5D_t44861630* value)
	{
		___audioSources_22 = value;
		Il2CppCodeGenWriteBarrier(&___audioSources_22, value);
	}

	inline static int32_t get_offset_of_vector3Arrays_23() { return static_cast<int32_t>(offsetof(iTweenEvent_t3222975544, ___vector3Arrays_23)); }
	inline ArrayIndexesU5BU5D_t4071347582* get_vector3Arrays_23() const { return ___vector3Arrays_23; }
	inline ArrayIndexesU5BU5D_t4071347582** get_address_of_vector3Arrays_23() { return &___vector3Arrays_23; }
	inline void set_vector3Arrays_23(ArrayIndexesU5BU5D_t4071347582* value)
	{
		___vector3Arrays_23 = value;
		Il2CppCodeGenWriteBarrier(&___vector3Arrays_23, value);
	}

	inline static int32_t get_offset_of_transformArrays_24() { return static_cast<int32_t>(offsetof(iTweenEvent_t3222975544, ___transformArrays_24)); }
	inline ArrayIndexesU5BU5D_t4071347582* get_transformArrays_24() const { return ___transformArrays_24; }
	inline ArrayIndexesU5BU5D_t4071347582** get_address_of_transformArrays_24() { return &___transformArrays_24; }
	inline void set_transformArrays_24(ArrayIndexesU5BU5D_t4071347582* value)
	{
		___transformArrays_24 = value;
		Il2CppCodeGenWriteBarrier(&___transformArrays_24, value);
	}

	inline static int32_t get_offset_of_paths_25() { return static_cast<int32_t>(offsetof(iTweenEvent_t3222975544, ___paths_25)); }
	inline iTweenPathU5BU5D_t1031506494* get_paths_25() const { return ___paths_25; }
	inline iTweenPathU5BU5D_t1031506494** get_address_of_paths_25() { return &___paths_25; }
	inline void set_paths_25(iTweenPathU5BU5D_t1031506494* value)
	{
		___paths_25 = value;
		Il2CppCodeGenWriteBarrier(&___paths_25, value);
	}

	inline static int32_t get_offset_of_values_26() { return static_cast<int32_t>(offsetof(iTweenEvent_t3222975544, ___values_26)); }
	inline Dictionary_2_t696267445 * get_values_26() const { return ___values_26; }
	inline Dictionary_2_t696267445 ** get_address_of_values_26() { return &___values_26; }
	inline void set_values_26(Dictionary_2_t696267445 * value)
	{
		___values_26 = value;
		Il2CppCodeGenWriteBarrier(&___values_26, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
