#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
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
#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractFilterManager
#include <openfl/_internal/renderer/AbstractFilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractShaderManager
#include <openfl/_internal/renderer/AbstractShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoDisplayObject
#include <openfl/_internal/renderer/cairo/CairoDisplayObject.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasGraphics
#include <openfl/_internal/renderer/canvas/CanvasGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderData
#include <openfl/display/ShaderData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_TypeError
#include <openfl/errors/TypeError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
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
#ifndef INCLUDED_openfl_geom_Transform
#include <openfl/geom/Transform.h>
#endif
namespace openfl{
namespace display{

Void DisplayObject_obj::__construct()
{
HX_STACK_FRAME("openfl.display.DisplayObject","new",0xb225b469,"openfl.display.DisplayObject.new","openfl/display/DisplayObject.hx",123,0xc7539829)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(125)
	super::__construct(null());
	HX_STACK_LINE(127)
	this->__alpha = (int)1;
	HX_STACK_LINE(128)
	this->__blendMode = ((Dynamic)((int)10));
	HX_STACK_LINE(129)
	this->__cacheAsBitmap = false;
	HX_STACK_LINE(130)
	::openfl::geom::Matrix tmp = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	this->__transform = tmp;
	HX_STACK_LINE(131)
	this->__visible = true;
	HX_STACK_LINE(133)
	this->__rotation = (int)0;
	HX_STACK_LINE(134)
	this->__rotationSine = (int)0;
	HX_STACK_LINE(135)
	this->__rotationCosine = (int)1;
	HX_STACK_LINE(137)
	this->__worldAlpha = (int)1;
	HX_STACK_LINE(138)
	::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	this->__worldTransform = tmp1;
	HX_STACK_LINE(139)
	::openfl::geom::ColorTransform tmp2 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(139)
	this->__worldColorTransform = tmp2;
	HX_STACK_LINE(140)
	::openfl::geom::Matrix tmp3 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(140)
	this->__renderTransform = tmp3;
	HX_STACK_LINE(146)
	int tmp4 = ++(::openfl::display::DisplayObject_obj::__instanceCount);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(146)
	::String tmp5 = (HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(146)
	this->set_name(tmp5);
}
;
	return null();
}

//DisplayObject_obj::~DisplayObject_obj() { }

Dynamic DisplayObject_obj::__CreateEmpty() { return  new DisplayObject_obj; }
hx::ObjectPtr< DisplayObject_obj > DisplayObject_obj::__new()
{  hx::ObjectPtr< DisplayObject_obj > _result_ = new DisplayObject_obj();
	_result_->__construct();
	return _result_;}

Dynamic DisplayObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObject_obj > _result_ = new DisplayObject_obj();
	_result_->__construct();
	return _result_;}

hx::Object *DisplayObject_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::display::IBitmapDrawable_obj)) return operator ::openfl::display::IBitmapDrawable_obj *();
	return super::__ToInterface(inType);
}

DisplayObject_obj::operator ::openfl::display::IBitmapDrawable_obj *()
	{ return new ::openfl::display::IBitmapDrawable_delegate_< DisplayObject_obj >(this); }
