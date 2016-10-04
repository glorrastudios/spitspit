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

// UnityEngine.GUISkin
struct GUISkin_t2614611333;
// System.String
struct String_t;
// UnityEngine.GUIContent
struct GUIContent_t2432841515;
// UnityEngine.GUIStyle
struct GUIStyle_t1006925219;
// UnityEngine.Texture
struct Texture_t1769722184;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t999919624;
// UnityEngine.Material
struct Material_t1886596500;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime339033936.h"
#include "UnityEngine_UnityEngine_GUISkin2614611333.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_GUIContent2432841515.h"
#include "UnityEngine_UnityEngine_GUIStyle1006925219.h"
#include "UnityEngine_UnityEngine_Texture1769722184.h"
#include "UnityEngine_UnityEngine_ScaleMode1648723514.h"
#include "UnityEngine_UnityEngine_FocusType860532831.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_GUI_WindowFunction999919624.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "mscorlib_System_IntPtr676692020.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C"  void GUI__cctor_m1345698031 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime UnityEngine.GUI::get_nextScrollStepTime()
extern "C"  DateTime_t339033936  GUI_get_nextScrollStepTime_m719800559 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C"  void GUI_set_nextScrollStepTime_m3820512796 (Il2CppObject * __this /* static, unused */, DateTime_t339033936  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::get_scrollTroughSide()
extern "C"  int32_t GUI_get_scrollTroughSide_m3369891864 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_scrollTroughSide(System.Int32)
extern "C"  void GUI_set_scrollTroughSide_m1228634973 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C"  void GUI_set_skin_m1213959601 (Il2CppObject * __this /* static, unused */, GUISkin_t2614611333 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C"  GUISkin_t2614611333 * GUI_get_skin_m4001454842 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
extern "C"  void GUI_DoSetSkin_m800823745 (Il2CppObject * __this /* static, unused */, GUISkin_t2614611333 * ___newSkin0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
extern "C"  void GUI_Label_m1483857617 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position0, String_t* ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  void GUI_Label_m2293702269 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position0, GUIContent_t2432841515 * ___content1, GUIStyle_t1006925219 * ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture)
extern "C"  void GUI_DrawTexture_m418809280 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position0, Texture_t1769722184 * ___image1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode)
extern "C"  void GUI_DrawTexture_m2033906102 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position0, Texture_t1769722184 * ___image1, int32_t ___scaleMode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean)
extern "C"  void GUI_DrawTexture_m1717108487 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position0, Texture_t1769722184 * ___image1, int32_t ___scaleMode2, bool ___alphaBlend3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean,System.Single)
extern "C"  void GUI_DrawTexture_m1839804844 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position0, Texture_t1769722184 * ___image1, int32_t ___scaleMode2, bool ___alphaBlend3, float ___imageAspect4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern "C"  bool GUI_Button_m885093907 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position0, String_t* ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.Texture)
extern "C"  bool GUI_Button_m3751403967 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position0, Texture_t1769722184 * ___image1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoRepeatButton(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.FocusType)
extern "C"  bool GUI_DoRepeatButton_m4194170646 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position0, GUIContent_t2432841515 * ___content1, GUIStyle_t1006925219 * ___style2, int32_t ___focusType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Toggle(UnityEngine.Rect,System.Boolean,System.String)
extern "C"  bool GUI_Toggle_m2749821408 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position0, bool ___value1, String_t* ___text2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Toggle(UnityEngine.Rect,System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  bool GUI_Toggle_m2582424908 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position0, bool ___value1, GUIContent_t2432841515 * ___content2, GUIStyle_t1006925219 * ___style3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::Slider(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
extern "C"  float GUI_Slider_m2269439694 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position0, float ___value1, float ___size2, float ___start3, float ___end4, GUIStyle_t1006925219 * ___slider5, GUIStyle_t1006925219 * ___thumb6, bool ___horiz7, int32_t ___id8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::HorizontalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C"  float GUI_HorizontalScrollbar_m2127981046 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position0, float ___value1, float ___size2, float ___leftValue3, float ___rightValue4, GUIStyle_t1006925219 * ___style5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::ScrollerRepeatButton(System.Int32,UnityEngine.Rect,UnityEngine.GUIStyle)
extern "C"  bool GUI_ScrollerRepeatButton_m2505011526 (Il2CppObject * __this /* static, unused */, int32_t ___scrollerID0, Rect_t1525428817  ___rect1, GUIStyle_t1006925219 * ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::VerticalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C"  float GUI_VerticalScrollbar_m1710564744 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position0, float ___value1, float ___size2, float ___topValue3, float ___bottomValue4, GUIStyle_t1006925219 * ___style5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::Scroller(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean)
extern "C"  float GUI_Scroller_m520117136 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position0, float ___value1, float ___size2, float ___leftValue3, float ___rightValue4, GUIStyle_t1006925219 * ___slider5, GUIStyle_t1006925219 * ___thumb6, GUIStyle_t1006925219 * ___leftButton7, GUIStyle_t1006925219 * ___rightButton8, bool ___horiz9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUI::BeginScrollView(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Rect)
extern "C"  Vector2_t3525329788  GUI_BeginScrollView_m2683764896 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position0, Vector2_t3525329788  ___scrollPosition1, Rect_t1525428817  ___viewRect2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUI::BeginScrollView(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C"  Vector2_t3525329788  GUI_BeginScrollView_m3702064537 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position0, Vector2_t3525329788  ___scrollPosition1, Rect_t1525428817  ___viewRect2, bool ___alwaysShowHorizontal3, bool ___alwaysShowVertical4, GUIStyle_t1006925219 * ___horizontalScrollbar5, GUIStyle_t1006925219 * ___verticalScrollbar6, GUIStyle_t1006925219 * ___background7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::EndScrollView()
extern "C"  void GUI_EndScrollView_m3280556969 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::EndScrollView(System.Boolean)
extern "C"  void GUI_EndScrollView_m3615223136 (Il2CppObject * __this /* static, unused */, bool ___handleScrollWheel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C"  void GUI_CallWindowDelegate_m2260338804 (Il2CppObject * __this /* static, unused */, WindowFunction_t999919624 * ___func0, int32_t ___id1, GUISkin_t2614611333 * ____skin2, int32_t ___forceRect3, float ___width4, float ___height5, GUIStyle_t1006925219 * ___style6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.GUI::get_color()
extern "C"  Color_t1588175760  GUI_get_color_m1489208189 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_color(UnityEngine.Color)
extern "C"  void GUI_set_color_m2304110692 (Il2CppObject * __this /* static, unused */, Color_t1588175760  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_get_color(UnityEngine.Color&)
extern "C"  void GUI_INTERNAL_get_color_m1047250244 (Il2CppObject * __this /* static, unused */, Color_t1588175760 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_set_color(UnityEngine.Color&)
extern "C"  void GUI_INTERNAL_set_color_m774536016 (Il2CppObject * __this /* static, unused */, Color_t1588175760 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C"  void GUI_set_changed_m727947722 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_enabled()
extern "C"  bool GUI_get_enabled_m3799739706 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_enabled(System.Boolean)
extern "C"  void GUI_set_enabled_m262604887 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C"  void GUI_DoLabel_m2990009013 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position0, GUIContent_t2432841515 * ___content1, IntPtr_t ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C"  void GUI_INTERNAL_CALL_DoLabel_m2707679966 (Il2CppObject * __this /* static, unused */, Rect_t1525428817 * ___position0, GUIContent_t2432841515 * ___content1, IntPtr_t ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blendMaterial()
extern "C"  Material_t1886596500 * GUI_get_blendMaterial_m3392847228 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blitMaterial()
extern "C"  Material_t1886596500 * GUI_get_blitMaterial_m1516673786 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C"  bool GUI_DoButton_m2194494269 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position0, GUIContent_t2432841515 * ___content1, IntPtr_t ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C"  bool GUI_INTERNAL_CALL_DoButton_m1954108340 (Il2CppObject * __this /* static, unused */, Rect_t1525428817 * ___position0, GUIContent_t2432841515 * ___content1, IntPtr_t ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoToggle(UnityEngine.Rect,System.Int32,System.Boolean,UnityEngine.GUIContent,System.IntPtr)
extern "C"  bool GUI_DoToggle_m286774485 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___position0, int32_t ___id1, bool ___value2, GUIContent_t2432841515 * ___content3, IntPtr_t ___style4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoToggle(UnityEngine.Rect&,System.Int32,System.Boolean,UnityEngine.GUIContent,System.IntPtr)
extern "C"  bool GUI_INTERNAL_CALL_DoToggle_m2472195920 (Il2CppObject * __this /* static, unused */, Rect_t1525428817 * ___position0, int32_t ___id1, bool ___value2, GUIContent_t2432841515 * ___content3, IntPtr_t ___style4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_usePageScrollbars()
extern "C"  bool GUI_get_usePageScrollbars_m944581596 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::InternalRepaintEditorWindow()
extern "C"  void GUI_InternalRepaintEditorWindow_m3223206407 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
