#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeWindow
#include <lime/_backend/native/NativeWindow.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app__Event_String_Void
#include <lime/app/_Event_String_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void
#include <lime/app/_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_lime_system_Clipboard
#include <lime/system/Clipboard.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_lime_ui__KeyModifier_KeyModifier_Impl_
#include <lime/ui/_KeyModifier/KeyModifier_Impl_.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoTextField
#include <openfl/_internal/renderer/cairo/CairoTextField.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextEngine
#include <openfl/_internal/text/TextEngine.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextFormatRange
#include <openfl/_internal/text/TextFormatRange.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextLayoutGroup
#include <openfl/_internal/text/TextLayoutGroup.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_FocusEvent
#include <openfl/events/FocusEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text_TextLineMetrics
#include <openfl/text/TextLineMetrics.h>
#endif
#ifndef INCLUDED_openfl_text__TextFormatAlign_TextFormatAlign_Impl_
#include <openfl/text/_TextFormatAlign/TextFormatAlign_Impl_.h>
#endif
namespace openfl{
namespace text{

Void TextField_obj::__construct()
{
HX_STACK_FRAME("openfl.text.TextField","new",0xbd7676bc,"openfl.text.TextField.new","openfl/text/TextField.hx",108,0xccf02094)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(110)
	super::__construct();
	HX_STACK_LINE(112)
	this->__caretIndex = (int)-1;
	HX_STACK_LINE(113)
	this->__displayAsPassword = false;
	HX_STACK_LINE(114)
	::openfl::display::Graphics tmp = ::openfl::display::Graphics_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	this->__graphics = tmp;
	HX_STACK_LINE(115)
	::openfl::_internal::text::TextEngine tmp1 = ::openfl::_internal::text::TextEngine_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(115)
	this->__textEngine = tmp1;
	HX_STACK_LINE(116)
	this->__layoutDirty = true;
	HX_STACK_LINE(117)
	this->__tabEnabled = true;
	HX_STACK_LINE(118)
	this->__mouseWheelEnabled = true;
	HX_STACK_LINE(119)
	this->__text = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(121)
	::openfl::text::TextFormat tmp2 = ::openfl::text::TextField_obj::__defaultTextFormat;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(121)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(121)
	if ((tmp3)){
		HX_STACK_LINE(123)
		::openfl::text::TextFormat tmp4 = ::openfl::text::TextFormat_obj::__new(HX_HCSTRING("Times New Roman","\x03","\x86","\x44","\xc3"),(int)12,(int)0,false,false,false,HX_HCSTRING("","\x00","\x00","\x00","\x00"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),((Dynamic)((int)3)),(int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(123)
		::openfl::text::TextField_obj::__defaultTextFormat = tmp4;
		HX_STACK_LINE(124)
		::openfl::text::TextFormat tmp5 = ::openfl::text::TextField_obj::__defaultTextFormat;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(124)
		tmp5->blockIndent = (int)0;
		HX_STACK_LINE(125)
		::openfl::text::TextFormat tmp6 = ::openfl::text::TextField_obj::__defaultTextFormat;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(125)
		tmp6->bullet = false;
		HX_STACK_LINE(126)
		::openfl::text::TextFormat tmp7 = ::openfl::text::TextField_obj::__defaultTextFormat;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(126)
		tmp7->letterSpacing = (int)0;
		HX_STACK_LINE(127)
		::openfl::text::TextFormat tmp8 = ::openfl::text::TextField_obj::__defaultTextFormat;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(127)
		tmp8->kerning = false;
	}
	HX_STACK_LINE(131)
	::openfl::text::TextFormat tmp4 = ::openfl::text::TextField_obj::__defaultTextFormat;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(131)
	::openfl::text::TextFormat tmp5 = tmp4->clone();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(131)
	this->__textFormat = tmp5;
	HX_STACK_LINE(132)
	::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(132)
	::openfl::text::TextFormat tmp7 = this->__textFormat;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(132)
	::openfl::_internal::text::TextFormatRange tmp8 = ::openfl::_internal::text::TextFormatRange_obj::__new(tmp7,(int)0,(int)0);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(132)
	tmp6->textFormatRanges->push(tmp8);
	HX_STACK_LINE(134)
	Dynamic tmp9 = this->this_onMouseDown_dyn();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(134)
	this->addEventListener(HX_HCSTRING("mouseDown","\x27","\xb1","\xc2","\xee"),tmp9,null(),null(),null());
}
;
	return null();
}

//TextField_obj::~TextField_obj() { }

Dynamic TextField_obj::__CreateEmpty() { return  new TextField_obj; }
hx::ObjectPtr< TextField_obj > TextField_obj::__new()
{  hx::ObjectPtr< TextField_obj > _result_ = new TextField_obj();
	_result_->__construct();
	return _result_;}

Dynamic TextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextField_obj > _result_ = new TextField_obj();
	_result_->__construct();
	return _result_;}

Void TextField_obj::appendText( ::String text){
{
		HX_STACK_FRAME("openfl.text.TextField","appendText",0xaa44eccb,"openfl.text.TextField.appendText","openfl/text/TextField.hx",139,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_LINE(141)
		hx::AddEq(this->__text,text);
		HX_STACK_LINE(142)
		::String tmp = this->__text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(142)
		::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(142)
		::openfl::_internal::text::TextEngine tmp2 = this->__textEngine;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(142)
		int tmp3 = tmp2->textFormatRanges->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(142)
		int tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(142)
		::openfl::_internal::text::TextFormatRange tmp5 = tmp1->textFormatRanges->__get(tmp4).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(142)
		tmp5->end = tmp.length;
		HX_STACK_LINE(144)
		this->__dirty = true;
		HX_STACK_LINE(145)
		this->__layoutDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,appendText,(void))

::openfl::geom::Rectangle TextField_obj::getCharBoundaries( int charIndex){
	HX_STACK_FRAME("openfl.text.TextField","getCharBoundaries",0xf44814d0,"openfl.text.TextField.getCharBoundaries","openfl/text/TextField.hx",150,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(charIndex,"charIndex")
	HX_STACK_LINE(152)
	bool tmp = (charIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(152)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(152)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(152)
	if ((tmp1)){
		HX_STACK_LINE(152)
		int tmp3 = charIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(152)
		::String tmp4 = this->__text;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(152)
		::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(152)
		int tmp6 = tmp5.length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(152)
		int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(152)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(152)
		tmp2 = (tmp3 > tmp8);
	}
	else{
		HX_STACK_LINE(152)
		tmp2 = true;
	}
	HX_STACK_LINE(152)
	if ((tmp2)){
		HX_STACK_LINE(152)
		return null();
	}
	HX_STACK_LINE(154)
	this->__updateLayout();
	HX_STACK_LINE(156)
	{
		HX_STACK_LINE(156)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(156)
		::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(156)
		Array< ::Dynamic > _g1 = tmp3->layoutGroups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(156)
		while((true)){
			HX_STACK_LINE(156)
			bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(156)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(156)
			if ((tmp5)){
				HX_STACK_LINE(156)
				break;
			}
			HX_STACK_LINE(156)
			::openfl::_internal::text::TextLayoutGroup tmp6 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(156)
			::openfl::_internal::text::TextLayoutGroup group = tmp6;		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(156)
			++(_g);
			HX_STACK_LINE(158)
			bool tmp7 = (charIndex >= group->startIndex);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(158)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(158)
			if ((tmp7)){
				HX_STACK_LINE(158)
				tmp8 = (charIndex <= group->endIndex);
			}
			else{
				HX_STACK_LINE(158)
				tmp8 = false;
			}
			HX_STACK_LINE(158)
			if ((tmp8)){
				HX_STACK_LINE(160)
				Float x = group->offsetX;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(162)
				{
					HX_STACK_LINE(162)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(162)
					int tmp9 = (charIndex - group->startIndex);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(162)
					int _g2 = tmp9;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(162)
					while((true)){
						HX_STACK_LINE(162)
						bool tmp10 = (_g3 < _g2);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(162)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(162)
						if ((tmp11)){
							HX_STACK_LINE(162)
							break;
						}
						HX_STACK_LINE(162)
						int tmp12 = (_g3)++;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(162)
						int i = tmp12;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(164)
						Float tmp13 = group->advances->__get(i);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(164)
						hx::AddEq(x,tmp13);
					}
				}
				HX_STACK_LINE(168)
				Float tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(168)
				Float tmp10 = group->offsetY;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(168)
				int tmp11 = (charIndex - group->startIndex);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(168)
				Float tmp12 = group->advances->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(168)
				Float tmp13 = (group->ascent + group->descent);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(168)
				::openfl::geom::Rectangle tmp14 = ::openfl::geom::Rectangle_obj::__new(tmp9,tmp10,tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(168)
				return tmp14;
			}
		}
	}
	HX_STACK_LINE(174)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getCharBoundaries,return )

int TextField_obj::getCharIndexAtPoint( Float x,Float y){
	HX_STACK_FRAME("openfl.text.TextField","getCharIndexAtPoint",0x758b0c73,"openfl.text.TextField.getCharIndexAtPoint","openfl/text/TextField.hx",179,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(181)
	bool tmp = (x <= (int)2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(181)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(181)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(181)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(181)
	if ((tmp2)){
		HX_STACK_LINE(181)
		Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(181)
		Float tmp5 = this->get_width();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(181)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(181)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(181)
		Float tmp8 = (tmp7 + (int)4);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(181)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(181)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(181)
		tmp3 = (tmp4 > tmp10);
	}
	else{
		HX_STACK_LINE(181)
		tmp3 = true;
	}
	HX_STACK_LINE(181)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(181)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(181)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(181)
	if ((tmp5)){
		HX_STACK_LINE(181)
		tmp6 = (y <= (int)0);
	}
	else{
		HX_STACK_LINE(181)
		tmp6 = true;
	}
	HX_STACK_LINE(181)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(181)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(181)
	if ((tmp7)){
		HX_STACK_LINE(181)
		Float tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(181)
		Float tmp10 = this->get_height();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(181)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(181)
		Float tmp12 = (tmp11 + (int)4);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(181)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(181)
		tmp8 = (tmp9 > tmp13);
	}
	else{
		HX_STACK_LINE(181)
		tmp8 = true;
	}
	HX_STACK_LINE(181)
	if ((tmp8)){
		HX_STACK_LINE(181)
		return (int)-1;
	}
	HX_STACK_LINE(183)
	this->__updateLayout();
	HX_STACK_LINE(185)
	int tmp9 = this->get_scrollH();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(185)
	hx::AddEq(x,tmp9);
	HX_STACK_LINE(187)
	{
		HX_STACK_LINE(187)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(187)
		int tmp10 = this->get_scrollV();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(187)
		int tmp11 = (tmp10 - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(187)
		int _g = tmp11;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(187)
		while((true)){
			HX_STACK_LINE(187)
			bool tmp12 = (_g1 < _g);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(187)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(187)
			if ((tmp13)){
				HX_STACK_LINE(187)
				break;
			}
			HX_STACK_LINE(187)
			int tmp14 = (_g1)++;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(187)
			int i = tmp14;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(189)
			::openfl::_internal::text::TextEngine tmp15 = this->__textEngine;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(189)
			Float tmp16 = tmp15->lineHeights->__get(i);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(189)
			hx::AddEq(y,tmp16);
		}
	}
	HX_STACK_LINE(193)
	{
		HX_STACK_LINE(193)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(193)
		::openfl::_internal::text::TextEngine tmp10 = this->__textEngine;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(193)
		Array< ::Dynamic > _g1 = tmp10->layoutGroups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(193)
		while((true)){
			HX_STACK_LINE(193)
			bool tmp11 = (_g < _g1->length);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(193)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(193)
			if ((tmp12)){
				HX_STACK_LINE(193)
				break;
			}
			HX_STACK_LINE(193)
			::openfl::_internal::text::TextLayoutGroup tmp13 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(193)
			::openfl::_internal::text::TextLayoutGroup group = tmp13;		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(193)
			++(_g);
			HX_STACK_LINE(195)
			bool tmp14 = (y >= group->offsetY);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(195)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(195)
			if ((tmp14)){
				HX_STACK_LINE(195)
				Float tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(195)
				Float tmp17 = (group->offsetY + group->height);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(195)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(195)
				tmp15 = (tmp16 <= tmp18);
			}
			else{
				HX_STACK_LINE(195)
				tmp15 = false;
			}
			HX_STACK_LINE(195)
			if ((tmp15)){
				HX_STACK_LINE(197)
				bool tmp16 = (x >= group->offsetX);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(197)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(197)
				if ((tmp16)){
					HX_STACK_LINE(197)
					Float tmp18 = x;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(197)
					Float tmp19 = (group->offsetX + group->width);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(197)
					Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(197)
					tmp17 = (tmp18 <= tmp20);
				}
				else{
					HX_STACK_LINE(197)
					tmp17 = false;
				}
				HX_STACK_LINE(197)
				if ((tmp17)){
					HX_STACK_LINE(199)
					Float advance = ((Float)0.0);		HX_STACK_VAR(advance,"advance");
					HX_STACK_LINE(201)
					{
						HX_STACK_LINE(201)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(201)
						int tmp18 = group->advances->length;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(201)
						int _g2 = tmp18;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(201)
						while((true)){
							HX_STACK_LINE(201)
							bool tmp19 = (_g3 < _g2);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(201)
							bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(201)
							if ((tmp20)){
								HX_STACK_LINE(201)
								break;
							}
							HX_STACK_LINE(201)
							int tmp21 = (_g3)++;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(201)
							int i = tmp21;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(203)
							Float tmp22 = group->advances->__get(i);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(203)
							hx::AddEq(advance,tmp22);
							HX_STACK_LINE(205)
							Float tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(205)
							Float tmp24 = (group->offsetX + advance);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(205)
							bool tmp25 = (tmp23 <= tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(205)
							if ((tmp25)){
								HX_STACK_LINE(207)
								int tmp26 = (group->startIndex + i);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(207)
								return tmp26;
							}
						}
					}
					HX_STACK_LINE(213)
					int tmp18 = group->endIndex;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(213)
					return tmp18;
				}
			}
		}
	}
	HX_STACK_LINE(221)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,getCharIndexAtPoint,return )

int TextField_obj::getFirstCharInParagraph( int charIndex){
	HX_STACK_FRAME("openfl.text.TextField","getFirstCharInParagraph",0xe06fd955,"openfl.text.TextField.getFirstCharInParagraph","openfl/text/TextField.hx",226,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(charIndex,"charIndex")
	HX_STACK_LINE(228)
	bool tmp = (charIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(228)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(228)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(228)
	if ((tmp1)){
		HX_STACK_LINE(228)
		int tmp3 = charIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(228)
		::String tmp4 = this->__text;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(228)
		::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(228)
		int tmp6 = tmp5.length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(228)
		int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(228)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(228)
		tmp2 = (tmp3 > tmp8);
	}
	else{
		HX_STACK_LINE(228)
		tmp2 = true;
	}
	HX_STACK_LINE(228)
	if ((tmp2)){
		HX_STACK_LINE(228)
		return (int)0;
	}
	HX_STACK_LINE(230)
	::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(230)
	int tmp4 = tmp3->getLineBreakIndex(null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(230)
	int index = tmp4;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(231)
	int startIndex = (int)0;		HX_STACK_VAR(startIndex,"startIndex");
	HX_STACK_LINE(233)
	while((true)){
		HX_STACK_LINE(233)
		bool tmp5 = (index > (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(233)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(233)
		if ((tmp6)){
			HX_STACK_LINE(233)
			break;
		}
		HX_STACK_LINE(235)
		bool tmp7 = (index <= charIndex);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(235)
		if ((tmp7)){
			HX_STACK_LINE(237)
			int tmp8 = (index + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(237)
			startIndex = tmp8;
		}
		else{
			HX_STACK_LINE(239)
			bool tmp8 = (index > charIndex);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(239)
			if ((tmp8)){
				HX_STACK_LINE(241)
				break;
			}
		}
		HX_STACK_LINE(245)
		::openfl::_internal::text::TextEngine tmp8 = this->__textEngine;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(245)
		int tmp9 = (index + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(245)
		int tmp10 = tmp8->getLineBreakIndex(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(245)
		index = tmp10;
	}
	HX_STACK_LINE(249)
	int tmp5 = startIndex;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(249)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getFirstCharInParagraph,return )

int TextField_obj::getLineIndexAtPoint( Float x,Float y){
	HX_STACK_FRAME("openfl.text.TextField","getLineIndexAtPoint",0x633efa91,"openfl.text.TextField.getLineIndexAtPoint","openfl/text/TextField.hx",254,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(256)
	this->__updateLayout();
	HX_STACK_LINE(258)
	bool tmp = (x <= (int)2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(258)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(258)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(258)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(258)
	if ((tmp2)){
		HX_STACK_LINE(258)
		Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(258)
		Float tmp5 = this->get_width();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(258)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(258)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(258)
		Float tmp8 = (tmp7 + (int)4);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(258)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(258)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(258)
		tmp3 = (tmp4 > tmp10);
	}
	else{
		HX_STACK_LINE(258)
		tmp3 = true;
	}
	HX_STACK_LINE(258)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(258)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(258)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(258)
	if ((tmp5)){
		HX_STACK_LINE(258)
		tmp6 = (y <= (int)0);
	}
	else{
		HX_STACK_LINE(258)
		tmp6 = true;
	}
	HX_STACK_LINE(258)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(258)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(258)
	if ((tmp7)){
		HX_STACK_LINE(258)
		Float tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(258)
		Float tmp10 = this->get_height();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(258)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(258)
		Float tmp12 = (tmp11 + (int)4);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(258)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(258)
		tmp8 = (tmp9 > tmp13);
	}
	else{
		HX_STACK_LINE(258)
		tmp8 = true;
	}
	HX_STACK_LINE(258)
	if ((tmp8)){
		HX_STACK_LINE(258)
		return (int)-1;
	}
	HX_STACK_LINE(260)
	{
		HX_STACK_LINE(260)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(260)
		int tmp9 = this->get_scrollV();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(260)
		int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(260)
		int _g = tmp10;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(260)
		while((true)){
			HX_STACK_LINE(260)
			bool tmp11 = (_g1 < _g);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(260)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(260)
			if ((tmp12)){
				HX_STACK_LINE(260)
				break;
			}
			HX_STACK_LINE(260)
			int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(260)
			int i = tmp13;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(262)
			::openfl::_internal::text::TextEngine tmp14 = this->__textEngine;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(262)
			Float tmp15 = tmp14->lineHeights->__get(i);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(262)
			hx::AddEq(y,tmp15);
		}
	}
	HX_STACK_LINE(266)
	{
		HX_STACK_LINE(266)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(266)
		::openfl::_internal::text::TextEngine tmp9 = this->__textEngine;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(266)
		Array< ::Dynamic > _g1 = tmp9->layoutGroups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(266)
		while((true)){
			HX_STACK_LINE(266)
			bool tmp10 = (_g < _g1->length);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(266)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(266)
			if ((tmp11)){
				HX_STACK_LINE(266)
				break;
			}
			HX_STACK_LINE(266)
			::openfl::_internal::text::TextLayoutGroup tmp12 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(266)
			::openfl::_internal::text::TextLayoutGroup group = tmp12;		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(266)
			++(_g);
			HX_STACK_LINE(268)
			bool tmp13 = (y >= group->offsetY);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(268)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(268)
			if ((tmp13)){
				HX_STACK_LINE(268)
				Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(268)
				Float tmp16 = (group->offsetY + group->height);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(268)
				Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(268)
				tmp14 = (tmp15 <= tmp17);
			}
			else{
				HX_STACK_LINE(268)
				tmp14 = false;
			}
			HX_STACK_LINE(268)
			if ((tmp14)){
				HX_STACK_LINE(270)
				int tmp15 = group->lineIndex;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(270)
				return tmp15;
			}
		}
	}
	HX_STACK_LINE(276)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,getLineIndexAtPoint,return )

int TextField_obj::getLineIndexOfChar( int charIndex){
	HX_STACK_FRAME("openfl.text.TextField","getLineIndexOfChar",0xcab049d9,"openfl.text.TextField.getLineIndexOfChar","openfl/text/TextField.hx",281,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(charIndex,"charIndex")
	HX_STACK_LINE(283)
	bool tmp = (charIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(283)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(283)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(283)
	if ((tmp1)){
		HX_STACK_LINE(283)
		int tmp3 = charIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(283)
		::String tmp4 = this->__text;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(283)
		::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(283)
		int tmp6 = tmp5.length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(283)
		int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(283)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(283)
		tmp2 = (tmp3 > tmp8);
	}
	else{
		HX_STACK_LINE(283)
		tmp2 = true;
	}
	HX_STACK_LINE(283)
	if ((tmp2)){
		HX_STACK_LINE(283)
		return (int)-1;
	}
	HX_STACK_LINE(285)
	this->__updateLayout();
	HX_STACK_LINE(287)
	{
		HX_STACK_LINE(287)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(287)
		::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(287)
		Array< ::Dynamic > _g1 = tmp3->layoutGroups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(287)
		while((true)){
			HX_STACK_LINE(287)
			bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(287)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(287)
			if ((tmp5)){
				HX_STACK_LINE(287)
				break;
			}
			HX_STACK_LINE(287)
			::openfl::_internal::text::TextLayoutGroup tmp6 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(287)
			::openfl::_internal::text::TextLayoutGroup group = tmp6;		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(287)
			++(_g);
			HX_STACK_LINE(289)
			bool tmp7 = (group->startIndex <= charIndex);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(289)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(289)
			if ((tmp7)){
				HX_STACK_LINE(289)
				tmp8 = (group->endIndex >= charIndex);
			}
			else{
				HX_STACK_LINE(289)
				tmp8 = false;
			}
			HX_STACK_LINE(289)
			if ((tmp8)){
				HX_STACK_LINE(291)
				int tmp9 = group->lineIndex;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(291)
				return tmp9;
			}
		}
	}
	HX_STACK_LINE(297)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineIndexOfChar,return )

int TextField_obj::getLineLength( int lineIndex){
	HX_STACK_FRAME("openfl.text.TextField","getLineLength",0x953e9d8c,"openfl.text.TextField.getLineLength","openfl/text/TextField.hx",302,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(304)
	this->__updateLayout();
	HX_STACK_LINE(306)
	bool tmp = (lineIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(306)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(306)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(306)
	if ((tmp1)){
		HX_STACK_LINE(306)
		int tmp3 = lineIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(306)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(306)
		::openfl::_internal::text::TextEngine tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(306)
		int tmp6 = tmp5->numLines;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(306)
		int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(306)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(306)
		tmp2 = (tmp3 > tmp8);
	}
	else{
		HX_STACK_LINE(306)
		tmp2 = true;
	}
	HX_STACK_LINE(306)
	if ((tmp2)){
		HX_STACK_LINE(306)
		return (int)0;
	}
	HX_STACK_LINE(308)
	int startIndex = (int)-1;		HX_STACK_VAR(startIndex,"startIndex");
	HX_STACK_LINE(309)
	int endIndex = (int)-1;		HX_STACK_VAR(endIndex,"endIndex");
	HX_STACK_LINE(311)
	{
		HX_STACK_LINE(311)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(311)
		::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(311)
		Array< ::Dynamic > _g1 = tmp3->layoutGroups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(311)
		while((true)){
			HX_STACK_LINE(311)
			bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(311)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(311)
			if ((tmp5)){
				HX_STACK_LINE(311)
				break;
			}
			HX_STACK_LINE(311)
			::openfl::_internal::text::TextLayoutGroup tmp6 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(311)
			::openfl::_internal::text::TextLayoutGroup group = tmp6;		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(311)
			++(_g);
			HX_STACK_LINE(313)
			bool tmp7 = (group->lineIndex == lineIndex);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(313)
			if ((tmp7)){
				HX_STACK_LINE(315)
				bool tmp8 = (startIndex == (int)-1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(315)
				if ((tmp8)){
					HX_STACK_LINE(315)
					startIndex = group->startIndex;
				}
			}
			else{
				HX_STACK_LINE(317)
				int tmp8 = group->lineIndex;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(317)
				int tmp9 = (lineIndex + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(317)
				bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(317)
				if ((tmp10)){
					HX_STACK_LINE(319)
					endIndex = group->startIndex;
					HX_STACK_LINE(320)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(326)
	bool tmp3 = (endIndex == (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(326)
	if ((tmp3)){
		HX_STACK_LINE(326)
		::String tmp4 = this->__text;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(326)
		endIndex = tmp4.length;
	}
	HX_STACK_LINE(327)
	int tmp4 = (endIndex - startIndex);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(327)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineLength,return )

::openfl::text::TextLineMetrics TextField_obj::getLineMetrics( int lineIndex){
	HX_STACK_FRAME("openfl.text.TextField","getLineMetrics",0xa6c52add,"openfl.text.TextField.getLineMetrics","openfl/text/TextField.hx",332,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(334)
	this->__updateLayout();
	HX_STACK_LINE(336)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(336)
	Float tmp1 = tmp->lineAscents->__get(lineIndex);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(336)
	Float ascender = tmp1;		HX_STACK_VAR(ascender,"ascender");
	HX_STACK_LINE(337)
	::openfl::_internal::text::TextEngine tmp2 = this->__textEngine;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(337)
	Float tmp3 = tmp2->lineDescents->__get(lineIndex);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(337)
	Float descender = tmp3;		HX_STACK_VAR(descender,"descender");
	HX_STACK_LINE(338)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(338)
	Float tmp5 = tmp4->lineLeadings->__get(lineIndex);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(338)
	Float leading = tmp5;		HX_STACK_VAR(leading,"leading");
	HX_STACK_LINE(339)
	::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(339)
	Float tmp7 = tmp6->lineHeights->__get(lineIndex);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(339)
	Float lineHeight = tmp7;		HX_STACK_VAR(lineHeight,"lineHeight");
	HX_STACK_LINE(340)
	::openfl::_internal::text::TextEngine tmp8 = this->__textEngine;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(340)
	Float tmp9 = tmp8->lineWidths->__get(lineIndex);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(340)
	Float lineWidth = tmp9;		HX_STACK_VAR(lineWidth,"lineWidth");
	HX_STACK_LINE(344)
	Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(344)
	{
		HX_STACK_LINE(344)
		::openfl::text::TextFormat tmp11 = this->__textFormat;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(344)
		Dynamic _g = tmp11->align;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(344)
		Dynamic tmp12 = _g;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(344)
		switch( (int)(tmp12)){
			case (int)3: case (int)2: case (int)5: {
				HX_STACK_LINE(346)
				tmp10 = (int)2;
			}
			;break;
			case (int)4: case (int)1: {
				HX_STACK_LINE(347)
				::openfl::_internal::text::TextEngine tmp13 = this->__textEngine;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(347)
				Float tmp14 = tmp13->width;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(347)
				Float tmp15 = lineWidth;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(347)
				Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(347)
				tmp10 = (tmp16 - (int)2);
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(348)
				::openfl::_internal::text::TextEngine tmp13 = this->__textEngine;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(348)
				Float tmp14 = tmp13->width;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(348)
				Float tmp15 = lineWidth;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(348)
				Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(348)
				tmp10 = (Float(tmp16) / Float((int)2));
			}
			;break;
		}
	}
	HX_STACK_LINE(344)
	Float margin = tmp10;		HX_STACK_VAR(margin,"margin");
	HX_STACK_LINE(352)
	::openfl::text::TextLineMetrics tmp11 = ::openfl::text::TextLineMetrics_obj::__new(margin,lineWidth,lineHeight,ascender,descender,leading);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(352)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineMetrics,return )

int TextField_obj::getLineOffset( int lineIndex){
	HX_STACK_FRAME("openfl.text.TextField","getLineOffset",0x5676a039,"openfl.text.TextField.getLineOffset","openfl/text/TextField.hx",357,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(359)
	this->__updateLayout();
	HX_STACK_LINE(361)
	bool tmp = (lineIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(361)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(361)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(361)
	if ((tmp1)){
		HX_STACK_LINE(361)
		int tmp3 = lineIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(361)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(361)
		::openfl::_internal::text::TextEngine tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(361)
		int tmp6 = tmp5->numLines;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(361)
		int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(361)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(361)
		tmp2 = (tmp3 > tmp8);
	}
	else{
		HX_STACK_LINE(361)
		tmp2 = true;
	}
	HX_STACK_LINE(361)
	if ((tmp2)){
		HX_STACK_LINE(361)
		return (int)-1;
	}
	HX_STACK_LINE(363)
	{
		HX_STACK_LINE(363)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(363)
		::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(363)
		Array< ::Dynamic > _g1 = tmp3->layoutGroups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(363)
		while((true)){
			HX_STACK_LINE(363)
			bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(363)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(363)
			if ((tmp5)){
				HX_STACK_LINE(363)
				break;
			}
			HX_STACK_LINE(363)
			::openfl::_internal::text::TextLayoutGroup tmp6 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(363)
			::openfl::_internal::text::TextLayoutGroup group = tmp6;		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(363)
			++(_g);
			HX_STACK_LINE(365)
			bool tmp7 = (group->lineIndex == lineIndex);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(365)
			if ((tmp7)){
				HX_STACK_LINE(367)
				int tmp8 = group->startIndex;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(367)
				return tmp8;
			}
		}
	}
	HX_STACK_LINE(373)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineOffset,return )

::String TextField_obj::getLineText( int lineIndex){
	HX_STACK_FRAME("openfl.text.TextField","getLineText",0xb8113fd3,"openfl.text.TextField.getLineText","openfl/text/TextField.hx",378,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(380)
	this->__updateLayout();
	HX_STACK_LINE(382)
	bool tmp = (lineIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(382)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(382)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(382)
	if ((tmp1)){
		HX_STACK_LINE(382)
		int tmp3 = lineIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(382)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(382)
		::openfl::_internal::text::TextEngine tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(382)
		int tmp6 = tmp5->numLines;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(382)
		int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(382)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(382)
		tmp2 = (tmp3 > tmp8);
	}
	else{
		HX_STACK_LINE(382)
		tmp2 = true;
	}
	HX_STACK_LINE(382)
	if ((tmp2)){
		HX_STACK_LINE(382)
		return null();
	}
	HX_STACK_LINE(384)
	int startIndex = (int)-1;		HX_STACK_VAR(startIndex,"startIndex");
	HX_STACK_LINE(385)
	int endIndex = (int)-1;		HX_STACK_VAR(endIndex,"endIndex");
	HX_STACK_LINE(387)
	{
		HX_STACK_LINE(387)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(387)
		::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(387)
		Array< ::Dynamic > _g1 = tmp3->layoutGroups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(387)
		while((true)){
			HX_STACK_LINE(387)
			bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(387)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(387)
			if ((tmp5)){
				HX_STACK_LINE(387)
				break;
			}
			HX_STACK_LINE(387)
			::openfl::_internal::text::TextLayoutGroup tmp6 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(387)
			::openfl::_internal::text::TextLayoutGroup group = tmp6;		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(387)
			++(_g);
			HX_STACK_LINE(389)
			bool tmp7 = (group->lineIndex == lineIndex);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(389)
			if ((tmp7)){
				HX_STACK_LINE(391)
				bool tmp8 = (startIndex == (int)-1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(391)
				if ((tmp8)){
					HX_STACK_LINE(391)
					startIndex = group->startIndex;
				}
			}
			else{
				HX_STACK_LINE(393)
				int tmp8 = group->lineIndex;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(393)
				int tmp9 = (lineIndex + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(393)
				bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(393)
				if ((tmp10)){
					HX_STACK_LINE(395)
					endIndex = group->startIndex;
					HX_STACK_LINE(396)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(402)
	bool tmp3 = (endIndex == (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(402)
	if ((tmp3)){
		HX_STACK_LINE(402)
		::String tmp4 = this->__text;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(402)
		endIndex = tmp4.length;
	}
	HX_STACK_LINE(404)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(404)
	int tmp5 = startIndex;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(404)
	int tmp6 = endIndex;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(404)
	::String tmp7 = tmp4->text.substring(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(404)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineText,return )

int TextField_obj::getParagraphLength( int charIndex){
	HX_STACK_FRAME("openfl.text.TextField","getParagraphLength",0xed64f022,"openfl.text.TextField.getParagraphLength","openfl/text/TextField.hx",409,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(charIndex,"charIndex")
	HX_STACK_LINE(411)
	bool tmp = (charIndex < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(411)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(411)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(411)
	if ((tmp1)){
		HX_STACK_LINE(411)
		int tmp3 = charIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(411)
		::String tmp4 = this->__text;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(411)
		::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(411)
		int tmp6 = tmp5.length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(411)
		int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(411)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(411)
		tmp2 = (tmp3 > tmp8);
	}
	else{
		HX_STACK_LINE(411)
		tmp2 = true;
	}
	HX_STACK_LINE(411)
	if ((tmp2)){
		HX_STACK_LINE(411)
		return (int)0;
	}
	HX_STACK_LINE(413)
	int tmp3 = charIndex;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(413)
	int tmp4 = this->getFirstCharInParagraph(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(413)
	int startIndex = tmp4;		HX_STACK_VAR(startIndex,"startIndex");
	HX_STACK_LINE(414)
	::openfl::_internal::text::TextEngine tmp5 = this->__textEngine;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(414)
	int tmp6 = charIndex;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(414)
	int tmp7 = tmp5->getLineBreakIndex(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(414)
	int tmp8 = (tmp7 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(414)
	int endIndex = tmp8;		HX_STACK_VAR(endIndex,"endIndex");
	HX_STACK_LINE(416)
	bool tmp9 = (endIndex == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(416)
	if ((tmp9)){
		HX_STACK_LINE(416)
		::String tmp10 = this->__text;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(416)
		endIndex = tmp10.length;
	}
	HX_STACK_LINE(417)
	int tmp10 = (endIndex - startIndex);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(417)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getParagraphLength,return )

::openfl::text::TextFormat TextField_obj::getTextFormat( hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(0);
	HX_STACK_FRAME("openfl.text.TextField","getTextFormat",0x560e1d56,"openfl.text.TextField.getTextFormat","openfl/text/TextField.hx",422,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(424)
		::openfl::text::TextFormat format = null();		HX_STACK_VAR(format,"format");
		HX_STACK_LINE(426)
		{
			HX_STACK_LINE(426)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(426)
			::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(426)
			Array< ::Dynamic > _g1 = tmp->textFormatRanges;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(426)
			while((true)){
				HX_STACK_LINE(426)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(426)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(426)
				if ((tmp2)){
					HX_STACK_LINE(426)
					break;
				}
				HX_STACK_LINE(426)
				::openfl::_internal::text::TextFormatRange tmp3 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(426)
				::openfl::_internal::text::TextFormatRange group = tmp3;		HX_STACK_VAR(group,"group");
				HX_STACK_LINE(426)
				++(_g);
				HX_STACK_LINE(428)
				bool tmp4 = (group->start <= beginIndex);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(428)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(428)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(428)
				if ((tmp5)){
					HX_STACK_LINE(428)
					tmp6 = (group->end >= beginIndex);
				}
				else{
					HX_STACK_LINE(428)
					tmp6 = false;
				}
				HX_STACK_LINE(428)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(428)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(428)
				if ((tmp7)){
					HX_STACK_LINE(428)
					bool tmp9 = (group->start <= endIndex);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(428)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(428)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(428)
					if ((tmp11)){
						HX_STACK_LINE(428)
						tmp8 = (group->end >= endIndex);
					}
					else{
						HX_STACK_LINE(428)
						tmp8 = false;
					}
				}
				else{
					HX_STACK_LINE(428)
					tmp8 = true;
				}
				HX_STACK_LINE(428)
				if ((tmp8)){
					HX_STACK_LINE(430)
					bool tmp9 = (format == null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(430)
					if ((tmp9)){
						HX_STACK_LINE(432)
						::openfl::text::TextFormat tmp10 = group->format->clone();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(432)
						format = tmp10;
					}
					else{
						HX_STACK_LINE(436)
						::String tmp10 = group->format->font;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(436)
						::String tmp11 = format->font;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(436)
						bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(436)
						if ((tmp12)){
							HX_STACK_LINE(436)
							format->font = null();
						}
						HX_STACK_LINE(437)
						Dynamic tmp13 = group->format->size;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(437)
						Dynamic tmp14 = format->size;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(437)
						bool tmp15 = (tmp13 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(437)
						if ((tmp15)){
							HX_STACK_LINE(437)
							format->size = null();
						}
						HX_STACK_LINE(438)
						Dynamic tmp16 = group->format->color;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(438)
						Dynamic tmp17 = format->color;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(438)
						bool tmp18 = (tmp16 != tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(438)
						if ((tmp18)){
							HX_STACK_LINE(438)
							format->color = null();
						}
						HX_STACK_LINE(439)
						Dynamic tmp19 = group->format->bold;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(439)
						Dynamic tmp20 = format->bold;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(439)
						bool tmp21 = (tmp19 != tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(439)
						if ((tmp21)){
							HX_STACK_LINE(439)
							format->bold = null();
						}
						HX_STACK_LINE(440)
						Dynamic tmp22 = group->format->italic;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(440)
						Dynamic tmp23 = format->italic;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(440)
						bool tmp24 = (tmp22 != tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(440)
						if ((tmp24)){
							HX_STACK_LINE(440)
							format->italic = null();
						}
						HX_STACK_LINE(441)
						Dynamic tmp25 = group->format->underline;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(441)
						Dynamic tmp26 = format->underline;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(441)
						bool tmp27 = (tmp25 != tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(441)
						if ((tmp27)){
							HX_STACK_LINE(441)
							format->underline = null();
						}
						HX_STACK_LINE(442)
						::String tmp28 = group->format->url;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(442)
						::String tmp29 = format->url;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(442)
						bool tmp30 = (tmp28 != tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(442)
						if ((tmp30)){
							HX_STACK_LINE(442)
							format->url = null();
						}
						HX_STACK_LINE(443)
						::String tmp31 = group->format->target;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(443)
						::String tmp32 = format->target;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(443)
						bool tmp33 = (tmp31 != tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(443)
						if ((tmp33)){
							HX_STACK_LINE(443)
							format->target = null();
						}
						HX_STACK_LINE(444)
						Dynamic tmp34 = group->format->align;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(444)
						Dynamic tmp35 = format->align;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(444)
						bool tmp36 = (tmp34 != tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(444)
						if ((tmp36)){
							HX_STACK_LINE(444)
							format->align = null();
						}
						HX_STACK_LINE(445)
						Dynamic tmp37 = group->format->leftMargin;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(445)
						Dynamic tmp38 = format->leftMargin;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(445)
						bool tmp39 = (tmp37 != tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(445)
						if ((tmp39)){
							HX_STACK_LINE(445)
							format->leftMargin = null();
						}
						HX_STACK_LINE(446)
						Dynamic tmp40 = group->format->rightMargin;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(446)
						Dynamic tmp41 = format->rightMargin;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(446)
						bool tmp42 = (tmp40 != tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(446)
						if ((tmp42)){
							HX_STACK_LINE(446)
							format->rightMargin = null();
						}
						HX_STACK_LINE(447)
						Dynamic tmp43 = group->format->indent;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(447)
						Dynamic tmp44 = format->indent;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(447)
						bool tmp45 = (tmp43 != tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(447)
						if ((tmp45)){
							HX_STACK_LINE(447)
							format->indent = null();
						}
						HX_STACK_LINE(448)
						Dynamic tmp46 = group->format->leading;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(448)
						Dynamic tmp47 = format->leading;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(448)
						bool tmp48 = (tmp46 != tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(448)
						if ((tmp48)){
							HX_STACK_LINE(448)
							format->leading = null();
						}
						HX_STACK_LINE(449)
						Dynamic tmp49 = group->format->blockIndent;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(449)
						Dynamic tmp50 = format->blockIndent;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(449)
						bool tmp51 = (tmp49 != tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(449)
						if ((tmp51)){
							HX_STACK_LINE(449)
							format->blockIndent = null();
						}
						HX_STACK_LINE(450)
						Dynamic tmp52 = group->format->bullet;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(450)
						Dynamic tmp53 = format->bullet;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(450)
						bool tmp54 = (tmp52 != tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(450)
						if ((tmp54)){
							HX_STACK_LINE(450)
							format->bullet = null();
						}
						HX_STACK_LINE(451)
						Dynamic tmp55 = group->format->kerning;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(451)
						Dynamic tmp56 = format->kerning;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(451)
						bool tmp57 = (tmp55 != tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(451)
						if ((tmp57)){
							HX_STACK_LINE(451)
							format->kerning = null();
						}
						HX_STACK_LINE(452)
						Dynamic tmp58 = group->format->letterSpacing;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(452)
						Dynamic tmp59 = format->letterSpacing;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(452)
						bool tmp60 = (tmp58 != tmp59);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(452)
						if ((tmp60)){
							HX_STACK_LINE(452)
							format->letterSpacing = null();
						}
						HX_STACK_LINE(453)
						bool tmp61 = (group->format->tabStops != format->tabStops);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(453)
						if ((tmp61)){
							HX_STACK_LINE(453)
							format->tabStops = null();
						}
					}
				}
			}
		}
		HX_STACK_LINE(461)
		::openfl::text::TextFormat tmp = format;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(461)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,getTextFormat,return )

Void TextField_obj::replaceSelectedText( ::String value){
{
		HX_STACK_FRAME("openfl.text.TextField","replaceSelectedText",0x86221d58,"openfl.text.TextField.replaceSelectedText","openfl/text/TextField.hx",466,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(468)
		bool tmp = (value == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(468)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(468)
		if ((tmp)){
			HX_STACK_LINE(468)
			int tmp2 = this->__selectionIndex;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(468)
			int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(468)
			int tmp4 = this->__caretIndex;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(468)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(468)
			tmp1 = (tmp3 == tmp5);
		}
		else{
			HX_STACK_LINE(468)
			tmp1 = false;
		}
		HX_STACK_LINE(468)
		if ((tmp1)){
			HX_STACK_LINE(468)
			return null();
		}
		HX_STACK_LINE(470)
		int tmp2 = this->__caretIndex;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(470)
		int tmp3 = this->__selectionIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(470)
		bool tmp4 = (tmp2 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(470)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(470)
		if ((tmp4)){
			HX_STACK_LINE(470)
			tmp5 = this->__caretIndex;
		}
		else{
			HX_STACK_LINE(470)
			tmp5 = this->__selectionIndex;
		}
		HX_STACK_LINE(470)
		int startIndex = tmp5;		HX_STACK_VAR(startIndex,"startIndex");
		HX_STACK_LINE(471)
		int tmp6 = this->__caretIndex;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(471)
		int tmp7 = this->__selectionIndex;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(471)
		bool tmp8 = (tmp6 > tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(471)
		int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(471)
		if ((tmp8)){
			HX_STACK_LINE(471)
			tmp9 = this->__caretIndex;
		}
		else{
			HX_STACK_LINE(471)
			tmp9 = this->__selectionIndex;
		}
		HX_STACK_LINE(471)
		int endIndex = tmp9;		HX_STACK_VAR(endIndex,"endIndex");
		HX_STACK_LINE(473)
		int tmp10 = startIndex;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(473)
		int tmp11 = endIndex;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(473)
		::String tmp12 = value;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(473)
		this->replaceText(tmp10,tmp11,tmp12);
		HX_STACK_LINE(475)
		int tmp13 = (startIndex + value.length);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(475)
		this->__caretIndex = tmp13;
		HX_STACK_LINE(476)
		int tmp14 = this->__caretIndex;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(476)
		this->__selectionIndex = tmp14;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,replaceSelectedText,(void))

Void TextField_obj::replaceText( int beginIndex,int endIndex,::String newText){
{
		HX_STACK_FRAME("openfl.text.TextField","replaceText",0x698fcd5d,"openfl.text.TextField.replaceText","openfl/text/TextField.hx",481,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(beginIndex,"beginIndex")
		HX_STACK_ARG(endIndex,"endIndex")
		HX_STACK_ARG(newText,"newText")
		HX_STACK_LINE(483)
		bool tmp = (endIndex < beginIndex);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(483)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(483)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(483)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(483)
		if ((tmp2)){
			HX_STACK_LINE(483)
			tmp3 = (beginIndex < (int)0);
		}
		else{
			HX_STACK_LINE(483)
			tmp3 = true;
		}
		HX_STACK_LINE(483)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(483)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(483)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(483)
		if ((tmp5)){
			HX_STACK_LINE(483)
			int tmp7 = endIndex;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(483)
			::String tmp8 = this->__text;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(483)
			::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(483)
			::String tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(483)
			int tmp11 = tmp10.length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(483)
			tmp6 = (tmp7 > tmp11);
		}
		else{
			HX_STACK_LINE(483)
			tmp6 = true;
		}
		HX_STACK_LINE(483)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(483)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(483)
		if ((tmp7)){
			HX_STACK_LINE(483)
			tmp8 = (newText == null());
		}
		else{
			HX_STACK_LINE(483)
			tmp8 = true;
		}
		HX_STACK_LINE(483)
		if ((tmp8)){
			HX_STACK_LINE(483)
			return null();
		}
		HX_STACK_LINE(485)
		::String tmp9 = this->__text;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(485)
		int tmp10 = beginIndex;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(485)
		::String tmp11 = tmp9.substring((int)0,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(485)
		::String tmp12 = newText;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(485)
		::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(485)
		::String tmp14 = this->__text;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(485)
		int tmp15 = endIndex;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(485)
		::String tmp16 = tmp14.substring(tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(485)
		::String tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(485)
		this->__updateText(tmp17);
		HX_STACK_LINE(487)
		int tmp18 = newText.length;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(487)
		int tmp19 = (endIndex - beginIndex);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(487)
		int tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(487)
		int offset = tmp20;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(489)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(490)
		::openfl::_internal::text::TextFormatRange range;		HX_STACK_VAR(range,"range");
		HX_STACK_LINE(492)
		while((true)){
			HX_STACK_LINE(492)
			int tmp21 = i;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(492)
			::openfl::_internal::text::TextEngine tmp22 = this->__textEngine;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(492)
			int tmp23 = tmp22->textFormatRanges->length;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(492)
			bool tmp24 = (tmp21 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(492)
			bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(492)
			if ((tmp25)){
				HX_STACK_LINE(492)
				break;
			}
			HX_STACK_LINE(494)
			::openfl::_internal::text::TextEngine tmp26 = this->__textEngine;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(494)
			::openfl::_internal::text::TextFormatRange tmp27 = tmp26->textFormatRanges->__get(i).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(494)
			range = tmp27;
			HX_STACK_LINE(496)
			bool tmp28 = (range->start <= beginIndex);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(496)
			bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(496)
			if ((tmp28)){
				HX_STACK_LINE(496)
				tmp29 = (range->end >= endIndex);
			}
			else{
				HX_STACK_LINE(496)
				tmp29 = false;
			}
			HX_STACK_LINE(496)
			if ((tmp29)){
				HX_STACK_LINE(498)
				hx::AddEq(range->end,offset);
				HX_STACK_LINE(499)
				(i)++;
			}
			else{
				HX_STACK_LINE(501)
				bool tmp30 = (range->start >= beginIndex);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(501)
				bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(501)
				if ((tmp30)){
					HX_STACK_LINE(501)
					tmp31 = (range->end <= endIndex);
				}
				else{
					HX_STACK_LINE(501)
					tmp31 = false;
				}
				HX_STACK_LINE(501)
				if ((tmp31)){
					HX_STACK_LINE(503)
					::openfl::_internal::text::TextEngine tmp32 = this->__textEngine;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(503)
					int tmp33 = i;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(503)
					tmp32->textFormatRanges->splice(tmp33,(int)1);
					HX_STACK_LINE(504)
					int tmp34 = (range->end - range->start);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(504)
					hx::SubEq(offset,tmp34);
				}
				else{
					HX_STACK_LINE(506)
					bool tmp32 = (range->start > beginIndex);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(506)
					bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(506)
					if ((tmp32)){
						HX_STACK_LINE(506)
						tmp33 = (range->start <= endIndex);
					}
					else{
						HX_STACK_LINE(506)
						tmp33 = false;
					}
					HX_STACK_LINE(506)
					if ((tmp33)){
						HX_STACK_LINE(508)
						hx::AddEq(range->start,offset);
						HX_STACK_LINE(509)
						(i)++;
					}
					else{
						HX_STACK_LINE(513)
						(i)++;
					}
				}
			}
		}
		HX_STACK_LINE(519)
		this->__dirty = true;
		HX_STACK_LINE(520)
		this->__layoutDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TextField_obj,replaceText,(void))

Void TextField_obj::setSelection( int beginIndex,int endIndex){
{
		HX_STACK_FRAME("openfl.text.TextField","setSelection",0xa586666e,"openfl.text.TextField.setSelection","openfl/text/TextField.hx",525,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(beginIndex,"beginIndex")
		HX_STACK_ARG(endIndex,"endIndex")
		HX_STACK_LINE(527)
		this->__selectionIndex = beginIndex;
		HX_STACK_LINE(528)
		this->__caretIndex = endIndex;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,setSelection,(void))

Void TextField_obj::setTextFormat( ::openfl::text::TextFormat format,hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(0);
	HX_STACK_FRAME("openfl.text.TextField","setTextFormat",0x9b13ff62,"openfl.text.TextField.setTextFormat","openfl/text/TextField.hx",533,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(535)
		bool tmp = (format->font != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(535)
		if ((tmp)){
			HX_STACK_LINE(535)
			::openfl::text::TextFormat tmp1 = this->__textFormat;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(535)
			tmp1->font = format->font;
		}
		HX_STACK_LINE(536)
		bool tmp1 = (format->size != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(536)
		if ((tmp1)){
			HX_STACK_LINE(536)
			::openfl::text::TextFormat tmp2 = this->__textFormat;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(536)
			tmp2->size = format->size;
		}
		HX_STACK_LINE(537)
		bool tmp2 = (format->color != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(537)
		if ((tmp2)){
			HX_STACK_LINE(537)
			::openfl::text::TextFormat tmp3 = this->__textFormat;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(537)
			tmp3->color = format->color;
		}
		HX_STACK_LINE(538)
		bool tmp3 = (format->bold != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(538)
		if ((tmp3)){
			HX_STACK_LINE(538)
			::openfl::text::TextFormat tmp4 = this->__textFormat;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(538)
			tmp4->bold = format->bold;
		}
		HX_STACK_LINE(539)
		bool tmp4 = (format->italic != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(539)
		if ((tmp4)){
			HX_STACK_LINE(539)
			::openfl::text::TextFormat tmp5 = this->__textFormat;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(539)
			tmp5->italic = format->italic;
		}
		HX_STACK_LINE(540)
		bool tmp5 = (format->underline != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(540)
		if ((tmp5)){
			HX_STACK_LINE(540)
			::openfl::text::TextFormat tmp6 = this->__textFormat;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(540)
			tmp6->underline = format->underline;
		}
		HX_STACK_LINE(541)
		bool tmp6 = (format->url != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(541)
		if ((tmp6)){
			HX_STACK_LINE(541)
			::openfl::text::TextFormat tmp7 = this->__textFormat;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(541)
			tmp7->url = format->url;
		}
		HX_STACK_LINE(542)
		bool tmp7 = (format->target != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(542)
		if ((tmp7)){
			HX_STACK_LINE(542)
			::openfl::text::TextFormat tmp8 = this->__textFormat;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(542)
			tmp8->target = format->target;
		}
		HX_STACK_LINE(543)
		bool tmp8 = (format->align != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(543)
		if ((tmp8)){
			HX_STACK_LINE(543)
			::openfl::text::TextFormat tmp9 = this->__textFormat;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(543)
			tmp9->align = format->align;
		}
		HX_STACK_LINE(544)
		bool tmp9 = (format->leftMargin != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(544)
		if ((tmp9)){
			HX_STACK_LINE(544)
			::openfl::text::TextFormat tmp10 = this->__textFormat;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(544)
			tmp10->leftMargin = format->leftMargin;
		}
		HX_STACK_LINE(545)
		bool tmp10 = (format->rightMargin != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(545)
		if ((tmp10)){
			HX_STACK_LINE(545)
			::openfl::text::TextFormat tmp11 = this->__textFormat;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(545)
			tmp11->rightMargin = format->rightMargin;
		}
		HX_STACK_LINE(546)
		bool tmp11 = (format->indent != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(546)
		if ((tmp11)){
			HX_STACK_LINE(546)
			::openfl::text::TextFormat tmp12 = this->__textFormat;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(546)
			tmp12->indent = format->indent;
		}
		HX_STACK_LINE(547)
		bool tmp12 = (format->leading != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(547)
		if ((tmp12)){
			HX_STACK_LINE(547)
			::openfl::text::TextFormat tmp13 = this->__textFormat;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(547)
			tmp13->leading = format->leading;
		}
		HX_STACK_LINE(548)
		bool tmp13 = (format->blockIndent != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(548)
		if ((tmp13)){
			HX_STACK_LINE(548)
			::openfl::text::TextFormat tmp14 = this->__textFormat;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(548)
			tmp14->blockIndent = format->blockIndent;
		}
		HX_STACK_LINE(549)
		bool tmp14 = (format->bullet != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(549)
		if ((tmp14)){
			HX_STACK_LINE(549)
			::openfl::text::TextFormat tmp15 = this->__textFormat;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(549)
			tmp15->bullet = format->bullet;
		}
		HX_STACK_LINE(550)
		bool tmp15 = (format->kerning != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(550)
		if ((tmp15)){
			HX_STACK_LINE(550)
			::openfl::text::TextFormat tmp16 = this->__textFormat;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(550)
			tmp16->kerning = format->kerning;
		}
		HX_STACK_LINE(551)
		bool tmp16 = (format->letterSpacing != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(551)
		if ((tmp16)){
			HX_STACK_LINE(551)
			::openfl::text::TextFormat tmp17 = this->__textFormat;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(551)
			tmp17->letterSpacing = format->letterSpacing;
		}
		HX_STACK_LINE(552)
		bool tmp17 = (format->tabStops != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(552)
		if ((tmp17)){
			HX_STACK_LINE(552)
			::openfl::text::TextFormat tmp18 = this->__textFormat;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(552)
			tmp18->tabStops = format->tabStops;
		}
		HX_STACK_LINE(554)
		this->__dirty = true;
		HX_STACK_LINE(555)
		this->__layoutDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TextField_obj,setTextFormat,(void))

::String TextField_obj::__getAttributeMatch( ::EReg regex){
	HX_STACK_FRAME("openfl.text.TextField","__getAttributeMatch",0x101a59fb,"openfl.text.TextField.__getAttributeMatch","openfl/text/TextField.hx",560,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(regex,"regex")
	HX_STACK_LINE(562)
	::String tmp = regex->matched((int)2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(562)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(562)
	::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(562)
	if ((tmp1)){
		HX_STACK_LINE(562)
		tmp2 = regex->matched((int)2);
	}
	else{
		HX_STACK_LINE(562)
		tmp2 = regex->matched((int)3);
	}
	HX_STACK_LINE(562)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,__getAttributeMatch,return )

Void TextField_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.text.TextField","__getBounds",0x189abae7,"openfl.text.TextField.__getBounds","openfl/text/TextField.hx",567,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(569)
		this->__updateLayout();
		HX_STACK_LINE(570)
		::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(570)
		::openfl::geom::Rectangle bounds = tmp;		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(571)
		::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(571)
		::openfl::geom::Rectangle tmp2 = bounds;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(571)
		::openfl::geom::Matrix tmp3 = matrix;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(571)
		tmp1->bounds->__transform(tmp2,tmp3);
		HX_STACK_LINE(572)
		Float tmp4 = bounds->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(572)
		Float tmp5 = bounds->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(572)
		Float tmp6 = bounds->width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(572)
		Float tmp7 = bounds->height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(572)
		rect->__expand(tmp4,tmp5,tmp6,tmp7);
	}
return null();
}


::lime::ui::MouseCursor TextField_obj::__getCursor( ){
	HX_STACK_FRAME("openfl.text.TextField","__getCursor",0xf165c348,"openfl.text.TextField.__getCursor","openfl/text/TextField.hx",577,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(579)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(579)
	bool tmp1 = tmp->selectable;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(579)
	::lime::ui::MouseCursor tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(579)
	if ((tmp1)){
		HX_STACK_LINE(579)
		tmp2 = ::lime::ui::MouseCursor_obj::TEXT;
	}
	else{
		HX_STACK_LINE(579)
		tmp2 = null();
	}
	HX_STACK_LINE(579)
	return tmp2;
}


int TextField_obj::__getPosition( Float x,Float y){
	HX_STACK_FRAME("openfl.text.TextField","__getPosition",0xfe83559b,"openfl.text.TextField.__getPosition","openfl/text/TextField.hx",584,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(586)
	this->__updateLayout();
	HX_STACK_LINE(588)
	int tmp = this->get_scrollH();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(588)
	hx::AddEq(x,tmp);
	HX_STACK_LINE(590)
	{
		HX_STACK_LINE(590)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(590)
		int tmp1 = this->get_scrollV();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(590)
		int tmp2 = (tmp1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(590)
		int _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(590)
		while((true)){
			HX_STACK_LINE(590)
			bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(590)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(590)
			if ((tmp4)){
				HX_STACK_LINE(590)
				break;
			}
			HX_STACK_LINE(590)
			int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(590)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(592)
			::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(592)
			Float tmp7 = tmp6->lineHeights->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(592)
			hx::AddEq(y,tmp7);
		}
	}
	HX_STACK_LINE(596)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(596)
	::openfl::_internal::text::TextEngine tmp2 = this->__textEngine;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(596)
	Float tmp3 = tmp2->textHeight;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(596)
	bool tmp4 = (tmp1 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(596)
	if ((tmp4)){
		HX_STACK_LINE(596)
		::openfl::_internal::text::TextEngine tmp5 = this->__textEngine;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(596)
		y = tmp5->textHeight;
	}
	HX_STACK_LINE(598)
	bool firstGroup = true;		HX_STACK_VAR(firstGroup,"firstGroup");
	HX_STACK_LINE(599)
	::openfl::_internal::text::TextLayoutGroup group;		HX_STACK_VAR(group,"group");
	HX_STACK_LINE(599)
	::openfl::_internal::text::TextLayoutGroup nextGroup;		HX_STACK_VAR(nextGroup,"nextGroup");
	HX_STACK_LINE(601)
	{
		HX_STACK_LINE(601)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(601)
		::openfl::_internal::text::TextEngine tmp5 = this->__textEngine;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(601)
		int tmp6 = tmp5->layoutGroups->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(601)
		int _g = tmp6;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(601)
		while((true)){
			HX_STACK_LINE(601)
			bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(601)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(601)
			if ((tmp8)){
				HX_STACK_LINE(601)
				break;
			}
			HX_STACK_LINE(601)
			int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(601)
			int i = tmp9;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(603)
			::openfl::_internal::text::TextEngine tmp10 = this->__textEngine;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(603)
			::openfl::_internal::text::TextLayoutGroup tmp11 = tmp10->layoutGroups->__get(i).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(603)
			group = tmp11;
			HX_STACK_LINE(605)
			int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(605)
			::openfl::_internal::text::TextEngine tmp13 = this->__textEngine;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(605)
			int tmp14 = tmp13->layoutGroups->length;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(605)
			int tmp15 = (tmp14 - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(605)
			bool tmp16 = (tmp12 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(605)
			if ((tmp16)){
				HX_STACK_LINE(607)
				::openfl::_internal::text::TextEngine tmp17 = this->__textEngine;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(607)
				int tmp18 = (i + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(607)
				::openfl::_internal::text::TextLayoutGroup tmp19 = tmp17->layoutGroups->__get(tmp18).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(607)
				nextGroup = tmp19;
			}
			else{
				HX_STACK_LINE(611)
				nextGroup = null();
			}
			HX_STACK_LINE(615)
			bool tmp17 = firstGroup;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(615)
			if ((tmp17)){
				HX_STACK_LINE(617)
				bool tmp18 = (y < group->offsetY);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(617)
				if ((tmp18)){
					HX_STACK_LINE(617)
					y = group->offsetY;
				}
				HX_STACK_LINE(618)
				bool tmp19 = (x < group->offsetX);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(618)
				if ((tmp19)){
					HX_STACK_LINE(618)
					x = group->offsetX;
				}
				HX_STACK_LINE(619)
				firstGroup = false;
			}
			HX_STACK_LINE(623)
			bool tmp18 = (y >= group->offsetY);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(623)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(623)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(623)
			if ((tmp19)){
				HX_STACK_LINE(623)
				Float tmp21 = y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(623)
				Float tmp22 = (group->offsetY + group->height);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(623)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(623)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(623)
				tmp20 = (tmp21 <= tmp24);
			}
			else{
				HX_STACK_LINE(623)
				tmp20 = false;
			}
			HX_STACK_LINE(623)
			bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(623)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(623)
			if ((tmp21)){
				HX_STACK_LINE(623)
				tmp22 = (nextGroup == null());
			}
			else{
				HX_STACK_LINE(623)
				tmp22 = true;
			}
			HX_STACK_LINE(623)
			if ((tmp22)){
				HX_STACK_LINE(625)
				bool tmp23 = (x >= group->offsetX);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(625)
				bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(625)
				bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(625)
				if ((tmp24)){
					HX_STACK_LINE(625)
					Float tmp26 = x;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(625)
					Float tmp27 = (group->offsetX + group->width);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(625)
					Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(625)
					Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(625)
					tmp25 = (tmp26 <= tmp29);
				}
				else{
					HX_STACK_LINE(625)
					tmp25 = false;
				}
				HX_STACK_LINE(625)
				bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(625)
				bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(625)
				if ((tmp26)){
					HX_STACK_LINE(625)
					bool tmp28 = (nextGroup == null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(625)
					bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(625)
					bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(625)
					bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(625)
					bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(625)
					bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(625)
					if ((tmp33)){
						HX_STACK_LINE(625)
						tmp27 = (nextGroup->lineIndex != group->lineIndex);
					}
					else{
						HX_STACK_LINE(625)
						tmp27 = true;
					}
				}
				else{
					HX_STACK_LINE(625)
					tmp27 = true;
				}
				HX_STACK_LINE(625)
				if ((tmp27)){
					HX_STACK_LINE(627)
					Float advance = ((Float)0.0);		HX_STACK_VAR(advance,"advance");
					HX_STACK_LINE(629)
					{
						HX_STACK_LINE(629)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(629)
						int tmp28 = group->advances->length;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(629)
						int _g2 = tmp28;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(629)
						while((true)){
							HX_STACK_LINE(629)
							bool tmp29 = (_g3 < _g2);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(629)
							bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(629)
							if ((tmp30)){
								HX_STACK_LINE(629)
								break;
							}
							HX_STACK_LINE(629)
							int tmp31 = (_g3)++;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(629)
							int i1 = tmp31;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(631)
							Float tmp32 = group->advances->__get(i1);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(631)
							hx::AddEq(advance,tmp32);
							HX_STACK_LINE(633)
							Float tmp33 = x;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(633)
							Float tmp34 = (group->offsetX + advance);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(633)
							bool tmp35 = (tmp33 <= tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(633)
							if ((tmp35)){
								HX_STACK_LINE(635)
								Float tmp36 = x;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(635)
								Float tmp37 = group->offsetX;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(635)
								Float tmp38 = advance;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(635)
								Float tmp39 = group->advances->__get(i1);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(635)
								Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(635)
								Float tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(635)
								Float tmp42 = group->advances->__get(i1);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(635)
								Float tmp43 = (Float(tmp42) / Float((int)2));		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(635)
								Float tmp44 = (tmp41 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(635)
								bool tmp45 = (tmp36 <= tmp44);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(635)
								if ((tmp45)){
									HX_STACK_LINE(637)
									int tmp46 = (group->startIndex + i1);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(637)
									return tmp46;
								}
								else{
									HX_STACK_LINE(641)
									int tmp46 = (group->startIndex + i1);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(641)
									int tmp47 = group->endIndex;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(641)
									bool tmp48 = (tmp46 < tmp47);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(641)
									int tmp49;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(641)
									if ((tmp48)){
										HX_STACK_LINE(641)
										int tmp50 = (group->startIndex + i1);		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(641)
										tmp49 = (tmp50 + (int)1);
									}
									else{
										HX_STACK_LINE(641)
										tmp49 = group->endIndex;
									}
									HX_STACK_LINE(641)
									return tmp49;
								}
							}
						}
					}
					HX_STACK_LINE(649)
					int tmp28 = group->endIndex;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(649)
					return tmp28;
				}
			}
		}
	}
	HX_STACK_LINE(657)
	::String tmp5 = this->__text;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(657)
	int tmp6 = tmp5.length;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(657)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,__getPosition,return )

bool TextField_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly,::openfl::display::DisplayObject hitObject){
	HX_STACK_FRAME("openfl.text.TextField","__hitTest",0x83278481,"openfl.text.TextField.__hitTest","openfl/text/TextField.hx",662,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(interactiveOnly,"interactiveOnly")
	HX_STACK_ARG(hitObject,"hitObject")
	HX_STACK_LINE(664)
	bool tmp = hitObject->get_visible();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(664)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(664)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(664)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(664)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(664)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(664)
	if ((tmp4)){
		HX_STACK_LINE(664)
		tmp5 = this->__isMask;
	}
	else{
		HX_STACK_LINE(664)
		tmp5 = true;
	}
	HX_STACK_LINE(664)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(664)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(664)
	if ((tmp6)){
		HX_STACK_LINE(664)
		bool tmp8 = interactiveOnly;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(664)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(664)
		if ((tmp9)){
			HX_STACK_LINE(664)
			bool tmp10 = this->mouseEnabled;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(664)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(664)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(664)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(664)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(664)
			tmp7 = !(tmp14);
		}
		else{
			HX_STACK_LINE(664)
			tmp7 = false;
		}
	}
	else{
		HX_STACK_LINE(664)
		tmp7 = true;
	}
	HX_STACK_LINE(664)
	if ((tmp7)){
		HX_STACK_LINE(664)
		return false;
	}
	HX_STACK_LINE(665)
	::openfl::display::DisplayObject tmp8 = this->get_mask();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(665)
	bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(665)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(665)
	if ((tmp9)){
		HX_STACK_LINE(665)
		::openfl::display::DisplayObject tmp11 = this->get_mask();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(665)
		::openfl::display::DisplayObject tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(665)
		Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(665)
		Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(665)
		Float tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(665)
		Float tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(665)
		bool tmp17 = tmp12->__hitTestMask(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(665)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(665)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(665)
		tmp10 = !(tmp19);
	}
	else{
		HX_STACK_LINE(665)
		tmp10 = false;
	}
	HX_STACK_LINE(665)
	if ((tmp10)){
		HX_STACK_LINE(665)
		return false;
	}
	HX_STACK_LINE(667)
	this->__getRenderTransform();
	HX_STACK_LINE(668)
	this->__updateLayout();
	HX_STACK_LINE(670)
	Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(670)
	{
		HX_STACK_LINE(670)
		::openfl::geom::Matrix tmp12 = this->__renderTransform;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(670)
		::openfl::geom::Matrix _this = tmp12;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(670)
		Float tmp13 = (_this->a * _this->d);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(670)
		Float tmp14 = (_this->b * _this->c);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(670)
		Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(670)
		Float norm = tmp15;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(670)
		bool tmp16 = (norm == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(670)
		if ((tmp16)){
			HX_STACK_LINE(670)
			Float tmp17 = _this->tx;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(670)
			tmp11 = -(tmp17);
		}
		else{
			HX_STACK_LINE(670)
			Float tmp17 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(670)
			Float tmp18 = _this->c;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(670)
			Float tmp19 = (_this->ty - y);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(670)
			Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(670)
			Float tmp21 = _this->d;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(670)
			Float tmp22 = (x - _this->tx);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(670)
			Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(670)
			Float tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(670)
			tmp11 = (tmp17 * tmp24);
		}
	}
	HX_STACK_LINE(670)
	Float px = tmp11;		HX_STACK_VAR(px,"px");
	HX_STACK_LINE(671)
	Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(671)
	{
		HX_STACK_LINE(671)
		::openfl::geom::Matrix tmp13 = this->__renderTransform;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(671)
		::openfl::geom::Matrix _this = tmp13;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(671)
		Float tmp14 = (_this->a * _this->d);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(671)
		Float tmp15 = (_this->b * _this->c);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(671)
		Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(671)
		Float norm = tmp16;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(671)
		bool tmp17 = (norm == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(671)
		if ((tmp17)){
			HX_STACK_LINE(671)
			Float tmp18 = _this->ty;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(671)
			tmp12 = -(tmp18);
		}
		else{
			HX_STACK_LINE(671)
			Float tmp18 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(671)
			Float tmp19 = _this->a;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(671)
			Float tmp20 = (y - _this->ty);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(671)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(671)
			Float tmp22 = _this->b;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(671)
			Float tmp23 = (_this->tx - x);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(671)
			Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(671)
			Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(671)
			tmp12 = (tmp18 * tmp25);
		}
	}
	HX_STACK_LINE(671)
	Float py = tmp12;		HX_STACK_VAR(py,"py");
	HX_STACK_LINE(673)
	::openfl::_internal::text::TextEngine tmp13 = this->__textEngine;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(673)
	Float tmp14 = px;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(673)
	Float tmp15 = py;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(673)
	bool tmp16 = tmp13->bounds->contains(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(673)
	if ((tmp16)){
		HX_STACK_LINE(675)
		bool tmp17 = (stack != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(675)
		if ((tmp17)){
			HX_STACK_LINE(677)
			::openfl::display::DisplayObject tmp18 = hitObject;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(677)
			stack->push(tmp18);
		}
		HX_STACK_LINE(681)
		return true;
	}
	HX_STACK_LINE(685)
	return false;
}


bool TextField_obj::__hitTestMask( Float x,Float y){
	HX_STACK_FRAME("openfl.text.TextField","__hitTestMask",0x0119c60d,"openfl.text.TextField.__hitTestMask","openfl/text/TextField.hx",690,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(692)
	this->__getRenderTransform();
	HX_STACK_LINE(693)
	this->__updateLayout();
	HX_STACK_LINE(695)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(695)
	{
		HX_STACK_LINE(695)
		::openfl::geom::Matrix tmp1 = this->__renderTransform;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(695)
		::openfl::geom::Matrix _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(695)
		Float tmp2 = (_this->a * _this->d);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(695)
		Float tmp3 = (_this->b * _this->c);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(695)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(695)
		Float norm = tmp4;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(695)
		bool tmp5 = (norm == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(695)
		if ((tmp5)){
			HX_STACK_LINE(695)
			Float tmp6 = _this->tx;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(695)
			tmp = -(tmp6);
		}
		else{
			HX_STACK_LINE(695)
			Float tmp6 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(695)
			Float tmp7 = _this->c;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(695)
			Float tmp8 = (_this->ty - y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(695)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(695)
			Float tmp10 = _this->d;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(695)
			Float tmp11 = (x - _this->tx);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(695)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(695)
			Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(695)
			tmp = (tmp6 * tmp13);
		}
	}
	HX_STACK_LINE(695)
	Float px = tmp;		HX_STACK_VAR(px,"px");
	HX_STACK_LINE(696)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(696)
	{
		HX_STACK_LINE(696)
		::openfl::geom::Matrix tmp2 = this->__renderTransform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(696)
		::openfl::geom::Matrix _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(696)
		Float tmp3 = (_this->a * _this->d);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(696)
		Float tmp4 = (_this->b * _this->c);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(696)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(696)
		Float norm = tmp5;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(696)
		bool tmp6 = (norm == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(696)
		if ((tmp6)){
			HX_STACK_LINE(696)
			Float tmp7 = _this->ty;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(696)
			tmp1 = -(tmp7);
		}
		else{
			HX_STACK_LINE(696)
			Float tmp7 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(696)
			Float tmp8 = _this->a;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(696)
			Float tmp9 = (y - _this->ty);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(696)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(696)
			Float tmp11 = _this->b;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(696)
			Float tmp12 = (_this->tx - x);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(696)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(696)
			Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(696)
			tmp1 = (tmp7 * tmp14);
		}
	}
	HX_STACK_LINE(696)
	Float py = tmp1;		HX_STACK_VAR(py,"py");
	HX_STACK_LINE(698)
	::openfl::_internal::text::TextEngine tmp2 = this->__textEngine;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(698)
	Float tmp3 = px;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(698)
	Float tmp4 = py;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(698)
	bool tmp5 = tmp2->bounds->contains(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(698)
	if ((tmp5)){
		HX_STACK_LINE(700)
		return true;
	}
	HX_STACK_LINE(704)
	return false;
}


Void TextField_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.text.TextField","__renderCairo",0x1a5f4f8e,"openfl.text.TextField.__renderCairo","openfl/text/TextField.hx",709,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(711)
		::openfl::_internal::renderer::RenderSession tmp = renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(711)
		::openfl::geom::Matrix tmp1 = this->__worldTransform;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(711)
		::openfl::_internal::renderer::cairo::CairoTextField_obj::render(hx::ObjectPtr<OBJ_>(this),tmp,tmp1);
		HX_STACK_LINE(712)
		::openfl::_internal::renderer::RenderSession tmp2 = renderSession;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(712)
		this->super::__renderCairo(tmp2);
	}
return null();
}


Void TextField_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.text.TextField","__renderCanvas",0xfc575b12,"openfl.text.TextField.__renderCanvas","openfl/text/TextField.hx",717,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(721)
		::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(721)
		Dynamic tmp1 = tmp->antiAliasType;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(721)
		bool tmp2 = (tmp1 == ((Dynamic)((int)0)));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(721)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(721)
		if ((tmp2)){
			HX_STACK_LINE(721)
			::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(721)
			::openfl::_internal::text::TextEngine tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(721)
			Dynamic tmp6 = tmp5->gridFitType;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(721)
			tmp3 = (tmp6 == ((Dynamic)((int)1)));
		}
		else{
			HX_STACK_LINE(721)
			tmp3 = false;
		}
		HX_STACK_LINE(721)
		if ((tmp3)){
			HX_STACK_LINE(723)
			bool tmp4 = renderSession->context->imageSmoothingEnabled;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(723)
			bool smoothingEnabled = tmp4;		HX_STACK_VAR(smoothingEnabled,"smoothingEnabled");
			HX_STACK_LINE(725)
			bool tmp5 = smoothingEnabled;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(725)
			if ((tmp5)){
				HX_STACK_LINE(727)
				renderSession->context->__FieldRef(HX_HCSTRING("mozImageSmoothingEnabled","\xf0","\x68","\xe1","\xd7")) = false;
				HX_STACK_LINE(729)
				renderSession->context->__FieldRef(HX_HCSTRING("msImageSmoothingEnabled","\xa2","\x61","\x6c","\xa3")) = false;
				HX_STACK_LINE(730)
				renderSession->context->imageSmoothingEnabled = false;
			}
			HX_STACK_LINE(734)
			::openfl::_internal::renderer::RenderSession tmp6 = renderSession;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(734)
			this->super::__renderCanvas(tmp6);
			HX_STACK_LINE(736)
			bool tmp7 = smoothingEnabled;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(736)
			if ((tmp7)){
				HX_STACK_LINE(738)
				renderSession->context->__FieldRef(HX_HCSTRING("mozImageSmoothingEnabled","\xf0","\x68","\xe1","\xd7")) = true;
				HX_STACK_LINE(740)
				renderSession->context->__FieldRef(HX_HCSTRING("msImageSmoothingEnabled","\xa2","\x61","\x6c","\xa3")) = true;
				HX_STACK_LINE(741)
				renderSession->context->imageSmoothingEnabled = true;
			}
		}
		else{
			HX_STACK_LINE(747)
			::openfl::_internal::renderer::RenderSession tmp4 = renderSession;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(747)
			this->super::__renderCanvas(tmp4);
		}
	}
return null();
}


Void TextField_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.text.TextField","__renderDOM",0x037e5808,"openfl.text.TextField.__renderDOM","openfl/text/TextField.hx",756,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(756)
		Dynamic();
	}
return null();
}


Void TextField_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.text.TextField","__renderGL",0xa5533b3f,"openfl.text.TextField.__renderGL","openfl/text/TextField.hx",761,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(766)
		::openfl::_internal::renderer::RenderSession tmp = renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(766)
		::openfl::geom::Matrix tmp1 = this->__worldTransform;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(766)
		::openfl::_internal::renderer::cairo::CairoTextField_obj::render(hx::ObjectPtr<OBJ_>(this),tmp,tmp1);
		HX_STACK_LINE(769)
		::openfl::_internal::renderer::RenderSession tmp2 = renderSession;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(769)
		this->super::__renderGL(tmp2);
	}
return null();
}


Void TextField_obj::__startCursorTimer( ){
{
		HX_STACK_FRAME("openfl.text.TextField","__startCursorTimer",0xacba2811,"openfl.text.TextField.__startCursorTimer","openfl/text/TextField.hx",774,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_LINE(776)
		Dynamic tmp = this->__startCursorTimer_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(776)
		::haxe::Timer tmp1 = ::haxe::Timer_obj::delay(tmp,(int)600);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(776)
		this->__cursorTimer = tmp1;
		HX_STACK_LINE(777)
		bool tmp2 = this->__showCursor;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(777)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(777)
		this->__showCursor = tmp3;
		HX_STACK_LINE(778)
		this->__dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__startCursorTimer,(void))

Void TextField_obj::__startTextInput( ){
{
		HX_STACK_FRAME("openfl.text.TextField","__startTextInput",0x3a7d3e9f,"openfl.text.TextField.__startTextInput","openfl/text/TextField.hx",783,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_LINE(785)
		int tmp = this->__caretIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(785)
		bool tmp1 = (tmp < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(785)
		if ((tmp1)){
			HX_STACK_LINE(787)
			::String tmp2 = this->__text;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(787)
			this->__caretIndex = tmp2.length;
			HX_STACK_LINE(788)
			int tmp3 = this->__caretIndex;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(788)
			this->__selectionIndex = tmp3;
		}
		HX_STACK_LINE(792)
		::openfl::display::Stage tmp2 = this->stage;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(792)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(792)
		if ((tmp3)){
			HX_STACK_LINE(796)
			::openfl::display::Stage tmp4 = this->stage;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(796)
			::lime::_backend::native::NativeWindow tmp5 = tmp4->window->backend;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(796)
			tmp5->setEnableTextEvents(true);
			HX_STACK_LINE(798)
			bool tmp6 = this->__inputEnabled;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(798)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(798)
			if ((tmp7)){
				HX_STACK_LINE(800)
				::openfl::display::Stage tmp8 = this->stage;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(800)
				::lime::_backend::native::NativeWindow tmp9 = tmp8->window->backend;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(800)
				tmp9->setEnableTextEvents(true);
				HX_STACK_LINE(802)
				::openfl::display::Stage tmp10 = this->stage;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(802)
				::lime::app::_Event_String_Void tmp11 = tmp10->window->onTextInput;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(802)
				Dynamic tmp12 = this->window_onTextInput_dyn();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(802)
				bool tmp13 = tmp11->has(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(802)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(802)
				if ((tmp14)){
					HX_STACK_LINE(804)
					::openfl::display::Stage tmp15 = this->stage;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(804)
					::lime::app::_Event_String_Void tmp16 = tmp15->window->onTextInput;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(804)
					Dynamic tmp17 = this->window_onTextInput_dyn();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(804)
					tmp16->add(tmp17,null(),null());
					HX_STACK_LINE(805)
					::openfl::display::Stage tmp18 = this->stage;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(805)
					::lime::app::_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void tmp19 = tmp18->window->onKeyDown;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(805)
					Dynamic tmp20 = this->window_onKeyDown_dyn();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(805)
					tmp19->add(tmp20,null(),null());
				}
				HX_STACK_LINE(809)
				this->__inputEnabled = true;
				HX_STACK_LINE(810)
				this->__startCursorTimer();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__startTextInput,(void))

Void TextField_obj::__stopCursorTimer( ){
{
		HX_STACK_FRAME("openfl.text.TextField","__stopCursorTimer",0x8f135c69,"openfl.text.TextField.__stopCursorTimer","openfl/text/TextField.hx",821,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_LINE(823)
		::haxe::Timer tmp = this->__cursorTimer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(823)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(823)
		if ((tmp1)){
			HX_STACK_LINE(825)
			::haxe::Timer tmp2 = this->__cursorTimer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(825)
			tmp2->stop();
			HX_STACK_LINE(826)
			this->__cursorTimer = null();
		}
		HX_STACK_LINE(830)
		bool tmp2 = this->__showCursor;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(830)
		if ((tmp2)){
			HX_STACK_LINE(832)
			this->__showCursor = false;
			HX_STACK_LINE(833)
			this->__dirty = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__stopCursorTimer,(void))

Void TextField_obj::__stopTextInput( ){
{
		HX_STACK_FRAME("openfl.text.TextField","__stopTextInput",0x6c7c2cf7,"openfl.text.TextField.__stopTextInput","openfl/text/TextField.hx",840,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_LINE(844)
		bool tmp = this->__inputEnabled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(844)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(844)
		if ((tmp)){
			HX_STACK_LINE(844)
			::openfl::display::Stage tmp2 = this->stage;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(844)
			::openfl::display::Stage tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(844)
			tmp1 = (tmp3 != null());
		}
		else{
			HX_STACK_LINE(844)
			tmp1 = false;
		}
		HX_STACK_LINE(844)
		if ((tmp1)){
			HX_STACK_LINE(846)
			::openfl::display::Stage tmp2 = this->stage;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(846)
			::lime::_backend::native::NativeWindow tmp3 = tmp2->window->backend;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(846)
			tmp3->setEnableTextEvents(false);
			HX_STACK_LINE(847)
			::openfl::display::Stage tmp4 = this->stage;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(847)
			::lime::app::_Event_String_Void tmp5 = tmp4->window->onTextInput;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(847)
			Dynamic tmp6 = this->window_onTextInput_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(847)
			tmp5->remove(tmp6);
			HX_STACK_LINE(848)
			::openfl::display::Stage tmp7 = this->stage;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(848)
			::lime::app::_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void tmp8 = tmp7->window->onKeyDown;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(848)
			Dynamic tmp9 = this->window_onKeyDown_dyn();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(848)
			tmp8->remove(tmp9);
			HX_STACK_LINE(850)
			this->__inputEnabled = false;
			HX_STACK_LINE(851)
			this->__stopCursorTimer();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__stopTextInput,(void))

Void TextField_obj::__updateLayout( ){
{
		HX_STACK_FRAME("openfl.text.TextField","__updateLayout",0x2d3b57d7,"openfl.text.TextField.__updateLayout","openfl/text/TextField.hx",860,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_LINE(862)
		bool tmp = this->__layoutDirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(862)
		if ((tmp)){
			HX_STACK_LINE(864)
			::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(864)
			Float cacheWidth = tmp1->width;		HX_STACK_VAR(cacheWidth,"cacheWidth");
			HX_STACK_LINE(865)
			::openfl::_internal::text::TextEngine tmp2 = this->__textEngine;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(865)
			Float cacheHeight = tmp2->height;		HX_STACK_VAR(cacheHeight,"cacheHeight");
			HX_STACK_LINE(867)
			::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(867)
			tmp3->update();
			HX_STACK_LINE(869)
			::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(869)
			Dynamic tmp5 = tmp4->autoSize;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(869)
			bool tmp6 = (tmp5 != ((Dynamic)((int)2)));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(869)
			if ((tmp6)){
				HX_STACK_LINE(871)
				::openfl::_internal::text::TextEngine tmp7 = this->__textEngine;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(871)
				Float tmp8 = tmp7->width;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(871)
				Float tmp9 = cacheWidth;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(871)
				bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(871)
				if ((tmp10)){
					HX_STACK_LINE(873)
					::openfl::_internal::text::TextEngine tmp11 = this->__textEngine;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(873)
					Dynamic _g = tmp11->autoSize;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(873)
					Dynamic tmp12 = _g;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(873)
					switch( (int)(tmp12)){
						case (int)3: {
							HX_STACK_LINE(877)
							::openfl::text::TextField _g1 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(877)
							Float tmp13 = _g1->get_x();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(877)
							Float tmp14 = cacheWidth;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(877)
							::openfl::_internal::text::TextEngine tmp15 = this->__textEngine;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(877)
							Float tmp16 = tmp15->width;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(877)
							Float tmp17 = (tmp14 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(877)
							Float tmp18 = (tmp13 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(877)
							_g1->set_x(tmp18);
						}
						;break;
						case (int)0: {
							HX_STACK_LINE(881)
							::openfl::text::TextField _g1 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(881)
							Float tmp13 = _g1->get_x();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(881)
							Float tmp14 = cacheWidth;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(881)
							::openfl::_internal::text::TextEngine tmp15 = this->__textEngine;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(881)
							Float tmp16 = tmp15->width;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(881)
							Float tmp17 = (tmp14 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(881)
							Float tmp18 = (Float(tmp17) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(881)
							Float tmp19 = (tmp13 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(881)
							_g1->set_x(tmp19);
						}
						;break;
						default: {
						}
					}
				}
				HX_STACK_LINE(891)
				::openfl::_internal::text::TextEngine tmp11 = this->__textEngine;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(891)
				tmp11->getBounds();
			}
			HX_STACK_LINE(895)
			this->__layoutDirty = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,__updateLayout,(void))

Void TextField_obj::__updateText( ::String value){
{
		HX_STACK_FRAME("openfl.text.TextField","__updateText",0x315de09a,"openfl.text.TextField.__updateText","openfl/text/TextField.hx",902,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(904)
		this->__text = value;
		HX_STACK_LINE(906)
		bool tmp = this->__displayAsPassword;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(906)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(906)
		if ((tmp1)){
			HX_STACK_LINE(908)
			::String tmp2 = this->__text;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(908)
			::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(908)
			tmp3->text = tmp2;
		}
		else{
			HX_STACK_LINE(912)
			::String tmp2 = this->get_text();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(912)
			int length = tmp2.length;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(913)
			::String mask = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(mask,"mask");
			HX_STACK_LINE(915)
			{
				HX_STACK_LINE(915)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(915)
				while((true)){
					HX_STACK_LINE(915)
					bool tmp3 = (_g < length);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(915)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(915)
					if ((tmp4)){
						HX_STACK_LINE(915)
						break;
					}
					HX_STACK_LINE(915)
					int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(915)
					int i = tmp5;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(917)
					hx::AddEq(mask,HX_HCSTRING("*","\x2a","\x00","\x00","\x00"));
				}
			}
			HX_STACK_LINE(921)
			::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(921)
			tmp3->text = mask;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,__updateText,(void))

Dynamic TextField_obj::get_antiAliasType( ){
	HX_STACK_FRAME("openfl.text.TextField","get_antiAliasType",0x57115f1b,"openfl.text.TextField.get_antiAliasType","openfl/text/TextField.hx",935,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(937)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(937)
	Dynamic tmp1 = tmp->antiAliasType;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(937)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_antiAliasType,return )

Dynamic TextField_obj::set_antiAliasType( Dynamic value){
	HX_STACK_FRAME("openfl.text.TextField","set_antiAliasType",0x7a7f3727,"openfl.text.TextField.set_antiAliasType","openfl/text/TextField.hx",942,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(944)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(944)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(944)
	Dynamic tmp2 = tmp1->antiAliasType;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(944)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(944)
	if ((tmp3)){
	}
	HX_STACK_LINE(950)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(950)
	Dynamic tmp5 = tmp4->antiAliasType = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(950)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_antiAliasType,return )

Dynamic TextField_obj::get_autoSize( ){
	HX_STACK_FRAME("openfl.text.TextField","get_autoSize",0xd7aef1fd,"openfl.text.TextField.get_autoSize","openfl/text/TextField.hx",955,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(957)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(957)
	Dynamic tmp1 = tmp->autoSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(957)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_autoSize,return )

Dynamic TextField_obj::set_autoSize( Dynamic value){
	HX_STACK_FRAME("openfl.text.TextField","set_autoSize",0xeca81571,"openfl.text.TextField.set_autoSize","openfl/text/TextField.hx",962,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(964)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(964)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(964)
	Dynamic tmp2 = tmp1->autoSize;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(964)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(964)
	if ((tmp3)){
		HX_STACK_LINE(966)
		this->__dirty = true;
		HX_STACK_LINE(967)
		this->__layoutDirty = true;
	}
	HX_STACK_LINE(971)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(971)
	Dynamic tmp5 = tmp4->autoSize = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(971)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_autoSize,return )

bool TextField_obj::get_background( ){
	HX_STACK_FRAME("openfl.text.TextField","get_background",0x50119b5b,"openfl.text.TextField.get_background","openfl/text/TextField.hx",976,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(978)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(978)
	bool tmp1 = tmp->background;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(978)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_background,return )

bool TextField_obj::set_background( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_background",0x703183cf,"openfl.text.TextField.set_background","openfl/text/TextField.hx",983,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(985)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(985)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(985)
	bool tmp2 = tmp1->background;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(985)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(985)
	if ((tmp3)){
		HX_STACK_LINE(987)
		this->__dirty = true;
	}
	HX_STACK_LINE(991)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(991)
	bool tmp5 = tmp4->background = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(991)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_background,return )

int TextField_obj::get_backgroundColor( ){
	HX_STACK_FRAME("openfl.text.TextField","get_backgroundColor",0x63403c08,"openfl.text.TextField.get_backgroundColor","openfl/text/TextField.hx",996,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(998)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(998)
	int tmp1 = tmp->backgroundColor;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(998)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_backgroundColor,return )

int TextField_obj::set_backgroundColor( int value){
	HX_STACK_FRAME("openfl.text.TextField","set_backgroundColor",0x9fdd2f14,"openfl.text.TextField.set_backgroundColor","openfl/text/TextField.hx",1003,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1005)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1005)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1005)
	int tmp2 = tmp1->backgroundColor;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1005)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1005)
	if ((tmp3)){
		HX_STACK_LINE(1007)
		this->__dirty = true;
	}
	HX_STACK_LINE(1011)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1011)
	int tmp5 = tmp4->backgroundColor = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1011)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_backgroundColor,return )

bool TextField_obj::get_border( ){
	HX_STACK_FRAME("openfl.text.TextField","get_border",0xa3e0d9d9,"openfl.text.TextField.get_border","openfl/text/TextField.hx",1016,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1018)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1018)
	bool tmp1 = tmp->border;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1018)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_border,return )

bool TextField_obj::set_border( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_border",0xa75e784d,"openfl.text.TextField.set_border","openfl/text/TextField.hx",1023,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1025)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1025)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1025)
	bool tmp2 = tmp1->border;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1025)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1025)
	if ((tmp3)){
		HX_STACK_LINE(1027)
		this->__dirty = true;
	}
	HX_STACK_LINE(1031)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1031)
	bool tmp5 = tmp4->border = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1031)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_border,return )

int TextField_obj::get_borderColor( ){
	HX_STACK_FRAME("openfl.text.TextField","get_borderColor",0x6267b4ca,"openfl.text.TextField.get_borderColor","openfl/text/TextField.hx",1036,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1038)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1038)
	int tmp1 = tmp->borderColor;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1038)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_borderColor,return )

int TextField_obj::set_borderColor( int value){
	HX_STACK_FRAME("openfl.text.TextField","set_borderColor",0x5e3331d6,"openfl.text.TextField.set_borderColor","openfl/text/TextField.hx",1043,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1045)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1045)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1045)
	int tmp2 = tmp1->borderColor;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1045)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1045)
	if ((tmp3)){
		HX_STACK_LINE(1047)
		this->__dirty = true;
	}
	HX_STACK_LINE(1051)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1051)
	int tmp5 = tmp4->borderColor = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1051)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_borderColor,return )

int TextField_obj::get_bottomScrollV( ){
	HX_STACK_FRAME("openfl.text.TextField","get_bottomScrollV",0xfa9e92b1,"openfl.text.TextField.get_bottomScrollV","openfl/text/TextField.hx",1056,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1058)
	this->__updateLayout();
	HX_STACK_LINE(1060)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1060)
	int tmp1 = tmp->bottomScrollV;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1060)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_bottomScrollV,return )

int TextField_obj::get_caretIndex( ){
	HX_STACK_FRAME("openfl.text.TextField","get_caretIndex",0x074fbdfc,"openfl.text.TextField.get_caretIndex","openfl/text/TextField.hx",1065,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1067)
	int tmp = this->__caretIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1067)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_caretIndex,return )

::openfl::text::TextFormat TextField_obj::get_defaultTextFormat( ){
	HX_STACK_FRAME("openfl.text.TextField","get_defaultTextFormat",0x83063818,"openfl.text.TextField.get_defaultTextFormat","openfl/text/TextField.hx",1072,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1074)
	::openfl::text::TextFormat tmp = this->__textFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1074)
	::openfl::text::TextFormat tmp1 = tmp->clone();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1074)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_defaultTextFormat,return )

::openfl::text::TextFormat TextField_obj::set_defaultTextFormat( ::openfl::text::TextFormat value){
	HX_STACK_FRAME("openfl.text.TextField","set_defaultTextFormat",0xd70f0624,"openfl.text.TextField.set_defaultTextFormat","openfl/text/TextField.hx",1079,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1081)
	::openfl::text::TextFormat tmp = this->__textFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1081)
	::openfl::text::TextFormat tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1081)
	tmp->__merge(tmp1);
	HX_STACK_LINE(1083)
	this->__layoutDirty = true;
	HX_STACK_LINE(1084)
	this->__dirty = true;
	HX_STACK_LINE(1086)
	::openfl::text::TextFormat tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1086)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_defaultTextFormat,return )

bool TextField_obj::get_displayAsPassword( ){
	HX_STACK_FRAME("openfl.text.TextField","get_displayAsPassword",0x62bc3b42,"openfl.text.TextField.get_displayAsPassword","openfl/text/TextField.hx",1091,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1093)
	bool tmp = this->__displayAsPassword;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1093)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_displayAsPassword,return )

bool TextField_obj::set_displayAsPassword( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_displayAsPassword",0xb6c5094e,"openfl.text.TextField.set_displayAsPassword","openfl/text/TextField.hx",1098,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1100)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1100)
	bool tmp1 = this->__displayAsPassword;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1100)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1100)
	if ((tmp2)){
		HX_STACK_LINE(1102)
		this->__dirty = true;
		HX_STACK_LINE(1103)
		this->__layoutDirty = true;
		HX_STACK_LINE(1105)
		this->__displayAsPassword = value;
		HX_STACK_LINE(1106)
		::String tmp3 = this->__text;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1106)
		this->__updateText(tmp3);
	}
	HX_STACK_LINE(1110)
	bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1110)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_displayAsPassword,return )

bool TextField_obj::get_embedFonts( ){
	HX_STACK_FRAME("openfl.text.TextField","get_embedFonts",0xb8d5ce98,"openfl.text.TextField.get_embedFonts","openfl/text/TextField.hx",1115,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1117)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1117)
	bool tmp1 = tmp->embedFonts;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1117)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_embedFonts,return )

bool TextField_obj::set_embedFonts( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_embedFonts",0xd8f5b70c,"openfl.text.TextField.set_embedFonts","openfl/text/TextField.hx",1122,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1131)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1131)
	bool tmp1 = tmp->embedFonts = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1131)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_embedFonts,return )

Dynamic TextField_obj::get_gridFitType( ){
	HX_STACK_FRAME("openfl.text.TextField","get_gridFitType",0x3fa66af8,"openfl.text.TextField.get_gridFitType","openfl/text/TextField.hx",1136,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1138)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1138)
	Dynamic tmp1 = tmp->gridFitType;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1138)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_gridFitType,return )

Dynamic TextField_obj::set_gridFitType( Dynamic value){
	HX_STACK_FRAME("openfl.text.TextField","set_gridFitType",0x3b71e804,"openfl.text.TextField.set_gridFitType","openfl/text/TextField.hx",1143,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1152)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1152)
	Dynamic tmp1 = tmp->gridFitType = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1152)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_gridFitType,return )

Float TextField_obj::get_height( ){
	HX_STACK_FRAME("openfl.text.TextField","get_height",0x421294d4,"openfl.text.TextField.get_height","openfl/text/TextField.hx",1157,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1159)
	this->__updateLayout();
	HX_STACK_LINE(1160)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1160)
	Float tmp1 = tmp->height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1160)
	return tmp1;
}


Float TextField_obj::set_height( Float value){
	HX_STACK_FRAME("openfl.text.TextField","set_height",0x45903348,"openfl.text.TextField.set_height","openfl/text/TextField.hx",1165,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1167)
	Float tmp = this->get_scaleY();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1167)
	bool tmp1 = (tmp != (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1167)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1167)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1167)
	if ((tmp2)){
		HX_STACK_LINE(1167)
		Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1167)
		::openfl::_internal::text::TextEngine tmp5 = this->__textEngine;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1167)
		::openfl::_internal::text::TextEngine tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1167)
		Float tmp7 = tmp6->height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1167)
		tmp3 = (tmp4 != tmp7);
	}
	else{
		HX_STACK_LINE(1167)
		tmp3 = true;
	}
	HX_STACK_LINE(1167)
	if ((tmp3)){
		HX_STACK_LINE(1169)
		{
			HX_STACK_LINE(1169)
			bool tmp4 = this->__transformDirty;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1169)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1169)
			if ((tmp5)){
				HX_STACK_LINE(1169)
				this->__transformDirty = true;
				HX_STACK_LINE(1169)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(1170)
		this->__dirty = true;
		HX_STACK_LINE(1171)
		this->__layoutDirty = true;
	}
	HX_STACK_LINE(1175)
	this->set_scaleY((int)1);
	HX_STACK_LINE(1176)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1176)
	Float tmp5 = tmp4->height = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1176)
	return tmp5;
}


::String TextField_obj::get_htmlText( ){
	HX_STACK_FRAME("openfl.text.TextField","get_htmlText",0xb86d81e5,"openfl.text.TextField.get_htmlText","openfl/text/TextField.hx",1181,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1183)
	::String tmp = this->__text;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1183)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_htmlText,return )

::String TextField_obj::set_htmlText( ::String value){
	HX_STACK_FRAME("openfl.text.TextField","set_htmlText",0xcd66a559,"openfl.text.TextField.set_htmlText","openfl/text/TextField.hx",1188,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1190)
	bool tmp = this->__isHTML;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1190)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1190)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1190)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1190)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1190)
	if ((tmp3)){
		HX_STACK_LINE(1190)
		::String tmp5 = this->__text;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1190)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1190)
		::String tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1190)
		tmp4 = (tmp6 != tmp7);
	}
	else{
		HX_STACK_LINE(1190)
		tmp4 = true;
	}
	HX_STACK_LINE(1190)
	if ((tmp4)){
		HX_STACK_LINE(1192)
		this->__dirty = true;
		HX_STACK_LINE(1193)
		this->__layoutDirty = true;
	}
	HX_STACK_LINE(1197)
	this->__isHTML = true;
	HX_STACK_LINE(1199)
	{
		HX_STACK_LINE(1201)
		::EReg tmp5 = ::openfl::text::TextField_obj::__regexBreakTag;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1201)
		::String tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1201)
		::String tmp7 = tmp5->replace(tmp6,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1201)
		value = tmp7;
		HX_STACK_LINE(1202)
		::EReg tmp8 = ::openfl::text::TextField_obj::__regexEntities->__get((int)0).StaticCast< ::EReg >();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1202)
		::String tmp9 = value;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1202)
		::String tmp10 = tmp8->replace(tmp9,HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1202)
		value = tmp10;
		HX_STACK_LINE(1203)
		::EReg tmp11 = ::openfl::text::TextField_obj::__regexEntities->__get((int)1).StaticCast< ::EReg >();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1203)
		::String tmp12 = value;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1203)
		::String tmp13 = tmp11->replace(tmp12,HX_HCSTRING("'","\x27","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1203)
		value = tmp13;
		HX_STACK_LINE(1204)
		::EReg tmp14 = ::openfl::text::TextField_obj::__regexEntities->__get((int)2).StaticCast< ::EReg >();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1204)
		::String tmp15 = value;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1204)
		::String tmp16 = tmp14->replace(tmp15,HX_HCSTRING("&","\x26","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1204)
		value = tmp16;
		HX_STACK_LINE(1208)
		Array< ::String > segments = value.split(HX_HCSTRING("<","\x3c","\x00","\x00","\x00"));		HX_STACK_VAR(segments,"segments");
		HX_STACK_LINE(1210)
		bool tmp17 = (segments->length == (int)1);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1210)
		if ((tmp17)){
			HX_STACK_LINE(1212)
			::EReg tmp18 = ::openfl::text::TextField_obj::__regexHTMLTag;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1212)
			::String tmp19 = value;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1212)
			::String tmp20 = tmp18->replace(tmp19,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1212)
			value = tmp20;
			HX_STACK_LINE(1214)
			::openfl::_internal::text::TextEngine tmp21 = this->__textEngine;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1214)
			int tmp22 = tmp21->textFormatRanges->length;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1214)
			bool tmp23 = (tmp22 > (int)1);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1214)
			if ((tmp23)){
				HX_STACK_LINE(1216)
				::openfl::_internal::text::TextEngine tmp24 = this->__textEngine;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1216)
				::openfl::_internal::text::TextEngine tmp25 = this->__textEngine;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1216)
				int tmp26 = tmp25->textFormatRanges->length;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1216)
				int tmp27 = (tmp26 - (int)1);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1216)
				tmp24->textFormatRanges->splice((int)1,tmp27);
			}
			HX_STACK_LINE(1220)
			::EReg tmp24 = ::openfl::text::TextField_obj::__regexEntities->__get((int)3).StaticCast< ::EReg >();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1220)
			::String tmp25 = value;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1220)
			::String tmp26 = tmp24->replace(tmp25,HX_HCSTRING("<","\x3c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1220)
			value = tmp26;
			HX_STACK_LINE(1221)
			::EReg tmp27 = ::openfl::text::TextField_obj::__regexEntities->__get((int)4).StaticCast< ::EReg >();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1221)
			::String tmp28 = value;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1221)
			::String tmp29 = tmp27->replace(tmp28,HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1221)
			value = tmp29;
			HX_STACK_LINE(1223)
			::openfl::_internal::text::TextEngine tmp30 = this->__textEngine;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1223)
			::openfl::_internal::text::TextFormatRange tmp31 = tmp30->textFormatRanges->__get((int)0).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1223)
			::openfl::_internal::text::TextFormatRange range = tmp31;		HX_STACK_VAR(range,"range");
			HX_STACK_LINE(1224)
			::openfl::text::TextFormat tmp32 = this->__textFormat;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1224)
			range->format = tmp32;
			HX_STACK_LINE(1225)
			range->start = (int)0;
			HX_STACK_LINE(1226)
			range->end = value.length;
			HX_STACK_LINE(1228)
			::String tmp33 = value;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1228)
			this->__updateText(tmp33);
			HX_STACK_LINE(1230)
			::String tmp34 = value;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1230)
			return tmp34;
		}
		else{
			HX_STACK_LINE(1234)
			::openfl::_internal::text::TextEngine tmp18 = this->__textEngine;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1234)
			::openfl::_internal::text::TextEngine tmp19 = this->__textEngine;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1234)
			int tmp20 = tmp19->textFormatRanges->length;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1234)
			tmp18->textFormatRanges->splice((int)0,tmp20);
			HX_STACK_LINE(1236)
			value = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			HX_STACK_LINE(1237)
			::String segment;		HX_STACK_VAR(segment,"segment");
			HX_STACK_LINE(1239)
			{
				HX_STACK_LINE(1239)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1239)
				int _g = segments->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1239)
				while((true)){
					HX_STACK_LINE(1239)
					bool tmp21 = (_g1 < _g);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1239)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1239)
					if ((tmp22)){
						HX_STACK_LINE(1239)
						break;
					}
					HX_STACK_LINE(1239)
					int tmp23 = (_g1)++;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1239)
					int i = tmp23;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1241)
					::String tmp24 = segments->__get(i);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1241)
					segment = tmp24;
					HX_STACK_LINE(1242)
					::EReg tmp25 = ::openfl::text::TextField_obj::__regexEntities->__get((int)3).StaticCast< ::EReg >();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1242)
					::String tmp26 = segment;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1242)
					::String tmp27 = tmp25->replace(tmp26,HX_HCSTRING("<","\x3c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1242)
					segment = tmp27;
					HX_STACK_LINE(1243)
					::EReg tmp28 = ::openfl::text::TextField_obj::__regexEntities->__get((int)4).StaticCast< ::EReg >();		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1243)
					::String tmp29 = segment;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1243)
					::String tmp30 = tmp28->replace(tmp29,HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1243)
					segment = tmp30;
					HX_STACK_LINE(1244)
					::String tmp31 = segment;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1244)
					segments[i] = tmp31;
				}
			}
			HX_STACK_LINE(1248)
			::openfl::text::TextFormat tmp21 = this->__textFormat;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1248)
			::openfl::text::TextFormat tmp22 = tmp21->clone();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1248)
			Array< ::Dynamic > formatStack = Array_obj< ::Dynamic >::__new().Add(tmp22);		HX_STACK_VAR(formatStack,"formatStack");
			HX_STACK_LINE(1249)
			::String sub;		HX_STACK_VAR(sub,"sub");
			HX_STACK_LINE(1250)
			bool noLineBreak = false;		HX_STACK_VAR(noLineBreak,"noLineBreak");
			HX_STACK_LINE(1252)
			{
				HX_STACK_LINE(1252)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1252)
				while((true)){
					HX_STACK_LINE(1252)
					bool tmp23 = (_g < segments->length);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1252)
					bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1252)
					if ((tmp24)){
						HX_STACK_LINE(1252)
						break;
					}
					HX_STACK_LINE(1252)
					::String tmp25 = segments->__get(_g);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1252)
					::String segment1 = tmp25;		HX_STACK_VAR(segment1,"segment1");
					HX_STACK_LINE(1252)
					++(_g);
					HX_STACK_LINE(1254)
					bool tmp26 = (segment1 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1254)
					if ((tmp26)){
						HX_STACK_LINE(1254)
						continue;
					}
					HX_STACK_LINE(1256)
					::String tmp27 = segment1.substr((int)0,(int)1);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1256)
					bool tmp28 = (tmp27 == HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1256)
					bool isClosingTag = tmp28;		HX_STACK_VAR(isClosingTag,"isClosingTag");
					HX_STACK_LINE(1257)
					int tmp29 = segment1.indexOf(HX_HCSTRING(">","\x3e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1257)
					int tagEndIndex = tmp29;		HX_STACK_VAR(tagEndIndex,"tagEndIndex");
					HX_STACK_LINE(1258)
					int tmp30 = (tagEndIndex + (int)1);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1258)
					int start = tmp30;		HX_STACK_VAR(start,"start");
					HX_STACK_LINE(1259)
					int tmp31 = segment1.indexOf(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1259)
					int spaceIndex = tmp31;		HX_STACK_VAR(spaceIndex,"spaceIndex");
					HX_STACK_LINE(1260)
					bool tmp32 = isClosingTag;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1260)
					int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1260)
					if ((tmp32)){
						HX_STACK_LINE(1260)
						tmp33 = (int)1;
					}
					else{
						HX_STACK_LINE(1260)
						tmp33 = (int)0;
					}
					HX_STACK_LINE(1260)
					int tmp34 = spaceIndex;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1260)
					int tmp35 = (int)-1;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1260)
					bool tmp36 = (tmp34 > tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1260)
					bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1260)
					if ((tmp36)){
						HX_STACK_LINE(1260)
						tmp37 = (spaceIndex < tagEndIndex);
					}
					else{
						HX_STACK_LINE(1260)
						tmp37 = false;
					}
					HX_STACK_LINE(1260)
					Dynamic tmp38;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1260)
					if ((tmp37)){
						HX_STACK_LINE(1260)
						tmp38 = spaceIndex;
					}
					else{
						HX_STACK_LINE(1260)
						tmp38 = tagEndIndex;
					}
					HX_STACK_LINE(1260)
					::String tmp39 = segment1.substring(tmp33,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(1260)
					::String tagName = tmp39;		HX_STACK_VAR(tagName,"tagName");
					HX_STACK_LINE(1261)
					::openfl::text::TextFormat format;		HX_STACK_VAR(format,"format");
					HX_STACK_LINE(1263)
					bool tmp40 = isClosingTag;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(1263)
					if ((tmp40)){
						HX_STACK_LINE(1265)
						formatStack->pop().StaticCast< ::openfl::text::TextFormat >();
						HX_STACK_LINE(1266)
						int tmp41 = (formatStack->length - (int)1);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1266)
						::openfl::text::TextFormat tmp42 = formatStack->__get(tmp41).StaticCast< ::openfl::text::TextFormat >();		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(1266)
						::openfl::text::TextFormat tmp43 = tmp42->clone();		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(1266)
						format = tmp43;
						HX_STACK_LINE(1268)
						::String tmp44 = tagName.toLowerCase();		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(1268)
						bool tmp45 = (tmp44 == HX_HCSTRING("p","\x70","\x00","\x00","\x00"));		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(1268)
						bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(1268)
						if ((tmp45)){
							HX_STACK_LINE(1268)
							::openfl::_internal::text::TextEngine tmp47 = this->__textEngine;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1268)
							::openfl::_internal::text::TextEngine tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1268)
							int tmp49 = tmp48->textFormatRanges->length;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1268)
							int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1268)
							tmp46 = (tmp50 > (int)0);
						}
						else{
							HX_STACK_LINE(1268)
							tmp46 = false;
						}
						HX_STACK_LINE(1268)
						if ((tmp46)){
							HX_STACK_LINE(1270)
							hx::AddEq(value,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
							HX_STACK_LINE(1271)
							noLineBreak = true;
						}
						HX_STACK_LINE(1275)
						bool tmp47 = (start < segment1.length);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(1275)
						if ((tmp47)){
							HX_STACK_LINE(1277)
							int tmp48 = start;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1277)
							::String tmp49 = segment1.substr(tmp48,null());		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1277)
							sub = tmp49;
							HX_STACK_LINE(1278)
							::openfl::_internal::text::TextEngine tmp50 = this->__textEngine;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1278)
							::openfl::text::TextFormat tmp51 = format;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1278)
							int tmp52 = value.length;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1278)
							int tmp53 = (value.length + sub.length);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1278)
							::openfl::_internal::text::TextFormatRange tmp54 = ::openfl::_internal::text::TextFormatRange_obj::__new(tmp51,tmp52,tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1278)
							tmp50->textFormatRanges->push(tmp54);
							HX_STACK_LINE(1279)
							hx::AddEq(value,sub);
							HX_STACK_LINE(1280)
							noLineBreak = false;
						}
					}
					else{
						HX_STACK_LINE(1286)
						int tmp41 = (formatStack->length - (int)1);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1286)
						::openfl::text::TextFormat tmp42 = formatStack->__get(tmp41).StaticCast< ::openfl::text::TextFormat >();		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(1286)
						::openfl::text::TextFormat tmp43 = tmp42->clone();		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(1286)
						format = tmp43;
						HX_STACK_LINE(1288)
						bool tmp44 = (tagEndIndex > (int)-1);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(1288)
						if ((tmp44)){
							HX_STACK_LINE(1290)
							{
								HX_STACK_LINE(1290)
								::String tmp45 = tagName.toLowerCase();		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(1290)
								::String _g1 = tmp45;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(1290)
								::String tmp46 = _g1;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(1290)
								::String _switch_1 = (tmp46);
								if (  ( _switch_1==HX_HCSTRING("p","\x70","\x00","\x00","\x00"))){
									HX_STACK_LINE(1294)
									::openfl::_internal::text::TextEngine tmp47 = this->__textEngine;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(1294)
									int tmp48 = tmp47->textFormatRanges->length;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(1294)
									bool tmp49 = (tmp48 > (int)0);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(1294)
									bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(1294)
									if ((tmp49)){
										HX_STACK_LINE(1294)
										bool tmp51 = noLineBreak;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(1294)
										bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(1294)
										tmp50 = !(tmp52);
									}
									else{
										HX_STACK_LINE(1294)
										tmp50 = false;
									}
									HX_STACK_LINE(1294)
									if ((tmp50)){
										HX_STACK_LINE(1296)
										hx::AddEq(value,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
									}
									HX_STACK_LINE(1300)
									::EReg tmp51 = ::openfl::text::TextField_obj::__regexAlign;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(1300)
									::String tmp52 = segment1;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(1300)
									bool tmp53 = tmp51->match(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(1300)
									if ((tmp53)){
										HX_STACK_LINE(1302)
										::EReg tmp54 = ::openfl::text::TextField_obj::__regexAlign;		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(1302)
										::String tmp55 = this->__getAttributeMatch(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(1302)
										::String tmp56 = tmp55.toLowerCase();		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(1302)
										Dynamic tmp57 = ::openfl::text::_TextFormatAlign::TextFormatAlign_Impl__obj::fromString(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(1302)
										format->align = tmp57;
									}
								}
								else if (  ( _switch_1==HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"))){
									HX_STACK_LINE(1308)
									::EReg tmp47 = ::openfl::text::TextField_obj::__regexFace;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(1308)
									::String tmp48 = segment1;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(1308)
									bool tmp49 = tmp47->match(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(1308)
									if ((tmp49)){
										HX_STACK_LINE(1310)
										::EReg tmp50 = ::openfl::text::TextField_obj::__regexFace;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(1310)
										::String tmp51 = this->__getAttributeMatch(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(1310)
										format->font = tmp51;
									}
									HX_STACK_LINE(1314)
									::EReg tmp50 = ::openfl::text::TextField_obj::__regexColor;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(1314)
									::String tmp51 = segment1;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(1314)
									bool tmp52 = tmp50->match(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(1314)
									if ((tmp52)){
										HX_STACK_LINE(1316)
										::EReg tmp53 = ::openfl::text::TextField_obj::__regexColor;		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(1316)
										::String tmp54 = this->__getAttributeMatch(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(1316)
										::String tmp55 = (HX_HCSTRING("0x","\x48","\x2a","\x00","\x00") + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(1316)
										Dynamic tmp56 = ::Std_obj::parseInt(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(1316)
										format->color = tmp56;
									}
									HX_STACK_LINE(1320)
									::EReg tmp53 = ::openfl::text::TextField_obj::__regexSize;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(1320)
									::String tmp54 = segment1;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(1320)
									bool tmp55 = tmp53->match(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(1320)
									if ((tmp55)){
										HX_STACK_LINE(1322)
										::EReg tmp56 = ::openfl::text::TextField_obj::__regexSize;		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(1322)
										::String tmp57 = this->__getAttributeMatch(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(1322)
										Dynamic tmp58 = ::Std_obj::parseInt(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(1322)
										format->size = tmp58;
									}
								}
								else if (  ( _switch_1==HX_HCSTRING("b","\x62","\x00","\x00","\x00"))){
									HX_STACK_LINE(1328)
									format->bold = true;
								}
								else if (  ( _switch_1==HX_HCSTRING("u","\x75","\x00","\x00","\x00"))){
									HX_STACK_LINE(1332)
									format->underline = true;
								}
								else if (  ( _switch_1==HX_HCSTRING("i","\x69","\x00","\x00","\x00")) ||  ( _switch_1==HX_HCSTRING("em","\x68","\x58","\x00","\x00"))){
									HX_STACK_LINE(1336)
									format->italic = true;
								}
								else if (  ( _switch_1==HX_HCSTRING("textformat","\xa4","\x9b","\xea","\xff"))){
									HX_STACK_LINE(1340)
									::EReg tmp47 = ::openfl::text::TextField_obj::__regexBlockIndent;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(1340)
									::String tmp48 = segment1;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(1340)
									bool tmp49 = tmp47->match(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(1340)
									if ((tmp49)){
										HX_STACK_LINE(1342)
										::EReg tmp50 = ::openfl::text::TextField_obj::__regexBlockIndent;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(1342)
										::String tmp51 = this->__getAttributeMatch(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(1342)
										Dynamic tmp52 = ::Std_obj::parseInt(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(1342)
										format->blockIndent = tmp52;
									}
									HX_STACK_LINE(1346)
									::EReg tmp50 = ::openfl::text::TextField_obj::__regexIndent;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(1346)
									::String tmp51 = segment1;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(1346)
									bool tmp52 = tmp50->match(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(1346)
									if ((tmp52)){
										HX_STACK_LINE(1348)
										::EReg tmp53 = ::openfl::text::TextField_obj::__regexIndent;		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(1348)
										::String tmp54 = this->__getAttributeMatch(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(1348)
										Dynamic tmp55 = ::Std_obj::parseInt(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(1348)
										format->indent = tmp55;
									}
									HX_STACK_LINE(1352)
									::EReg tmp53 = ::openfl::text::TextField_obj::__regexLeading;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(1352)
									::String tmp54 = segment1;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(1352)
									bool tmp55 = tmp53->match(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(1352)
									if ((tmp55)){
										HX_STACK_LINE(1354)
										::EReg tmp56 = ::openfl::text::TextField_obj::__regexLeading;		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(1354)
										::String tmp57 = this->__getAttributeMatch(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(1354)
										Dynamic tmp58 = ::Std_obj::parseInt(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(1354)
										format->leading = tmp58;
									}
									HX_STACK_LINE(1358)
									::EReg tmp56 = ::openfl::text::TextField_obj::__regexLeftMargin;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(1358)
									::String tmp57 = segment1;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(1358)
									bool tmp58 = tmp56->match(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(1358)
									if ((tmp58)){
										HX_STACK_LINE(1360)
										::EReg tmp59 = ::openfl::text::TextField_obj::__regexLeftMargin;		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(1360)
										::String tmp60 = this->__getAttributeMatch(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(1360)
										Dynamic tmp61 = ::Std_obj::parseInt(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(1360)
										format->leftMargin = tmp61;
									}
									HX_STACK_LINE(1364)
									::EReg tmp59 = ::openfl::text::TextField_obj::__regexRightMargin;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(1364)
									::String tmp60 = segment1;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(1364)
									bool tmp61 = tmp59->match(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(1364)
									if ((tmp61)){
										HX_STACK_LINE(1366)
										::EReg tmp62 = ::openfl::text::TextField_obj::__regexRightMargin;		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(1366)
										::String tmp63 = this->__getAttributeMatch(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(1366)
										Dynamic tmp64 = ::Std_obj::parseInt(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(1366)
										format->rightMargin = tmp64;
									}
									HX_STACK_LINE(1370)
									::EReg tmp62 = ::openfl::text::TextField_obj::__regexTabStops;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(1370)
									::String tmp63 = segment1;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(1370)
									bool tmp64 = tmp62->match(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(1370)
									if ((tmp64)){
										HX_STACK_LINE(1372)
										::EReg tmp65 = ::openfl::text::TextField_obj::__regexTabStops;		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(1372)
										::String tmp66 = this->__getAttributeMatch(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(1372)
										Array< ::String > values = tmp66.split(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(values,"values");
										HX_STACK_LINE(1373)
										Array< ::Dynamic > tabStops = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tabStops,"tabStops");
										HX_STACK_LINE(1375)
										{
											HX_STACK_LINE(1375)
											int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(1375)
											while((true)){
												HX_STACK_LINE(1375)
												bool tmp67 = (_g2 < values->length);		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(1375)
												bool tmp68 = !(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(1375)
												if ((tmp68)){
													HX_STACK_LINE(1375)
													break;
												}
												HX_STACK_LINE(1375)
												::String tmp69 = values->__get(_g2);		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(1375)
												::String stop = tmp69;		HX_STACK_VAR(stop,"stop");
												HX_STACK_LINE(1375)
												++(_g2);
												HX_STACK_LINE(1377)
												::String tmp70 = stop;		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(1377)
												Dynamic tmp71 = ::Std_obj::parseInt(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
												HX_STACK_LINE(1377)
												tabStops->push(tmp71);
											}
										}
										HX_STACK_LINE(1381)
										format->tabStops = tabStops;
									}
								}
							}
							HX_STACK_LINE(1387)
							::openfl::text::TextFormat tmp45 = format;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1387)
							formatStack->push(tmp45);
							HX_STACK_LINE(1389)
							bool tmp46 = (start < segment1.length);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1389)
							if ((tmp46)){
								HX_STACK_LINE(1391)
								int tmp47 = start;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(1391)
								::String tmp48 = segment1.substring(tmp47,null());		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(1391)
								sub = tmp48;
								HX_STACK_LINE(1392)
								::openfl::_internal::text::TextEngine tmp49 = this->__textEngine;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(1392)
								::openfl::text::TextFormat tmp50 = format;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(1392)
								int tmp51 = value.length;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(1392)
								int tmp52 = (value.length + sub.length);		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(1392)
								::openfl::_internal::text::TextFormatRange tmp53 = ::openfl::_internal::text::TextFormatRange_obj::__new(tmp50,tmp51,tmp52);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(1392)
								tmp49->textFormatRanges->push(tmp53);
								HX_STACK_LINE(1393)
								hx::AddEq(value,sub);
								HX_STACK_LINE(1394)
								noLineBreak = false;
							}
						}
						else{
							HX_STACK_LINE(1400)
							::openfl::_internal::text::TextEngine tmp45 = this->__textEngine;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1400)
							::openfl::text::TextFormat tmp46 = format;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1400)
							int tmp47 = value.length;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1400)
							int tmp48 = (value.length + segment1.length);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1400)
							::openfl::_internal::text::TextFormatRange tmp49 = ::openfl::_internal::text::TextFormatRange_obj::__new(tmp46,tmp47,tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1400)
							tmp45->textFormatRanges->push(tmp49);
							HX_STACK_LINE(1401)
							hx::AddEq(value,segment1);
							HX_STACK_LINE(1402)
							noLineBreak = false;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(1414)
	::String tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1414)
	this->__updateText(tmp5);
	HX_STACK_LINE(1416)
	::String tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1416)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_htmlText,return )

int TextField_obj::get_length( ){
	HX_STACK_FRAME("openfl.text.TextField","get_length",0xdece21d3,"openfl.text.TextField.get_length","openfl/text/TextField.hx",1421,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1423)
	::String tmp = this->__text;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1423)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1423)
	if ((tmp1)){
		HX_STACK_LINE(1425)
		::String tmp2 = this->__text;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1425)
		int tmp3 = tmp2.length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1425)
		return tmp3;
	}
	HX_STACK_LINE(1429)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_length,return )

int TextField_obj::get_maxChars( ){
	HX_STACK_FRAME("openfl.text.TextField","get_maxChars",0x980651c6,"openfl.text.TextField.get_maxChars","openfl/text/TextField.hx",1434,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1436)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1436)
	int tmp1 = tmp->maxChars;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1436)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxChars,return )

int TextField_obj::set_maxChars( int value){
	HX_STACK_FRAME("openfl.text.TextField","set_maxChars",0xacff753a,"openfl.text.TextField.set_maxChars","openfl/text/TextField.hx",1441,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1443)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1443)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1443)
	int tmp2 = tmp1->maxChars;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1443)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1443)
	if ((tmp3)){
		HX_STACK_LINE(1445)
		this->__dirty = true;
		HX_STACK_LINE(1446)
		this->__layoutDirty = true;
	}
	HX_STACK_LINE(1450)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1450)
	int tmp5 = tmp4->maxChars = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1450)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_maxChars,return )

int TextField_obj::get_maxScrollH( ){
	HX_STACK_FRAME("openfl.text.TextField","get_maxScrollH",0xc4f0b4c4,"openfl.text.TextField.get_maxScrollH","openfl/text/TextField.hx",1455,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1457)
	this->__updateLayout();
	HX_STACK_LINE(1459)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1459)
	int tmp1 = tmp->maxScrollH;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1459)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxScrollH,return )

int TextField_obj::get_maxScrollV( ){
	HX_STACK_FRAME("openfl.text.TextField","get_maxScrollV",0xc4f0b4d2,"openfl.text.TextField.get_maxScrollV","openfl/text/TextField.hx",1464,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1466)
	this->__updateLayout();
	HX_STACK_LINE(1468)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1468)
	int tmp1 = tmp->maxScrollV;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1468)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxScrollV,return )

bool TextField_obj::get_mouseWheelEnabled( ){
	HX_STACK_FRAME("openfl.text.TextField","get_mouseWheelEnabled",0xdd79871e,"openfl.text.TextField.get_mouseWheelEnabled","openfl/text/TextField.hx",1473,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1475)
	bool tmp = this->__mouseWheelEnabled;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1475)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_mouseWheelEnabled,return )

bool TextField_obj::set_mouseWheelEnabled( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_mouseWheelEnabled",0x3182552a,"openfl.text.TextField.set_mouseWheelEnabled","openfl/text/TextField.hx",1480,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1482)
	bool tmp = this->__mouseWheelEnabled = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1482)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_mouseWheelEnabled,return )

bool TextField_obj::get_multiline( ){
	HX_STACK_FRAME("openfl.text.TextField","get_multiline",0x24925820,"openfl.text.TextField.get_multiline","openfl/text/TextField.hx",1487,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1489)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1489)
	bool tmp1 = tmp->multiline;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1489)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_multiline,return )

bool TextField_obj::set_multiline( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_multiline",0x69983a2c,"openfl.text.TextField.set_multiline","openfl/text/TextField.hx",1494,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1496)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1496)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1496)
	bool tmp2 = tmp1->multiline;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1496)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1496)
	if ((tmp3)){
		HX_STACK_LINE(1498)
		this->__dirty = true;
		HX_STACK_LINE(1499)
		this->__layoutDirty = true;
	}
	HX_STACK_LINE(1503)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1503)
	bool tmp5 = tmp4->multiline = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1503)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_multiline,return )

int TextField_obj::get_numLines( ){
	HX_STACK_FRAME("openfl.text.TextField","get_numLines",0xda475406,"openfl.text.TextField.get_numLines","openfl/text/TextField.hx",1508,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1510)
	this->__updateLayout();
	HX_STACK_LINE(1512)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1512)
	int tmp1 = tmp->numLines;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1512)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_numLines,return )

::String TextField_obj::get_restrict( ){
	HX_STACK_FRAME("openfl.text.TextField","get_restrict",0x99d42d69,"openfl.text.TextField.get_restrict","openfl/text/TextField.hx",1517,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1519)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1519)
	::String tmp1 = tmp->restrict;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1519)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_restrict,return )

::String TextField_obj::set_restrict( ::String value){
	HX_STACK_FRAME("openfl.text.TextField","set_restrict",0xaecd50dd,"openfl.text.TextField.set_restrict","openfl/text/TextField.hx",1524,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1526)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1526)
	::String tmp1 = tmp->restrict = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1526)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_restrict,return )

int TextField_obj::get_scrollH( ){
	HX_STACK_FRAME("openfl.text.TextField","get_scrollH",0xbeccf60e,"openfl.text.TextField.get_scrollH","openfl/text/TextField.hx",1531,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1533)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1533)
	int tmp1 = tmp->scrollH;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1533)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_scrollH,return )

int TextField_obj::set_scrollH( int value){
	HX_STACK_FRAME("openfl.text.TextField","set_scrollH",0xc939fd1a,"openfl.text.TextField.set_scrollH","openfl/text/TextField.hx",1538,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1540)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1540)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1540)
	int tmp2 = tmp1->maxScrollH;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1540)
	bool tmp3 = (tmp > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1540)
	if ((tmp3)){
		HX_STACK_LINE(1540)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1540)
		value = tmp4->maxScrollH;
	}
	HX_STACK_LINE(1541)
	bool tmp4 = (value < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1541)
	if ((tmp4)){
		HX_STACK_LINE(1541)
		value = (int)0;
	}
	HX_STACK_LINE(1543)
	int tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1543)
	::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1543)
	int tmp7 = tmp6->scrollH;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1543)
	bool tmp8 = (tmp5 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1543)
	if ((tmp8)){
		HX_STACK_LINE(1545)
		this->__dirty = true;
	}
	HX_STACK_LINE(1549)
	::openfl::_internal::text::TextEngine tmp9 = this->__textEngine;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1549)
	int tmp10 = tmp9->scrollH = value;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1549)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_scrollH,return )

int TextField_obj::get_scrollV( ){
	HX_STACK_FRAME("openfl.text.TextField","get_scrollV",0xbeccf61c,"openfl.text.TextField.get_scrollV","openfl/text/TextField.hx",1554,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1556)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1556)
	int tmp1 = tmp->scrollV;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1556)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_scrollV,return )

int TextField_obj::set_scrollV( int value){
	HX_STACK_FRAME("openfl.text.TextField","set_scrollV",0xc939fd28,"openfl.text.TextField.set_scrollV","openfl/text/TextField.hx",1561,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1563)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1563)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1563)
	int tmp2 = tmp1->maxScrollV;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1563)
	bool tmp3 = (tmp > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1563)
	if ((tmp3)){
		HX_STACK_LINE(1563)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1563)
		value = tmp4->maxScrollV;
	}
	HX_STACK_LINE(1564)
	bool tmp4 = (value < (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1564)
	if ((tmp4)){
		HX_STACK_LINE(1564)
		value = (int)1;
	}
	HX_STACK_LINE(1566)
	int tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1566)
	::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1566)
	int tmp7 = tmp6->scrollV;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1566)
	bool tmp8 = (tmp5 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1566)
	if ((tmp8)){
		HX_STACK_LINE(1568)
		this->__dirty = true;
	}
	HX_STACK_LINE(1572)
	::openfl::_internal::text::TextEngine tmp9 = this->__textEngine;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1572)
	int tmp10 = tmp9->scrollV = value;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1572)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_scrollV,return )

bool TextField_obj::get_selectable( ){
	HX_STACK_FRAME("openfl.text.TextField","get_selectable",0xee1ebe03,"openfl.text.TextField.get_selectable","openfl/text/TextField.hx",1577,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1579)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1579)
	bool tmp1 = tmp->selectable;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1579)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_selectable,return )

bool TextField_obj::set_selectable( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_selectable",0x0e3ea677,"openfl.text.TextField.set_selectable","openfl/text/TextField.hx",1584,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1586)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1586)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1586)
	bool tmp2 = tmp1->selectable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1586)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1586)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1586)
	if ((tmp3)){
		HX_STACK_LINE(1586)
		Dynamic tmp5 = this->get_type();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1586)
		Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1586)
		tmp4 = (tmp6 == ((Dynamic)((int)1)));
	}
	else{
		HX_STACK_LINE(1586)
		tmp4 = false;
	}
	HX_STACK_LINE(1586)
	if ((tmp4)){
		HX_STACK_LINE(1588)
		::openfl::display::Stage tmp5 = this->stage;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1588)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1588)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1588)
		if ((tmp6)){
			HX_STACK_LINE(1588)
			::openfl::display::Stage tmp8 = this->stage;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1588)
			::openfl::display::Stage tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1588)
			::openfl::display::InteractiveObject tmp10 = tmp9->get_focus();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1588)
			::openfl::display::InteractiveObject tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1588)
			tmp7 = (tmp11 == hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(1588)
			tmp7 = false;
		}
		HX_STACK_LINE(1588)
		if ((tmp7)){
			HX_STACK_LINE(1590)
			this->__startTextInput();
		}
		else{
			HX_STACK_LINE(1592)
			bool tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1592)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1592)
			if ((tmp9)){
				HX_STACK_LINE(1594)
				this->__stopTextInput();
			}
		}
	}
	HX_STACK_LINE(1600)
	::openfl::_internal::text::TextEngine tmp5 = this->__textEngine;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1600)
	bool tmp6 = tmp5->selectable = value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1600)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_selectable,return )

