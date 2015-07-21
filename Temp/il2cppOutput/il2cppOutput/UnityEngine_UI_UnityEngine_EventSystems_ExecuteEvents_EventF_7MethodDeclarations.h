﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
struct EventFunction_1_t134;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IBeginDragHandler
struct IBeginDragHandler_t315;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t118;
// System.IAsyncResult
struct IAsyncResult_t222;
// System.AsyncCallback
struct AsyncCallback_t223;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_16MethodDeclarations.h"
#define EventFunction_1__ctor_m1578(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t134 *, Object_t *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m12519_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m13127(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t134 *, Object_t *, BaseEventData_t118 *, const MethodInfo*))EventFunction_1_Invoke_m12521_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m13128(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t134 *, Object_t *, BaseEventData_t118 *, AsyncCallback_t223 *, Object_t *, const MethodInfo*))EventFunction_1_BeginInvoke_m12523_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m13129(__this, ___result, method) (( void (*) (EventFunction_1_t134 *, Object_t *, const MethodInfo*))EventFunction_1_EndInvoke_m12525_gshared)(__this, ___result, method)
