#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeApplication
#include <lime/_backend/native/NativeApplication.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app_Preloader
#include <lime/app/Preloader.h>
#endif
#ifndef INCLUDED_lime_app__Event_Float_Float_Int_Void
#include <lime/app/_Event_Float_Float_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Float_Float_Void
#include <lime/app/_Event_Float_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Int_Void
#include <lime/app/_Event_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Void
#include <lime/app/_Event_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_String_Int_Int_Void
#include <lime/app/_Event_String_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_String_Void
#include <lime/app/_Event_String_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_graphics_RenderContext_Void
#include <lime/app/_Event_lime_graphics_RenderContext_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_GamepadAxis_Float_Void
#include <lime/app/_Event_lime_ui_GamepadAxis_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_GamepadButton_Void
#include <lime/app/_Event_lime_ui_GamepadButton_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_Gamepad_Void
#include <lime/app/_Event_lime_ui_Gamepad_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void
#include <lime/app/_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_Touch_Void
#include <lime/app/_Event_lime_ui_Touch_Void.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_ConsoleRenderContext
#include <lime/graphics/ConsoleRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_DOMRenderContext
#include <lime/graphics/DOMRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_graphics_RendererType
#include <lime/graphics/RendererType.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
#ifndef INCLUDED_lime_ui_Joystick
#include <lime/ui/Joystick.h>
#endif
#ifndef INCLUDED_lime_ui_Mouse
#include <lime/ui/Mouse.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_lime_ui_Touch
#include <lime/ui/Touch.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_lime_ui__KeyModifier_KeyModifier_Impl_
#include <lime/ui/_KeyModifier/KeyModifier_Impl_.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoRenderer
#include <openfl/_internal/renderer/cairo/CairoRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasRenderer
#include <openfl/_internal/renderer/canvas/CanvasRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_console_ConsoleRenderer
#include <openfl/_internal/renderer/console/ConsoleRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_dom_DOMRenderer
#include <openfl/_internal/renderer/dom/DOMRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
#endif
#ifndef INCLUDED_openfl_events_ActivityEvent
#include <openfl/events/ActivityEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_FocusEvent
#include <openfl/events/FocusEvent.h>
#endif
#ifndef INCLUDED_openfl_events_FullScreenEvent
#include <openfl/events/FullScreenEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TouchEvent
#include <openfl/events/TouchEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInput
#include <openfl/ui/GameInput.h>
#endif
#ifndef INCLUDED_openfl_ui_Keyboard
#include <openfl/ui/Keyboard.h>
#endif
#ifndef INCLUDED_openfl_ui_Mouse
#include <openfl/ui/Mouse.h>
#endif
namespace openfl{
namespace display{

Void Stage_obj::__construct(::lime::ui::Window window,Dynamic color)
{
HX_STACK_FRAME("openfl.display.Stage","new",0x908e7106,"openfl.display.Stage.new","openfl/display/Stage.hx",129,0xadca4c2c)
HX_STACK_THIS(this)
HX_STACK_ARG(window,"window")
HX_STACK_ARG(color,"color")
{
	HX_STACK_LINE(135)
	super::__construct();
	HX_STACK_LINE(137)
	this->application = window->application;
	HX_STACK_LINE(138)
	this->window = window;
	HX_STACK_LINE(140)
	bool tmp = (color == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	if ((tmp)){
		HX_STACK_LINE(142)
		this->__transparent = true;
		HX_STACK_LINE(143)
		this->set_color((int)0);
	}
	else{
		HX_STACK_LINE(147)
		Dynamic tmp1 = color;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(147)
		this->set_color(tmp1);
	}
	HX_STACK_LINE(151)
	this->set_name(null());
	HX_STACK_LINE(153)
	this->__deltaTime = (int)0;
	HX_STACK_LINE(154)
	this->__displayState = ((Dynamic)((int)2));
	HX_STACK_LINE(155)
	this->__mouseX = (int)0;
	HX_STACK_LINE(156)
	this->__mouseY = (int)0;
	HX_STACK_LINE(157)
	this->__lastClickTime = (int)0;
	HX_STACK_LINE(158)
	this->__logicalWidth = (int)0;
	HX_STACK_LINE(159)
	this->__logicalHeight = (int)0;
	HX_STACK_LINE(160)
	::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(160)
	this->__displayMatrix = tmp1;
	HX_STACK_LINE(162)
	::openfl::_Vector::ObjectVector tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(162)
	{
		HX_STACK_LINE(162)
		int length = null();		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(162)
		bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
		HX_STACK_LINE(162)
		::openfl::_Vector::ObjectVector tmp3 = ::openfl::_Vector::ObjectVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(162)
		::openfl::_Vector::ObjectVector tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(162)
		tmp2 = tmp4;
	}
	HX_STACK_LINE(162)
	this->stage3Ds = tmp2;
	HX_STACK_LINE(163)
	{
		HX_STACK_LINE(163)
		::openfl::display::Stage3D tmp3 = ::openfl::display::Stage3D_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(163)
		::openfl::display::Stage3D x = tmp3;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(163)
		::openfl::_Vector::ObjectVector tmp4 = this->stage3Ds;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(163)
		::openfl::display::Stage3D tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(163)
		tmp4->push(tmp5);
	}
	HX_STACK_LINE(165)
	this->__resize();
	HX_STACK_LINE(167)
	this->stage = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(169)
	this->align = ((Dynamic)((int)6));
	HX_STACK_LINE(174)
	this->allowsFullScreen = true;
	HX_STACK_LINE(175)
	this->allowsFullScreenInteractive = true;
	HX_STACK_LINE(177)
	this->quality = ((Dynamic)((int)1));
	HX_STACK_LINE(178)
	this->scaleMode = ((Dynamic)((int)2));
	HX_STACK_LINE(179)
	this->stageFocusRect = true;
	HX_STACK_LINE(187)
	this->__clearBeforeRender = true;
	HX_STACK_LINE(188)
	this->__stack = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(189)
	this->__rollOutStack = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(191)
	::openfl::display::MovieClip tmp3 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(191)
	::openfl::display::Stage tmp4 = tmp3->stage;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(191)
	bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(191)
	if ((tmp5)){
		HX_STACK_LINE(193)
		::openfl::display::Stage tmp6 = this->stage;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(193)
		::openfl::display::MovieClip tmp7 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(193)
		tmp6->addChild(tmp7);
	}
}
;
	return null();
}

//Stage_obj::~Stage_obj() { }

Dynamic Stage_obj::__CreateEmpty() { return  new Stage_obj; }
hx::ObjectPtr< Stage_obj > Stage_obj::__new(::lime::ui::Window window,Dynamic color)
{  hx::ObjectPtr< Stage_obj > _result_ = new Stage_obj();
	_result_->__construct(window,color);
	return _result_;}

Dynamic Stage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stage_obj > _result_ = new Stage_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *Stage_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::lime::app::IModule_obj)) return operator ::lime::app::IModule_obj *();
	return super::__ToInterface(inType);
}

Stage_obj::operator ::lime::app::IModule_obj *()
	{ return new ::lime::app::IModule_delegate_< Stage_obj >(this); }
