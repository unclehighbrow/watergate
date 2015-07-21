﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<WarpZone>
struct List_1_t27;
// System.Object
struct Object_t;
// WarpZone
struct WarpZone_t9;
// System.Collections.Generic.IEnumerable`1<WarpZone>
struct IEnumerable_1_t3059;
// System.Collections.Generic.IEnumerator`1<WarpZone>
struct IEnumerator_1_t3060;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.ICollection`1<WarpZone>
struct ICollection_1_t3061;
// System.Collections.ObjectModel.ReadOnlyCollection`1<WarpZone>
struct ReadOnlyCollection_1_t2449;
// WarpZone[]
struct WarpZoneU5BU5D_t80;
// System.Predicate`1<WarpZone>
struct Predicate_1_t2450;
// System.Comparison`1<WarpZone>
struct Comparison_1_t2452;
// System.Collections.Generic.List`1/Enumerator<WarpZone>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_7.h"

// System.Void System.Collections.Generic.List`1<WarpZone>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_23MethodDeclarations.h"
#define List_1__ctor_m11663(__this, method) (( void (*) (List_1_t27 *, const MethodInfo*))List_1__ctor_m3577_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<WarpZone>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m269(__this, ___collection, method) (( void (*) (List_1_t27 *, Object_t*, const MethodInfo*))List_1__ctor_m11424_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<WarpZone>::.ctor(System.Int32)
#define List_1__ctor_m11664(__this, ___capacity, method) (( void (*) (List_1_t27 *, int32_t, const MethodInfo*))List_1__ctor_m11425_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<WarpZone>::.cctor()
#define List_1__cctor_m11665(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11426_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<WarpZone>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11666(__this, method) (( Object_t* (*) (List_1_t27 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3827_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<WarpZone>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m11667(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t27 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m3810_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<WarpZone>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11668(__this, method) (( Object_t * (*) (List_1_t27 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m3806_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<WarpZone>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m11669(__this, ___item, method) (( int32_t (*) (List_1_t27 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m3815_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<WarpZone>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m11670(__this, ___item, method) (( bool (*) (List_1_t27 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m3817_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<WarpZone>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m11671(__this, ___item, method) (( int32_t (*) (List_1_t27 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m3818_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<WarpZone>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m11672(__this, ___index, ___item, method) (( void (*) (List_1_t27 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m3819_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<WarpZone>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m11673(__this, ___item, method) (( void (*) (List_1_t27 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m3820_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<WarpZone>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11674(__this, method) (( bool (*) (List_1_t27 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3822_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<WarpZone>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m11675(__this, method) (( bool (*) (List_1_t27 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m3808_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<WarpZone>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m11676(__this, method) (( Object_t * (*) (List_1_t27 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3809_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<WarpZone>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m11677(__this, method) (( bool (*) (List_1_t27 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m3811_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<WarpZone>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m11678(__this, method) (( bool (*) (List_1_t27 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m3812_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<WarpZone>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m11679(__this, ___index, method) (( Object_t * (*) (List_1_t27 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m3813_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<WarpZone>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m11680(__this, ___index, ___value, method) (( void (*) (List_1_t27 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m3814_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<WarpZone>::Add(T)
#define List_1_Add_m11681(__this, ___item, method) (( void (*) (List_1_t27 *, WarpZone_t9 *, const MethodInfo*))List_1_Add_m3823_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<WarpZone>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m11682(__this, ___newCount, method) (( void (*) (List_1_t27 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11427_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<WarpZone>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m11683(__this, ___collection, method) (( void (*) (List_1_t27 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11428_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<WarpZone>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m11684(__this, ___enumerable, method) (( void (*) (List_1_t27 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11429_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<WarpZone>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m11685(__this, ___collection, method) (( void (*) (List_1_t27 *, Object_t*, const MethodInfo*))List_1_AddRange_m11430_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<WarpZone>::AsReadOnly()
#define List_1_AsReadOnly_m11686(__this, method) (( ReadOnlyCollection_1_t2449 * (*) (List_1_t27 *, const MethodInfo*))List_1_AsReadOnly_m11431_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<WarpZone>::Clear()
#define List_1_Clear_m11687(__this, method) (( void (*) (List_1_t27 *, const MethodInfo*))List_1_Clear_m3816_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<WarpZone>::Contains(T)
#define List_1_Contains_m11688(__this, ___item, method) (( bool (*) (List_1_t27 *, WarpZone_t9 *, const MethodInfo*))List_1_Contains_m3824_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<WarpZone>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m11689(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t27 *, WarpZoneU5BU5D_t80*, int32_t, const MethodInfo*))List_1_CopyTo_m3825_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<WarpZone>::Find(System.Predicate`1<T>)
#define List_1_Find_m11690(__this, ___match, method) (( WarpZone_t9 * (*) (List_1_t27 *, Predicate_1_t2450 *, const MethodInfo*))List_1_Find_m11432_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<WarpZone>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m11691(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2450 *, const MethodInfo*))List_1_CheckMatch_m11433_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<WarpZone>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m11692(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t27 *, int32_t, int32_t, Predicate_1_t2450 *, const MethodInfo*))List_1_GetIndex_m11434_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<WarpZone>::GetEnumerator()
#define List_1_GetEnumerator_m11693(__this, method) (( Enumerator_t2451  (*) (List_1_t27 *, const MethodInfo*))List_1_GetEnumerator_m11435_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<WarpZone>::IndexOf(T)
#define List_1_IndexOf_m11694(__this, ___item, method) (( int32_t (*) (List_1_t27 *, WarpZone_t9 *, const MethodInfo*))List_1_IndexOf_m3828_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<WarpZone>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m11695(__this, ___start, ___delta, method) (( void (*) (List_1_t27 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11436_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<WarpZone>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m11696(__this, ___index, method) (( void (*) (List_1_t27 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11437_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<WarpZone>::Insert(System.Int32,T)
#define List_1_Insert_m11697(__this, ___index, ___item, method) (( void (*) (List_1_t27 *, int32_t, WarpZone_t9 *, const MethodInfo*))List_1_Insert_m3829_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<WarpZone>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m11698(__this, ___collection, method) (( void (*) (List_1_t27 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11438_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<WarpZone>::Remove(T)
#define List_1_Remove_m11699(__this, ___item, method) (( bool (*) (List_1_t27 *, WarpZone_t9 *, const MethodInfo*))List_1_Remove_m3826_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<WarpZone>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m11700(__this, ___match, method) (( int32_t (*) (List_1_t27 *, Predicate_1_t2450 *, const MethodInfo*))List_1_RemoveAll_m11439_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<WarpZone>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m11701(__this, ___index, method) (( void (*) (List_1_t27 *, int32_t, const MethodInfo*))List_1_RemoveAt_m3821_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<WarpZone>::Reverse()
#define List_1_Reverse_m11702(__this, method) (( void (*) (List_1_t27 *, const MethodInfo*))List_1_Reverse_m11440_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<WarpZone>::Sort()
#define List_1_Sort_m11703(__this, method) (( void (*) (List_1_t27 *, const MethodInfo*))List_1_Sort_m11441_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<WarpZone>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m11704(__this, ___comparison, method) (( void (*) (List_1_t27 *, Comparison_1_t2452 *, const MethodInfo*))List_1_Sort_m11442_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<WarpZone>::ToArray()
#define List_1_ToArray_m11705(__this, method) (( WarpZoneU5BU5D_t80* (*) (List_1_t27 *, const MethodInfo*))List_1_ToArray_m11443_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<WarpZone>::TrimExcess()
#define List_1_TrimExcess_m11706(__this, method) (( void (*) (List_1_t27 *, const MethodInfo*))List_1_TrimExcess_m11444_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<WarpZone>::get_Capacity()
#define List_1_get_Capacity_m11707(__this, method) (( int32_t (*) (List_1_t27 *, const MethodInfo*))List_1_get_Capacity_m11445_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<WarpZone>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m11708(__this, ___value, method) (( void (*) (List_1_t27 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11446_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<WarpZone>::get_Count()
#define List_1_get_Count_m11709(__this, method) (( int32_t (*) (List_1_t27 *, const MethodInfo*))List_1_get_Count_m3807_gshared)(__this, method)
// T System.Collections.Generic.List`1<WarpZone>::get_Item(System.Int32)
#define List_1_get_Item_m11710(__this, ___index, method) (( WarpZone_t9 * (*) (List_1_t27 *, int32_t, const MethodInfo*))List_1_get_Item_m3830_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<WarpZone>::set_Item(System.Int32,T)
#define List_1_set_Item_m11711(__this, ___index, ___value, method) (( void (*) (List_1_t27 *, int32_t, WarpZone_t9 *, const MethodInfo*))List_1_set_Item_m3831_gshared)(__this, ___index, ___value, method)