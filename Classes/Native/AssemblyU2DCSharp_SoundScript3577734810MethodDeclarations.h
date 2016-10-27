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

// SoundScript
struct SoundScript_t3577734810;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityEngine.AudioClip
struct AudioClip_t794140988;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AudioClip794140988.h"

// System.Void SoundScript::.ctor()
extern "C"  void SoundScript__ctor_m3835453969 (SoundScript_t3577734810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource SoundScript::AddAudio(UnityEngine.AudioClip,System.Boolean,System.Boolean,System.Single)
extern "C"  AudioSource_t1740077639 * SoundScript_AddAudio_m1717005881 (SoundScript_t3577734810 * __this, AudioClip_t794140988 * ___clip0, bool ___loop1, bool ___playOnAwake2, float ___volume3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundScript::Start()
extern "C"  void SoundScript_Start_m2782591761 (SoundScript_t3577734810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundScript::Update()
extern "C"  void SoundScript_Update_m366850844 (SoundScript_t3577734810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