Void Stage_obj::addRenderer( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("openfl.display.Stage","addRenderer",0xe89cb32a,"openfl.display.Stage.addRenderer","openfl/display/Stage.hx",200,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
		HX_STACK_LINE(202)
		Dynamic tmp = this->render_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(202)
		::lime::graphics::Renderer tmp1 = renderer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(202)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(202)
		{
			HX_STACK_LINE(202)
			Dynamic f = tmp;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(202)
			::lime::graphics::Renderer a1 = tmp1;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::graphics::Renderer,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",202,0xadca4c2c)
				{
					HX_STACK_LINE(202)
					::lime::graphics::Renderer tmp3 = a1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(202)
					f(tmp3).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(202)
			tmp2 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(202)
		renderer->onRender->add(tmp2,null(),null());
		HX_STACK_LINE(203)
		Dynamic tmp3 = this->onRenderContextLost_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(203)
		::lime::graphics::Renderer tmp4 = renderer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(203)
		Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(203)
		{
			HX_STACK_LINE(203)
			Dynamic f = tmp3;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(203)
			::lime::graphics::Renderer a1 = tmp4;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::graphics::Renderer,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",203,0xadca4c2c)
				{
					HX_STACK_LINE(203)
					::lime::graphics::Renderer tmp6 = a1;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(203)
					f(tmp6).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(203)
			tmp5 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(203)
		renderer->onContextLost->add(tmp5,null(),null());
		HX_STACK_LINE(204)
		Dynamic tmp6 = this->onRenderContextRestored_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(204)
		::lime::graphics::Renderer tmp7 = renderer;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(204)
		Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(204)
		{
			HX_STACK_LINE(204)
			Dynamic f = tmp6;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(204)
			::lime::graphics::Renderer a1 = tmp7;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::graphics::Renderer,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(::lime::graphics::RenderContext a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",204,0xadca4c2c)
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(204)
					::lime::graphics::Renderer tmp9 = a1;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(204)
					::lime::graphics::RenderContext tmp10 = a2;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(204)
					f(tmp9,tmp10).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(204)
			tmp8 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(204)
		renderer->onContextRestored->add(tmp8,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,addRenderer,(void))

Void Stage_obj::addWindow( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","addWindow",0xe38e6a17,"openfl.display.Stage.addWindow","openfl/display/Stage.hx",209,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(211)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(211)
		::lime::ui::Window tmp1 = window;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(211)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(211)
		if ((tmp2)){
			HX_STACK_LINE(211)
			return null();
		}
		HX_STACK_LINE(213)
		Dynamic tmp3 = this->onWindowActivate_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(213)
		::lime::ui::Window tmp4 = window;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(213)
		Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(213)
		{
			HX_STACK_LINE(213)
			Dynamic f = tmp3;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(213)
			::lime::ui::Window a1 = tmp4;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",213,0xadca4c2c)
				{
					HX_STACK_LINE(213)
					::lime::ui::Window tmp6 = a1;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(213)
					f(tmp6).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(213)
			tmp5 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(213)
		window->onActivate->add(tmp5,null(),null());
		HX_STACK_LINE(214)
		Dynamic tmp6 = this->onWindowClose_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(214)
		::lime::ui::Window tmp7 = window;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(214)
		Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			Dynamic f = tmp6;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(214)
			::lime::ui::Window a1 = tmp7;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",214,0xadca4c2c)
				{
					HX_STACK_LINE(214)
					::lime::ui::Window tmp9 = a1;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(214)
					f(tmp9).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(214)
			tmp8 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(214)
		window->onClose->add(tmp8,null(),null());
		HX_STACK_LINE(215)
		Dynamic tmp9 = this->onWindowCreate_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(215)
		::lime::ui::Window tmp10 = window;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(215)
		Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(215)
		{
			HX_STACK_LINE(215)
			Dynamic f = tmp9;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(215)
			::lime::ui::Window a1 = tmp10;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",215,0xadca4c2c)
				{
					HX_STACK_LINE(215)
					::lime::ui::Window tmp12 = a1;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(215)
					f(tmp12).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(215)
			tmp11 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(215)
		window->onCreate->add(tmp11,null(),null());
		HX_STACK_LINE(216)
		Dynamic tmp12 = this->onWindowDeactivate_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(216)
		::lime::ui::Window tmp13 = window;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(216)
		Dynamic tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(216)
		{
			HX_STACK_LINE(216)
			Dynamic f = tmp12;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(216)
			::lime::ui::Window a1 = tmp13;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",216,0xadca4c2c)
				{
					HX_STACK_LINE(216)
					::lime::ui::Window tmp15 = a1;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(216)
					f(tmp15).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(216)
			tmp14 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(216)
		window->onDeactivate->add(tmp14,null(),null());
		HX_STACK_LINE(217)
		Dynamic tmp15 = this->onWindowDropFile_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(217)
		::lime::ui::Window tmp16 = window;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(217)
		Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(217)
		{
			HX_STACK_LINE(217)
			Dynamic f = tmp15;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(217)
			::lime::ui::Window a1 = tmp16;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(::String a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",217,0xadca4c2c)
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(217)
					::lime::ui::Window tmp18 = a1;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(217)
					::String tmp19 = a2;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(217)
					f(tmp18,tmp19).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(217)
			tmp17 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(217)
		window->onDropFile->add(tmp17,null(),null());
		HX_STACK_LINE(218)
		Dynamic tmp18 = this->onWindowEnter_dyn();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(218)
		::lime::ui::Window tmp19 = window;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(218)
		Dynamic tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(218)
		{
			HX_STACK_LINE(218)
			Dynamic f = tmp18;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(218)
			::lime::ui::Window a1 = tmp19;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",218,0xadca4c2c)
				{
					HX_STACK_LINE(218)
					::lime::ui::Window tmp21 = a1;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(218)
					f(tmp21).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(218)
			tmp20 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(218)
		window->onEnter->add(tmp20,null(),null());
		HX_STACK_LINE(219)
		Dynamic tmp21 = this->onWindowFocusIn_dyn();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(219)
		::lime::ui::Window tmp22 = window;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(219)
		Dynamic tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(219)
		{
			HX_STACK_LINE(219)
			Dynamic f = tmp21;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(219)
			::lime::ui::Window a1 = tmp22;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",219,0xadca4c2c)
				{
					HX_STACK_LINE(219)
					::lime::ui::Window tmp24 = a1;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(219)
					f(tmp24).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(219)
			tmp23 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(219)
		window->onFocusIn->add(tmp23,null(),null());
		HX_STACK_LINE(220)
		Dynamic tmp24 = this->onWindowFocusOut_dyn();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(220)
		::lime::ui::Window tmp25 = window;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(220)
		Dynamic tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(220)
		{
			HX_STACK_LINE(220)
			Dynamic f = tmp24;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(220)
			::lime::ui::Window a1 = tmp25;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",220,0xadca4c2c)
				{
					HX_STACK_LINE(220)
					::lime::ui::Window tmp27 = a1;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(220)
					f(tmp27).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(220)
			tmp26 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(220)
		window->onFocusOut->add(tmp26,null(),null());
		HX_STACK_LINE(221)
		Dynamic tmp27 = this->onWindowFullscreen_dyn();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(221)
		::lime::ui::Window tmp28 = window;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(221)
		Dynamic tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(221)
		{
			HX_STACK_LINE(221)
			Dynamic f = tmp27;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(221)
			::lime::ui::Window a1 = tmp28;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",221,0xadca4c2c)
				{
					HX_STACK_LINE(221)
					::lime::ui::Window tmp30 = a1;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(221)
					f(tmp30).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(221)
			tmp29 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(221)
		window->onFullscreen->add(tmp29,null(),null());
		HX_STACK_LINE(222)
		Dynamic tmp30 = this->onKeyDown_dyn();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(222)
		::lime::ui::Window tmp31 = window;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(222)
		Dynamic tmp32;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(222)
		{
			HX_STACK_LINE(222)
			Dynamic f = tmp30;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(222)
			::lime::ui::Window a1 = tmp31;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,int a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",222,0xadca4c2c)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(222)
					::lime::ui::Window tmp33 = a1;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(222)
					int tmp34 = a2;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(222)
					int tmp35 = a3;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(222)
					f(tmp33,tmp34,tmp35).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(222)
			tmp32 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(222)
		window->onKeyDown->add(tmp32,null(),null());
		HX_STACK_LINE(223)
		Dynamic tmp33 = this->onKeyUp_dyn();		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(223)
		::lime::ui::Window tmp34 = window;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(223)
		Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(223)
		{
			HX_STACK_LINE(223)
			Dynamic f = tmp33;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(223)
			::lime::ui::Window a1 = tmp34;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,int a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",223,0xadca4c2c)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(223)
					::lime::ui::Window tmp36 = a1;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(223)
					int tmp37 = a2;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(223)
					int tmp38 = a3;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(223)
					f(tmp36,tmp37,tmp38).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(223)
			tmp35 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(223)
		window->onKeyUp->add(tmp35,null(),null());
		HX_STACK_LINE(224)
		Dynamic tmp36 = this->onWindowLeave_dyn();		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(224)
		::lime::ui::Window tmp37 = window;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(224)
		Dynamic tmp38;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(224)
		{
			HX_STACK_LINE(224)
			Dynamic f = tmp36;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(224)
			::lime::ui::Window a1 = tmp37;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",224,0xadca4c2c)
				{
					HX_STACK_LINE(224)
					::lime::ui::Window tmp39 = a1;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(224)
					f(tmp39).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(224)
			tmp38 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(224)
		window->onLeave->add(tmp38,null(),null());
		HX_STACK_LINE(225)
		Dynamic tmp39 = this->onWindowMinimize_dyn();		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(225)
		::lime::ui::Window tmp40 = window;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(225)
		Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(225)
		{
			HX_STACK_LINE(225)
			Dynamic f = tmp39;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(225)
			::lime::ui::Window a1 = tmp40;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",225,0xadca4c2c)
				{
					HX_STACK_LINE(225)
					::lime::ui::Window tmp42 = a1;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(225)
					f(tmp42).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(225)
			tmp41 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(225)
		window->onMinimize->add(tmp41,null(),null());
		HX_STACK_LINE(226)
		Dynamic tmp42 = this->onMouseDown_dyn();		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(226)
		::lime::ui::Window tmp43 = window;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(226)
		Dynamic tmp44;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(226)
		{
			HX_STACK_LINE(226)
			Dynamic f = tmp42;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(226)
			::lime::ui::Window a1 = tmp43;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 3; }
			Void run(Float x,Float y,int a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",226,0xadca4c2c)
				HX_STACK_ARG(x,"x")
				HX_STACK_ARG(y,"y")
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(226)
					::lime::ui::Window tmp45 = a1;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(226)
					Float tmp46 = x;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(226)
					Float tmp47 = y;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(226)
					int tmp48 = a2;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(226)
					f(tmp45,tmp46,tmp47,tmp48).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC3((void))

			HX_STACK_LINE(226)
			tmp44 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(226)
		window->onMouseDown->add(tmp44,null(),null());
		HX_STACK_LINE(227)
		Dynamic tmp45 = this->onMouseMove_dyn();		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(227)
		::lime::ui::Window tmp46 = window;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(227)
		Dynamic tmp47;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(227)
		{
			HX_STACK_LINE(227)
			Dynamic f = tmp45;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(227)
			::lime::ui::Window a1 = tmp46;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(Float x,Float y){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",227,0xadca4c2c)
				HX_STACK_ARG(x,"x")
				HX_STACK_ARG(y,"y")
				{
					HX_STACK_LINE(227)
					::lime::ui::Window tmp48 = a1;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(227)
					Float tmp49 = x;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(227)
					Float tmp50 = y;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(227)
					f(tmp48,tmp49,tmp50).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(227)
			tmp47 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(227)
		window->onMouseMove->add(tmp47,null(),null());
		HX_STACK_LINE(228)
		Dynamic tmp48 = this->onMouseMoveRelative_dyn();		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(228)
		::lime::ui::Window tmp49 = window;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(228)
		Dynamic tmp50;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(228)
		{
			HX_STACK_LINE(228)
			Dynamic f = tmp48;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(228)
			::lime::ui::Window a1 = tmp49;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(Float x,Float y){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",228,0xadca4c2c)
				HX_STACK_ARG(x,"x")
				HX_STACK_ARG(y,"y")
				{
					HX_STACK_LINE(228)
					::lime::ui::Window tmp51 = a1;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(228)
					Float tmp52 = x;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(228)
					Float tmp53 = y;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(228)
					f(tmp51,tmp52,tmp53).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(228)
			tmp50 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(228)
		window->onMouseMoveRelative->add(tmp50,null(),null());
		HX_STACK_LINE(229)
		Dynamic tmp51 = this->onMouseUp_dyn();		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(229)
		::lime::ui::Window tmp52 = window;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(229)
		Dynamic tmp53;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(229)
		{
			HX_STACK_LINE(229)
			Dynamic f = tmp51;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(229)
			::lime::ui::Window a1 = tmp52;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 3; }
			Void run(Float x,Float y,int a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",229,0xadca4c2c)
				HX_STACK_ARG(x,"x")
				HX_STACK_ARG(y,"y")
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(229)
					::lime::ui::Window tmp54 = a1;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(229)
					Float tmp55 = x;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(229)
					Float tmp56 = y;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(229)
					int tmp57 = a2;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(229)
					f(tmp54,tmp55,tmp56,tmp57).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC3((void))

			HX_STACK_LINE(229)
			tmp53 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(229)
		window->onMouseUp->add(tmp53,null(),null());
		HX_STACK_LINE(230)
		Dynamic tmp54 = this->onMouseWheel_dyn();		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(230)
		::lime::ui::Window tmp55 = window;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(230)
		Dynamic tmp56;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(230)
		{
			HX_STACK_LINE(230)
			Dynamic f = tmp54;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(230)
			::lime::ui::Window a1 = tmp55;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(Float a2,Float a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",230,0xadca4c2c)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(230)
					::lime::ui::Window tmp57 = a1;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(230)
					Float tmp58 = a2;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(230)
					Float tmp59 = a3;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(230)
					f(tmp57,tmp58,tmp59).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(230)
			tmp56 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(230)
		window->onMouseWheel->add(tmp56,null(),null());
		HX_STACK_LINE(231)
		Dynamic tmp57 = this->onWindowMove_dyn();		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(231)
		::lime::ui::Window tmp58 = window;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(231)
		Dynamic tmp59;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(231)
		{
			HX_STACK_LINE(231)
			Dynamic f = tmp57;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(231)
			::lime::ui::Window a1 = tmp58;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(Float x,Float y){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",231,0xadca4c2c)
				HX_STACK_ARG(x,"x")
				HX_STACK_ARG(y,"y")
				{
					HX_STACK_LINE(231)
					::lime::ui::Window tmp60 = a1;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(231)
					Float tmp61 = x;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(231)
					Float tmp62 = y;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(231)
					f(tmp60,tmp61,tmp62).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(231)
			tmp59 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(231)
		window->onMove->add(tmp59,null(),null());
		HX_STACK_LINE(232)
		Dynamic tmp60 = this->onWindowResize_dyn();		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(232)
		::lime::ui::Window tmp61 = window;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(232)
		Dynamic tmp62;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(232)
		{
			HX_STACK_LINE(232)
			Dynamic f = tmp60;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(232)
			::lime::ui::Window a1 = tmp61;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,int a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",232,0xadca4c2c)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(232)
					::lime::ui::Window tmp63 = a1;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(232)
					int tmp64 = a2;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(232)
					int tmp65 = a3;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(232)
					f(tmp63,tmp64,tmp65).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(232)
			tmp62 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(232)
		window->onResize->add(tmp62,null(),null());
		HX_STACK_LINE(233)
		Dynamic tmp63 = this->onWindowRestore_dyn();		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(233)
		::lime::ui::Window tmp64 = window;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(233)
		Dynamic tmp65;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(233)
		{
			HX_STACK_LINE(233)
			Dynamic f = tmp63;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(233)
			::lime::ui::Window a1 = tmp64;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",233,0xadca4c2c)
				{
					HX_STACK_LINE(233)
					::lime::ui::Window tmp66 = a1;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(233)
					f(tmp66).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(233)
			tmp65 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(233)
		window->onRestore->add(tmp65,null(),null());
		HX_STACK_LINE(234)
		Dynamic tmp66 = this->onTextEdit_dyn();		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(234)
		::lime::ui::Window tmp67 = window;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(234)
		Dynamic tmp68;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(234)
		{
			HX_STACK_LINE(234)
			Dynamic f = tmp66;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(234)
			::lime::ui::Window a1 = tmp67;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 3; }
			Void run(::String a2,int a3,int a4){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",234,0xadca4c2c)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				HX_STACK_ARG(a4,"a4")
				{
					HX_STACK_LINE(234)
					::lime::ui::Window tmp69 = a1;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(234)
					::String tmp70 = a2;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(234)
					int tmp71 = a3;		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(234)
					int tmp72 = a4;		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(234)
					f(tmp69,tmp70,tmp71,tmp72).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC3((void))

			HX_STACK_LINE(234)
			tmp68 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(234)
		window->onTextEdit->add(tmp68,null(),null());
		HX_STACK_LINE(235)
		Dynamic tmp69 = this->onTextInput_dyn();		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(235)
		::lime::ui::Window tmp70 = window;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(235)
		Dynamic tmp71;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(235)
		{
			HX_STACK_LINE(235)
			Dynamic f = tmp69;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(235)
			::lime::ui::Window a1 = tmp70;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Window,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(::String a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",235,0xadca4c2c)
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(235)
					::lime::ui::Window tmp72 = a1;		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(235)
					::String tmp73 = a2;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(235)
					f(tmp72,tmp73).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(235)
			tmp71 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(235)
		window->onTextInput->add(tmp71,null(),null());
		HX_STACK_LINE(237)
		bool tmp72 = (window->id > (int)-1);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(237)
		if ((tmp72)){
			HX_STACK_LINE(239)
			::lime::ui::Window tmp73 = window;		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(239)
			this->onWindowCreate(tmp73);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,addWindow,(void))

Void Stage_obj::registerModule( ::lime::app::Application application){
{
		HX_STACK_FRAME("openfl.display.Stage","registerModule",0x13bf3089,"openfl.display.Stage.registerModule","openfl/display/Stage.hx",246,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(application,"application")
		HX_STACK_LINE(248)
		Dynamic tmp = this->onModuleExit_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(248)
		application->onExit->add(tmp,false,(int)0);
		HX_STACK_LINE(249)
		Dynamic tmp1 = this->update_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(249)
		application->onUpdate->add(tmp1,null(),null());
		HX_STACK_LINE(251)
		::haxe::ds::IntMap tmp2 = ::lime::ui::Gamepad_obj::devices;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(251)
		Dynamic tmp3 = tmp2->iterator();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(251)
		for(::cpp::FastIterator_obj< ::lime::ui::Gamepad > *__it = ::cpp::CreateFastIterator< ::lime::ui::Gamepad >(tmp3);  __it->hasNext(); ){
			::lime::ui::Gamepad gamepad = __it->next();
			{
				HX_STACK_LINE(253)
				::lime::ui::Gamepad tmp4 = gamepad;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(253)
				this->__onGamepadConnect(tmp4);
			}
;
		}
		HX_STACK_LINE(257)
		::lime::app::_Event_lime_ui_Gamepad_Void tmp4 = ::lime::ui::Gamepad_obj::onConnect;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(257)
		Dynamic tmp5 = this->__onGamepadConnect_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(257)
		tmp4->add(tmp5,null(),null());
		HX_STACK_LINE(258)
		::lime::app::_Event_lime_ui_Touch_Void tmp6 = ::lime::ui::Touch_obj::onStart;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(258)
		Dynamic tmp7 = this->onTouchStart_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(258)
		tmp6->add(tmp7,null(),null());
		HX_STACK_LINE(259)
		::lime::app::_Event_lime_ui_Touch_Void tmp8 = ::lime::ui::Touch_obj::onMove;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(259)
		Dynamic tmp9 = this->onTouchMove_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(259)
		tmp8->add(tmp9,null(),null());
		HX_STACK_LINE(260)
		::lime::app::_Event_lime_ui_Touch_Void tmp10 = ::lime::ui::Touch_obj::onEnd;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(260)
		Dynamic tmp11 = this->onTouchEnd_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(260)
		tmp10->add(tmp11,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,registerModule,(void))

Void Stage_obj::removeRenderer( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("openfl.display.Stage","removeRenderer",0x09dc76c1,"openfl.display.Stage.removeRenderer","openfl/display/Stage.hx",265,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,removeRenderer,(void))

Void Stage_obj::removeWindow( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","removeWindow",0x957549ee,"openfl.display.Stage.removeWindow","openfl/display/Stage.hx",266,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,removeWindow,(void))

Void Stage_obj::setPreloader( ::lime::app::Preloader preloader){
{
		HX_STACK_FRAME("openfl.display.Stage","setPreloader",0x7a86bf0e,"openfl.display.Stage.setPreloader","openfl/display/Stage.hx",267,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(preloader,"preloader")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,setPreloader,(void))

Void Stage_obj::unregisterModule( ::lime::app::Application application){
{
		HX_STACK_FRAME("openfl.display.Stage","unregisterModule",0x783b9b22,"openfl.display.Stage.unregisterModule","openfl/display/Stage.hx",270,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(application,"application")
		HX_STACK_LINE(272)
		Dynamic tmp = this->onModuleExit_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(272)
		application->onExit->remove(tmp);
		HX_STACK_LINE(273)
		Dynamic tmp1 = this->update_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(273)
		application->onUpdate->remove(tmp1);
		HX_STACK_LINE(275)
		::lime::app::_Event_lime_ui_Gamepad_Void tmp2 = ::lime::ui::Gamepad_obj::onConnect;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(275)
		Dynamic tmp3 = this->__onGamepadConnect_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(275)
		tmp2->remove(tmp3);
		HX_STACK_LINE(276)
		::lime::app::_Event_lime_ui_Touch_Void tmp4 = ::lime::ui::Touch_obj::onStart;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(276)
		Dynamic tmp5 = this->onTouchStart_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(276)
		tmp4->remove(tmp5);
		HX_STACK_LINE(277)
		::lime::app::_Event_lime_ui_Touch_Void tmp6 = ::lime::ui::Touch_obj::onMove;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(277)
		Dynamic tmp7 = this->onTouchMove_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(277)
		tmp6->remove(tmp7);
		HX_STACK_LINE(278)
		::lime::app::_Event_lime_ui_Touch_Void tmp8 = ::lime::ui::Touch_obj::onEnd;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(278)
		Dynamic tmp9 = this->onTouchEnd_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(278)
		tmp8->remove(tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,unregisterModule,(void))

::openfl::geom::Point Stage_obj::globalToLocal( ::openfl::geom::Point pos){
	HX_STACK_FRAME("openfl.display.Stage","globalToLocal",0xdbaa7af3,"openfl.display.Stage.globalToLocal","openfl/display/Stage.hx",283,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(285)
	::openfl::geom::Point tmp = pos->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(285)
	return tmp;
}


Void Stage_obj::invalidate( ){
{
		HX_STACK_FRAME("openfl.display.Stage","invalidate",0x70397995,"openfl.display.Stage.invalidate","openfl/display/Stage.hx",292,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(292)
		this->__invalidated = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,invalidate,(void))

::openfl::geom::Point Stage_obj::localToGlobal( ::openfl::geom::Point pos){
	HX_STACK_FRAME("openfl.display.Stage","localToGlobal",0xb7e76def,"openfl.display.Stage.localToGlobal","openfl/display/Stage.hx",297,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(299)
	::openfl::geom::Point tmp = pos->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(299)
	return tmp;
}


Void Stage_obj::onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value){
{
		HX_STACK_FRAME("openfl.display.Stage","onGamepadAxisMove",0xc5912eda,"openfl.display.Stage.onGamepadAxisMove","openfl/display/Stage.hx",304,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(306)
		::lime::ui::Gamepad tmp = gamepad;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(306)
		int tmp1 = axis;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(306)
		Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(306)
		::openfl::ui::GameInput_obj::__onGamepadAxisMove(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onGamepadAxisMove,(void))

Void Stage_obj::onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("openfl.display.Stage","onGamepadButtonDown",0xf94bb7fc,"openfl.display.Stage.onGamepadButtonDown","openfl/display/Stage.hx",311,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(313)
		::lime::ui::Gamepad tmp = gamepad;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(313)
		int tmp1 = button;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(313)
		::openfl::ui::GameInput_obj::__onGamepadButtonDown(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onGamepadButtonDown,(void))

Void Stage_obj::onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("openfl.display.Stage","onGamepadButtonUp",0x91cf2b75,"openfl.display.Stage.onGamepadButtonUp","openfl/display/Stage.hx",318,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(320)
		::lime::ui::Gamepad tmp = gamepad;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(320)
		int tmp1 = button;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(320)
		::openfl::ui::GameInput_obj::__onGamepadButtonUp(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onGamepadButtonUp,(void))

Void Stage_obj::onGamepadConnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("openfl.display.Stage","onGamepadConnect",0xd0dcc662,"openfl.display.Stage.onGamepadConnect","openfl/display/Stage.hx",325,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_LINE(327)
		::lime::ui::Gamepad tmp = gamepad;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(327)
		::openfl::ui::GameInput_obj::__onGamepadConnect(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onGamepadConnect,(void))

Void Stage_obj::onGamepadDisconnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("openfl.display.Stage","onGamepadDisconnect",0xb62bb4e4,"openfl.display.Stage.onGamepadDisconnect","openfl/display/Stage.hx",332,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_LINE(334)
		::lime::ui::Gamepad tmp = gamepad;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(334)
		::openfl::ui::GameInput_obj::__onGamepadDisconnect(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onGamepadDisconnect,(void))

Void Stage_obj::onJoystickAxisMove( ::lime::ui::Joystick joystick,int axis,Float value){
{
		HX_STACK_FRAME("openfl.display.Stage","onJoystickAxisMove",0x5fc8fe87,"openfl.display.Stage.onJoystickAxisMove","openfl/display/Stage.hx",339,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onJoystickAxisMove,(void))

Void Stage_obj::onJoystickButtonDown( ::lime::ui::Joystick joystick,int button){
{
		HX_STACK_FRAME("openfl.display.Stage","onJoystickButtonDown",0x6cd88ce9,"openfl.display.Stage.onJoystickButtonDown","openfl/display/Stage.hx",346,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
		HX_STACK_ARG(button,"button")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onJoystickButtonDown,(void))

Void Stage_obj::onJoystickButtonUp( ::lime::ui::Joystick joystick,int button){
{
		HX_STACK_FRAME("openfl.display.Stage","onJoystickButtonUp",0x2c06fb22,"openfl.display.Stage.onJoystickButtonUp","openfl/display/Stage.hx",353,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
		HX_STACK_ARG(button,"button")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onJoystickButtonUp,(void))

Void Stage_obj::onJoystickConnect( ::lime::ui::Joystick joystick){
{
		HX_STACK_FRAME("openfl.display.Stage","onJoystickConnect",0x9b994b55,"openfl.display.Stage.onJoystickConnect","openfl/display/Stage.hx",360,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onJoystickConnect,(void))

Void Stage_obj::onJoystickDisconnect( ::lime::ui::Joystick joystick){
{
		HX_STACK_FRAME("openfl.display.Stage","onJoystickDisconnect",0x29b889d1,"openfl.display.Stage.onJoystickDisconnect","openfl/display/Stage.hx",367,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onJoystickDisconnect,(void))

Void Stage_obj::onJoystickHatMove( ::lime::ui::Joystick joystick,int hat,int position){
{
		HX_STACK_FRAME("openfl.display.Stage","onJoystickHatMove",0x3124a777,"openfl.display.Stage.onJoystickHatMove","openfl/display/Stage.hx",374,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
		HX_STACK_ARG(hat,"hat")
		HX_STACK_ARG(position,"position")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onJoystickHatMove,(void))

Void Stage_obj::onJoystickTrackballMove( ::lime::ui::Joystick joystick,int trackball,Float value){
{
		HX_STACK_FRAME("openfl.display.Stage","onJoystickTrackballMove",0x38b5dfe6,"openfl.display.Stage.onJoystickTrackballMove","openfl/display/Stage.hx",381,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
		HX_STACK_ARG(trackball,"trackball")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onJoystickTrackballMove,(void))

Void Stage_obj::onKeyDown( ::lime::ui::Window window,int keyCode,int modifier){
{
		HX_STACK_FRAME("openfl.display.Stage","onKeyDown",0x4ccfc368,"openfl.display.Stage.onKeyDown","openfl/display/Stage.hx",388,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(390)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(390)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(390)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(390)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(390)
		if ((tmp2)){
			HX_STACK_LINE(390)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(390)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(390)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(390)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(390)
			tmp3 = true;
		}
		HX_STACK_LINE(390)
		if ((tmp3)){
			HX_STACK_LINE(390)
			return null();
		}
		HX_STACK_LINE(392)
		int tmp4 = keyCode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(392)
		int tmp5 = modifier;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(392)
		this->__onKey(HX_HCSTRING("keyDown","\xa1","\x69","\x47","\x9c"),tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onKeyDown,(void))

Void Stage_obj::onKeyUp( ::lime::ui::Window window,int keyCode,int modifier){
{
		HX_STACK_FRAME("openfl.display.Stage","onKeyUp",0x5bcb43e1,"openfl.display.Stage.onKeyUp","openfl/display/Stage.hx",397,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(399)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(399)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(399)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(399)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(399)
		if ((tmp2)){
			HX_STACK_LINE(399)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(399)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(399)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(399)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(399)
			tmp3 = true;
		}
		HX_STACK_LINE(399)
		if ((tmp3)){
			HX_STACK_LINE(399)
			return null();
		}
		HX_STACK_LINE(401)
		int tmp4 = keyCode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(401)
		int tmp5 = modifier;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(401)
		this->__onKey(HX_HCSTRING("keyUp","\xda","\xb9","\xfe","\xde"),tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onKeyUp,(void))

Void Stage_obj::onModuleExit( int code){
{
		HX_STACK_FRAME("openfl.display.Stage","onModuleExit",0xdf5eda83,"openfl.display.Stage.onModuleExit","openfl/display/Stage.hx",406,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(code,"code")
		HX_STACK_LINE(408)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(408)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(408)
		if ((tmp1)){
			HX_STACK_LINE(410)
			::openfl::events::Event tmp2 = ::openfl::events::Event_obj::__new(HX_HCSTRING("deactivate","\x34","\x5c","\x01","\x3c"),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(410)
			this->__broadcastEvent(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onModuleExit,(void))

Void Stage_obj::onMouseDown( ::lime::ui::Window window,Float x,Float y,int button){
{
		HX_STACK_FRAME("openfl.display.Stage","onMouseDown",0x156a4aae,"openfl.display.Stage.onMouseDown","openfl/display/Stage.hx",417,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(419)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(419)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(419)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(419)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(419)
		if ((tmp2)){
			HX_STACK_LINE(419)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(419)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(419)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(419)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(419)
			tmp3 = true;
		}
		HX_STACK_LINE(419)
		if ((tmp3)){
			HX_STACK_LINE(419)
			return null();
		}
		HX_STACK_LINE(421)
		int tmp4 = button;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(421)
		::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(421)
		switch( (int)(tmp4)){
			case (int)1: {
				HX_STACK_LINE(423)
				tmp5 = HX_HCSTRING("middleMouseDown","\x12","\x2b","\xfe","\x01");
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(424)
				tmp5 = HX_HCSTRING("rightMouseDown","\xab","\x29","\xd7","\xcd");
			}
			;break;
			default: {
				HX_STACK_LINE(425)
				tmp5 = HX_HCSTRING("mouseDown","\x27","\xb1","\xc2","\xee");
			}
		}
		HX_STACK_LINE(421)
		::String type = tmp5;		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(429)
		::String tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(429)
		Float tmp7 = (x * window->__scale);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(429)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(429)
		Float tmp9 = (y * window->__scale);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(429)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(429)
		int tmp11 = button;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(429)
		this->__onMouse(tmp6,tmp8,tmp10,tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Stage_obj,onMouseDown,(void))

Void Stage_obj::onMouseMove( ::lime::ui::Window window,Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.Stage","onMouseMove",0x1b5d355d,"openfl.display.Stage.onMouseMove","openfl/display/Stage.hx",434,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(436)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(436)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(436)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(436)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(436)
		if ((tmp2)){
			HX_STACK_LINE(436)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(436)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(436)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(436)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(436)
			tmp3 = true;
		}
		HX_STACK_LINE(436)
		if ((tmp3)){
			HX_STACK_LINE(436)
			return null();
		}
		HX_STACK_LINE(438)
		Float tmp4 = (x * window->__scale);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(438)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(438)
		Float tmp6 = (y * window->__scale);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(438)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(438)
		this->__onMouse(HX_HCSTRING("mouseMove","\xd6","\x9b","\xb5","\xf4"),tmp5,tmp7,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onMouseMove,(void))

Void Stage_obj::onMouseMoveRelative( ::lime::ui::Window window,Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.Stage","onMouseMoveRelative",0xec53d349,"openfl.display.Stage.onMouseMoveRelative","openfl/display/Stage.hx",443,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onMouseMoveRelative,(void))

Void Stage_obj::onMouseUp( ::lime::ui::Window window,Float x,Float y,int button){
{
		HX_STACK_FRAME("openfl.display.Stage","onMouseUp",0x70fb4da7,"openfl.display.Stage.onMouseUp","openfl/display/Stage.hx",450,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(452)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(452)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(452)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(452)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(452)
		if ((tmp2)){
			HX_STACK_LINE(452)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(452)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(452)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(452)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(452)
			tmp3 = true;
		}
		HX_STACK_LINE(452)
		if ((tmp3)){
			HX_STACK_LINE(452)
			return null();
		}
		HX_STACK_LINE(454)
		int tmp4 = button;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(454)
		::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(454)
		switch( (int)(tmp4)){
			case (int)1: {
				HX_STACK_LINE(456)
				tmp5 = HX_HCSTRING("middleMouseUp","\x0b","\x8d","\xf5","\x3a");
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(457)
				tmp5 = HX_HCSTRING("rightMouseUp","\x64","\x83","\x21","\xab");
			}
			;break;
			default: {
				HX_STACK_LINE(458)
				tmp5 = HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0");
			}
		}
		HX_STACK_LINE(454)
		::String type = tmp5;		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(462)
		::String tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(462)
		Float tmp7 = (x * window->__scale);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(462)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(462)
		Float tmp9 = (y * window->__scale);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(462)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(462)
		int tmp11 = button;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(462)
		this->__onMouse(tmp6,tmp8,tmp10,tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Stage_obj,onMouseUp,(void))

Void Stage_obj::onMouseWheel( ::lime::ui::Window window,Float deltaX,Float deltaY){
{
		HX_STACK_FRAME("openfl.display.Stage","onMouseWheel",0x9385e4cf,"openfl.display.Stage.onMouseWheel","openfl/display/Stage.hx",467,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(deltaX,"deltaX")
		HX_STACK_ARG(deltaY,"deltaY")
		HX_STACK_LINE(469)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(469)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(469)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(469)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(469)
		if ((tmp2)){
			HX_STACK_LINE(469)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(469)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(469)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(469)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(469)
			tmp3 = true;
		}
		HX_STACK_LINE(469)
		if ((tmp3)){
			HX_STACK_LINE(469)
			return null();
		}
		HX_STACK_LINE(471)
		Float tmp4 = (deltaX * window->__scale);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(471)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(471)
		Float tmp6 = (deltaY * window->__scale);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(471)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(471)
		this->__onMouseWheel(tmp5,tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onMouseWheel,(void))

Void Stage_obj::onPreloadComplete( ){
{
		HX_STACK_FRAME("openfl.display.Stage","onPreloadComplete",0xfd196e69,"openfl.display.Stage.onPreloadComplete","openfl/display/Stage.hx",476,0xadca4c2c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,onPreloadComplete,(void))

Void Stage_obj::onPreloadProgress( int loaded,int total){
{
		HX_STACK_FRAME("openfl.display.Stage","onPreloadProgress",0x037c655d,"openfl.display.Stage.onPreloadProgress","openfl/display/Stage.hx",483,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(loaded,"loaded")
		HX_STACK_ARG(total,"total")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onPreloadProgress,(void))

Void Stage_obj::onRenderContextLost( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("openfl.display.Stage","onRenderContextLost",0xf63c6844,"openfl.display.Stage.onRenderContextLost","openfl/display/Stage.hx",490,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onRenderContextLost,(void))

Void Stage_obj::onRenderContextRestored( ::lime::graphics::Renderer renderer,::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("openfl.display.Stage","onRenderContextRestored",0x98dd6bb6,"openfl.display.Stage.onRenderContextRestored","openfl/display/Stage.hx",497,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
		HX_STACK_ARG(context,"context")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onRenderContextRestored,(void))

Void Stage_obj::onTextEdit( ::lime::ui::Window window,::String text,int start,int length){
{
		HX_STACK_FRAME("openfl.display.Stage","onTextEdit",0x0cd051b0,"openfl.display.Stage.onTextEdit","openfl/display/Stage.hx",504,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(length,"length")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Stage_obj,onTextEdit,(void))

Void Stage_obj::onTextInput( ::lime::ui::Window window,::String text){
{
		HX_STACK_FRAME("openfl.display.Stage","onTextInput",0x7db2eda4,"openfl.display.Stage.onTextInput","openfl/display/Stage.hx",511,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(text,"text")
		HX_STACK_LINE(513)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(513)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(513)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(513)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(513)
		if ((tmp2)){
			HX_STACK_LINE(513)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(513)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(513)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(513)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(513)
			tmp3 = true;
		}
		HX_STACK_LINE(513)
		if ((tmp3)){
			HX_STACK_LINE(513)
			return null();
		}
		HX_STACK_LINE(515)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(517)
		::openfl::display::InteractiveObject tmp4 = this->__focus;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(517)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(517)
		if ((tmp5)){
			HX_STACK_LINE(519)
			this->__getInteractive(stack);
		}
		else{
			HX_STACK_LINE(523)
			::openfl::display::InteractiveObject tmp6 = this->__focus;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(523)
			tmp6->__getInteractive(stack);
		}
		HX_STACK_LINE(527)
		::openfl::events::TextEvent tmp6 = ::openfl::events::TextEvent_obj::__new(HX_HCSTRING("textInput","\x1d","\x54","\x0b","\x57"),true,false,text);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(527)
		::openfl::events::TextEvent event = tmp6;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(528)
		bool tmp7 = (stack->length > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(528)
		if ((tmp7)){
			HX_STACK_LINE(530)
			stack->reverse();
			HX_STACK_LINE(531)
			::openfl::events::TextEvent tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(531)
			this->__fireEvent(tmp8,stack);
		}
		else{
			HX_STACK_LINE(535)
			::openfl::events::TextEvent tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(535)
			this->__dispatchEvent(tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onTextInput,(void))

Void Stage_obj::onTouchMove( ::lime::ui::Touch touch){
{
		HX_STACK_FRAME("openfl.display.Stage","onTouchMove",0x34750bf7,"openfl.display.Stage.onTouchMove","openfl/display/Stage.hx",542,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(touch,"touch")
		HX_STACK_LINE(544)
		::lime::ui::Touch tmp = touch;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(544)
		this->__onTouch(HX_HCSTRING("touchMove","\x70","\x72","\xcd","\x0d"),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onTouchMove,(void))

Void Stage_obj::onTouchEnd( ::lime::ui::Touch touch){
{
		HX_STACK_FRAME("openfl.display.Stage","onTouchEnd",0xc6cff9b5,"openfl.display.Stage.onTouchEnd","openfl/display/Stage.hx",549,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(touch,"touch")
		HX_STACK_LINE(551)
		::lime::ui::Touch tmp = this->__primaryTouch;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(551)
		::lime::ui::Touch tmp1 = touch;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(551)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(551)
		if ((tmp2)){
			HX_STACK_LINE(553)
			this->__primaryTouch = null();
		}
		HX_STACK_LINE(557)
		::lime::ui::Touch tmp3 = touch;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(557)
		this->__onTouch(HX_HCSTRING("touchEnd","\x5c","\xc5","\x09","\x00"),tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onTouchEnd,(void))

Void Stage_obj::onTouchStart( ::lime::ui::Touch touch){
{
		HX_STACK_FRAME("openfl.display.Stage","onTouchStart",0x299b14bc,"openfl.display.Stage.onTouchStart","openfl/display/Stage.hx",562,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(touch,"touch")
		HX_STACK_LINE(564)
		::lime::ui::Touch tmp = this->__primaryTouch;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(564)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(564)
		if ((tmp1)){
			HX_STACK_LINE(566)
			this->__primaryTouch = touch;
		}
		HX_STACK_LINE(570)
		::lime::ui::Touch tmp2 = touch;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(570)
		this->__onTouch(HX_HCSTRING("touchBegin","\xea","\xcd","\xe6","\xa9"),tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onTouchStart,(void))

Void Stage_obj::onWindowActivate( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowActivate",0xcfe358dc,"openfl.display.Stage.onWindowActivate","openfl/display/Stage.hx",575,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(577)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(577)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(577)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(577)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(577)
		if ((tmp2)){
			HX_STACK_LINE(577)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(577)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(577)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(577)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(577)
			tmp3 = true;
		}
		HX_STACK_LINE(577)
		if ((tmp3)){
			HX_STACK_LINE(577)
			return null();
		}
		HX_STACK_LINE(579)
		::openfl::events::Event tmp4 = ::openfl::events::Event_obj::__new(HX_HCSTRING("activate","\xb3","\x1b","\xac","\xe5"),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(579)
		this->__broadcastEvent(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowActivate,(void))

Void Stage_obj::onWindowClose( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowClose",0x0c1bf6ef,"openfl.display.Stage.onWindowClose","openfl/display/Stage.hx",584,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(586)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(586)
		::lime::ui::Window tmp1 = window;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(586)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(586)
		if ((tmp2)){
			HX_STACK_LINE(588)
			this->window = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowClose,(void))

Void Stage_obj::onWindowCreate( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowCreate",0xfa19d7e5,"openfl.display.Stage.onWindowCreate","openfl/display/Stage.hx",595,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(597)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(597)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(597)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(597)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(597)
		if ((tmp2)){
			HX_STACK_LINE(597)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(597)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(597)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(597)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(597)
			tmp3 = true;
		}
		HX_STACK_LINE(597)
		if ((tmp3)){
			HX_STACK_LINE(597)
			return null();
		}
		HX_STACK_LINE(599)
		bool tmp4 = (window->renderer != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(599)
		if ((tmp4)){
			HX_STACK_LINE(601)
			{
				HX_STACK_LINE(601)
				::lime::graphics::RenderContext tmp5 = window->renderer->context;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(601)
				::lime::graphics::RenderContext _g = tmp5;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(601)
				switch( (int)(_g->__Index())){
					case (int)0: {
						HX_STACK_LINE(601)
						::lime::graphics::GLRenderContext tmp6 = (::lime::graphics::RenderContext(_g))->__Param(0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(601)
						::lime::graphics::GLRenderContext gl = tmp6;		HX_STACK_VAR(gl,"gl");
						HX_STACK_LINE(603)
						{
							HX_STACK_LINE(606)
							::openfl::_internal::renderer::opengl::GLRenderer tmp7 = ::openfl::_internal::renderer::opengl::GLRenderer_obj::__new(hx::ObjectPtr<OBJ_>(this),gl);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(606)
							this->__renderer = tmp7;
						}
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(601)
						::lime::graphics::CanvasRenderContext tmp6 = (::lime::graphics::RenderContext(_g))->__Param(0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(601)
						::lime::graphics::CanvasRenderContext context = tmp6;		HX_STACK_VAR(context,"context");
						HX_STACK_LINE(609)
						{
							HX_STACK_LINE(611)
							::openfl::_internal::renderer::canvas::CanvasRenderer tmp7 = ::openfl::_internal::renderer::canvas::CanvasRenderer_obj::__new(hx::ObjectPtr<OBJ_>(this),context);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(611)
							this->__renderer = tmp7;
						}
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(601)
						::lime::graphics::DOMRenderContext tmp6 = (::lime::graphics::RenderContext(_g))->__Param(0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(601)
						::lime::graphics::DOMRenderContext element = tmp6;		HX_STACK_VAR(element,"element");
						HX_STACK_LINE(613)
						{
							HX_STACK_LINE(615)
							::openfl::_internal::renderer::dom::DOMRenderer tmp7 = ::openfl::_internal::renderer::dom::DOMRenderer_obj::__new(hx::ObjectPtr<OBJ_>(this),element);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(615)
							this->__renderer = tmp7;
						}
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(601)
						::lime::graphics::cairo::Cairo tmp6 = (::lime::graphics::RenderContext(_g))->__Param(0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(601)
						::lime::graphics::cairo::Cairo cairo = tmp6;		HX_STACK_VAR(cairo,"cairo");
						HX_STACK_LINE(617)
						{
							HX_STACK_LINE(620)
							::openfl::_internal::renderer::cairo::CairoRenderer tmp7 = ::openfl::_internal::renderer::cairo::CairoRenderer_obj::__new(hx::ObjectPtr<OBJ_>(this),cairo);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(620)
							this->__renderer = tmp7;
						}
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(601)
						::lime::graphics::ConsoleRenderContext tmp6 = (::lime::graphics::RenderContext(_g))->__Param(0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(601)
						::lime::graphics::ConsoleRenderContext ctx = tmp6;		HX_STACK_VAR(ctx,"ctx");
						HX_STACK_LINE(623)
						{
							HX_STACK_LINE(626)
							::openfl::_internal::renderer::console::ConsoleRenderer tmp7 = ::openfl::_internal::renderer::console::ConsoleRenderer_obj::__new(hx::ObjectPtr<OBJ_>(this),ctx);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(626)
							this->__renderer = tmp7;
						}
					}
					;break;
					default: {
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowCreate,(void))

Void Stage_obj::onWindowDeactivate( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowDeactivate",0x9060f59d,"openfl.display.Stage.onWindowDeactivate","openfl/display/Stage.hx",638,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(640)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(640)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(640)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(640)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(640)
		if ((tmp2)){
			HX_STACK_LINE(640)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(640)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(640)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(640)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(640)
			tmp3 = true;
		}
		HX_STACK_LINE(640)
		if ((tmp3)){
			HX_STACK_LINE(640)
			return null();
		}
		HX_STACK_LINE(642)
		this->__primaryTouch = null();
		HX_STACK_LINE(643)
		::openfl::events::Event tmp4 = ::openfl::events::Event_obj::__new(HX_HCSTRING("deactivate","\x34","\x5c","\x01","\x3c"),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(643)
		this->__broadcastEvent(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowDeactivate,(void))

Void Stage_obj::onWindowDropFile( ::lime::ui::Window window,::String file){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowDropFile",0xd38db374,"openfl.display.Stage.onWindowDropFile","openfl/display/Stage.hx",648,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(file,"file")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onWindowDropFile,(void))

Void Stage_obj::onWindowEnter( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowEnter",0x343f4c4f,"openfl.display.Stage.onWindowEnter","openfl/display/Stage.hx",655,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowEnter,(void))

Void Stage_obj::onWindowFocusIn( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowFocusIn",0x0c9ba0d4,"openfl.display.Stage.onWindowFocusIn","openfl/display/Stage.hx",662,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(664)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(664)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(664)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(664)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(664)
		if ((tmp2)){
			HX_STACK_LINE(664)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(664)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(664)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(664)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(664)
			tmp3 = true;
		}
		HX_STACK_LINE(664)
		if ((tmp3)){
			HX_STACK_LINE(664)
			return null();
		}
		HX_STACK_LINE(666)
		::openfl::display::InteractiveObject tmp4 = this->__cacheFocus;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(666)
		this->set_focus(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowFocusIn,(void))

Void Stage_obj::onWindowFocusOut( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowFocusOut",0xfb95acbf,"openfl.display.Stage.onWindowFocusOut","openfl/display/Stage.hx",671,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(673)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(673)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(673)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(673)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(673)
		if ((tmp2)){
			HX_STACK_LINE(673)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(673)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(673)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(673)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(673)
			tmp3 = true;
		}
		HX_STACK_LINE(673)
		if ((tmp3)){
			HX_STACK_LINE(673)
			return null();
		}
		HX_STACK_LINE(675)
		::openfl::display::InteractiveObject tmp4 = this->get_focus();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(675)
		::openfl::display::InteractiveObject currentFocus = tmp4;		HX_STACK_VAR(currentFocus,"currentFocus");
		HX_STACK_LINE(676)
		this->set_focus(null());
		HX_STACK_LINE(677)
		this->__cacheFocus = currentFocus;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowFocusOut,(void))

Void Stage_obj::onWindowFullscreen( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowFullscreen",0x4e13d3a4,"openfl.display.Stage.onWindowFullscreen","openfl/display/Stage.hx",682,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(684)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(684)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(684)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(684)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(684)
		if ((tmp2)){
			HX_STACK_LINE(684)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(684)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(684)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(684)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(684)
			tmp3 = true;
		}
		HX_STACK_LINE(684)
		if ((tmp3)){
			HX_STACK_LINE(684)
			return null();
		}
		HX_STACK_LINE(686)
		this->__resize();
		HX_STACK_LINE(688)
		Dynamic tmp4 = this->__displayState;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(688)
		bool tmp5 = (tmp4 == ((Dynamic)((int)2)));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(688)
		if ((tmp5)){
			HX_STACK_LINE(690)
			this->__displayState = ((Dynamic)((int)1));
			HX_STACK_LINE(691)
			::openfl::events::FullScreenEvent tmp6 = ::openfl::events::FullScreenEvent_obj::__new(HX_HCSTRING("fullScreen","\x5b","\xae","\x48","\x2e"),false,false,false,true);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(691)
			this->__dispatchEvent(tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowFullscreen,(void))

Void Stage_obj::onWindowLeave( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowLeave",0x360c142e,"openfl.display.Stage.onWindowLeave","openfl/display/Stage.hx",698,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(700)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(700)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(700)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(700)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(700)
		if ((tmp2)){
			HX_STACK_LINE(700)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(700)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(700)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(700)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(700)
			tmp3 = true;
		}
		HX_STACK_LINE(700)
		if ((tmp3)){
			HX_STACK_LINE(700)
			return null();
		}
		HX_STACK_LINE(702)
		::openfl::events::Event tmp4 = ::openfl::events::Event_obj::__new(HX_HCSTRING("mouseLeave","\x92","\x28","\x20","\x90"),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(702)
		this->__dispatchEvent(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowLeave,(void))

Void Stage_obj::onWindowMinimize( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowMinimize",0x0bb07c47,"openfl.display.Stage.onWindowMinimize","openfl/display/Stage.hx",707,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowMinimize,(void))

Void Stage_obj::onWindowMove( ::lime::ui::Window window,Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowMove",0x7f3617ba,"openfl.display.Stage.onWindowMove","openfl/display/Stage.hx",714,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onWindowMove,(void))

Void Stage_obj::onWindowResize( ::lime::ui::Window window,int width,int height){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowResize",0x8685cadd,"openfl.display.Stage.onWindowResize","openfl/display/Stage.hx",721,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(723)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(723)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(723)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(723)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(723)
		if ((tmp2)){
			HX_STACK_LINE(723)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(723)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(723)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(723)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(723)
			tmp3 = true;
		}
		HX_STACK_LINE(723)
		if ((tmp3)){
			HX_STACK_LINE(723)
			return null();
		}
		HX_STACK_LINE(725)
		this->__resize();
		HX_STACK_LINE(727)
		Dynamic tmp4 = this->__displayState;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(727)
		bool tmp5 = (tmp4 != ((Dynamic)((int)2)));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(727)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(727)
		if ((tmp5)){
			HX_STACK_LINE(727)
			bool tmp7 = window->__fullscreen;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(727)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(727)
			tmp6 = !(tmp8);
		}
		else{
			HX_STACK_LINE(727)
			tmp6 = false;
		}
		HX_STACK_LINE(727)
		if ((tmp6)){
			HX_STACK_LINE(729)
			this->__displayState = ((Dynamic)((int)2));
			HX_STACK_LINE(730)
			::openfl::events::FullScreenEvent tmp7 = ::openfl::events::FullScreenEvent_obj::__new(HX_HCSTRING("fullScreen","\x5b","\xae","\x48","\x2e"),false,false,true,true);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(730)
			this->__dispatchEvent(tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onWindowResize,(void))

Void Stage_obj::onWindowRestore( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowRestore",0x35c8c245,"openfl.display.Stage.onWindowRestore","openfl/display/Stage.hx",737,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowRestore,(void))

Void Stage_obj::render( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("openfl.display.Stage","render",0x050c3670,"openfl.display.Stage.render","openfl/display/Stage.hx",746,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
		HX_STACK_LINE(748)
		bool tmp = (renderer->window == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(748)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(748)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(748)
		if ((tmp1)){
			HX_STACK_LINE(748)
			::lime::ui::Window tmp3 = renderer->window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(748)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(748)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(748)
			tmp2 = (tmp3 != tmp5);
		}
		else{
			HX_STACK_LINE(748)
			tmp2 = true;
		}
		HX_STACK_LINE(748)
		if ((tmp2)){
			HX_STACK_LINE(748)
			return null();
		}
		HX_STACK_LINE(752)
		::lime::app::Application tmp3 = this->application;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(752)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(752)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(752)
		if ((tmp4)){
			HX_STACK_LINE(752)
			::lime::app::Application tmp6 = this->application;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(752)
			::lime::app::Application tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(752)
			int tmp8 = tmp7->__windows->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(752)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(752)
			tmp5 = (tmp9 > (int)0);
		}
		else{
			HX_STACK_LINE(752)
			tmp5 = false;
		}
		HX_STACK_LINE(752)
		if ((tmp5)){
			HX_STACK_LINE(754)
			{
				HX_STACK_LINE(754)
				bool tmp6 = this->__transformDirty;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(754)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(754)
				if ((tmp7)){
					HX_STACK_LINE(754)
					this->__transformDirty = true;
					HX_STACK_LINE(754)
					(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
				}
			}
			HX_STACK_LINE(755)
			{
				HX_STACK_LINE(755)
				bool tmp6 = this->__renderDirty;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(755)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(755)
				if ((tmp7)){
					HX_STACK_LINE(755)
					this->__renderDirty = true;
					HX_STACK_LINE(755)
					(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
				}
			}
		}
		HX_STACK_LINE(759)
		bool tmp6 = this->__rendering;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(759)
		if ((tmp6)){
			HX_STACK_LINE(759)
			return null();
		}
		HX_STACK_LINE(760)
		this->__rendering = true;
		HX_STACK_LINE(766)
		::openfl::_internal::renderer::AbstractRenderer tmp7 = this->__renderer;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(766)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(766)
		if ((tmp8)){
			HX_STACK_LINE(768)
			::openfl::_internal::renderer::AbstractRenderer tmp9 = this->__renderer;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(768)
			tmp9->clear();
		}
		HX_STACK_LINE(772)
		::openfl::events::Event tmp9 = ::openfl::events::Event_obj::__new(HX_HCSTRING("enterFrame","\xf5","\x03","\x50","\x02"),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(772)
		this->__broadcastEvent(tmp9);
		HX_STACK_LINE(773)
		::openfl::events::Event tmp10 = ::openfl::events::Event_obj::__new(HX_HCSTRING("exitFrame","\x2f","\x64","\x48","\x12"),null(),null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(773)
		this->__broadcastEvent(tmp10);
		HX_STACK_LINE(775)
		bool tmp11 = this->__invalidated;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(775)
		if ((tmp11)){
			HX_STACK_LINE(777)
			this->__invalidated = false;
			HX_STACK_LINE(778)
			::openfl::events::Event tmp12 = ::openfl::events::Event_obj::__new(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),null(),null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(778)
			this->__broadcastEvent(tmp12);
		}
		HX_STACK_LINE(787)
		this->__renderable = true;
		HX_STACK_LINE(789)
		int tmp12 = this->__deltaTime;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(789)
		this->__enterFrame(tmp12);
		HX_STACK_LINE(790)
		this->__deltaTime = (int)0;
		HX_STACK_LINE(791)
		this->__update(false,true,null());
		HX_STACK_LINE(793)
		::openfl::_internal::renderer::AbstractRenderer tmp13 = this->__renderer;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(793)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(793)
		if ((tmp14)){
			HX_STACK_LINE(795)
			bool tmp15 = (renderer->type == ::lime::graphics::RendererType_obj::CAIRO);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(795)
			if ((tmp15)){
				HX_STACK_LINE(797)
				{
					HX_STACK_LINE(797)
					::lime::graphics::RenderContext _g = renderer->context;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(797)
					switch( (int)(_g->__Index())){
						case (int)4: {
							HX_STACK_LINE(797)
							::lime::graphics::cairo::Cairo tmp16 = (::lime::graphics::RenderContext(_g))->__Param(0);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(797)
							::lime::graphics::cairo::Cairo cairo = tmp16;		HX_STACK_VAR(cairo,"cairo");
							HX_STACK_LINE(799)
							{
								HX_STACK_LINE(801)
								::openfl::_internal::renderer::AbstractRenderer tmp17 = this->__renderer;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(801)
								::openfl::_internal::renderer::cairo::CairoRenderer tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(801)
								tmp18 = hx::TCast< ::openfl::_internal::renderer::cairo::CairoRenderer >::cast(tmp17);
								HX_STACK_LINE(801)
								tmp18->cairo = cairo;
								HX_STACK_LINE(802)
								::openfl::_internal::renderer::AbstractRenderer tmp19 = this->__renderer;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(802)
								tmp19->renderSession->cairo = cairo;
							}
						}
						;break;
						default: {
						}
					}
				}
			}
			HX_STACK_LINE(810)
			::openfl::_internal::renderer::AbstractRenderer tmp16 = this->__renderer;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(810)
			tmp16->render();
		}
		HX_STACK_LINE(819)
		this->__rendering = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,render,(void))

Void Stage_obj::update( int deltaTime){
{
		HX_STACK_FRAME("openfl.display.Stage","update",0x86e85123,"openfl.display.Stage.update","openfl/display/Stage.hx",826,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaTime,"deltaTime")
		HX_STACK_LINE(826)
		this->__deltaTime = deltaTime;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,update,(void))

Void Stage_obj::__broadcastEvent( ::openfl::events::Event event){
{
		HX_STACK_FRAME("openfl.display.Stage","__broadcastEvent",0x79aa0c13,"openfl.display.Stage.__broadcastEvent","openfl/display/Stage.hx",831,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(833)
		::haxe::ds::StringMap tmp = ::openfl::display::DisplayObject_obj::__broadcastEvents;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(833)
		::String tmp1 = event->type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(833)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(833)
		if ((tmp2)){
			HX_STACK_LINE(835)
			::haxe::ds::StringMap tmp3 = ::openfl::display::DisplayObject_obj::__broadcastEvents;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(835)
			::String tmp4 = event->type;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(835)
			Array< ::Dynamic > dispatchers = ((Array< ::Dynamic >)(tmp3->get(tmp4)));		HX_STACK_VAR(dispatchers,"dispatchers");
			HX_STACK_LINE(837)
			{
				HX_STACK_LINE(837)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(837)
				while((true)){
					HX_STACK_LINE(837)
					bool tmp5 = (_g < dispatchers->length);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(837)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(837)
					if ((tmp6)){
						HX_STACK_LINE(837)
						break;
					}
					HX_STACK_LINE(837)
					::openfl::display::DisplayObject tmp7 = dispatchers->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(837)
					::openfl::display::DisplayObject dispatcher = tmp7;		HX_STACK_VAR(dispatcher,"dispatcher");
					HX_STACK_LINE(837)
					++(_g);
					HX_STACK_LINE(839)
					::openfl::events::Event tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(839)
					dispatcher->__dispatch(tmp8);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__broadcastEvent,(void))

Void Stage_obj::__drag( ::openfl::geom::Point mouse){
{
		HX_STACK_FRAME("openfl.display.Stage","__drag",0xf14b5a2e,"openfl.display.Stage.__drag","openfl/display/Stage.hx",848,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mouse,"mouse")
		HX_STACK_LINE(850)
		::openfl::display::Sprite tmp = this->__dragObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(850)
		::openfl::display::DisplayObjectContainer parent = tmp->parent;		HX_STACK_VAR(parent,"parent");
		HX_STACK_LINE(851)
		bool tmp1 = (parent != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(851)
		if ((tmp1)){
			HX_STACK_LINE(853)
			::openfl::geom::Matrix tmp2 = parent->__getWorldTransform();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(853)
			::openfl::geom::Matrix _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(853)
			Float tmp3 = (_this->a * _this->d);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(853)
			Float tmp4 = (_this->b * _this->c);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(853)
			Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(853)
			Float norm = tmp5;		HX_STACK_VAR(norm,"norm");
			HX_STACK_LINE(853)
			bool tmp6 = (norm == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(853)
			if ((tmp6)){
				HX_STACK_LINE(853)
				Float tmp7 = _this->tx;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(853)
				Float tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(853)
				mouse->x = tmp8;
				HX_STACK_LINE(853)
				Float tmp9 = _this->ty;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(853)
				Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(853)
				mouse->y = tmp10;
			}
			else{
				HX_STACK_LINE(853)
				Float tmp7 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(853)
				Float tmp8 = _this->c;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(853)
				Float tmp9 = (_this->ty - mouse->y);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(853)
				Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(853)
				Float tmp11 = _this->d;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(853)
				Float tmp12 = (mouse->x - _this->tx);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(853)
				Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(853)
				Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(853)
				Float tmp15 = (tmp7 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(853)
				Float px = tmp15;		HX_STACK_VAR(px,"px");
				HX_STACK_LINE(853)
				Float tmp16 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(853)
				Float tmp17 = _this->a;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(853)
				Float tmp18 = (mouse->y - _this->ty);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(853)
				Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(853)
				Float tmp20 = _this->b;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(853)
				Float tmp21 = (_this->tx - mouse->x);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(853)
				Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(853)
				Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(853)
				Float tmp24 = (tmp16 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(853)
				mouse->y = tmp24;
				HX_STACK_LINE(853)
				mouse->x = px;
			}
		}
		HX_STACK_LINE(857)
		Float tmp2 = mouse->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(857)
		Float tmp3 = this->__dragOffsetX;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(857)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(857)
		Float x = tmp4;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(858)
		Float tmp5 = mouse->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(858)
		Float tmp6 = this->__dragOffsetY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(858)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(858)
		Float y = tmp7;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(860)
		::openfl::geom::Rectangle tmp8 = this->__dragBounds;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(860)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(860)
		if ((tmp9)){
			HX_STACK_LINE(862)
			Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(862)
			::openfl::geom::Rectangle tmp11 = this->__dragBounds;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(862)
			Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(862)
			bool tmp13 = (tmp10 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(862)
			if ((tmp13)){
				HX_STACK_LINE(864)
				::openfl::geom::Rectangle tmp14 = this->__dragBounds;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(864)
				x = tmp14->x;
			}
			else{
				HX_STACK_LINE(866)
				Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(866)
				::openfl::geom::Rectangle tmp15 = this->__dragBounds;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(866)
				Float tmp16 = tmp15->get_right();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(866)
				bool tmp17 = (tmp14 > tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(866)
				if ((tmp17)){
					HX_STACK_LINE(868)
					::openfl::geom::Rectangle tmp18 = this->__dragBounds;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(868)
					Float tmp19 = tmp18->get_right();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(868)
					x = tmp19;
				}
			}
			HX_STACK_LINE(872)
			Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(872)
			::openfl::geom::Rectangle tmp15 = this->__dragBounds;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(872)
			Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(872)
			bool tmp17 = (tmp14 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(872)
			if ((tmp17)){
				HX_STACK_LINE(874)
				::openfl::geom::Rectangle tmp18 = this->__dragBounds;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(874)
				y = tmp18->y;
			}
			else{
				HX_STACK_LINE(876)
				Float tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(876)
				::openfl::geom::Rectangle tmp19 = this->__dragBounds;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(876)
				Float tmp20 = tmp19->get_bottom();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(876)
				bool tmp21 = (tmp18 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(876)
				if ((tmp21)){
					HX_STACK_LINE(878)
					::openfl::geom::Rectangle tmp22 = this->__dragBounds;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(878)
					Float tmp23 = tmp22->get_bottom();		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(878)
					y = tmp23;
				}
			}
		}
		HX_STACK_LINE(884)
		::openfl::display::Sprite tmp10 = this->__dragObject;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(884)
		Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(884)
		tmp10->set_x(tmp11);
		HX_STACK_LINE(885)
		::openfl::display::Sprite tmp12 = this->__dragObject;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(885)
		Float tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(885)
		tmp12->set_y(tmp13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__drag,(void))

Void Stage_obj::__fireEvent( ::openfl::events::Event event,Array< ::Dynamic > stack){
{
		HX_STACK_FRAME("openfl.display.Stage","__fireEvent",0xa3fe300a,"openfl.display.Stage.__fireEvent","openfl/display/Stage.hx",890,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(stack,"stack")
		HX_STACK_LINE(892)
		int length = stack->length;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(894)
		bool tmp = (length == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(894)
		if ((tmp)){
			HX_STACK_LINE(896)
			event->eventPhase = (int)2;
			HX_STACK_LINE(897)
			event->target->__Field(HX_HCSTRING("__dispatch","\xda","\x41","\x9c","\xc1"), hx::paccDynamic )(event);
		}
		else{
			HX_STACK_LINE(901)
			event->eventPhase = (int)1;
			HX_STACK_LINE(902)
			int tmp1 = (stack->length - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(902)
			::openfl::display::DisplayObject tmp2 = stack->__get(tmp1).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(902)
			event->target = tmp2;
			HX_STACK_LINE(904)
			{
				HX_STACK_LINE(904)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(904)
				int tmp3 = (length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(904)
				int _g = tmp3;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(904)
				while((true)){
					HX_STACK_LINE(904)
					bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(904)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(904)
					if ((tmp5)){
						HX_STACK_LINE(904)
						break;
					}
					HX_STACK_LINE(904)
					int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(904)
					int i = tmp6;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(906)
					::openfl::display::DisplayObject tmp7 = stack->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(906)
					::openfl::events::Event tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(906)
					tmp7->__dispatch(tmp8);
					HX_STACK_LINE(908)
					bool tmp9 = event->__isCanceled;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(908)
					if ((tmp9)){
						HX_STACK_LINE(910)
						return null();
					}
				}
			}
			HX_STACK_LINE(916)
			event->eventPhase = (int)2;
			HX_STACK_LINE(917)
			event->target->__Field(HX_HCSTRING("__dispatch","\xda","\x41","\x9c","\xc1"), hx::paccDynamic )(event);
			HX_STACK_LINE(919)
			bool tmp3 = event->__isCanceled;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(919)
			if ((tmp3)){
				HX_STACK_LINE(921)
				return null();
			}
			HX_STACK_LINE(925)
			bool tmp4 = event->bubbles;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(925)
			if ((tmp4)){
				HX_STACK_LINE(927)
				event->eventPhase = (int)3;
				HX_STACK_LINE(928)
				int tmp5 = (length - (int)2);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(928)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(930)
				while((true)){
					HX_STACK_LINE(930)
					bool tmp6 = (i >= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(930)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(930)
					if ((tmp7)){
						HX_STACK_LINE(930)
						break;
					}
					HX_STACK_LINE(932)
					::openfl::display::DisplayObject tmp8 = stack->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(932)
					::openfl::events::Event tmp9 = event;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(932)
					tmp8->__dispatch(tmp9);
					HX_STACK_LINE(934)
					bool tmp10 = event->__isCanceled;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(934)
					if ((tmp10)){
						HX_STACK_LINE(936)
						return null();
					}
					HX_STACK_LINE(940)
					(i)--;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,__fireEvent,(void))

bool Stage_obj::__getInteractive( Array< ::Dynamic > stack){
	HX_STACK_FRAME("openfl.display.Stage","__getInteractive",0xdc3c8ba6,"openfl.display.Stage.__getInteractive","openfl/display/Stage.hx",951,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(stack,"stack")
	HX_STACK_LINE(953)
	bool tmp = (stack != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(953)
	if ((tmp)){
		HX_STACK_LINE(955)
		stack->push(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(959)
	return true;
}


Void Stage_obj::__onKey( ::String type,int keyCode,int modifier){
{
		HX_STACK_FRAME("openfl.display.Stage","__onKey",0x83566246,"openfl.display.Stage.__onKey","openfl/display/Stage.hx",964,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(966)
		int tmp = modifier;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(966)
		bool tmp1 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_altKey(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(966)
		::openfl::events::MouseEvent_obj::__altKey = tmp1;
		HX_STACK_LINE(967)
		int tmp2 = modifier;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(967)
		bool tmp3 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_metaKey(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(967)
		::openfl::events::MouseEvent_obj::__commandKey = tmp3;
		HX_STACK_LINE(968)
		int tmp4 = modifier;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(968)
		bool tmp5 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(968)
		::openfl::events::MouseEvent_obj::__ctrlKey = tmp5;
		HX_STACK_LINE(969)
		int tmp6 = modifier;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(969)
		bool tmp7 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(969)
		::openfl::events::MouseEvent_obj::__shiftKey = tmp7;
		HX_STACK_LINE(971)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(973)
		::openfl::display::InteractiveObject tmp8 = this->__focus;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(973)
		bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(973)
		if ((tmp9)){
			HX_STACK_LINE(975)
			this->__getInteractive(stack);
		}
		else{
			HX_STACK_LINE(979)
			::openfl::display::InteractiveObject tmp10 = this->__focus;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(979)
			tmp10->__getInteractive(stack);
		}
		HX_STACK_LINE(983)
		bool tmp10 = (stack->length > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(983)
		if ((tmp10)){
			HX_STACK_LINE(985)
			int tmp11 = keyCode;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(985)
			int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(985)
			switch( (int)(tmp11)){
				case (int)1073742048: case (int)1073742049: case (int)1073742050: case (int)1073742051: {
					HX_STACK_LINE(985)
					tmp12 = (int)1;
				}
				;break;
				case (int)1073742052: case (int)1073742053: case (int)1073742054: case (int)1073742055: {
					HX_STACK_LINE(985)
					tmp12 = (int)2;
				}
				;break;
				case (int)1073741908: case (int)1073741909: case (int)1073741910: case (int)1073741911: case (int)1073741912: case (int)1073741913: case (int)1073741914: case (int)1073741915: case (int)1073741916: case (int)1073741917: case (int)1073741918: case (int)1073741919: case (int)1073741920: case (int)1073741921: case (int)1073741922: case (int)1073741923: case (int)1073742044: {
					HX_STACK_LINE(985)
					tmp12 = (int)3;
				}
				;break;
				default: {
					HX_STACK_LINE(985)
					tmp12 = (int)0;
				}
			}
			HX_STACK_LINE(985)
			int keyLocation = tmp12;		HX_STACK_VAR(keyLocation,"keyLocation");
			HX_STACK_LINE(986)
			int tmp13 = keyCode;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(986)
			int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(986)
			switch( (int)(tmp13)){
				case (int)8: {
					HX_STACK_LINE(986)
					tmp14 = (int)8;
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(986)
					tmp14 = (int)9;
				}
				;break;
				case (int)13: {
					HX_STACK_LINE(986)
					tmp14 = (int)13;
				}
				;break;
				case (int)27: {
					HX_STACK_LINE(986)
					tmp14 = (int)27;
				}
				;break;
				case (int)32: {
					HX_STACK_LINE(986)
					tmp14 = (int)32;
				}
				;break;
				case (int)33: {
					HX_STACK_LINE(986)
					tmp14 = (int)49;
				}
				;break;
				case (int)34: {
					HX_STACK_LINE(986)
					tmp14 = (int)222;
				}
				;break;
				case (int)35: {
					HX_STACK_LINE(986)
					tmp14 = (int)51;
				}
				;break;
				case (int)36: {
					HX_STACK_LINE(986)
					tmp14 = (int)52;
				}
				;break;
				case (int)37: {
					HX_STACK_LINE(986)
					tmp14 = (int)53;
				}
				;break;
				case (int)38: {
					HX_STACK_LINE(986)
					tmp14 = (int)55;
				}
				;break;
				case (int)39: {
					HX_STACK_LINE(986)
					tmp14 = (int)222;
				}
				;break;
				case (int)40: {
					HX_STACK_LINE(986)
					tmp14 = (int)57;
				}
				;break;
				case (int)41: {
					HX_STACK_LINE(986)
					tmp14 = (int)48;
				}
				;break;
				case (int)42: {
					HX_STACK_LINE(986)
					tmp14 = (int)56;
				}
				;break;
				case (int)44: {
					HX_STACK_LINE(986)
					tmp14 = (int)188;
				}
				;break;
				case (int)45: {
					HX_STACK_LINE(986)
					tmp14 = (int)189;
				}
				;break;
				case (int)46: {
					HX_STACK_LINE(986)
					tmp14 = (int)190;
				}
				;break;
				case (int)47: {
					HX_STACK_LINE(986)
					tmp14 = (int)191;
				}
				;break;
				case (int)48: {
					HX_STACK_LINE(986)
					tmp14 = (int)48;
				}
				;break;
				case (int)49: {
					HX_STACK_LINE(986)
					tmp14 = (int)49;
				}
				;break;
				case (int)50: {
					HX_STACK_LINE(986)
					tmp14 = (int)50;
				}
				;break;
				case (int)51: {
					HX_STACK_LINE(986)
					tmp14 = (int)51;
				}
				;break;
				case (int)52: {
					HX_STACK_LINE(986)
					tmp14 = (int)52;
				}
				;break;
				case (int)53: {
					HX_STACK_LINE(986)
					tmp14 = (int)53;
				}
				;break;
				case (int)54: {
					HX_STACK_LINE(986)
					tmp14 = (int)54;
				}
				;break;
				case (int)55: {
					HX_STACK_LINE(986)
					tmp14 = (int)55;
				}
				;break;
				case (int)56: {
					HX_STACK_LINE(986)
					tmp14 = (int)56;
				}
				;break;
				case (int)57: {
					HX_STACK_LINE(986)
					tmp14 = (int)57;
				}
				;break;
				case (int)58: {
					HX_STACK_LINE(986)
					tmp14 = (int)186;
				}
				;break;
				case (int)59: {
					HX_STACK_LINE(986)
					tmp14 = (int)186;
				}
				;break;
				case (int)60: {
					HX_STACK_LINE(986)
					tmp14 = (int)60;
				}
				;break;
				case (int)61: {
					HX_STACK_LINE(986)
					tmp14 = (int)187;
				}
				;break;
				case (int)62: {
					HX_STACK_LINE(986)
					tmp14 = (int)190;
				}
				;break;
				case (int)63: {
					HX_STACK_LINE(986)
					tmp14 = (int)191;
				}
				;break;
				case (int)64: {
					HX_STACK_LINE(986)
					tmp14 = (int)50;
				}
				;break;
				case (int)91: {
					HX_STACK_LINE(986)
					tmp14 = (int)219;
				}
				;break;
				case (int)92: {
					HX_STACK_LINE(986)
					tmp14 = (int)220;
				}
				;break;
				case (int)93: {
					HX_STACK_LINE(986)
					tmp14 = (int)221;
				}
				;break;
				case (int)94: {
					HX_STACK_LINE(986)
					tmp14 = (int)54;
				}
				;break;
				case (int)95: {
					HX_STACK_LINE(986)
					tmp14 = (int)189;
				}
				;break;
				case (int)96: {
					HX_STACK_LINE(986)
					tmp14 = (int)192;
				}
				;break;
				case (int)97: {
					HX_STACK_LINE(986)
					tmp14 = (int)65;
				}
				;break;
				case (int)98: {
					HX_STACK_LINE(986)
					tmp14 = (int)66;
				}
				;break;
				case (int)99: {
					HX_STACK_LINE(986)
					tmp14 = (int)67;
				}
				;break;
				case (int)100: {
					HX_STACK_LINE(986)
					tmp14 = (int)68;
				}
				;break;
				case (int)101: {
					HX_STACK_LINE(986)
					tmp14 = (int)69;
				}
				;break;
				case (int)102: {
					HX_STACK_LINE(986)
					tmp14 = (int)70;
				}
				;break;
				case (int)103: {
					HX_STACK_LINE(986)
					tmp14 = (int)71;
				}
				;break;
				case (int)104: {
					HX_STACK_LINE(986)
					tmp14 = (int)72;
				}
				;break;
				case (int)105: {
					HX_STACK_LINE(986)
					tmp14 = (int)73;
				}
				;break;
				case (int)106: {
					HX_STACK_LINE(986)
					tmp14 = (int)74;
				}
				;break;
				case (int)107: {
					HX_STACK_LINE(986)
					tmp14 = (int)75;
				}
				;break;
				case (int)108: {
					HX_STACK_LINE(986)
					tmp14 = (int)76;
				}
				;break;
				case (int)109: {
					HX_STACK_LINE(986)
					tmp14 = (int)77;
				}
				;break;
				case (int)110: {
					HX_STACK_LINE(986)
					tmp14 = (int)78;
				}
				;break;
				case (int)111: {
					HX_STACK_LINE(986)
					tmp14 = (int)79;
				}
				;break;
				case (int)112: {
					HX_STACK_LINE(986)
					tmp14 = (int)80;
				}
				;break;
				case (int)113: {
					HX_STACK_LINE(986)
					tmp14 = (int)81;
				}
				;break;
				case (int)114: {
					HX_STACK_LINE(986)
					tmp14 = (int)82;
				}
				;break;
				case (int)115: {
					HX_STACK_LINE(986)
					tmp14 = (int)83;
				}
				;break;
				case (int)116: {
					HX_STACK_LINE(986)
					tmp14 = (int)84;
				}
				;break;
				case (int)117: {
					HX_STACK_LINE(986)
					tmp14 = (int)85;
				}
				;break;
				case (int)118: {
					HX_STACK_LINE(986)
					tmp14 = (int)86;
				}
				;break;
				case (int)119: {
					HX_STACK_LINE(986)
					tmp14 = (int)87;
				}
				;break;
				case (int)120: {
					HX_STACK_LINE(986)
					tmp14 = (int)88;
				}
				;break;
				case (int)121: {
					HX_STACK_LINE(986)
					tmp14 = (int)89;
				}
				;break;
				case (int)122: {
					HX_STACK_LINE(986)
					tmp14 = (int)90;
				}
				;break;
				case (int)127: {
					HX_STACK_LINE(986)
					tmp14 = (int)46;
				}
				;break;
				case (int)1073741881: {
					HX_STACK_LINE(986)
					tmp14 = (int)20;
				}
				;break;
				case (int)1073741882: {
					HX_STACK_LINE(986)
					tmp14 = (int)112;
				}
				;break;
				case (int)1073741883: {
					HX_STACK_LINE(986)
					tmp14 = (int)113;
				}
				;break;
				case (int)1073741884: {
					HX_STACK_LINE(986)
					tmp14 = (int)114;
				}
				;break;
				case (int)1073741885: {
					HX_STACK_LINE(986)
					tmp14 = (int)115;
				}
				;break;
				case (int)1073741886: {
					HX_STACK_LINE(986)
					tmp14 = (int)116;
				}
				;break;
				case (int)1073741887: {
					HX_STACK_LINE(986)
					tmp14 = (int)117;
				}
				;break;
				case (int)1073741888: {
					HX_STACK_LINE(986)
					tmp14 = (int)118;
				}
				;break;
				case (int)1073741889: {
					HX_STACK_LINE(986)
					tmp14 = (int)119;
				}
				;break;
				case (int)1073741890: {
					HX_STACK_LINE(986)
					tmp14 = (int)120;
				}
				;break;
				case (int)1073741891: {
					HX_STACK_LINE(986)
					tmp14 = (int)121;
				}
				;break;
				case (int)1073741892: {
					HX_STACK_LINE(986)
					tmp14 = (int)122;
				}
				;break;
				case (int)1073741893: {
					HX_STACK_LINE(986)
					tmp14 = (int)123;
				}
				;break;
				case (int)1073741894: {
					HX_STACK_LINE(986)
					tmp14 = (int)301;
				}
				;break;
				case (int)1073741895: {
					HX_STACK_LINE(986)
					tmp14 = (int)145;
				}
				;break;
				case (int)1073741896: {
					HX_STACK_LINE(986)
					tmp14 = (int)19;
				}
				;break;
				case (int)1073741897: {
					HX_STACK_LINE(986)
					tmp14 = (int)45;
				}
				;break;
				case (int)1073741898: {
					HX_STACK_LINE(986)
					tmp14 = (int)36;
				}
				;break;
				case (int)1073741899: {
					HX_STACK_LINE(986)
					tmp14 = (int)33;
				}
				;break;
				case (int)1073741901: {
					HX_STACK_LINE(986)
					tmp14 = (int)35;
				}
				;break;
				case (int)1073741902: {
					HX_STACK_LINE(986)
					tmp14 = (int)34;
				}
				;break;
				case (int)1073741903: {
					HX_STACK_LINE(986)
					tmp14 = (int)39;
				}
				;break;
				case (int)1073741904: {
					HX_STACK_LINE(986)
					tmp14 = (int)37;
				}
				;break;
				case (int)1073741905: {
					HX_STACK_LINE(986)
					tmp14 = (int)40;
				}
				;break;
				case (int)1073741906: {
					HX_STACK_LINE(986)
					tmp14 = (int)38;
				}
				;break;
				case (int)1073741907: {
					HX_STACK_LINE(986)
					tmp14 = (int)144;
				}
				;break;
				case (int)1073741908: {
					HX_STACK_LINE(986)
					tmp14 = (int)111;
				}
				;break;
				case (int)1073741909: {
					HX_STACK_LINE(986)
					tmp14 = (int)106;
				}
				;break;
				case (int)1073741910: {
					HX_STACK_LINE(986)
					tmp14 = (int)109;
				}
				;break;
				case (int)1073741911: {
					HX_STACK_LINE(986)
					tmp14 = (int)107;
				}
				;break;
				case (int)1073741912: {
					HX_STACK_LINE(986)
					tmp14 = (int)108;
				}
				;break;
				case (int)1073741913: {
					HX_STACK_LINE(986)
					tmp14 = (int)97;
				}
				;break;
				case (int)1073741914: {
					HX_STACK_LINE(986)
					tmp14 = (int)98;
				}
				;break;
				case (int)1073741915: {
					HX_STACK_LINE(986)
					tmp14 = (int)99;
				}
				;break;
				case (int)1073741916: {
					HX_STACK_LINE(986)
					tmp14 = (int)100;
				}
				;break;
				case (int)1073741917: {
					HX_STACK_LINE(986)
					tmp14 = (int)101;
				}
				;break;
				case (int)1073741918: {
					HX_STACK_LINE(986)
					tmp14 = (int)102;
				}
				;break;
				case (int)1073741919: {
					HX_STACK_LINE(986)
					tmp14 = (int)103;
				}
				;break;
				case (int)1073741920: {
					HX_STACK_LINE(986)
					tmp14 = (int)104;
				}
				;break;
				case (int)1073741921: {
					HX_STACK_LINE(986)
					tmp14 = (int)105;
				}
				;break;
				case (int)1073741922: {
					HX_STACK_LINE(986)
					tmp14 = (int)96;
				}
				;break;
				case (int)1073741923: {
					HX_STACK_LINE(986)
					tmp14 = (int)110;
				}
				;break;
				case (int)1073741925: {
					HX_STACK_LINE(986)
					tmp14 = (int)302;
				}
				;break;
				case (int)1073741928: {
					HX_STACK_LINE(986)
					tmp14 = (int)124;
				}
				;break;
				case (int)1073741929: {
					HX_STACK_LINE(986)
					tmp14 = (int)125;
				}
				;break;
				case (int)1073741930: {
					HX_STACK_LINE(986)
					tmp14 = (int)126;
				}
				;break;
				case (int)1073741982: {
					HX_STACK_LINE(986)
					tmp14 = (int)13;
				}
				;break;
				case (int)1073742044: {
					HX_STACK_LINE(986)
					tmp14 = (int)110;
				}
				;break;
				case (int)1073742048: {
					HX_STACK_LINE(986)
					tmp14 = (int)17;
				}
				;break;
				case (int)1073742049: {
					HX_STACK_LINE(986)
					tmp14 = (int)16;
				}
				;break;
				case (int)1073742050: {
					HX_STACK_LINE(986)
					tmp14 = (int)18;
				}
				;break;
				case (int)1073742051: {
					HX_STACK_LINE(986)
					tmp14 = (int)15;
				}
				;break;
				case (int)1073742052: {
					HX_STACK_LINE(986)
					tmp14 = (int)17;
				}
				;break;
				case (int)1073742053: {
					HX_STACK_LINE(986)
					tmp14 = (int)16;
				}
				;break;
				case (int)1073742054: {
					HX_STACK_LINE(986)
					tmp14 = (int)18;
				}
				;break;
				case (int)1073742055: {
					HX_STACK_LINE(986)
					tmp14 = (int)15;
				}
				;break;
				default: {
					HX_STACK_LINE(986)
					tmp14 = keyCode;
				}
			}
			HX_STACK_LINE(986)
			int keyCode1 = tmp14;		HX_STACK_VAR(keyCode1,"keyCode1");
			HX_STACK_LINE(987)
			int tmp15 = keyCode1;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(987)
			int tmp16 = modifier;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(987)
			bool tmp17 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(987)
			int tmp18 = ::openfl::ui::Keyboard_obj::__getCharCode(tmp15,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(987)
			int charCode = tmp18;		HX_STACK_VAR(charCode,"charCode");
			HX_STACK_LINE(989)
			::String tmp19 = type;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(989)
			int tmp20 = charCode;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(989)
			int tmp21 = keyCode1;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(989)
			int tmp22 = keyLocation;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(989)
			bool tmp23 = this->__macKeyboard;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(989)
			bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(989)
			if ((tmp23)){
				HX_STACK_LINE(989)
				int tmp25 = modifier;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(989)
				int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(989)
				bool tmp27 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(989)
				bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(989)
				if ((tmp28)){
					HX_STACK_LINE(989)
					int tmp29 = modifier;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(989)
					int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(989)
					tmp24 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_metaKey(tmp30);
				}
				else{
					HX_STACK_LINE(989)
					tmp24 = true;
				}
			}
			else{
				HX_STACK_LINE(989)
				int tmp25 = modifier;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(989)
				tmp24 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(tmp25);
			}
			HX_STACK_LINE(989)
			int tmp25 = modifier;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(989)
			bool tmp26 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_altKey(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(989)
			int tmp27 = modifier;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(989)
			bool tmp28 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(989)
			int tmp29 = modifier;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(989)
			bool tmp30 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(989)
			int tmp31 = modifier;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(989)
			bool tmp32 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_metaKey(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(989)
			::openfl::events::KeyboardEvent tmp33 = ::openfl::events::KeyboardEvent_obj::__new(tmp19,true,false,tmp20,tmp21,tmp22,tmp24,tmp26,tmp28,tmp30,tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(989)
			::openfl::events::KeyboardEvent event = tmp33;		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(991)
			stack->reverse();
			HX_STACK_LINE(992)
			::openfl::events::KeyboardEvent tmp34 = event;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(992)
			this->__fireEvent(tmp34,stack);
			HX_STACK_LINE(994)
			bool tmp35 = event->__isCanceled;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(994)
			if ((tmp35)){
				HX_STACK_LINE(996)
				bool tmp36 = (type == HX_HCSTRING("keyDown","\xa1","\x69","\x47","\x9c"));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(996)
				if ((tmp36)){
					HX_STACK_LINE(998)
					::lime::ui::Window tmp37 = this->window;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(998)
					tmp37->onKeyDown->cancel();
				}
				else{
					HX_STACK_LINE(1002)
					::lime::ui::Window tmp37 = this->window;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1002)
					tmp37->onKeyUp->cancel();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,__onKey,(void))

Void Stage_obj::__onGamepadConnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("openfl.display.Stage","__onGamepadConnect",0x5c5bf402,"openfl.display.Stage.__onGamepadConnect","openfl/display/Stage.hx",1013,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_LINE(1015)
		::lime::ui::Gamepad tmp = gamepad;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1015)
		this->onGamepadConnect(tmp);
		HX_STACK_LINE(1017)
		Dynamic tmp1 = this->onGamepadAxisMove_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1017)
		::lime::ui::Gamepad tmp2 = gamepad;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1017)
		Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1017)
		{
			HX_STACK_LINE(1017)
			Dynamic f = tmp1;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(1017)
			::lime::ui::Gamepad a1 = tmp2;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Gamepad,a1,Dynamic,f)
			int __ArgCount() const { return 2; }
			Void run(int a2,Float a3){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",1017,0xadca4c2c)
				HX_STACK_ARG(a2,"a2")
				HX_STACK_ARG(a3,"a3")
				{
					HX_STACK_LINE(1017)
					::lime::ui::Gamepad tmp4 = a1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1017)
					int tmp5 = a2;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1017)
					Float tmp6 = a3;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1017)
					f(tmp4,tmp5,tmp6).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(1017)
			tmp3 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(1017)
		gamepad->onAxisMove->add(tmp3,null(),null());
		HX_STACK_LINE(1018)
		Dynamic tmp4 = this->onGamepadButtonDown_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1018)
		::lime::ui::Gamepad tmp5 = gamepad;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1018)
		Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1018)
		{
			HX_STACK_LINE(1018)
			Dynamic f = tmp4;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(1018)
			::lime::ui::Gamepad a1 = tmp5;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Gamepad,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(int a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",1018,0xadca4c2c)
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(1018)
					::lime::ui::Gamepad tmp7 = a1;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1018)
					int tmp8 = a2;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1018)
					f(tmp7,tmp8).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(1018)
			tmp6 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(1018)
		gamepad->onButtonDown->add(tmp6,null(),null());
		HX_STACK_LINE(1019)
		Dynamic tmp7 = this->onGamepadButtonUp_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1019)
		::lime::ui::Gamepad tmp8 = gamepad;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1019)
		Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1019)
		{
			HX_STACK_LINE(1019)
			Dynamic f = tmp7;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(1019)
			::lime::ui::Gamepad a1 = tmp8;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Gamepad,a1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(int a2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",1019,0xadca4c2c)
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(1019)
					::lime::ui::Gamepad tmp10 = a1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1019)
					int tmp11 = a2;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1019)
					f(tmp10,tmp11).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(1019)
			tmp9 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(1019)
		gamepad->onButtonUp->add(tmp9,null(),null());
		HX_STACK_LINE(1020)
		Dynamic tmp10 = this->onGamepadDisconnect_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1020)
		::lime::ui::Gamepad tmp11 = gamepad;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1020)
		Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1020)
		{
			HX_STACK_LINE(1020)
			Dynamic f = tmp10;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(1020)
			::lime::ui::Gamepad a1 = tmp11;		HX_STACK_VAR(a1,"a1");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::lime::ui::Gamepad,a1,Dynamic,f)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/Stage.hx",1020,0xadca4c2c)
				{
					HX_STACK_LINE(1020)
					::lime::ui::Gamepad tmp13 = a1;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1020)
					f(tmp13).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(1020)
			tmp12 =  Dynamic(new _Function_2_1(a1,f));
		}
		HX_STACK_LINE(1020)
		gamepad->onDisconnect->add(tmp12,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__onGamepadConnect,(void))

Void Stage_obj::__onMouse( ::String type,Float x,Float y,int button){
{
		HX_STACK_FRAME("openfl.display.Stage","__onMouse",0xfccea68c,"openfl.display.Stage.__onMouse","openfl/display/Stage.hx",1025,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(1027)
		bool tmp = (button > (int)2);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1027)
		if ((tmp)){
			HX_STACK_LINE(1027)
			return null();
		}
		HX_STACK_LINE(1029)
		::openfl::geom::Point tmp1 = ::openfl::geom::Point_obj::__new(x,y);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1029)
		::openfl::geom::Point targetPoint = tmp1;		HX_STACK_VAR(targetPoint,"targetPoint");
		HX_STACK_LINE(1030)
		{
			HX_STACK_LINE(1030)
			::openfl::geom::Matrix tmp2 = this->__displayMatrix;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1030)
			::openfl::geom::Matrix _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1030)
			Float tmp3 = (_this->a * _this->d);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1030)
			Float tmp4 = (_this->b * _this->c);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1030)
			Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1030)
			Float norm = tmp5;		HX_STACK_VAR(norm,"norm");
			HX_STACK_LINE(1030)
			bool tmp6 = (norm == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1030)
			if ((tmp6)){
				HX_STACK_LINE(1030)
				Float tmp7 = _this->tx;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1030)
				Float tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1030)
				targetPoint->x = tmp8;
				HX_STACK_LINE(1030)
				Float tmp9 = _this->ty;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1030)
				Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1030)
				targetPoint->y = tmp10;
			}
			else{
				HX_STACK_LINE(1030)
				Float tmp7 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1030)
				Float tmp8 = _this->c;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1030)
				Float tmp9 = (_this->ty - targetPoint->y);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1030)
				Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1030)
				Float tmp11 = _this->d;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1030)
				Float tmp12 = (targetPoint->x - _this->tx);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1030)
				Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1030)
				Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1030)
				Float tmp15 = (tmp7 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1030)
				Float px = tmp15;		HX_STACK_VAR(px,"px");
				HX_STACK_LINE(1030)
				Float tmp16 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1030)
				Float tmp17 = _this->a;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1030)
				Float tmp18 = (targetPoint->y - _this->ty);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1030)
				Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1030)
				Float tmp20 = _this->b;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1030)
				Float tmp21 = (_this->tx - targetPoint->x);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1030)
				Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1030)
				Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1030)
				Float tmp24 = (tmp16 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1030)
				targetPoint->y = tmp24;
				HX_STACK_LINE(1030)
				targetPoint->x = px;
			}
		}
		HX_STACK_LINE(1032)
		this->__mouseX = targetPoint->x;
		HX_STACK_LINE(1033)
		this->__mouseY = targetPoint->y;
		HX_STACK_LINE(1035)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(1036)
		::openfl::display::InteractiveObject target = null();		HX_STACK_VAR(target,"target");
		HX_STACK_LINE(1038)
		Float tmp2 = this->__mouseX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1038)
		Float tmp3 = this->__mouseY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1038)
		bool tmp4 = this->__hitTest(tmp2,tmp3,true,stack,true,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1038)
		if ((tmp4)){
			HX_STACK_LINE(1040)
			int tmp5 = (stack->length - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1040)
			::openfl::display::DisplayObject tmp6 = stack->__get(tmp5).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1040)
			target = ((::openfl::display::InteractiveObject)(tmp6));
		}
		else{
			HX_STACK_LINE(1044)
			target = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(1045)
			stack = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(1049)
		bool tmp5 = (target == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1049)
		if ((tmp5)){
			HX_STACK_LINE(1049)
			target = hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(1051)
		::String clickType = null();		HX_STACK_VAR(clickType,"clickType");
		HX_STACK_LINE(1053)
		::String tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1053)
		::String _switch_1 = (tmp6);
		if (  ( _switch_1==HX_HCSTRING("mouseDown","\x27","\xb1","\xc2","\xee"))){
			HX_STACK_LINE(1057)
			bool tmp7 = target->get_tabEnabled();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1057)
			if ((tmp7)){
				HX_STACK_LINE(1059)
				::openfl::display::InteractiveObject tmp8 = target;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1059)
				this->set_focus(tmp8);
			}
			else{
				HX_STACK_LINE(1063)
				this->set_focus(null());
			}
			HX_STACK_LINE(1067)
			this->__mouseDownLeft = target;
		}
		else if (  ( _switch_1==HX_HCSTRING("middleMouseDown","\x12","\x2b","\xfe","\x01"))){
			HX_STACK_LINE(1071)
			this->__mouseDownMiddle = target;
		}
		else if (  ( _switch_1==HX_HCSTRING("rightMouseDown","\xab","\x29","\xd7","\xcd"))){
			HX_STACK_LINE(1075)
			this->__mouseDownRight = target;
		}
		else if (  ( _switch_1==HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0"))){
			HX_STACK_LINE(1079)
			::openfl::display::InteractiveObject tmp7 = this->__mouseDownLeft;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1079)
			::openfl::display::InteractiveObject tmp8 = target;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1079)
			bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1079)
			if ((tmp9)){
				HX_STACK_LINE(1081)
				clickType = HX_HCSTRING("click","\x48","\x7c","\x5e","\x48");
			}
			HX_STACK_LINE(1086)
			this->__mouseDownLeft = null();
		}
		else if (  ( _switch_1==HX_HCSTRING("middleMouseUp","\x0b","\x8d","\xf5","\x3a"))){
			HX_STACK_LINE(1090)
			::openfl::display::InteractiveObject tmp7 = this->__mouseDownMiddle;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1090)
			::openfl::display::InteractiveObject tmp8 = target;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1090)
			bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1090)
			if ((tmp9)){
				HX_STACK_LINE(1092)
				clickType = HX_HCSTRING("middleClick","\xb3","\xe4","\xe5","\x43");
			}
			HX_STACK_LINE(1097)
			this->__mouseDownMiddle = null();
		}
		else if (  ( _switch_1==HX_HCSTRING("rightMouseUp","\x64","\x83","\x21","\xab"))){
			HX_STACK_LINE(1101)
			::openfl::display::InteractiveObject tmp7 = this->__mouseDownRight;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1101)
			::openfl::display::InteractiveObject tmp8 = target;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1101)
			bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1101)
			if ((tmp9)){
				HX_STACK_LINE(1103)
				clickType = HX_HCSTRING("rightClick","\xcc","\x62","\x23","\x4b");
			}
			HX_STACK_LINE(1107)
			this->__mouseDownRight = null();
		}
		else  {
		}
;
;
		HX_STACK_LINE(1113)
		::String tmp7 = type;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1113)
		int tmp8 = button;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1113)
		Float tmp9 = this->__mouseX;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1113)
		Float tmp10 = this->__mouseY;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1113)
		bool tmp11 = (target == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1113)
		::openfl::geom::Point tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1113)
		if ((tmp11)){
			HX_STACK_LINE(1113)
			tmp12 = targetPoint;
		}
		else{
			HX_STACK_LINE(1113)
			::openfl::geom::Point tmp13 = targetPoint;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1113)
			tmp12 = target->globalToLocal(tmp13);
		}
		HX_STACK_LINE(1113)
		::openfl::display::InteractiveObject tmp13 = target;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1113)
		::openfl::events::MouseEvent tmp14 = ::openfl::events::MouseEvent_obj::__create(tmp7,tmp8,tmp9,tmp10,tmp12,tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1113)
		this->__fireEvent(tmp14,stack);
		HX_STACK_LINE(1115)
		bool tmp15 = (clickType != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1115)
		if ((tmp15)){
			HX_STACK_LINE(1117)
			::String tmp16 = clickType;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1117)
			int tmp17 = button;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1117)
			Float tmp18 = this->__mouseX;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1117)
			Float tmp19 = this->__mouseY;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1117)
			bool tmp20 = (target == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1117)
			::openfl::geom::Point tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1117)
			if ((tmp20)){
				HX_STACK_LINE(1117)
				tmp21 = targetPoint;
			}
			else{
				HX_STACK_LINE(1117)
				::openfl::geom::Point tmp22 = targetPoint;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1117)
				tmp21 = target->globalToLocal(tmp22);
			}
			HX_STACK_LINE(1117)
			::openfl::display::InteractiveObject tmp22 = target;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1117)
			::openfl::events::MouseEvent tmp23 = ::openfl::events::MouseEvent_obj::__create(tmp16,tmp17,tmp18,tmp19,tmp21,tmp22,null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1117)
			this->__fireEvent(tmp23,stack);
			HX_STACK_LINE(1119)
			bool tmp24 = (type == HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0"));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1119)
			bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1119)
			if ((tmp24)){
				HX_STACK_LINE(1119)
				::openfl::display::InteractiveObject tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1119)
				tmp26 = hx::TCast< ::openfl::display::InteractiveObject >::cast(target);
				HX_STACK_LINE(1119)
				::openfl::display::InteractiveObject tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1119)
				tmp25 = tmp27->doubleClickEnabled;
			}
			else{
				HX_STACK_LINE(1119)
				tmp25 = false;
			}
			HX_STACK_LINE(1119)
			if ((tmp25)){
				HX_STACK_LINE(1121)
				int tmp26 = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1121)
				int currentTime = tmp26;		HX_STACK_VAR(currentTime,"currentTime");
				HX_STACK_LINE(1122)
				int tmp27 = currentTime;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1122)
				int tmp28 = this->__lastClickTime;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1122)
				int tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1122)
				bool tmp30 = (tmp29 < (int)500);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1122)
				if ((tmp30)){
					HX_STACK_LINE(1124)
					int tmp31 = button;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1124)
					Float tmp32 = this->__mouseX;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1124)
					Float tmp33 = this->__mouseY;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1124)
					bool tmp34 = (target == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1124)
					::openfl::geom::Point tmp35;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1124)
					if ((tmp34)){
						HX_STACK_LINE(1124)
						tmp35 = targetPoint;
					}
					else{
						HX_STACK_LINE(1124)
						::openfl::geom::Point tmp36 = targetPoint;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1124)
						tmp35 = target->globalToLocal(tmp36);
					}
					HX_STACK_LINE(1124)
					::openfl::display::InteractiveObject tmp36 = target;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1124)
					::openfl::events::MouseEvent tmp37 = ::openfl::events::MouseEvent_obj::__create(HX_HCSTRING("doubleClick","\x77","\x03","\x76","\xcd"),tmp31,tmp32,tmp33,tmp35,tmp36,null());		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1124)
					this->__fireEvent(tmp37,stack);
					HX_STACK_LINE(1125)
					this->__lastClickTime = (int)0;
				}
				else{
					HX_STACK_LINE(1129)
					this->__lastClickTime = currentTime;
				}
			}
		}
		HX_STACK_LINE(1137)
		::String tmp16 = ::openfl::ui::Mouse_obj::__cursor;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1137)
		bool tmp17 = (tmp16 == HX_HCSTRING("auto","\x6f","\xdf","\x76","\x40"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1137)
		if ((tmp17)){
			HX_STACK_LINE(1139)
			::lime::ui::MouseCursor cursor = null();		HX_STACK_VAR(cursor,"cursor");
			HX_STACK_LINE(1141)
			::openfl::display::InteractiveObject tmp18 = this->__mouseDownLeft;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1141)
			bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1141)
			if ((tmp19)){
				HX_STACK_LINE(1143)
				::openfl::display::InteractiveObject tmp20 = this->__mouseDownLeft;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1143)
				::lime::ui::MouseCursor tmp21 = tmp20->__getCursor();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1143)
				cursor = tmp21;
			}
			else{
				HX_STACK_LINE(1147)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1147)
				while((true)){
					HX_STACK_LINE(1147)
					bool tmp20 = (_g < stack->length);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1147)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1147)
					if ((tmp21)){
						HX_STACK_LINE(1147)
						break;
					}
					HX_STACK_LINE(1147)
					::openfl::display::DisplayObject tmp22 = stack->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1147)
					::openfl::display::DisplayObject target1 = tmp22;		HX_STACK_VAR(target1,"target1");
					HX_STACK_LINE(1147)
					++(_g);
					HX_STACK_LINE(1149)
					::lime::ui::MouseCursor tmp23 = target1->__getCursor();		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1149)
					cursor = tmp23;
					HX_STACK_LINE(1151)
					bool tmp24 = (cursor != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1151)
					if ((tmp24)){
						HX_STACK_LINE(1153)
						::lime::ui::MouseCursor tmp25 = cursor;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1153)
						::lime::ui::Mouse_obj::set_cursor(tmp25);
						HX_STACK_LINE(1154)
						break;
					}
				}
			}
			HX_STACK_LINE(1162)
			bool tmp20 = (cursor == null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1162)
			if ((tmp20)){
				HX_STACK_LINE(1164)
				::lime::ui::Mouse_obj::set_cursor(::lime::ui::MouseCursor_obj::ARROW);
			}
		}
		HX_STACK_LINE(1170)
		::openfl::events::MouseEvent event;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(1170)
		::openfl::geom::Point localPoint;		HX_STACK_VAR(localPoint,"localPoint");
		HX_STACK_LINE(1172)
		::openfl::display::InteractiveObject tmp18 = target;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1172)
		::openfl::display::InteractiveObject tmp19 = this->__mouseOverTarget;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1172)
		bool tmp20 = (tmp18 != tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1172)
		if ((tmp20)){
			HX_STACK_LINE(1174)
			::openfl::display::InteractiveObject tmp21 = this->__mouseOverTarget;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1174)
			bool tmp22 = (tmp21 != null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1174)
			if ((tmp22)){
				HX_STACK_LINE(1176)
				::openfl::display::InteractiveObject tmp23 = this->__mouseOverTarget;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1176)
				bool tmp24 = (tmp23 == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1176)
				::openfl::geom::Point tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1176)
				if ((tmp24)){
					HX_STACK_LINE(1176)
					tmp25 = targetPoint;
				}
				else{
					HX_STACK_LINE(1176)
					::openfl::display::InteractiveObject tmp26 = this->__mouseOverTarget;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1176)
					::openfl::geom::Point tmp27 = targetPoint;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1176)
					tmp25 = tmp26->globalToLocal(tmp27);
				}
				HX_STACK_LINE(1176)
				localPoint = tmp25;
				HX_STACK_LINE(1178)
				int tmp26 = button;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1178)
				Float tmp27 = this->__mouseX;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1178)
				Float tmp28 = this->__mouseY;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1178)
				::openfl::geom::Point tmp29 = localPoint;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1178)
				::openfl::display::InteractiveObject tmp30 = this->__mouseOverTarget;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1178)
				::openfl::display::InteractiveObject tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1178)
				::openfl::events::MouseEvent tmp32 = ::openfl::events::MouseEvent_obj::__create(HX_HCSTRING("mouseOut","\x69","\xe7","\x1d","\xa4"),tmp26,tmp27,tmp28,tmp29,tmp31,null());		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1178)
				event = tmp32;
				HX_STACK_LINE(1179)
				::openfl::display::InteractiveObject tmp33 = this->__mouseOverTarget;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1179)
				::openfl::events::MouseEvent tmp34 = event;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1179)
				tmp33->__dispatchEvent(tmp34);
			}
		}
		HX_STACK_LINE(1185)
		{
			HX_STACK_LINE(1185)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1185)
			Array< ::Dynamic > _g1 = this->__rollOutStack;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1185)
			while((true)){
				HX_STACK_LINE(1185)
				bool tmp21 = (_g < _g1->length);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1185)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1185)
				if ((tmp22)){
					HX_STACK_LINE(1185)
					break;
				}
				HX_STACK_LINE(1185)
				::openfl::display::DisplayObject tmp23 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1185)
				::openfl::display::DisplayObject target1 = tmp23;		HX_STACK_VAR(target1,"target1");
				HX_STACK_LINE(1185)
				++(_g);
				HX_STACK_LINE(1187)
				::openfl::display::DisplayObject tmp24 = target1;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1187)
				int tmp25 = stack->indexOf(tmp24,null());		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1187)
				bool tmp26 = (tmp25 == (int)-1);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1187)
				if ((tmp26)){
					HX_STACK_LINE(1189)
					::openfl::display::DisplayObject tmp27 = target1;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1189)
					this->__rollOutStack->remove(tmp27);
					HX_STACK_LINE(1191)
					::openfl::display::InteractiveObject tmp28 = this->__mouseOverTarget;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1191)
					::openfl::geom::Point tmp29 = targetPoint;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1191)
					::openfl::geom::Point tmp30 = tmp28->globalToLocal(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1191)
					localPoint = tmp30;
					HX_STACK_LINE(1192)
					int tmp31 = button;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1192)
					Float tmp32 = this->__mouseX;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1192)
					Float tmp33 = this->__mouseY;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1192)
					::openfl::geom::Point tmp34 = localPoint;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1192)
					::openfl::display::InteractiveObject tmp35 = this->__mouseOverTarget;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1192)
					::openfl::display::InteractiveObject tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1192)
					::openfl::events::MouseEvent tmp37 = ::openfl::events::MouseEvent_obj::__create(HX_HCSTRING("rollOut","\x11","\xf9","\x11","\x5d"),tmp31,tmp32,tmp33,tmp34,tmp36,null());		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1192)
					event = tmp37;
					HX_STACK_LINE(1193)
					event->bubbles = false;
					HX_STACK_LINE(1194)
					::openfl::events::MouseEvent tmp38 = event;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1194)
					target1->__dispatchEvent(tmp38);
				}
			}
		}
		HX_STACK_LINE(1200)
		{
			HX_STACK_LINE(1200)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1200)
			while((true)){
				HX_STACK_LINE(1200)
				bool tmp21 = (_g < stack->length);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1200)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1200)
				if ((tmp22)){
					HX_STACK_LINE(1200)
					break;
				}
				HX_STACK_LINE(1200)
				::openfl::display::DisplayObject tmp23 = stack->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1200)
				::openfl::display::DisplayObject target1 = tmp23;		HX_STACK_VAR(target1,"target1");
				HX_STACK_LINE(1200)
				++(_g);
				HX_STACK_LINE(1202)
				::openfl::display::DisplayObject tmp24 = target1;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1202)
				int tmp25 = this->__rollOutStack->indexOf(tmp24,null());		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1202)
				bool tmp26 = (tmp25 == (int)-1);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1202)
				if ((tmp26)){
					HX_STACK_LINE(1204)
					bool tmp27 = target1->hasEventListener(HX_HCSTRING("rollOver","\x71","\xab","\xa8","\x12"));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1204)
					if ((tmp27)){
						HX_STACK_LINE(1206)
						::openfl::geom::Point tmp28 = targetPoint;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1206)
						::openfl::geom::Point tmp29 = target1->globalToLocal(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1206)
						localPoint = tmp29;
						HX_STACK_LINE(1207)
						int tmp30 = button;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1207)
						Float tmp31 = this->__mouseX;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1207)
						Float tmp32 = this->__mouseY;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1207)
						::openfl::geom::Point tmp33 = localPoint;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1207)
						::openfl::display::InteractiveObject tmp34 = ((::openfl::display::InteractiveObject)(target1));		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1207)
						::openfl::events::MouseEvent tmp35 = ::openfl::events::MouseEvent_obj::__create(HX_HCSTRING("rollOver","\x71","\xab","\xa8","\x12"),tmp30,tmp31,tmp32,tmp33,tmp34,null());		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1207)
						event = tmp35;
						HX_STACK_LINE(1208)
						event->bubbles = false;
						HX_STACK_LINE(1209)
						::openfl::events::MouseEvent tmp36 = event;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1209)
						target1->__dispatchEvent(tmp36);
					}
					HX_STACK_LINE(1213)
					bool tmp28 = target1->hasEventListener(HX_HCSTRING("rollOut","\x11","\xf9","\x11","\x5d"));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1213)
					if ((tmp28)){
						HX_STACK_LINE(1215)
						::openfl::display::DisplayObject tmp29 = target1;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1215)
						this->__rollOutStack->push(tmp29);
					}
				}
			}
		}
		HX_STACK_LINE(1223)
		::openfl::display::InteractiveObject tmp21 = target;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1223)
		::openfl::display::InteractiveObject tmp22 = this->__mouseOverTarget;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1223)
		bool tmp23 = (tmp21 != tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1223)
		if ((tmp23)){
			HX_STACK_LINE(1225)
			bool tmp24 = (target != null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1225)
			if ((tmp24)){
				HX_STACK_LINE(1227)
				bool tmp25 = (target == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1227)
				::openfl::geom::Point tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1227)
				if ((tmp25)){
					HX_STACK_LINE(1227)
					tmp26 = targetPoint;
				}
				else{
					HX_STACK_LINE(1227)
					::openfl::geom::Point tmp27 = targetPoint;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1227)
					tmp26 = target->globalToLocal(tmp27);
				}
				HX_STACK_LINE(1227)
				localPoint = tmp26;
				HX_STACK_LINE(1229)
				int tmp27 = button;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1229)
				Float tmp28 = this->__mouseX;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1229)
				Float tmp29 = this->__mouseY;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1229)
				::openfl::geom::Point tmp30 = localPoint;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1229)
				::openfl::display::InteractiveObject tmp31 = target;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1229)
				::openfl::events::MouseEvent tmp32 = ::openfl::events::MouseEvent_obj::__create(HX_HCSTRING("mouseOver","\x19","\x4a","\x0d","\xf6"),tmp27,tmp28,tmp29,tmp30,tmp31,null());		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1229)
				event = tmp32;
				HX_STACK_LINE(1230)
				event->bubbles = true;
				HX_STACK_LINE(1231)
				::openfl::events::MouseEvent tmp33 = event;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1231)
				target->__dispatchEvent(tmp33);
			}
			HX_STACK_LINE(1235)
			this->__mouseOverTarget = target;
		}
		HX_STACK_LINE(1239)
		::openfl::display::Sprite tmp24 = this->__dragObject;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1239)
		bool tmp25 = (tmp24 != null());		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1239)
		if ((tmp25)){
			HX_STACK_LINE(1241)
			::openfl::geom::Point tmp26 = targetPoint;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1241)
			this->__drag(tmp26);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Stage_obj,__onMouse,(void))

Void Stage_obj::__onMouseWheel( Float deltaX,Float deltaY){
{
		HX_STACK_FRAME("openfl.display.Stage","__onMouseWheel",0x6d35c26f,"openfl.display.Stage.__onMouseWheel","openfl/display/Stage.hx",1248,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaX,"deltaX")
		HX_STACK_ARG(deltaY,"deltaY")
		HX_STACK_LINE(1250)
		Float tmp = this->__mouseX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1250)
		Float x = tmp;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(1251)
		Float tmp1 = this->__mouseY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1251)
		Float y = tmp1;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(1253)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(1254)
		::openfl::display::InteractiveObject target = null();		HX_STACK_VAR(target,"target");
		HX_STACK_LINE(1256)
		Float tmp2 = this->__mouseX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1256)
		Float tmp3 = this->__mouseY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1256)
		bool tmp4 = this->__hitTest(tmp2,tmp3,true,stack,true,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1256)
		if ((tmp4)){
			HX_STACK_LINE(1258)
			int tmp5 = (stack->length - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1258)
			::openfl::display::DisplayObject tmp6 = stack->__get(tmp5).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1258)
			target = ((::openfl::display::InteractiveObject)(tmp6));
		}
		else{
			HX_STACK_LINE(1262)
			target = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(1263)
			stack = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(1267)
		bool tmp5 = (target == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1267)
		if ((tmp5)){
			HX_STACK_LINE(1267)
			target = hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(1268)
		::openfl::geom::Point tmp6 = ::openfl::geom::Point_obj::__new(x,y);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1268)
		::openfl::geom::Point targetPoint = tmp6;		HX_STACK_VAR(targetPoint,"targetPoint");
		HX_STACK_LINE(1269)
		{
			HX_STACK_LINE(1269)
			::openfl::geom::Matrix tmp7 = this->__displayMatrix;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1269)
			::openfl::geom::Matrix _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1269)
			Float tmp8 = (_this->a * _this->d);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1269)
			Float tmp9 = (_this->b * _this->c);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1269)
			Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1269)
			Float norm = tmp10;		HX_STACK_VAR(norm,"norm");
			HX_STACK_LINE(1269)
			bool tmp11 = (norm == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1269)
			if ((tmp11)){
				HX_STACK_LINE(1269)
				Float tmp12 = _this->tx;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1269)
				Float tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1269)
				targetPoint->x = tmp13;
				HX_STACK_LINE(1269)
				Float tmp14 = _this->ty;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1269)
				Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1269)
				targetPoint->y = tmp15;
			}
			else{
				HX_STACK_LINE(1269)
				Float tmp12 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1269)
				Float tmp13 = _this->c;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1269)
				Float tmp14 = (_this->ty - targetPoint->y);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1269)
				Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1269)
				Float tmp16 = _this->d;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1269)
				Float tmp17 = (targetPoint->x - _this->tx);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1269)
				Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1269)
				Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1269)
				Float tmp20 = (tmp12 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1269)
				Float px = tmp20;		HX_STACK_VAR(px,"px");
				HX_STACK_LINE(1269)
				Float tmp21 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1269)
				Float tmp22 = _this->a;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1269)
				Float tmp23 = (targetPoint->y - _this->ty);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1269)
				Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1269)
				Float tmp25 = _this->b;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1269)
				Float tmp26 = (_this->tx - targetPoint->x);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1269)
				Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1269)
				Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1269)
				Float tmp29 = (tmp21 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1269)
				targetPoint->y = tmp29;
				HX_STACK_LINE(1269)
				targetPoint->x = px;
			}
		}
		HX_STACK_LINE(1270)
		Float tmp7 = deltaY;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1270)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1270)
		int delta = tmp8;		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(1272)
		Float tmp9 = this->__mouseX;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1272)
		Float tmp10 = this->__mouseY;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1272)
		bool tmp11 = (target == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1272)
		::openfl::geom::Point tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1272)
		if ((tmp11)){
			HX_STACK_LINE(1272)
			tmp12 = targetPoint;
		}
		else{
			HX_STACK_LINE(1272)
			::openfl::geom::Point tmp13 = targetPoint;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1272)
			tmp12 = target->globalToLocal(tmp13);
		}
		HX_STACK_LINE(1272)
		::openfl::display::InteractiveObject tmp13 = target;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1272)
		int tmp14 = delta;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1272)
		::openfl::events::MouseEvent tmp15 = ::openfl::events::MouseEvent_obj::__create(HX_HCSTRING("mouseWheel","\x36","\x28","\x87","\xe7"),(int)0,tmp9,tmp10,tmp12,tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1272)
		this->__fireEvent(tmp15,stack);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,__onMouseWheel,(void))

Void Stage_obj::__onTouch( ::String type,::lime::ui::Touch touch){
{
		HX_STACK_FRAME("openfl.display.Stage","__onTouch",0x049ca826,"openfl.display.Stage.__onTouch","openfl/display/Stage.hx",1277,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(touch,"touch")
		HX_STACK_LINE(1279)
		Float tmp = touch->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1279)
		::lime::ui::Window tmp1 = this->window;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1279)
		int tmp2 = tmp1->__width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1279)
		Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1279)
		int tmp4 = ::Math_obj::round(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1279)
		Float tmp5 = touch->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1279)
		::lime::ui::Window tmp6 = this->window;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1279)
		int tmp7 = tmp6->__height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1279)
		Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1279)
		int tmp9 = ::Math_obj::round(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1279)
		::openfl::geom::Point tmp10 = ::openfl::geom::Point_obj::__new(tmp4,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1279)
		::openfl::geom::Point point = tmp10;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(1280)
		{
			HX_STACK_LINE(1280)
			::openfl::geom::Matrix tmp11 = this->__displayMatrix;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1280)
			::openfl::geom::Matrix _this = tmp11;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1280)
			Float tmp12 = (_this->a * _this->d);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1280)
			Float tmp13 = (_this->b * _this->c);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1280)
			Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1280)
			Float norm = tmp14;		HX_STACK_VAR(norm,"norm");
			HX_STACK_LINE(1280)
			bool tmp15 = (norm == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1280)
			if ((tmp15)){
				HX_STACK_LINE(1280)
				Float tmp16 = _this->tx;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1280)
				Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1280)
				point->x = tmp17;
				HX_STACK_LINE(1280)
				Float tmp18 = _this->ty;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1280)
				Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1280)
				point->y = tmp19;
			}
			else{
				HX_STACK_LINE(1280)
				Float tmp16 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1280)
				Float tmp17 = _this->c;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1280)
				Float tmp18 = (_this->ty - point->y);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1280)
				Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1280)
				Float tmp20 = _this->d;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1280)
				Float tmp21 = (point->x - _this->tx);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1280)
				Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1280)
				Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1280)
				Float tmp24 = (tmp16 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1280)
				Float px = tmp24;		HX_STACK_VAR(px,"px");
				HX_STACK_LINE(1280)
				Float tmp25 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1280)
				Float tmp26 = _this->a;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1280)
				Float tmp27 = (point->y - _this->ty);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1280)
				Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1280)
				Float tmp29 = _this->b;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1280)
				Float tmp30 = (_this->tx - point->x);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1280)
				Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1280)
				Float tmp32 = (tmp28 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1280)
				Float tmp33 = (tmp25 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1280)
				point->y = tmp33;
				HX_STACK_LINE(1280)
				point->x = px;
			}
		}
		HX_STACK_LINE(1282)
		Float touchX = point->x;		HX_STACK_VAR(touchX,"touchX");
		HX_STACK_LINE(1283)
		Float touchY = point->y;		HX_STACK_VAR(touchY,"touchY");
		HX_STACK_LINE(1285)
		Array< ::Dynamic > __stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(__stack,"__stack");
		HX_STACK_LINE(1287)
		Float tmp11 = touchX;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1287)
		Float tmp12 = touchY;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1287)
		bool tmp13 = this->__hitTest(tmp11,tmp12,false,__stack,true,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1287)
		if ((tmp13)){
			HX_STACK_LINE(1289)
			int tmp14 = (__stack->length - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1289)
			::openfl::display::DisplayObject tmp15 = __stack->__get(tmp14).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1289)
			::openfl::display::DisplayObject target = tmp15;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(1290)
			bool tmp16 = (target == null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1290)
			if ((tmp16)){
				HX_STACK_LINE(1290)
				target = hx::ObjectPtr<OBJ_>(this);
			}
			HX_STACK_LINE(1291)
			::openfl::geom::Point tmp17 = point;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1291)
			::openfl::geom::Point tmp18 = target->globalToLocal(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1291)
			::openfl::geom::Point localPoint = tmp18;		HX_STACK_VAR(localPoint,"localPoint");
			HX_STACK_LINE(1293)
			::String tmp19 = type;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1293)
			Float tmp20 = touchX;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1293)
			Float tmp21 = touchY;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1293)
			::openfl::geom::Point tmp22 = localPoint;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1293)
			::openfl::display::InteractiveObject tmp23 = ((::openfl::display::InteractiveObject)(target));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1293)
			::openfl::events::TouchEvent tmp24 = ::openfl::events::TouchEvent_obj::__create(tmp19,null(),tmp20,tmp21,tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1293)
			::openfl::events::TouchEvent touchEvent = tmp24;		HX_STACK_VAR(touchEvent,"touchEvent");
			HX_STACK_LINE(1294)
			touchEvent->touchPointID = touch->id;
			HX_STACK_LINE(1295)
			::lime::ui::Touch tmp25 = this->__primaryTouch;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1295)
			::lime::ui::Touch tmp26 = touch;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1295)
			bool tmp27 = (tmp25 == tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1295)
			touchEvent->isPrimaryTouchPoint = tmp27;
			HX_STACK_LINE(1297)
			::openfl::events::TouchEvent tmp28 = touchEvent;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1297)
			this->__fireEvent(tmp28,__stack);
		}
		else{
			HX_STACK_LINE(1301)
			::String tmp14 = type;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1301)
			Float tmp15 = touchX;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1301)
			Float tmp16 = touchY;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1301)
			::openfl::geom::Point tmp17 = point;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1301)
			::openfl::events::TouchEvent tmp18 = ::openfl::events::TouchEvent_obj::__create(tmp14,null(),tmp15,tmp16,tmp17,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1301)
			::openfl::events::TouchEvent touchEvent = tmp18;		HX_STACK_VAR(touchEvent,"touchEvent");
			HX_STACK_LINE(1302)
			touchEvent->touchPointID = touch->id;
			HX_STACK_LINE(1303)
			::lime::ui::Touch tmp19 = this->__primaryTouch;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1303)
			::lime::ui::Touch tmp20 = touch;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1303)
			bool tmp21 = (tmp19 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1303)
			touchEvent->isPrimaryTouchPoint = tmp21;
			HX_STACK_LINE(1305)
			::openfl::events::TouchEvent tmp22 = touchEvent;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1305)
			::openfl::display::Stage tmp23 = this->stage;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1305)
			this->__fireEvent(tmp22,Array_obj< ::Dynamic >::__new().Add(tmp23));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,__onTouch,(void))