Void DisplayObject_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_FRAME("openfl.display.DisplayObject","addEventListener",0xe74b9624,"openfl.display.DisplayObject.addEventListener","openfl/display/DisplayObject.hx",151,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
	HX_STACK_ARG(priority,"priority")
	HX_STACK_ARG(useWeakReference,"useWeakReference")
{
		HX_STACK_LINE(153)
		::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(153)
		::String _switch_1 = (tmp);
		if (  ( _switch_1==HX_HCSTRING("activate","\xb3","\x1b","\xac","\xe5")) ||  ( _switch_1==HX_HCSTRING("deactivate","\x34","\x5c","\x01","\x3c")) ||  ( _switch_1==HX_HCSTRING("enterFrame","\xf5","\x03","\x50","\x02")) ||  ( _switch_1==HX_HCSTRING("exitFrame","\x2f","\x64","\x48","\x12")) ||  ( _switch_1==HX_HCSTRING("frameConstructed","\x09","\x89","\x5d","\x98")) ||  ( _switch_1==HX_HCSTRING("render","\x56","\x6b","\x29","\x05"))){
			HX_STACK_LINE(157)
			::haxe::ds::StringMap tmp1 = ::openfl::display::DisplayObject_obj::__broadcastEvents;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(157)
			::String tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(157)
			bool tmp3 = tmp1->exists(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(157)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(157)
			if ((tmp4)){
				HX_STACK_LINE(159)
				::haxe::ds::StringMap tmp5 = ::openfl::display::DisplayObject_obj::__broadcastEvents;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(159)
				::String tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(159)
				tmp5->set(tmp6,Array_obj< ::Dynamic >::__new());
			}
			HX_STACK_LINE(163)
			::haxe::ds::StringMap tmp5 = ::openfl::display::DisplayObject_obj::__broadcastEvents;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(163)
			::String tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(163)
			Array< ::Dynamic > dispatchers = ((Array< ::Dynamic >)(tmp5->get(tmp6)));		HX_STACK_VAR(dispatchers,"dispatchers");
			HX_STACK_LINE(165)
			int tmp7 = dispatchers->indexOf(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(165)
			bool tmp8 = (tmp7 == (int)-1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(165)
			if ((tmp8)){
				HX_STACK_LINE(167)
				dispatchers->push(hx::ObjectPtr<OBJ_>(this));
			}
		}
		else  {
		}
;
;
		HX_STACK_LINE(175)
		::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(175)
		Dynamic tmp2 = listener;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(175)
		bool tmp3 = useCapture;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(175)
		int tmp4 = priority;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(175)
		bool tmp5 = useWeakReference;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(175)
		this->super::addEventListener(tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


bool DisplayObject_obj::dispatchEvent( ::openfl::events::Event event){
	HX_STACK_FRAME("openfl.display.DisplayObject","dispatchEvent",0xe6cd7049,"openfl.display.DisplayObject.dispatchEvent","openfl/display/DisplayObject.hx",180,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(182)
	::openfl::events::Event tmp = event;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(182)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::openfl::events::MouseEvent >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(182)
	if ((tmp1)){
		HX_STACK_LINE(184)
		::openfl::events::MouseEvent mouseEvent = ((::openfl::events::MouseEvent)(event));		HX_STACK_VAR(mouseEvent,"mouseEvent");
		HX_STACK_LINE(185)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(185)
		{
			HX_STACK_LINE(185)
			::openfl::geom::Matrix tmp3 = this->__getRenderTransform();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(185)
			::openfl::geom::Matrix _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(185)
			Float tmp4 = (mouseEvent->localX * _this->a);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(185)
			Float tmp5 = (mouseEvent->localY * _this->c);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(185)
			Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(185)
			Float tmp7 = _this->tx;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(185)
			tmp2 = (tmp6 + tmp7);
		}
		HX_STACK_LINE(185)
		mouseEvent->stageX = tmp2;
		HX_STACK_LINE(186)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(186)
		{
			HX_STACK_LINE(186)
			::openfl::geom::Matrix tmp4 = this->__getRenderTransform();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(186)
			::openfl::geom::Matrix _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(186)
			Float tmp5 = (mouseEvent->localX * _this->b);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(186)
			Float tmp6 = (mouseEvent->localY * _this->d);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(186)
			Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(186)
			Float tmp8 = _this->ty;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(186)
			tmp3 = (tmp7 + tmp8);
		}
		HX_STACK_LINE(186)
		mouseEvent->stageY = tmp3;
	}
	HX_STACK_LINE(190)
	::openfl::events::Event tmp2 = event;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(190)
	bool tmp3 = this->super::dispatchEvent(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(190)
	return tmp3;
}


::openfl::geom::Rectangle DisplayObject_obj::getBounds( ::openfl::display::DisplayObject targetCoordinateSpace){
	HX_STACK_FRAME("openfl.display.DisplayObject","getBounds",0xdb0a2074,"openfl.display.DisplayObject.getBounds","openfl/display/DisplayObject.hx",195,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(targetCoordinateSpace,"targetCoordinateSpace")
	HX_STACK_LINE(197)
	::openfl::geom::Matrix matrix;		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(199)
	bool tmp = (targetCoordinateSpace != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(199)
	if ((tmp)){
		HX_STACK_LINE(201)
		::openfl::geom::Matrix tmp1 = this->__getWorldTransform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(201)
		::openfl::geom::Matrix tmp2 = tmp1->clone();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(201)
		matrix = tmp2;
		HX_STACK_LINE(202)
		::openfl::geom::Matrix tmp3 = targetCoordinateSpace->__getWorldTransform();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(202)
		::openfl::geom::Matrix tmp4 = tmp3->clone();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(202)
		::openfl::geom::Matrix tmp5 = tmp4->invert();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(202)
		matrix->concat(tmp5);
	}
	else{
		HX_STACK_LINE(206)
		::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__temp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(206)
		matrix = tmp1;
		HX_STACK_LINE(207)
		matrix->identity();
	}
	HX_STACK_LINE(211)
	::openfl::geom::Rectangle tmp1 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(211)
	::openfl::geom::Rectangle bounds = tmp1;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(212)
	::openfl::geom::Rectangle tmp2 = bounds;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(212)
	::openfl::geom::Matrix tmp3 = matrix;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(212)
	this->__getBounds(tmp2,tmp3);
	HX_STACK_LINE(214)
	::openfl::geom::Rectangle tmp4 = bounds;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(214)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,getBounds,return )

::openfl::geom::Rectangle DisplayObject_obj::getRect( ::openfl::display::DisplayObject targetCoordinateSpace){
	HX_STACK_FRAME("openfl.display.DisplayObject","getRect",0x17591963,"openfl.display.DisplayObject.getRect","openfl/display/DisplayObject.hx",219,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(targetCoordinateSpace,"targetCoordinateSpace")
	HX_STACK_LINE(222)
	::openfl::display::DisplayObject tmp = targetCoordinateSpace;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(222)
	::openfl::geom::Rectangle tmp1 = this->getBounds(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(222)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,getRect,return )

::openfl::geom::Point DisplayObject_obj::globalToLocal( ::openfl::geom::Point pos){
	HX_STACK_FRAME("openfl.display.DisplayObject","globalToLocal",0x8c16f816,"openfl.display.DisplayObject.globalToLocal","openfl/display/DisplayObject.hx",227,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(229)
	::openfl::geom::Point tmp = pos->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(229)
	pos = tmp;
	HX_STACK_LINE(230)
	{
		HX_STACK_LINE(230)
		::openfl::geom::Matrix tmp1 = this->__getRenderTransform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(230)
		::openfl::geom::Matrix _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(230)
		Float tmp2 = (_this->a * _this->d);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(230)
		Float tmp3 = (_this->b * _this->c);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(230)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(230)
		Float norm = tmp4;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(230)
		bool tmp5 = (norm == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(230)
		if ((tmp5)){
			HX_STACK_LINE(230)
			Float tmp6 = _this->tx;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(230)
			Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(230)
			pos->x = tmp7;
			HX_STACK_LINE(230)
			Float tmp8 = _this->ty;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(230)
			Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(230)
			pos->y = tmp9;
		}
		else{
			HX_STACK_LINE(230)
			Float tmp6 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(230)
			Float tmp7 = _this->c;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(230)
			Float tmp8 = (_this->ty - pos->y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(230)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(230)
			Float tmp10 = _this->d;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(230)
			Float tmp11 = (pos->x - _this->tx);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(230)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(230)
			Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(230)
			Float tmp14 = (tmp6 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(230)
			Float px = tmp14;		HX_STACK_VAR(px,"px");
			HX_STACK_LINE(230)
			Float tmp15 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(230)
			Float tmp16 = _this->a;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(230)
			Float tmp17 = (pos->y - _this->ty);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(230)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(230)
			Float tmp19 = _this->b;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(230)
			Float tmp20 = (_this->tx - pos->x);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(230)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(230)
			Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(230)
			Float tmp23 = (tmp15 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(230)
			pos->y = tmp23;
			HX_STACK_LINE(230)
			pos->x = px;
		}
	}
	HX_STACK_LINE(231)
	::openfl::geom::Point tmp1 = pos;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(231)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,globalToLocal,return )

bool DisplayObject_obj::hitTestObject( ::openfl::display::DisplayObject obj){
	HX_STACK_FRAME("openfl.display.DisplayObject","hitTestObject",0xf7ccfe2d,"openfl.display.DisplayObject.hitTestObject","openfl/display/DisplayObject.hx",236,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(238)
	bool tmp = (obj != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(238)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(238)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(238)
	if ((tmp1)){
		HX_STACK_LINE(238)
		tmp2 = (obj->parent != null());
	}
	else{
		HX_STACK_LINE(238)
		tmp2 = false;
	}
	HX_STACK_LINE(238)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(238)
	if ((tmp2)){
		HX_STACK_LINE(238)
		::openfl::display::DisplayObjectContainer tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(238)
		::openfl::display::DisplayObjectContainer tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(238)
		tmp3 = (tmp5 != null());
	}
	else{
		HX_STACK_LINE(238)
		tmp3 = false;
	}
	HX_STACK_LINE(238)
	if ((tmp3)){
		HX_STACK_LINE(240)
		::openfl::geom::Rectangle tmp4 = this->getBounds(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(240)
		::openfl::geom::Rectangle currentBounds = tmp4;		HX_STACK_VAR(currentBounds,"currentBounds");
		HX_STACK_LINE(241)
		::openfl::geom::Rectangle tmp5 = obj->getBounds(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(241)
		::openfl::geom::Rectangle targetBounds = tmp5;		HX_STACK_VAR(targetBounds,"targetBounds");
		HX_STACK_LINE(243)
		::openfl::geom::Rectangle tmp6 = targetBounds;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(243)
		bool tmp7 = currentBounds->intersects(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(243)
		return tmp7;
	}
	HX_STACK_LINE(247)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,hitTestObject,return )

bool DisplayObject_obj::hitTestPoint( Float x,Float y,hx::Null< bool >  __o_shapeFlag){
bool shapeFlag = __o_shapeFlag.Default(false);
	HX_STACK_FRAME("openfl.display.DisplayObject","hitTestPoint",0x05917ca2,"openfl.display.DisplayObject.hitTestPoint","openfl/display/DisplayObject.hx",252,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
{
		HX_STACK_LINE(254)
		::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(254)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(254)
		if ((tmp1)){
			HX_STACK_LINE(256)
			Float tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(256)
			Float tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(256)
			bool tmp4 = shapeFlag;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(256)
			bool tmp5 = this->__hitTest(tmp2,tmp3,tmp4,null(),false,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(256)
			return tmp5;
		}
		else{
			HX_STACK_LINE(260)
			return false;
		}
		HX_STACK_LINE(254)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(DisplayObject_obj,hitTestPoint,return )

::openfl::geom::Point DisplayObject_obj::localToGlobal( ::openfl::geom::Point point){
	HX_STACK_FRAME("openfl.display.DisplayObject","localToGlobal",0x6853eb12,"openfl.display.DisplayObject.localToGlobal","openfl/display/DisplayObject.hx",267,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(269)
	::openfl::geom::Matrix tmp = this->__getRenderTransform();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(269)
	::openfl::geom::Point tmp1 = point;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(269)
	::openfl::geom::Point tmp2 = tmp->transformPoint(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(269)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,localToGlobal,return )

Void DisplayObject_obj::removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture){
bool useCapture = __o_useCapture.Default(false);
	HX_STACK_FRAME("openfl.display.DisplayObject","removeEventListener",0x3ae1cdd3,"openfl.display.DisplayObject.removeEventListener","openfl/display/DisplayObject.hx",274,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
{
		HX_STACK_LINE(276)
		::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(276)
		Dynamic tmp1 = listener;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(276)
		bool tmp2 = useCapture;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(276)
		this->super::removeEventListener(tmp,tmp1,tmp2);
		HX_STACK_LINE(278)
		::String tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(278)
		::String _switch_2 = (tmp3);
		if (  ( _switch_2==HX_HCSTRING("activate","\xb3","\x1b","\xac","\xe5")) ||  ( _switch_2==HX_HCSTRING("deactivate","\x34","\x5c","\x01","\x3c")) ||  ( _switch_2==HX_HCSTRING("enterFrame","\xf5","\x03","\x50","\x02")) ||  ( _switch_2==HX_HCSTRING("exitFrame","\x2f","\x64","\x48","\x12")) ||  ( _switch_2==HX_HCSTRING("frameConstructed","\x09","\x89","\x5d","\x98")) ||  ( _switch_2==HX_HCSTRING("render","\x56","\x6b","\x29","\x05"))){
			HX_STACK_LINE(282)
			::String tmp4 = type;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(282)
			bool tmp5 = this->hasEventListener(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(282)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(282)
			if ((tmp6)){
				HX_STACK_LINE(284)
				::haxe::ds::StringMap tmp7 = ::openfl::display::DisplayObject_obj::__broadcastEvents;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(284)
				::String tmp8 = type;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(284)
				bool tmp9 = tmp7->exists(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(284)
				if ((tmp9)){
					HX_STACK_LINE(286)
					::haxe::ds::StringMap tmp10 = ::openfl::display::DisplayObject_obj::__broadcastEvents;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(286)
					::String tmp11 = type;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(286)
					((Array< ::Dynamic >)(tmp10->get(tmp11)))->remove(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
		else  {
		}
;
;
	}
return null();
}


Void DisplayObject_obj::__cleanup( ){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__cleanup",0x25266dcd,"openfl.display.DisplayObject.__cleanup","openfl/display/DisplayObject.hx",299,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_LINE(301)
		this->__cairo = null();
		HX_STACK_LINE(308)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(308)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(308)
		if ((tmp1)){
			HX_STACK_LINE(310)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(310)
			tmp2->__cleanup();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__cleanup,(void))

bool DisplayObject_obj::__dispatch( ::openfl::events::Event event){
	HX_STACK_FRAME("openfl.display.DisplayObject","__dispatch",0x4c54e0f1,"openfl.display.DisplayObject.__dispatch","openfl/display/DisplayObject.hx",317,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(319)
	::haxe::ds::StringMap tmp = this->__eventMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(319)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(319)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(319)
	if ((tmp1)){
		HX_STACK_LINE(319)
		::String tmp3 = event->type;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(319)
		::String tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(319)
		tmp2 = this->hasEventListener(tmp4);
	}
	else{
		HX_STACK_LINE(319)
		tmp2 = false;
	}
	HX_STACK_LINE(319)
	if ((tmp2)){
		HX_STACK_LINE(321)
		::openfl::events::Event tmp3 = event;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(321)
		bool tmp4 = this->super::__dispatchEvent(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(321)
		bool result = tmp4;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(323)
		bool tmp5 = event->__isCanceled;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(323)
		if ((tmp5)){
			HX_STACK_LINE(325)
			return false;
		}
		HX_STACK_LINE(329)
		bool tmp6 = result;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(329)
		return tmp6;
	}
	HX_STACK_LINE(333)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__dispatch,return )

bool DisplayObject_obj::__dispatchChildren( ::openfl::events::Event event){
	HX_STACK_FRAME("openfl.display.DisplayObject","__dispatchChildren",0xdb948f50,"openfl.display.DisplayObject.__dispatchChildren","openfl/display/DisplayObject.hx",338,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(340)
	::openfl::events::Event tmp = event;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(340)
	bool tmp1 = this->__dispatchEvent(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(340)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__dispatchChildren,return )

bool DisplayObject_obj::__dispatchEvent( ::openfl::events::Event event){
	HX_STACK_FRAME("openfl.display.DisplayObject","__dispatchEvent",0xd8f34d69,"openfl.display.DisplayObject.__dispatchEvent","openfl/display/DisplayObject.hx",345,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(347)
	::openfl::events::Event tmp = event;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(347)
	bool tmp1 = this->super::__dispatchEvent(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(347)
	bool result = tmp1;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(349)
	bool tmp2 = event->__isCanceled;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(349)
	if ((tmp2)){
		HX_STACK_LINE(351)
		return false;
	}
	HX_STACK_LINE(355)
	bool tmp3 = event->bubbles;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(355)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(355)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(355)
	if ((tmp4)){
		HX_STACK_LINE(355)
		::openfl::display::DisplayObjectContainer tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(355)
		::openfl::display::DisplayObjectContainer tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(355)
		::openfl::display::DisplayObjectContainer tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(355)
		tmp5 = (tmp8 != null());
	}
	else{
		HX_STACK_LINE(355)
		tmp5 = false;
	}
	HX_STACK_LINE(355)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(355)
	if ((tmp5)){
		HX_STACK_LINE(355)
		::openfl::display::DisplayObjectContainer tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(355)
		::openfl::display::DisplayObjectContainer tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(355)
		tmp6 = (tmp8 != hx::ObjectPtr<OBJ_>(this));
	}
	else{
		HX_STACK_LINE(355)
		tmp6 = false;
	}
	HX_STACK_LINE(355)
	if ((tmp6)){
		HX_STACK_LINE(357)
		event->eventPhase = (int)3;
		HX_STACK_LINE(359)
		bool tmp7 = (event->target == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(359)
		if ((tmp7)){
			HX_STACK_LINE(361)
			event->target = hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(365)
		::openfl::display::DisplayObjectContainer tmp8 = this->parent;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(365)
		::openfl::events::Event tmp9 = event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(365)
		tmp8->__dispatchEvent(tmp9);
	}
	HX_STACK_LINE(369)
	bool tmp7 = result;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(369)
	return tmp7;
}


Void DisplayObject_obj::__enterFrame( int deltaTime){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__enterFrame",0x5c5351ec,"openfl.display.DisplayObject.__enterFrame","openfl/display/DisplayObject.hx",374,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaTime,"deltaTime")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__enterFrame,(void))

Void DisplayObject_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__getBounds",0xe772ed94,"openfl.display.DisplayObject.__getBounds","openfl/display/DisplayObject.hx",381,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(383)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(383)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(383)
		if ((tmp1)){
			HX_STACK_LINE(385)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(385)
			::openfl::geom::Rectangle tmp3 = rect;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(385)
			::openfl::geom::Matrix tmp4 = matrix;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(385)
			tmp2->__getBounds(tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,__getBounds,(void))

::lime::ui::MouseCursor DisplayObject_obj::__getCursor( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","__getCursor",0xc03df5f5,"openfl.display.DisplayObject.__getCursor","openfl/display/DisplayObject.hx",394,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(394)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__getCursor,return )

bool DisplayObject_obj::__getInteractive( Array< ::Dynamic > stack){
	HX_STACK_FRAME("openfl.display.DisplayObject","__getInteractive",0xee1ea663,"openfl.display.DisplayObject.__getInteractive","openfl/display/DisplayObject.hx",401,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(stack,"stack")
	HX_STACK_LINE(401)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__getInteractive,return )

Void DisplayObject_obj::__getLocalBounds( ::openfl::geom::Rectangle rect){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__getLocalBounds",0xd51d8ec1,"openfl.display.DisplayObject.__getLocalBounds","openfl/display/DisplayObject.hx",406,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_LINE(408)
		::openfl::geom::Rectangle tmp = rect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(408)
		::openfl::geom::Matrix tmp1 = this->__transform;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(408)
		this->__getBounds(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__getLocalBounds,(void))

Void DisplayObject_obj::__getRenderBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__getRenderBounds",0xb06992ca,"openfl.display.DisplayObject.__getRenderBounds","openfl/display/DisplayObject.hx",413,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(415)
		::openfl::geom::Rectangle tmp = this->__scrollRect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(415)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(415)
		if ((tmp1)){
			HX_STACK_LINE(417)
			::openfl::geom::Rectangle tmp2 = rect;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(417)
			::openfl::geom::Matrix tmp3 = matrix;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(417)
			this->__getBounds(tmp2,tmp3);
		}
		else{
			HX_STACK_LINE(421)
			::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(421)
			::openfl::geom::Rectangle r = tmp2;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(422)
			::openfl::geom::Rectangle tmp3 = this->__scrollRect;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(422)
			r->copyFrom(tmp3);
			HX_STACK_LINE(423)
			::openfl::geom::Rectangle tmp4 = r;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(423)
			::openfl::geom::Matrix tmp5 = matrix;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(423)
			r->__transform(tmp4,tmp5);
			HX_STACK_LINE(424)
			Float tmp6 = matrix->tx;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(424)
			Float tmp7 = matrix->ty;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(424)
			Float tmp8 = r->width;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(424)
			Float tmp9 = r->height;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(424)
			rect->__expand(tmp6,tmp7,tmp8,tmp9);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,__getRenderBounds,(void))

::openfl::geom::Matrix DisplayObject_obj::__getRenderTransform( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","__getRenderTransform",0x9985c437,"openfl.display.DisplayObject.__getRenderTransform","openfl/display/DisplayObject.hx",431,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(433)
	this->__getWorldTransform();
	HX_STACK_LINE(434)
	::openfl::geom::Matrix tmp = this->__renderTransform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(434)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__getRenderTransform,return )

::openfl::geom::Matrix DisplayObject_obj::__getWorldTransform( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","__getWorldTransform",0x71693ad9,"openfl.display.DisplayObject.__getWorldTransform","openfl/display/DisplayObject.hx",439,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(441)
	bool tmp = this->__transformDirty;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(441)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(441)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(441)
	if ((tmp1)){
		HX_STACK_LINE(441)
		int tmp3 = ::openfl::display::DisplayObject_obj::__worldTransformDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(441)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(441)
		tmp2 = (tmp4 > (int)0);
	}
	else{
		HX_STACK_LINE(441)
		tmp2 = true;
	}
	HX_STACK_LINE(441)
	if ((tmp2)){
		HX_STACK_LINE(443)
		Array< ::Dynamic > list = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(444)
		::openfl::display::DisplayObject current = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(445)
		bool tmp3 = this->__transformDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(445)
		bool transformDirty = tmp3;		HX_STACK_VAR(transformDirty,"transformDirty");
		HX_STACK_LINE(447)
		::openfl::display::DisplayObjectContainer tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(447)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(447)
		if ((tmp5)){
			HX_STACK_LINE(449)
			bool tmp6 = transformDirty;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(449)
			if ((tmp6)){
				HX_STACK_LINE(449)
				this->__update(true,false,null());
			}
		}
		else{
			HX_STACK_LINE(453)
			while((true)){
				HX_STACK_LINE(453)
				::openfl::display::DisplayObject tmp6 = current;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(453)
				::openfl::display::Stage tmp7 = this->stage;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(453)
				bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(453)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(453)
				if ((tmp9)){
					HX_STACK_LINE(453)
					break;
				}
				HX_STACK_LINE(455)
				::openfl::display::DisplayObject tmp10 = current;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(455)
				list->push(tmp10);
				HX_STACK_LINE(456)
				current = current->parent;
				HX_STACK_LINE(458)
				::openfl::display::DisplayObject tmp11 = current;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(458)
				::openfl::display::Stage tmp12 = this->stage;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(458)
				bool tmp13 = (tmp11 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(458)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(458)
				if ((tmp13)){
					HX_STACK_LINE(458)
					tmp14 = current->__transformDirty;
				}
				else{
					HX_STACK_LINE(458)
					tmp14 = false;
				}
				HX_STACK_LINE(458)
				if ((tmp14)){
					HX_STACK_LINE(460)
					transformDirty = true;
				}
			}
		}
		HX_STACK_LINE(468)
		bool tmp6 = transformDirty;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(468)
		if ((tmp6)){
			HX_STACK_LINE(470)
			int i = list->length;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(471)
			while((true)){
				HX_STACK_LINE(471)
				int tmp7 = --(i);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(471)
				bool tmp8 = (tmp7 >= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(471)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(471)
				if ((tmp9)){
					HX_STACK_LINE(471)
					break;
				}
				HX_STACK_LINE(473)
				::openfl::display::DisplayObject tmp10 = list->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(473)
				tmp10->__update(true,false,null());
			}
		}
	}
	HX_STACK_LINE(481)
	::openfl::geom::Matrix tmp3 = this->__worldTransform;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(481)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__getWorldTransform,return )

bool DisplayObject_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly,::openfl::display::DisplayObject hitObject){
	HX_STACK_FRAME("openfl.display.DisplayObject","__hitTest",0x5c63c1ee,"openfl.display.DisplayObject.__hitTest","openfl/display/DisplayObject.hx",486,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(interactiveOnly,"interactiveOnly")
	HX_STACK_ARG(hitObject,"hitObject")
	HX_STACK_LINE(488)
	::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(488)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(488)
	if ((tmp1)){
		HX_STACK_LINE(490)
		bool tmp2 = hitObject->get_visible();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(490)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(490)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(490)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(490)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(490)
		if ((tmp5)){
			HX_STACK_LINE(490)
			tmp6 = this->__isMask;
		}
		else{
			HX_STACK_LINE(490)
			tmp6 = true;
		}
		HX_STACK_LINE(490)
		if ((tmp6)){
			HX_STACK_LINE(490)
			return false;
		}
		HX_STACK_LINE(491)
		::openfl::display::DisplayObject tmp7 = this->get_mask();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(491)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(491)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(491)
		if ((tmp8)){
			HX_STACK_LINE(491)
			::openfl::display::DisplayObject tmp10 = this->get_mask();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(491)
			::openfl::display::DisplayObject tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(491)
			Float tmp12 = x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(491)
			Float tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(491)
			Float tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(491)
			Float tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(491)
			bool tmp16 = tmp11->__hitTestMask(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(491)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(491)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(491)
			tmp9 = !(tmp18);
		}
		else{
			HX_STACK_LINE(491)
			tmp9 = false;
		}
		HX_STACK_LINE(491)
		if ((tmp9)){
			HX_STACK_LINE(491)
			return false;
		}
		HX_STACK_LINE(493)
		::openfl::display::Graphics tmp10 = this->__graphics;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(493)
		Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(493)
		Float tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(493)
		bool tmp13 = shapeFlag;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(493)
		::openfl::geom::Matrix tmp14 = this->__getRenderTransform();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(493)
		bool tmp15 = tmp10->__hitTest(tmp11,tmp12,tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(493)
		if ((tmp15)){
			HX_STACK_LINE(495)
			bool tmp16 = (stack != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(495)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(495)
			if ((tmp16)){
				HX_STACK_LINE(495)
				bool tmp18 = interactiveOnly;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(495)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(495)
				tmp17 = !(tmp19);
			}
			else{
				HX_STACK_LINE(495)
				tmp17 = false;
			}
			HX_STACK_LINE(495)
			if ((tmp17)){
				HX_STACK_LINE(497)
				::openfl::display::DisplayObject tmp18 = hitObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(497)
				stack->push(tmp18);
			}
			HX_STACK_LINE(501)
			return true;
		}
	}
	HX_STACK_LINE(507)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC6(DisplayObject_obj,__hitTest,return )

bool DisplayObject_obj::__hitTestMask( Float x,Float y){
	HX_STACK_FRAME("openfl.display.DisplayObject","__hitTestMask",0x5c65bdfa,"openfl.display.DisplayObject.__hitTestMask","openfl/display/DisplayObject.hx",512,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(514)
	::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(514)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(514)
	if ((tmp1)){
		HX_STACK_LINE(516)
		::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(516)
		Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(516)
		Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(516)
		::openfl::geom::Matrix tmp5 = this->__getRenderTransform();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(516)
		bool tmp6 = tmp2->__hitTest(tmp3,tmp4,true,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(516)
		if ((tmp6)){
			HX_STACK_LINE(518)
			return true;
		}
	}
	HX_STACK_LINE(524)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,__hitTestMask,return )

Void DisplayObject_obj::__readGraphicsData( ::openfl::_Vector::ObjectVector graphicsData,bool recurse){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__readGraphicsData",0xd9311e42,"openfl.display.DisplayObject.__readGraphicsData","openfl/display/DisplayObject.hx",529,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphicsData,"graphicsData")
		HX_STACK_ARG(recurse,"recurse")
		HX_STACK_LINE(531)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(531)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(531)
		if ((tmp1)){
			HX_STACK_LINE(533)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(533)
			::openfl::_Vector::ObjectVector tmp3 = graphicsData;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(533)
			tmp2->__readGraphicsData(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,__readGraphicsData,(void))

Void DisplayObject_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderCairo",0x75ab477b,"openfl.display.DisplayObject.__renderCairo","openfl/display/DisplayObject.hx",540,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(542)
		::openfl::_internal::renderer::RenderSession tmp = renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(542)
		::openfl::_internal::renderer::cairo::CairoDisplayObject_obj::render(hx::ObjectPtr<OBJ_>(this),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderCairo,(void))

Void DisplayObject_obj::__renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderCairoMask",0x9fd38e07,"openfl.display.DisplayObject.__renderCairoMask","openfl/display/DisplayObject.hx",547,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(549)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(549)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(549)
		if ((tmp1)){
			HX_STACK_LINE(551)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(551)
			::openfl::_internal::renderer::RenderSession tmp3 = renderSession;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(551)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::renderMask(tmp2,tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderCairoMask,(void))

Void DisplayObject_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderCanvas",0x83845285,"openfl.display.DisplayObject.__renderCanvas","openfl/display/DisplayObject.hx",560,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(560)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderCanvas,(void))

Void DisplayObject_obj::__renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderCanvasMask",0x388fe611,"openfl.display.DisplayObject.__renderCanvasMask","openfl/display/DisplayObject.hx",565,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(567)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(567)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(567)
		if ((tmp1)){
			HX_STACK_LINE(569)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(569)
			::openfl::_internal::renderer::RenderSession tmp3 = renderSession;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(569)
			::openfl::_internal::renderer::canvas::CanvasGraphics_obj::renderMask(tmp2,tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderCanvasMask,(void))

Void DisplayObject_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderDOM",0xd2568ab5,"openfl.display.DisplayObject.__renderDOM","openfl/display/DisplayObject.hx",578,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(578)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderDOM,(void))

Void DisplayObject_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderGL",0xe0ccbd32,"openfl.display.DisplayObject.__renderGL","openfl/display/DisplayObject.hx",585,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(585)
		Dynamic tmp = this->opaqueBackground;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(585)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(585)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(585)
		if ((tmp1)){
			HX_STACK_LINE(585)
			::openfl::display::Graphics tmp3 = this->__graphics;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(585)
			::openfl::display::Graphics tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(585)
			tmp2 = (tmp4 == null());
		}
		else{
			HX_STACK_LINE(585)
			tmp2 = false;
		}
		HX_STACK_LINE(585)
		if ((tmp2)){
			HX_STACK_LINE(585)
			Dynamic();
		}
		else{
			HX_STACK_LINE(585)
			bool tmp3 = this->__renderable;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(585)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(585)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(585)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(585)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(585)
			if ((tmp6)){
				HX_STACK_LINE(585)
				Float tmp8 = this->__worldAlpha;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(585)
				Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(585)
				tmp7 = (tmp9 <= (int)0);
			}
			else{
				HX_STACK_LINE(585)
				tmp7 = true;
			}
			HX_STACK_LINE(585)
			if ((tmp7)){
				HX_STACK_LINE(585)
				Dynamic();
			}
			else{
				HX_STACK_LINE(585)
				Dynamic tmp8 = this->opaqueBackground;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(585)
				bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(585)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(585)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(585)
				if ((tmp10)){
					HX_STACK_LINE(585)
					Float tmp12 = this->get_width();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(585)
					Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(585)
					Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(585)
					tmp11 = (tmp14 > (int)0);
				}
				else{
					HX_STACK_LINE(585)
					tmp11 = false;
				}
				HX_STACK_LINE(585)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(585)
				if ((tmp11)){
					HX_STACK_LINE(585)
					Float tmp13 = this->get_height();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(585)
					Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(585)
					tmp12 = (tmp14 > (int)0);
				}
				else{
					HX_STACK_LINE(585)
					tmp12 = false;
				}
				HX_STACK_LINE(585)
				if ((tmp12)){
					HX_STACK_LINE(585)
					renderSession->maskManager->pushObject(hx::ObjectPtr<OBJ_>(this),null());
					HX_STACK_LINE(585)
					::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
					HX_STACK_LINE(585)
					::openfl::geom::Rectangle tmp13 = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(585)
					::openfl::geom::Rectangle rect = tmp13;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(585)
					Float tmp14 = this->get_width();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(585)
					Float tmp15 = this->get_height();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(585)
					rect->setTo((int)0,(int)0,tmp14,tmp15);
					HX_STACK_LINE(585)
					::openfl::geom::Rectangle tmp16 = rect;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(585)
					::openfl::geom::Matrix tmp17 = this->__renderTransform;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(585)
					renderSession->maskManager->pushRect(tmp16,tmp17);
					HX_STACK_LINE(585)
					Dynamic tmp18 = this->opaqueBackground;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(585)
					int color = ((int)(tmp18));		HX_STACK_VAR(color,"color");
					HX_STACK_LINE(585)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear_color.call((Float(((int((int(color) >> int((int)16))) & int((int)255)))) / Float((int)255)),(Float(((int((int(color) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(color) & int((int)255)))) / Float((int)255)),(int)1);
					HX_STACK_LINE(585)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear.call(gl->COLOR_BUFFER_BIT);
					HX_STACK_LINE(585)
					renderSession->maskManager->popRect();
					HX_STACK_LINE(585)
					renderSession->maskManager->popObject(hx::ObjectPtr<OBJ_>(this),null());
				}
				HX_STACK_LINE(585)
				::openfl::display::Graphics tmp13 = this->__graphics;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(585)
				bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(585)
				if ((tmp14)){
					HX_STACK_LINE(585)
					bool tmp15 = this->__renderable;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(585)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(585)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(585)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(585)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(585)
					if ((tmp18)){
						HX_STACK_LINE(585)
						Float tmp20 = this->__worldAlpha;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(585)
						Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(585)
						tmp19 = (tmp21 <= (int)0);
					}
					else{
						HX_STACK_LINE(585)
						tmp19 = true;
					}
					HX_STACK_LINE(585)
					if ((tmp19)){
						HX_STACK_LINE(585)
						Dynamic();
					}
					else{
						HX_STACK_LINE(585)
						::openfl::display::Graphics tmp20 = this->__graphics;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(585)
						::openfl::display::Graphics graphics = tmp20;		HX_STACK_VAR(graphics,"graphics");
						HX_STACK_LINE(585)
						bool tmp21 = (graphics != null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(585)
						if ((tmp21)){
							HX_STACK_LINE(585)
							::openfl::display::Graphics tmp22 = graphics;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(585)
							::openfl::_internal::renderer::RenderSession tmp23 = renderSession;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(585)
							::openfl::geom::Matrix tmp24 = this->__renderTransform;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(585)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::render(tmp22,tmp23,tmp24);
							HX_STACK_LINE(585)
							::openfl::geom::Rectangle bounds = graphics->__bounds;		HX_STACK_VAR(bounds,"bounds");
							HX_STACK_LINE(585)
							bool tmp25 = (graphics->__bitmap != null());		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(585)
							bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(585)
							if ((tmp25)){
								HX_STACK_LINE(585)
								tmp26 = graphics->__visible;
							}
							else{
								HX_STACK_LINE(585)
								tmp26 = false;
							}
							HX_STACK_LINE(585)
							if ((tmp26)){
								HX_STACK_LINE(585)
								::openfl::_internal::renderer::opengl::GLRenderer renderer = ((::openfl::_internal::renderer::opengl::GLRenderer)(renderSession->renderer));		HX_STACK_VAR(renderer,"renderer");
								HX_STACK_LINE(585)
								::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
								HX_STACK_LINE(585)
								Dynamic tmp27 = this->get_blendMode();		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(585)
								renderSession->blendModeManager->setBlendMode(tmp27);
								HX_STACK_LINE(585)
								renderSession->maskManager->pushObject(hx::ObjectPtr<OBJ_>(this),null());
								HX_STACK_LINE(585)
								::openfl::display::Shader tmp28 = renderSession->filterManager->pushObject(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(585)
								::openfl::display::Shader shader = tmp28;		HX_STACK_VAR(shader,"shader");
								HX_STACK_LINE(585)
								::openfl::display::ShaderData tmp29 = shader->get_data();		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(585)
								tmp29->uImage0->input = graphics->__bitmap;
								HX_STACK_LINE(585)
								::openfl::display::ShaderData tmp30 = shader->get_data();		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(585)
								tmp30->uImage0->smoothing = renderSession->allowSmoothing;
								HX_STACK_LINE(585)
								::openfl::geom::Matrix tmp31 = graphics->__worldTransform;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(585)
								::openfl::display::ShaderData tmp32 = shader->get_data();		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(585)
								tmp32->uMatrix->value = renderer->getMatrix(tmp31);
								HX_STACK_LINE(585)
								::openfl::display::Shader tmp33 = shader;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(585)
								renderSession->shaderManager->setShader(tmp33);
								HX_STACK_LINE(585)
								{
									HX_STACK_LINE(585)
									::lime::graphics::GLRenderContext tmp34 = gl;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(585)
									Float tmp35 = this->__worldAlpha;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(585)
									::lime::graphics::opengl::GLBuffer tmp36 = graphics->__bitmap->getBuffer(tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(585)
									::lime::graphics::opengl::GLBuffer buffer = tmp36;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(585)
									::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(gl->ARRAY_BUFFER,hx::DynamicPtr((  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) )));
								}
								HX_STACK_LINE(585)
								{
									HX_STACK_LINE(585)
									::openfl::display::ShaderData tmp34 = shader->get_data();		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(585)
									int tmp35 = tmp34->aPosition->index;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(585)
									int indx = tmp35;		HX_STACK_VAR(indx,"indx");
									HX_STACK_LINE(585)
									::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer.call(indx,(int)3,gl->FLOAT,false,(int)24,(int)0);
								}
								HX_STACK_LINE(585)
								{
									HX_STACK_LINE(585)
									::openfl::display::ShaderData tmp34 = shader->get_data();		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(585)
									int tmp35 = tmp34->aTexCoord->index;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(585)
									int indx = tmp35;		HX_STACK_VAR(indx,"indx");
									HX_STACK_LINE(585)
									::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer.call(indx,(int)2,gl->FLOAT,false,(int)24,(int)12);
								}
								HX_STACK_LINE(585)
								{
									HX_STACK_LINE(585)
									::openfl::display::ShaderData tmp34 = shader->get_data();		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(585)
									int tmp35 = tmp34->aAlpha->index;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(585)
									int indx = tmp35;		HX_STACK_VAR(indx,"indx");
									HX_STACK_LINE(585)
									::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer.call(indx,(int)1,gl->FLOAT,false,(int)24,(int)20);
								}
								HX_STACK_LINE(585)
								::lime::graphics::opengl::GL_obj::cffi_lime_gl_draw_arrays.call(gl->TRIANGLE_STRIP,(int)0,(int)4);
								HX_STACK_LINE(585)
								renderSession->filterManager->popObject(hx::ObjectPtr<OBJ_>(this));
								HX_STACK_LINE(585)
								renderSession->maskManager->popObject(hx::ObjectPtr<OBJ_>(this),null());
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderGL,(void))

Void DisplayObject_obj::__setRenderDirty( ){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__setRenderDirty",0x7766cdd1,"openfl.display.DisplayObject.__setRenderDirty","openfl/display/DisplayObject.hx",590,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_LINE(592)
		bool tmp = this->__renderDirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(592)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(592)
		if ((tmp1)){
			HX_STACK_LINE(594)
			this->__renderDirty = true;
			HX_STACK_LINE(595)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__setRenderDirty,(void))

Void DisplayObject_obj::__setStageReference( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__setStageReference",0xda522b58,"openfl.display.DisplayObject.__setStageReference","openfl/display/DisplayObject.hx",604,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(604)
		this->stage = stage;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__setStageReference,(void))

Void DisplayObject_obj::__setTransformDirty( ){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__setTransformDirty",0x7e906131,"openfl.display.DisplayObject.__setTransformDirty","openfl/display/DisplayObject.hx",609,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_LINE(611)
		bool tmp = this->__transformDirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(611)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(611)
		if ((tmp1)){
			HX_STACK_LINE(613)
			this->__transformDirty = true;
			HX_STACK_LINE(614)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__setTransformDirty,(void))

Void DisplayObject_obj::__stopAllMovieClips( ){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__stopAllMovieClips",0x3954cfdb,"openfl.display.DisplayObject.__stopAllMovieClips","openfl/display/DisplayObject.hx",621,0xc7539829)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__stopAllMovieClips,(void))

Void DisplayObject_obj::__update( bool transformOnly,bool updateChildren,::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__update",0x3f3ecc80,"openfl.display.DisplayObject.__update","openfl/display/DisplayObject.hx",628,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_ARG(updateChildren,"updateChildren")
		HX_STACK_ARG(maskGraphics,"maskGraphics")
		HX_STACK_LINE(630)
		bool tmp = this->get_visible();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(630)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(630)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(630)
		if ((tmp1)){
			HX_STACK_LINE(630)
			Float tmp3 = this->get_scaleX();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(630)
			Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(630)
			Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(630)
			tmp2 = (tmp5 != (int)0);
		}
		else{
			HX_STACK_LINE(630)
			tmp2 = false;
		}
		HX_STACK_LINE(630)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(630)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(630)
		if ((tmp3)){
			HX_STACK_LINE(630)
			Float tmp5 = this->get_scaleY();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(630)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(630)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(630)
			tmp4 = (tmp7 != (int)0);
		}
		else{
			HX_STACK_LINE(630)
			tmp4 = false;
		}
		HX_STACK_LINE(630)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(630)
		if ((tmp4)){
			HX_STACK_LINE(630)
			bool tmp6 = this->__isMask;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(630)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(630)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(630)
			tmp5 = !(tmp8);
		}
		else{
			HX_STACK_LINE(630)
			tmp5 = false;
		}
		HX_STACK_LINE(630)
		this->__renderable = tmp5;
		HX_STACK_LINE(631)
		this->__updateTransforms(null());
		HX_STACK_LINE(633)
		bool tmp6 = updateChildren;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(633)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(633)
		if ((tmp6)){
			HX_STACK_LINE(633)
			tmp7 = this->__transformDirty;
		}
		else{
			HX_STACK_LINE(633)
			tmp7 = false;
		}
		HX_STACK_LINE(633)
		if ((tmp7)){
			HX_STACK_LINE(635)
			this->__transformDirty = false;
			HX_STACK_LINE(636)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)--;
		}
		HX_STACK_LINE(640)
		bool tmp8 = (maskGraphics != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(640)
		if ((tmp8)){
			HX_STACK_LINE(642)
			::openfl::display::Graphics tmp9 = maskGraphics;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(642)
			this->__updateMask(tmp9);
		}
		HX_STACK_LINE(646)
		bool tmp9 = transformOnly;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(646)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(646)
		if ((tmp10)){
			HX_STACK_LINE(664)
			::openfl::geom::ColorTransform tmp11 = this->__worldColorTransform;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(664)
			::openfl::geom::Transform tmp12 = this->get_transform();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(664)
			::openfl::geom::ColorTransform tmp13 = tmp12->get_colorTransform();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(664)
			bool tmp14 = tmp11->__equals(tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(664)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(664)
			if ((tmp15)){
				HX_STACK_LINE(666)
				::openfl::geom::Transform tmp16 = this->get_transform();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(666)
				::openfl::geom::ColorTransform tmp17 = tmp16->get_colorTransform();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(666)
				::openfl::geom::ColorTransform tmp18 = tmp17->__clone();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(666)
				this->__worldColorTransform = tmp18;
			}
			HX_STACK_LINE(670)
			::openfl::display::DisplayObjectContainer tmp16 = this->parent;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(670)
			bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(670)
			::openfl::display::DisplayObject tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(670)
			if ((tmp17)){
				HX_STACK_LINE(670)
				tmp18 = this->parent;
			}
			else{
				HX_STACK_LINE(670)
				tmp18 = this->__renderParent;
			}
			HX_STACK_LINE(670)
			::openfl::display::DisplayObject __parent = tmp18;		HX_STACK_VAR(__parent,"__parent");
			HX_STACK_LINE(672)
			bool tmp19 = (__parent != null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(672)
			if ((tmp19)){
				HX_STACK_LINE(676)
				Float tmp20 = this->get_alpha();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(676)
				Float tmp21 = __parent->__worldAlpha;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(676)
				Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(676)
				this->__worldAlpha = tmp22;
				HX_STACK_LINE(677)
				::openfl::geom::ColorTransform tmp23 = this->__worldColorTransform;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(677)
				::openfl::geom::ColorTransform tmp24 = __parent->__worldColorTransform;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(677)
				tmp23->__combine(tmp24);
				HX_STACK_LINE(679)
				Dynamic tmp25 = this->get_blendMode();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(679)
				bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(679)
				bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(679)
				bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(679)
				if ((tmp27)){
					HX_STACK_LINE(679)
					Dynamic tmp29 = this->get_blendMode();		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(679)
					Dynamic tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(679)
					tmp28 = (tmp30 == ((Dynamic)((int)10)));
				}
				else{
					HX_STACK_LINE(679)
					tmp28 = true;
				}
				HX_STACK_LINE(679)
				if ((tmp28)){
					HX_STACK_LINE(681)
					this->__blendMode = __parent->__blendMode;
				}
			}
			else{
				HX_STACK_LINE(720)
				Float tmp20 = this->get_alpha();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(720)
				this->__worldAlpha = tmp20;
			}
			HX_STACK_LINE(745)
			bool tmp20 = updateChildren;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(745)
			bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(745)
			if ((tmp20)){
				HX_STACK_LINE(745)
				tmp21 = this->__renderDirty;
			}
			else{
				HX_STACK_LINE(745)
				tmp21 = false;
			}
			HX_STACK_LINE(745)
			if ((tmp21)){
				HX_STACK_LINE(747)
				this->__renderDirty = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DisplayObject_obj,__update,(void))

Void DisplayObject_obj::__updateChildren( bool transformOnly){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__updateChildren",0xcfbb21df,"openfl.display.DisplayObject.__updateChildren","openfl/display/DisplayObject.hx",756,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_LINE(758)
		bool tmp = this->get_visible();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(758)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(758)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(758)
		if ((tmp1)){
			HX_STACK_LINE(758)
			Float tmp3 = this->get_scaleX();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(758)
			Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(758)
			Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(758)
			tmp2 = (tmp5 != (int)0);
		}
		else{
			HX_STACK_LINE(758)
			tmp2 = false;
		}
		HX_STACK_LINE(758)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(758)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(758)
		if ((tmp3)){
			HX_STACK_LINE(758)
			Float tmp5 = this->get_scaleY();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(758)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(758)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(758)
			tmp4 = (tmp7 != (int)0);
		}
		else{
			HX_STACK_LINE(758)
			tmp4 = false;
		}
		HX_STACK_LINE(758)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(758)
		if ((tmp4)){
			HX_STACK_LINE(758)
			bool tmp6 = this->__isMask;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(758)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(758)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(758)
			tmp5 = !(tmp8);
		}
		else{
			HX_STACK_LINE(758)
			tmp5 = false;
		}
		HX_STACK_LINE(758)
		this->__renderable = tmp5;
		HX_STACK_LINE(759)
		Float tmp6 = this->get_alpha();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(759)
		this->__worldAlpha = tmp6;
		HX_STACK_LINE(761)
		bool tmp7 = this->__transformDirty;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(761)
		if ((tmp7)){
			HX_STACK_LINE(763)
			this->__transformDirty = false;
			HX_STACK_LINE(764)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__updateChildren,(void))

Void DisplayObject_obj::__updateMask( ::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__updateMask",0x5b0e798c,"openfl.display.DisplayObject.__updateMask","openfl/display/DisplayObject.hx",771,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(maskGraphics,"maskGraphics")
		HX_STACK_LINE(773)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(773)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(773)
		if ((tmp1)){
			HX_STACK_LINE(775)
			::openfl::geom::Matrix tmp2 = this->__worldTransform;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(775)
			maskGraphics->__commands->overrideMatrix(tmp2);
			HX_STACK_LINE(776)
			::openfl::display::Graphics tmp3 = this->__graphics;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(776)
			::openfl::_internal::renderer::DrawCommandBuffer tmp4 = tmp3->__commands;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(776)
			maskGraphics->__commands->append(tmp4);
			HX_STACK_LINE(777)
			maskGraphics->set___dirty(true);
			HX_STACK_LINE(778)
			maskGraphics->__visible = true;
			HX_STACK_LINE(780)
			bool tmp5 = (maskGraphics->__bounds == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(780)
			if ((tmp5)){
				HX_STACK_LINE(782)
				::openfl::geom::Rectangle tmp6 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(782)
				maskGraphics->__bounds = tmp6;
			}
			HX_STACK_LINE(786)
			::openfl::display::Graphics tmp6 = this->__graphics;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(786)
			::openfl::geom::Rectangle tmp7 = maskGraphics->__bounds;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(786)
			::openfl::geom::Matrix tmp8 = ::openfl::geom::Matrix_obj::__identity;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(786)
			tmp6->__getBounds(tmp7,tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__updateMask,(void))

Void DisplayObject_obj::__updateTransforms( ::openfl::geom::Matrix overrideTransform){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__updateTransforms",0x37510227,"openfl.display.DisplayObject.__updateTransforms","openfl/display/DisplayObject.hx",793,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(overrideTransform,"overrideTransform")
		HX_STACK_LINE(795)
		bool tmp = (overrideTransform != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(795)
		bool overrided = tmp;		HX_STACK_VAR(overrided,"overrided");
		HX_STACK_LINE(796)
		bool tmp1 = overrided;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(796)
		::openfl::geom::Matrix tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(796)
		if ((tmp1)){
			HX_STACK_LINE(796)
			tmp2 = overrideTransform;
		}
		else{
			HX_STACK_LINE(796)
			tmp2 = this->__transform;
		}
		HX_STACK_LINE(796)
		::openfl::geom::Matrix local = tmp2;		HX_STACK_VAR(local,"local");
		HX_STACK_LINE(798)
		::openfl::geom::Matrix tmp3 = this->__worldTransform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(798)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(798)
		if ((tmp4)){
			HX_STACK_LINE(800)
			::openfl::geom::Matrix tmp5 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(800)
			this->__worldTransform = tmp5;
		}
		HX_STACK_LINE(804)
		::openfl::geom::Matrix tmp5 = this->__renderTransform;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(804)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(804)
		if ((tmp6)){
			HX_STACK_LINE(806)
			::openfl::geom::Matrix tmp7 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(806)
			this->__renderTransform = tmp7;
		}
		HX_STACK_LINE(810)
		bool tmp7 = overrided;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(810)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(810)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(810)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(810)
		if ((tmp9)){
			HX_STACK_LINE(810)
			::openfl::display::DisplayObjectContainer tmp11 = this->parent;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(810)
			::openfl::display::DisplayObjectContainer tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(810)
			tmp10 = (tmp12 != null());
		}
		else{
			HX_STACK_LINE(810)
			tmp10 = false;
		}
		HX_STACK_LINE(810)
		if ((tmp10)){
			HX_STACK_LINE(812)
			::openfl::display::DisplayObjectContainer tmp11 = this->parent;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(812)
			::openfl::geom::Matrix parentTransform = tmp11->__worldTransform;		HX_STACK_VAR(parentTransform,"parentTransform");
			HX_STACK_LINE(814)
			Float tmp12 = (local->a * parentTransform->a);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(814)
			Float tmp13 = (local->b * parentTransform->c);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(814)
			Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(814)
			::openfl::geom::Matrix tmp15 = this->__worldTransform;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(814)
			tmp15->a = tmp14;
			HX_STACK_LINE(815)
			Float tmp16 = (local->a * parentTransform->b);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(815)
			Float tmp17 = (local->b * parentTransform->d);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(815)
			Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(815)
			::openfl::geom::Matrix tmp19 = this->__worldTransform;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(815)
			tmp19->b = tmp18;
			HX_STACK_LINE(816)
			Float tmp20 = (local->c * parentTransform->a);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(816)
			Float tmp21 = (local->d * parentTransform->c);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(816)
			Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(816)
			::openfl::geom::Matrix tmp23 = this->__worldTransform;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(816)
			tmp23->c = tmp22;
			HX_STACK_LINE(817)
			Float tmp24 = (local->c * parentTransform->b);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(817)
			Float tmp25 = (local->d * parentTransform->d);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(817)
			Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(817)
			::openfl::geom::Matrix tmp27 = this->__worldTransform;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(817)
			tmp27->d = tmp26;
			HX_STACK_LINE(818)
			Float tmp28 = (local->tx * parentTransform->a);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(818)
			Float tmp29 = (local->ty * parentTransform->c);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(818)
			Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(818)
			Float tmp31 = parentTransform->tx;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(818)
			Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(818)
			::openfl::geom::Matrix tmp33 = this->__worldTransform;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(818)
			tmp33->tx = tmp32;
			HX_STACK_LINE(819)
			Float tmp34 = (local->tx * parentTransform->b);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(819)
			Float tmp35 = (local->ty * parentTransform->d);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(819)
			Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(819)
			Float tmp37 = parentTransform->ty;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(819)
			Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(819)
			::openfl::geom::Matrix tmp39 = this->__worldTransform;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(819)
			tmp39->ty = tmp38;
			HX_STACK_LINE(821)
			::openfl::display::DisplayObjectContainer tmp40 = this->parent;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(821)
			parentTransform = tmp40->__renderTransform;
			HX_STACK_LINE(823)
			Float tmp41 = (local->a * parentTransform->a);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(823)
			Float tmp42 = (local->b * parentTransform->c);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(823)
			Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(823)
			::openfl::geom::Matrix tmp44 = this->__renderTransform;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(823)
			tmp44->a = tmp43;
			HX_STACK_LINE(824)
			Float tmp45 = (local->a * parentTransform->b);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(824)
			Float tmp46 = (local->b * parentTransform->d);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(824)
			Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(824)
			::openfl::geom::Matrix tmp48 = this->__renderTransform;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(824)
			tmp48->b = tmp47;
			HX_STACK_LINE(825)
			Float tmp49 = (local->c * parentTransform->a);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(825)
			Float tmp50 = (local->d * parentTransform->c);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(825)
			Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(825)
			::openfl::geom::Matrix tmp52 = this->__renderTransform;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(825)
			tmp52->c = tmp51;
			HX_STACK_LINE(826)
			Float tmp53 = (local->c * parentTransform->b);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(826)
			Float tmp54 = (local->d * parentTransform->d);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(826)
			Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(826)
			::openfl::geom::Matrix tmp56 = this->__renderTransform;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(826)
			tmp56->d = tmp55;
			HX_STACK_LINE(827)
			Float tmp57 = (local->tx * parentTransform->a);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(827)
			Float tmp58 = (local->ty * parentTransform->c);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(827)
			Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(827)
			Float tmp60 = parentTransform->tx;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(827)
			Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(827)
			::openfl::geom::Matrix tmp62 = this->__renderTransform;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(827)
			tmp62->tx = tmp61;
			HX_STACK_LINE(828)
			Float tmp63 = (local->tx * parentTransform->b);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(828)
			Float tmp64 = (local->ty * parentTransform->d);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(828)
			Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(828)
			Float tmp66 = parentTransform->ty;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(828)
			Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(828)
			::openfl::geom::Matrix tmp68 = this->__renderTransform;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(828)
			tmp68->ty = tmp67;
		}
		else{
			HX_STACK_LINE(832)
			::openfl::geom::Matrix tmp11 = this->__worldTransform;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(832)
			::openfl::geom::Matrix tmp12 = local;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(832)
			tmp11->copyFrom(tmp12);
			HX_STACK_LINE(833)
			::openfl::geom::Matrix tmp13 = this->__renderTransform;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(833)
			::openfl::geom::Matrix tmp14 = local;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(833)
			tmp13->copyFrom(tmp14);
		}
		HX_STACK_LINE(837)
		::openfl::geom::Rectangle tmp11 = this->__scrollRect;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(837)
		bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(837)
		if ((tmp12)){
			HX_STACK_LINE(839)
			::openfl::geom::Matrix tmp13 = this->__renderTransform;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(839)
			::openfl::geom::Matrix _this = tmp13;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(839)
			::openfl::geom::Rectangle tmp14 = this->__scrollRect;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(839)
			Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(839)
			Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(839)
			Float px = tmp16;		HX_STACK_VAR(px,"px");
			HX_STACK_LINE(839)
			::openfl::geom::Rectangle tmp17 = this->__scrollRect;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(839)
			Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(839)
			Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(839)
			Float py = tmp19;		HX_STACK_VAR(py,"py");
			HX_STACK_LINE(839)
			Float tmp20 = (px * _this->a);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(839)
			Float tmp21 = (py * _this->c);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(839)
			Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(839)
			Float tmp23 = _this->tx;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(839)
			Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(839)
			_this->tx = tmp24;
			HX_STACK_LINE(839)
			Float tmp25 = (px * _this->b);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(839)
			Float tmp26 = (py * _this->d);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(839)
			Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(839)
			Float tmp28 = _this->ty;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(839)
			Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(839)
			_this->ty = tmp29;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__updateTransforms,(void))

Float DisplayObject_obj::get_alpha( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_alpha",0x5dd6147e,"openfl.display.DisplayObject.get_alpha","openfl/display/DisplayObject.hx",853,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(855)
	Float tmp = this->__alpha;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(855)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_alpha,return )

Float DisplayObject_obj::set_alpha( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_alpha",0x4127008a,"openfl.display.DisplayObject.set_alpha","openfl/display/DisplayObject.hx",860,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(862)
	bool tmp = (value > ((Float)1.0));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(862)
	if ((tmp)){
		HX_STACK_LINE(862)
		value = ((Float)1.0);
	}
	HX_STACK_LINE(863)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(863)
	Float tmp2 = this->__alpha;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(863)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(863)
	if ((tmp3)){
		HX_STACK_LINE(863)
		bool tmp4 = this->__renderDirty;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(863)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(863)
		if ((tmp5)){
			HX_STACK_LINE(863)
			this->__renderDirty = true;
			HX_STACK_LINE(863)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
	HX_STACK_LINE(864)
	Float tmp4 = this->__alpha = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(864)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_alpha,return )

Dynamic DisplayObject_obj::get_blendMode( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_blendMode",0xee046174,"openfl.display.DisplayObject.get_blendMode","openfl/display/DisplayObject.hx",869,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(871)
	Dynamic tmp = this->__blendMode;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(871)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_blendMode,return )

Dynamic DisplayObject_obj::set_blendMode( Dynamic value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_blendMode",0x330a4380,"openfl.display.DisplayObject.set_blendMode","openfl/display/DisplayObject.hx",876,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(878)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(878)
	if ((tmp)){
		HX_STACK_LINE(878)
		value = ((Dynamic)((int)10));
	}
	HX_STACK_LINE(879)
	Dynamic tmp1 = this->__blendMode = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(879)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_blendMode,return )

bool DisplayObject_obj::get_cacheAsBitmap( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_cacheAsBitmap",0xa5311003,"openfl.display.DisplayObject.get_cacheAsBitmap","openfl/display/DisplayObject.hx",884,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(886)
	bool tmp = (this->__filters == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(886)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(886)
	if ((tmp)){
		HX_STACK_LINE(886)
		tmp1 = this->__cacheAsBitmap;
	}
	else{
		HX_STACK_LINE(886)
		tmp1 = true;
	}
	HX_STACK_LINE(886)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_cacheAsBitmap,return )

bool DisplayObject_obj::set_cacheAsBitmap( bool value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_cacheAsBitmap",0xc89ee80f,"openfl.display.DisplayObject.set_cacheAsBitmap","openfl/display/DisplayObject.hx",891,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(893)
	{
		HX_STACK_LINE(893)
		bool tmp = this->__renderDirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(893)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(893)
		if ((tmp1)){
			HX_STACK_LINE(893)
			this->__renderDirty = true;
			HX_STACK_LINE(893)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
	HX_STACK_LINE(894)
	bool tmp = this->__cacheAsBitmap = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(894)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_cacheAsBitmap,return )

::openfl::geom::Matrix DisplayObject_obj::get_cacheAsBitmapMatrix( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_cacheAsBitmapMatrix",0xe47a1ea4,"openfl.display.DisplayObject.get_cacheAsBitmapMatrix","openfl/display/DisplayObject.hx",899,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(901)
	::openfl::geom::Matrix tmp = this->__cacheAsBitmapMatrix;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(901)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_cacheAsBitmapMatrix,return )

::openfl::geom::Matrix DisplayObject_obj::set_cacheAsBitmapMatrix( ::openfl::geom::Matrix value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_cacheAsBitmapMatrix",0xe6db87b0,"openfl.display.DisplayObject.set_cacheAsBitmapMatrix","openfl/display/DisplayObject.hx",906,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(908)
	{
		HX_STACK_LINE(908)
		bool tmp = this->__renderDirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(908)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(908)
		if ((tmp1)){
			HX_STACK_LINE(908)
			this->__renderDirty = true;
			HX_STACK_LINE(908)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
	HX_STACK_LINE(909)
	::openfl::geom::Matrix tmp = value->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(909)
	::openfl::geom::Matrix tmp1 = this->__cacheAsBitmapMatrix = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(909)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_cacheAsBitmapMatrix,return )

Array< ::Dynamic > DisplayObject_obj::get_filters( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_filters",0x661396db,"openfl.display.DisplayObject.get_filters","openfl/display/DisplayObject.hx",914,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(916)
	bool tmp = (this->__filters == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(916)
	if ((tmp)){
		HX_STACK_LINE(918)
		return Array_obj< ::Dynamic >::__new();
	}
	else{
		HX_STACK_LINE(922)
		return this->__filters->copy();
	}
	HX_STACK_LINE(916)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_filters,return )

Array< ::Dynamic > DisplayObject_obj::set_filters( Array< ::Dynamic > value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_filters",0x70809de7,"openfl.display.DisplayObject.set_filters","openfl/display/DisplayObject.hx",929,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(931)
	bool tmp = (value != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(931)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(931)
	if ((tmp)){
		HX_STACK_LINE(931)
		tmp1 = (value->length > (int)0);
	}
	else{
		HX_STACK_LINE(931)
		tmp1 = false;
	}
	HX_STACK_LINE(931)
	if ((tmp1)){
		HX_STACK_LINE(933)
		this->__filters = value;
	}
	else{
		HX_STACK_LINE(938)
		this->__filters = null();
	}
	HX_STACK_LINE(943)
	{
		HX_STACK_LINE(943)
		bool tmp2 = this->__renderDirty;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(943)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(943)
		if ((tmp3)){
			HX_STACK_LINE(943)
			this->__renderDirty = true;
			HX_STACK_LINE(943)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
	HX_STACK_LINE(945)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_filters,return )

Float DisplayObject_obj::get_height( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_height",0x7d8c16c7,"openfl.display.DisplayObject.get_height","openfl/display/DisplayObject.hx",950,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(952)
	::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(952)
	::openfl::geom::Rectangle bounds = tmp;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(953)
	{
		HX_STACK_LINE(953)
		::openfl::geom::Rectangle tmp1 = bounds;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(953)
		::openfl::geom::Matrix tmp2 = this->__transform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(953)
		this->__getBounds(tmp1,tmp2);
	}
	HX_STACK_LINE(955)
	Float tmp1 = bounds->height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(955)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_height,return )

Float DisplayObject_obj::set_height( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_height",0x8109b53b,"openfl.display.DisplayObject.set_height","openfl/display/DisplayObject.hx",960,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(962)
	::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(962)
	::openfl::geom::Rectangle bounds = tmp;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(964)
	::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__temp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(964)
	::openfl::geom::Matrix matrix = tmp1;		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(965)
	matrix->identity();
	HX_STACK_LINE(967)
	::openfl::geom::Rectangle tmp2 = bounds;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(967)
	::openfl::geom::Matrix tmp3 = matrix;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(967)
	this->__getBounds(tmp2,tmp3);
	HX_STACK_LINE(969)
	bool tmp4 = (value != bounds->height);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(969)
	if ((tmp4)){
		HX_STACK_LINE(971)
		Float tmp5 = (Float(value) / Float(bounds->height));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(971)
		this->set_scaleY(tmp5);
	}
	else{
		HX_STACK_LINE(975)
		this->set_scaleY((int)1);
	}
	HX_STACK_LINE(979)
	Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(979)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_height,return )

::openfl::display::DisplayObject DisplayObject_obj::get_mask( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_mask",0xd81ad7cc,"openfl.display.DisplayObject.get_mask","openfl/display/DisplayObject.hx",984,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(986)
	::openfl::display::DisplayObject tmp = this->__mask;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(986)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_mask,return )

::openfl::display::DisplayObject DisplayObject_obj::set_mask( ::openfl::display::DisplayObject value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_mask",0x86783140,"openfl.display.DisplayObject.set_mask","openfl/display/DisplayObject.hx",991,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(993)
	::openfl::display::DisplayObject tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(993)
	::openfl::display::DisplayObject tmp1 = this->__mask;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(993)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(993)
	if ((tmp2)){
		HX_STACK_LINE(995)
		{
			HX_STACK_LINE(995)
			bool tmp3 = this->__transformDirty;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(995)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(995)
			if ((tmp4)){
				HX_STACK_LINE(995)
				this->__transformDirty = true;
				HX_STACK_LINE(995)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(996)
		{
			HX_STACK_LINE(996)
			bool tmp3 = this->__renderDirty;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(996)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(996)
			if ((tmp4)){
				HX_STACK_LINE(996)
				this->__renderDirty = true;
				HX_STACK_LINE(996)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
	}
	HX_STACK_LINE(1000)
	::openfl::display::DisplayObject tmp3 = this->__mask;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1000)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1000)
	if ((tmp4)){
		HX_STACK_LINE(1002)
		::openfl::display::DisplayObject tmp5 = this->__mask;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1002)
		tmp5->__isMask = false;
		HX_STACK_LINE(1003)
		{
			HX_STACK_LINE(1003)
			::openfl::display::DisplayObject tmp6 = this->__mask;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1003)
			::openfl::display::DisplayObject _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1003)
			bool tmp7 = _this->__transformDirty;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1003)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1003)
			if ((tmp8)){
				HX_STACK_LINE(1003)
				_this->__transformDirty = true;
				HX_STACK_LINE(1003)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(1004)
		{
			HX_STACK_LINE(1004)
			::openfl::display::DisplayObject tmp6 = this->__mask;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1004)
			::openfl::display::DisplayObject _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1004)
			bool tmp7 = _this->__renderDirty;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1004)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1004)
			if ((tmp8)){
				HX_STACK_LINE(1004)
				_this->__renderDirty = true;
				HX_STACK_LINE(1004)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
	}
	HX_STACK_LINE(1008)
	bool tmp5 = (value != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1008)
	if ((tmp5)){
		HX_STACK_LINE(1010)
		value->__isMask = true;
	}
	HX_STACK_LINE(1014)
	::openfl::display::DisplayObject tmp6 = this->__mask = value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1014)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_mask,return )

Float DisplayObject_obj::get_mouseX( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_mouseX",0x474e5973,"openfl.display.DisplayObject.get_mouseX","openfl/display/DisplayObject.hx",1019,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1021)
	::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1021)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1021)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1021)
	if ((tmp1)){
		HX_STACK_LINE(1021)
		::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1021)
		tmp2 = tmp3->__mouseX;
	}
	else{
		HX_STACK_LINE(1021)
		::openfl::display::MovieClip tmp3 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1021)
		tmp2 = tmp3->stage->__mouseX;
	}
	HX_STACK_LINE(1021)
	Float mouseX = tmp2;		HX_STACK_VAR(mouseX,"mouseX");
	HX_STACK_LINE(1022)
	::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1022)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1022)
	Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1022)
	if ((tmp4)){
		HX_STACK_LINE(1022)
		::openfl::display::Stage tmp6 = this->stage;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1022)
		tmp5 = tmp6->__mouseY;
	}
	else{
		HX_STACK_LINE(1022)
		::openfl::display::MovieClip tmp6 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1022)
		tmp5 = tmp6->stage->__mouseY;
	}
	HX_STACK_LINE(1022)
	Float mouseY = tmp5;		HX_STACK_VAR(mouseY,"mouseY");
	HX_STACK_LINE(1024)
	Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1024)
	{
		HX_STACK_LINE(1024)
		::openfl::geom::Matrix tmp7 = this->__getRenderTransform();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1024)
		::openfl::geom::Matrix _this = tmp7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1024)
		Float tmp8 = (_this->a * _this->d);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1024)
		Float tmp9 = (_this->b * _this->c);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1024)
		Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1024)
		Float norm = tmp10;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(1024)
		bool tmp11 = (norm == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1024)
		if ((tmp11)){
			HX_STACK_LINE(1024)
			Float tmp12 = _this->tx;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1024)
			tmp6 = -(tmp12);
		}
		else{
			HX_STACK_LINE(1024)
			Float tmp12 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1024)
			Float tmp13 = _this->c;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1024)
			Float tmp14 = (_this->ty - mouseY);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1024)
			Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1024)
			Float tmp16 = _this->d;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1024)
			Float tmp17 = (mouseX - _this->tx);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1024)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1024)
			Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1024)
			tmp6 = (tmp12 * tmp19);
		}
	}
	HX_STACK_LINE(1024)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_mouseX,return )

Float DisplayObject_obj::get_mouseY( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_mouseY",0x474e5974,"openfl.display.DisplayObject.get_mouseY","openfl/display/DisplayObject.hx",1029,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1031)
	::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1031)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1031)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1031)
	if ((tmp1)){
		HX_STACK_LINE(1031)
		::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1031)
		tmp2 = tmp3->__mouseX;
	}
	else{
		HX_STACK_LINE(1031)
		::openfl::display::MovieClip tmp3 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1031)
		tmp2 = tmp3->stage->__mouseX;
	}
	HX_STACK_LINE(1031)
	Float mouseX = tmp2;		HX_STACK_VAR(mouseX,"mouseX");
	HX_STACK_LINE(1032)
	::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1032)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1032)
	Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1032)
	if ((tmp4)){
		HX_STACK_LINE(1032)
		::openfl::display::Stage tmp6 = this->stage;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1032)
		tmp5 = tmp6->__mouseY;
	}
	else{
		HX_STACK_LINE(1032)
		::openfl::display::MovieClip tmp6 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1032)
		tmp5 = tmp6->stage->__mouseY;
	}
	HX_STACK_LINE(1032)
	Float mouseY = tmp5;		HX_STACK_VAR(mouseY,"mouseY");
	HX_STACK_LINE(1034)
	Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1034)
	{
		HX_STACK_LINE(1034)
		::openfl::geom::Matrix tmp7 = this->__getRenderTransform();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1034)
		::openfl::geom::Matrix _this = tmp7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1034)
		Float tmp8 = (_this->a * _this->d);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1034)
		Float tmp9 = (_this->b * _this->c);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1034)
		Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1034)
		Float norm = tmp10;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(1034)
		bool tmp11 = (norm == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1034)
		if ((tmp11)){
			HX_STACK_LINE(1034)
			Float tmp12 = _this->ty;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1034)
			tmp6 = -(tmp12);
		}
		else{
			HX_STACK_LINE(1034)
			Float tmp12 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1034)
			Float tmp13 = _this->a;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1034)
			Float tmp14 = (mouseY - _this->ty);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1034)
			Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1034)
			Float tmp16 = _this->b;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1034)
			Float tmp17 = (_this->tx - mouseX);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1034)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1034)
			Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1034)
			tmp6 = (tmp12 * tmp19);
		}
	}
	HX_STACK_LINE(1034)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_mouseY,return )

::String DisplayObject_obj::get_name( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_name",0xd8c4092b,"openfl.display.DisplayObject.get_name","openfl/display/DisplayObject.hx",1039,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1041)
	::String tmp = this->__name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1041)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_name,return )

::String DisplayObject_obj::set_name( ::String value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_name",0x8721629f,"openfl.display.DisplayObject.set_name","openfl/display/DisplayObject.hx",1046,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1048)
	::String tmp = this->__name = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1048)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_name,return )

::openfl::display::DisplayObject DisplayObject_obj::get_root( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_root",0xdb738502,"openfl.display.DisplayObject.get_root","openfl/display/DisplayObject.hx",1053,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1055)
	::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1055)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1055)
	if ((tmp1)){
		HX_STACK_LINE(1057)
		::openfl::display::MovieClip tmp2 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1057)
		return tmp2;
	}
	HX_STACK_LINE(1061)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_root,return )

Float DisplayObject_obj::get_rotation( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_rotation",0xdf0fc41e,"openfl.display.DisplayObject.get_rotation","openfl/display/DisplayObject.hx",1066,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1068)
	Float tmp = this->__rotation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1068)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_rotation,return )

Float DisplayObject_obj::set_rotation( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_rotation",0xf408e792,"openfl.display.DisplayObject.set_rotation","openfl/display/DisplayObject.hx",1073,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1075)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1075)
	Float tmp1 = this->__rotation;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1075)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1075)
	if ((tmp2)){
		HX_STACK_LINE(1077)
		this->__rotation = value;
		HX_STACK_LINE(1078)
		Float tmp3 = this->__rotation;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1078)
		Float tmp4 = ::Math_obj::PI;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1078)
		Float tmp5 = (Float(tmp4) / Float((int)180));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1078)
		Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1078)
		Float radians = tmp6;		HX_STACK_VAR(radians,"radians");
		HX_STACK_LINE(1079)
		Float tmp7 = radians;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1079)
		Float tmp8 = ::Math_obj::sin(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1079)
		this->__rotationSine = tmp8;
		HX_STACK_LINE(1080)
		Float tmp9 = radians;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1080)
		Float tmp10 = ::Math_obj::cos(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1080)
		this->__rotationCosine = tmp10;
		HX_STACK_LINE(1082)
		Float tmp11 = this->get_scaleX();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1082)
		Float __scaleX = tmp11;		HX_STACK_VAR(__scaleX,"__scaleX");
		HX_STACK_LINE(1083)
		Float tmp12 = this->get_scaleY();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1083)
		Float __scaleY = tmp12;		HX_STACK_VAR(__scaleY,"__scaleY");
		HX_STACK_LINE(1085)
		Float tmp13 = this->__rotationCosine;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1085)
		Float tmp14 = __scaleX;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1085)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1085)
		::openfl::geom::Matrix tmp16 = this->__transform;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1085)
		tmp16->a = tmp15;
		HX_STACK_LINE(1086)
		Float tmp17 = this->__rotationSine;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1086)
		Float tmp18 = __scaleX;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1086)
		Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1086)
		::openfl::geom::Matrix tmp20 = this->__transform;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1086)
		tmp20->b = tmp19;
		HX_STACK_LINE(1087)
		Float tmp21 = this->__rotationSine;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1087)
		Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1087)
		Float tmp23 = __scaleY;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1087)
		Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1087)
		::openfl::geom::Matrix tmp25 = this->__transform;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1087)
		tmp25->c = tmp24;
		HX_STACK_LINE(1088)
		Float tmp26 = this->__rotationCosine;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1088)
		Float tmp27 = __scaleY;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1088)
		Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1088)
		::openfl::geom::Matrix tmp29 = this->__transform;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1088)
		tmp29->d = tmp28;
		HX_STACK_LINE(1090)
		{
			HX_STACK_LINE(1090)
			bool tmp30 = this->__transformDirty;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1090)
			bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1090)
			if ((tmp31)){
				HX_STACK_LINE(1090)
				this->__transformDirty = true;
				HX_STACK_LINE(1090)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
	}
	HX_STACK_LINE(1094)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1094)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_rotation,return )

Float DisplayObject_obj::get_scaleX( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_scaleX",0xb765f96e,"openfl.display.DisplayObject.get_scaleX","openfl/display/DisplayObject.hx",1099,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1101)
	::openfl::geom::Matrix tmp = this->__transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1101)
	Float tmp1 = tmp->b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1101)
	bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1101)
	if ((tmp2)){
		HX_STACK_LINE(1103)
		::openfl::geom::Matrix tmp3 = this->__transform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1103)
		Float tmp4 = tmp3->a;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1103)
		return tmp4;
	}
	else{
		HX_STACK_LINE(1107)
		::openfl::geom::Matrix tmp3 = this->__transform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1107)
		Float tmp4 = tmp3->a;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1107)
		::openfl::geom::Matrix tmp5 = this->__transform;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1107)
		Float tmp6 = tmp5->a;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1107)
		Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1107)
		::openfl::geom::Matrix tmp8 = this->__transform;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1107)
		Float tmp9 = tmp8->b;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1107)
		::openfl::geom::Matrix tmp10 = this->__transform;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1107)
		Float tmp11 = tmp10->b;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1107)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1107)
		Float tmp13 = (tmp7 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1107)
		Float tmp14 = ::Math_obj::sqrt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1107)
		return tmp14;
	}
	HX_STACK_LINE(1101)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scaleX,return )

