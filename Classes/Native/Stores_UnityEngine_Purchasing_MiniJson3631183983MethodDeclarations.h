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

// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t696267445;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t1244034627;
// System.Text.StringBuilder
struct StringBuilder_t243639308;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t827649927;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"

// System.Object UnityEngine.Purchasing.MiniJson::JsonDecode(System.String)
extern "C"  Il2CppObject * MiniJson_JsonDecode_m1456917196 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.MiniJson::JsonEncode(System.Object)
extern "C"  String_t* MiniJson_JsonEncode_m1367344164 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.MiniJson::ParseObject(System.Char[],System.Int32&)
extern "C"  Dictionary_2_t696267445 * MiniJson_ParseObject_m2450361613 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> UnityEngine.Purchasing.MiniJson::ParseArray(System.Char[],System.Int32&)
extern "C"  List_1_t1244034627 * MiniJson_ParseArray_m2032637724 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.Purchasing.MiniJson::ParseValue(System.Char[],System.Int32&,System.Boolean&)
extern "C"  Il2CppObject * MiniJson_ParseValue_m3416048385 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t* ___index1, bool* ___success2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.MiniJson::ParseString(System.Char[],System.Int32&)
extern "C"  String_t* MiniJson_ParseString_m1737162460 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Purchasing.MiniJson::ParseNumber(System.Char[],System.Int32&)
extern "C"  double MiniJson_ParseNumber_m4092025444 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Purchasing.MiniJson::GetLastIndexOfNumber(System.Char[],System.Int32)
extern "C"  int32_t MiniJson_GetLastIndexOfNumber_m3480320961 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MiniJson::EatWhitespace(System.Char[],System.Int32&)
extern "C"  void MiniJson_EatWhitespace_m2151214062 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Purchasing.MiniJson::LookAhead(System.Char[],System.Int32)
extern "C"  int32_t MiniJson_LookAhead_m1848399905 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Purchasing.MiniJson::NextToken(System.Char[],System.Int32&)
extern "C"  int32_t MiniJson_NextToken_m2400346599 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.MiniJson::SerializeObject(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Text.StringBuilder)
extern "C"  bool MiniJson_SerializeObject_m918036971 (Il2CppObject * __this /* static, unused */, Dictionary_2_t696267445 * ___anObject0, StringBuilder_t243639308 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.MiniJson::SerializeDictionary(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Text.StringBuilder)
extern "C"  bool MiniJson_SerializeDictionary_m682423572 (Il2CppObject * __this /* static, unused */, Dictionary_2_t827649927 * ___dict0, StringBuilder_t243639308 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.MiniJson::SerializeArray(System.Collections.Generic.List`1<System.Object>,System.Text.StringBuilder)
extern "C"  bool MiniJson_SerializeArray_m3441206776 (Il2CppObject * __this /* static, unused */, List_1_t1244034627 * ___anArray0, StringBuilder_t243639308 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.MiniJson::SerializeValue(System.Object,System.Text.StringBuilder)
extern "C"  bool MiniJson_SerializeValue_m1234778478 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, StringBuilder_t243639308 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MiniJson::SerializeString(System.String,System.Text.StringBuilder)
extern "C"  void MiniJson_SerializeString_m3834114984 (Il2CppObject * __this /* static, unused */, String_t* ___aString0, StringBuilder_t243639308 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MiniJson::SerializeNumber(System.Double,System.Text.StringBuilder)
extern "C"  void MiniJson_SerializeNumber_m943260592 (Il2CppObject * __this /* static, unused */, double ___number0, StringBuilder_t243639308 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MiniJson::.cctor()
extern "C"  void MiniJson__cctor_m1323574590 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