Void Stage_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.Stage","__renderDOM",0xffe8ac52,"openfl.display.Stage.__renderDOM","openfl/display/Stage.hx",1312,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1314)
		{
			HX_STACK_LINE(1314)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1314)
			::openfl::_Vector::ObjectVector tmp = this->stage3Ds;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1314)
			::openfl::_Vector::ObjectVector _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1314)
			while((true)){
				HX_STACK_LINE(1314)
				int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1314)
				int tmp2 = _g1->get_length();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1314)
				bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1314)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1314)
				if ((tmp4)){
					HX_STACK_LINE(1314)
					break;
				}
				HX_STACK_LINE(1314)
				int tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1314)
				::openfl::display::Stage3D tmp6 = _g1->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1314)
				::openfl::display::Stage3D stage3D = tmp6;		HX_STACK_VAR(stage3D,"stage3D");
				HX_STACK_LINE(1314)
				++(_g);
				HX_STACK_LINE(1316)
				::openfl::_internal::renderer::RenderSession tmp7 = renderSession;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1316)
				stage3D->__renderDOM(hx::ObjectPtr<OBJ_>(this),tmp7);
			}
		}
		HX_STACK_LINE(1320)
		::openfl::_internal::renderer::RenderSession tmp = renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1320)
		this->super::__renderDOM(tmp);
	}