Float DisplayObject_obj::set_scaleX( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_scaleX",0xbae397e2,"openfl.display.DisplayObject.set_scaleX","openfl/display/DisplayObject.hx",1114,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1116)
	::openfl::geom::Matrix tmp = this->__transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1116)
	Float tmp1 = tmp->b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1116)
	bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1116)
	if ((tmp2)){
		HX_STACK_LINE(1118)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1118)
		::openfl::geom::Matrix tmp4 = this->__transform;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1118)
		Float tmp5 = tmp4->a;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1118)
		bool tmp6 = (tmp3 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1118)
		if ((tmp6)){
			HX_STACK_LINE(1118)
			bool tmp7 = this->__transformDirty;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1118)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1118)
			if ((tmp8)){
				HX_STACK_LINE(1118)
				this->__transformDirty = true;
				HX_STACK_LINE(1118)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(1119)
		::openfl::geom::Matrix tmp7 = this->__transform;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1119)
		tmp7->a = value;
	}
	else{
		HX_STACK_LINE(1123)
		Float tmp3 = this->__rotationCosine;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1123)
		Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1123)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1123)
		Float a = tmp5;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(1124)
		Float tmp6 = this->__rotationSine;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1124)
		Float tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1124)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1124)
		Float b = tmp8;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(1126)
		::openfl::geom::Matrix tmp9 = this->__transform;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1126)
		Float tmp10 = tmp9->a;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1126)
		Float tmp11 = a;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1126)
		bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1126)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1126)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1126)
		if ((tmp13)){
			HX_STACK_LINE(1126)
			::openfl::geom::Matrix tmp15 = this->__transform;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1126)
			::openfl::geom::Matrix tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1126)
			Float tmp17 = tmp16->b;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1126)
			Float tmp18 = b;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1126)
			tmp14 = (tmp17 != tmp18);
		}
		else{
			HX_STACK_LINE(1126)
			tmp14 = true;
		}
		HX_STACK_LINE(1126)
		if ((tmp14)){
			HX_STACK_LINE(1128)
			bool tmp15 = this->__transformDirty;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1128)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1128)
			if ((tmp16)){
				HX_STACK_LINE(1128)
				this->__transformDirty = true;
				HX_STACK_LINE(1128)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(1132)
		::openfl::geom::Matrix tmp15 = this->__transform;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1132)
		tmp15->a = a;
		HX_STACK_LINE(1133)
		::openfl::geom::Matrix tmp16 = this->__transform;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1133)
		tmp16->b = b;
	}
	HX_STACK_LINE(1137)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1137)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scaleX,return )

