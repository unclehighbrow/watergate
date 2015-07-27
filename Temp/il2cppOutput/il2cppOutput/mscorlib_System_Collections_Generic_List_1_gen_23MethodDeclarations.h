﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t341;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t385;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t112;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t722;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t2431;
// System.Object[]
struct ObjectU5BU5D_t73;
// System.Predicate`1<System.Object>
struct Predicate_1_t2436;
// System.Comparison`1<System.Object>
struct Comparison_1_t2443;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_6.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m3585_gshared (List_1_t341 * __this, const MethodInfo* method);
#define List_1__ctor_m3585(__this, method) (( void (*) (List_1_t341 *, const MethodInfo*))List_1__ctor_m3585_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m11432_gshared (List_1_t341 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m11432(__this, ___collection, method) (( void (*) (List_1_t341 *, Object_t*, const MethodInfo*))List_1__ctor_m11432_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m11433_gshared (List_1_t341 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m11433(__this, ___capacity, method) (( void (*) (List_1_t341 *, int32_t, const MethodInfo*))List_1__ctor_m11433_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m11434_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m11434(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11434_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3835_gshared (List_1_t341 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3835(__this, method) (( Object_t* (*) (List_1_t341 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3835_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m3818_gshared (List_1_t341 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m3818(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t341 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m3818_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m3814_gshared (List_1_t341 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m3814(__this, method) (( Object_t * (*) (List_1_t341 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m3814_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m3823_gshared (List_1_t341 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m3823(__this, ___item, method) (( int32_t (*) (List_1_t341 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m3823_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m3825_gshared (List_1_t341 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m3825(__this, ___item, method) (( bool (*) (List_1_t341 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m3825_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m3826_gshared (List_1_t341 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m3826(__this, ___item, method) (( int32_t (*) (List_1_t341 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m3826_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m3827_gshared (List_1_t341 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m3827(__this, ___index, ___item, method) (( void (*) (List_1_t341 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m3827_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m3828_gshared (List_1_t341 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m3828(__this, ___item, method) (( void (*) (List_1_t341 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m3828_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3830_gshared (List_1_t341 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3830(__this, method) (( bool (*) (List_1_t341 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3830_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m3816_gshared (List_1_t341 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m3816(__this, method) (( bool (*) (List_1_t341 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m3816_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m3817_gshared (List_1_t341 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m3817(__this, method) (( Object_t * (*) (List_1_t341 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m3817_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m3819_gshared (List_1_t341 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m3819(__this, method) (( bool (*) (List_1_t341 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m3819_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m3820_gshared (List_1_t341 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m3820(__this, method) (( bool (*) (List_1_t341 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m3820_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m3821_gshared (List_1_t341 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m3821(__this, ___index, method) (( Object_t * (*) (List_1_t341 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m3821_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m3822_gshared (List_1_t341 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m3822(__this, ___index, ___value, method) (( void (*) (List_1_t341 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m3822_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m3831_gshared (List_1_t341 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m3831(__this, ___item, method) (( void (*) (List_1_t341 *, Object_t *, const MethodInfo*))List_1_Add_m3831_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m11435_gshared (List_1_t341 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m11435(__this, ___newCount, method) (( void (*) (List_1_t341 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11435_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m11436_gshared (List_1_t341 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m11436(__this, ___collection, method) (( void (*) (List_1_t341 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11436_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m11437_gshared (List_1_t341 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m11437(__this, ___enumerable, method) (( void (*) (List_1_t341 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11437_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m11438_gshared (List_1_t341 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m11438(__this, ___collection, method) (( void (*) (List_1_t341 *, Object_t*, const MethodInfo*))List_1_AddRange_m11438_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2431 * List_1_AsReadOnly_m11439_gshared (List_1_t341 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m11439(__this, method) (( ReadOnlyCollection_1_t2431 * (*) (List_1_t341 *, const MethodInfo*))List_1_AsReadOnly_m11439_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m3824_gshared (List_1_t341 * __this, const MethodInfo* method);
#define List_1_Clear_m3824(__this, method) (( void (*) (List_1_t341 *, const MethodInfo*))List_1_Clear_m3824_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m3832_gshared (List_1_t341 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m3832(__this, ___item, method) (( bool (*) (List_1_t341 *, Object_t *, const MethodInfo*))List_1_Contains_m3832_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m3833_gshared (List_1_t341 * __this, ObjectU5BU5D_t73* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m3833(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t341 *, ObjectU5BU5D_t73*, int32_t, const MethodInfo*))List_1_CopyTo_m3833_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m11440_gshared (List_1_t341 * __this, Predicate_1_t2436 * ___match, const MethodInfo* method);
#define List_1_Find_m11440(__this, ___match, method) (( Object_t * (*) (List_1_t341 *, Predicate_1_t2436 *, const MethodInfo*))List_1_Find_m11440_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m11441_gshared (Object_t * __this /* static, unused */, Predicate_1_t2436 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m11441(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2436 *, const MethodInfo*))List_1_CheckMatch_m11441_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m11442_gshared (List_1_t341 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2436 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m11442(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t341 *, int32_t, int32_t, Predicate_1_t2436 *, const MethodInfo*))List_1_GetIndex_m11442_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2429  List_1_GetEnumerator_m11443_gshared (List_1_t341 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m11443(__this, method) (( Enumerator_t2429  (*) (List_1_t341 *, const MethodInfo*))List_1_GetEnumerator_m11443_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m3836_gshared (List_1_t341 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m3836(__this, ___item, method) (( int32_t (*) (List_1_t341 *, Object_t *, const MethodInfo*))List_1_IndexOf_m3836_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m11444_gshared (List_1_t341 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m11444(__this, ___start, ___delta, method) (( void (*) (List_1_t341 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11444_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m11445_gshared (List_1_t341 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m11445(__this, ___index, method) (( void (*) (List_1_t341 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11445_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m3837_gshared (List_1_t341 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m3837(__this, ___index, ___item, method) (( void (*) (List_1_t341 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m3837_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m11446_gshared (List_1_t341 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m11446(__this, ___collection, method) (( void (*) (List_1_t341 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11446_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m3834_gshared (List_1_t341 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m3834(__this, ___item, method) (( bool (*) (List_1_t341 *, Object_t *, const MethodInfo*))List_1_Remove_m3834_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m11447_gshared (List_1_t341 * __this, Predicate_1_t2436 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m11447(__this, ___match, method) (( int32_t (*) (List_1_t341 *, Predicate_1_t2436 *, const MethodInfo*))List_1_RemoveAll_m11447_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m3829_gshared (List_1_t341 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m3829(__this, ___index, method) (( void (*) (List_1_t341 *, int32_t, const MethodInfo*))List_1_RemoveAt_m3829_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m11448_gshared (List_1_t341 * __this, const MethodInfo* method);
#define List_1_Reverse_m11448(__this, method) (( void (*) (List_1_t341 *, const MethodInfo*))List_1_Reverse_m11448_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m11449_gshared (List_1_t341 * __this, const MethodInfo* method);
#define List_1_Sort_m11449(__this, method) (( void (*) (List_1_t341 *, const MethodInfo*))List_1_Sort_m11449_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m11450_gshared (List_1_t341 * __this, Comparison_1_t2443 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m11450(__this, ___comparison, method) (( void (*) (List_1_t341 *, Comparison_1_t2443 *, const MethodInfo*))List_1_Sort_m11450_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t73* List_1_ToArray_m11451_gshared (List_1_t341 * __this, const MethodInfo* method);
#define List_1_ToArray_m11451(__this, method) (( ObjectU5BU5D_t73* (*) (List_1_t341 *, const MethodInfo*))List_1_ToArray_m11451_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m11452_gshared (List_1_t341 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m11452(__this, method) (( void (*) (List_1_t341 *, const MethodInfo*))List_1_TrimExcess_m11452_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m11453_gshared (List_1_t341 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m11453(__this, method) (( int32_t (*) (List_1_t341 *, const MethodInfo*))List_1_get_Capacity_m11453_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m11454_gshared (List_1_t341 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m11454(__this, ___value, method) (( void (*) (List_1_t341 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11454_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m3815_gshared (List_1_t341 * __this, const MethodInfo* method);
#define List_1_get_Count_m3815(__this, method) (( int32_t (*) (List_1_t341 *, const MethodInfo*))List_1_get_Count_m3815_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m3838_gshared (List_1_t341 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m3838(__this, ___index, method) (( Object_t * (*) (List_1_t341 *, int32_t, const MethodInfo*))List_1_get_Item_m3838_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m3839_gshared (List_1_t341 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m3839(__this, ___index, ___value, method) (( void (*) (List_1_t341 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m3839_gshared)(__this, ___index, ___value, method)