return null();
}


Void Stage_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.Stage","__renderGL",0x3f237e35,"openfl.display.Stage.__renderGL","openfl/display/Stage.hx",1325,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1327)
		{
			HX_STACK_LINE(1327)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1327)
			::openfl::_Vector::ObjectVector tmp = this->stage3Ds;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1327)
			::openfl::_Vector::ObjectVector _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1327)
			while((true)){
				HX_STACK_LINE(1327)
				int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1327)
				int tmp2 = _g1->get_length();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1327)
				bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1327)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1327)
				if ((tmp4)){
					HX_STACK_LINE(1327)
					break;
				}
				HX_STACK_LINE(1327)
				int tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1327)
				::openfl::display::Stage3D tmp6 = _g1->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1327)
				::openfl::display::Stage3D stage3D = tmp6;		HX_STACK_VAR(stage3D,"stage3D");
				HX_STACK_LINE(1327)
				++(_g);
				HX_STACK_LINE(1329)
				::openfl::_internal::renderer::RenderSession tmp7 = renderSession;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1329)
				stage3D->__renderGL(hx::ObjectPtr<OBJ_>(this),tmp7);
			}
		}
		HX_STACK_LINE(1333)
		::openfl::_internal::renderer::RenderSession tmp = renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1333)
		this->super::__renderGL(tmp);
	}