int TextField_obj::get_selectionBeginIndex( ){
	HX_STACK_FRAME("openfl.text.TextField","get_selectionBeginIndex",0xb79fa288,"openfl.text.TextField.get_selectionBeginIndex","openfl/text/TextField.hx",1605,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1607)
	int tmp = this->__caretIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1607)
	int tmp1 = this->__selectionIndex;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1607)
	Float tmp2 = ::Math_obj::min(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1607)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1607)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_selectionBeginIndex,return )

int TextField_obj::get_selectionEndIndex( ){
	HX_STACK_FRAME("openfl.text.TextField","get_selectionEndIndex",0xc3677dd6,"openfl.text.TextField.get_selectionEndIndex","openfl/text/TextField.hx",1612,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1614)
	int tmp = this->__caretIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1614)
	int tmp1 = this->__selectionIndex;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1614)
	Float tmp2 = ::Math_obj::max(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1614)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1614)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_selectionEndIndex,return )

Float TextField_obj::get_sharpness( ){
	HX_STACK_FRAME("openfl.text.TextField","get_sharpness",0xa1a5a7b4,"openfl.text.TextField.get_sharpness","openfl/text/TextField.hx",1619,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1621)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1621)
	Float tmp1 = tmp->sharpness;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1621)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_sharpness,return )