Float DisplayObject_obj::get_scaleY( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_scaleY",0xb765f96f,"openfl.display.DisplayObject.get_scaleY","openfl/display/DisplayObject.hx",1142,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1144)
	::openfl::geom::Matrix tmp = this->__transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1144)
	Float tmp1 = tmp->c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1144)
	bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1144)
	if ((tmp2)){
		HX_STACK_LINE(1146)
		::openfl::geom::Matrix tmp3 = this->__transform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1146)
		Float tmp4 = tmp3->d;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1146)
		return tmp4;
	}
	else{
		HX_STACK_LINE(1150)
		::openfl::geom::Matrix tmp3 = this->__transform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1150)
		Float tmp4 = tmp3->c;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1150)
		::openfl::geom::Matrix tmp5 = this->__transform;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1150)
		Float tmp6 = tmp5->c;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1150)
		Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1150)
		::openfl::geom::Matrix tmp8 = this->__transform;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1150)
		Float tmp9 = tmp8->d;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1150)
		::openfl::geom::Matrix tmp10 = this->__transform;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1150)
		Float tmp11 = tmp10->d;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1150)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1150)
		Float tmp13 = (tmp7 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1150)
		Float tmp14 = ::Math_obj::sqrt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1150)
		return tmp14;
	}
	HX_STACK_LINE(1144)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scaleY,return )