return null();
}


Void Stage_obj::__resize( ){
{
		HX_STACK_FRAME("openfl.display.Stage","__resize",0x872a0aae,"openfl.display.Stage.__resize","openfl/display/Stage.hx",1338,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1340)
		int tmp = this->stageWidth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1340)
		int cacheWidth = tmp;		HX_STACK_VAR(cacheWidth,"cacheWidth");
		HX_STACK_LINE(1341)
		int tmp1 = this->stageHeight;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1341)
		int cacheHeight = tmp1;		HX_STACK_VAR(cacheHeight,"cacheHeight");
		HX_STACK_LINE(1343)
		::lime::ui::Window tmp2 = this->window;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1343)
		int tmp3 = tmp2->__width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1343)
		::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1343)
		Float tmp5 = tmp4->__scale;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1343)
		Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1343)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1343)
		int windowWidth = tmp7;		HX_STACK_VAR(windowWidth,"windowWidth");
		HX_STACK_LINE(1344)
		::lime::ui::Window tmp8 = this->window;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1344)
		int tmp9 = tmp8->__height;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1344)
		::lime::ui::Window tmp10 = this->window;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1344)
		Float tmp11 = tmp10->__scale;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1344)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1344)
		int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1344)
		int windowHeight = tmp13;		HX_STACK_VAR(windowHeight,"windowHeight");
		HX_STACK_LINE(1346)
		::openfl::geom::Matrix tmp14 = this->__displayMatrix;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1346)
		tmp14->identity();
		HX_STACK_LINE(1348)
		int tmp15 = this->__logicalWidth;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1348)
		bool tmp16 = (tmp15 == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1348)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1348)
		if ((tmp16)){
			HX_STACK_LINE(1348)
			int tmp18 = this->__logicalHeight;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1348)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1348)
			tmp17 = (tmp19 == (int)0);
		}
		else{
			HX_STACK_LINE(1348)
			tmp17 = false;
		}
		HX_STACK_LINE(1348)
		if ((tmp17)){
			HX_STACK_LINE(1350)
			this->stageWidth = windowWidth;
			HX_STACK_LINE(1351)
			this->stageHeight = windowHeight;
		}
		else{
			HX_STACK_LINE(1355)
			int tmp18 = this->__logicalWidth;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1355)
			this->stageWidth = tmp18;
			HX_STACK_LINE(1356)
			int tmp19 = this->__logicalHeight;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1356)
			this->stageHeight = tmp19;
			HX_STACK_LINE(1358)
			int tmp20 = windowWidth;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1358)
			int tmp21 = this->stageWidth;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1358)
			Float tmp22 = (Float(tmp20) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1358)
			Float scaleX = tmp22;		HX_STACK_VAR(scaleX,"scaleX");
			HX_STACK_LINE(1359)
			int tmp23 = windowHeight;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1359)
			int tmp24 = this->stageHeight;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1359)
			Float tmp25 = (Float(tmp23) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1359)
			Float scaleY = tmp25;		HX_STACK_VAR(scaleY,"scaleY");
			HX_STACK_LINE(1360)
			Float tmp26 = scaleX;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1360)
			Float tmp27 = scaleY;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1360)
			Float tmp28 = ::Math_obj::min(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1360)
			Float targetScale = tmp28;		HX_STACK_VAR(targetScale,"targetScale");
			HX_STACK_LINE(1362)
			int tmp29 = windowWidth;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1362)
			int tmp30 = this->stageWidth;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1362)
			Float tmp31 = targetScale;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1362)
			Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1362)
			Float tmp33 = (tmp29 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1362)
			Float tmp34 = (Float(tmp33) / Float((int)2));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1362)
			int tmp35 = ::Math_obj::round(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1362)
			int offsetX = tmp35;		HX_STACK_VAR(offsetX,"offsetX");
			HX_STACK_LINE(1363)
			int tmp36 = windowHeight;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1363)
			int tmp37 = this->stageHeight;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1363)
			Float tmp38 = targetScale;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1363)
			Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1363)
			Float tmp40 = (tmp36 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1363)
			Float tmp41 = (Float(tmp40) / Float((int)2));		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1363)
			int tmp42 = ::Math_obj::round(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(1363)
			int offsetY = tmp42;		HX_STACK_VAR(offsetY,"offsetY");
			HX_STACK_LINE(1365)
			::openfl::geom::Matrix tmp43 = this->__displayMatrix;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(1365)
			Float tmp44 = targetScale;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(1365)
			Float tmp45 = targetScale;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(1365)
			tmp43->scale(tmp44,tmp45);
			HX_STACK_LINE(1366)
			::openfl::geom::Matrix tmp46 = this->__displayMatrix;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(1366)
			int tmp47 = offsetX;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(1366)
			int tmp48 = offsetY;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(1366)
			tmp46->translate(tmp47,tmp48);
		}
		HX_STACK_LINE(1370)
		{
			HX_STACK_LINE(1370)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1370)
			::openfl::_Vector::ObjectVector tmp18 = this->stage3Ds;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1370)
			::openfl::_Vector::ObjectVector _g1 = tmp18;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1370)
			while((true)){
				HX_STACK_LINE(1370)
				int tmp19 = _g;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1370)
				int tmp20 = _g1->get_length();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1370)
				bool tmp21 = (tmp19 < tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1370)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1370)
				if ((tmp22)){
					HX_STACK_LINE(1370)
					break;
				}
				HX_STACK_LINE(1370)
				int tmp23 = _g;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1370)
				::openfl::display::Stage3D tmp24 = _g1->get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1370)
				::openfl::display::Stage3D stage3D = tmp24;		HX_STACK_VAR(stage3D,"stage3D");
				HX_STACK_LINE(1370)
				++(_g);
				HX_STACK_LINE(1372)
				int tmp25 = this->stageWidth;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1372)
				int tmp26 = this->stageHeight;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1372)
				stage3D->__resize(tmp25,tmp26);
			}
		}
		HX_STACK_LINE(1376)
		::openfl::_internal::renderer::AbstractRenderer tmp18 = this->__renderer;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1376)
		bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1376)
		if ((tmp19)){
			HX_STACK_LINE(1378)
			::openfl::_internal::renderer::AbstractRenderer tmp20 = this->__renderer;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1378)
			int tmp21 = windowWidth;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1378)
			int tmp22 = windowHeight;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1378)
			tmp20->resize(tmp21,tmp22);
		}
		HX_STACK_LINE(1382)
		int tmp20 = this->stageWidth;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1382)
		int tmp21 = cacheWidth;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1382)
		bool tmp22 = (tmp20 != tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1382)
		bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1382)
		bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1382)
		if ((tmp23)){
			HX_STACK_LINE(1382)
			int tmp25 = this->stageHeight;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1382)
			int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1382)
			int tmp27 = cacheHeight;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1382)
			tmp24 = (tmp26 != tmp27);
		}
		else{
			HX_STACK_LINE(1382)
			tmp24 = true;
		}
		HX_STACK_LINE(1382)
		if ((tmp24)){
			HX_STACK_LINE(1384)
			::openfl::events::Event tmp25 = ::openfl::events::Event_obj::__new(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),null(),null());		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1384)
			this->__dispatchEvent(tmp25);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,__resize,(void))