Float TextField_obj::set_sharpness( Float value){
	HX_STACK_FRAME("openfl.text.TextField","set_sharpness",0xe6ab89c0,"openfl.text.TextField.set_sharpness","openfl/text/TextField.hx",1626,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1628)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1628)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1628)
	Float tmp2 = tmp1->sharpness;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1628)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1628)
	if ((tmp3)){
		HX_STACK_LINE(1630)
		this->__dirty = true;
	}
	HX_STACK_LINE(1634)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1634)
	Float tmp5 = tmp4->sharpness = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1634)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_sharpness,return )

::String TextField_obj::get_text( ){
	HX_STACK_FRAME("openfl.text.TextField","get_text",0x3b0d545a,"openfl.text.TextField.get_text","openfl/text/TextField.hx",1639,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1641)
	::String tmp = this->__text;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1641)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_text,return )

::String TextField_obj::set_text( ::String value){
	HX_STACK_FRAME("openfl.text.TextField","set_text",0xe96aadce,"openfl.text.TextField.set_text","openfl/text/TextField.hx",1646,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1648)
	bool tmp = this->__isHTML;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1648)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1648)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1648)
	if ((tmp1)){
		HX_STACK_LINE(1648)
		::String tmp3 = this->__text;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1648)
		::String tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1648)
		::String tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1648)
		tmp2 = (tmp4 != tmp5);
	}
	else{
		HX_STACK_LINE(1648)
		tmp2 = true;
	}
	HX_STACK_LINE(1648)
	if ((tmp2)){
		HX_STACK_LINE(1650)
		this->__dirty = true;
		HX_STACK_LINE(1651)
		this->__layoutDirty = true;
	}
	else{
		HX_STACK_LINE(1655)
		::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1655)
		return tmp3;
	}
	HX_STACK_LINE(1659)
	::openfl::_internal::text::TextEngine tmp3 = this->__textEngine;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1659)
	int tmp4 = tmp3->textFormatRanges->length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1659)
	bool tmp5 = (tmp4 > (int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1659)
	if ((tmp5)){
		HX_STACK_LINE(1661)
		::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1661)
		::openfl::_internal::text::TextEngine tmp7 = this->__textEngine;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1661)
		int tmp8 = tmp7->textFormatRanges->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1661)
		int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1661)
		tmp6->textFormatRanges->splice((int)1,tmp9);
	}
	HX_STACK_LINE(1665)
	::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1665)
	::openfl::_internal::text::TextFormatRange tmp7 = tmp6->textFormatRanges->__get((int)0).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1665)
	::openfl::_internal::text::TextFormatRange range = tmp7;		HX_STACK_VAR(range,"range");
	HX_STACK_LINE(1666)
	::openfl::text::TextFormat tmp8 = this->__textFormat;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1666)
	range->format = tmp8;
	HX_STACK_LINE(1667)
	range->start = (int)0;
	HX_STACK_LINE(1668)
	range->end = value.length;
	HX_STACK_LINE(1670)
	this->__isHTML = false;
	HX_STACK_LINE(1672)
	::String tmp9 = value;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1672)
	this->__updateText(tmp9);
	HX_STACK_LINE(1674)
	::String tmp10 = value;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1674)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_text,return )