Float DisplayObject_obj::set_scaleY( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_scaleY",0xbae397e3,"openfl.display.DisplayObject.set_scaleY","openfl/display/DisplayObject.hx",1157,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1159)
	::openfl::geom::Matrix tmp = this->__transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1159)
	Float tmp1 = tmp->c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1159)
	bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1159)
	if ((tmp2)){
		HX_STACK_LINE(1161)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1161)
		::openfl::geom::Matrix tmp4 = this->__transform;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1161)
		Float tmp5 = tmp4->d;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1161)
		bool tmp6 = (tmp3 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1161)
		if ((tmp6)){
			HX_STACK_LINE(1161)
			bool tmp7 = this->__transformDirty;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1161)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1161)
			if ((tmp8)){
				HX_STACK_LINE(1161)
				this->__transformDirty = true;
				HX_STACK_LINE(1161)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(1162)
		::openfl::geom::Matrix tmp7 = this->__transform;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1162)
		tmp7->d = value;
	}
	else{
		HX_STACK_LINE(1166)
		Float tmp3 = this->__rotationSine;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1166)
		Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1166)
		Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1166)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1166)
		Float c = tmp6;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(1167)
		Float tmp7 = this->__rotationCosine;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1167)
		Float tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1167)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1167)
		Float d = tmp9;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(1169)
		::openfl::geom::Matrix tmp10 = this->__transform;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1169)
		Float tmp11 = tmp10->d;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1169)
		Float tmp12 = d;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1169)
		bool tmp13 = (tmp11 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1169)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1169)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1169)
		if ((tmp14)){
			HX_STACK_LINE(1169)
			::openfl::geom::Matrix tmp16 = this->__transform;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1169)
			::openfl::geom::Matrix tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1169)
			Float tmp18 = tmp17->c;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1169)
			Float tmp19 = c;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1169)
			tmp15 = (tmp18 != tmp19);
		}
		else{
			HX_STACK_LINE(1169)
			tmp15 = true;
		}
		HX_STACK_LINE(1169)
		if ((tmp15)){
			HX_STACK_LINE(1171)
			bool tmp16 = this->__transformDirty;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1171)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1171)
			if ((tmp17)){
				HX_STACK_LINE(1171)
				this->__transformDirty = true;
				HX_STACK_LINE(1171)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(1175)
		::openfl::geom::Matrix tmp16 = this->__transform;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1175)
		tmp16->c = c;
		HX_STACK_LINE(1176)
		::openfl::geom::Matrix tmp17 = this->__transform;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1176)
		tmp17->d = d;
	}
	HX_STACK_LINE(1180)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1180)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scaleY,return )