Void Stage_obj::__setLogicalSize( int width,int height){
{
		HX_STACK_FRAME("openfl.display.Stage","__setLogicalSize",0x16d2dd62,"openfl.display.Stage.__setLogicalSize","openfl/display/Stage.hx",1391,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(1393)
		this->__logicalWidth = width;
		HX_STACK_LINE(1394)
		this->__logicalHeight = height;
		HX_STACK_LINE(1396)
		this->__resize();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,__setLogicalSize,(void))

Void Stage_obj::__startDrag( ::openfl::display::Sprite sprite,bool lockCenter,::openfl::geom::Rectangle bounds){
{
		HX_STACK_FRAME("openfl.display.Stage","__startDrag",0x2df4a4fc,"openfl.display.Stage.__startDrag","openfl/display/Stage.hx",1401,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_ARG(lockCenter,"lockCenter")
		HX_STACK_ARG(bounds,"bounds")
		HX_STACK_LINE(1403)
		bool tmp = (bounds == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1403)
		::openfl::geom::Rectangle tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1403)
		if ((tmp)){
			HX_STACK_LINE(1403)
			tmp1 = null();
		}
		else{
			HX_STACK_LINE(1403)
			tmp1 = bounds->clone();
		}
		HX_STACK_LINE(1403)
		this->__dragBounds = tmp1;
		HX_STACK_LINE(1404)
		this->__dragObject = sprite;
		HX_STACK_LINE(1406)
		::openfl::display::Sprite tmp2 = this->__dragObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1406)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1406)
		if ((tmp3)){
			HX_STACK_LINE(1408)
			bool tmp4 = lockCenter;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1408)
			if ((tmp4)){
				HX_STACK_LINE(1410)
				this->__dragOffsetX = (int)0;
				HX_STACK_LINE(1411)
				this->__dragOffsetY = (int)0;
			}
			else{
				HX_STACK_LINE(1415)
				Float tmp5 = this->get_mouseX();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1415)
				Float tmp6 = this->get_mouseY();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1415)
				::openfl::geom::Point tmp7 = ::openfl::geom::Point_obj::__new(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1415)
				::openfl::geom::Point mouse = tmp7;		HX_STACK_VAR(mouse,"mouse");
				HX_STACK_LINE(1416)
				::openfl::display::Sprite tmp8 = this->__dragObject;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1416)
				::openfl::display::DisplayObjectContainer parent = tmp8->parent;		HX_STACK_VAR(parent,"parent");
				HX_STACK_LINE(1418)
				bool tmp9 = (parent != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1418)
				if ((tmp9)){
					HX_STACK_LINE(1420)
					::openfl::geom::Matrix tmp10 = parent->__getWorldTransform();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1420)
					::openfl::geom::Matrix _this = tmp10;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1420)
					Float tmp11 = (_this->a * _this->d);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1420)
					Float tmp12 = (_this->b * _this->c);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1420)
					Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1420)
					Float norm = tmp13;		HX_STACK_VAR(norm,"norm");
					HX_STACK_LINE(1420)
					bool tmp14 = (norm == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1420)
					if ((tmp14)){
						HX_STACK_LINE(1420)
						Float tmp15 = _this->tx;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1420)
						Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1420)
						mouse->x = tmp16;
						HX_STACK_LINE(1420)
						Float tmp17 = _this->ty;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1420)
						Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1420)
						mouse->y = tmp18;
					}
					else{
						HX_STACK_LINE(1420)
						Float tmp15 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1420)
						Float tmp16 = _this->c;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1420)
						Float tmp17 = (_this->ty - mouse->y);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1420)
						Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1420)
						Float tmp19 = _this->d;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1420)
						Float tmp20 = (mouse->x - _this->tx);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1420)
						Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1420)
						Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1420)
						Float tmp23 = (tmp15 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1420)
						Float px = tmp23;		HX_STACK_VAR(px,"px");
						HX_STACK_LINE(1420)
						Float tmp24 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1420)
						Float tmp25 = _this->a;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1420)
						Float tmp26 = (mouse->y - _this->ty);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1420)
						Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1420)
						Float tmp28 = _this->b;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1420)
						Float tmp29 = (_this->tx - mouse->x);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1420)
						Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1420)
						Float tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1420)
						Float tmp32 = (tmp24 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1420)
						mouse->y = tmp32;
						HX_STACK_LINE(1420)
						mouse->x = px;
					}
				}
				HX_STACK_LINE(1424)
				::openfl::display::Sprite tmp10 = this->__dragObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1424)
				Float tmp11 = tmp10->get_x();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1424)
				Float tmp12 = mouse->x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1424)
				Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1424)
				this->__dragOffsetX = tmp13;
				HX_STACK_LINE(1425)
				::openfl::display::Sprite tmp14 = this->__dragObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1425)
				Float tmp15 = tmp14->get_y();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1425)
				Float tmp16 = mouse->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1425)
				Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1425)
				this->__dragOffsetY = tmp17;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,__startDrag,(void))

Void Stage_obj::__stopDrag( ::openfl::display::Sprite sprite){
{
		HX_STACK_FRAME("openfl.display.Stage","__stopDrag",0x21724450,"openfl.display.Stage.__stopDrag","openfl/display/Stage.hx",1434,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(1436)
		this->__dragBounds = null();
		HX_STACK_LINE(1437)
		this->__dragObject = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__stopDrag,(void))

Void Stage_obj::__update( bool transformOnly,bool updateChildren,::openfl::display::Graphics maskGrahpics){
{
		HX_STACK_FRAME("openfl.display.Stage","__update",0x05b436c3,"openfl.display.Stage.__update","openfl/display/Stage.hx",1442,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_ARG(updateChildren,"updateChildren")
		HX_STACK_ARG(maskGrahpics,"maskGrahpics")
		HX_STACK_LINE(1444)
		bool tmp = transformOnly;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1444)
		if ((tmp)){
			HX_STACK_LINE(1446)
			int tmp1 = ::openfl::display::DisplayObject_obj::__worldTransformDirty;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1446)
			bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1446)
			if ((tmp2)){
				HX_STACK_LINE(1448)
				bool tmp3 = updateChildren;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1448)
				::openfl::display::Graphics tmp4 = maskGrahpics;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1448)
				this->super::__update(true,tmp3,tmp4);
				HX_STACK_LINE(1450)
				bool tmp5 = updateChildren;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1450)
				if ((tmp5)){
					HX_STACK_LINE(1452)
					::openfl::display::DisplayObject_obj::__worldTransformDirty = (int)0;
					HX_STACK_LINE(1453)
					this->__dirty = true;
				}
			}
		}
		else{
			HX_STACK_LINE(1461)
			int tmp1 = ::openfl::display::DisplayObject_obj::__worldTransformDirty;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1461)
			bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1461)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1461)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1461)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1461)
			if ((tmp4)){
				HX_STACK_LINE(1461)
				tmp5 = this->__dirty;
			}
			else{
				HX_STACK_LINE(1461)
				tmp5 = true;
			}
			HX_STACK_LINE(1461)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1461)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1461)
			if ((tmp6)){
				HX_STACK_LINE(1461)
				int tmp8 = ::openfl::display::DisplayObject_obj::__worldRenderDirty;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1461)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1461)
				tmp7 = (tmp9 > (int)0);
			}
			else{
				HX_STACK_LINE(1461)
				tmp7 = true;
			}
			HX_STACK_LINE(1461)
			if ((tmp7)){
				HX_STACK_LINE(1463)
				bool tmp8 = updateChildren;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1463)
				::openfl::display::Graphics tmp9 = maskGrahpics;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1463)
				this->super::__update(false,tmp8,tmp9);
				HX_STACK_LINE(1465)
				bool tmp10 = updateChildren;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1465)
				if ((tmp10)){
					HX_STACK_LINE(1471)
					::openfl::display::DisplayObject_obj::__worldTransformDirty = (int)0;
					HX_STACK_LINE(1472)
					::openfl::display::DisplayObject_obj::__worldRenderDirty = (int)0;
					HX_STACK_LINE(1473)
					this->__dirty = false;
				}
			}
		}
	}