int TextField_obj::get_textColor( ){
	HX_STACK_FRAME("openfl.text.TextField","get_textColor",0x69ca86a9,"openfl.text.TextField.get_textColor","openfl/text/TextField.hx",1679,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1681)
	::openfl::text::TextFormat tmp = this->__textFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1681)
	Dynamic tmp1 = tmp->color;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1681)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textColor,return )

int TextField_obj::set_textColor( int value){
	HX_STACK_FRAME("openfl.text.TextField","set_textColor",0xaed068b5,"openfl.text.TextField.set_textColor","openfl/text/TextField.hx",1686,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1688)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1688)
	::openfl::text::TextFormat tmp1 = this->__textFormat;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1688)
	Dynamic tmp2 = tmp1->color;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1688)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1688)
	if ((tmp3)){
		HX_STACK_LINE(1688)
		this->__dirty = true;
	}
	HX_STACK_LINE(1690)
	{
		HX_STACK_LINE(1690)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1690)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1690)
		Array< ::Dynamic > _g1 = tmp4->textFormatRanges;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1690)
		while((true)){
			HX_STACK_LINE(1690)
			bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1690)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1690)
			if ((tmp6)){
				HX_STACK_LINE(1690)
				break;
			}
			HX_STACK_LINE(1690)
			::openfl::_internal::text::TextFormatRange tmp7 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1690)
			::openfl::_internal::text::TextFormatRange range = tmp7;		HX_STACK_VAR(range,"range");
			HX_STACK_LINE(1690)
			++(_g);
			HX_STACK_LINE(1692)
			range->format->color = value;
		}
	}
	HX_STACK_LINE(1696)
	::openfl::text::TextFormat tmp4 = this->__textFormat;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1696)
	Dynamic tmp5 = tmp4->color = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1696)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_textColor,return )

