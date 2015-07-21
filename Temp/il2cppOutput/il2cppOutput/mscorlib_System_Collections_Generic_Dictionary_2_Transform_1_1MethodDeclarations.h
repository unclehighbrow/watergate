﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t2564;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t222;
// System.AsyncCallback
struct AsyncCallback_t223;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13418_gshared (Transform_1_t2564 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m13418(__this, ___object, ___method, method) (( void (*) (Transform_1_t2564 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m13418_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1159  Transform_1_Invoke_m13419_gshared (Transform_1_t2564 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m13419(__this, ___key, ___value, method) (( DictionaryEntry_t1159  (*) (Transform_1_t2564 *, int32_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m13419_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m13420_gshared (Transform_1_t2564 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t223 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m13420(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2564 *, int32_t, Object_t *, AsyncCallback_t223 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m13420_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1159  Transform_1_EndInvoke_m13421_gshared (Transform_1_t2564 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m13421(__this, ___result, method) (( DictionaryEntry_t1159  (*) (Transform_1_t2564 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m13421_gshared)(__this, ___result, method)