﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t163;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3099;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerEventData>
struct ICollection_1_t3100;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t157;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct KeyCollection_t2582;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct ValueCollection_t346;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2562;
// System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct IDictionary_2_t3101;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t731;
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>[]
struct KeyValuePair_2U5BU5D_t3102;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>
struct IEnumerator_1_t3103;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1158;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator_.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_14MethodDeclarations.h"
#define Dictionary_2__ctor_m1612(__this, method) (( void (*) (Dictionary_2_t163 *, const MethodInfo*))Dictionary_2__ctor_m13247_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m13248(__this, ___comparer, method) (( void (*) (Dictionary_2_t163 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13249_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m13250(__this, ___dictionary, method) (( void (*) (Dictionary_2_t163 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13251_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Int32)
#define Dictionary_2__ctor_m13252(__this, ___capacity, method) (( void (*) (Dictionary_2_t163 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m13253_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m13254(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t163 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13255_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m13256(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t163 *, SerializationInfo_t731 *, StreamingContext_t732 , const MethodInfo*))Dictionary_2__ctor_m13257_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13258(__this, method) (( Object_t* (*) (Dictionary_2_t163 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13259_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13260(__this, method) (( Object_t* (*) (Dictionary_2_t163 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13261_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13262(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t163 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13263_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13264(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t163 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13265_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m13266(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t163 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13267_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m13268(__this, ___key, method) (( bool (*) (Dictionary_2_t163 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13269_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m13270(__this, ___key, method) (( void (*) (Dictionary_2_t163 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13271_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13272(__this, method) (( bool (*) (Dictionary_2_t163 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13273_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13274(__this, method) (( Object_t * (*) (Dictionary_2_t163 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13275_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13276(__this, method) (( bool (*) (Dictionary_2_t163 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13277_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13278(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t163 *, KeyValuePair_2_t347 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13279_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13280(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t163 *, KeyValuePair_2_t347 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13281_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13282(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t163 *, KeyValuePair_2U5BU5D_t3102*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13283_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13284(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t163 *, KeyValuePair_2_t347 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13285_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13286(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t163 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13287_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13288(__this, method) (( Object_t * (*) (Dictionary_2_t163 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13289_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13290(__this, method) (( Object_t* (*) (Dictionary_2_t163 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13291_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13292(__this, method) (( Object_t * (*) (Dictionary_2_t163 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13293_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Count()
#define Dictionary_2_get_Count_m13294(__this, method) (( int32_t (*) (Dictionary_2_t163 *, const MethodInfo*))Dictionary_2_get_Count_m13295_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Item(TKey)
#define Dictionary_2_get_Item_m13296(__this, ___key, method) (( PointerEventData_t157 * (*) (Dictionary_2_t163 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m13297_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m13298(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t163 *, int32_t, PointerEventData_t157 *, const MethodInfo*))Dictionary_2_set_Item_m13299_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m13300(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t163 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13301_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m13302(__this, ___size, method) (( void (*) (Dictionary_2_t163 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13303_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m13304(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t163 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13305_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m13306(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t347  (*) (Object_t * /* static, unused */, int32_t, PointerEventData_t157 *, const MethodInfo*))Dictionary_2_make_pair_m13307_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m13308(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, PointerEventData_t157 *, const MethodInfo*))Dictionary_2_pick_key_m13309_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m13310(__this /* static, unused */, ___key, ___value, method) (( PointerEventData_t157 * (*) (Object_t * /* static, unused */, int32_t, PointerEventData_t157 *, const MethodInfo*))Dictionary_2_pick_value_m13311_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m13312(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t163 *, KeyValuePair_2U5BU5D_t3102*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13313_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Resize()
#define Dictionary_2_Resize_m13314(__this, method) (( void (*) (Dictionary_2_t163 *, const MethodInfo*))Dictionary_2_Resize_m13315_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Add(TKey,TValue)
#define Dictionary_2_Add_m13316(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t163 *, int32_t, PointerEventData_t157 *, const MethodInfo*))Dictionary_2_Add_m13317_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Clear()
#define Dictionary_2_Clear_m13318(__this, method) (( void (*) (Dictionary_2_t163 *, const MethodInfo*))Dictionary_2_Clear_m13319_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m13320(__this, ___key, method) (( bool (*) (Dictionary_2_t163 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m13321_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m13322(__this, ___value, method) (( bool (*) (Dictionary_2_t163 *, PointerEventData_t157 *, const MethodInfo*))Dictionary_2_ContainsValue_m13323_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m13324(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t163 *, SerializationInfo_t731 *, StreamingContext_t732 , const MethodInfo*))Dictionary_2_GetObjectData_m13325_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m13326(__this, ___sender, method) (( void (*) (Dictionary_2_t163 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13327_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Remove(TKey)
#define Dictionary_2_Remove_m13328(__this, ___key, method) (( bool (*) (Dictionary_2_t163 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m13329_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m13330(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t163 *, int32_t, PointerEventData_t157 **, const MethodInfo*))Dictionary_2_TryGetValue_m13331_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Keys()
#define Dictionary_2_get_Keys_m13332(__this, method) (( KeyCollection_t2582 * (*) (Dictionary_2_t163 *, const MethodInfo*))Dictionary_2_get_Keys_m13333_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Values()
#define Dictionary_2_get_Values_m1617(__this, method) (( ValueCollection_t346 * (*) (Dictionary_2_t163 *, const MethodInfo*))Dictionary_2_get_Values_m13334_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m13335(__this, ___key, method) (( int32_t (*) (Dictionary_2_t163 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13336_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m13337(__this, ___value, method) (( PointerEventData_t157 * (*) (Dictionary_2_t163 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13338_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m13339(__this, ___pair, method) (( bool (*) (Dictionary_2_t163 *, KeyValuePair_2_t347 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13340_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m1623(__this, method) (( Enumerator_t348  (*) (Dictionary_2_t163 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13341_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m13342(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1159  (*) (Object_t * /* static, unused */, int32_t, PointerEventData_t157 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13343_gshared)(__this /* static, unused */, ___key, ___value, method)