::openfl::geom::Rectangle DisplayObject_obj::get_scrollRect( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_scrollRect",0xba87dab1,"openfl.display.DisplayObject.get_scrollRect","openfl/display/DisplayObject.hx",1185,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1187)
	::openfl::geom::Rectangle tmp = this->__scrollRect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1187)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1187)
	if ((tmp1)){
		HX_STACK_LINE(1187)
		return null();
	}
	HX_STACK_LINE(1189)
	::openfl::geom::Rectangle tmp2 = this->__scrollRect;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1189)
	::openfl::geom::Rectangle tmp3 = tmp2->clone();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1189)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scrollRect,return )

::openfl::geom::Rectangle DisplayObject_obj::set_scrollRect( ::openfl::geom::Rectangle value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_scrollRect",0xdaa7c325,"openfl.display.DisplayObject.set_scrollRect","openfl/display/DisplayObject.hx",1194,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1196)
	::openfl::geom::Rectangle tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1196)
	::openfl::geom::Rectangle tmp1 = this->__scrollRect;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1196)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1196)
	if ((tmp2)){
		HX_STACK_LINE(1198)
		bool tmp3 = this->__transformDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1198)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1198)
		if ((tmp4)){
			HX_STACK_LINE(1198)
			this->__transformDirty = true;
			HX_STACK_LINE(1198)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
	HX_STACK_LINE(1203)
	::openfl::geom::Rectangle tmp3 = this->__scrollRect = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1203)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scrollRect,return )

::openfl::geom::Transform DisplayObject_obj::get_transform( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_transform",0x275faa8c,"openfl.display.DisplayObject.get_transform","openfl/display/DisplayObject.hx",1208,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1210)
	::openfl::geom::Transform tmp = this->__objectTransform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1210)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1210)
	if ((tmp1)){
		HX_STACK_LINE(1212)
		::openfl::geom::Transform tmp2 = ::openfl::geom::Transform_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1212)
		this->__objectTransform = tmp2;
	}
	HX_STACK_LINE(1216)
	::openfl::geom::Transform tmp2 = this->__objectTransform;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1216)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_transform,return )

::openfl::geom::Transform DisplayObject_obj::set_transform( ::openfl::geom::Transform value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_transform",0x6c658c98,"openfl.display.DisplayObject.set_transform","openfl/display/DisplayObject.hx",1221,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1223)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1223)
	if ((tmp)){
		HX_STACK_LINE(1225)
		::openfl::errors::TypeError tmp1 = ::openfl::errors::TypeError_obj::__new(HX_HCSTRING("Parameter transform must be non-null.","\x56","\x12","\xfe","\x6e"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1225)
		HX_STACK_DO_THROW(tmp1);
	}
	HX_STACK_LINE(1229)
	::openfl::geom::Transform tmp1 = this->__objectTransform;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1229)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1229)
	if ((tmp2)){
		HX_STACK_LINE(1231)
		::openfl::geom::Transform tmp3 = ::openfl::geom::Transform_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1231)
		this->__objectTransform = tmp3;
	}
	HX_STACK_LINE(1235)
	{
		HX_STACK_LINE(1235)
		bool tmp3 = this->__transformDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1235)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1235)
		if ((tmp4)){
			HX_STACK_LINE(1235)
			this->__transformDirty = true;
			HX_STACK_LINE(1235)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
	HX_STACK_LINE(1236)
	::openfl::geom::Transform tmp3 = this->__objectTransform;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1236)
	::openfl::geom::Matrix tmp4 = value->get_matrix();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1236)
	tmp3->set_matrix(tmp4);
	HX_STACK_LINE(1237)
	::openfl::geom::Transform tmp5 = this->__objectTransform;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1237)
	::openfl::geom::ColorTransform tmp6 = value->get_colorTransform();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1237)
	::openfl::geom::ColorTransform tmp7 = tmp6->__clone();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1237)
	tmp5->set_colorTransform(tmp7);
	HX_STACK_LINE(1239)
	::openfl::geom::Transform tmp8 = this->__objectTransform;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1239)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_transform,return )

bool DisplayObject_obj::get_visible( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_visible",0xfff16d92,"openfl.display.DisplayObject.get_visible","openfl/display/DisplayObject.hx",1244,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1246)
	bool tmp = this->__visible;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1246)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_visible,return )

bool DisplayObject_obj::set_visible( bool value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_visible",0x0a5e749e,"openfl.display.DisplayObject.set_visible","openfl/display/DisplayObject.hx",1251,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1253)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1253)
	bool tmp1 = this->__visible;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1253)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1253)
	if ((tmp2)){
		HX_STACK_LINE(1253)
		bool tmp3 = this->__renderDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1253)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1253)
		if ((tmp4)){
			HX_STACK_LINE(1253)
			this->__renderDirty = true;
			HX_STACK_LINE(1253)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
	HX_STACK_LINE(1254)
	bool tmp3 = this->__visible = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1254)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_visible,return )

Float DisplayObject_obj::get_width( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_width",0x06a22326,"openfl.display.DisplayObject.get_width","openfl/display/DisplayObject.hx",1259,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1261)
	::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1261)
	::openfl::geom::Rectangle bounds = tmp;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(1262)
	{
		HX_STACK_LINE(1262)
		::openfl::geom::Rectangle tmp1 = bounds;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1262)
		::openfl::geom::Matrix tmp2 = this->__transform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1262)
		this->__getBounds(tmp1,tmp2);
	}
	HX_STACK_LINE(1264)
	Float tmp1 = bounds->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1264)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_width,return )

Float DisplayObject_obj::set_width( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_width",0xe9f30f32,"openfl.display.DisplayObject.set_width","openfl/display/DisplayObject.hx",1269,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1271)
	::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1271)
	::openfl::geom::Rectangle bounds = tmp;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(1273)
	::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__temp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1273)
	::openfl::geom::Matrix matrix = tmp1;		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(1274)
	matrix->identity();
	HX_STACK_LINE(1276)
	::openfl::geom::Rectangle tmp2 = bounds;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1276)
	::openfl::geom::Matrix tmp3 = matrix;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1276)
	this->__getBounds(tmp2,tmp3);
	HX_STACK_LINE(1278)
	bool tmp4 = (value != bounds->width);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1278)
	if ((tmp4)){
		HX_STACK_LINE(1280)
		Float tmp5 = (Float(value) / Float(bounds->width));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1280)
		this->set_scaleX(tmp5);
	}
	else{
		HX_STACK_LINE(1284)
		this->set_scaleX((int)1);
	}
	HX_STACK_LINE(1288)
	Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1288)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_width,return )

Float DisplayObject_obj::get_x( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_x",0xc67a5d98,"openfl.display.DisplayObject.get_x","openfl/display/DisplayObject.hx",1293,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1295)
	::openfl::geom::Matrix tmp = this->__transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1295)
	Float tmp1 = tmp->tx;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1295)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_x,return )

Float DisplayObject_obj::set_x( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_x",0xaf4953a4,"openfl.display.DisplayObject.set_x","openfl/display/DisplayObject.hx",1300,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1302)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1302)
	::openfl::geom::Matrix tmp1 = this->__transform;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1302)
	Float tmp2 = tmp1->tx;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1302)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1302)
	if ((tmp3)){
		HX_STACK_LINE(1302)
		bool tmp4 = this->__transformDirty;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1302)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1302)
		if ((tmp5)){
			HX_STACK_LINE(1302)
			this->__transformDirty = true;
			HX_STACK_LINE(1302)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
	HX_STACK_LINE(1303)
	::openfl::geom::Matrix tmp4 = this->__transform;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1303)
	Float tmp5 = tmp4->tx = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1303)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_x,return )

Float DisplayObject_obj::get_y( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_y",0xc67a5d99,"openfl.display.DisplayObject.get_y","openfl/display/DisplayObject.hx",1308,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1310)
	::openfl::geom::Matrix tmp = this->__transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1310)
	Float tmp1 = tmp->ty;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1310)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_y,return )

Float DisplayObject_obj::set_y( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_y",0xaf4953a5,"openfl.display.DisplayObject.set_y","openfl/display/DisplayObject.hx",1315,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1317)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1317)
	::openfl::geom::Matrix tmp1 = this->__transform;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1317)
	Float tmp2 = tmp1->ty;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1317)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1317)
	if ((tmp3)){
		HX_STACK_LINE(1317)
		bool tmp4 = this->__transformDirty;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1317)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1317)
		if ((tmp5)){
			HX_STACK_LINE(1317)
			this->__transformDirty = true;
			HX_STACK_LINE(1317)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
	HX_STACK_LINE(1318)
	::openfl::geom::Matrix tmp4 = this->__transform;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1318)
	Float tmp5 = tmp4->ty = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1318)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_y,return )

::haxe::ds::StringMap DisplayObject_obj::__broadcastEvents;

int DisplayObject_obj::__instanceCount;

int DisplayObject_obj::__worldRenderDirty;

int DisplayObject_obj::__worldTransformDirty;