Float TextField_obj::get_textWidth( ){
	HX_STACK_FRAME("openfl.text.TextField","get_textWidth",0xe9d0cb4c,"openfl.text.TextField.get_textWidth","openfl/text/TextField.hx",1700,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1702)
	this->__updateLayout();
	HX_STACK_LINE(1703)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1703)
	Float tmp1 = tmp->textWidth;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1703)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textWidth,return )

Float TextField_obj::get_textHeight( ){
	HX_STACK_FRAME("openfl.text.TextField","get_textHeight",0x63308fe1,"openfl.text.TextField.get_textHeight","openfl/text/TextField.hx",1708,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1710)
	this->__updateLayout();
	HX_STACK_LINE(1711)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1711)
	Float tmp1 = tmp->textHeight;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1711)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textHeight,return )

Dynamic TextField_obj::get_type( ){
	HX_STACK_FRAME("openfl.text.TextField","get_type",0x3b1c7a67,"openfl.text.TextField.get_type","openfl/text/TextField.hx",1716,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1718)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1718)
	Dynamic tmp1 = tmp->type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1718)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_type,return )

Dynamic TextField_obj::set_type( Dynamic value){
	HX_STACK_FRAME("openfl.text.TextField","set_type",0xe979d3db,"openfl.text.TextField.set_type","openfl/text/TextField.hx",1723,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1725)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1725)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1725)
	Dynamic tmp2 = tmp1->type;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1725)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1725)
	if ((tmp3)){
		HX_STACK_LINE(1727)
		bool tmp4 = (value == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1727)
		if ((tmp4)){
			HX_STACK_LINE(1729)
			Dynamic tmp5 = this->this_onFocusIn_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1729)
			this->addEventListener(HX_HCSTRING("focusIn","\xdd","\x45","\x83","\x41"),tmp5,null(),null(),null());
			HX_STACK_LINE(1730)
			Dynamic tmp6 = this->this_onFocusOut_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1730)
			this->addEventListener(HX_HCSTRING("focusOut","\x96","\x6f","\x5e","\x11"),tmp6,null(),null(),null());
			HX_STACK_LINE(1731)
			Dynamic tmp7 = this->this_onAddedToStage_dyn();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1731)
			this->addEventListener(HX_HCSTRING("addedToStage","\x63","\x22","\x55","\x0c"),tmp7,null(),null(),null());
			HX_STACK_LINE(1733)
			this->this_onFocusIn(null());
		}
		else{
			HX_STACK_LINE(1737)
			Dynamic tmp5 = this->this_onFocusIn_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1737)
			this->removeEventListener(HX_HCSTRING("focusIn","\xdd","\x45","\x83","\x41"),tmp5,null());
			HX_STACK_LINE(1738)
			Dynamic tmp6 = this->this_onFocusOut_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1738)
			this->removeEventListener(HX_HCSTRING("focusOut","\x96","\x6f","\x5e","\x11"),tmp6,null());
			HX_STACK_LINE(1739)
			Dynamic tmp7 = this->this_onAddedToStage_dyn();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1739)
			this->removeEventListener(HX_HCSTRING("addedToStage","\x63","\x22","\x55","\x0c"),tmp7,null());
			HX_STACK_LINE(1741)
			this->__stopTextInput();
		}
		HX_STACK_LINE(1745)
		this->__dirty = true;
	}
	HX_STACK_LINE(1749)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1749)
	Dynamic tmp5 = tmp4->type = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1749)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_type,return )

