﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Graphic
struct Graphic_t198;
// UnityEngine.Material
struct Material_t190;
// UnityEngine.RectTransform
struct RectTransform_t193;
// UnityEngine.Canvas
struct Canvas_t195;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t194;
// UnityEngine.Texture
struct Texture_t239;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t233;
// UnityEngine.Camera
struct Camera_t82;
// UnityEngine.Events.UnityAction
struct UnityAction_t87;
// UnityEngine.Transform
struct Transform_t65;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.UI.Graphic::.ctor()
extern "C" void Graphic__ctor_m737 (Graphic_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::.cctor()
extern "C" void Graphic__cctor_m738 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_defaultGraphicMaterial()
extern "C" Material_t190 * Graphic_get_defaultGraphicMaterial_m739 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Graphic::get_color()
extern "C" Color_t39  Graphic_get_color_m740 (Graphic_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color)
extern "C" void Graphic_set_color_m741 (Graphic_t198 * __this, Color_t39  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetAllDirty()
extern "C" void Graphic_SetAllDirty_m742 (Graphic_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetLayoutDirty()
extern "C" void Graphic_SetLayoutDirty_m743 (Graphic_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetVerticesDirty()
extern "C" void Graphic_SetVerticesDirty_m744 (Graphic_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetMaterialDirty()
extern "C" void Graphic_SetMaterialDirty_m745 (Graphic_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnRectTransformDimensionsChange()
extern "C" void Graphic_OnRectTransformDimensionsChange_m746 (Graphic_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnBeforeTransformParentChanged()
extern "C" void Graphic_OnBeforeTransformParentChanged_m747 (Graphic_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnTransformParentChanged()
extern "C" void Graphic_OnTransformParentChanged_m748 (Graphic_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Graphic::get_depth()
extern "C" int32_t Graphic_get_depth_m749 (Graphic_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
extern "C" RectTransform_t193 * Graphic_get_rectTransform_m750 (Graphic_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Canvas UnityEngine.UI.Graphic::get_canvas()
extern "C" Canvas_t195 * Graphic_get_canvas_m751 (Graphic_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CacheCanvas()
extern "C" void Graphic_CacheCanvas_m752 (Graphic_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::get_canvasRenderer()
extern "C" CanvasRenderer_t194 * Graphic_get_canvasRenderer_m753 (Graphic_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_defaultMaterial()
extern "C" Material_t190 * Graphic_get_defaultMaterial_m754 (Graphic_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_material()
extern "C" Material_t190 * Graphic_get_material_m755 (Graphic_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material)
extern "C" void Graphic_set_material_m756 (Graphic_t198 * __this, Material_t190 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_materialForRendering()
extern "C" Material_t190 * Graphic_get_materialForRendering_m757 (Graphic_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.Graphic::get_mainTexture()
extern "C" Texture_t239 * Graphic_get_mainTexture_m758 (Graphic_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnEnable()
extern "C" void Graphic_OnEnable_m759 (Graphic_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnDisable()
extern "C" void Graphic_OnDisable_m760 (Graphic_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SendGraphicEnabledDisabled()
extern "C" void Graphic_SendGraphicEnabledDisabled_m761 (Graphic_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnCanvasHierarchyChanged()
extern "C" void Graphic_OnCanvasHierarchyChanged_m762 (Graphic_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void Graphic_Rebuild_m763 (Graphic_t198 * __this, int32_t ___update, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UpdateGeometry()
extern "C" void Graphic_UpdateGeometry_m764 (Graphic_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UpdateMaterial()
extern "C" void Graphic_UpdateMaterial_m765 (Graphic_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void Graphic_OnFillVBO_m766 (Graphic_t198 * __this, List_1_t233 * ___vbo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnDidApplyAnimationProperties()
extern "C" void Graphic_OnDidApplyAnimationProperties_m767 (Graphic_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetNativeSize()
extern "C" void Graphic_SetNativeSize_m768 (Graphic_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Graphic::Raycast(UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool Graphic_Raycast_m769 (Graphic_t198 * __this, Vector2_t35  ___sp, Camera_t82 * ___eventCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Graphic::PixelAdjustPoint(UnityEngine.Vector2)
extern "C" Vector2_t35  Graphic_PixelAdjustPoint_m770 (Graphic_t198 * __this, Vector2_t35  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.Graphic::GetPixelAdjustedRect()
extern "C" Rect_t229  Graphic_GetPixelAdjustedRect_m771 (Graphic_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean)
extern "C" void Graphic_CrossFadeColor_m772 (Graphic_t198 * __this, Color_t39  ___targetColor, float ___duration, bool ___ignoreTimeScale, bool ___useAlpha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean,System.Boolean)
extern "C" void Graphic_CrossFadeColor_m773 (Graphic_t198 * __this, Color_t39  ___targetColor, float ___duration, bool ___ignoreTimeScale, bool ___useAlpha, bool ___useRGB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Graphic::CreateColorFromAlpha(System.Single)
extern "C" Color_t39  Graphic_CreateColorFromAlpha_m774 (Object_t * __this /* static, unused */, float ___alpha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean)
extern "C" void Graphic_CrossFadeAlpha_m775 (Graphic_t198 * __this, float ___alpha, float ___duration, bool ___ignoreTimeScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyLayoutCallback(UnityEngine.Events.UnityAction)
extern "C" void Graphic_RegisterDirtyLayoutCallback_m776 (Graphic_t198 * __this, UnityAction_t87 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyLayoutCallback(UnityEngine.Events.UnityAction)
extern "C" void Graphic_UnregisterDirtyLayoutCallback_m777 (Graphic_t198 * __this, UnityAction_t87 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyVerticesCallback(UnityEngine.Events.UnityAction)
extern "C" void Graphic_RegisterDirtyVerticesCallback_m778 (Graphic_t198 * __this, UnityAction_t87 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyVerticesCallback(UnityEngine.Events.UnityAction)
extern "C" void Graphic_UnregisterDirtyVerticesCallback_m779 (Graphic_t198 * __this, UnityAction_t87 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
extern "C" void Graphic_RegisterDirtyMaterialCallback_m780 (Graphic_t198 * __this, UnityAction_t87 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
extern "C" void Graphic_UnregisterDirtyMaterialCallback_m781 (Graphic_t198 * __this, UnityAction_t87 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::<s_VboPool>m__4(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void Graphic_U3Cs_VboPoolU3Em__4_m782 (Object_t * __this /* static, unused */, List_1_t233 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::<s_VboPool>m__5(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void Graphic_U3Cs_VboPoolU3Em__5_m783 (Object_t * __this /* static, unused */, List_1_t233 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Graphic::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C" bool Graphic_UnityEngine_UI_ICanvasElement_IsDestroyed_m784 (Graphic_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Graphic::UnityEngine.UI.ICanvasElement.get_transform()
extern "C" Transform_t65 * Graphic_UnityEngine_UI_ICanvasElement_get_transform_m785 (Graphic_t198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