return null();
}


int Stage_obj::get_color( ){
	HX_STACK_FRAME("openfl.display.Stage","get_color",0x66e36ee0,"openfl.display.Stage.get_color","openfl/display/Stage.hx",1504,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1506)
	int tmp = this->__color;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1506)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_color,return )

int Stage_obj::set_color( int value){
	HX_STACK_FRAME("openfl.display.Stage","set_color",0x4a345aec,"openfl.display.Stage.set_color","openfl/display/Stage.hx",1511,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1513)
	int tmp = (int(value) & int((int)16711680));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1513)
	int tmp1 = hx::UShr(tmp,(int)16);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1513)
	int r = tmp1;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(1514)
	int tmp2 = (int(value) & int((int)65280));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1514)
	int tmp3 = hx::UShr(tmp2,(int)8);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1514)
	int g = tmp3;		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(1515)
	int tmp4 = (int(value) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1515)
	int b = tmp4;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(1517)
	Float tmp5 = (Float(r) / Float((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1517)
	Float tmp6 = (Float(g) / Float((int)255));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1517)
	Float tmp7 = (Float(b) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1517)
	this->__colorSplit = Array_obj< Float >::__new().Add(tmp5).Add(tmp6).Add(tmp7);
	HX_STACK_LINE(1518)
	int tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1518)
	::String tmp9 = ::StringTools_obj::hex(tmp8,(int)6);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1518)
	::String tmp10 = (HX_HCSTRING("#","\x23","\x00","\x00","\x00") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1518)
	this->__colorString = tmp10;
	HX_STACK_LINE(1520)
	int tmp11 = this->__color = value;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1520)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_color,return )

Dynamic Stage_obj::get_displayState( ){
	HX_STACK_FRAME("openfl.display.Stage","get_displayState",0x7908a892,"openfl.display.Stage.get_displayState","openfl/display/Stage.hx",1525,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1527)
	Dynamic tmp = this->__displayState;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1527)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_displayState,return )

Dynamic Stage_obj::set_displayState( Dynamic value){
	HX_STACK_FRAME("openfl.display.Stage","set_displayState",0xcf4a9606,"openfl.display.Stage.set_displayState","openfl/display/Stage.hx",1532,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1534)
	::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1534)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1534)
	if ((tmp1)){
		HX_STACK_LINE(1536)
		Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1536)
		switch( (int)(tmp2)){
			case (int)2: {
				HX_STACK_LINE(1540)
				::lime::ui::Window tmp3 = this->window;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1540)
				bool tmp4 = tmp3->__fullscreen;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1540)
				if ((tmp4)){
					HX_STACK_LINE(1543)
					::lime::ui::Window tmp5 = this->window;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1543)
					tmp5->set_fullscreen(false);
				}
			}
			;break;
			default: {
				HX_STACK_LINE(1549)
				::lime::ui::Window tmp3 = this->window;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1549)
				bool tmp4 = tmp3->__fullscreen;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1549)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1549)
				if ((tmp5)){
					HX_STACK_LINE(1552)
					::lime::ui::Window tmp6 = this->window;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1552)
					tmp6->set_fullscreen(true);
				}
			}
		}
	}
	HX_STACK_LINE(1560)
	Dynamic tmp2 = this->__displayState = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1560)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_displayState,return )

::openfl::display::InteractiveObject Stage_obj::get_focus( ){
	HX_STACK_FRAME("openfl.display.Stage","get_focus",0x21105d55,"openfl.display.Stage.get_focus","openfl/display/Stage.hx",1565,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1567)
	::openfl::display::InteractiveObject tmp = this->__focus;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1567)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_focus,return )

::openfl::display::InteractiveObject Stage_obj::set_focus( ::openfl::display::InteractiveObject value){
	HX_STACK_FRAME("openfl.display.Stage","set_focus",0x04614961,"openfl.display.Stage.set_focus","openfl/display/Stage.hx",1572,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1574)
	::openfl::display::InteractiveObject tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1574)
	::openfl::display::InteractiveObject tmp1 = this->__focus;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1574)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1574)
	if ((tmp2)){
		HX_STACK_LINE(1576)
		::openfl::display::InteractiveObject tmp3 = this->__focus;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1576)
		::openfl::display::InteractiveObject oldFocus = tmp3;		HX_STACK_VAR(oldFocus,"oldFocus");
		HX_STACK_LINE(1577)
		this->__focus = value;
		HX_STACK_LINE(1578)
		this->__cacheFocus = value;
		HX_STACK_LINE(1580)
		bool tmp4 = (oldFocus != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1580)
		if ((tmp4)){
			HX_STACK_LINE(1582)
			::openfl::display::InteractiveObject tmp5 = this->__focus;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1582)
			::openfl::events::FocusEvent tmp6 = ::openfl::events::FocusEvent_obj::__new(HX_HCSTRING("focusOut","\x96","\x6f","\x5e","\x11"),true,false,tmp5,false,(int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1582)
			::openfl::events::FocusEvent event = tmp6;		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(1583)
			Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
			HX_STACK_LINE(1584)
			oldFocus->__getInteractive(stack);
			HX_STACK_LINE(1585)
			stack->reverse();
			HX_STACK_LINE(1586)
			::openfl::events::FocusEvent tmp7 = event;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1586)
			this->__fireEvent(tmp7,stack);
		}
		HX_STACK_LINE(1590)
		::openfl::display::InteractiveObject tmp5 = this->__focus;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1590)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1590)
		if ((tmp6)){
			HX_STACK_LINE(1592)
			::openfl::events::FocusEvent tmp7 = ::openfl::events::FocusEvent_obj::__new(HX_HCSTRING("focusIn","\xdd","\x45","\x83","\x41"),true,false,oldFocus,false,(int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1592)
			::openfl::events::FocusEvent event = tmp7;		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(1593)
			Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
			HX_STACK_LINE(1594)
			value->__getInteractive(stack);
			HX_STACK_LINE(1595)
			stack->reverse();
			HX_STACK_LINE(1596)
			::openfl::events::FocusEvent tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1596)
			this->__fireEvent(tmp8,stack);
		}
	}
	HX_STACK_LINE(1602)
	::openfl::display::InteractiveObject tmp3 = this->__focus;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1602)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_focus,return )

Float Stage_obj::get_frameRate( ){
	HX_STACK_FRAME("openfl.display.Stage","get_frameRate",0x6a8511aa,"openfl.display.Stage.get_frameRate","openfl/display/Stage.hx",1607,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1609)
	::lime::app::Application tmp = this->application;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1609)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1609)
	if ((tmp1)){
		HX_STACK_LINE(1611)
		::lime::app::Application tmp2 = this->application;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1611)
		Float tmp3 = tmp2->backend->getFrameRate();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1611)
		return tmp3;
	}
	HX_STACK_LINE(1615)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_frameRate,return )

Float Stage_obj::set_frameRate( Float value){
	HX_STACK_FRAME("openfl.display.Stage","set_frameRate",0xaf8af3b6,"openfl.display.Stage.set_frameRate","openfl/display/Stage.hx",1620,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1622)
	::lime::app::Application tmp = this->application;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1622)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1622)
	if ((tmp1)){
		HX_STACK_LINE(1624)
		::lime::app::Application tmp2 = this->application;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1624)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1624)
		Float tmp4 = tmp2->backend->setFrameRate(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1624)
		return tmp4;
	}
	HX_STACK_LINE(1628)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1628)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_frameRate,return )

Float Stage_obj::get_mouseX( ){
	HX_STACK_FRAME("openfl.display.Stage","get_mouseX",0xa5a51a76,"openfl.display.Stage.get_mouseX","openfl/display/Stage.hx",1633,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1635)
	Float tmp = this->__mouseX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1635)
	return tmp;
}


Float Stage_obj::get_mouseY( ){
	HX_STACK_FRAME("openfl.display.Stage","get_mouseY",0xa5a51a77,"openfl.display.Stage.get_mouseY","openfl/display/Stage.hx",1640,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1642)
	Float tmp = this->__mouseY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1642)
	return tmp;
}



Stage_obj::Stage_obj()
{
}