Float TextField_obj::get_width( ){
	HX_STACK_FRAME("openfl.text.TextField","get_width",0x2d65e5b9,"openfl.text.TextField.get_width","openfl/text/TextField.hx",1754,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1756)
	this->__updateLayout();
	HX_STACK_LINE(1757)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1757)
	Float tmp1 = tmp->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1757)
	return tmp1;
}


Float TextField_obj::set_width( Float value){
	HX_STACK_FRAME("openfl.text.TextField","set_width",0x10b6d1c5,"openfl.text.TextField.set_width","openfl/text/TextField.hx",1762,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1764)
	Float tmp = this->get_scaleX();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1764)
	bool tmp1 = (tmp != (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1764)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1764)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1764)
	if ((tmp2)){
		HX_STACK_LINE(1764)
		::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1764)
		::openfl::_internal::text::TextEngine tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1764)
		Float tmp6 = tmp5->width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1764)
		Float tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1764)
		tmp3 = (tmp6 != tmp7);
	}
	else{
		HX_STACK_LINE(1764)
		tmp3 = true;
	}
	HX_STACK_LINE(1764)
	if ((tmp3)){
		HX_STACK_LINE(1766)
		{
			HX_STACK_LINE(1766)
			bool tmp4 = this->__transformDirty;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1766)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1766)
			if ((tmp5)){
				HX_STACK_LINE(1766)
				this->__transformDirty = true;
				HX_STACK_LINE(1766)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(1767)
		this->__dirty = true;
		HX_STACK_LINE(1768)
		this->__layoutDirty = true;
	}
	HX_STACK_LINE(1772)
	this->set_scaleX((int)1);
	HX_STACK_LINE(1773)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1773)
	Float tmp5 = tmp4->width = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1773)
	return tmp5;
}


bool TextField_obj::get_wordWrap( ){
	HX_STACK_FRAME("openfl.text.TextField","get_wordWrap",0xa91076e1,"openfl.text.TextField.get_wordWrap","openfl/text/TextField.hx",1778,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1780)
	::openfl::_internal::text::TextEngine tmp = this->__textEngine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1780)
	bool tmp1 = tmp->wordWrap;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1780)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_wordWrap,return )

bool TextField_obj::set_wordWrap( bool value){
	HX_STACK_FRAME("openfl.text.TextField","set_wordWrap",0xbe099a55,"openfl.text.TextField.set_wordWrap","openfl/text/TextField.hx",1785,0xccf02094)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1787)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1787)
	::openfl::_internal::text::TextEngine tmp1 = this->__textEngine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1787)
	bool tmp2 = tmp1->wordWrap;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1787)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1787)
	if ((tmp3)){
		HX_STACK_LINE(1789)
		this->__dirty = true;
		HX_STACK_LINE(1790)
		this->__layoutDirty = true;
	}
	HX_STACK_LINE(1794)
	::openfl::_internal::text::TextEngine tmp4 = this->__textEngine;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1794)
	bool tmp5 = tmp4->wordWrap = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1794)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_wordWrap,return )

Void TextField_obj::stage_onMouseMove( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("openfl.text.TextField","stage_onMouseMove",0x47084bd2,"openfl.text.TextField.stage_onMouseMove","openfl/text/TextField.hx",1806,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1808)
		::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1808)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1808)
		if ((tmp1)){
			HX_STACK_LINE(1808)
			return null();
		}
		HX_STACK_LINE(1810)
		::openfl::_internal::text::TextEngine tmp2 = this->__textEngine;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1810)
		bool tmp3 = tmp2->selectable;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1810)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1810)
		if ((tmp3)){
			HX_STACK_LINE(1810)
			int tmp5 = this->__selectionIndex;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1810)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1810)
			tmp4 = (tmp6 >= (int)0);
		}
		else{
			HX_STACK_LINE(1810)
			tmp4 = false;
		}
		HX_STACK_LINE(1810)
		if ((tmp4)){
			HX_STACK_LINE(1812)
			this->__updateLayout();
			HX_STACK_LINE(1814)
			Float tmp5 = this->get_mouseX();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1814)
			Float tmp6 = this->get_mouseY();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1814)
			int tmp7 = this->__getPosition(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1814)
			int position = tmp7;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(1816)
			int tmp8 = position;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1816)
			int tmp9 = this->__caretIndex;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1816)
			bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1816)
			if ((tmp10)){
				HX_STACK_LINE(1818)
				this->__caretIndex = position;
				HX_STACK_LINE(1819)
				this->__dirty = true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,stage_onMouseMove,(void))

Void TextField_obj::stage_onMouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("openfl.text.TextField","stage_onMouseUp",0x9bb86cdc,"openfl.text.TextField.stage_onMouseUp","openfl/text/TextField.hx",1828,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1830)
		::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1830)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1830)
		if ((tmp1)){
			HX_STACK_LINE(1830)
			return null();
		}
		HX_STACK_LINE(1832)
		::openfl::display::Stage tmp2 = this->stage;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1832)
		Dynamic tmp3 = this->stage_onMouseMove_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1832)
		tmp2->removeEventListener(HX_HCSTRING("mouseMove","\xd6","\x9b","\xb5","\xf4"),tmp3,null());
		HX_STACK_LINE(1833)
		::openfl::display::Stage tmp4 = this->stage;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1833)
		Dynamic tmp5 = this->stage_onMouseUp_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1833)
		tmp4->removeEventListener(HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0"),tmp5,null());
		HX_STACK_LINE(1835)
		::openfl::display::Stage tmp6 = this->stage;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1835)
		::openfl::display::InteractiveObject tmp7 = tmp6->get_focus();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1835)
		bool tmp8 = (tmp7 == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1835)
		if ((tmp8)){
			HX_STACK_LINE(1837)
			this->__getWorldTransform();
			HX_STACK_LINE(1838)
			this->__updateLayout();
			HX_STACK_LINE(1840)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1840)
			{
				HX_STACK_LINE(1840)
				::openfl::geom::Matrix tmp10 = this->__worldTransform;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1840)
				::openfl::geom::Matrix _this = tmp10;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1840)
				Float tmp11 = this->get_x();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1840)
				Float px = tmp11;		HX_STACK_VAR(px,"px");
				HX_STACK_LINE(1840)
				Float tmp12 = this->get_y();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1840)
				Float py = tmp12;		HX_STACK_VAR(py,"py");
				HX_STACK_LINE(1840)
				Float tmp13 = (_this->a * _this->d);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1840)
				Float tmp14 = (_this->b * _this->c);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1840)
				Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1840)
				Float norm = tmp15;		HX_STACK_VAR(norm,"norm");
				HX_STACK_LINE(1840)
				bool tmp16 = (norm == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1840)
				if ((tmp16)){
					HX_STACK_LINE(1840)
					Float tmp17 = _this->tx;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1840)
					tmp9 = -(tmp17);
				}
				else{
					HX_STACK_LINE(1840)
					Float tmp17 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1840)
					Float tmp18 = _this->c;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1840)
					Float tmp19 = (_this->ty - py);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1840)
					Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1840)
					Float tmp21 = _this->d;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1840)
					Float tmp22 = (px - _this->tx);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1840)
					Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1840)
					Float tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1840)
					tmp9 = (tmp17 * tmp24);
				}
			}
			HX_STACK_LINE(1840)
			Float px = tmp9;		HX_STACK_VAR(px,"px");
			HX_STACK_LINE(1841)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1841)
			{
				HX_STACK_LINE(1841)
				::openfl::geom::Matrix tmp11 = this->__worldTransform;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1841)
				::openfl::geom::Matrix _this = tmp11;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1841)
				Float tmp12 = this->get_x();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1841)
				Float px1 = tmp12;		HX_STACK_VAR(px1,"px1");
				HX_STACK_LINE(1841)
				Float tmp13 = this->get_y();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1841)
				Float py = tmp13;		HX_STACK_VAR(py,"py");
				HX_STACK_LINE(1841)
				Float tmp14 = (_this->a * _this->d);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1841)
				Float tmp15 = (_this->b * _this->c);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1841)
				Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1841)
				Float norm = tmp16;		HX_STACK_VAR(norm,"norm");
				HX_STACK_LINE(1841)
				bool tmp17 = (norm == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1841)
				if ((tmp17)){
					HX_STACK_LINE(1841)
					Float tmp18 = _this->ty;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1841)
					tmp10 = -(tmp18);
				}
				else{
					HX_STACK_LINE(1841)
					Float tmp18 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1841)
					Float tmp19 = _this->a;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1841)
					Float tmp20 = (py - _this->ty);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1841)
					Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1841)
					Float tmp22 = _this->b;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1841)
					Float tmp23 = (_this->tx - px1);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1841)
					Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1841)
					Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1841)
					tmp10 = (tmp18 * tmp25);
				}
			}
			HX_STACK_LINE(1841)
			Float py = tmp10;		HX_STACK_VAR(py,"py");
			HX_STACK_LINE(1843)
			Float tmp11 = this->get_mouseX();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1843)
			Float tmp12 = this->get_mouseY();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1843)
			int tmp13 = this->__getPosition(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1843)
			int upPos = tmp13;		HX_STACK_VAR(upPos,"upPos");
			HX_STACK_LINE(1844)
			int leftPos;		HX_STACK_VAR(leftPos,"leftPos");
			HX_STACK_LINE(1845)
			int rightPos;		HX_STACK_VAR(rightPos,"rightPos");
			HX_STACK_LINE(1847)
			int tmp14 = this->__selectionIndex;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1847)
			int tmp15 = upPos;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1847)
			Float tmp16 = ::Math_obj::min(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1847)
			int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1847)
			leftPos = tmp17;
			HX_STACK_LINE(1848)
			int tmp18 = this->__selectionIndex;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1848)
			int tmp19 = upPos;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1848)
			Float tmp20 = ::Math_obj::max(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1848)
			int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1848)
			rightPos = tmp21;
			HX_STACK_LINE(1850)
			this->__selectionIndex = leftPos;
			HX_STACK_LINE(1851)
			this->__caretIndex = rightPos;
			HX_STACK_LINE(1853)
			bool tmp22 = this->__inputEnabled;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1853)
			if ((tmp22)){
				HX_STACK_LINE(1855)
				this->this_onFocusIn(null());
				HX_STACK_LINE(1857)
				this->__stopCursorTimer();
				HX_STACK_LINE(1858)
				this->__startCursorTimer();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,stage_onMouseUp,(void))

Void TextField_obj::this_onAddedToStage( ::openfl::events::Event event){
{
		HX_STACK_FRAME("openfl.text.TextField","this_onAddedToStage",0x3dbcbc7f,"openfl.text.TextField.this_onAddedToStage","openfl/text/TextField.hx",1869,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1869)
		this->this_onFocusIn(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,this_onAddedToStage,(void))

Void TextField_obj::this_onFocusIn( ::openfl::events::FocusEvent event){
{
		HX_STACK_FRAME("openfl.text.TextField","this_onFocusIn",0x90f9e141,"openfl.text.TextField.this_onFocusIn","openfl/text/TextField.hx",1874,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1876)
		bool tmp = this->get_selectable();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1876)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1876)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1876)
		if ((tmp1)){
			HX_STACK_LINE(1876)
			Dynamic tmp3 = this->get_type();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1876)
			Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1876)
			Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1876)
			tmp2 = (tmp5 == ((Dynamic)((int)1)));
		}
		else{
			HX_STACK_LINE(1876)
			tmp2 = false;
		}
		HX_STACK_LINE(1876)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1876)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1876)
		if ((tmp3)){
			HX_STACK_LINE(1876)
			::openfl::display::Stage tmp5 = this->stage;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1876)
			::openfl::display::Stage tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1876)
			::openfl::display::Stage tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1876)
			tmp4 = (tmp7 != null());
		}
		else{
			HX_STACK_LINE(1876)
			tmp4 = false;
		}
		HX_STACK_LINE(1876)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1876)
		if ((tmp4)){
			HX_STACK_LINE(1876)
			::openfl::display::Stage tmp6 = this->stage;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1876)
			::openfl::display::Stage tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1876)
			::openfl::display::InteractiveObject tmp8 = tmp7->get_focus();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1876)
			::openfl::display::InteractiveObject tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1876)
			tmp5 = (tmp9 == hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(1876)
			tmp5 = false;
		}
		HX_STACK_LINE(1876)
		if ((tmp5)){
			HX_STACK_LINE(1878)
			this->__startTextInput();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,this_onFocusIn,(void))