DisplayObject_obj::DisplayObject_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void DisplayObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObject);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(loaderInfo,"loaderInfo");
	HX_MARK_MEMBER_NAME(opaqueBackground,"opaqueBackground");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(scale9Grid,"scale9Grid");
	HX_MARK_MEMBER_NAME(stage,"stage");
	HX_MARK_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_MARK_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_MARK_MEMBER_NAME(__alpha,"__alpha");
	HX_MARK_MEMBER_NAME(__blendMode,"__blendMode");
	HX_MARK_MEMBER_NAME(__cacheAsBitmap,"__cacheAsBitmap");
	HX_MARK_MEMBER_NAME(__cacheAsBitmapMatrix,"__cacheAsBitmapMatrix");
	HX_MARK_MEMBER_NAME(__cairo,"__cairo");
	HX_MARK_MEMBER_NAME(__children,"__children");
	HX_MARK_MEMBER_NAME(__filters,"__filters");
	HX_MARK_MEMBER_NAME(__forceCacheAsBitmap,"__forceCacheAsBitmap");
	HX_MARK_MEMBER_NAME(__graphics,"__graphics");
	HX_MARK_MEMBER_NAME(__interactive,"__interactive");
	HX_MARK_MEMBER_NAME(__isMask,"__isMask");
	HX_MARK_MEMBER_NAME(__mask,"__mask");
	HX_MARK_MEMBER_NAME(__name,"__name");
	HX_MARK_MEMBER_NAME(__objectTransform,"__objectTransform");
	HX_MARK_MEMBER_NAME(__renderable,"__renderable");
	HX_MARK_MEMBER_NAME(__renderDirty,"__renderDirty");
	HX_MARK_MEMBER_NAME(__renderParent,"__renderParent");
	HX_MARK_MEMBER_NAME(__renderTransform,"__renderTransform");
	HX_MARK_MEMBER_NAME(__rotation,"__rotation");
	HX_MARK_MEMBER_NAME(__rotationCosine,"__rotationCosine");
	HX_MARK_MEMBER_NAME(__rotationSine,"__rotationSine");
	HX_MARK_MEMBER_NAME(__scrollRect,"__scrollRect");
	HX_MARK_MEMBER_NAME(__transform,"__transform");
	HX_MARK_MEMBER_NAME(__transformDirty,"__transformDirty");
	HX_MARK_MEMBER_NAME(__visible,"__visible");
	HX_MARK_MEMBER_NAME(__worldAlpha,"__worldAlpha");
	HX_MARK_MEMBER_NAME(__worldAlphaChanged,"__worldAlphaChanged");
	HX_MARK_MEMBER_NAME(__worldClip,"__worldClip");
	HX_MARK_MEMBER_NAME(__worldClipChanged,"__worldClipChanged");
	HX_MARK_MEMBER_NAME(__worldTransformCache,"__worldTransformCache");
	HX_MARK_MEMBER_NAME(__worldTransformChanged,"__worldTransformChanged");
	HX_MARK_MEMBER_NAME(__worldVisible,"__worldVisible");
	HX_MARK_MEMBER_NAME(__worldVisibleChanged,"__worldVisibleChanged");
	HX_MARK_MEMBER_NAME(__worldZ,"__worldZ");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(loaderInfo,"loaderInfo");
	HX_VISIT_MEMBER_NAME(opaqueBackground,"opaqueBackground");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(scale9Grid,"scale9Grid");
	HX_VISIT_MEMBER_NAME(stage,"stage");
	HX_VISIT_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_VISIT_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_VISIT_MEMBER_NAME(__alpha,"__alpha");
	HX_VISIT_MEMBER_NAME(__blendMode,"__blendMode");
	HX_VISIT_MEMBER_NAME(__cacheAsBitmap,"__cacheAsBitmap");
	HX_VISIT_MEMBER_NAME(__cacheAsBitmapMatrix,"__cacheAsBitmapMatrix");
	HX_VISIT_MEMBER_NAME(__cairo,"__cairo");
	HX_VISIT_MEMBER_NAME(__children,"__children");
	HX_VISIT_MEMBER_NAME(__filters,"__filters");
	HX_VISIT_MEMBER_NAME(__forceCacheAsBitmap,"__forceCacheAsBitmap");
	HX_VISIT_MEMBER_NAME(__graphics,"__graphics");
	HX_VISIT_MEMBER_NAME(__interactive,"__interactive");
	HX_VISIT_MEMBER_NAME(__isMask,"__isMask");
	HX_VISIT_MEMBER_NAME(__mask,"__mask");
	HX_VISIT_MEMBER_NAME(__name,"__name");
	HX_VISIT_MEMBER_NAME(__objectTransform,"__objectTransform");
	HX_VISIT_MEMBER_NAME(__renderable,"__renderable");
	HX_VISIT_MEMBER_NAME(__renderDirty,"__renderDirty");
	HX_VISIT_MEMBER_NAME(__renderParent,"__renderParent");
	HX_VISIT_MEMBER_NAME(__renderTransform,"__renderTransform");
	HX_VISIT_MEMBER_NAME(__rotation,"__rotation");
	HX_VISIT_MEMBER_NAME(__rotationCosine,"__rotationCosine");
	HX_VISIT_MEMBER_NAME(__rotationSine,"__rotationSine");
	HX_VISIT_MEMBER_NAME(__scrollRect,"__scrollRect");
	HX_VISIT_MEMBER_NAME(__transform,"__transform");
	HX_VISIT_MEMBER_NAME(__transformDirty,"__transformDirty");
	HX_VISIT_MEMBER_NAME(__visible,"__visible");
	HX_VISIT_MEMBER_NAME(__worldAlpha,"__worldAlpha");
	HX_VISIT_MEMBER_NAME(__worldAlphaChanged,"__worldAlphaChanged");
	HX_VISIT_MEMBER_NAME(__worldClip,"__worldClip");
	HX_VISIT_MEMBER_NAME(__worldClipChanged,"__worldClipChanged");
	HX_VISIT_MEMBER_NAME(__worldTransformCache,"__worldTransformCache");
	HX_VISIT_MEMBER_NAME(__worldTransformChanged,"__worldTransformChanged");
	HX_VISIT_MEMBER_NAME(__worldVisible,"__worldVisible");
	HX_VISIT_MEMBER_NAME(__worldVisibleChanged,"__worldVisibleChanged");
	HX_VISIT_MEMBER_NAME(__worldZ,"__worldZ");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DisplayObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return get_y(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { if (inCallProp == hx::paccAlways) return get_mask(); }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return get_name(); }
		if (HX_FIELD_EQ(inName,"root") ) { if (inCallProp == hx::paccAlways) return get_root(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return get_alpha(); }
		if (HX_FIELD_EQ(inName,"stage") ) { return stage; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return get_width(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return get_height(); }
		if (HX_FIELD_EQ(inName,"mouseX") ) { if (inCallProp == hx::paccAlways) return get_mouseX(); }
		if (HX_FIELD_EQ(inName,"mouseY") ) { if (inCallProp == hx::paccAlways) return get_mouseY(); }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == hx::paccAlways) return get_scaleX(); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == hx::paccAlways) return get_scaleY(); }
		if (HX_FIELD_EQ(inName,"__mask") ) { return __mask; }
		if (HX_FIELD_EQ(inName,"__name") ) { return __name; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { if (inCallProp == hx::paccAlways) return get_filters(); }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return get_visible(); }
		if (HX_FIELD_EQ(inName,"__alpha") ) { return __alpha; }
		if (HX_FIELD_EQ(inName,"__cairo") ) { return __cairo; }
		if (HX_FIELD_EQ(inName,"getRect") ) { return getRect_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return get_rotation(); }
		if (HX_FIELD_EQ(inName,"__isMask") ) { return __isMask; }
		if (HX_FIELD_EQ(inName,"__worldZ") ) { return __worldZ; }
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mask") ) { return get_mask_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mask") ) { return set_mask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		if (HX_FIELD_EQ(inName,"set_name") ) { return set_name_dyn(); }
		if (HX_FIELD_EQ(inName,"get_root") ) { return get_root_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { if (inCallProp == hx::paccAlways) return get_blendMode(); }
		if (HX_FIELD_EQ(inName,"transform") ) { if (inCallProp == hx::paccAlways) return get_transform(); }
		if (HX_FIELD_EQ(inName,"__filters") ) { return __filters; }
		if (HX_FIELD_EQ(inName,"__visible") ) { return __visible; }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__cleanup") ) { return __cleanup_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return get_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loaderInfo") ) { return loaderInfo; }
		if (HX_FIELD_EQ(inName,"scale9Grid") ) { return scale9Grid; }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { if (inCallProp == hx::paccAlways) return get_scrollRect(); }
		if (HX_FIELD_EQ(inName,"__children") ) { return __children; }
		if (HX_FIELD_EQ(inName,"__graphics") ) { return __graphics; }
		if (HX_FIELD_EQ(inName,"__rotation") ) { return __rotation; }
		if (HX_FIELD_EQ(inName,"__dispatch") ) { return __dispatch_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return get_mouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return get_mouseY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleX") ) { return get_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return set_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleY") ) { return get_scaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return set_scaleY_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__blendMode") ) { return __blendMode; }
		if (HX_FIELD_EQ(inName,"__transform") ) { return __transform; }
		if (HX_FIELD_EQ(inName,"__worldClip") ) { return __worldClip; }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__getCursor") ) { return __getCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		if (HX_FIELD_EQ(inName,"get_filters") ) { return get_filters_dyn(); }
		if (HX_FIELD_EQ(inName,"set_filters") ) { return set_filters_dyn(); }
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__renderable") ) { return __renderable; }
		if (HX_FIELD_EQ(inName,"__scrollRect") ) { return __scrollRect; }
		if (HX_FIELD_EQ(inName,"__worldAlpha") ) { return __worldAlpha; }
		if (HX_FIELD_EQ(inName,"hitTestPoint") ) { return hitTestPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return __enterFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateMask") ) { return __updateMask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return get_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { if (inCallProp == hx::paccAlways) return get_cacheAsBitmap(); }
		if (HX_FIELD_EQ(inName,"__interactive") ) { return __interactive; }
		if (HX_FIELD_EQ(inName,"__renderDirty") ) { return __renderDirty; }
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return dispatchEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"globalToLocal") ) { return globalToLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"hitTestObject") ) { return hitTestObject_dyn(); }
		if (HX_FIELD_EQ(inName,"localToGlobal") ) { return localToGlobal_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return __hitTestMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		if (HX_FIELD_EQ(inName,"get_blendMode") ) { return get_blendMode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_blendMode") ) { return set_blendMode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_transform") ) { return get_transform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_transform") ) { return set_transform_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__renderParent") ) { return __renderParent; }
		if (HX_FIELD_EQ(inName,"__rotationSine") ) { return __rotationSine; }
		if (HX_FIELD_EQ(inName,"__worldVisible") ) { return __worldVisible; }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scrollRect") ) { return get_scrollRect_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scrollRect") ) { return set_scrollRect_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmap") ) { return __cacheAsBitmap; }
		if (HX_FIELD_EQ(inName,"__dispatchEvent") ) { return __dispatchEvent_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"opaqueBackground") ) { return opaqueBackground; }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { return __worldTransform; }
		if (HX_FIELD_EQ(inName,"__rotationCosine") ) { return __rotationCosine; }
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { return __transformDirty; }
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		if (HX_FIELD_EQ(inName,"__getInteractive") ) { return __getInteractive_dyn(); }
		if (HX_FIELD_EQ(inName,"__getLocalBounds") ) { return __getLocalBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__setRenderDirty") ) { return __setRenderDirty_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateChildren") ) { return __updateChildren_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__objectTransform") ) { return __objectTransform; }
		if (HX_FIELD_EQ(inName,"__renderTransform") ) { return __renderTransform; }
		if (HX_FIELD_EQ(inName,"__getRenderBounds") ) { return __getRenderBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return __renderCairoMask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_cacheAsBitmap") ) { return get_cacheAsBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cacheAsBitmap") ) { return set_cacheAsBitmap_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__worldClipChanged") ) { return __worldClipChanged; }
		if (HX_FIELD_EQ(inName,"__dispatchChildren") ) { return __dispatchChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"__readGraphicsData") ) { return __readGraphicsData_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return __renderCanvasMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateTransforms") ) { return __updateTransforms_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"cacheAsBitmapMatrix") ) { if (inCallProp == hx::paccAlways) return get_cacheAsBitmapMatrix(); }
		if (HX_FIELD_EQ(inName,"__worldAlphaChanged") ) { return __worldAlphaChanged; }
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return removeEventListener_dyn(); }
		if (HX_FIELD_EQ(inName,"__getWorldTransform") ) { return __getWorldTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"__setStageReference") ) { return __setStageReference_dyn(); }
		if (HX_FIELD_EQ(inName,"__setTransformDirty") ) { return __setTransformDirty_dyn(); }
		if (HX_FIELD_EQ(inName,"__stopAllMovieClips") ) { return __stopAllMovieClips_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__forceCacheAsBitmap") ) { return __forceCacheAsBitmap; }
		if (HX_FIELD_EQ(inName,"__getRenderTransform") ) { return __getRenderTransform_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { return __worldColorTransform; }
		if (HX_FIELD_EQ(inName,"__cacheAsBitmapMatrix") ) { return __cacheAsBitmapMatrix; }
		if (HX_FIELD_EQ(inName,"__worldTransformCache") ) { return __worldTransformCache; }
		if (HX_FIELD_EQ(inName,"__worldVisibleChanged") ) { return __worldVisibleChanged; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__worldTransformChanged") ) { return __worldTransformChanged; }
		if (HX_FIELD_EQ(inName,"get_cacheAsBitmapMatrix") ) { return get_cacheAsBitmapMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cacheAsBitmapMatrix") ) { return set_cacheAsBitmapMatrix_dyn(); }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

bool DisplayObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"__instanceCount") ) { outValue = __instanceCount; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__broadcastEvents") ) { outValue = __broadcastEvents; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__worldRenderDirty") ) { outValue = __worldRenderDirty; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldTransformDirty") ) { outValue = __worldTransformDirty; return true;  }
	}
	return false;
}

