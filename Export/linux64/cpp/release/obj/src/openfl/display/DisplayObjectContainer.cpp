#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasGraphics
#include <openfl/_internal/renderer/canvas/CanvasGraphics.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_RangeError
#include <openfl/errors/RangeError.h>
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
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace display{

Void DisplayObjectContainer_obj::__construct()
{
HX_STACK_FRAME("openfl.display.DisplayObjectContainer","new",0x4362e03c,"openfl.display.DisplayObjectContainer.new","openfl/display/DisplayObjectContainer.hx",32,0x5f4d3d72)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(34)
	super::__construct();
	HX_STACK_LINE(36)
	this->mouseChildren = true;
	HX_STACK_LINE(38)
	this->__children = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(39)
	this->__removedChildren = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//DisplayObjectContainer_obj::~DisplayObjectContainer_obj() { }

Dynamic DisplayObjectContainer_obj::__CreateEmpty() { return  new DisplayObjectContainer_obj; }
hx::ObjectPtr< DisplayObjectContainer_obj > DisplayObjectContainer_obj::__new()
{  hx::ObjectPtr< DisplayObjectContainer_obj > _result_ = new DisplayObjectContainer_obj();
	_result_->__construct();
	return _result_;}

Dynamic DisplayObjectContainer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObjectContainer_obj > _result_ = new DisplayObjectContainer_obj();
	_result_->__construct();
	return _result_;}

::openfl::display::DisplayObject DisplayObjectContainer_obj::addChild( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","addChild",0x5694c25f,"openfl.display.DisplayObjectContainer.addChild","openfl/display/DisplayObjectContainer.hx",44,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(46)
	::openfl::display::DisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	int tmp1 = this->get_numChildren();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	::openfl::display::DisplayObject tmp2 = this->addChildAt(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,addChild,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::addChildAt( ::openfl::display::DisplayObject child,int index){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","addChildAt",0xb7119132,"openfl.display.DisplayObjectContainer.addChildAt","openfl/display/DisplayObjectContainer.hx",51,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(53)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	int tmp1 = this->__children->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(53)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(53)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(53)
	if ((tmp3)){
		HX_STACK_LINE(53)
		tmp4 = (index < (int)0);
	}
	else{
		HX_STACK_LINE(53)
		tmp4 = true;
	}
	HX_STACK_LINE(53)
	if ((tmp4)){
		HX_STACK_LINE(55)
		::String tmp5 = (HX_HCSTRING("Invalid index position ","\x80","\x59","\x50","\x86") + index);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(55)
		HX_STACK_DO_THROW(tmp5);
	}
	HX_STACK_LINE(59)
	bool tmp5 = (child->parent == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(59)
	if ((tmp5)){
		HX_STACK_LINE(61)
		::openfl::display::DisplayObject tmp6 = this->__children->__get(index).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(61)
		::openfl::display::DisplayObject tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(61)
		bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(61)
		if ((tmp8)){
			HX_STACK_LINE(63)
			::openfl::display::DisplayObject tmp9 = child;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(63)
			this->__children->remove(tmp9);
			HX_STACK_LINE(64)
			int tmp10 = index;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(64)
			::openfl::display::DisplayObject tmp11 = child;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(64)
			this->__children->insert(tmp10,tmp11);
		}
	}
	else{
		HX_STACK_LINE(70)
		bool tmp6 = (child->parent != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(70)
		if ((tmp6)){
			HX_STACK_LINE(72)
			::openfl::display::DisplayObject tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(72)
			child->parent->removeChild(tmp7);
		}
		HX_STACK_LINE(76)
		int tmp7 = index;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(76)
		::openfl::display::DisplayObject tmp8 = child;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(76)
		this->__children->insert(tmp7,tmp8);
		HX_STACK_LINE(77)
		child->parent = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(79)
		::openfl::display::Stage tmp9 = this->stage;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(79)
		bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(79)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(79)
		if ((tmp10)){
			HX_STACK_LINE(79)
			tmp11 = (child->stage == null());
		}
		else{
			HX_STACK_LINE(79)
			tmp11 = false;
		}
		HX_STACK_LINE(79)
		bool addedToStage = tmp11;		HX_STACK_VAR(addedToStage,"addedToStage");
		HX_STACK_LINE(81)
		bool tmp12 = addedToStage;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(81)
		if ((tmp12)){
			HX_STACK_LINE(83)
			::openfl::display::Stage tmp13 = this->stage;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(83)
			this->__setStageReference(tmp13);
		}
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			bool tmp13 = child->__transformDirty;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(87)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(87)
			if ((tmp14)){
				HX_STACK_LINE(87)
				child->__transformDirty = true;
				HX_STACK_LINE(87)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(88)
			bool tmp13 = child->__renderDirty;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(88)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(88)
			if ((tmp14)){
				HX_STACK_LINE(88)
				child->__renderDirty = true;
				HX_STACK_LINE(88)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			bool tmp13 = this->__renderDirty;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(89)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(89)
			if ((tmp14)){
				HX_STACK_LINE(89)
				this->__renderDirty = true;
				HX_STACK_LINE(89)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
		HX_STACK_LINE(91)
		::openfl::events::Event tmp13 = ::openfl::events::Event_obj::__new(HX_HCSTRING("added","\xc0","\xd4","\x43","\x1c"),true,null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(91)
		::openfl::events::Event event = tmp13;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(92)
		event->target = child;
		HX_STACK_LINE(93)
		::openfl::events::Event tmp14 = event;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(93)
		child->__dispatchEvent(tmp14);
		HX_STACK_LINE(95)
		bool tmp15 = addedToStage;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(95)
		if ((tmp15)){
			HX_STACK_LINE(97)
			::openfl::events::Event tmp16 = ::openfl::events::Event_obj::__new(HX_HCSTRING("addedToStage","\x63","\x22","\x55","\x0c"),false,false);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(97)
			child->__dispatchChildren(tmp16);
		}
	}
	HX_STACK_LINE(103)
	::openfl::display::DisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(103)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,addChildAt,return )

bool DisplayObjectContainer_obj::areInaccessibleObjectsUnderPoint( ::openfl::geom::Point point){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","areInaccessibleObjectsUnderPoint",0x2380e0e1,"openfl.display.DisplayObjectContainer.areInaccessibleObjectsUnderPoint","openfl/display/DisplayObjectContainer.hx",110,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(110)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,areInaccessibleObjectsUnderPoint,return )

bool DisplayObjectContainer_obj::contains( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","contains",0xc3f94cc3,"openfl.display.DisplayObjectContainer.contains","openfl/display/DisplayObjectContainer.hx",115,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(117)
	while((true)){
		HX_STACK_LINE(117)
		bool tmp = (child != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(117)
		if ((tmp)){
			HX_STACK_LINE(117)
			tmp1 = (child != null());
		}
		else{
			HX_STACK_LINE(117)
			tmp1 = false;
		}
		HX_STACK_LINE(117)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(117)
		if ((tmp2)){
			HX_STACK_LINE(117)
			break;
		}
		HX_STACK_LINE(119)
		child = child->parent;
	}
	HX_STACK_LINE(123)
	bool tmp = (child == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,contains,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::getChildAt( int index){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getChildAt",0x9ee8eb5d,"openfl.display.DisplayObjectContainer.getChildAt","openfl/display/DisplayObjectContainer.hx",128,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(130)
	bool tmp = (index >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(130)
	if ((tmp)){
		HX_STACK_LINE(130)
		int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(130)
		int tmp3 = this->__children->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(130)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(130)
		tmp1 = (tmp2 < tmp4);
	}
	else{
		HX_STACK_LINE(130)
		tmp1 = false;
	}
	HX_STACK_LINE(130)
	if ((tmp1)){
		HX_STACK_LINE(132)
		::openfl::display::DisplayObject tmp2 = this->__children->__get(index).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(132)
		return tmp2;
	}
	HX_STACK_LINE(136)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildAt,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::getChildByName( ::String name){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getChildByName",0x64b33f2c,"openfl.display.DisplayObjectContainer.getChildByName","openfl/display/DisplayObjectContainer.hx",141,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(143)
	{
		HX_STACK_LINE(143)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(143)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(143)
		while((true)){
			HX_STACK_LINE(143)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(143)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(143)
			if ((tmp1)){
				HX_STACK_LINE(143)
				break;
			}
			HX_STACK_LINE(143)
			::openfl::display::DisplayObject tmp2 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(143)
			::openfl::display::DisplayObject child = tmp2;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(143)
			++(_g);
			HX_STACK_LINE(145)
			::String tmp3 = child->get_name();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(145)
			::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(145)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(145)
			if ((tmp5)){
				HX_STACK_LINE(145)
				::openfl::display::DisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(145)
				return tmp6;
			}
		}
	}
	HX_STACK_LINE(149)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildByName,return )

int DisplayObjectContainer_obj::getChildIndex( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getChildIndex",0xcc3e62e8,"openfl.display.DisplayObjectContainer.getChildIndex","openfl/display/DisplayObjectContainer.hx",155,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(157)
	{
		HX_STACK_LINE(157)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(157)
		int tmp = this->__children->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(157)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(157)
		while((true)){
			HX_STACK_LINE(157)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(157)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(157)
			if ((tmp2)){
				HX_STACK_LINE(157)
				break;
			}
			HX_STACK_LINE(157)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(157)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(159)
			::openfl::display::DisplayObject tmp4 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(159)
			::openfl::display::DisplayObject tmp5 = child;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(159)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(159)
			if ((tmp6)){
				HX_STACK_LINE(159)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(159)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(163)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildIndex,return )

Array< ::Dynamic > DisplayObjectContainer_obj::getObjectsUnderPoint( ::openfl::geom::Point point){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getObjectsUnderPoint",0x85c6693a,"openfl.display.DisplayObjectContainer.getObjectsUnderPoint","openfl/display/DisplayObjectContainer.hx",168,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(170)
	Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
	HX_STACK_LINE(171)
	Float tmp = point->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(171)
	Float tmp1 = point->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(171)
	this->__hitTest(tmp,tmp1,false,stack,false,hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(172)
	stack->reverse();
	HX_STACK_LINE(173)
	return stack;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getObjectsUnderPoint,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::removeChild( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","removeChild",0x1a99d294,"openfl.display.DisplayObjectContainer.removeChild","openfl/display/DisplayObjectContainer.hx",178,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(180)
	bool tmp = (child != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(180)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(180)
	if ((tmp)){
		HX_STACK_LINE(180)
		tmp1 = (child->parent == hx::ObjectPtr<OBJ_>(this));
	}
	else{
		HX_STACK_LINE(180)
		tmp1 = false;
	}
	HX_STACK_LINE(180)
	if ((tmp1)){
		HX_STACK_LINE(182)
		{
			HX_STACK_LINE(182)
			bool tmp2 = child->__transformDirty;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(182)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(182)
			if ((tmp3)){
				HX_STACK_LINE(182)
				child->__transformDirty = true;
				HX_STACK_LINE(182)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(183)
		{
			HX_STACK_LINE(183)
			bool tmp2 = child->__renderDirty;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(183)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(183)
			if ((tmp3)){
				HX_STACK_LINE(183)
				child->__renderDirty = true;
				HX_STACK_LINE(183)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
		HX_STACK_LINE(184)
		{
			HX_STACK_LINE(184)
			bool tmp2 = this->__renderDirty;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(184)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(184)
			if ((tmp3)){
				HX_STACK_LINE(184)
				this->__renderDirty = true;
				HX_STACK_LINE(184)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
		HX_STACK_LINE(186)
		::openfl::events::Event tmp2 = ::openfl::events::Event_obj::__new(HX_HCSTRING("removed","\xa0","\x1f","\x00","\xf3"),true,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(186)
		child->__dispatchEvent(tmp2);
		HX_STACK_LINE(188)
		::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(188)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(188)
		if ((tmp4)){
			HX_STACK_LINE(190)
			bool tmp5 = (child->stage != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(190)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(190)
			if ((tmp5)){
				HX_STACK_LINE(190)
				::openfl::display::Stage tmp7 = this->stage;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(190)
				::openfl::display::Stage tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(190)
				::openfl::display::InteractiveObject tmp9 = tmp8->get_focus();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(190)
				::openfl::display::InteractiveObject tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(190)
				::openfl::display::DisplayObject tmp11 = child;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(190)
				tmp6 = (tmp10 == tmp11);
			}
			else{
				HX_STACK_LINE(190)
				tmp6 = false;
			}
			HX_STACK_LINE(190)
			if ((tmp6)){
				HX_STACK_LINE(192)
				::openfl::display::Stage tmp7 = this->stage;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(192)
				tmp7->set_focus(null());
			}
			HX_STACK_LINE(196)
			::openfl::events::Event tmp7 = ::openfl::events::Event_obj::__new(HX_HCSTRING("removedFromStage","\x34","\x21","\x76","\xba"),false,false);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(196)
			child->__dispatchChildren(tmp7);
			HX_STACK_LINE(197)
			child->__setStageReference(null());
		}
		HX_STACK_LINE(201)
		child->parent = null();
		HX_STACK_LINE(202)
		::openfl::display::DisplayObject tmp5 = child;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(202)
		this->__children->remove(tmp5);
		HX_STACK_LINE(203)
		::openfl::display::DisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(203)
		this->__removedChildren->push(tmp6);
		HX_STACK_LINE(204)
		{
			HX_STACK_LINE(204)
			bool tmp7 = child->__transformDirty;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(204)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(204)
			if ((tmp8)){
				HX_STACK_LINE(204)
				child->__transformDirty = true;
				HX_STACK_LINE(204)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
	}
	HX_STACK_LINE(208)
	::openfl::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(208)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChild,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::removeChildAt( int index){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","removeChildAt",0x52a2d8a7,"openfl.display.DisplayObjectContainer.removeChildAt","openfl/display/DisplayObjectContainer.hx",213,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(215)
	bool tmp = (index >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(215)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(215)
	if ((tmp)){
		HX_STACK_LINE(215)
		int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(215)
		int tmp3 = this->__children->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(215)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(215)
		tmp1 = (tmp2 < tmp4);
	}
	else{
		HX_STACK_LINE(215)
		tmp1 = false;
	}
	HX_STACK_LINE(215)
	if ((tmp1)){
		HX_STACK_LINE(217)
		::openfl::display::DisplayObject tmp2 = this->__children->__get(index).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(217)
		::openfl::display::DisplayObject tmp3 = this->removeChild(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(217)
		return tmp3;
	}
	HX_STACK_LINE(221)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChildAt,return )

Void DisplayObjectContainer_obj::removeChildren( hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(2147483647);
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","removeChildren",0xfbffdb47,"openfl.display.DisplayObjectContainer.removeChildren","openfl/display/DisplayObjectContainer.hx",226,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(228)
		bool tmp = (endIndex == (int)2147483647);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(228)
		if ((tmp)){
			HX_STACK_LINE(230)
			int tmp1 = this->__children->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(230)
			int tmp2 = (tmp1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(230)
			endIndex = tmp2;
			HX_STACK_LINE(232)
			bool tmp3 = (endIndex < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(232)
			if ((tmp3)){
				HX_STACK_LINE(234)
				return null();
			}
		}
		HX_STACK_LINE(240)
		int tmp1 = beginIndex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(240)
		int tmp2 = this->__children->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(240)
		int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(240)
		bool tmp4 = (tmp1 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(240)
		if ((tmp4)){
			HX_STACK_LINE(242)
			return null();
		}
		else{
			HX_STACK_LINE(244)
			bool tmp5 = (endIndex < beginIndex);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(244)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(244)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(244)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(244)
			if ((tmp7)){
				HX_STACK_LINE(244)
				tmp8 = (beginIndex < (int)0);
			}
			else{
				HX_STACK_LINE(244)
				tmp8 = true;
			}
			HX_STACK_LINE(244)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(244)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(244)
			if ((tmp9)){
				HX_STACK_LINE(244)
				int tmp11 = endIndex;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(244)
				int tmp12 = this->__children->length;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(244)
				int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(244)
				tmp10 = (tmp11 > tmp13);
			}
			else{
				HX_STACK_LINE(244)
				tmp10 = true;
			}
			HX_STACK_LINE(244)
			if ((tmp10)){
				HX_STACK_LINE(246)
				::openfl::errors::RangeError tmp11 = ::openfl::errors::RangeError_obj::__new(HX_HCSTRING("The supplied index is out of bounds.","\x17","\x96","\x1b","\x51"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(246)
				HX_STACK_DO_THROW(tmp11);
			}
		}
		HX_STACK_LINE(250)
		int tmp5 = (endIndex - beginIndex);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(250)
		int numRemovals = tmp5;		HX_STACK_VAR(numRemovals,"numRemovals");
		HX_STACK_LINE(251)
		while((true)){
			HX_STACK_LINE(251)
			bool tmp6 = (numRemovals >= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(251)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(251)
			if ((tmp7)){
				HX_STACK_LINE(251)
				break;
			}
			HX_STACK_LINE(253)
			int tmp8 = beginIndex;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(253)
			this->removeChildAt(tmp8);
			HX_STACK_LINE(254)
			(numRemovals)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,removeChildren,(void))

::openfl::display::DisplayObject DisplayObjectContainer_obj::resolve( ::String fieldName){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","resolve",0x8cca40c8,"openfl.display.DisplayObjectContainer.resolve","openfl/display/DisplayObjectContainer.hx",261,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fieldName,"fieldName")
	HX_STACK_LINE(263)
	bool tmp = (this->__children == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(263)
	if ((tmp)){
		HX_STACK_LINE(263)
		return null();
	}
	HX_STACK_LINE(265)
	{
		HX_STACK_LINE(265)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(265)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(265)
		while((true)){
			HX_STACK_LINE(265)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(265)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(265)
			if ((tmp2)){
				HX_STACK_LINE(265)
				break;
			}
			HX_STACK_LINE(265)
			::openfl::display::DisplayObject tmp3 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(265)
			::openfl::display::DisplayObject child = tmp3;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(265)
			++(_g);
			HX_STACK_LINE(267)
			::String tmp4 = child->get_name();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(267)
			::String tmp5 = fieldName;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(267)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(267)
			if ((tmp6)){
				HX_STACK_LINE(269)
				::openfl::display::DisplayObject tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(269)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(275)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,resolve,return )

Void DisplayObjectContainer_obj::setChildIndex( ::openfl::display::DisplayObject child,int index){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","setChildIndex",0x114444f4,"openfl.display.DisplayObjectContainer.setChildIndex","openfl/display/DisplayObjectContainer.hx",280,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(282)
		bool tmp = (index >= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(282)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(282)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(282)
		if ((tmp1)){
			HX_STACK_LINE(282)
			int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(282)
			int tmp4 = this->__children->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(282)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(282)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(282)
			tmp2 = (tmp3 <= tmp6);
		}
		else{
			HX_STACK_LINE(282)
			tmp2 = false;
		}
		HX_STACK_LINE(282)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(282)
		if ((tmp2)){
			HX_STACK_LINE(282)
			tmp3 = (child->parent == hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(282)
			tmp3 = false;
		}
		HX_STACK_LINE(282)
		if ((tmp3)){
			HX_STACK_LINE(284)
			::openfl::display::DisplayObject tmp4 = child;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(284)
			this->__children->remove(tmp4);
			HX_STACK_LINE(285)
			int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(285)
			::openfl::display::DisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(285)
			this->__children->insert(tmp5,tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,setChildIndex,(void))

Void DisplayObjectContainer_obj::stopAllMovieClips( ){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","stopAllMovieClips",0x46e0f9ce,"openfl.display.DisplayObjectContainer.stopAllMovieClips","openfl/display/DisplayObjectContainer.hx",294,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_LINE(294)
		this->__stopAllMovieClips();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,stopAllMovieClips,(void))

Void DisplayObjectContainer_obj::swapChildren( ::openfl::display::DisplayObject child1,::openfl::display::DisplayObject child2){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","swapChildren",0xe0695f96,"openfl.display.DisplayObjectContainer.swapChildren","openfl/display/DisplayObjectContainer.hx",299,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child1,"child1")
		HX_STACK_ARG(child2,"child2")
		HX_STACK_LINE(301)
		bool tmp = (child1->parent == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(301)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(301)
		if ((tmp)){
			HX_STACK_LINE(301)
			tmp1 = (child2->parent == hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(301)
			tmp1 = false;
		}
		HX_STACK_LINE(301)
		if ((tmp1)){
			HX_STACK_LINE(305)
			::openfl::display::DisplayObject tmp2 = child1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(305)
			int tmp3 = this->__children->indexOf(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(305)
			int index1 = tmp3;		HX_STACK_VAR(index1,"index1");
			HX_STACK_LINE(306)
			::openfl::display::DisplayObject tmp4 = child2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(306)
			int tmp5 = this->__children->indexOf(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(306)
			int index2 = tmp5;		HX_STACK_VAR(index2,"index2");
			HX_STACK_LINE(329)
			::openfl::display::DisplayObject tmp6 = child2;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(329)
			this->__children[index1] = tmp6;
			HX_STACK_LINE(330)
			::openfl::display::DisplayObject tmp7 = child1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(330)
			this->__children[index2] = tmp7;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildren,(void))

Void DisplayObjectContainer_obj::swapChildrenAt( int index1,int index2){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","swapChildrenAt",0xd5312a29,"openfl.display.DisplayObjectContainer.swapChildrenAt","openfl/display/DisplayObjectContainer.hx",337,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index1,"index1")
		HX_STACK_ARG(index2,"index2")
		HX_STACK_LINE(339)
		::openfl::display::DisplayObject tmp = this->__children->__get(index1).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(339)
		::openfl::display::DisplayObject swap = tmp;		HX_STACK_VAR(swap,"swap");
		HX_STACK_LINE(340)
		::openfl::display::DisplayObject tmp1 = this->__children->__get(index2).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(340)
		this->__children[index1] = tmp1;
		HX_STACK_LINE(341)
		::openfl::display::DisplayObject tmp2 = swap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(341)
		this->__children[index2] = tmp2;
		HX_STACK_LINE(342)
		swap = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildrenAt,(void))

bool DisplayObjectContainer_obj::__dispatchChildren( ::openfl::events::Event event){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__dispatchChildren",0x7a91a8dd,"openfl.display.DisplayObjectContainer.__dispatchChildren","openfl/display/DisplayObjectContainer.hx",347,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(349)
	::openfl::events::Event tmp = event;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(349)
	bool tmp1 = this->__dispatchEvent(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(349)
	bool success = tmp1;		HX_STACK_VAR(success,"success");
	HX_STACK_LINE(351)
	bool tmp2 = success;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(351)
	if ((tmp2)){
		HX_STACK_LINE(353)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(353)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(353)
		while((true)){
			HX_STACK_LINE(353)
			bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(353)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(353)
			if ((tmp4)){
				HX_STACK_LINE(353)
				break;
			}
			HX_STACK_LINE(353)
			::openfl::display::DisplayObject tmp5 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(353)
			::openfl::display::DisplayObject child = tmp5;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(353)
			++(_g);
			HX_STACK_LINE(355)
			event->target = child;
			HX_STACK_LINE(357)
			::openfl::events::Event tmp6 = event;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(357)
			bool tmp7 = child->__dispatchChildren(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(357)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(357)
			if ((tmp8)){
				HX_STACK_LINE(359)
				return false;
			}
		}
	}
	HX_STACK_LINE(367)
	bool tmp3 = success;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(367)
	return tmp3;
}


Void DisplayObjectContainer_obj::__enterFrame( int deltaTime){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__enterFrame",0x3af993b9,"openfl.display.DisplayObjectContainer.__enterFrame","openfl/display/DisplayObjectContainer.hx",374,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaTime,"deltaTime")
		HX_STACK_LINE(374)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(374)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(374)
		while((true)){
			HX_STACK_LINE(374)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(374)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(374)
			if ((tmp1)){
				HX_STACK_LINE(374)
				break;
			}
			HX_STACK_LINE(374)
			::openfl::display::DisplayObject tmp2 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(374)
			::openfl::display::DisplayObject child = tmp2;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(374)
			++(_g);
			HX_STACK_LINE(376)
			int tmp3 = deltaTime;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(376)
			child->__enterFrame(tmp3);
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__getBounds",0xe74ca467,"openfl.display.DisplayObjectContainer.__getBounds","openfl/display/DisplayObjectContainer.hx",383,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(385)
		::openfl::geom::Rectangle tmp = rect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(385)
		::openfl::geom::Matrix tmp1 = matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(385)
		this->super::__getBounds(tmp,tmp1);
		HX_STACK_LINE(387)
		int tmp2 = this->__children->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(387)
		bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(387)
		if ((tmp3)){
			HX_STACK_LINE(387)
			return null();
		}
		HX_STACK_LINE(389)
		bool tmp4 = (matrix != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(389)
		if ((tmp4)){
			HX_STACK_LINE(391)
			::openfl::geom::Matrix tmp5 = matrix;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(391)
			this->__updateTransforms(tmp5);
			HX_STACK_LINE(392)
			this->__updateChildren(true);
		}
		HX_STACK_LINE(396)
		{
			HX_STACK_LINE(396)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(396)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(396)
			while((true)){
				HX_STACK_LINE(396)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(396)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(396)
				if ((tmp6)){
					HX_STACK_LINE(396)
					break;
				}
				HX_STACK_LINE(396)
				::openfl::display::DisplayObject tmp7 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(396)
				::openfl::display::DisplayObject child = tmp7;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(396)
				++(_g);
				HX_STACK_LINE(398)
				Float tmp8 = child->get_scaleX();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(398)
				bool tmp9 = (tmp8 == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(398)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(398)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(398)
				if ((tmp10)){
					HX_STACK_LINE(398)
					Float tmp12 = child->get_scaleY();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(398)
					Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(398)
					tmp11 = (tmp13 == (int)0);
				}
				else{
					HX_STACK_LINE(398)
					tmp11 = true;
				}
				HX_STACK_LINE(398)
				if ((tmp11)){
					HX_STACK_LINE(398)
					continue;
				}
				HX_STACK_LINE(399)
				::openfl::geom::Rectangle tmp12 = rect;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(399)
				::openfl::geom::Matrix tmp13 = child->__worldTransform;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(399)
				child->__getBounds(tmp12,tmp13);
			}
		}
		HX_STACK_LINE(403)
		bool tmp5 = (matrix != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(403)
		if ((tmp5)){
			HX_STACK_LINE(405)
			this->__updateTransforms(null());
			HX_STACK_LINE(406)
			this->__updateChildren(true);
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__getRenderBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__getRenderBounds",0x21a0a9dd,"openfl.display.DisplayObjectContainer.__getRenderBounds","openfl/display/DisplayObjectContainer.hx",413,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(415)
		::openfl::geom::Rectangle tmp = this->__scrollRect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(415)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(415)
		if ((tmp1)){
			HX_STACK_LINE(417)
			::openfl::geom::Rectangle tmp2 = rect;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(417)
			::openfl::geom::Matrix tmp3 = matrix;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(417)
			this->super::__getRenderBounds(tmp2,tmp3);
			HX_STACK_LINE(418)
			return null();
		}
		else{
			HX_STACK_LINE(422)
			::openfl::geom::Rectangle tmp2 = rect;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(422)
			::openfl::geom::Matrix tmp3 = matrix;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(422)
			this->super::__getBounds(tmp2,tmp3);
		}
		HX_STACK_LINE(426)
		int tmp2 = this->__children->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(426)
		bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(426)
		if ((tmp3)){
			HX_STACK_LINE(426)
			return null();
		}
		HX_STACK_LINE(428)
		bool tmp4 = (matrix != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(428)
		if ((tmp4)){
			HX_STACK_LINE(430)
			::openfl::geom::Matrix tmp5 = matrix;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(430)
			this->__updateTransforms(tmp5);
			HX_STACK_LINE(431)
			this->__updateChildren(true);
		}
		HX_STACK_LINE(435)
		{
			HX_STACK_LINE(435)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(435)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(435)
			while((true)){
				HX_STACK_LINE(435)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(435)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(435)
				if ((tmp6)){
					HX_STACK_LINE(435)
					break;
				}
				HX_STACK_LINE(435)
				::openfl::display::DisplayObject tmp7 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(435)
				::openfl::display::DisplayObject child = tmp7;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(435)
				++(_g);
				HX_STACK_LINE(437)
				Float tmp8 = child->get_scaleX();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(437)
				bool tmp9 = (tmp8 == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(437)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(437)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(437)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(437)
				if ((tmp11)){
					HX_STACK_LINE(437)
					Float tmp13 = child->get_scaleY();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(437)
					Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(437)
					Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(437)
					tmp12 = (tmp15 == (int)0);
				}
				else{
					HX_STACK_LINE(437)
					tmp12 = true;
				}
				HX_STACK_LINE(437)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(437)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(437)
				if ((tmp13)){
					HX_STACK_LINE(437)
					tmp14 = child->__isMask;
				}
				else{
					HX_STACK_LINE(437)
					tmp14 = true;
				}
				HX_STACK_LINE(437)
				if ((tmp14)){
					HX_STACK_LINE(437)
					continue;
				}
				HX_STACK_LINE(438)
				::openfl::geom::Rectangle tmp15 = rect;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(438)
				::openfl::geom::Matrix tmp16 = child->__worldTransform;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(438)
				child->__getRenderBounds(tmp15,tmp16);
			}
		}
		HX_STACK_LINE(442)
		bool tmp5 = (matrix != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(442)
		if ((tmp5)){
			HX_STACK_LINE(444)
			this->__updateTransforms(null());
			HX_STACK_LINE(445)
			this->__updateChildren(true);
		}
	}
return null();
}


bool DisplayObjectContainer_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly,::openfl::display::DisplayObject hitObject){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__hitTest",0x5a840e01,"openfl.display.DisplayObjectContainer.__hitTest","openfl/display/DisplayObjectContainer.hx",452,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(interactiveOnly,"interactiveOnly")
	HX_STACK_ARG(hitObject,"hitObject")
	HX_STACK_LINE(454)
	bool tmp = hitObject->get_visible();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(454)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(454)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(454)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(454)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(454)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(454)
	if ((tmp4)){
		HX_STACK_LINE(454)
		tmp5 = this->__isMask;
	}
	else{
		HX_STACK_LINE(454)
		tmp5 = true;
	}
	HX_STACK_LINE(454)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(454)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(454)
	if ((tmp6)){
		HX_STACK_LINE(454)
		bool tmp8 = interactiveOnly;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(454)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(454)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(454)
		bool tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(454)
		if ((tmp11)){
			HX_STACK_LINE(454)
			bool tmp12 = this->mouseEnabled;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(454)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(454)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(454)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(454)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(454)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(454)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(454)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(454)
			tmp10 = tmp19;
		}
		else{
			HX_STACK_LINE(454)
			tmp10 = false;
		}
		HX_STACK_LINE(454)
		bool tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(454)
		if ((tmp12)){
			HX_STACK_LINE(454)
			bool tmp13 = this->mouseChildren;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(454)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(454)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(454)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(454)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(454)
			tmp7 = !(tmp17);
		}
		else{
			HX_STACK_LINE(454)
			tmp7 = false;
		}
	}
	else{
		HX_STACK_LINE(454)
		tmp7 = true;
	}
	HX_STACK_LINE(454)
	if ((tmp7)){
		HX_STACK_LINE(454)
		return false;
	}
	HX_STACK_LINE(455)
	::openfl::display::DisplayObject tmp8 = this->get_mask();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(455)
	bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(455)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(455)
	if ((tmp9)){
		HX_STACK_LINE(455)
		::openfl::display::DisplayObject tmp11 = this->get_mask();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(455)
		::openfl::display::DisplayObject tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(455)
		Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(455)
		Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(455)
		Float tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(455)
		Float tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(455)
		bool tmp17 = tmp12->__hitTestMask(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(455)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(455)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(455)
		tmp10 = !(tmp19);
	}
	else{
		HX_STACK_LINE(455)
		tmp10 = false;
	}
	HX_STACK_LINE(455)
	if ((tmp10)){
		HX_STACK_LINE(455)
		return false;
	}
	HX_STACK_LINE(457)
	::openfl::geom::Rectangle tmp11 = this->__scrollRect;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(457)
	bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(457)
	if ((tmp12)){
		HX_STACK_LINE(459)
		::openfl::geom::Point tmp13 = ::openfl::geom::Point_obj::__temp;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(459)
		::openfl::geom::Point point = tmp13;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(460)
		Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(460)
		Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(460)
		point->setTo(tmp14,tmp15);
		HX_STACK_LINE(461)
		{
			HX_STACK_LINE(461)
			::openfl::geom::Matrix tmp16 = this->__getRenderTransform();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(461)
			::openfl::geom::Matrix _this = tmp16;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(461)
			Float tmp17 = (_this->a * _this->d);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(461)
			Float tmp18 = (_this->b * _this->c);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(461)
			Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(461)
			Float norm = tmp19;		HX_STACK_VAR(norm,"norm");
			HX_STACK_LINE(461)
			bool tmp20 = (norm == (int)0);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(461)
			if ((tmp20)){
				HX_STACK_LINE(461)
				Float tmp21 = _this->tx;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(461)
				Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(461)
				point->x = tmp22;
				HX_STACK_LINE(461)
				Float tmp23 = _this->ty;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(461)
				Float tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(461)
				point->y = tmp24;
			}
			else{
				HX_STACK_LINE(461)
				Float tmp21 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(461)
				Float tmp22 = _this->c;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(461)
				Float tmp23 = (_this->ty - point->y);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(461)
				Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(461)
				Float tmp25 = _this->d;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(461)
				Float tmp26 = (point->x - _this->tx);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(461)
				Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(461)
				Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(461)
				Float tmp29 = (tmp21 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(461)
				Float px = tmp29;		HX_STACK_VAR(px,"px");
				HX_STACK_LINE(461)
				Float tmp30 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(461)
				Float tmp31 = _this->a;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(461)
				Float tmp32 = (point->y - _this->ty);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(461)
				Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(461)
				Float tmp34 = _this->b;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(461)
				Float tmp35 = (_this->tx - point->x);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(461)
				Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(461)
				Float tmp37 = (tmp33 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(461)
				Float tmp38 = (tmp30 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(461)
				point->y = tmp38;
				HX_STACK_LINE(461)
				point->x = px;
			}
		}
		HX_STACK_LINE(463)
		::openfl::geom::Rectangle tmp16 = this->__scrollRect;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(463)
		::openfl::geom::Point tmp17 = point;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(463)
		bool tmp18 = tmp16->containsPoint(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(463)
		bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(463)
		if ((tmp19)){
			HX_STACK_LINE(465)
			return false;
		}
	}
	HX_STACK_LINE(471)
	int tmp13 = this->__children->length;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(471)
	int i = tmp13;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(472)
	bool tmp14 = interactiveOnly;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(472)
	if ((tmp14)){
		HX_STACK_LINE(474)
		bool tmp15 = (stack == null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(474)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(474)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(474)
		if ((tmp16)){
			HX_STACK_LINE(474)
			bool tmp18 = this->mouseChildren;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(474)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(474)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(474)
			tmp17 = !(tmp20);
		}
		else{
			HX_STACK_LINE(474)
			tmp17 = true;
		}
		HX_STACK_LINE(474)
		if ((tmp17)){
			HX_STACK_LINE(476)
			while((true)){
				HX_STACK_LINE(476)
				int tmp18 = --(i);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(476)
				bool tmp19 = (tmp18 >= (int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(476)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(476)
				if ((tmp20)){
					HX_STACK_LINE(476)
					break;
				}
				HX_STACK_LINE(478)
				::openfl::display::DisplayObject tmp21 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(478)
				Float tmp22 = x;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(478)
				Float tmp23 = y;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(478)
				bool tmp24 = shapeFlag;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(478)
				::openfl::display::DisplayObject tmp25 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(478)
				::openfl::display::DisplayObject tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(478)
				bool tmp27 = tmp21->__hitTest(tmp22,tmp23,tmp24,null(),true,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(478)
				if ((tmp27)){
					HX_STACK_LINE(480)
					bool tmp28 = (stack != null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(480)
					if ((tmp28)){
						HX_STACK_LINE(482)
						::openfl::display::DisplayObject tmp29 = hitObject;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(482)
						stack->push(tmp29);
					}
					HX_STACK_LINE(486)
					return true;
				}
			}
		}
		else{
			HX_STACK_LINE(492)
			bool tmp18 = (stack != null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(492)
			if ((tmp18)){
				HX_STACK_LINE(494)
				int length = stack->length;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(496)
				bool interactive = false;		HX_STACK_VAR(interactive,"interactive");
				HX_STACK_LINE(497)
				bool hitTest = false;		HX_STACK_VAR(hitTest,"hitTest");
				HX_STACK_LINE(499)
				while((true)){
					HX_STACK_LINE(499)
					int tmp19 = --(i);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(499)
					bool tmp20 = (tmp19 >= (int)0);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(499)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(499)
					if ((tmp21)){
						HX_STACK_LINE(499)
						break;
					}
					HX_STACK_LINE(501)
					::openfl::display::DisplayObject tmp22 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(501)
					bool tmp23 = tmp22->__getInteractive(null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(501)
					interactive = tmp23;
					HX_STACK_LINE(503)
					bool tmp24 = interactive;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(503)
					bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(503)
					bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(503)
					if ((tmp25)){
						HX_STACK_LINE(503)
						bool tmp27 = this->mouseEnabled;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(503)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(503)
						bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(503)
						if ((tmp29)){
							HX_STACK_LINE(503)
							bool tmp30 = hitTest;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(503)
							bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(503)
							bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(503)
							tmp26 = !(tmp32);
						}
						else{
							HX_STACK_LINE(503)
							tmp26 = false;
						}
					}
					else{
						HX_STACK_LINE(503)
						tmp26 = true;
					}
					HX_STACK_LINE(503)
					if ((tmp26)){
						HX_STACK_LINE(505)
						::openfl::display::DisplayObject tmp27 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(505)
						Float tmp28 = x;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(505)
						Float tmp29 = y;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(505)
						bool tmp30 = shapeFlag;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(505)
						::openfl::display::DisplayObject tmp31 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(505)
						::openfl::display::DisplayObject tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(505)
						bool tmp33 = tmp27->__hitTest(tmp28,tmp29,tmp30,stack,true,tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(505)
						if ((tmp33)){
							HX_STACK_LINE(507)
							hitTest = true;
							HX_STACK_LINE(509)
							bool tmp34 = interactive;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(509)
							if ((tmp34)){
								HX_STACK_LINE(511)
								break;
							}
						}
					}
				}
				HX_STACK_LINE(521)
				bool tmp19 = hitTest;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(521)
				if ((tmp19)){
					HX_STACK_LINE(523)
					int tmp20 = length;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(523)
					::openfl::display::DisplayObject tmp21 = hitObject;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(523)
					stack->insert(tmp20,tmp21);
					HX_STACK_LINE(524)
					return true;
				}
			}
		}
	}
	else{
		HX_STACK_LINE(532)
		while((true)){
			HX_STACK_LINE(532)
			int tmp15 = --(i);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(532)
			bool tmp16 = (tmp15 >= (int)0);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(532)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(532)
			if ((tmp17)){
				HX_STACK_LINE(532)
				break;
			}
			HX_STACK_LINE(534)
			::openfl::display::DisplayObject tmp18 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(534)
			Float tmp19 = x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(534)
			Float tmp20 = y;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(534)
			bool tmp21 = shapeFlag;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(534)
			::openfl::display::DisplayObject tmp22 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(534)
			::openfl::display::DisplayObject tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(534)
			tmp18->__hitTest(tmp19,tmp20,tmp21,stack,false,tmp23);
		}
	}
	HX_STACK_LINE(540)
	return false;
}


bool DisplayObjectContainer_obj::__hitTestMask( Float x,Float y){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__hitTestMask",0x4f390f8d,"openfl.display.DisplayObjectContainer.__hitTestMask","openfl/display/DisplayObjectContainer.hx",545,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(547)
	int tmp = this->__children->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(547)
	int i = tmp;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(549)
	while((true)){
		HX_STACK_LINE(549)
		int tmp1 = --(i);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(549)
		bool tmp2 = (tmp1 >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(549)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(549)
		if ((tmp3)){
			HX_STACK_LINE(549)
			break;
		}
		HX_STACK_LINE(551)
		::openfl::display::DisplayObject tmp4 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(551)
		Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(551)
		Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(551)
		bool tmp7 = tmp4->__hitTestMask(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(551)
		if ((tmp7)){
			HX_STACK_LINE(553)
			return true;
		}
	}
	HX_STACK_LINE(559)
	return false;
}


Void DisplayObjectContainer_obj::__readGraphicsData( ::openfl::_Vector::ObjectVector graphicsData,bool recurse){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__readGraphicsData",0x782e37cf,"openfl.display.DisplayObjectContainer.__readGraphicsData","openfl/display/DisplayObjectContainer.hx",564,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphicsData,"graphicsData")
		HX_STACK_ARG(recurse,"recurse")
		HX_STACK_LINE(566)
		::openfl::_Vector::ObjectVector tmp = graphicsData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(566)
		bool tmp1 = recurse;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(566)
		this->super::__readGraphicsData(tmp,tmp1);
		HX_STACK_LINE(568)
		bool tmp2 = recurse;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(568)
		if ((tmp2)){
			HX_STACK_LINE(570)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(570)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(570)
			while((true)){
				HX_STACK_LINE(570)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(570)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(570)
				if ((tmp4)){
					HX_STACK_LINE(570)
					break;
				}
				HX_STACK_LINE(570)
				::openfl::display::DisplayObject tmp5 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(570)
				::openfl::display::DisplayObject child = tmp5;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(570)
				++(_g);
				HX_STACK_LINE(572)
				::openfl::_Vector::ObjectVector tmp6 = graphicsData;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(572)
				bool tmp7 = recurse;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(572)
				child->__readGraphicsData(tmp6,tmp7);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCairo",0x687e990e,"openfl.display.DisplayObjectContainer.__renderCairo","openfl/display/DisplayObjectContainer.hx",581,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(583)
		bool tmp = this->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(583)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(583)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(583)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(583)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(583)
		if ((tmp3)){
			HX_STACK_LINE(583)
			Float tmp5 = this->__worldAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(583)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(583)
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			HX_STACK_LINE(583)
			tmp4 = true;
		}
		HX_STACK_LINE(583)
		if ((tmp4)){
			HX_STACK_LINE(583)
			return null();
		}
		HX_STACK_LINE(585)
		::openfl::_internal::renderer::RenderSession tmp5 = renderSession;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(585)
		this->super::__renderCairo(tmp5);
		HX_STACK_LINE(587)
		renderSession->maskManager->pushObject(hx::ObjectPtr<OBJ_>(this),null());
		HX_STACK_LINE(589)
		{
			HX_STACK_LINE(589)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(589)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(589)
			while((true)){
				HX_STACK_LINE(589)
				bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(589)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(589)
				if ((tmp7)){
					HX_STACK_LINE(589)
					break;
				}
				HX_STACK_LINE(589)
				::openfl::display::DisplayObject tmp8 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(589)
				::openfl::display::DisplayObject child = tmp8;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(589)
				++(_g);
				HX_STACK_LINE(591)
				::openfl::_internal::renderer::RenderSession tmp9 = renderSession;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(591)
				child->__renderCairo(tmp9);
			}
		}
		HX_STACK_LINE(595)
		{
			HX_STACK_LINE(595)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(595)
			Array< ::Dynamic > _g1 = this->__removedChildren;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(595)
			while((true)){
				HX_STACK_LINE(595)
				bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(595)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(595)
				if ((tmp7)){
					HX_STACK_LINE(595)
					break;
				}
				HX_STACK_LINE(595)
				::openfl::display::DisplayObject tmp8 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(595)
				::openfl::display::DisplayObject orphan = tmp8;		HX_STACK_VAR(orphan,"orphan");
				HX_STACK_LINE(595)
				++(_g);
				HX_STACK_LINE(597)
				bool tmp9 = (orphan->stage == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(597)
				if ((tmp9)){
					HX_STACK_LINE(599)
					orphan->__cleanup();
				}
			}
		}
		HX_STACK_LINE(605)
		int tmp6 = this->__removedChildren->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(605)
		bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(605)
		if ((tmp7)){
			HX_STACK_LINE(607)
			int tmp8 = this->__removedChildren->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(607)
			this->__removedChildren->splice((int)0,tmp8);
		}
		HX_STACK_LINE(611)
		renderSession->maskManager->popObject(hx::ObjectPtr<OBJ_>(this),null());
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCairoMask",0x110aa51a,"openfl.display.DisplayObjectContainer.__renderCairoMask","openfl/display/DisplayObjectContainer.hx",616,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(618)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(618)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(618)
		if ((tmp1)){
			HX_STACK_LINE(620)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(620)
			::openfl::_internal::renderer::RenderSession tmp3 = renderSession;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(620)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::renderMask(tmp2,tmp3);
		}
		HX_STACK_LINE(624)
		{
			HX_STACK_LINE(624)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(624)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(624)
			while((true)){
				HX_STACK_LINE(624)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(624)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(624)
				if ((tmp3)){
					HX_STACK_LINE(624)
					break;
				}
				HX_STACK_LINE(624)
				::openfl::display::DisplayObject tmp4 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(624)
				::openfl::display::DisplayObject child = tmp4;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(624)
				++(_g);
				HX_STACK_LINE(626)
				::openfl::_internal::renderer::RenderSession tmp5 = renderSession;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(626)
				child->__renderCairoMask(tmp5);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCanvas",0x09986192,"openfl.display.DisplayObjectContainer.__renderCanvas","openfl/display/DisplayObjectContainer.hx",633,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(635)
		bool tmp = this->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(635)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(635)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(635)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(635)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(635)
		if ((tmp3)){
			HX_STACK_LINE(635)
			Float tmp5 = this->__worldAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(635)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(635)
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			HX_STACK_LINE(635)
			tmp4 = true;
		}
		HX_STACK_LINE(635)
		if ((tmp4)){
			HX_STACK_LINE(635)
			return null();
		}
		HX_STACK_LINE(639)
		::openfl::_internal::renderer::RenderSession tmp5 = renderSession;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(639)
		this->super::__renderCanvas(tmp5);
		HX_STACK_LINE(641)
		renderSession->maskManager->pushObject(hx::ObjectPtr<OBJ_>(this),null());
		HX_STACK_LINE(643)
		{
			HX_STACK_LINE(643)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(643)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(643)
			while((true)){
				HX_STACK_LINE(643)
				bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(643)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(643)
				if ((tmp7)){
					HX_STACK_LINE(643)
					break;
				}
				HX_STACK_LINE(643)
				::openfl::display::DisplayObject tmp8 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(643)
				::openfl::display::DisplayObject child = tmp8;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(643)
				++(_g);
				HX_STACK_LINE(645)
				::openfl::_internal::renderer::RenderSession tmp9 = renderSession;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(645)
				child->__renderCanvas(tmp9);
			}
		}
		HX_STACK_LINE(649)
		{
			HX_STACK_LINE(649)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(649)
			Array< ::Dynamic > _g1 = this->__removedChildren;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(649)
			while((true)){
				HX_STACK_LINE(649)
				bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(649)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(649)
				if ((tmp7)){
					HX_STACK_LINE(649)
					break;
				}
				HX_STACK_LINE(649)
				::openfl::display::DisplayObject tmp8 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(649)
				::openfl::display::DisplayObject orphan = tmp8;		HX_STACK_VAR(orphan,"orphan");
				HX_STACK_LINE(649)
				++(_g);
				HX_STACK_LINE(651)
				bool tmp9 = (orphan->stage == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(651)
				if ((tmp9)){
					HX_STACK_LINE(653)
					orphan->__cleanup();
				}
			}
		}
		HX_STACK_LINE(659)
		int tmp6 = this->__removedChildren->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(659)
		bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(659)
		if ((tmp7)){
			HX_STACK_LINE(661)
			int tmp8 = this->__removedChildren->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(661)
			this->__removedChildren->splice((int)0,tmp8);
		}
		HX_STACK_LINE(665)
		renderSession->maskManager->popObject(hx::ObjectPtr<OBJ_>(this),null());
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCanvasMask",0xd78cff9e,"openfl.display.DisplayObjectContainer.__renderCanvasMask","openfl/display/DisplayObjectContainer.hx",672,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(674)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(674)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(674)
		if ((tmp1)){
			HX_STACK_LINE(676)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(676)
			::openfl::_internal::renderer::RenderSession tmp3 = renderSession;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(676)
			::openfl::_internal::renderer::canvas::CanvasGraphics_obj::renderMask(tmp2,tmp3);
		}
		HX_STACK_LINE(680)
		::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(680)
		::openfl::geom::Rectangle bounds = tmp2;		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(681)
		{
			HX_STACK_LINE(681)
			::openfl::geom::Rectangle tmp3 = bounds;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(681)
			::openfl::geom::Matrix tmp4 = this->__transform;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(681)
			this->__getBounds(tmp3,tmp4);
		}
		HX_STACK_LINE(683)
		Float tmp3 = bounds->width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(683)
		Float tmp4 = bounds->height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(683)
		renderSession->context->rect((int)0,(int)0,tmp3,tmp4);
	}
return null();
}


Void DisplayObjectContainer_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderDOM",0xd2304188,"openfl.display.DisplayObjectContainer.__renderDOM","openfl/display/DisplayObjectContainer.hx",694,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(698)
		::openfl::_internal::renderer::RenderSession tmp = renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(698)
		this->super::__renderDOM(tmp);
		HX_STACK_LINE(700)
		renderSession->maskManager->pushObject(hx::ObjectPtr<OBJ_>(this),null());
		HX_STACK_LINE(702)
		{
			HX_STACK_LINE(702)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(702)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(702)
			while((true)){
				HX_STACK_LINE(702)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(702)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(702)
				if ((tmp2)){
					HX_STACK_LINE(702)
					break;
				}
				HX_STACK_LINE(702)
				::openfl::display::DisplayObject tmp3 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(702)
				::openfl::display::DisplayObject child = tmp3;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(702)
				++(_g);
				HX_STACK_LINE(704)
				::openfl::_internal::renderer::RenderSession tmp4 = renderSession;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(704)
				child->__renderDOM(tmp4);
			}
		}
		HX_STACK_LINE(708)
		{
			HX_STACK_LINE(708)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(708)
			Array< ::Dynamic > _g1 = this->__removedChildren;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(708)
			while((true)){
				HX_STACK_LINE(708)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(708)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(708)
				if ((tmp2)){
					HX_STACK_LINE(708)
					break;
				}
				HX_STACK_LINE(708)
				::openfl::display::DisplayObject tmp3 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(708)
				::openfl::display::DisplayObject orphan = tmp3;		HX_STACK_VAR(orphan,"orphan");
				HX_STACK_LINE(708)
				++(_g);
				HX_STACK_LINE(710)
				bool tmp4 = (orphan->stage == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(710)
				if ((tmp4)){
					HX_STACK_LINE(712)
					::openfl::_internal::renderer::RenderSession tmp5 = renderSession;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(712)
					orphan->__renderDOM(tmp5);
				}
			}
		}
		HX_STACK_LINE(718)
		int tmp1 = this->__removedChildren->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(718)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(718)
		if ((tmp2)){
			HX_STACK_LINE(720)
			int tmp3 = this->__removedChildren->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(720)
			this->__removedChildren->splice((int)0,tmp3);
		}
		HX_STACK_LINE(724)
		renderSession->maskManager->popObject(hx::ObjectPtr<OBJ_>(this),null());
	}
return null();
}


Void DisplayObjectContainer_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderGL",0x3eef01bf,"openfl.display.DisplayObjectContainer.__renderGL","openfl/display/DisplayObjectContainer.hx",731,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(733)
		bool tmp = this->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(733)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(733)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(733)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(733)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(733)
		if ((tmp3)){
			HX_STACK_LINE(733)
			Float tmp5 = this->__worldAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(733)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(733)
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			HX_STACK_LINE(733)
			tmp4 = true;
		}
		HX_STACK_LINE(733)
		if ((tmp4)){
			HX_STACK_LINE(733)
			return null();
		}
		HX_STACK_LINE(735)
		::openfl::_internal::renderer::RenderSession tmp5 = renderSession;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(735)
		this->super::__renderGL(tmp5);
		HX_STACK_LINE(737)
		renderSession->maskManager->pushObject(hx::ObjectPtr<OBJ_>(this),null());
		HX_STACK_LINE(739)
		{
			HX_STACK_LINE(739)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(739)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(739)
			while((true)){
				HX_STACK_LINE(739)
				bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(739)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(739)
				if ((tmp7)){
					HX_STACK_LINE(739)
					break;
				}
				HX_STACK_LINE(739)
				::openfl::display::DisplayObject tmp8 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(739)
				::openfl::display::DisplayObject child = tmp8;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(739)
				++(_g);
				HX_STACK_LINE(741)
				::openfl::_internal::renderer::RenderSession tmp9 = renderSession;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(741)
				child->__renderGL(tmp9);
			}
		}
		HX_STACK_LINE(745)
		{
			HX_STACK_LINE(745)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(745)
			Array< ::Dynamic > _g1 = this->__removedChildren;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(745)
			while((true)){
				HX_STACK_LINE(745)
				bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(745)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(745)
				if ((tmp7)){
					HX_STACK_LINE(745)
					break;
				}
				HX_STACK_LINE(745)
				::openfl::display::DisplayObject tmp8 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(745)
				::openfl::display::DisplayObject orphan = tmp8;		HX_STACK_VAR(orphan,"orphan");
				HX_STACK_LINE(745)
				++(_g);
				HX_STACK_LINE(747)
				bool tmp9 = (orphan->stage == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(747)
				if ((tmp9)){
					HX_STACK_LINE(749)
					orphan->__cleanup();
				}
			}
		}
		HX_STACK_LINE(755)
		int tmp6 = this->__removedChildren->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(755)
		bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(755)
		if ((tmp7)){
			HX_STACK_LINE(757)
			int tmp8 = this->__removedChildren->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(757)
			this->__removedChildren->splice((int)0,tmp8);
		}
		HX_STACK_LINE(761)
		renderSession->maskManager->popObject(hx::ObjectPtr<OBJ_>(this),null());
	}
return null();
}


Void DisplayObjectContainer_obj::__setStageReference( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__setStageReference",0x58cb6d2b,"openfl.display.DisplayObjectContainer.__setStageReference","openfl/display/DisplayObjectContainer.hx",766,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(768)
		::openfl::display::Stage tmp = stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(768)
		this->super::__setStageReference(tmp);
		HX_STACK_LINE(770)
		bool tmp1 = (this->__children != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(770)
		if ((tmp1)){
			HX_STACK_LINE(772)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(772)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(772)
			while((true)){
				HX_STACK_LINE(772)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(772)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(772)
				if ((tmp3)){
					HX_STACK_LINE(772)
					break;
				}
				HX_STACK_LINE(772)
				::openfl::display::DisplayObject tmp4 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(772)
				::openfl::display::DisplayObject child = tmp4;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(772)
				++(_g);
				HX_STACK_LINE(774)
				::openfl::display::Stage tmp5 = stage;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(774)
				child->__setStageReference(tmp5);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__stopAllMovieClips( ){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__stopAllMovieClips",0xb7ce11ae,"openfl.display.DisplayObjectContainer.__stopAllMovieClips","openfl/display/DisplayObjectContainer.hx",785,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_LINE(785)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(785)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(785)
		while((true)){
			HX_STACK_LINE(785)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(785)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(785)
			if ((tmp1)){
				HX_STACK_LINE(785)
				break;
			}
			HX_STACK_LINE(785)
			::openfl::display::DisplayObject tmp2 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(785)
			::openfl::display::DisplayObject child = tmp2;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(785)
			++(_g);
			HX_STACK_LINE(787)
			child->__stopAllMovieClips();
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__update( bool transformOnly,bool updateChildren,::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__update",0xc6b2e3cd,"openfl.display.DisplayObjectContainer.__update","openfl/display/DisplayObjectContainer.hx",794,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_ARG(updateChildren,"updateChildren")
		HX_STACK_ARG(maskGraphics,"maskGraphics")
		HX_STACK_LINE(796)
		bool tmp = transformOnly;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(796)
		bool tmp1 = updateChildren;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(796)
		::openfl::display::Graphics tmp2 = maskGraphics;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(796)
		this->super::__update(tmp,tmp1,tmp2);
		HX_STACK_LINE(798)
		bool tmp3 = updateChildren;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(798)
		if ((tmp3)){
			HX_STACK_LINE(800)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(800)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(800)
			while((true)){
				HX_STACK_LINE(800)
				bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(800)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(800)
				if ((tmp5)){
					HX_STACK_LINE(800)
					break;
				}
				HX_STACK_LINE(800)
				::openfl::display::DisplayObject tmp6 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(800)
				::openfl::display::DisplayObject child = tmp6;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(800)
				++(_g);
				HX_STACK_LINE(802)
				bool tmp7 = transformOnly;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(802)
				::openfl::display::Graphics tmp8 = maskGraphics;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(802)
				child->__update(tmp7,true,tmp8);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__updateChildren( bool transformOnly){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__updateChildren",0x0e3ace2c,"openfl.display.DisplayObjectContainer.__updateChildren","openfl/display/DisplayObjectContainer.hx",811,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_LINE(813)
		bool tmp = transformOnly;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(813)
		this->super::__updateChildren(tmp);
		HX_STACK_LINE(815)
		{
			HX_STACK_LINE(815)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(815)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(815)
			while((true)){
				HX_STACK_LINE(815)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(815)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(815)
				if ((tmp2)){
					HX_STACK_LINE(815)
					break;
				}
				HX_STACK_LINE(815)
				::openfl::display::DisplayObject tmp3 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(815)
				::openfl::display::DisplayObject child = tmp3;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(815)
				++(_g);
				HX_STACK_LINE(817)
				bool tmp4 = transformOnly;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(817)
				child->__update(tmp4,true,null());
			}
		}
	}
return null();
}


int DisplayObjectContainer_obj::get_numChildren( ){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","get_numChildren",0x73b78b18,"openfl.display.DisplayObjectContainer.get_numChildren","openfl/display/DisplayObjectContainer.hx",831,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_LINE(833)
	int tmp = this->__children->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(833)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_numChildren,return )


DisplayObjectContainer_obj::DisplayObjectContainer_obj()
{
}

void DisplayObjectContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObjectContainer);
	HX_MARK_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_MARK_MEMBER_NAME(tabChildren,"tabChildren");
	HX_MARK_MEMBER_NAME(__removedChildren,"__removedChildren");
	::openfl::display::InteractiveObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObjectContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_VISIT_MEMBER_NAME(tabChildren,"tabChildren");
	HX_VISIT_MEMBER_NAME(__removedChildren,"__removedChildren");
	::openfl::display::InteractiveObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DisplayObjectContainer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return getChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { if (inCallProp == hx::paccAlways) return get_numChildren(); }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { return tabChildren; }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"swapChildren") ) { return swapChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return __enterFrame_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { return mouseChildren; }
		if (HX_FIELD_EQ(inName,"getChildIndex") ) { return getChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return removeChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return setChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return __hitTestMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getChildByName") ) { return getChildByName_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildren") ) { return removeChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"swapChildrenAt") ) { return swapChildrenAt_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return get_numChildren_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__updateChildren") ) { return __updateChildren_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__removedChildren") ) { return __removedChildren; }
		if (HX_FIELD_EQ(inName,"stopAllMovieClips") ) { return stopAllMovieClips_dyn(); }
		if (HX_FIELD_EQ(inName,"__getRenderBounds") ) { return __getRenderBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return __renderCairoMask_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__dispatchChildren") ) { return __dispatchChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"__readGraphicsData") ) { return __readGraphicsData_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return __renderCanvasMask_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__setStageReference") ) { return __setStageReference_dyn(); }
		if (HX_FIELD_EQ(inName,"__stopAllMovieClips") ) { return __stopAllMovieClips_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getObjectsUnderPoint") ) { return getObjectsUnderPoint_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"areInaccessibleObjectsUnderPoint") ) { return areInaccessibleObjectsUnderPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DisplayObjectContainer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"tabChildren") ) { tabChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { mouseChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__removedChildren") ) { __removedChildren=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayObjectContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mouseChildren","\x84","\x18","\x6b","\xff"));
	outFields->push(HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c"));
	outFields->push(HX_HCSTRING("tabChildren","\xb4","\x0c","\x86","\x4b"));
	outFields->push(HX_HCSTRING("__removedChildren","\xdf","\xc5","\x0e","\xd3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,mouseChildren),HX_HCSTRING("mouseChildren","\x84","\x18","\x6b","\xff")},
	{hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,tabChildren),HX_HCSTRING("tabChildren","\xb4","\x0c","\x86","\x4b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DisplayObjectContainer_obj,__removedChildren),HX_HCSTRING("__removedChildren","\xdf","\xc5","\x0e","\xd3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mouseChildren","\x84","\x18","\x6b","\xff"),
	HX_HCSTRING("tabChildren","\xb4","\x0c","\x86","\x4b"),
	HX_HCSTRING("__removedChildren","\xdf","\xc5","\x0e","\xd3"),
	HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"),
	HX_HCSTRING("addChildAt","\x8e","\xad","\x36","\xce"),
	HX_HCSTRING("areInaccessibleObjectsUnderPoint","\x3d","\x22","\x9b","\x1e"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("getChildAt","\xb9","\x07","\x0e","\xb6"),
	HX_HCSTRING("getChildByName","\x88","\xb9","\x73","\xa3"),
	HX_HCSTRING("getChildIndex","\x0c","\x68","\x02","\xb9"),
	HX_HCSTRING("getObjectsUnderPoint","\x96","\x10","\xd5","\x80"),
	HX_HCSTRING("removeChild","\xb8","\x86","\xed","\x43"),
	HX_HCSTRING("removeChildAt","\xcb","\xdd","\x66","\x3f"),
	HX_HCSTRING("removeChildren","\xa3","\x55","\xc0","\x3a"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	HX_HCSTRING("setChildIndex","\x18","\x4a","\x08","\xfe"),
	HX_HCSTRING("stopAllMovieClips","\xf2","\x60","\xf8","\xa0"),
	HX_HCSTRING("swapChildren","\xf2","\x4a","\x53","\xe0"),
	HX_HCSTRING("swapChildrenAt","\x85","\xa4","\xf1","\x13"),
	HX_HCSTRING("__dispatchChildren","\x39","\x81","\xf4","\xf4"),
	HX_HCSTRING("__enterFrame","\x15","\x7f","\xe3","\x3a"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__getRenderBounds","\x01","\x11","\xb8","\x7b"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__hitTestMask","\xb1","\x14","\xfd","\x3b"),
	HX_HCSTRING("__readGraphicsData","\x2b","\x10","\x91","\xf2"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCairoMask","\x3e","\x0c","\x22","\x6b"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderCanvasMask","\xfa","\xd7","\xef","\x51"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__setStageReference","\x4f","\xe5","\xe5","\xf4"),
	HX_HCSTRING("__stopAllMovieClips","\xd2","\x89","\xe8","\x53"),
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	HX_HCSTRING("__updateChildren","\x88","\x97","\xd3","\xd9"),
	HX_HCSTRING("get_numChildren","\x3c","\x21","\x62","\x1d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
};

#endif

hx::Class DisplayObjectContainer_obj::__mClass;

void DisplayObjectContainer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.DisplayObjectContainer","\x4a","\x52","\xef","\x89");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DisplayObjectContainer_obj >;
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