Void TextField_obj::this_onFocusOut( ::openfl::events::FocusEvent event){
{
		HX_STACK_FRAME("openfl.text.TextField","this_onFocusOut",0x49afcbb2,"openfl.text.TextField.this_onFocusOut","openfl/text/TextField.hx",1887,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1887)
		this->__stopTextInput();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,this_onFocusOut,(void))

Void TextField_obj::this_onMouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("openfl.text.TextField","this_onMouseDown",0xfda1ed8b,"openfl.text.TextField.this_onMouseDown","openfl/text/TextField.hx",1892,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1894)
		bool tmp = this->get_selectable();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1894)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1894)
		if ((tmp1)){
			HX_STACK_LINE(1894)
			return null();
		}
		HX_STACK_LINE(1896)
		this->__updateLayout();
		HX_STACK_LINE(1898)
		Float tmp2 = this->get_mouseX();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1898)
		Float tmp3 = this->get_mouseY();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1898)
		int tmp4 = this->__getPosition(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1898)
		this->__caretIndex = tmp4;
		HX_STACK_LINE(1899)
		int tmp5 = this->__caretIndex;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1899)
		this->__selectionIndex = tmp5;
		HX_STACK_LINE(1900)
		this->__dirty = true;
		HX_STACK_LINE(1902)
		::openfl::display::Stage tmp6 = this->stage;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1902)
		Dynamic tmp7 = this->stage_onMouseMove_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1902)
		tmp6->addEventListener(HX_HCSTRING("mouseMove","\xd6","\x9b","\xb5","\xf4"),tmp7,null(),null(),null());
		HX_STACK_LINE(1903)
		::openfl::display::Stage tmp8 = this->stage;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1903)
		Dynamic tmp9 = this->stage_onMouseUp_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1903)
		tmp8->addEventListener(HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0"),tmp9,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,this_onMouseDown,(void))

Void TextField_obj::window_onKeyDown( int key,int modifier){
{
		HX_STACK_FRAME("openfl.text.TextField","window_onKeyDown",0x61330e17,"openfl.text.TextField.window_onKeyDown","openfl/text/TextField.hx",1908,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(1910)
		int tmp = key;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1910)
		switch( (int)(tmp)){
			case (int)8: {
				HX_STACK_LINE(1914)
				int tmp1 = this->__selectionIndex;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1914)
				int tmp2 = this->__caretIndex;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1914)
				bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1914)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1914)
				if ((tmp3)){
					HX_STACK_LINE(1914)
					int tmp5 = this->__caretIndex;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1914)
					int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1914)
					tmp4 = (tmp6 > (int)0);
				}
				else{
					HX_STACK_LINE(1914)
					tmp4 = false;
				}
				HX_STACK_LINE(1914)
				if ((tmp4)){
					HX_STACK_LINE(1916)
					int tmp5 = this->__caretIndex;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1916)
					int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1916)
					this->__selectionIndex = tmp6;
				}
				HX_STACK_LINE(1920)
				int tmp5 = this->__selectionIndex;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1920)
				int tmp6 = this->__caretIndex;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1920)
				bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1920)
				if ((tmp7)){
					HX_STACK_LINE(1922)
					this->replaceSelectedText(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
					HX_STACK_LINE(1923)
					int tmp8 = this->__caretIndex;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1923)
					this->__selectionIndex = tmp8;
					HX_STACK_LINE(1925)
					::openfl::events::Event tmp9 = ::openfl::events::Event_obj::__new(HX_HCSTRING("change","\x70","\x91","\x72","\xb7"),true,null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1925)
					this->dispatchEvent(tmp9);
				}
			}
			;break;
			case (int)127: {
				HX_STACK_LINE(1931)
				int tmp1 = this->__selectionIndex;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1931)
				int tmp2 = this->__caretIndex;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1931)
				bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1931)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1931)
				if ((tmp3)){
					HX_STACK_LINE(1931)
					int tmp5 = this->__caretIndex;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1931)
					int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1931)
					::String tmp7 = this->__text;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1931)
					::String tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1931)
					int tmp9 = tmp8.length;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1931)
					tmp4 = (tmp6 < tmp9);
				}
				else{
					HX_STACK_LINE(1931)
					tmp4 = false;
				}
				HX_STACK_LINE(1931)
				if ((tmp4)){
					HX_STACK_LINE(1933)
					int tmp5 = this->__caretIndex;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1933)
					int tmp6 = (tmp5 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1933)
					this->__selectionIndex = tmp6;
				}
				HX_STACK_LINE(1937)
				int tmp5 = this->__selectionIndex;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1937)
				int tmp6 = this->__caretIndex;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1937)
				bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1937)
				if ((tmp7)){
					HX_STACK_LINE(1939)
					this->replaceSelectedText(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
					HX_STACK_LINE(1940)
					int tmp8 = this->__caretIndex;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1940)
					this->__selectionIndex = tmp8;
					HX_STACK_LINE(1942)
					::openfl::events::Event tmp9 = ::openfl::events::Event_obj::__new(HX_HCSTRING("change","\x70","\x91","\x72","\xb7"),true,null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1942)
					this->dispatchEvent(tmp9);
				}
			}
			;break;
			case (int)1073741904: {
				HX_STACK_LINE(1948)
				int tmp1 = modifier;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1948)
				bool tmp2 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1948)
				if ((tmp2)){
					HX_STACK_LINE(1950)
					int tmp3 = this->__caretIndex;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1950)
					bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1950)
					if ((tmp4)){
						HX_STACK_LINE(1952)
						(this->__caretIndex)--;
					}
				}
				else{
					HX_STACK_LINE(1958)
					int tmp3 = this->__selectionIndex;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1958)
					int tmp4 = this->__caretIndex;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1958)
					bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1958)
					if ((tmp5)){
						HX_STACK_LINE(1960)
						int tmp6 = this->__caretIndex;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1960)
						bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1960)
						if ((tmp7)){
							HX_STACK_LINE(1962)
							(this->__caretIndex)--;
						}
					}
					else{
						HX_STACK_LINE(1968)
						int tmp6 = this->__caretIndex;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1968)
						int tmp7 = this->__selectionIndex;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1968)
						Float tmp8 = ::Math_obj::min(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1968)
						int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1968)
						this->__caretIndex = tmp9;
					}
					HX_STACK_LINE(1972)
					int tmp6 = this->__caretIndex;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1972)
					this->__selectionIndex = tmp6;
				}
				HX_STACK_LINE(1976)
				this->__stopCursorTimer();
				HX_STACK_LINE(1977)
				this->__startCursorTimer();
			}
			;break;
			case (int)1073741903: {
				HX_STACK_LINE(1981)
				int tmp1 = modifier;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1981)
				bool tmp2 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1981)
				if ((tmp2)){
					HX_STACK_LINE(1983)
					int tmp3 = this->__caretIndex;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1983)
					::String tmp4 = this->__text;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1983)
					int tmp5 = tmp4.length;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1983)
					bool tmp6 = (tmp3 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1983)
					if ((tmp6)){
						HX_STACK_LINE(1985)
						(this->__caretIndex)++;
					}
				}
				else{
					HX_STACK_LINE(1991)
					int tmp3 = this->__selectionIndex;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1991)
					int tmp4 = this->__caretIndex;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1991)
					bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1991)
					if ((tmp5)){
						HX_STACK_LINE(1993)
						int tmp6 = this->__caretIndex;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1993)
						::String tmp7 = this->__text;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1993)
						int tmp8 = tmp7.length;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1993)
						bool tmp9 = (tmp6 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1993)
						if ((tmp9)){
							HX_STACK_LINE(1995)
							(this->__caretIndex)++;
						}
					}
					else{
						HX_STACK_LINE(2001)
						int tmp6 = this->__caretIndex;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2001)
						int tmp7 = this->__selectionIndex;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(2001)
						Float tmp8 = ::Math_obj::max(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(2001)
						int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(2001)
						this->__caretIndex = tmp9;
					}
					HX_STACK_LINE(2005)
					int tmp6 = this->__caretIndex;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2005)
					this->__selectionIndex = tmp6;
				}
				HX_STACK_LINE(2009)
				this->__stopCursorTimer();
				HX_STACK_LINE(2010)
				this->__startCursorTimer();
			}
			;break;
			case (int)99: {
				HX_STACK_LINE(2014)
				bool tmp1 = (modifier == (int)64);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(2014)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2014)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2014)
				if ((tmp2)){
					HX_STACK_LINE(2014)
					tmp3 = (modifier == (int)128);
				}
				else{
					HX_STACK_LINE(2014)
					tmp3 = true;
				}
				HX_STACK_LINE(2014)
				if ((tmp3)){
					HX_STACK_LINE(2016)
					::String tmp4 = this->__text;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2016)
					int tmp5 = this->__caretIndex;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2016)
					int tmp6 = this->__selectionIndex;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2016)
					::String tmp7 = tmp4.substring(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(2016)
					::lime::_system::Clipboard_obj::set_text(tmp7);
				}
			}
			;break;
			case (int)120: {
				HX_STACK_LINE(2022)
				bool tmp1 = (modifier == (int)64);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(2022)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2022)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2022)
				if ((tmp2)){
					HX_STACK_LINE(2022)
					tmp3 = (modifier == (int)128);
				}
				else{
					HX_STACK_LINE(2022)
					tmp3 = true;
				}
				HX_STACK_LINE(2022)
				if ((tmp3)){
					HX_STACK_LINE(2024)
					::String tmp4 = this->__text;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2024)
					int tmp5 = this->__caretIndex;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2024)
					int tmp6 = this->__selectionIndex;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2024)
					::String tmp7 = tmp4.substring(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(2024)
					::lime::_system::Clipboard_obj::set_text(tmp7);
					HX_STACK_LINE(2026)
					int tmp8 = this->__caretIndex;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(2026)
					int tmp9 = this->__selectionIndex;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2026)
					bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2026)
					if ((tmp10)){
						HX_STACK_LINE(2028)
						this->replaceSelectedText(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
						HX_STACK_LINE(2029)
						::openfl::events::Event tmp11 = ::openfl::events::Event_obj::__new(HX_HCSTRING("change","\x70","\x91","\x72","\xb7"),true,null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(2029)
						this->dispatchEvent(tmp11);
					}
				}
			}
			;break;
			case (int)118: {
				HX_STACK_LINE(2037)
				bool tmp1 = (modifier == (int)64);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(2037)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2037)
				bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2037)
				if ((tmp2)){
					HX_STACK_LINE(2037)
					tmp3 = (modifier == (int)128);
				}
				else{
					HX_STACK_LINE(2037)
					tmp3 = true;
				}
				HX_STACK_LINE(2037)
				if ((tmp3)){
					HX_STACK_LINE(2039)
					::String tmp4 = ::lime::_system::Clipboard_obj::get_text();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2039)
					::String text = tmp4;		HX_STACK_VAR(text,"text");
					HX_STACK_LINE(2041)
					bool tmp5 = (text != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2041)
					if ((tmp5)){
						HX_STACK_LINE(2043)
						::String tmp6 = text;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(2043)
						this->replaceSelectedText(tmp6);
					}
					else{
						HX_STACK_LINE(2047)
						this->replaceSelectedText(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
					}
					HX_STACK_LINE(2051)
					::openfl::events::Event tmp6 = ::openfl::events::Event_obj::__new(HX_HCSTRING("change","\x70","\x91","\x72","\xb7"),true,null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2051)
					this->dispatchEvent(tmp6);
				}
				else{
					HX_STACK_LINE(2055)
					::String tmp4 = this->__text;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2055)
					::openfl::_internal::text::TextEngine tmp5 = this->__textEngine;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2055)
					::openfl::_internal::text::TextEngine tmp6 = this->__textEngine;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2055)
					int tmp7 = tmp6->textFormatRanges->length;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(2055)
					int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(2055)
					::openfl::_internal::text::TextFormatRange tmp9 = tmp5->textFormatRanges->__get(tmp8).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2055)
					tmp9->end = tmp4.length;
				}
			}
			;break;
			default: {
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,window_onKeyDown,(void))

Void TextField_obj::window_onTextInput( ::String value){
{
		HX_STACK_FRAME("openfl.text.TextField","window_onTextInput",0xe9818213,"openfl.text.TextField.window_onTextInput","openfl/text/TextField.hx",2066,0xccf02094)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(2068)
		::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2068)
		this->replaceSelectedText(tmp);
		HX_STACK_LINE(2070)
		::openfl::events::Event tmp1 = ::openfl::events::Event_obj::__new(HX_HCSTRING("change","\x70","\x91","\x72","\xb7"),true,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2070)
		this->dispatchEvent(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,window_onTextInput,(void))

::openfl::text::TextFormat TextField_obj::__defaultTextFormat;

::EReg TextField_obj::__regexAlign;

::EReg TextField_obj::__regexColor;

::EReg TextField_obj::__regexBlockIndent;

::EReg TextField_obj::__regexBreakTag;

Array< ::Dynamic > TextField_obj::__regexEntities;

::EReg TextField_obj::__regexFace;

::EReg TextField_obj::__regexHTMLTag;

::EReg TextField_obj::__regexIndent;

::EReg TextField_obj::__regexLeading;

::EReg TextField_obj::__regexLeftMargin;

::EReg TextField_obj::__regexRightMargin;

::EReg TextField_obj::__regexTabStops;

::EReg TextField_obj::__regexSize;


TextField_obj::TextField_obj()
{
}

void TextField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextField);
	HX_MARK_MEMBER_NAME(__bounds,"__bounds");
	HX_MARK_MEMBER_NAME(__caretIndex,"__caretIndex");
	HX_MARK_MEMBER_NAME(__cursorTimer,"__cursorTimer");
	HX_MARK_MEMBER_NAME(__dirty,"__dirty");
	HX_MARK_MEMBER_NAME(__displayAsPassword,"__displayAsPassword");
	HX_MARK_MEMBER_NAME(__inputEnabled,"__inputEnabled");
	HX_MARK_MEMBER_NAME(__isHTML,"__isHTML");
	HX_MARK_MEMBER_NAME(__layoutDirty,"__layoutDirty");
	HX_MARK_MEMBER_NAME(__mouseWheelEnabled,"__mouseWheelEnabled");
	HX_MARK_MEMBER_NAME(__selectionIndex,"__selectionIndex");
	HX_MARK_MEMBER_NAME(__showCursor,"__showCursor");
	HX_MARK_MEMBER_NAME(__text,"__text");
	HX_MARK_MEMBER_NAME(__textEngine,"__textEngine");
	HX_MARK_MEMBER_NAME(__textFormat,"__textFormat");
	::openfl::display::InteractiveObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__bounds,"__bounds");
	HX_VISIT_MEMBER_NAME(__caretIndex,"__caretIndex");
	HX_VISIT_MEMBER_NAME(__cursorTimer,"__cursorTimer");
	HX_VISIT_MEMBER_NAME(__dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(__displayAsPassword,"__displayAsPassword");
	HX_VISIT_MEMBER_NAME(__inputEnabled,"__inputEnabled");
	HX_VISIT_MEMBER_NAME(__isHTML,"__isHTML");
	HX_VISIT_MEMBER_NAME(__layoutDirty,"__layoutDirty");
	HX_VISIT_MEMBER_NAME(__mouseWheelEnabled,"__mouseWheelEnabled");
	HX_VISIT_MEMBER_NAME(__selectionIndex,"__selectionIndex");
	HX_VISIT_MEMBER_NAME(__showCursor,"__showCursor");
	HX_VISIT_MEMBER_NAME(__text,"__text");
	HX_VISIT_MEMBER_NAME(__textEngine,"__textEngine");
	HX_VISIT_MEMBER_NAME(__textFormat,"__textFormat");
	::openfl::display::InteractiveObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TextField_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return get_text(); }
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == hx::paccAlways) return get_type(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { if (inCallProp == hx::paccAlways) return get_border(); }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"__text") ) { return __text; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { if (inCallProp == hx::paccAlways) return get_scrollH(); }
		if (HX_FIELD_EQ(inName,"scrollV") ) { if (inCallProp == hx::paccAlways) return get_scrollV(); }
		if (HX_FIELD_EQ(inName,"__dirty") ) { return __dirty; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == hx::paccAlways) return get_autoSize(); }
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == hx::paccAlways) return get_htmlText(); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { if (inCallProp == hx::paccAlways) return get_maxChars(); }
		if (HX_FIELD_EQ(inName,"numLines") ) { if (inCallProp == hx::paccAlways) return get_numLines(); }
		if (HX_FIELD_EQ(inName,"restrict") ) { if (inCallProp == hx::paccAlways) return get_restrict(); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == hx::paccAlways) return get_wordWrap(); }
		if (HX_FIELD_EQ(inName,"__bounds") ) { return __bounds; }
		if (HX_FIELD_EQ(inName,"__isHTML") ) { return __isHTML; }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		if (HX_FIELD_EQ(inName,"set_type") ) { return set_type_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == hx::paccAlways) return get_multiline(); }
		if (HX_FIELD_EQ(inName,"sharpness") ) { if (inCallProp == hx::paccAlways) return get_sharpness(); }
		if (HX_FIELD_EQ(inName,"textColor") ) { if (inCallProp == hx::paccAlways) return get_textColor(); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { if (inCallProp == hx::paccAlways) return get_textWidth(); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { if (inCallProp == hx::paccAlways) return get_background(); }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { if (inCallProp == hx::paccAlways) return get_caretIndex(); }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { if (inCallProp == hx::paccAlways) return get_embedFonts(); }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { if (inCallProp == hx::paccAlways) return get_maxScrollH(); }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { if (inCallProp == hx::paccAlways) return get_maxScrollV(); }
		if (HX_FIELD_EQ(inName,"selectable") ) { if (inCallProp == hx::paccAlways) return get_selectable(); }
		if (HX_FIELD_EQ(inName,"textHeight") ) { if (inCallProp == hx::paccAlways) return get_textHeight(); }
		if (HX_FIELD_EQ(inName,"appendText") ) { return appendText_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		if (HX_FIELD_EQ(inName,"get_border") ) { return get_border_dyn(); }
		if (HX_FIELD_EQ(inName,"set_border") ) { return set_border_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == hx::paccAlways) return get_borderColor(); }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { if (inCallProp == hx::paccAlways) return get_gridFitType(); }
		if (HX_FIELD_EQ(inName,"getLineText") ) { return getLineText_dyn(); }
		if (HX_FIELD_EQ(inName,"replaceText") ) { return replaceText_dyn(); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__getCursor") ) { return __getCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scrollH") ) { return get_scrollH_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scrollH") ) { return set_scrollH_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scrollV") ) { return get_scrollV_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scrollV") ) { return set_scrollV_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__caretIndex") ) { return __caretIndex; }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { return __showCursor; }
		if (HX_FIELD_EQ(inName,"__textEngine") ) { return __textEngine; }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { return __textFormat; }
		if (HX_FIELD_EQ(inName,"setSelection") ) { return setSelection_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateText") ) { return __updateText_dyn(); }
		if (HX_FIELD_EQ(inName,"get_autoSize") ) { return get_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return set_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_htmlText") ) { return get_htmlText_dyn(); }
		if (HX_FIELD_EQ(inName,"set_htmlText") ) { return set_htmlText_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxChars") ) { return get_maxChars_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxChars") ) { return set_maxChars_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numLines") ) { return get_numLines_dyn(); }
		if (HX_FIELD_EQ(inName,"get_restrict") ) { return get_restrict_dyn(); }
		if (HX_FIELD_EQ(inName,"set_restrict") ) { return set_restrict_dyn(); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return get_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return set_wordWrap_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { if (inCallProp == hx::paccAlways) return get_antiAliasType(); }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { if (inCallProp == hx::paccAlways) return get_bottomScrollV(); }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { return __cursorTimer; }
		if (HX_FIELD_EQ(inName,"__layoutDirty") ) { return __layoutDirty; }
		if (HX_FIELD_EQ(inName,"getLineLength") ) { return getLineLength_dyn(); }
		if (HX_FIELD_EQ(inName,"getLineOffset") ) { return getLineOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"getTextFormat") ) { return getTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextFormat") ) { return setTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"__getPosition") ) { return __getPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return __hitTestMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		if (HX_FIELD_EQ(inName,"get_multiline") ) { return get_multiline_dyn(); }
		if (HX_FIELD_EQ(inName,"set_multiline") ) { return set_multiline_dyn(); }
		if (HX_FIELD_EQ(inName,"get_sharpness") ) { return get_sharpness_dyn(); }
		if (HX_FIELD_EQ(inName,"set_sharpness") ) { return set_sharpness_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textColor") ) { return get_textColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_textColor") ) { return set_textColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textWidth") ) { return get_textWidth_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__inputEnabled") ) { return __inputEnabled; }
		if (HX_FIELD_EQ(inName,"getLineMetrics") ) { return getLineMetrics_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateLayout") ) { return __updateLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"get_background") ) { return get_background_dyn(); }
		if (HX_FIELD_EQ(inName,"set_background") ) { return set_background_dyn(); }
		if (HX_FIELD_EQ(inName,"get_caretIndex") ) { return get_caretIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"get_embedFonts") ) { return get_embedFonts_dyn(); }
		if (HX_FIELD_EQ(inName,"set_embedFonts") ) { return set_embedFonts_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxScrollH") ) { return get_maxScrollH_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxScrollV") ) { return get_maxScrollV_dyn(); }
		if (HX_FIELD_EQ(inName,"get_selectable") ) { return get_selectable_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectable") ) { return set_selectable_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textHeight") ) { return get_textHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"this_onFocusIn") ) { return this_onFocusIn_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp == hx::paccAlways) return get_backgroundColor(); }
		if (HX_FIELD_EQ(inName,"__stopTextInput") ) { return __stopTextInput_dyn(); }
		if (HX_FIELD_EQ(inName,"get_borderColor") ) { return get_borderColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return set_borderColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_gridFitType") ) { return get_gridFitType_dyn(); }
		if (HX_FIELD_EQ(inName,"set_gridFitType") ) { return set_gridFitType_dyn(); }
		if (HX_FIELD_EQ(inName,"stage_onMouseUp") ) { return stage_onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"this_onFocusOut") ) { return this_onFocusOut_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__selectionIndex") ) { return __selectionIndex; }
		if (HX_FIELD_EQ(inName,"__startTextInput") ) { return __startTextInput_dyn(); }
		if (HX_FIELD_EQ(inName,"this_onMouseDown") ) { return this_onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"window_onKeyDown") ) { return window_onKeyDown_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultTextFormat") ) { if (inCallProp == hx::paccAlways) return get_defaultTextFormat(); }
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { if (inCallProp == hx::paccAlways) return get_displayAsPassword(); }
		if (HX_FIELD_EQ(inName,"mouseWheelEnabled") ) { if (inCallProp == hx::paccAlways) return get_mouseWheelEnabled(); }
		if (HX_FIELD_EQ(inName,"selectionEndIndex") ) { if (inCallProp == hx::paccAlways) return get_selectionEndIndex(); }
		if (HX_FIELD_EQ(inName,"getCharBoundaries") ) { return getCharBoundaries_dyn(); }
		if (HX_FIELD_EQ(inName,"__stopCursorTimer") ) { return __stopCursorTimer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_antiAliasType") ) { return get_antiAliasType_dyn(); }
		if (HX_FIELD_EQ(inName,"set_antiAliasType") ) { return set_antiAliasType_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bottomScrollV") ) { return get_bottomScrollV_dyn(); }
		if (HX_FIELD_EQ(inName,"stage_onMouseMove") ) { return stage_onMouseMove_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getLineIndexOfChar") ) { return getLineIndexOfChar_dyn(); }
		if (HX_FIELD_EQ(inName,"getParagraphLength") ) { return getParagraphLength_dyn(); }
		if (HX_FIELD_EQ(inName,"__startCursorTimer") ) { return __startCursorTimer_dyn(); }
		if (HX_FIELD_EQ(inName,"window_onTextInput") ) { return window_onTextInput_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"selectionBeginIndex") ) { if (inCallProp == hx::paccAlways) return get_selectionBeginIndex(); }
		if (HX_FIELD_EQ(inName,"__displayAsPassword") ) { return __displayAsPassword; }
		if (HX_FIELD_EQ(inName,"__mouseWheelEnabled") ) { return __mouseWheelEnabled; }
		if (HX_FIELD_EQ(inName,"getCharIndexAtPoint") ) { return getCharIndexAtPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getLineIndexAtPoint") ) { return getLineIndexAtPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"replaceSelectedText") ) { return replaceSelectedText_dyn(); }
		if (HX_FIELD_EQ(inName,"__getAttributeMatch") ) { return __getAttributeMatch_dyn(); }
		if (HX_FIELD_EQ(inName,"get_backgroundColor") ) { return get_backgroundColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundColor") ) { return set_backgroundColor_dyn(); }
		if (HX_FIELD_EQ(inName,"this_onAddedToStage") ) { return this_onAddedToStage_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_defaultTextFormat") ) { return get_defaultTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"set_defaultTextFormat") ) { return set_defaultTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"get_displayAsPassword") ) { return get_displayAsPassword_dyn(); }
		if (HX_FIELD_EQ(inName,"set_displayAsPassword") ) { return set_displayAsPassword_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseWheelEnabled") ) { return get_mouseWheelEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mouseWheelEnabled") ) { return set_mouseWheelEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"get_selectionEndIndex") ) { return get_selectionEndIndex_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getFirstCharInParagraph") ) { return getFirstCharInParagraph_dyn(); }
		if (HX_FIELD_EQ(inName,"get_selectionBeginIndex") ) { return get_selectionBeginIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"__regexFace") ) { outValue = __regexFace; return true;  }
		if (HX_FIELD_EQ(inName,"__regexSize") ) { outValue = __regexSize; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__regexAlign") ) { outValue = __regexAlign; return true;  }
		if (HX_FIELD_EQ(inName,"__regexColor") ) { outValue = __regexColor; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__regexIndent") ) { outValue = __regexIndent; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__regexHTMLTag") ) { outValue = __regexHTMLTag; return true;  }
		if (HX_FIELD_EQ(inName,"__regexLeading") ) { outValue = __regexLeading; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__regexBreakTag") ) { outValue = __regexBreakTag; return true;  }
		if (HX_FIELD_EQ(inName,"__regexEntities") ) { outValue = __regexEntities; return true;  }
		if (HX_FIELD_EQ(inName,"__regexTabStops") ) { outValue = __regexTabStops; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__regexLeftMargin") ) { outValue = __regexLeftMargin; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__regexBlockIndent") ) { outValue = __regexBlockIndent; return true;  }
		if (HX_FIELD_EQ(inName,"__regexRightMargin") ) { outValue = __regexRightMargin; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__defaultTextFormat") ) { outValue = __defaultTextFormat; return true;  }
	}
	return false;
}

Dynamic TextField_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue); }
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == hx::paccAlways) return set_type(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { if (inCallProp == hx::paccAlways) return set_border(inValue); }
		if (HX_FIELD_EQ(inName,"__text") ) { __text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { if (inCallProp == hx::paccAlways) return set_scrollH(inValue); }
		if (HX_FIELD_EQ(inName,"scrollV") ) { if (inCallProp == hx::paccAlways) return set_scrollV(inValue); }
		if (HX_FIELD_EQ(inName,"__dirty") ) { __dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == hx::paccAlways) return set_autoSize(inValue); }
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == hx::paccAlways) return set_htmlText(inValue); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { if (inCallProp == hx::paccAlways) return set_maxChars(inValue); }
		if (HX_FIELD_EQ(inName,"restrict") ) { if (inCallProp == hx::paccAlways) return set_restrict(inValue); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == hx::paccAlways) return set_wordWrap(inValue); }
		if (HX_FIELD_EQ(inName,"__bounds") ) { __bounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isHTML") ) { __isHTML=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == hx::paccAlways) return set_multiline(inValue); }
		if (HX_FIELD_EQ(inName,"sharpness") ) { if (inCallProp == hx::paccAlways) return set_sharpness(inValue); }
		if (HX_FIELD_EQ(inName,"textColor") ) { if (inCallProp == hx::paccAlways) return set_textColor(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { if (inCallProp == hx::paccAlways) return set_background(inValue); }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { if (inCallProp == hx::paccAlways) return set_embedFonts(inValue); }
		if (HX_FIELD_EQ(inName,"selectable") ) { if (inCallProp == hx::paccAlways) return set_selectable(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == hx::paccAlways) return set_borderColor(inValue); }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { if (inCallProp == hx::paccAlways) return set_gridFitType(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__caretIndex") ) { __caretIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { __showCursor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textEngine") ) { __textEngine=inValue.Cast< ::openfl::_internal::text::TextEngine >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { __textFormat=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { if (inCallProp == hx::paccAlways) return set_antiAliasType(inValue); }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { __cursorTimer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__layoutDirty") ) { __layoutDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__inputEnabled") ) { __inputEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp == hx::paccAlways) return set_backgroundColor(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__selectionIndex") ) { __selectionIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultTextFormat") ) { if (inCallProp == hx::paccAlways) return set_defaultTextFormat(inValue); }
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { if (inCallProp == hx::paccAlways) return set_displayAsPassword(inValue); }
		if (HX_FIELD_EQ(inName,"mouseWheelEnabled") ) { if (inCallProp == hx::paccAlways) return set_mouseWheelEnabled(inValue); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__displayAsPassword") ) { __displayAsPassword=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mouseWheelEnabled") ) { __mouseWheelEnabled=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextField_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"__regexFace") ) { __regexFace=ioValue.Cast< ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexSize") ) { __regexSize=ioValue.Cast< ::EReg >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__regexAlign") ) { __regexAlign=ioValue.Cast< ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexColor") ) { __regexColor=ioValue.Cast< ::EReg >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__regexIndent") ) { __regexIndent=ioValue.Cast< ::EReg >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__regexHTMLTag") ) { __regexHTMLTag=ioValue.Cast< ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexLeading") ) { __regexLeading=ioValue.Cast< ::EReg >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__regexBreakTag") ) { __regexBreakTag=ioValue.Cast< ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexEntities") ) { __regexEntities=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexTabStops") ) { __regexTabStops=ioValue.Cast< ::EReg >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__regexLeftMargin") ) { __regexLeftMargin=ioValue.Cast< ::EReg >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__regexBlockIndent") ) { __regexBlockIndent=ioValue.Cast< ::EReg >(); return true; }
		if (HX_FIELD_EQ(inName,"__regexRightMargin") ) { __regexRightMargin=ioValue.Cast< ::EReg >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__defaultTextFormat") ) { __defaultTextFormat=ioValue.Cast< ::openfl::text::TextFormat >(); return true; }
	}
	return false;
}