Dynamic DisplayObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { if (inCallProp == hx::paccAlways) return set_mask(inValue); }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return set_name(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return set_alpha(inValue); }
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast< ::openfl::display::Stage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue); }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::openfl::display::DisplayObjectContainer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == hx::paccAlways) return set_scaleX(inValue); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == hx::paccAlways) return set_scaleY(inValue); }
		if (HX_FIELD_EQ(inName,"__mask") ) { __mask=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__name") ) { __name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { if (inCallProp == hx::paccAlways) return set_filters(inValue); }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return set_visible(inValue); }
		if (HX_FIELD_EQ(inName,"__alpha") ) { __alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cairo") ) { __cairo=inValue.Cast< ::lime::graphics::cairo::Cairo >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return set_rotation(inValue); }
		if (HX_FIELD_EQ(inName,"__isMask") ) { __isMask=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldZ") ) { __worldZ=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { if (inCallProp == hx::paccAlways) return set_blendMode(inValue); }
		if (HX_FIELD_EQ(inName,"transform") ) { if (inCallProp == hx::paccAlways) return set_transform(inValue); }
		if (HX_FIELD_EQ(inName,"__filters") ) { __filters=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__visible") ) { __visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loaderInfo") ) { loaderInfo=inValue.Cast< ::openfl::display::LoaderInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale9Grid") ) { scale9Grid=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { if (inCallProp == hx::paccAlways) return set_scrollRect(inValue); }
		if (HX_FIELD_EQ(inName,"__children") ) { __children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__graphics") ) { __graphics=inValue.Cast< ::openfl::display::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rotation") ) { __rotation=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__blendMode") ) { __blendMode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__transform") ) { __transform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldClip") ) { __worldClip=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__renderable") ) { __renderable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__scrollRect") ) { __scrollRect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldAlpha") ) { __worldAlpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { if (inCallProp == hx::paccAlways) return set_cacheAsBitmap(inValue); }
		if (HX_FIELD_EQ(inName,"__interactive") ) { __interactive=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__renderDirty") ) { __renderDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__renderParent") ) { __renderParent=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rotationSine") ) { __rotationSine=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldVisible") ) { __worldVisible=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmap") ) { __cacheAsBitmap=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"opaqueBackground") ) { opaqueBackground=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { __worldTransform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rotationCosine") ) { __rotationCosine=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { __transformDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__objectTransform") ) { __objectTransform=inValue.Cast< ::openfl::geom::Transform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__renderTransform") ) { __renderTransform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__worldClipChanged") ) { __worldClipChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"cacheAsBitmapMatrix") ) { if (inCallProp == hx::paccAlways) return set_cacheAsBitmapMatrix(inValue); }
		if (HX_FIELD_EQ(inName,"__worldAlphaChanged") ) { __worldAlphaChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__forceCacheAsBitmap") ) { __forceCacheAsBitmap=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { __worldColorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cacheAsBitmapMatrix") ) { __cacheAsBitmapMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldTransformCache") ) { __worldTransformCache=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldVisibleChanged") ) { __worldVisibleChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__worldTransformChanged") ) { __worldTransformChanged=inValue.Cast< bool >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

bool DisplayObject_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"__instanceCount") ) { __instanceCount=ioValue.Cast< int >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__broadcastEvents") ) { __broadcastEvents=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__worldRenderDirty") ) { __worldRenderDirty=ioValue.Cast< int >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldTransformDirty") ) { __worldTransformDirty=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void DisplayObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c"));
	outFields->push(HX_HCSTRING("cacheAsBitmap","\xe3","\x82","\x0f","\x6a"));
	outFields->push(HX_HCSTRING("cacheAsBitmapMatrix","\x84","\xf9","\x81","\x95"));
	outFields->push(HX_HCSTRING("filters","\xbb","\xa1","\x46","\x09"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("loaderInfo","\x21","\xb2","\xe4","\xb6"));
	outFields->push(HX_HCSTRING("mask","\xec","\x40","\x56","\x48"));
	outFields->push(HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc"));
	outFields->push(HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("opaqueBackground","\x2f","\xb8","\xa7","\x1a"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"));
	outFields->push(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));
	outFields->push(HX_HCSTRING("scale9Grid","\xd5","\x50","\x22","\x8f"));
	outFields->push(HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("scrollRect","\xd1","\xdb","\x66","\x09"));
	outFields->push(HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84"));
	outFields->push(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"));
	outFields->push(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"));
	outFields->push(HX_HCSTRING("__alpha","\x3e","\x00","\xf5","\x8b"));
	outFields->push(HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"));
	outFields->push(HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1"));
	outFields->push(HX_HCSTRING("__cacheAsBitmapMatrix","\x64","\x1a","\x76","\x03"));
	outFields->push(HX_HCSTRING("__cairo","\x68","\x89","\x77","\xab"));
	outFields->push(HX_HCSTRING("__children","\x5f","\x8c","\xa2","\x13"));
	outFields->push(HX_HCSTRING("__filters","\x9b","\xf2","\x94","\x8a"));
	outFields->push(HX_HCSTRING("__forceCacheAsBitmap","\x18","\xa5","\xdf","\xcb"));
	outFields->push(HX_HCSTRING("__graphics","\xeb","\x6b","\xa0","\xb5"));
	outFields->push(HX_HCSTRING("__interactive","\xc2","\x7e","\xd1","\x84"));
	outFields->push(HX_HCSTRING("__isMask","\x16","\x71","\xec","\x0d"));
	outFields->push(HX_HCSTRING("__mask","\x0c","\xa4","\x4e","\xf7"));
	outFields->push(HX_HCSTRING("__name","\x6b","\xd5","\xf7","\xf7"));
	outFields->push(HX_HCSTRING("__objectTransform","\x8d","\x6f","\x30","\x54"));
	outFields->push(HX_HCSTRING("__renderable","\x10","\xb7","\x2c","\x2b"));
	outFields->push(HX_HCSTRING("__renderDirty","\xbc","\xbd","\xf9","\xed"));
	outFields->push(HX_HCSTRING("__renderParent","\x40","\x8c","\x94","\x7d"));
	outFields->push(HX_HCSTRING("__renderTransform","\x16","\xb8","\x95","\xb1"));
	outFields->push(HX_HCSTRING("__rotation","\x5e","\xb0","\xbe","\xab"));
	outFields->push(HX_HCSTRING("__rotationCosine","\xf7","\x71","\x7b","\x14"));
	outFields->push(HX_HCSTRING("__rotationSine","\xcb","\xf9","\xad","\x3f"));
	outFields->push(HX_HCSTRING("__scrollRect","\xf1","\x56","\xfa","\x41"));
	outFields->push(HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73"));
	outFields->push(HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84"));
	outFields->push(HX_HCSTRING("__visible","\x52","\xc9","\x72","\x24"));
	outFields->push(HX_HCSTRING("__worldAlpha","\xcc","\xd2","\xd6","\xc5"));
	outFields->push(HX_HCSTRING("__worldAlphaChanged","\x88","\x37","\xd8","\xd0"));
	outFields->push(HX_HCSTRING("__worldClip","\x22","\x0b","\x0b","\x7d"));
	outFields->push(HX_HCSTRING("__worldClipChanged","\xf2","\x55","\x0d","\x68"));
	outFields->push(HX_HCSTRING("__worldTransformCache","\x08","\xac","\x78","\xad"));
	outFields->push(HX_HCSTRING("__worldTransformChanged","\x3a","\x40","\xad","\x27"));
	outFields->push(HX_HCSTRING("__worldVisible","\x60","\xdb","\x58","\xf8"));
	outFields->push(HX_HCSTRING("__worldVisibleChanged","\x74","\x29","\x51","\x77"));
	outFields->push(HX_HCSTRING("__worldZ","\xe8","\x5c","\xce","\x71"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::LoaderInfo*/ ,(int)offsetof(DisplayObject_obj,loaderInfo),HX_HCSTRING("loaderInfo","\x21","\xb2","\xe4","\xb6")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,opaqueBackground),HX_HCSTRING("opaqueBackground","\x2f","\xb8","\xa7","\x1a")},
	{hx::fsObject /*::openfl::display::DisplayObjectContainer*/ ,(int)offsetof(DisplayObject_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(DisplayObject_obj,scale9Grid),HX_HCSTRING("scale9Grid","\xd5","\x50","\x22","\x8f")},
	{hx::fsObject /*::openfl::display::Stage*/ ,(int)offsetof(DisplayObject_obj,stage),HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(DisplayObject_obj,__worldColorTransform),HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(DisplayObject_obj,__worldTransform),HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__alpha),HX_HCSTRING("__alpha","\x3e","\x00","\xf5","\x8b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,__blendMode),HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__cacheAsBitmap),HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(DisplayObject_obj,__cacheAsBitmapMatrix),HX_HCSTRING("__cacheAsBitmapMatrix","\x64","\x1a","\x76","\x03")},
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(int)offsetof(DisplayObject_obj,__cairo),HX_HCSTRING("__cairo","\x68","\x89","\x77","\xab")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DisplayObject_obj,__children),HX_HCSTRING("__children","\x5f","\x8c","\xa2","\x13")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DisplayObject_obj,__filters),HX_HCSTRING("__filters","\x9b","\xf2","\x94","\x8a")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__forceCacheAsBitmap),HX_HCSTRING("__forceCacheAsBitmap","\x18","\xa5","\xdf","\xcb")},
	{hx::fsObject /*::openfl::display::Graphics*/ ,(int)offsetof(DisplayObject_obj,__graphics),HX_HCSTRING("__graphics","\xeb","\x6b","\xa0","\xb5")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__interactive),HX_HCSTRING("__interactive","\xc2","\x7e","\xd1","\x84")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__isMask),HX_HCSTRING("__isMask","\x16","\x71","\xec","\x0d")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(DisplayObject_obj,__mask),HX_HCSTRING("__mask","\x0c","\xa4","\x4e","\xf7")},
	{hx::fsString,(int)offsetof(DisplayObject_obj,__name),HX_HCSTRING("__name","\x6b","\xd5","\xf7","\xf7")},
	{hx::fsObject /*::openfl::geom::Transform*/ ,(int)offsetof(DisplayObject_obj,__objectTransform),HX_HCSTRING("__objectTransform","\x8d","\x6f","\x30","\x54")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__renderable),HX_HCSTRING("__renderable","\x10","\xb7","\x2c","\x2b")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__renderDirty),HX_HCSTRING("__renderDirty","\xbc","\xbd","\xf9","\xed")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(DisplayObject_obj,__renderParent),HX_HCSTRING("__renderParent","\x40","\x8c","\x94","\x7d")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(DisplayObject_obj,__renderTransform),HX_HCSTRING("__renderTransform","\x16","\xb8","\x95","\xb1")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__rotation),HX_HCSTRING("__rotation","\x5e","\xb0","\xbe","\xab")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__rotationCosine),HX_HCSTRING("__rotationCosine","\xf7","\x71","\x7b","\x14")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__rotationSine),HX_HCSTRING("__rotationSine","\xcb","\xf9","\xad","\x3f")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(DisplayObject_obj,__scrollRect),HX_HCSTRING("__scrollRect","\xf1","\x56","\xfa","\x41")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(DisplayObject_obj,__transform),HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__transformDirty),HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__visible),HX_HCSTRING("__visible","\x52","\xc9","\x72","\x24")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__worldAlpha),HX_HCSTRING("__worldAlpha","\xcc","\xd2","\xd6","\xc5")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldAlphaChanged),HX_HCSTRING("__worldAlphaChanged","\x88","\x37","\xd8","\xd0")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(DisplayObject_obj,__worldClip),HX_HCSTRING("__worldClip","\x22","\x0b","\x0b","\x7d")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldClipChanged),HX_HCSTRING("__worldClipChanged","\xf2","\x55","\x0d","\x68")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(DisplayObject_obj,__worldTransformCache),HX_HCSTRING("__worldTransformCache","\x08","\xac","\x78","\xad")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldTransformChanged),HX_HCSTRING("__worldTransformChanged","\x3a","\x40","\xad","\x27")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldVisible),HX_HCSTRING("__worldVisible","\x60","\xdb","\x58","\xf8")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldVisibleChanged),HX_HCSTRING("__worldVisibleChanged","\x74","\x29","\x51","\x77")},
	{hx::fsInt,(int)offsetof(DisplayObject_obj,__worldZ),HX_HCSTRING("__worldZ","\xe8","\x5c","\xce","\x71")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &DisplayObject_obj::__broadcastEvents,HX_HCSTRING("__broadcastEvents","\xda","\x4d","\x64","\x5a")},
	{hx::fsInt,(void *) &DisplayObject_obj::__instanceCount,HX_HCSTRING("__instanceCount","\xda","\x31","\x1e","\x3f")},
	{hx::fsInt,(void *) &DisplayObject_obj::__worldRenderDirty,HX_HCSTRING("__worldRenderDirty","\xca","\xee","\xec","\xf2")},
	{hx::fsInt,(void *) &DisplayObject_obj::__worldTransformDirty,HX_HCSTRING("__worldTransformDirty","\xd8","\x61","\x34","\x46")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("loaderInfo","\x21","\xb2","\xe4","\xb6"),
	HX_HCSTRING("opaqueBackground","\x2f","\xb8","\xa7","\x1a"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("scale9Grid","\xd5","\x50","\x22","\x8f"),
	HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84"),
	HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"),
	HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"),
	HX_HCSTRING("__alpha","\x3e","\x00","\xf5","\x8b"),
	HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"),
	HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1"),
	HX_HCSTRING("__cacheAsBitmapMatrix","\x64","\x1a","\x76","\x03"),
	HX_HCSTRING("__cairo","\x68","\x89","\x77","\xab"),
	HX_HCSTRING("__children","\x5f","\x8c","\xa2","\x13"),
	HX_HCSTRING("__filters","\x9b","\xf2","\x94","\x8a"),
	HX_HCSTRING("__forceCacheAsBitmap","\x18","\xa5","\xdf","\xcb"),
	HX_HCSTRING("__graphics","\xeb","\x6b","\xa0","\xb5"),
	HX_HCSTRING("__interactive","\xc2","\x7e","\xd1","\x84"),
	HX_HCSTRING("__isMask","\x16","\x71","\xec","\x0d"),
	HX_HCSTRING("__mask","\x0c","\xa4","\x4e","\xf7"),
	HX_HCSTRING("__name","\x6b","\xd5","\xf7","\xf7"),
	HX_HCSTRING("__objectTransform","\x8d","\x6f","\x30","\x54"),
	HX_HCSTRING("__renderable","\x10","\xb7","\x2c","\x2b"),
	HX_HCSTRING("__renderDirty","\xbc","\xbd","\xf9","\xed"),
	HX_HCSTRING("__renderParent","\x40","\x8c","\x94","\x7d"),
	HX_HCSTRING("__renderTransform","\x16","\xb8","\x95","\xb1"),
	HX_HCSTRING("__rotation","\x5e","\xb0","\xbe","\xab"),
	HX_HCSTRING("__rotationCosine","\xf7","\x71","\x7b","\x14"),
	HX_HCSTRING("__rotationSine","\xcb","\xf9","\xad","\x3f"),
	HX_HCSTRING("__scrollRect","\xf1","\x56","\xfa","\x41"),
	HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73"),
	HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84"),
	HX_HCSTRING("__visible","\x52","\xc9","\x72","\x24"),
	HX_HCSTRING("__worldAlpha","\xcc","\xd2","\xd6","\xc5"),
	HX_HCSTRING("__worldAlphaChanged","\x88","\x37","\xd8","\xd0"),
	HX_HCSTRING("__worldClip","\x22","\x0b","\x0b","\x7d"),
	HX_HCSTRING("__worldClipChanged","\xf2","\x55","\x0d","\x68"),
	HX_HCSTRING("__worldTransformCache","\x08","\xac","\x78","\xad"),
	HX_HCSTRING("__worldTransformChanged","\x3a","\x40","\xad","\x27"),
	HX_HCSTRING("__worldVisible","\x60","\xdb","\x58","\xf8"),
	HX_HCSTRING("__worldVisibleChanged","\x74","\x29","\x51","\x77"),
	HX_HCSTRING("__worldZ","\xe8","\x5c","\xce","\x71"),
	HX_HCSTRING("addEventListener","\xcd","\x0b","\x64","\xf1"),
	HX_HCSTRING("dispatchEvent","\x00","\xc7","\x64","\xc6"),
	HX_HCSTRING("getBounds","\xab","\x0f","\x74","\xe2"),
	HX_HCSTRING("getRect","\xda","\xfc","\x29","\x1e"),
	HX_HCSTRING("globalToLocal","\xcd","\x4e","\xae","\x6b"),
	HX_HCSTRING("hitTestObject","\xe4","\x54","\x64","\xd7"),
	HX_HCSTRING("hitTestPoint","\xcb","\xa9","\x21","\xe4"),
	HX_HCSTRING("localToGlobal","\xc9","\x41","\xeb","\x47"),
	HX_HCSTRING("removeEventListener","\xca","\x87","\x75","\x55"),
	HX_HCSTRING("__cleanup","\x04","\x5d","\x90","\x2c"),
	HX_HCSTRING("__dispatch","\xda","\x41","\x9c","\xc1"),
	HX_HCSTRING("__dispatchChildren","\x39","\x81","\xf4","\xf4"),
	HX_HCSTRING("__dispatchEvent","\xe0","\xff","\x16","\x4e"),
	HX_HCSTRING("__enterFrame","\x15","\x7f","\xe3","\x3a"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__getCursor","\xec","\x60","\x6b","\xe9"),
	HX_HCSTRING("__getInteractive","\x0c","\x1c","\x37","\xf8"),
	HX_HCSTRING("__getLocalBounds","\x6a","\x04","\x36","\xdf"),
	HX_HCSTRING("__getRenderBounds","\x01","\x11","\xb8","\x7b"),
	HX_HCSTRING("__getRenderTransform","\x60","\xc2","\x34","\xc0"),
	HX_HCSTRING("__getWorldTransform","\xd0","\xf4","\xfc","\x8b"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__hitTestMask","\xb1","\x14","\xfd","\x3b"),
	HX_HCSTRING("__readGraphicsData","\x2b","\x10","\x91","\xf2"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCairoMask","\x3e","\x0c","\x22","\x6b"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderCanvasMask","\xfa","\xd7","\xef","\x51"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__setRenderDirty","\x7a","\x43","\x7f","\x81"),
	HX_HCSTRING("__setStageReference","\x4f","\xe5","\xe5","\xf4"),
	HX_HCSTRING("__setTransformDirty","\x28","\x1b","\x24","\x99"),
	HX_HCSTRING("__stopAllMovieClips","\xd2","\x89","\xe8","\x53"),
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	HX_HCSTRING("__updateChildren","\x88","\x97","\xd3","\xd9"),
	HX_HCSTRING("__updateMask","\xb5","\xa6","\x9e","\x39"),
	HX_HCSTRING("__updateTransforms","\x10","\xf4","\xb0","\x50"),
	HX_HCSTRING("get_alpha","\xb5","\x03","\x40","\x65"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	HX_HCSTRING("get_blendMode","\x2b","\xb8","\x9b","\xcd"),
	HX_HCSTRING("set_blendMode","\x37","\x9a","\xa1","\x12"),
	HX_HCSTRING("get_cacheAsBitmap","\x3a","\x8e","\x7f","\x70"),
	HX_HCSTRING("set_cacheAsBitmap","\x46","\x66","\xed","\x93"),
	HX_HCSTRING("get_cacheAsBitmapMatrix","\x1b","\xa0","\xd7","\x9d"),
	HX_HCSTRING("set_cacheAsBitmapMatrix","\x27","\x09","\x39","\xa0"),
	HX_HCSTRING("get_filters","\xd2","\x01","\x41","\x8f"),
	HX_HCSTRING("set_filters","\xde","\x08","\xae","\x99"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_mask","\x75","\xfc","\x10","\xc8"),
	HX_HCSTRING("set_mask","\xe9","\x55","\x6e","\x76"),
	HX_HCSTRING("get_mouseX","\x5c","\xba","\x95","\xbc"),
	HX_HCSTRING("get_mouseY","\x5d","\xba","\x95","\xbc"),
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	HX_HCSTRING("set_name","\x48","\x87","\x17","\x77"),
	HX_HCSTRING("get_root","\xab","\xa9","\x69","\xcb"),
	HX_HCSTRING("get_rotation","\x47","\xf1","\x9f","\xbd"),
	HX_HCSTRING("set_rotation","\xbb","\x14","\x99","\xd2"),
	HX_HCSTRING("get_scaleX","\x57","\x5a","\xad","\x2c"),
	HX_HCSTRING("set_scaleX","\xcb","\xf8","\x2a","\x30"),
	HX_HCSTRING("get_scaleY","\x58","\x5a","\xad","\x2c"),
	HX_HCSTRING("set_scaleY","\xcc","\xf8","\x2a","\x30"),
	HX_HCSTRING("get_scrollRect","\x1a","\x64","\x5c","\x7f"),
	HX_HCSTRING("set_scrollRect","\x8e","\x4c","\x7c","\x9f"),
	HX_HCSTRING("get_transform","\x43","\x01","\xf7","\x06"),
	HX_HCSTRING("set_transform","\x4f","\xe3","\xfc","\x4b"),
	HX_HCSTRING("get_visible","\x89","\xd8","\x1e","\x29"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__broadcastEvents,"__broadcastEvents");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__instanceCount,"__instanceCount");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__worldRenderDirty,"__worldRenderDirty");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__worldTransformDirty,"__worldTransformDirty");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__broadcastEvents,"__broadcastEvents");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__instanceCount,"__instanceCount");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__worldRenderDirty,"__worldRenderDirty");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__worldTransformDirty,"__worldTransformDirty");
};

#endif

hx::Class DisplayObject_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__broadcastEvents","\xda","\x4d","\x64","\x5a"),
	HX_HCSTRING("__instanceCount","\xda","\x31","\x1e","\x3f"),
	HX_HCSTRING("__worldRenderDirty","\xca","\xee","\xec","\xf2"),
	HX_HCSTRING("__worldTransformDirty","\xd8","\x61","\x34","\x46"),
	::String(null()) };

void DisplayObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.DisplayObject","\xf7","\x4b","\x6f","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DisplayObject_obj::__GetStatic;
	__mClass->mSetStaticField = &DisplayObject_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DisplayObject_obj >;
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

void DisplayObject_obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/DisplayObject.hx",47,0xc7539829)
		{
			HX_STACK_LINE(47)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(47)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(47)
			return tmp1;
		}
		return null();
	}
};
	__broadcastEvents= _Function_0_1::Block();
	__instanceCount= (int)0;
	__worldRenderDirty= (int)0;
	__worldTransformDirty= (int)0;
}

} // end namespace openfl
} // end namespace display
