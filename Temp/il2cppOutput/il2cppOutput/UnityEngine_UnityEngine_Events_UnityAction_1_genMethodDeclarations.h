﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t147;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t327;
// System.IAsyncResult
struct IAsyncResult_t222;
// System.AsyncCallback
struct AsyncCallback_t223;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
#define UnityAction_1__ctor_m1589(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t147 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m12649_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Invoke(T0)
#define UnityAction_1_Invoke_m12664(__this, ___arg0, method) (( void (*) (UnityAction_1_t147 *, List_1_t327 *, const MethodInfo*))UnityAction_1_Invoke_m12650_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m12665(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t147 *, List_1_t327 *, AsyncCallback_t223 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m12651_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m12666(__this, ___result, method) (( void (*) (UnityAction_1_t147 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m12652_gshared)(__this, ___result, method)