void TextField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("antiAliasType","\x68","\xc4","\xfa","\xe7"));
	outFields->push(HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"));
	outFields->push(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));
	outFields->push(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"));
	outFields->push(HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"));
	outFields->push(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"));
	outFields->push(HX_HCSTRING("bottomScrollV","\xfe","\xf7","\x87","\x8b"));
	outFields->push(HX_HCSTRING("caretIndex","\x8f","\xb6","\x5b","\xdd"));
	outFields->push(HX_HCSTRING("defaultTextFormat","\xe5","\xc7","\xe0","\x0a"));
	outFields->push(HX_HCSTRING("displayAsPassword","\x0f","\xcb","\x96","\xea"));
	outFields->push(HX_HCSTRING("embedFonts","\x2b","\xc7","\xe1","\x8e"));
	outFields->push(HX_HCSTRING("gridFitType","\x05","\xf3","\x13","\xb4"));
	outFields->push(HX_HCSTRING("htmlText","\xb8","\x1f","\x38","\x10"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("maxChars","\x99","\xef","\xd0","\xef"));
	outFields->push(HX_HCSTRING("maxScrollH","\x57","\xad","\xfc","\x9a"));
	outFields->push(HX_HCSTRING("maxScrollV","\x65","\xad","\xfc","\x9a"));
	outFields->push(HX_HCSTRING("mouseWheelEnabled","\xeb","\x16","\x54","\x65"));
	outFields->push(HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e"));
	outFields->push(HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32"));
	outFields->push(HX_HCSTRING("restrict","\x3c","\xcb","\x9e","\xf1"));
	outFields->push(HX_HCSTRING("scrollH","\x9b","\x33","\xd8","\x30"));
	outFields->push(HX_HCSTRING("scrollV","\xa9","\x33","\xd8","\x30"));
	outFields->push(HX_HCSTRING("selectable","\x96","\xb6","\x2a","\xc4"));
	outFields->push(HX_HCSTRING("selectionBeginIndex","\x95","\x7f","\x17","\xd7"));
	outFields->push(HX_HCSTRING("selectionEndIndex","\xa3","\x0d","\x42","\x4b"));
	outFields->push(HX_HCSTRING("sharpness","\x81","\x22","\x25","\x1b"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("textColor","\x76","\x01","\x4a","\xe3"));
	outFields->push(HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39"));
	outFields->push(HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"));
	outFields->push(HX_HCSTRING("__bounds","\x95","\xf1","\x4c","\x0e"));
	outFields->push(HX_HCSTRING("__caretIndex","\xaf","\x31","\xef","\x15"));
	outFields->push(HX_HCSTRING("__cursorTimer","\xef","\x59","\x8f","\xe1"));
	outFields->push(HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"));
	outFields->push(HX_HCSTRING("__displayAsPassword","\xef","\xf3","\x86","\x9d"));
	outFields->push(HX_HCSTRING("__inputEnabled","\xb7","\xe0","\x1d","\x37"));
	outFields->push(HX_HCSTRING("__isHTML","\x75","\x61","\x94","\x0a"));
	outFields->push(HX_HCSTRING("__layoutDirty","\xe8","\xe9","\x31","\xd3"));
	outFields->push(HX_HCSTRING("__mouseWheelEnabled","\xcb","\x3f","\x44","\x18"));
	outFields->push(HX_HCSTRING("__selectionIndex","\x46","\x0a","\xc3","\x7d"));
	outFields->push(HX_HCSTRING("__showCursor","\xd3","\xae","\xf0","\xe0"));
	outFields->push(HX_HCSTRING("__text","\xcd","\x2f","\xf2","\xfb"));
	outFields->push(HX_HCSTRING("__textEngine","\x6f","\x43","\x08","\x6c"));
	outFields->push(HX_HCSTRING("__textFormat","\xe4","\x8a","\x12","\x6d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(TextField_obj,__bounds),HX_HCSTRING("__bounds","\x95","\xf1","\x4c","\x0e")},
	{hx::fsInt,(int)offsetof(TextField_obj,__caretIndex),HX_HCSTRING("__caretIndex","\xaf","\x31","\xef","\x15")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(TextField_obj,__cursorTimer),HX_HCSTRING("__cursorTimer","\xef","\x59","\x8f","\xe1")},
	{hx::fsBool,(int)offsetof(TextField_obj,__dirty),HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44")},
	{hx::fsBool,(int)offsetof(TextField_obj,__displayAsPassword),HX_HCSTRING("__displayAsPassword","\xef","\xf3","\x86","\x9d")},
	{hx::fsBool,(int)offsetof(TextField_obj,__inputEnabled),HX_HCSTRING("__inputEnabled","\xb7","\xe0","\x1d","\x37")},
	{hx::fsBool,(int)offsetof(TextField_obj,__isHTML),HX_HCSTRING("__isHTML","\x75","\x61","\x94","\x0a")},
	{hx::fsBool,(int)offsetof(TextField_obj,__layoutDirty),HX_HCSTRING("__layoutDirty","\xe8","\xe9","\x31","\xd3")},
	{hx::fsBool,(int)offsetof(TextField_obj,__mouseWheelEnabled),HX_HCSTRING("__mouseWheelEnabled","\xcb","\x3f","\x44","\x18")},
	{hx::fsInt,(int)offsetof(TextField_obj,__selectionIndex),HX_HCSTRING("__selectionIndex","\x46","\x0a","\xc3","\x7d")},
	{hx::fsBool,(int)offsetof(TextField_obj,__showCursor),HX_HCSTRING("__showCursor","\xd3","\xae","\xf0","\xe0")},
	{hx::fsString,(int)offsetof(TextField_obj,__text),HX_HCSTRING("__text","\xcd","\x2f","\xf2","\xfb")},
	{hx::fsObject /*::openfl::_internal::text::TextEngine*/ ,(int)offsetof(TextField_obj,__textEngine),HX_HCSTRING("__textEngine","\x6f","\x43","\x08","\x6c")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(TextField_obj,__textFormat),HX_HCSTRING("__textFormat","\xe4","\x8a","\x12","\x6d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(void *) &TextField_obj::__defaultTextFormat,HX_HCSTRING("__defaultTextFormat","\xc5","\xf0","\xd0","\xbd")},
	{hx::fsObject /*::EReg*/ ,(void *) &TextField_obj::__regexAlign,HX_HCSTRING("__regexAlign","\x9e","\x21","\xd1","\x2d")},
	{hx::fsObject /*::EReg*/ ,(void *) &TextField_obj::__regexColor,HX_HCSTRING("__regexColor","\x3c","\x3c","\x9c","\x56")},
	{hx::fsObject /*::EReg*/ ,(void *) &TextField_obj::__regexBlockIndent,HX_HCSTRING("__regexBlockIndent","\x32","\x61","\xa3","\xa8")},
	{hx::fsObject /*::EReg*/ ,(void *) &TextField_obj::__regexBreakTag,HX_HCSTRING("__regexBreakTag","\xa2","\xf1","\x6b","\xe6")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &TextField_obj::__regexEntities,HX_HCSTRING("__regexEntities","\x08","\x59","\x3f","\x8c")},
	{hx::fsObject /*::EReg*/ ,(void *) &TextField_obj::__regexFace,HX_HCSTRING("__regexFace","\xe4","\xc7","\x66","\x12")},
	{hx::fsObject /*::EReg*/ ,(void *) &TextField_obj::__regexHTMLTag,HX_HCSTRING("__regexHTMLTag","\xe8","\x74","\xf4","\x76")},
	{hx::fsObject /*::EReg*/ ,(void *) &TextField_obj::__regexIndent,HX_HCSTRING("__regexIndent","\x73","\xbf","\x84","\x3f")},
	{hx::fsObject /*::EReg*/ ,(void *) &TextField_obj::__regexLeading,HX_HCSTRING("__regexLeading","\xdf","\x25","\x4c","\x7d")},
	{hx::fsObject /*::EReg*/ ,(void *) &TextField_obj::__regexLeftMargin,HX_HCSTRING("__regexLeftMargin","\x1c","\x6e","\x33","\xf3")},
	{hx::fsObject /*::EReg*/ ,(void *) &TextField_obj::__regexRightMargin,HX_HCSTRING("__regexRightMargin","\xc3","\x30","\xd7","\x98")},
	{hx::fsObject /*::EReg*/ ,(void *) &TextField_obj::__regexTabStops,HX_HCSTRING("__regexTabStops","\x63","\x56","\x64","\xec")},
	{hx::fsObject /*::EReg*/ ,(void *) &TextField_obj::__regexSize,HX_HCSTRING("__regexSize","\x08","\xb4","\x04","\x1b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__bounds","\x95","\xf1","\x4c","\x0e"),
	HX_HCSTRING("__caretIndex","\xaf","\x31","\xef","\x15"),
	HX_HCSTRING("__cursorTimer","\xef","\x59","\x8f","\xe1"),
	HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"),
	HX_HCSTRING("__displayAsPassword","\xef","\xf3","\x86","\x9d"),
	HX_HCSTRING("__inputEnabled","\xb7","\xe0","\x1d","\x37"),
	HX_HCSTRING("__isHTML","\x75","\x61","\x94","\x0a"),
	HX_HCSTRING("__layoutDirty","\xe8","\xe9","\x31","\xd3"),
	HX_HCSTRING("__mouseWheelEnabled","\xcb","\x3f","\x44","\x18"),
	HX_HCSTRING("__selectionIndex","\x46","\x0a","\xc3","\x7d"),
	HX_HCSTRING("__showCursor","\xd3","\xae","\xf0","\xe0"),
	HX_HCSTRING("__text","\xcd","\x2f","\xf2","\xfb"),
	HX_HCSTRING("__textEngine","\x6f","\x43","\x08","\x6c"),
	HX_HCSTRING("__textFormat","\xe4","\x8a","\x12","\x6d"),
	HX_HCSTRING("appendText","\xa7","\xcf","\x05","\x5b"),
	HX_HCSTRING("getCharBoundaries","\x74","\x85","\xa1","\x8b"),
	HX_HCSTRING("getCharIndexAtPoint","\x17","\xee","\x9c","\xaa"),
	HX_HCSTRING("getFirstCharInParagraph","\xf9","\x5c","\x3d","\x08"),
	HX_HCSTRING("getLineIndexAtPoint","\x35","\xdc","\x50","\x98"),
	HX_HCSTRING("getLineIndexOfChar","\xb5","\x68","\x99","\xa1"),
	HX_HCSTRING("getLineLength","\x30","\xec","\x21","\xd0"),
	HX_HCSTRING("getLineMetrics","\xb9","\xab","\xc6","\xf2"),
	HX_HCSTRING("getLineOffset","\xdd","\xee","\x59","\x91"),
	HX_HCSTRING("getLineText","\x77","\xdd","\x16","\xb0"),
	HX_HCSTRING("getParagraphLength","\xfe","\x0e","\x4e","\xc4"),
	HX_HCSTRING("getTextFormat","\xfa","\x6b","\xf1","\x90"),
	HX_HCSTRING("replaceSelectedText","\xfc","\xfe","\x33","\xbb"),
	HX_HCSTRING("replaceText","\x01","\x6b","\x95","\x61"),
	HX_HCSTRING("setSelection","\x4a","\xb8","\x6a","\xb2"),
	HX_HCSTRING("setTextFormat","\x06","\x4e","\xf7","\xd5"),
	HX_HCSTRING("__getAttributeMatch","\x9f","\x3b","\x2c","\x45"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__getCursor","\xec","\x60","\x6b","\xe9"),
	HX_HCSTRING("__getPosition","\x3f","\xa4","\x66","\x39"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__hitTestMask","\xb1","\x14","\xfd","\x3b"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__startCursorTimer","\xed","\x46","\xa3","\x83"),
	HX_HCSTRING("__startTextInput","\x7b","\xae","\x85","\xaa"),
	HX_HCSTRING("__stopCursorTimer","\x0d","\xcd","\x6c","\x26"),
	HX_HCSTRING("__stopTextInput","\x9b","\x6c","\xcb","\xa1"),
	HX_HCSTRING("__updateLayout","\xb3","\xd8","\x3c","\x79"),
	HX_HCSTRING("__updateText","\x76","\x32","\x42","\x3e"),
	HX_HCSTRING("get_antiAliasType","\xbf","\xcf","\x6a","\xee"),
	HX_HCSTRING("set_antiAliasType","\xcb","\xa7","\xd8","\x11"),
	HX_HCSTRING("get_autoSize","\xd9","\x43","\x93","\xe4"),
	HX_HCSTRING("set_autoSize","\x4d","\x67","\x8c","\xf9"),
	HX_HCSTRING("get_background","\x37","\x1c","\x13","\x9c"),
	HX_HCSTRING("set_background","\xab","\x04","\x33","\xbc"),
	HX_HCSTRING("get_backgroundColor","\xac","\x1d","\x52","\x98"),
	HX_HCSTRING("set_backgroundColor","\xb8","\x10","\xef","\xd4"),
	HX_HCSTRING("get_border","\xb5","\xbc","\xa1","\x54"),
	HX_HCSTRING("set_border","\x29","\x5b","\x1f","\x58"),
	HX_HCSTRING("get_borderColor","\x6e","\xf4","\xb6","\x97"),
	HX_HCSTRING("set_borderColor","\x7a","\x71","\x82","\x93"),
	HX_HCSTRING("get_bottomScrollV","\x55","\x03","\xf8","\x91"),
	HX_HCSTRING("get_caretIndex","\xd8","\x3e","\x51","\x53"),
	HX_HCSTRING("get_defaultTextFormat","\xbc","\xca","\x8e","\x89"),
	HX_HCSTRING("set_defaultTextFormat","\xc8","\x98","\x97","\xdd"),
	HX_HCSTRING("get_displayAsPassword","\xe6","\xcd","\x44","\x69"),
	HX_HCSTRING("set_displayAsPassword","\xf2","\x9b","\x4d","\xbd"),
	HX_HCSTRING("get_embedFonts","\x74","\x4f","\xd7","\x04"),
	HX_HCSTRING("set_embedFonts","\xe8","\x37","\xf7","\x24"),
	HX_HCSTRING("get_gridFitType","\x9c","\xaa","\xf5","\x74"),
	HX_HCSTRING("set_gridFitType","\xa8","\x27","\xc1","\x70"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_htmlText","\xc1","\xd3","\x51","\xc5"),
	HX_HCSTRING("set_htmlText","\x35","\xf7","\x4a","\xda"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("get_maxChars","\xa2","\xa3","\xea","\xa4"),
	HX_HCSTRING("set_maxChars","\x16","\xc7","\xe3","\xb9"),
	HX_HCSTRING("get_maxScrollH","\xa0","\x35","\xf2","\x10"),
	HX_HCSTRING("get_maxScrollV","\xae","\x35","\xf2","\x10"),
	HX_HCSTRING("get_mouseWheelEnabled","\xc2","\x19","\x02","\xe4"),
	HX_HCSTRING("set_mouseWheelEnabled","\xce","\xe7","\x0a","\x38"),
	HX_HCSTRING("get_multiline","\xc4","\xa6","\x75","\x5f"),
	HX_HCSTRING("set_multiline","\xd0","\x88","\x7b","\xa4"),
	HX_HCSTRING("get_numLines","\xe2","\xa5","\x2b","\xe7"),
	HX_HCSTRING("get_restrict","\x45","\x7f","\xb8","\xa6"),
	HX_HCSTRING("set_restrict","\xb9","\xa2","\xb1","\xbb"),
	HX_HCSTRING("get_scrollH","\xb2","\x93","\xd2","\xb6"),
	HX_HCSTRING("set_scrollH","\xbe","\x9a","\x3f","\xc1"),
	HX_HCSTRING("get_scrollV","\xc0","\x93","\xd2","\xb6"),
	HX_HCSTRING("set_scrollV","\xcc","\x9a","\x3f","\xc1"),
	HX_HCSTRING("get_selectable","\xdf","\x3e","\x20","\x3a"),
	HX_HCSTRING("set_selectable","\x53","\x27","\x40","\x5a"),
	HX_HCSTRING("get_selectionBeginIndex","\x2c","\x26","\x6d","\xdf"),
	HX_HCSTRING("get_selectionEndIndex","\x7a","\x10","\xf0","\xc9"),
	HX_HCSTRING("get_sharpness","\x58","\xf6","\x88","\xdc"),
	HX_HCSTRING("set_sharpness","\x64","\xd8","\x8e","\x21"),
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("get_textColor","\x4d","\xd5","\xad","\xa4"),
	HX_HCSTRING("set_textColor","\x59","\xb7","\xb3","\xe9"),
	HX_HCSTRING("get_textWidth","\xf0","\x19","\xb4","\x24"),
	HX_HCSTRING("get_textHeight","\xbd","\x10","\x32","\xaf"),
	HX_HCSTRING("get_type","\x43","\xae","\xc3","\xcc"),
	HX_HCSTRING("set_type","\xb7","\x07","\x21","\x7b"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("get_wordWrap","\xbd","\xc8","\xf4","\xb5"),
	HX_HCSTRING("set_wordWrap","\x31","\xec","\xed","\xca"),
	HX_HCSTRING("stage_onMouseMove","\x76","\xbc","\x61","\xde"),
	HX_HCSTRING("stage_onMouseUp","\x80","\xac","\x07","\xd1"),
	HX_HCSTRING("this_onAddedToStage","\x23","\x9e","\xce","\x72"),
	HX_HCSTRING("this_onFocusIn","\x1d","\x62","\xfb","\xdc"),
	HX_HCSTRING("this_onFocusOut","\x56","\x0b","\xff","\x7e"),
	HX_HCSTRING("this_onMouseDown","\x67","\x5d","\xaa","\x6d"),
	HX_HCSTRING("window_onKeyDown","\xf3","\x7d","\x3b","\xd1"),
	HX_HCSTRING("window_onTextInput","\xef","\xa0","\x6a","\xc0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextField_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextField_obj::__defaultTextFormat,"__defaultTextFormat");
	HX_MARK_MEMBER_NAME(TextField_obj::__regexAlign,"__regexAlign");
	HX_MARK_MEMBER_NAME(TextField_obj::__regexColor,"__regexColor");
	HX_MARK_MEMBER_NAME(TextField_obj::__regexBlockIndent,"__regexBlockIndent");
	HX_MARK_MEMBER_NAME(TextField_obj::__regexBreakTag,"__regexBreakTag");
	HX_MARK_MEMBER_NAME(TextField_obj::__regexEntities,"__regexEntities");
	HX_MARK_MEMBER_NAME(TextField_obj::__regexFace,"__regexFace");
	HX_MARK_MEMBER_NAME(TextField_obj::__regexHTMLTag,"__regexHTMLTag");
	HX_MARK_MEMBER_NAME(TextField_obj::__regexIndent,"__regexIndent");
	HX_MARK_MEMBER_NAME(TextField_obj::__regexLeading,"__regexLeading");
	HX_MARK_MEMBER_NAME(TextField_obj::__regexLeftMargin,"__regexLeftMargin");
	HX_MARK_MEMBER_NAME(TextField_obj::__regexRightMargin,"__regexRightMargin");
	HX_MARK_MEMBER_NAME(TextField_obj::__regexTabStops,"__regexTabStops");
	HX_MARK_MEMBER_NAME(TextField_obj::__regexSize,"__regexSize");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextField_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextField_obj::__defaultTextFormat,"__defaultTextFormat");
	HX_VISIT_MEMBER_NAME(TextField_obj::__regexAlign,"__regexAlign");
	HX_VISIT_MEMBER_NAME(TextField_obj::__regexColor,"__regexColor");
	HX_VISIT_MEMBER_NAME(TextField_obj::__regexBlockIndent,"__regexBlockIndent");
	HX_VISIT_MEMBER_NAME(TextField_obj::__regexBreakTag,"__regexBreakTag");
	HX_VISIT_MEMBER_NAME(TextField_obj::__regexEntities,"__regexEntities");
	HX_VISIT_MEMBER_NAME(TextField_obj::__regexFace,"__regexFace");
	HX_VISIT_MEMBER_NAME(TextField_obj::__regexHTMLTag,"__regexHTMLTag");
	HX_VISIT_MEMBER_NAME(TextField_obj::__regexIndent,"__regexIndent");
	HX_VISIT_MEMBER_NAME(TextField_obj::__regexLeading,"__regexLeading");
	HX_VISIT_MEMBER_NAME(TextField_obj::__regexLeftMargin,"__regexLeftMargin");
	HX_VISIT_MEMBER_NAME(TextField_obj::__regexRightMargin,"__regexRightMargin");
	HX_VISIT_MEMBER_NAME(TextField_obj::__regexTabStops,"__regexTabStops");
	HX_VISIT_MEMBER_NAME(TextField_obj::__regexSize,"__regexSize");
};

#endif

hx::Class TextField_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__defaultTextFormat","\xc5","\xf0","\xd0","\xbd"),
	HX_HCSTRING("__regexAlign","\x9e","\x21","\xd1","\x2d"),
	HX_HCSTRING("__regexColor","\x3c","\x3c","\x9c","\x56"),
	HX_HCSTRING("__regexBlockIndent","\x32","\x61","\xa3","\xa8"),
	HX_HCSTRING("__regexBreakTag","\xa2","\xf1","\x6b","\xe6"),
	HX_HCSTRING("__regexEntities","\x08","\x59","\x3f","\x8c"),
	HX_HCSTRING("__regexFace","\xe4","\xc7","\x66","\x12"),
	HX_HCSTRING("__regexHTMLTag","\xe8","\x74","\xf4","\x76"),
	HX_HCSTRING("__regexIndent","\x73","\xbf","\x84","\x3f"),
	HX_HCSTRING("__regexLeading","\xdf","\x25","\x4c","\x7d"),
	HX_HCSTRING("__regexLeftMargin","\x1c","\x6e","\x33","\xf3"),
	HX_HCSTRING("__regexRightMargin","\xc3","\x30","\xd7","\x98"),
	HX_HCSTRING("__regexTabStops","\x63","\x56","\x64","\xec"),
	HX_HCSTRING("__regexSize","\x08","\xb4","\x04","\x1b"),
	::String(null()) };

void TextField_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.text.TextField","\xca","\xa8","\xd5","\xef");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextField_obj::__GetStatic;
	__mClass->mSetStaticField = &TextField_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextField_obj >;
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

void TextField_obj::__boot()
{
	__regexAlign= ::EReg_obj::__new(HX_HCSTRING("align=(\"([^\"]+)\"|'([^']+)')","\x46","\x80","\x3f","\x0e"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	__regexColor= ::EReg_obj::__new(HX_HCSTRING("color=(\"#([^\"]+)\"|'#([^']+)')","\x36","\x15","\x0f","\x76"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	__regexBlockIndent= ::EReg_obj::__new(HX_HCSTRING("blockindent=(\"([^\"]+)\"|'([^']+)')","\xfa","\xc9","\x96","\x24"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	__regexBreakTag= ::EReg_obj::__new(HX_HCSTRING("<br\\s*/?>","\x47","\xed","\x43","\xf6"),HX_HCSTRING("gi","\x22","\x5a","\x00","\x00"));
struct _Function_0_1{
	inline static Array< ::Dynamic > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/text/TextField.hx",44,0xccf02094)
		{
			HX_STACK_LINE(44)
			::EReg tmp = ::EReg_obj::__new(HX_HCSTRING("&quot;","\x2c","\xd9","\x81","\x8f"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(44)
			::EReg tmp1 = ::EReg_obj::__new(HX_HCSTRING("&apos;","\x22","\x7f","\xca","\x55"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(44)
			::EReg tmp2 = ::EReg_obj::__new(HX_HCSTRING("&amp;","\xdd","\xd4","\xaa","\x21"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(44)
			::EReg tmp3 = ::EReg_obj::__new(HX_HCSTRING("&lt;","\x4d","\x74","\x70","\x19"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(44)
			::EReg tmp4 = ::EReg_obj::__new(HX_HCSTRING("&gt;","\x08","\xa9","\x6c","\x19"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(44)
			return Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4);
		}
		return null();
	}
};
	__regexEntities= _Function_0_1::Block();
	__regexFace= ::EReg_obj::__new(HX_HCSTRING("face=(\"([^\"]+)\"|'([^']+)')","\x1e","\x00","\x2b","\x89"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	__regexHTMLTag= ::EReg_obj::__new(HX_HCSTRING("<.*?>","\x97","\xb4","\x92","\xaa"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));
	__regexIndent= ::EReg_obj::__new(HX_HCSTRING(" indent=(\"([^\"]+)\"|'([^']+)')","\x4d","\xdb","\x5b","\x9f"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	__regexLeading= ::EReg_obj::__new(HX_HCSTRING("leading=(\"([^\"]+)\"|'([^']+)')","\x07","\x25","\x07","\xae"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	__regexLeftMargin= ::EReg_obj::__new(HX_HCSTRING("leftmargin=(\"([^\"]+)\"|'([^']+)')","\xf6","\xe4","\xc9","\x11"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	__regexRightMargin= ::EReg_obj::__new(HX_HCSTRING("rightmargin=(\"([^\"]+)\"|'([^']+)')","\x4b","\x8e","\x21","\xc0"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	__regexTabStops= ::EReg_obj::__new(HX_HCSTRING("tabstops=(\"([^\"]+)\"|'([^']+)')","\x7d","\xfe","\x73","\x09"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	__regexSize= ::EReg_obj::__new(HX_HCSTRING("size=(\"([^\"]+)\"|'([^']+)')","\x42","\x27","\xbe","\x87"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
}

} // end namespace openfl
} // end namespace text