void Stage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stage);
	HX_MARK_MEMBER_NAME(align,"align");
	HX_MARK_MEMBER_NAME(allowsFullScreen,"allowsFullScreen");
	HX_MARK_MEMBER_NAME(allowsFullScreenInteractive,"allowsFullScreenInteractive");
	HX_MARK_MEMBER_NAME(application,"application");
	HX_MARK_MEMBER_NAME(quality,"quality");
	HX_MARK_MEMBER_NAME(scaleMode,"scaleMode");
	HX_MARK_MEMBER_NAME(stage3Ds,"stage3Ds");
	HX_MARK_MEMBER_NAME(stageFocusRect,"stageFocusRect");
	HX_MARK_MEMBER_NAME(stageHeight,"stageHeight");
	HX_MARK_MEMBER_NAME(stageWidth,"stageWidth");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(__cacheFocus,"__cacheFocus");
	HX_MARK_MEMBER_NAME(__clearBeforeRender,"__clearBeforeRender");
	HX_MARK_MEMBER_NAME(__color,"__color");
	HX_MARK_MEMBER_NAME(__colorSplit,"__colorSplit");
	HX_MARK_MEMBER_NAME(__colorString,"__colorString");
	HX_MARK_MEMBER_NAME(__deltaTime,"__deltaTime");
	HX_MARK_MEMBER_NAME(__dirty,"__dirty");
	HX_MARK_MEMBER_NAME(__displayMatrix,"__displayMatrix");
	HX_MARK_MEMBER_NAME(__displayState,"__displayState");
	HX_MARK_MEMBER_NAME(__dragBounds,"__dragBounds");
	HX_MARK_MEMBER_NAME(__dragObject,"__dragObject");
	HX_MARK_MEMBER_NAME(__dragOffsetX,"__dragOffsetX");
	HX_MARK_MEMBER_NAME(__dragOffsetY,"__dragOffsetY");
	HX_MARK_MEMBER_NAME(__focus,"__focus");
	HX_MARK_MEMBER_NAME(__fullscreen,"__fullscreen");
	HX_MARK_MEMBER_NAME(__invalidated,"__invalidated");
	HX_MARK_MEMBER_NAME(__lastClickTime,"__lastClickTime");
	HX_MARK_MEMBER_NAME(__logicalWidth,"__logicalWidth");
	HX_MARK_MEMBER_NAME(__logicalHeight,"__logicalHeight");
	HX_MARK_MEMBER_NAME(__macKeyboard,"__macKeyboard");
	HX_MARK_MEMBER_NAME(__mouseDownLeft,"__mouseDownLeft");
	HX_MARK_MEMBER_NAME(__mouseDownMiddle,"__mouseDownMiddle");
	HX_MARK_MEMBER_NAME(__mouseDownRight,"__mouseDownRight");
	HX_MARK_MEMBER_NAME(__mouseOverTarget,"__mouseOverTarget");
	HX_MARK_MEMBER_NAME(__mouseX,"__mouseX");
	HX_MARK_MEMBER_NAME(__mouseY,"__mouseY");
	HX_MARK_MEMBER_NAME(__primaryTouch,"__primaryTouch");
	HX_MARK_MEMBER_NAME(__renderer,"__renderer");
	HX_MARK_MEMBER_NAME(__rendering,"__rendering");
	HX_MARK_MEMBER_NAME(__rollOutStack,"__rollOutStack");
	HX_MARK_MEMBER_NAME(__stack,"__stack");
	HX_MARK_MEMBER_NAME(__transparent,"__transparent");
	HX_MARK_MEMBER_NAME(__wasDirty,"__wasDirty");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(align,"align");
	HX_VISIT_MEMBER_NAME(allowsFullScreen,"allowsFullScreen");
	HX_VISIT_MEMBER_NAME(allowsFullScreenInteractive,"allowsFullScreenInteractive");
	HX_VISIT_MEMBER_NAME(application,"application");
	HX_VISIT_MEMBER_NAME(quality,"quality");
	HX_VISIT_MEMBER_NAME(scaleMode,"scaleMode");
	HX_VISIT_MEMBER_NAME(stage3Ds,"stage3Ds");
	HX_VISIT_MEMBER_NAME(stageFocusRect,"stageFocusRect");
	HX_VISIT_MEMBER_NAME(stageHeight,"stageHeight");
	HX_VISIT_MEMBER_NAME(stageWidth,"stageWidth");
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(__cacheFocus,"__cacheFocus");
	HX_VISIT_MEMBER_NAME(__clearBeforeRender,"__clearBeforeRender");
	HX_VISIT_MEMBER_NAME(__color,"__color");
	HX_VISIT_MEMBER_NAME(__colorSplit,"__colorSplit");
	HX_VISIT_MEMBER_NAME(__colorString,"__colorString");
	HX_VISIT_MEMBER_NAME(__deltaTime,"__deltaTime");
	HX_VISIT_MEMBER_NAME(__dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(__displayMatrix,"__displayMatrix");
	HX_VISIT_MEMBER_NAME(__displayState,"__displayState");
	HX_VISIT_MEMBER_NAME(__dragBounds,"__dragBounds");
	HX_VISIT_MEMBER_NAME(__dragObject,"__dragObject");
	HX_VISIT_MEMBER_NAME(__dragOffsetX,"__dragOffsetX");
	HX_VISIT_MEMBER_NAME(__dragOffsetY,"__dragOffsetY");
	HX_VISIT_MEMBER_NAME(__focus,"__focus");
	HX_VISIT_MEMBER_NAME(__fullscreen,"__fullscreen");
	HX_VISIT_MEMBER_NAME(__invalidated,"__invalidated");
	HX_VISIT_MEMBER_NAME(__lastClickTime,"__lastClickTime");
	HX_VISIT_MEMBER_NAME(__logicalWidth,"__logicalWidth");
	HX_VISIT_MEMBER_NAME(__logicalHeight,"__logicalHeight");
	HX_VISIT_MEMBER_NAME(__macKeyboard,"__macKeyboard");
	HX_VISIT_MEMBER_NAME(__mouseDownLeft,"__mouseDownLeft");
	HX_VISIT_MEMBER_NAME(__mouseDownMiddle,"__mouseDownMiddle");
	HX_VISIT_MEMBER_NAME(__mouseDownRight,"__mouseDownRight");
	HX_VISIT_MEMBER_NAME(__mouseOverTarget,"__mouseOverTarget");
	HX_VISIT_MEMBER_NAME(__mouseX,"__mouseX");
	HX_VISIT_MEMBER_NAME(__mouseY,"__mouseY");
	HX_VISIT_MEMBER_NAME(__primaryTouch,"__primaryTouch");
	HX_VISIT_MEMBER_NAME(__renderer,"__renderer");
	HX_VISIT_MEMBER_NAME(__rendering,"__rendering");
	HX_VISIT_MEMBER_NAME(__rollOutStack,"__rollOutStack");
	HX_VISIT_MEMBER_NAME(__stack,"__stack");
	HX_VISIT_MEMBER_NAME(__transparent,"__transparent");
	HX_VISIT_MEMBER_NAME(__wasDirty,"__wasDirty");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Stage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { return align; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return get_color(); }
		if (HX_FIELD_EQ(inName,"focus") ) { if (inCallProp == hx::paccAlways) return get_focus(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { return window; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"__drag") ) { return __drag_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { return quality; }
		if (HX_FIELD_EQ(inName,"__color") ) { return __color; }
		if (HX_FIELD_EQ(inName,"__dirty") ) { return __dirty; }
		if (HX_FIELD_EQ(inName,"__focus") ) { return __focus; }
		if (HX_FIELD_EQ(inName,"__stack") ) { return __stack; }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		if (HX_FIELD_EQ(inName,"__onKey") ) { return __onKey_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stage3Ds") ) { return stage3Ds; }
		if (HX_FIELD_EQ(inName,"__mouseX") ) { return __mouseX; }
		if (HX_FIELD_EQ(inName,"__mouseY") ) { return __mouseY; }
		if (HX_FIELD_EQ(inName,"__resize") ) { return __resize_dyn(); }
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp == hx::paccAlways) return get_frameRate(); }
		if (HX_FIELD_EQ(inName,"scaleMode") ) { return scaleMode; }
		if (HX_FIELD_EQ(inName,"addWindow") ) { return addWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"__onMouse") ) { return __onMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"__onTouch") ) { return __onTouch_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_focus") ) { return get_focus_dyn(); }
		if (HX_FIELD_EQ(inName,"set_focus") ) { return set_focus_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stageWidth") ) { return stageWidth; }
		if (HX_FIELD_EQ(inName,"__renderer") ) { return __renderer; }
		if (HX_FIELD_EQ(inName,"__wasDirty") ) { return __wasDirty; }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"onTextEdit") ) { return onTextEdit_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { return onTouchEnd_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		if (HX_FIELD_EQ(inName,"__stopDrag") ) { return __stopDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return get_mouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return get_mouseY_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"application") ) { return application; }
		if (HX_FIELD_EQ(inName,"stageHeight") ) { return stageHeight; }
		if (HX_FIELD_EQ(inName,"__deltaTime") ) { return __deltaTime; }
		if (HX_FIELD_EQ(inName,"__rendering") ) { return __rendering; }
		if (HX_FIELD_EQ(inName,"addRenderer") ) { return addRenderer_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onTextInput") ) { return onTextInput_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return onTouchMove_dyn(); }
		if (HX_FIELD_EQ(inName,"__fireEvent") ) { return __fireEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		if (HX_FIELD_EQ(inName,"__startDrag") ) { return __startDrag_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"displayState") ) { if (inCallProp == hx::paccAlways) return get_displayState(); }
		if (HX_FIELD_EQ(inName,"__cacheFocus") ) { return __cacheFocus; }
		if (HX_FIELD_EQ(inName,"__colorSplit") ) { return __colorSplit; }
		if (HX_FIELD_EQ(inName,"__dragBounds") ) { return __dragBounds; }
		if (HX_FIELD_EQ(inName,"__dragObject") ) { return __dragObject; }
		if (HX_FIELD_EQ(inName,"__fullscreen") ) { return __fullscreen; }
		if (HX_FIELD_EQ(inName,"removeWindow") ) { return removeWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"setPreloader") ) { return setPreloader_dyn(); }
		if (HX_FIELD_EQ(inName,"onModuleExit") ) { return onModuleExit_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchStart") ) { return onTouchStart_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowMove") ) { return onWindowMove_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__colorString") ) { return __colorString; }
		if (HX_FIELD_EQ(inName,"__dragOffsetX") ) { return __dragOffsetX; }
		if (HX_FIELD_EQ(inName,"__dragOffsetY") ) { return __dragOffsetY; }
		if (HX_FIELD_EQ(inName,"__invalidated") ) { return __invalidated; }
		if (HX_FIELD_EQ(inName,"__macKeyboard") ) { return __macKeyboard; }
		if (HX_FIELD_EQ(inName,"__transparent") ) { return __transparent; }
		if (HX_FIELD_EQ(inName,"globalToLocal") ) { return globalToLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"localToGlobal") ) { return localToGlobal_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowClose") ) { return onWindowClose_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowEnter") ) { return onWindowEnter_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowLeave") ) { return onWindowLeave_dyn(); }
		if (HX_FIELD_EQ(inName,"get_frameRate") ) { return get_frameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frameRate") ) { return set_frameRate_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stageFocusRect") ) { return stageFocusRect; }
		if (HX_FIELD_EQ(inName,"__displayState") ) { return __displayState; }
		if (HX_FIELD_EQ(inName,"__logicalWidth") ) { return __logicalWidth; }
		if (HX_FIELD_EQ(inName,"__primaryTouch") ) { return __primaryTouch; }
		if (HX_FIELD_EQ(inName,"__rollOutStack") ) { return __rollOutStack; }
		if (HX_FIELD_EQ(inName,"registerModule") ) { return registerModule_dyn(); }
		if (HX_FIELD_EQ(inName,"removeRenderer") ) { return removeRenderer_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowCreate") ) { return onWindowCreate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowResize") ) { return onWindowResize_dyn(); }
		if (HX_FIELD_EQ(inName,"__onMouseWheel") ) { return __onMouseWheel_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__displayMatrix") ) { return __displayMatrix; }
		if (HX_FIELD_EQ(inName,"__lastClickTime") ) { return __lastClickTime; }
		if (HX_FIELD_EQ(inName,"__logicalHeight") ) { return __logicalHeight; }
		if (HX_FIELD_EQ(inName,"__mouseDownLeft") ) { return __mouseDownLeft; }
		if (HX_FIELD_EQ(inName,"onWindowFocusIn") ) { return onWindowFocusIn_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowRestore") ) { return onWindowRestore_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"allowsFullScreen") ) { return allowsFullScreen; }
		if (HX_FIELD_EQ(inName,"__mouseDownRight") ) { return __mouseDownRight; }
		if (HX_FIELD_EQ(inName,"unregisterModule") ) { return unregisterModule_dyn(); }
		if (HX_FIELD_EQ(inName,"onGamepadConnect") ) { return onGamepadConnect_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowActivate") ) { return onWindowActivate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowDropFile") ) { return onWindowDropFile_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowFocusOut") ) { return onWindowFocusOut_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowMinimize") ) { return onWindowMinimize_dyn(); }
		if (HX_FIELD_EQ(inName,"__broadcastEvent") ) { return __broadcastEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"__getInteractive") ) { return __getInteractive_dyn(); }
		if (HX_FIELD_EQ(inName,"__setLogicalSize") ) { return __setLogicalSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_displayState") ) { return get_displayState_dyn(); }
		if (HX_FIELD_EQ(inName,"set_displayState") ) { return set_displayState_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__mouseDownMiddle") ) { return __mouseDownMiddle; }
		if (HX_FIELD_EQ(inName,"__mouseOverTarget") ) { return __mouseOverTarget; }
		if (HX_FIELD_EQ(inName,"onGamepadAxisMove") ) { return onGamepadAxisMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onGamepadButtonUp") ) { return onGamepadButtonUp_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoystickConnect") ) { return onJoystickConnect_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoystickHatMove") ) { return onJoystickHatMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onPreloadComplete") ) { return onPreloadComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"onPreloadProgress") ) { return onPreloadProgress_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onJoystickAxisMove") ) { return onJoystickAxisMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoystickButtonUp") ) { return onJoystickButtonUp_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowDeactivate") ) { return onWindowDeactivate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowFullscreen") ) { return onWindowFullscreen_dyn(); }
		if (HX_FIELD_EQ(inName,"__onGamepadConnect") ) { return __onGamepadConnect_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__clearBeforeRender") ) { return __clearBeforeRender; }
		if (HX_FIELD_EQ(inName,"onGamepadButtonDown") ) { return onGamepadButtonDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onGamepadDisconnect") ) { return onGamepadDisconnect_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMoveRelative") ) { return onMouseMoveRelative_dyn(); }
		if (HX_FIELD_EQ(inName,"onRenderContextLost") ) { return onRenderContextLost_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"onJoystickButtonDown") ) { return onJoystickButtonDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoystickDisconnect") ) { return onJoystickDisconnect_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onJoystickTrackballMove") ) { return onJoystickTrackballMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onRenderContextRestored") ) { return onRenderContextRestored_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"allowsFullScreenInteractive") ) { return allowsFullScreenInteractive; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stage_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { align=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return set_color(inValue); }
		if (HX_FIELD_EQ(inName,"focus") ) { if (inCallProp == hx::paccAlways) return set_focus(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::lime::ui::Window >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { quality=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__color") ) { __color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dirty") ) { __dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__focus") ) { __focus=inValue.Cast< ::openfl::display::InteractiveObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__stack") ) { __stack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stage3Ds") ) { stage3Ds=inValue.Cast< ::openfl::_Vector::ObjectVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mouseX") ) { __mouseX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mouseY") ) { __mouseY=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp == hx::paccAlways) return set_frameRate(inValue); }
		if (HX_FIELD_EQ(inName,"scaleMode") ) { scaleMode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stageWidth") ) { stageWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__renderer") ) { __renderer=inValue.Cast< ::openfl::_internal::renderer::AbstractRenderer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__wasDirty") ) { __wasDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"application") ) { application=inValue.Cast< ::lime::app::Application >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageHeight") ) { stageHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__deltaTime") ) { __deltaTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rendering") ) { __rendering=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"displayState") ) { if (inCallProp == hx::paccAlways) return set_displayState(inValue); }
		if (HX_FIELD_EQ(inName,"__cacheFocus") ) { __cacheFocus=inValue.Cast< ::openfl::display::InteractiveObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__colorSplit") ) { __colorSplit=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dragBounds") ) { __dragBounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dragObject") ) { __dragObject=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__fullscreen") ) { __fullscreen=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__colorString") ) { __colorString=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dragOffsetX") ) { __dragOffsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dragOffsetY") ) { __dragOffsetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__invalidated") ) { __invalidated=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__macKeyboard") ) { __macKeyboard=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__transparent") ) { __transparent=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stageFocusRect") ) { stageFocusRect=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__displayState") ) { __displayState=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__logicalWidth") ) { __logicalWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__primaryTouch") ) { __primaryTouch=inValue.Cast< ::lime::ui::Touch >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rollOutStack") ) { __rollOutStack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__displayMatrix") ) { __displayMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__lastClickTime") ) { __lastClickTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__logicalHeight") ) { __logicalHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mouseDownLeft") ) { __mouseDownLeft=inValue.Cast< ::openfl::display::InteractiveObject >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"allowsFullScreen") ) { allowsFullScreen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mouseDownRight") ) { __mouseDownRight=inValue.Cast< ::openfl::display::InteractiveObject >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__mouseDownMiddle") ) { __mouseDownMiddle=inValue.Cast< ::openfl::display::InteractiveObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mouseOverTarget") ) { __mouseOverTarget=inValue.Cast< ::openfl::display::InteractiveObject >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__clearBeforeRender") ) { __clearBeforeRender=inValue.Cast< bool >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"allowsFullScreenInteractive") ) { allowsFullScreenInteractive=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"));
	outFields->push(HX_HCSTRING("allowsFullScreen","\xc5","\x66","\xdc","\x4b"));
	outFields->push(HX_HCSTRING("allowsFullScreenInteractive","\x1d","\x8b","\x2c","\xc8"));
	outFields->push(HX_HCSTRING("application","\x50","\xab","\x3e","\x2a"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("displayState","\x6f","\x4c","\x64","\x90"));
	outFields->push(HX_HCSTRING("focus","\xd8","\x5f","\x89","\x04"));
	outFields->push(HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"));
	outFields->push(HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"));
	outFields->push(HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"));
	outFields->push(HX_HCSTRING("stage3Ds","\xa4","\x4e","\x30","\xe3"));
	outFields->push(HX_HCSTRING("stageFocusRect","\x7e","\xd2","\x81","\x74"));
	outFields->push(HX_HCSTRING("stageHeight","\x45","\x89","\x45","\x95"));
	outFields->push(HX_HCSTRING("stageWidth","\x68","\x0a","\xb3","\x1d"));
	outFields->push(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"));
	outFields->push(HX_HCSTRING("__cacheFocus","\x56","\x41","\xd5","\x7f"));
	outFields->push(HX_HCSTRING("__clearBeforeRender","\x42","\xa3","\xd5","\xf3"));
	outFields->push(HX_HCSTRING("__color","\x43","\xca","\xba","\xb4"));
	outFields->push(HX_HCSTRING("__colorSplit","\x97","\x7d","\x6e","\xde"));
	outFields->push(HX_HCSTRING("__colorString","\x74","\xfb","\xd0","\x13"));
	outFields->push(HX_HCSTRING("__deltaTime","\x05","\x85","\x88","\x23"));
	outFields->push(HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"));
	outFields->push(HX_HCSTRING("__displayMatrix","\x03","\x2b","\xdd","\x04"));
	outFields->push(HX_HCSTRING("__displayState","\x8f","\xcf","\x24","\xb1"));
	outFields->push(HX_HCSTRING("__dragBounds","\xa9","\x10","\x1d","\x47"));
	outFields->push(HX_HCSTRING("__dragObject","\xf3","\x08","\x3f","\xf6"));
	outFields->push(HX_HCSTRING("__dragOffsetX","\xb1","\x6c","\xfe","\xd5"));
	outFields->push(HX_HCSTRING("__dragOffsetY","\xb2","\x6c","\xfe","\xd5"));
	outFields->push(HX_HCSTRING("__focus","\xb8","\xb8","\xe7","\x6e"));
	outFields->push(HX_HCSTRING("__fullscreen","\x5b","\xb5","\x47","\x32"));
	outFields->push(HX_HCSTRING("__invalidated","\x69","\x73","\x24","\x06"));
	outFields->push(HX_HCSTRING("__lastClickTime","\x1f","\x4c","\xe7","\xb1"));
	outFields->push(HX_HCSTRING("__logicalWidth","\x9d","\xce","\x2c","\x0d"));
	outFields->push(HX_HCSTRING("__logicalHeight","\x70","\x73","\x57","\x30"));
	outFields->push(HX_HCSTRING("__macKeyboard","\x36","\x6b","\x9a","\xd8"));
	outFields->push(HX_HCSTRING("__mouseDownLeft","\xae","\x3d","\x4b","\x93"));
	outFields->push(HX_HCSTRING("__mouseDownMiddle","\xbc","\x00","\x70","\x1d"));
	outFields->push(HX_HCSTRING("__mouseDownRight","\x55","\xc8","\x97","\xc5"));
	outFields->push(HX_HCSTRING("__mouseOverTarget","\x2a","\xfb","\x94","\x00"));
	outFields->push(HX_HCSTRING("__mouseX","\xb3","\xb5","\x3d","\x74"));
	outFields->push(HX_HCSTRING("__mouseY","\xb4","\xb5","\x3d","\x74"));
	outFields->push(HX_HCSTRING("__primaryTouch","\xbd","\x6b","\x1c","\x30"));
	outFields->push(HX_HCSTRING("__renderer","\x63","\x38","\x14","\x56"));
	outFields->push(HX_HCSTRING("__rendering","\x2c","\x24","\xa0","\xfb"));
	outFields->push(HX_HCSTRING("__rollOutStack","\x97","\xe3","\x31","\x86"));
	outFields->push(HX_HCSTRING("__stack","\x28","\xc0","\x69","\xee"));
	outFields->push(HX_HCSTRING("__transparent","\x32","\x6c","\x32","\x6b"));
	outFields->push(HX_HCSTRING("__wasDirty","\x49","\xbd","\x55","\x63"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Stage_obj,align),HX_HCSTRING("align","\xc5","\x56","\x91","\x21")},
	{hx::fsBool,(int)offsetof(Stage_obj,allowsFullScreen),HX_HCSTRING("allowsFullScreen","\xc5","\x66","\xdc","\x4b")},
	{hx::fsBool,(int)offsetof(Stage_obj,allowsFullScreenInteractive),HX_HCSTRING("allowsFullScreenInteractive","\x1d","\x8b","\x2c","\xc8")},
	{hx::fsObject /*::lime::app::Application*/ ,(int)offsetof(Stage_obj,application),HX_HCSTRING("application","\x50","\xab","\x3e","\x2a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Stage_obj,quality),HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Stage_obj,scaleMode),HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b")},
	{hx::fsObject /*::openfl::_Vector::ObjectVector*/ ,(int)offsetof(Stage_obj,stage3Ds),HX_HCSTRING("stage3Ds","\xa4","\x4e","\x30","\xe3")},
	{hx::fsBool,(int)offsetof(Stage_obj,stageFocusRect),HX_HCSTRING("stageFocusRect","\x7e","\xd2","\x81","\x74")},
	{hx::fsInt,(int)offsetof(Stage_obj,stageHeight),HX_HCSTRING("stageHeight","\x45","\x89","\x45","\x95")},
	{hx::fsInt,(int)offsetof(Stage_obj,stageWidth),HX_HCSTRING("stageWidth","\x68","\x0a","\xb3","\x1d")},
	{hx::fsObject /*::lime::ui::Window*/ ,(int)offsetof(Stage_obj,window),HX_HCSTRING("window","\xf0","\x93","\x8c","\x52")},
	{hx::fsObject /*::openfl::display::InteractiveObject*/ ,(int)offsetof(Stage_obj,__cacheFocus),HX_HCSTRING("__cacheFocus","\x56","\x41","\xd5","\x7f")},
	{hx::fsBool,(int)offsetof(Stage_obj,__clearBeforeRender),HX_HCSTRING("__clearBeforeRender","\x42","\xa3","\xd5","\xf3")},
	{hx::fsInt,(int)offsetof(Stage_obj,__color),HX_HCSTRING("__color","\x43","\xca","\xba","\xb4")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Stage_obj,__colorSplit),HX_HCSTRING("__colorSplit","\x97","\x7d","\x6e","\xde")},
	{hx::fsString,(int)offsetof(Stage_obj,__colorString),HX_HCSTRING("__colorString","\x74","\xfb","\xd0","\x13")},
	{hx::fsInt,(int)offsetof(Stage_obj,__deltaTime),HX_HCSTRING("__deltaTime","\x05","\x85","\x88","\x23")},
	{hx::fsBool,(int)offsetof(Stage_obj,__dirty),HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(Stage_obj,__displayMatrix),HX_HCSTRING("__displayMatrix","\x03","\x2b","\xdd","\x04")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Stage_obj,__displayState),HX_HCSTRING("__displayState","\x8f","\xcf","\x24","\xb1")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Stage_obj,__dragBounds),HX_HCSTRING("__dragBounds","\xa9","\x10","\x1d","\x47")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Stage_obj,__dragObject),HX_HCSTRING("__dragObject","\xf3","\x08","\x3f","\xf6")},
	{hx::fsFloat,(int)offsetof(Stage_obj,__dragOffsetX),HX_HCSTRING("__dragOffsetX","\xb1","\x6c","\xfe","\xd5")},
	{hx::fsFloat,(int)offsetof(Stage_obj,__dragOffsetY),HX_HCSTRING("__dragOffsetY","\xb2","\x6c","\xfe","\xd5")},
	{hx::fsObject /*::openfl::display::InteractiveObject*/ ,(int)offsetof(Stage_obj,__focus),HX_HCSTRING("__focus","\xb8","\xb8","\xe7","\x6e")},
	{hx::fsBool,(int)offsetof(Stage_obj,__fullscreen),HX_HCSTRING("__fullscreen","\x5b","\xb5","\x47","\x32")},
	{hx::fsBool,(int)offsetof(Stage_obj,__invalidated),HX_HCSTRING("__invalidated","\x69","\x73","\x24","\x06")},
	{hx::fsInt,(int)offsetof(Stage_obj,__lastClickTime),HX_HCSTRING("__lastClickTime","\x1f","\x4c","\xe7","\xb1")},
	{hx::fsInt,(int)offsetof(Stage_obj,__logicalWidth),HX_HCSTRING("__logicalWidth","\x9d","\xce","\x2c","\x0d")},
	{hx::fsInt,(int)offsetof(Stage_obj,__logicalHeight),HX_HCSTRING("__logicalHeight","\x70","\x73","\x57","\x30")},
	{hx::fsBool,(int)offsetof(Stage_obj,__macKeyboard),HX_HCSTRING("__macKeyboard","\x36","\x6b","\x9a","\xd8")},
	{hx::fsObject /*::openfl::display::InteractiveObject*/ ,(int)offsetof(Stage_obj,__mouseDownLeft),HX_HCSTRING("__mouseDownLeft","\xae","\x3d","\x4b","\x93")},
	{hx::fsObject /*::openfl::display::InteractiveObject*/ ,(int)offsetof(Stage_obj,__mouseDownMiddle),HX_HCSTRING("__mouseDownMiddle","\xbc","\x00","\x70","\x1d")},
	{hx::fsObject /*::openfl::display::InteractiveObject*/ ,(int)offsetof(Stage_obj,__mouseDownRight),HX_HCSTRING("__mouseDownRight","\x55","\xc8","\x97","\xc5")},
	{hx::fsObject /*::openfl::display::InteractiveObject*/ ,(int)offsetof(Stage_obj,__mouseOverTarget),HX_HCSTRING("__mouseOverTarget","\x2a","\xfb","\x94","\x00")},
	{hx::fsFloat,(int)offsetof(Stage_obj,__mouseX),HX_HCSTRING("__mouseX","\xb3","\xb5","\x3d","\x74")},
	{hx::fsFloat,(int)offsetof(Stage_obj,__mouseY),HX_HCSTRING("__mouseY","\xb4","\xb5","\x3d","\x74")},
	{hx::fsObject /*::lime::ui::Touch*/ ,(int)offsetof(Stage_obj,__primaryTouch),HX_HCSTRING("__primaryTouch","\xbd","\x6b","\x1c","\x30")},
	{hx::fsObject /*::openfl::_internal::renderer::AbstractRenderer*/ ,(int)offsetof(Stage_obj,__renderer),HX_HCSTRING("__renderer","\x63","\x38","\x14","\x56")},
	{hx::fsBool,(int)offsetof(Stage_obj,__rendering),HX_HCSTRING("__rendering","\x2c","\x24","\xa0","\xfb")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Stage_obj,__rollOutStack),HX_HCSTRING("__rollOutStack","\x97","\xe3","\x31","\x86")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Stage_obj,__stack),HX_HCSTRING("__stack","\x28","\xc0","\x69","\xee")},
	{hx::fsBool,(int)offsetof(Stage_obj,__transparent),HX_HCSTRING("__transparent","\x32","\x6c","\x32","\x6b")},
	{hx::fsBool,(int)offsetof(Stage_obj,__wasDirty),HX_HCSTRING("__wasDirty","\x49","\xbd","\x55","\x63")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("align","\xc5","\x56","\x91","\x21"),
	HX_HCSTRING("allowsFullScreen","\xc5","\x66","\xdc","\x4b"),
	HX_HCSTRING("allowsFullScreenInteractive","\x1d","\x8b","\x2c","\xc8"),
	HX_HCSTRING("application","\x50","\xab","\x3e","\x2a"),
	HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"),
	HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"),
	HX_HCSTRING("stage3Ds","\xa4","\x4e","\x30","\xe3"),
	HX_HCSTRING("stageFocusRect","\x7e","\xd2","\x81","\x74"),
	HX_HCSTRING("stageHeight","\x45","\x89","\x45","\x95"),
	HX_HCSTRING("stageWidth","\x68","\x0a","\xb3","\x1d"),
	HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"),
	HX_HCSTRING("__cacheFocus","\x56","\x41","\xd5","\x7f"),
	HX_HCSTRING("__clearBeforeRender","\x42","\xa3","\xd5","\xf3"),
	HX_HCSTRING("__color","\x43","\xca","\xba","\xb4"),
	HX_HCSTRING("__colorSplit","\x97","\x7d","\x6e","\xde"),
	HX_HCSTRING("__colorString","\x74","\xfb","\xd0","\x13"),
	HX_HCSTRING("__deltaTime","\x05","\x85","\x88","\x23"),
	HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"),
	HX_HCSTRING("__displayMatrix","\x03","\x2b","\xdd","\x04"),
	HX_HCSTRING("__displayState","\x8f","\xcf","\x24","\xb1"),
	HX_HCSTRING("__dragBounds","\xa9","\x10","\x1d","\x47"),
	HX_HCSTRING("__dragObject","\xf3","\x08","\x3f","\xf6"),
	HX_HCSTRING("__dragOffsetX","\xb1","\x6c","\xfe","\xd5"),
	HX_HCSTRING("__dragOffsetY","\xb2","\x6c","\xfe","\xd5"),
	HX_HCSTRING("__focus","\xb8","\xb8","\xe7","\x6e"),
	HX_HCSTRING("__fullscreen","\x5b","\xb5","\x47","\x32"),
	HX_HCSTRING("__invalidated","\x69","\x73","\x24","\x06"),
	HX_HCSTRING("__lastClickTime","\x1f","\x4c","\xe7","\xb1"),
	HX_HCSTRING("__logicalWidth","\x9d","\xce","\x2c","\x0d"),
	HX_HCSTRING("__logicalHeight","\x70","\x73","\x57","\x30"),
	HX_HCSTRING("__macKeyboard","\x36","\x6b","\x9a","\xd8"),
	HX_HCSTRING("__mouseDownLeft","\xae","\x3d","\x4b","\x93"),
	HX_HCSTRING("__mouseDownMiddle","\xbc","\x00","\x70","\x1d"),
	HX_HCSTRING("__mouseDownRight","\x55","\xc8","\x97","\xc5"),
	HX_HCSTRING("__mouseOverTarget","\x2a","\xfb","\x94","\x00"),
	HX_HCSTRING("__mouseX","\xb3","\xb5","\x3d","\x74"),
	HX_HCSTRING("__mouseY","\xb4","\xb5","\x3d","\x74"),
	HX_HCSTRING("__primaryTouch","\xbd","\x6b","\x1c","\x30"),
	HX_HCSTRING("__renderer","\x63","\x38","\x14","\x56"),
	HX_HCSTRING("__rendering","\x2c","\x24","\xa0","\xfb"),
	HX_HCSTRING("__rollOutStack","\x97","\xe3","\x31","\x86"),
	HX_HCSTRING("__stack","\x28","\xc0","\x69","\xee"),
	HX_HCSTRING("__transparent","\x32","\x6c","\x32","\x6b"),
	HX_HCSTRING("__wasDirty","\x49","\xbd","\x55","\x63"),
	HX_HCSTRING("addRenderer","\x84","\xfc","\x37","\xe4"),
	HX_HCSTRING("addWindow","\xf1","\xc8","\xb0","\x0a"),
	HX_HCSTRING("registerModule","\x6f","\xbb","\x14","\x87"),
	HX_HCSTRING("removeRenderer","\xa7","\x01","\x32","\x7d"),
	HX_HCSTRING("removeWindow","\x54","\x2f","\xba","\xc1"),
	HX_HCSTRING("setPreloader","\x74","\xa4","\xcb","\xa6"),
	HX_HCSTRING("unregisterModule","\x88","\x2b","\x36","\x94"),
	HX_HCSTRING("globalToLocal","\xcd","\x4e","\xae","\x6b"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("localToGlobal","\xc9","\x41","\xeb","\x47"),
	HX_HCSTRING("onGamepadAxisMove","\xb4","\xf7","\xd4","\x24"),
	HX_HCSTRING("onGamepadButtonDown","\x56","\xeb","\xb6","\x87"),
	HX_HCSTRING("onGamepadButtonUp","\x4f","\xf4","\x12","\xf1"),
	HX_HCSTRING("onGamepadConnect","\xc8","\x56","\xd7","\xec"),
	HX_HCSTRING("onGamepadDisconnect","\x3e","\xe8","\x96","\x44"),
	HX_HCSTRING("onJoystickAxisMove","\x6d","\xf4","\xd4","\x5b"),
	HX_HCSTRING("onJoystickButtonDown","\x4f","\x48","\x3a","\x7c"),
	HX_HCSTRING("onJoystickButtonUp","\x08","\xf1","\x12","\x28"),
	HX_HCSTRING("onJoystickConnect","\x2f","\x14","\xdd","\xfa"),
	HX_HCSTRING("onJoystickDisconnect","\x37","\x45","\x1a","\x39"),
	HX_HCSTRING("onJoystickHatMove","\x51","\x70","\x68","\x90"),
	HX_HCSTRING("onJoystickTrackballMove","\x40","\xc8","\x46","\x1a"),
	HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73"),
	HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75"),
	HX_HCSTRING("onModuleExit","\xe9","\xbf","\xa3","\x0b"),
	HX_HCSTRING("onMouseDown","\x08","\x94","\x05","\x11"),
	HX_HCSTRING("onMouseMove","\xb7","\x7e","\xf8","\x16"),
	HX_HCSTRING("onMouseMoveRelative","\xa3","\x06","\xbf","\x7a"),
	HX_HCSTRING("onMouseUp","\x81","\xac","\x1d","\x98"),
	HX_HCSTRING("onMouseWheel","\x35","\xca","\xca","\xbf"),
	HX_HCSTRING("onPreloadComplete","\x43","\x37","\x5d","\x5c"),
	HX_HCSTRING("onPreloadProgress","\x37","\x2e","\xc0","\x62"),
	HX_HCSTRING("onRenderContextLost","\x9e","\x9b","\xa7","\x84"),
	HX_HCSTRING("onRenderContextRestored","\x10","\x54","\x6e","\x7a"),
	HX_HCSTRING("onTextEdit","\x96","\xf1","\xc0","\x23"),
	HX_HCSTRING("onTextInput","\xfe","\x36","\x4e","\x79"),
	HX_HCSTRING("onTouchMove","\x51","\x55","\x10","\x30"),
	HX_HCSTRING("onTouchEnd","\x9b","\x99","\xc0","\xdd"),
	HX_HCSTRING("onTouchStart","\x22","\xfa","\xdf","\x55"),
	HX_HCSTRING("onWindowActivate","\x42","\xe9","\xdd","\xeb"),
	HX_HCSTRING("onWindowClose","\xc9","\xca","\x1f","\x9c"),
	HX_HCSTRING("onWindowCreate","\xcb","\x62","\x6f","\x6d"),
	HX_HCSTRING("onWindowDeactivate","\x83","\xeb","\x6c","\x8c"),
	HX_HCSTRING("onWindowDropFile","\xda","\x43","\x88","\xef"),
	HX_HCSTRING("onWindowEnter","\x29","\x20","\x43","\xc4"),
	HX_HCSTRING("onWindowFocusIn","\x2e","\x9f","\x1f","\x84"),
	HX_HCSTRING("onWindowFocusOut","\x25","\x3d","\x90","\x17"),
	HX_HCSTRING("onWindowFullscreen","\x8a","\xc9","\x1f","\x4a"),
	HX_HCSTRING("onWindowLeave","\x08","\xe8","\x0f","\xc6"),
	HX_HCSTRING("onWindowMinimize","\xad","\x0c","\xab","\x27"),
	HX_HCSTRING("onWindowMove","\x20","\xfd","\x7a","\xab"),
	HX_HCSTRING("onWindowResize","\xc3","\x55","\xdb","\xf9"),
	HX_HCSTRING("onWindowRestore","\x9f","\xc0","\x4c","\xad"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("__broadcastEvent","\x79","\x9c","\xa4","\x95"),
	HX_HCSTRING("__drag","\x14","\x8f","\x68","\xf1"),
	HX_HCSTRING("__fireEvent","\x64","\x79","\x99","\x9f"),
	HX_HCSTRING("__getInteractive","\x0c","\x1c","\x37","\xf8"),
	HX_HCSTRING("__onKey","\xa0","\x76","\xc7","\x9c"),
	HX_HCSTRING("__onGamepadConnect","\xe8","\xe9","\x67","\x58"),
	HX_HCSTRING("__onMouse","\x66","\x05","\xf1","\x23"),
	HX_HCSTRING("__onMouseWheel","\x55","\x4d","\x8b","\xe0"),
	HX_HCSTRING("__onTouch","\x00","\x07","\xbf","\x2b"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__resize","\x14","\xc5","\xaa","\xb0"),
	HX_HCSTRING("__setLogicalSize","\xc8","\x6d","\xcd","\x32"),
	HX_HCSTRING("__startDrag","\x56","\xee","\x8f","\x29"),
	HX_HCSTRING("__stopDrag","\x36","\xe4","\x62","\x38"),
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	HX_HCSTRING("get_color","\xba","\xcd","\x05","\x8e"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("get_displayState","\xf8","\x38","\x03","\x95"),
	HX_HCSTRING("set_displayState","\x6c","\x26","\x45","\xeb"),
	HX_HCSTRING("get_focus","\x2f","\xbc","\x32","\x48"),
	HX_HCSTRING("set_focus","\x3b","\xa8","\x83","\x2b"),
	HX_HCSTRING("get_frameRate","\x84","\xe5","\x88","\xfa"),
	HX_HCSTRING("set_frameRate","\x90","\xc7","\x8e","\x3f"),
	HX_HCSTRING("get_mouseX","\x5c","\xba","\x95","\xbc"),
	HX_HCSTRING("get_mouseY","\x5d","\xba","\x95","\xbc"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stage_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stage_obj::__mClass,"__mClass");
};

#endif

hx::Class Stage_obj::__mClass;

void Stage_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Stage","\x14","\x36","\x7c","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stage_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
