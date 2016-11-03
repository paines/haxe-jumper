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
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_text_GlyphPosition
#include <lime/text/GlyphPosition.h>
#endif
#ifndef INCLUDED_lime_text_TextLayout
#include <lime/text/TextLayout.h>
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
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif
namespace openfl{
namespace _internal{
namespace text{

Void TextEngine_obj::__construct(::openfl::text::TextField textField)
{
HX_STACK_FRAME("openfl._internal.text.TextEngine","new",0xcc80cb52,"openfl._internal.text.TextEngine.new","openfl/_internal/text/TextEngine.hx",119,0xdff93b7f)
HX_STACK_THIS(this)
HX_STACK_ARG(textField,"textField")
{
	HX_STACK_LINE(121)
	this->textField = textField;
	HX_STACK_LINE(123)
	this->width = (int)100;
	HX_STACK_LINE(124)
	this->height = (int)100;
	HX_STACK_LINE(125)
	this->text = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(127)
	::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	this->bounds = tmp;
	HX_STACK_LINE(129)
	this->type = ((Dynamic)((int)0));
	HX_STACK_LINE(130)
	this->autoSize = ((Dynamic)((int)2));
	HX_STACK_LINE(131)
	this->embedFonts = false;
	HX_STACK_LINE(132)
	this->selectable = true;
	HX_STACK_LINE(133)
	this->borderColor = (int)0;
	HX_STACK_LINE(134)
	this->border = false;
	HX_STACK_LINE(135)
	this->backgroundColor = (int)16777215;
	HX_STACK_LINE(136)
	this->background = false;
	HX_STACK_LINE(137)
	this->gridFitType = ((Dynamic)((int)1));
	HX_STACK_LINE(138)
	this->maxChars = (int)0;
	HX_STACK_LINE(139)
	this->multiline = false;
	HX_STACK_LINE(140)
	this->sharpness = (int)0;
	HX_STACK_LINE(141)
	this->scrollH = (int)0;
	HX_STACK_LINE(142)
	this->scrollV = (int)1;
	HX_STACK_LINE(143)
	this->wordWrap = false;
	HX_STACK_LINE(145)
	this->lineAscents = Array_obj< Float >::__new();
	HX_STACK_LINE(146)
	this->lineBreaks = Array_obj< int >::__new();
	HX_STACK_LINE(147)
	this->lineDescents = Array_obj< Float >::__new();
	HX_STACK_LINE(148)
	this->lineLeadings = Array_obj< Float >::__new();
	HX_STACK_LINE(149)
	this->lineHeights = Array_obj< Float >::__new();
	HX_STACK_LINE(150)
	this->lineWidths = Array_obj< Float >::__new();
	HX_STACK_LINE(151)
	this->layoutGroups = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(152)
	this->textFormatRanges = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//TextEngine_obj::~TextEngine_obj() { }

Dynamic TextEngine_obj::__CreateEmpty() { return  new TextEngine_obj; }
hx::ObjectPtr< TextEngine_obj > TextEngine_obj::__new(::openfl::text::TextField textField)
{  hx::ObjectPtr< TextEngine_obj > _result_ = new TextEngine_obj();
	_result_->__construct(textField);
	return _result_;}

Dynamic TextEngine_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextEngine_obj > _result_ = new TextEngine_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void TextEngine_obj::getBounds( ){
{
		HX_STACK_FRAME("openfl._internal.text.TextEngine","getBounds",0x5ce2cc1d,"openfl._internal.text.TextEngine.getBounds","openfl/_internal/text/TextEngine.hx",194,0xdff93b7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(196)
		bool tmp = this->border;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(196)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(196)
		if ((tmp)){
			HX_STACK_LINE(196)
			tmp1 = (int)1;
		}
		else{
			HX_STACK_LINE(196)
			tmp1 = (int)0;
		}
		HX_STACK_LINE(196)
		int padding = tmp1;		HX_STACK_VAR(padding,"padding");
		HX_STACK_LINE(198)
		Float tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(198)
		int tmp3 = padding;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(198)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(198)
		::openfl::geom::Rectangle tmp5 = this->bounds;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(198)
		tmp5->width = tmp4;
		HX_STACK_LINE(199)
		Float tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(199)
		int tmp7 = padding;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(199)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(199)
		::openfl::geom::Rectangle tmp9 = this->bounds;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(199)
		tmp9->height = tmp8;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getBounds,(void))

::String TextEngine_obj::getLine( int index){
	HX_STACK_FRAME("openfl._internal.text.TextEngine","getLine",0xf060239c,"openfl._internal.text.TextEngine.getLine","openfl/_internal/text/TextEngine.hx",468,0xdff93b7f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(470)
	bool tmp = (index < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(470)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(470)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(470)
	if ((tmp1)){
		HX_STACK_LINE(470)
		int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(470)
		int tmp4 = this->lineBreaks->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(470)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(470)
		int tmp6 = (tmp5 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(470)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(470)
		tmp2 = (tmp3 > tmp7);
	}
	else{
		HX_STACK_LINE(470)
		tmp2 = true;
	}
	HX_STACK_LINE(470)
	if ((tmp2)){
		HX_STACK_LINE(472)
		return null();
	}
	HX_STACK_LINE(476)
	int tmp3 = this->lineBreaks->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(476)
	bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(476)
	if ((tmp4)){
		HX_STACK_LINE(478)
		::String tmp5 = this->text;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(478)
		return tmp5;
	}
	else{
		HX_STACK_LINE(482)
		::String tmp5 = this->text;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(482)
		bool tmp6 = (index > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(482)
		int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(482)
		if ((tmp6)){
			HX_STACK_LINE(482)
			int tmp8 = (index - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(482)
			tmp7 = this->lineBreaks->__get(tmp8);
		}
		else{
			HX_STACK_LINE(482)
			tmp7 = (int)0;
		}
		HX_STACK_LINE(482)
		int tmp8 = this->lineBreaks->__get(index);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(482)
		::String tmp9 = tmp5.substring(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(482)
		return tmp9;
	}
	HX_STACK_LINE(476)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getLine,return )

int TextEngine_obj::getLineBreakIndex( hx::Null< int >  __o_startIndex){
int startIndex = __o_startIndex.Default(0);
	HX_STACK_FRAME("openfl._internal.text.TextEngine","getLineBreakIndex",0x0741948f,"openfl._internal.text.TextEngine.getLineBreakIndex","openfl/_internal/text/TextEngine.hx",489,0xdff93b7f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(startIndex,"startIndex")
{
		HX_STACK_LINE(491)
		::String tmp = this->text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(491)
		int tmp1 = startIndex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(491)
		int tmp2 = tmp.indexOf(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(491)
		int cr = tmp2;		HX_STACK_VAR(cr,"cr");
		HX_STACK_LINE(492)
		::String tmp3 = this->text;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(492)
		int tmp4 = startIndex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(492)
		int tmp5 = tmp3.indexOf(HX_HCSTRING("\r","\x0d","\x00","\x00","\x00"),tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(492)
		int lf = tmp5;		HX_STACK_VAR(lf,"lf");
		HX_STACK_LINE(494)
		bool tmp6 = (cr == (int)-1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(494)
		if ((tmp6)){
			HX_STACK_LINE(494)
			int tmp7 = lf;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(494)
			return tmp7;
		}
		HX_STACK_LINE(495)
		bool tmp7 = (lf == (int)-1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(495)
		if ((tmp7)){
			HX_STACK_LINE(495)
			int tmp8 = cr;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(495)
			return tmp8;
		}
		HX_STACK_LINE(497)
		bool tmp8 = (cr < lf);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(497)
		int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(497)
		if ((tmp8)){
			HX_STACK_LINE(497)
			tmp9 = cr;
		}
		else{
			HX_STACK_LINE(497)
			tmp9 = lf;
		}
		HX_STACK_LINE(497)
		return tmp9;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getLineBreakIndex,return )

Void TextEngine_obj::getLineMeasurements( ){
{
		HX_STACK_FRAME("openfl._internal.text.TextEngine","getLineMeasurements",0x203f1eb3,"openfl._internal.text.TextEngine.getLineMeasurements","openfl/_internal/text/TextEngine.hx",502,0xdff93b7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(504)
		int tmp = this->lineAscents->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(504)
		this->lineAscents->splice((int)0,tmp);
		HX_STACK_LINE(505)
		int tmp1 = this->lineDescents->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(505)
		this->lineDescents->splice((int)0,tmp1);
		HX_STACK_LINE(506)
		int tmp2 = this->lineLeadings->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(506)
		this->lineLeadings->splice((int)0,tmp2);
		HX_STACK_LINE(507)
		int tmp3 = this->lineHeights->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(507)
		this->lineHeights->splice((int)0,tmp3);
		HX_STACK_LINE(508)
		int tmp4 = this->lineWidths->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(508)
		this->lineWidths->splice((int)0,tmp4);
		HX_STACK_LINE(510)
		Float currentLineAscent = ((Float)0.0);		HX_STACK_VAR(currentLineAscent,"currentLineAscent");
		HX_STACK_LINE(511)
		Float currentLineDescent = ((Float)0.0);		HX_STACK_VAR(currentLineDescent,"currentLineDescent");
		HX_STACK_LINE(512)
		Dynamic currentLineLeading = null();		HX_STACK_VAR(currentLineLeading,"currentLineLeading");
		HX_STACK_LINE(513)
		Float currentLineHeight = ((Float)0.0);		HX_STACK_VAR(currentLineHeight,"currentLineHeight");
		HX_STACK_LINE(514)
		Float currentLineWidth = ((Float)0.0);		HX_STACK_VAR(currentLineWidth,"currentLineWidth");
		HX_STACK_LINE(516)
		this->textWidth = (int)0;
		HX_STACK_LINE(517)
		this->textHeight = (int)0;
		HX_STACK_LINE(518)
		this->numLines = (int)1;
		HX_STACK_LINE(519)
		this->bottomScrollV = (int)0;
		HX_STACK_LINE(520)
		this->maxScrollH = (int)0;
		HX_STACK_LINE(522)
		{
			HX_STACK_LINE(522)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(522)
			Array< ::Dynamic > _g1 = this->layoutGroups;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(522)
			while((true)){
				HX_STACK_LINE(522)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(522)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(522)
				if ((tmp6)){
					HX_STACK_LINE(522)
					break;
				}
				HX_STACK_LINE(522)
				::openfl::_internal::text::TextLayoutGroup tmp7 = _g1->__get(_g).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(522)
				::openfl::_internal::text::TextLayoutGroup group = tmp7;		HX_STACK_VAR(group,"group");
				HX_STACK_LINE(522)
				++(_g);
				HX_STACK_LINE(524)
				while((true)){
					HX_STACK_LINE(524)
					int tmp8 = group->lineIndex;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(524)
					int tmp9 = this->numLines;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(524)
					int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(524)
					bool tmp11 = (tmp8 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(524)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(524)
					if ((tmp12)){
						HX_STACK_LINE(524)
						break;
					}
					HX_STACK_LINE(526)
					Float tmp13 = currentLineAscent;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(526)
					this->lineAscents->push(tmp13);
					HX_STACK_LINE(527)
					Float tmp14 = currentLineDescent;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(527)
					this->lineDescents->push(tmp14);
					HX_STACK_LINE(528)
					bool tmp15 = (currentLineLeading != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(528)
					Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(528)
					if ((tmp15)){
						HX_STACK_LINE(528)
						tmp16 = currentLineLeading;
					}
					else{
						HX_STACK_LINE(528)
						tmp16 = (int)0;
					}
					HX_STACK_LINE(528)
					this->lineLeadings->push(tmp16);
					HX_STACK_LINE(529)
					Float tmp17 = currentLineHeight;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(529)
					this->lineHeights->push(tmp17);
					HX_STACK_LINE(530)
					Float tmp18 = currentLineWidth;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(530)
					this->lineWidths->push(tmp18);
					HX_STACK_LINE(532)
					currentLineAscent = (int)0;
					HX_STACK_LINE(533)
					currentLineDescent = (int)0;
					HX_STACK_LINE(534)
					currentLineLeading = null();
					HX_STACK_LINE(535)
					currentLineHeight = (int)0;
					HX_STACK_LINE(536)
					currentLineWidth = (int)0;
					HX_STACK_LINE(538)
					(this->numLines)++;
					HX_STACK_LINE(540)
					Float tmp19 = this->textHeight;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(540)
					Float tmp20 = this->height;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(540)
					Float tmp21 = (tmp20 - (int)2);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(540)
					bool tmp22 = (tmp19 <= tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(540)
					if ((tmp22)){
						HX_STACK_LINE(542)
						(this->bottomScrollV)++;
					}
				}
				HX_STACK_LINE(548)
				Float tmp8 = currentLineAscent;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(548)
				Float tmp9 = group->ascent;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(548)
				Float tmp10 = ::Math_obj::max(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(548)
				currentLineAscent = tmp10;
				HX_STACK_LINE(549)
				Float tmp11 = currentLineDescent;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(549)
				Float tmp12 = group->descent;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(549)
				Float tmp13 = ::Math_obj::max(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(549)
				currentLineDescent = tmp13;
				HX_STACK_LINE(551)
				bool tmp14 = (currentLineLeading == null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(551)
				if ((tmp14)){
					HX_STACK_LINE(553)
					currentLineLeading = group->leading;
				}
				else{
					HX_STACK_LINE(557)
					Dynamic tmp15 = currentLineLeading;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(557)
					int tmp16 = group->leading;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(557)
					Float tmp17 = ::Math_obj::max(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(557)
					int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(557)
					currentLineLeading = tmp18;
				}
				HX_STACK_LINE(561)
				Float tmp15 = currentLineHeight;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(561)
				Float tmp16 = group->height;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(561)
				Float tmp17 = ::Math_obj::max(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(561)
				currentLineHeight = tmp17;
				HX_STACK_LINE(562)
				Float tmp18 = (group->offsetX - (int)2);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(562)
				Float tmp19 = group->width;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(562)
				Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(562)
				currentLineWidth = tmp20;
				HX_STACK_LINE(564)
				Float tmp21 = currentLineWidth;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(564)
				Float tmp22 = this->textWidth;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(564)
				bool tmp23 = (tmp21 > tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(564)
				if ((tmp23)){
					HX_STACK_LINE(566)
					this->textWidth = currentLineWidth;
				}
				HX_STACK_LINE(570)
				Float tmp24 = (group->offsetY - (int)2);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(570)
				Float tmp25 = group->ascent;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(570)
				Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(570)
				Float tmp27 = group->descent;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(570)
				Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(570)
				this->textHeight = tmp28;
			}
		}
		HX_STACK_LINE(574)
		Float tmp5 = currentLineAscent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(574)
		this->lineAscents->push(tmp5);
		HX_STACK_LINE(575)
		Float tmp6 = currentLineDescent;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(575)
		this->lineDescents->push(tmp6);
		HX_STACK_LINE(576)
		bool tmp7 = (currentLineLeading != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(576)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(576)
		if ((tmp7)){
			HX_STACK_LINE(576)
			tmp8 = currentLineLeading;
		}
		else{
			HX_STACK_LINE(576)
			tmp8 = (int)0;
		}
		HX_STACK_LINE(576)
		this->lineLeadings->push(tmp8);
		HX_STACK_LINE(577)
		Float tmp9 = currentLineHeight;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(577)
		this->lineHeights->push(tmp9);
		HX_STACK_LINE(578)
		Float tmp10 = currentLineWidth;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(578)
		this->lineWidths->push(tmp10);
		HX_STACK_LINE(580)
		int tmp11 = this->numLines;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(580)
		bool tmp12 = (tmp11 == (int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(580)
		if ((tmp12)){
			HX_STACK_LINE(582)
			this->bottomScrollV = (int)1;
			HX_STACK_LINE(584)
			bool tmp13 = (currentLineLeading > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(584)
			if ((tmp13)){
				HX_STACK_LINE(586)
				hx::AddEq(this->textHeight,currentLineLeading);
			}
		}
		else{
			HX_STACK_LINE(590)
			Float tmp13 = this->textHeight;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(590)
			Float tmp14 = this->height;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(590)
			Float tmp15 = (tmp14 - (int)2);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(590)
			bool tmp16 = (tmp13 <= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(590)
			if ((tmp16)){
				HX_STACK_LINE(592)
				(this->bottomScrollV)++;
			}
		}
		HX_STACK_LINE(596)
		Dynamic tmp13 = this->autoSize;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(596)
		bool tmp14 = (tmp13 != ((Dynamic)((int)2)));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(596)
		if ((tmp14)){
			HX_STACK_LINE(598)
			Dynamic tmp15 = this->autoSize;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(598)
			Dynamic _g = tmp15;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(598)
			Dynamic tmp16 = _g;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(598)
			switch( (int)(tmp16)){
				case (int)1: case (int)3: case (int)0: {
					HX_STACK_LINE(602)
					bool tmp17 = this->wordWrap;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(602)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(602)
					bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(602)
					bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(602)
					if ((tmp19)){
						HX_STACK_LINE(602)
						Float tmp21 = this->width;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(602)
						Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(602)
						Float tmp23 = this->textWidth;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(602)
						Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(602)
						Float tmp25 = (tmp24 + (int)4);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(602)
						Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(602)
						tmp20 = (tmp22 < tmp26);
					}
					else{
						HX_STACK_LINE(602)
						tmp20 = false;
					}
					HX_STACK_LINE(602)
					if ((tmp20)){
						HX_STACK_LINE(604)
						Float tmp21 = this->textWidth;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(604)
						Float tmp22 = (tmp21 + (int)4);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(604)
						this->width = tmp22;
					}
					HX_STACK_LINE(608)
					Float tmp21 = this->textHeight;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(608)
					Float tmp22 = (tmp21 + (int)4);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(608)
					this->height = tmp22;
					HX_STACK_LINE(609)
					int tmp23 = this->numLines;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(609)
					this->bottomScrollV = tmp23;
				}
				;break;
				default: {
				}
			}
		}
		HX_STACK_LINE(617)
		Float tmp15 = this->textWidth;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(617)
		Float tmp16 = this->width;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(617)
		Float tmp17 = (tmp16 - (int)4);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(617)
		bool tmp18 = (tmp15 > tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(617)
		if ((tmp18)){
			HX_STACK_LINE(619)
			Float tmp19 = this->textWidth;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(619)
			Float tmp20 = this->width;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(619)
			Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(619)
			Float tmp22 = (tmp21 + (int)4);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(619)
			int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(619)
			this->maxScrollH = tmp23;
		}
		else{
			HX_STACK_LINE(623)
			this->maxScrollH = (int)0;
		}
		HX_STACK_LINE(627)
		int tmp19 = this->numLines;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(627)
		int tmp20 = this->bottomScrollV;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(627)
		int tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(627)
		int tmp22 = (tmp21 + (int)1);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(627)
		this->maxScrollV = tmp22;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getLineMeasurements,(void))

Void TextEngine_obj::getLayoutGroups( ){
{
		HX_STACK_FRAME("openfl._internal.text.TextEngine","getLayoutGroups",0xa3099646,"openfl._internal.text.TextEngine.getLayoutGroups","openfl/_internal/text/TextEngine.hx",632,0xdff93b7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(632)
		::openfl::_internal::text::TextEngine _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(634)
		int tmp = this->layoutGroups->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(634)
		this->layoutGroups->splice((int)0,tmp);
		HX_STACK_LINE(636)
		int rangeIndex = (int)-1;		HX_STACK_VAR(rangeIndex,"rangeIndex");
		HX_STACK_LINE(637)
		::openfl::_internal::text::TextFormatRange formatRange = null();		HX_STACK_VAR(formatRange,"formatRange");
		HX_STACK_LINE(638)
		::lime::text::Font font = null();		HX_STACK_VAR(font,"font");
		HX_STACK_LINE(640)
		::openfl::text::TextFormat tmp1 = ::openfl::text::TextField_obj::__defaultTextFormat;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(640)
		::openfl::text::TextFormat tmp2 = tmp1->clone();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(640)
		::openfl::text::TextFormat currentFormat = tmp2;		HX_STACK_VAR(currentFormat,"currentFormat");
		HX_STACK_LINE(642)
		int leading = (int)0;		HX_STACK_VAR(leading,"leading");
		HX_STACK_LINE(643)
		Float ascent = ((Float)0.0);		HX_STACK_VAR(ascent,"ascent");
		HX_STACK_LINE(644)
		Float descent = ((Float)0.0);		HX_STACK_VAR(descent,"descent");
		HX_STACK_LINE(646)
		::openfl::_internal::text::TextLayoutGroup layoutGroup;		HX_STACK_VAR(layoutGroup,"layoutGroup");
		HX_STACK_LINE(646)
		Array< Float > advances;		HX_STACK_VAR(advances,"advances");
		HX_STACK_LINE(647)
		Float widthValue;		HX_STACK_VAR(widthValue,"widthValue");
		HX_STACK_LINE(647)
		Float heightValue = ((Float)0.0);		HX_STACK_VAR(heightValue,"heightValue");
		HX_STACK_LINE(649)
		Float spaceWidth = ((Float)0.0);		HX_STACK_VAR(spaceWidth,"spaceWidth");
		HX_STACK_LINE(650)
		int previousSpaceIndex = (int)0;		HX_STACK_VAR(previousSpaceIndex,"previousSpaceIndex");
		HX_STACK_LINE(651)
		::String tmp3 = this->text;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(651)
		int tmp4 = tmp3.indexOf(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(651)
		int spaceIndex = tmp4;		HX_STACK_VAR(spaceIndex,"spaceIndex");
		HX_STACK_LINE(652)
		int tmp5 = this->getLineBreakIndex(null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(652)
		int breakIndex = tmp5;		HX_STACK_VAR(breakIndex,"breakIndex");
		HX_STACK_LINE(654)
		Float marginRight = ((Float)0.0);		HX_STACK_VAR(marginRight,"marginRight");
		HX_STACK_LINE(655)
		Float offsetX = ((Float)2.0);		HX_STACK_VAR(offsetX,"offsetX");
		HX_STACK_LINE(656)
		Float offsetY = ((Float)2.0);		HX_STACK_VAR(offsetY,"offsetY");
		HX_STACK_LINE(657)
		int textIndex = (int)0;		HX_STACK_VAR(textIndex,"textIndex");
		HX_STACK_LINE(658)
		int lineIndex = (int)0;		HX_STACK_VAR(lineIndex,"lineIndex");
		HX_STACK_LINE(659)
		::openfl::text::TextFormat lineFormat = null();		HX_STACK_VAR(lineFormat,"lineFormat");
		HX_STACK_LINE(813)
		{
			HX_STACK_LINE(813)
			int tmp6 = rangeIndex;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(813)
			int tmp7 = _g->textFormatRanges->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(813)
			int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(813)
			bool tmp9 = (tmp6 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(813)
			if ((tmp9)){
				HX_STACK_LINE(813)
				(rangeIndex)++;
				HX_STACK_LINE(813)
				::openfl::_internal::text::TextFormatRange tmp10 = _g->textFormatRanges->__get(rangeIndex).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(813)
				formatRange = tmp10;
				HX_STACK_LINE(813)
				::openfl::text::TextFormat tmp11 = formatRange->format;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(813)
				currentFormat->__merge(tmp11);
				HX_STACK_LINE(813)
				::openfl::text::TextFormat tmp12 = currentFormat;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(813)
				::openfl::text::Font tmp13 = ::openfl::_internal::text::TextEngine_obj::getFontInstance(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(813)
				font = tmp13;
				HX_STACK_LINE(813)
				bool tmp14 = (font != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(813)
				if ((tmp14)){
					HX_STACK_LINE(813)
					int tmp15 = font->get_ascender();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(813)
					int tmp16 = font->get_unitsPerEM();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(813)
					Float tmp17 = (Float(tmp15) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(813)
					Dynamic tmp18 = currentFormat->size;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(813)
					Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(813)
					ascent = tmp19;
					HX_STACK_LINE(813)
					int tmp20 = font->get_descender();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(813)
					int tmp21 = font->get_unitsPerEM();		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(813)
					Float tmp22 = (Float(tmp20) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(813)
					Dynamic tmp23 = currentFormat->size;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(813)
					Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(813)
					Float tmp25 = ::Math_obj::abs(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(813)
					descent = tmp25;
					HX_STACK_LINE(813)
					leading = currentFormat->leading;
					HX_STACK_LINE(813)
					Float tmp26 = (ascent + descent);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(813)
					int tmp27 = leading;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(813)
					Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(813)
					heightValue = tmp28;
				}
				else{
					HX_STACK_LINE(813)
					ascent = currentFormat->size;
					HX_STACK_LINE(813)
					Float tmp15 = (currentFormat->size * ((Float)0.185));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(813)
					descent = tmp15;
					HX_STACK_LINE(813)
					leading = currentFormat->leading;
					HX_STACK_LINE(813)
					Float tmp16 = (ascent + descent);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(813)
					int tmp17 = leading;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(813)
					Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(813)
					heightValue = tmp18;
				}
				HX_STACK_LINE(813)
				bool tmp15 = (spaceIndex > (int)-1);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(813)
				if ((tmp15)){
					HX_STACK_LINE(813)
					Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(813)
					{
						HX_STACK_LINE(813)
						bool tmp17 = (_g->__textLayout == null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(813)
						if ((tmp17)){
							HX_STACK_LINE(813)
							::lime::text::TextLayout tmp18 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(813)
							_g->__textLayout = tmp18;
						}
						HX_STACK_LINE(813)
						Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
						HX_STACK_LINE(813)
						_g->__textLayout->set_text(null());
						HX_STACK_LINE(813)
						::lime::text::Font tmp18 = font;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(813)
						_g->__textLayout->set_font(tmp18);
						HX_STACK_LINE(813)
						Dynamic tmp19 = formatRange->format->size;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(813)
						bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(813)
						if ((tmp20)){
							HX_STACK_LINE(813)
							Dynamic tmp21 = formatRange->format->size;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(813)
							_g->__textLayout->set_size(tmp21);
						}
						HX_STACK_LINE(813)
						_g->__textLayout->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
						HX_STACK_LINE(813)
						{
							HX_STACK_LINE(813)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(813)
							Array< ::Dynamic > _g2 = _g->__textLayout->get_positions();		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(813)
							while((true)){
								HX_STACK_LINE(813)
								bool tmp21 = (_g1 < _g2->length);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(813)
								bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(813)
								if ((tmp22)){
									HX_STACK_LINE(813)
									break;
								}
								HX_STACK_LINE(813)
								::lime::text::GlyphPosition tmp23 = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(813)
								::lime::text::GlyphPosition position = tmp23;		HX_STACK_VAR(position,"position");
								HX_STACK_LINE(813)
								++(_g1);
								HX_STACK_LINE(813)
								Float tmp24 = position->advance->x;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(813)
								hx::AddEq(width,tmp24);
							}
						}
						HX_STACK_LINE(813)
						tmp16 = width;
					}
					HX_STACK_LINE(813)
					spaceWidth = tmp16;
				}
			}
		}
		HX_STACK_LINE(815)
		lineFormat = formatRange->format;
		HX_STACK_LINE(816)
		bool wrap;		HX_STACK_VAR(wrap,"wrap");
		HX_STACK_LINE(818)
		while((true)){
			HX_STACK_LINE(818)
			int tmp6 = textIndex;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(818)
			::String tmp7 = this->text;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(818)
			int tmp8 = tmp7.length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(818)
			bool tmp9 = (tmp6 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(818)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(818)
			if ((tmp10)){
				HX_STACK_LINE(818)
				break;
			}
			HX_STACK_LINE(820)
			bool tmp11 = (breakIndex > (int)-1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(820)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(820)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(820)
			if ((tmp12)){
				HX_STACK_LINE(820)
				int tmp14 = spaceIndex;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(820)
				int tmp15 = (int)-1;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(820)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(820)
				int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(820)
				bool tmp18 = (tmp14 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(820)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(820)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(820)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(820)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(820)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(820)
				bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(820)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(820)
				bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(820)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(820)
				if ((tmp27)){
					HX_STACK_LINE(820)
					tmp13 = (breakIndex < spaceIndex);
				}
				else{
					HX_STACK_LINE(820)
					tmp13 = true;
				}
			}
			else{
				HX_STACK_LINE(820)
				tmp13 = false;
			}
			HX_STACK_LINE(820)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(820)
			if ((tmp13)){
				HX_STACK_LINE(820)
				tmp14 = (formatRange->end >= breakIndex);
			}
			else{
				HX_STACK_LINE(820)
				tmp14 = false;
			}
			HX_STACK_LINE(820)
			if ((tmp14)){
				HX_STACK_LINE(822)
				::openfl::_internal::text::TextLayoutGroup tmp15 = ::openfl::_internal::text::TextLayoutGroup_obj::__new(formatRange->format,textIndex,breakIndex);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(822)
				layoutGroup = tmp15;
				HX_STACK_LINE(823)
				{
					HX_STACK_LINE(823)
					Array< Float > advances1 = Array_obj< Float >::__new();		HX_STACK_VAR(advances1,"advances1");
					HX_STACK_LINE(823)
					bool tmp16 = (_g->__textLayout == null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(823)
					if ((tmp16)){
						HX_STACK_LINE(823)
						::lime::text::TextLayout tmp17 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(823)
						_g->__textLayout = tmp17;
					}
					HX_STACK_LINE(823)
					Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
					HX_STACK_LINE(823)
					_g->__textLayout->set_text(null());
					HX_STACK_LINE(823)
					::lime::text::Font tmp17 = font;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(823)
					_g->__textLayout->set_font(tmp17);
					HX_STACK_LINE(823)
					Dynamic tmp18 = formatRange->format->size;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(823)
					bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(823)
					if ((tmp19)){
						HX_STACK_LINE(823)
						Dynamic tmp20 = formatRange->format->size;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(823)
						_g->__textLayout->set_size(tmp20);
					}
					HX_STACK_LINE(823)
					::String tmp20 = this->text;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(823)
					int tmp21 = textIndex;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(823)
					int tmp22 = breakIndex;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(823)
					::String tmp23 = tmp20.substring(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(823)
					_g->__textLayout->set_text(tmp23);
					HX_STACK_LINE(823)
					{
						HX_STACK_LINE(823)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(823)
						Array< ::Dynamic > _g2 = _g->__textLayout->get_positions();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(823)
						while((true)){
							HX_STACK_LINE(823)
							bool tmp24 = (_g1 < _g2->length);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(823)
							bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(823)
							if ((tmp25)){
								HX_STACK_LINE(823)
								break;
							}
							HX_STACK_LINE(823)
							::lime::text::GlyphPosition tmp26 = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(823)
							::lime::text::GlyphPosition position = tmp26;		HX_STACK_VAR(position,"position");
							HX_STACK_LINE(823)
							++(_g1);
							HX_STACK_LINE(823)
							Float tmp27 = position->advance->x;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(823)
							advances1->push(tmp27);
						}
					}
					HX_STACK_LINE(823)
					layoutGroup->advances = advances1;
				}
				HX_STACK_LINE(824)
				layoutGroup->offsetX = offsetX;
				HX_STACK_LINE(825)
				layoutGroup->ascent = ascent;
				HX_STACK_LINE(826)
				layoutGroup->descent = descent;
				HX_STACK_LINE(827)
				layoutGroup->leading = leading;
				HX_STACK_LINE(828)
				layoutGroup->lineIndex = lineIndex;
				HX_STACK_LINE(829)
				layoutGroup->offsetY = offsetY;
				HX_STACK_LINE(830)
				Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(830)
				{
					HX_STACK_LINE(830)
					Array< Float > advances1 = layoutGroup->advances;		HX_STACK_VAR(advances1,"advances1");
					HX_STACK_LINE(830)
					Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
					HX_STACK_LINE(830)
					{
						HX_STACK_LINE(830)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(830)
						while((true)){
							HX_STACK_LINE(830)
							bool tmp17 = (_g1 < advances1->length);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(830)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(830)
							if ((tmp18)){
								HX_STACK_LINE(830)
								break;
							}
							HX_STACK_LINE(830)
							Float tmp19 = advances1->__get(_g1);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(830)
							Float advance = tmp19;		HX_STACK_VAR(advance,"advance");
							HX_STACK_LINE(830)
							++(_g1);
							HX_STACK_LINE(830)
							hx::AddEq(width,advance);
						}
					}
					HX_STACK_LINE(830)
					tmp16 = width;
				}
				HX_STACK_LINE(830)
				layoutGroup->width = tmp16;
				HX_STACK_LINE(831)
				layoutGroup->height = heightValue;
				HX_STACK_LINE(832)
				::openfl::_internal::text::TextLayoutGroup tmp17 = layoutGroup;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(832)
				this->layoutGroups->push(tmp17);
				HX_STACK_LINE(834)
				hx::AddEq(offsetY,heightValue);
				HX_STACK_LINE(835)
				offsetX = (int)2;
				HX_STACK_LINE(837)
				bool tmp18 = this->wordWrap;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(837)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(837)
				if ((tmp18)){
					HX_STACK_LINE(837)
					Float tmp20 = (layoutGroup->offsetX + layoutGroup->width);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(837)
					Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(837)
					Float tmp22 = this->width;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(837)
					Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(837)
					Float tmp24 = (tmp23 - (int)2);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(837)
					Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(837)
					tmp19 = (tmp21 > tmp25);
				}
				else{
					HX_STACK_LINE(837)
					tmp19 = false;
				}
				HX_STACK_LINE(837)
				if ((tmp19)){
					HX_STACK_LINE(839)
					layoutGroup->offsetY = offsetY;
					HX_STACK_LINE(840)
					layoutGroup->offsetX = offsetX;
					HX_STACK_LINE(841)
					(layoutGroup->lineIndex)++;
					HX_STACK_LINE(843)
					hx::AddEq(offsetY,heightValue);
					HX_STACK_LINE(844)
					(lineIndex)++;
				}
				HX_STACK_LINE(848)
				bool tmp20 = (formatRange->end == breakIndex);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(848)
				if ((tmp20)){
					HX_STACK_LINE(850)
					{
						HX_STACK_LINE(850)
						int tmp21 = rangeIndex;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(850)
						int tmp22 = _g->textFormatRanges->length;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(850)
						int tmp23 = (tmp22 - (int)1);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(850)
						bool tmp24 = (tmp21 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(850)
						if ((tmp24)){
							HX_STACK_LINE(850)
							(rangeIndex)++;
							HX_STACK_LINE(850)
							::openfl::_internal::text::TextFormatRange tmp25 = _g->textFormatRanges->__get(rangeIndex).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(850)
							formatRange = tmp25;
							HX_STACK_LINE(850)
							::openfl::text::TextFormat tmp26 = formatRange->format;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(850)
							currentFormat->__merge(tmp26);
							HX_STACK_LINE(850)
							::openfl::text::TextFormat tmp27 = currentFormat;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(850)
							::openfl::text::Font tmp28 = ::openfl::_internal::text::TextEngine_obj::getFontInstance(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(850)
							font = tmp28;
							HX_STACK_LINE(850)
							bool tmp29 = (font != null());		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(850)
							if ((tmp29)){
								HX_STACK_LINE(850)
								int tmp30 = font->get_ascender();		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(850)
								int tmp31 = font->get_unitsPerEM();		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(850)
								Float tmp32 = (Float(tmp30) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(850)
								Dynamic tmp33 = currentFormat->size;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(850)
								Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(850)
								ascent = tmp34;
								HX_STACK_LINE(850)
								int tmp35 = font->get_descender();		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(850)
								int tmp36 = font->get_unitsPerEM();		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(850)
								Float tmp37 = (Float(tmp35) / Float(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(850)
								Dynamic tmp38 = currentFormat->size;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(850)
								Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(850)
								Float tmp40 = ::Math_obj::abs(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(850)
								descent = tmp40;
								HX_STACK_LINE(850)
								leading = currentFormat->leading;
								HX_STACK_LINE(850)
								Float tmp41 = (ascent + descent);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(850)
								int tmp42 = leading;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(850)
								Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(850)
								heightValue = tmp43;
							}
							else{
								HX_STACK_LINE(850)
								ascent = currentFormat->size;
								HX_STACK_LINE(850)
								Float tmp30 = (currentFormat->size * ((Float)0.185));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(850)
								descent = tmp30;
								HX_STACK_LINE(850)
								leading = currentFormat->leading;
								HX_STACK_LINE(850)
								Float tmp31 = (ascent + descent);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(850)
								int tmp32 = leading;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(850)
								Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(850)
								heightValue = tmp33;
							}
							HX_STACK_LINE(850)
							bool tmp30 = (spaceIndex > (int)-1);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(850)
							if ((tmp30)){
								HX_STACK_LINE(850)
								Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(850)
								{
									HX_STACK_LINE(850)
									bool tmp32 = (_g->__textLayout == null());		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(850)
									if ((tmp32)){
										HX_STACK_LINE(850)
										::lime::text::TextLayout tmp33 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(850)
										_g->__textLayout = tmp33;
									}
									HX_STACK_LINE(850)
									Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
									HX_STACK_LINE(850)
									_g->__textLayout->set_text(null());
									HX_STACK_LINE(850)
									::lime::text::Font tmp33 = font;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(850)
									_g->__textLayout->set_font(tmp33);
									HX_STACK_LINE(850)
									Dynamic tmp34 = formatRange->format->size;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(850)
									bool tmp35 = (tmp34 != null());		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(850)
									if ((tmp35)){
										HX_STACK_LINE(850)
										Dynamic tmp36 = formatRange->format->size;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(850)
										_g->__textLayout->set_size(tmp36);
									}
									HX_STACK_LINE(850)
									_g->__textLayout->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
									HX_STACK_LINE(850)
									{
										HX_STACK_LINE(850)
										int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(850)
										Array< ::Dynamic > _g2 = _g->__textLayout->get_positions();		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(850)
										while((true)){
											HX_STACK_LINE(850)
											bool tmp36 = (_g1 < _g2->length);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(850)
											bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(850)
											if ((tmp37)){
												HX_STACK_LINE(850)
												break;
											}
											HX_STACK_LINE(850)
											::lime::text::GlyphPosition tmp38 = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(850)
											::lime::text::GlyphPosition position = tmp38;		HX_STACK_VAR(position,"position");
											HX_STACK_LINE(850)
											++(_g1);
											HX_STACK_LINE(850)
											Float tmp39 = position->advance->x;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(850)
											hx::AddEq(width,tmp39);
										}
									}
									HX_STACK_LINE(850)
									tmp31 = width;
								}
								HX_STACK_LINE(850)
								spaceWidth = tmp31;
							}
						}
					}
					HX_STACK_LINE(851)
					lineFormat = formatRange->format;
				}
				HX_STACK_LINE(855)
				int tmp21 = (breakIndex + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(855)
				textIndex = tmp21;
				HX_STACK_LINE(856)
				int tmp22 = textIndex;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(856)
				int tmp23 = this->getLineBreakIndex(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(856)
				breakIndex = tmp23;
				HX_STACK_LINE(857)
				(lineIndex)++;
			}
			else{
				HX_STACK_LINE(859)
				bool tmp15 = (formatRange->end >= spaceIndex);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(859)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(859)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(859)
				if ((tmp16)){
					HX_STACK_LINE(859)
					int tmp18 = spaceIndex;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(859)
					int tmp19 = (int)-1;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(859)
					int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(859)
					int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(859)
					tmp17 = (tmp18 > tmp21);
				}
				else{
					HX_STACK_LINE(859)
					tmp17 = false;
				}
				HX_STACK_LINE(859)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(859)
				if ((tmp17)){
					HX_STACK_LINE(859)
					tmp18 = (textIndex < formatRange->end);
				}
				else{
					HX_STACK_LINE(859)
					tmp18 = false;
				}
				HX_STACK_LINE(859)
				if ((tmp18)){
					HX_STACK_LINE(861)
					layoutGroup = null();
					HX_STACK_LINE(862)
					wrap = false;
					HX_STACK_LINE(864)
					while((true)){
						HX_STACK_LINE(866)
						bool tmp19 = (textIndex == formatRange->end);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(866)
						if ((tmp19)){
							HX_STACK_LINE(866)
							break;
						}
						HX_STACK_LINE(867)
						bool tmp20 = (spaceIndex == (int)-1);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(867)
						if ((tmp20)){
							HX_STACK_LINE(867)
							spaceIndex = formatRange->end;
						}
						HX_STACK_LINE(869)
						{
							HX_STACK_LINE(869)
							Array< Float > advances1 = Array_obj< Float >::__new();		HX_STACK_VAR(advances1,"advances1");
							HX_STACK_LINE(869)
							bool tmp21 = (_g->__textLayout == null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(869)
							if ((tmp21)){
								HX_STACK_LINE(869)
								::lime::text::TextLayout tmp22 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(869)
								_g->__textLayout = tmp22;
							}
							HX_STACK_LINE(869)
							Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(869)
							_g->__textLayout->set_text(null());
							HX_STACK_LINE(869)
							::lime::text::Font tmp22 = font;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(869)
							_g->__textLayout->set_font(tmp22);
							HX_STACK_LINE(869)
							Dynamic tmp23 = formatRange->format->size;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(869)
							bool tmp24 = (tmp23 != null());		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(869)
							if ((tmp24)){
								HX_STACK_LINE(869)
								Dynamic tmp25 = formatRange->format->size;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(869)
								_g->__textLayout->set_size(tmp25);
							}
							HX_STACK_LINE(869)
							::String tmp25 = this->text;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(869)
							int tmp26 = textIndex;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(869)
							int tmp27 = spaceIndex;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(869)
							::String tmp28 = tmp25.substring(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(869)
							_g->__textLayout->set_text(tmp28);
							HX_STACK_LINE(869)
							{
								HX_STACK_LINE(869)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(869)
								Array< ::Dynamic > _g2 = _g->__textLayout->get_positions();		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(869)
								while((true)){
									HX_STACK_LINE(869)
									bool tmp29 = (_g1 < _g2->length);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(869)
									bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(869)
									if ((tmp30)){
										HX_STACK_LINE(869)
										break;
									}
									HX_STACK_LINE(869)
									::lime::text::GlyphPosition tmp31 = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(869)
									::lime::text::GlyphPosition position = tmp31;		HX_STACK_VAR(position,"position");
									HX_STACK_LINE(869)
									++(_g1);
									HX_STACK_LINE(869)
									Float tmp32 = position->advance->x;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(869)
									advances1->push(tmp32);
								}
							}
							HX_STACK_LINE(869)
							advances = advances1;
						}
						HX_STACK_LINE(870)
						Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(870)
						{
							HX_STACK_LINE(870)
							Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(870)
							{
								HX_STACK_LINE(870)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(870)
								while((true)){
									HX_STACK_LINE(870)
									bool tmp22 = (_g1 < advances->length);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(870)
									bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(870)
									if ((tmp23)){
										HX_STACK_LINE(870)
										break;
									}
									HX_STACK_LINE(870)
									Float tmp24 = advances->__get(_g1);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(870)
									Float advance = tmp24;		HX_STACK_VAR(advance,"advance");
									HX_STACK_LINE(870)
									++(_g1);
									HX_STACK_LINE(870)
									hx::AddEq(width,advance);
								}
							}
							HX_STACK_LINE(870)
							tmp21 = width;
						}
						HX_STACK_LINE(870)
						widthValue = tmp21;
						HX_STACK_LINE(872)
						bool tmp22 = this->wordWrap;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(872)
						if ((tmp22)){
							HX_STACK_LINE(874)
							Float tmp23 = (offsetX + widthValue);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(874)
							Float tmp24 = this->width;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(874)
							Float tmp25 = (tmp24 - (int)2);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(874)
							bool tmp26 = (tmp23 > tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(874)
							if ((tmp26)){
								HX_STACK_LINE(876)
								wrap = true;
							}
						}
						HX_STACK_LINE(882)
						bool tmp23 = wrap;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(882)
						if ((tmp23)){
							HX_STACK_LINE(884)
							hx::AddEq(offsetY,heightValue);
							HX_STACK_LINE(886)
							int tmp24 = this->layoutGroups->length;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(886)
							int tmp25 = (tmp24 - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(886)
							int i = tmp25;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(887)
							int offsetCount = (int)0;		HX_STACK_VAR(offsetCount,"offsetCount");
							HX_STACK_LINE(889)
							while((true)){
								HX_STACK_LINE(891)
								::openfl::_internal::text::TextLayoutGroup tmp26 = this->layoutGroups->__get(i).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(891)
								layoutGroup = tmp26;
								HX_STACK_LINE(893)
								bool tmp27 = (i > (int)0);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(893)
								bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(893)
								if ((tmp27)){
									HX_STACK_LINE(893)
									tmp28 = (layoutGroup->startIndex > previousSpaceIndex);
								}
								else{
									HX_STACK_LINE(893)
									tmp28 = false;
								}
								HX_STACK_LINE(893)
								if ((tmp28)){
									HX_STACK_LINE(895)
									(offsetCount)++;
								}
								else{
									HX_STACK_LINE(899)
									break;
								}
								HX_STACK_LINE(903)
								(i)--;
							}
							HX_STACK_LINE(907)
							(lineIndex)++;
							HX_STACK_LINE(909)
							offsetX = (int)2;
							HX_STACK_LINE(911)
							bool tmp26 = (offsetCount > (int)0);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(911)
							if ((tmp26)){
								HX_STACK_LINE(913)
								int tmp27 = this->layoutGroups->length;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(913)
								int tmp28 = offsetCount;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(913)
								int tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(913)
								::openfl::_internal::text::TextLayoutGroup tmp30 = this->layoutGroups->__get(tmp29).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(913)
								Float bumpX = tmp30->offsetX;		HX_STACK_VAR(bumpX,"bumpX");
								HX_STACK_LINE(915)
								{
									HX_STACK_LINE(915)
									int tmp31 = this->layoutGroups->length;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(915)
									int tmp32 = offsetCount;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(915)
									int tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(915)
									int _g1 = tmp33;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(915)
									int tmp34 = this->layoutGroups->length;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(915)
									int _g2 = tmp34;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(915)
									while((true)){
										HX_STACK_LINE(915)
										bool tmp35 = (_g1 < _g2);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(915)
										bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(915)
										if ((tmp36)){
											HX_STACK_LINE(915)
											break;
										}
										HX_STACK_LINE(915)
										int tmp37 = (_g1)++;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(915)
										int i1 = tmp37;		HX_STACK_VAR(i1,"i1");
										HX_STACK_LINE(917)
										::openfl::_internal::text::TextLayoutGroup tmp38 = this->layoutGroups->__get(i1).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(917)
										layoutGroup = tmp38;
										HX_STACK_LINE(918)
										hx::SubEq(layoutGroup->offsetX,bumpX);
										HX_STACK_LINE(919)
										layoutGroup->offsetY = offsetY;
										HX_STACK_LINE(920)
										layoutGroup->lineIndex = lineIndex;
										HX_STACK_LINE(921)
										hx::AddEq(offsetX,layoutGroup->width);
									}
								}
							}
							HX_STACK_LINE(927)
							::openfl::_internal::text::TextLayoutGroup tmp27 = ::openfl::_internal::text::TextLayoutGroup_obj::__new(formatRange->format,textIndex,spaceIndex);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(927)
							layoutGroup = tmp27;
							HX_STACK_LINE(928)
							layoutGroup->advances = advances;
							HX_STACK_LINE(929)
							layoutGroup->offsetX = offsetX;
							HX_STACK_LINE(930)
							layoutGroup->ascent = ascent;
							HX_STACK_LINE(931)
							layoutGroup->descent = descent;
							HX_STACK_LINE(932)
							layoutGroup->leading = leading;
							HX_STACK_LINE(933)
							layoutGroup->lineIndex = lineIndex;
							HX_STACK_LINE(934)
							layoutGroup->offsetY = offsetY;
							HX_STACK_LINE(935)
							layoutGroup->width = widthValue;
							HX_STACK_LINE(936)
							layoutGroup->height = heightValue;
							HX_STACK_LINE(937)
							::openfl::_internal::text::TextLayoutGroup tmp28 = layoutGroup;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(937)
							this->layoutGroups->push(tmp28);
							HX_STACK_LINE(939)
							Float tmp29 = (widthValue + spaceWidth);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(939)
							offsetX = tmp29;
							HX_STACK_LINE(940)
							marginRight = spaceWidth;
							HX_STACK_LINE(942)
							wrap = false;
						}
						else{
							HX_STACK_LINE(946)
							bool tmp24 = (layoutGroup != null());		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(946)
							bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(946)
							if ((tmp24)){
								HX_STACK_LINE(946)
								tmp25 = (textIndex == spaceIndex);
							}
							else{
								HX_STACK_LINE(946)
								tmp25 = false;
							}
							HX_STACK_LINE(946)
							if ((tmp25)){
								HX_STACK_LINE(948)
								Dynamic tmp26 = formatRange->format->align;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(948)
								bool tmp27 = (tmp26 != ((Dynamic)((int)2)));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(948)
								if ((tmp27)){
									HX_STACK_LINE(950)
									layoutGroup->endIndex = spaceIndex;
								}
								HX_STACK_LINE(954)
								Float tmp28 = spaceWidth;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(954)
								layoutGroup->advances->push(tmp28);
								HX_STACK_LINE(955)
								hx::AddEq(marginRight,spaceWidth);
							}
							else{
								HX_STACK_LINE(957)
								bool tmp26 = (layoutGroup == null());		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(957)
								bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(957)
								bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(957)
								if ((tmp27)){
									HX_STACK_LINE(957)
									tmp28 = (lineFormat->align == ((Dynamic)((int)2)));
								}
								else{
									HX_STACK_LINE(957)
									tmp28 = true;
								}
								HX_STACK_LINE(957)
								if ((tmp28)){
									HX_STACK_LINE(959)
									::openfl::_internal::text::TextLayoutGroup tmp29 = ::openfl::_internal::text::TextLayoutGroup_obj::__new(formatRange->format,textIndex,spaceIndex);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(959)
									layoutGroup = tmp29;
									HX_STACK_LINE(960)
									layoutGroup->advances = advances;
									HX_STACK_LINE(961)
									layoutGroup->offsetX = offsetX;
									HX_STACK_LINE(962)
									layoutGroup->ascent = ascent;
									HX_STACK_LINE(963)
									layoutGroup->descent = descent;
									HX_STACK_LINE(964)
									layoutGroup->leading = leading;
									HX_STACK_LINE(965)
									layoutGroup->lineIndex = lineIndex;
									HX_STACK_LINE(966)
									layoutGroup->offsetY = offsetY;
									HX_STACK_LINE(967)
									layoutGroup->width = widthValue;
									HX_STACK_LINE(968)
									layoutGroup->height = heightValue;
									HX_STACK_LINE(969)
									::openfl::_internal::text::TextLayoutGroup tmp30 = layoutGroup;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(969)
									this->layoutGroups->push(tmp30);
									HX_STACK_LINE(971)
									Float tmp31 = spaceWidth;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(971)
									layoutGroup->advances->push(tmp31);
									HX_STACK_LINE(972)
									marginRight = spaceWidth;
								}
								else{
									HX_STACK_LINE(976)
									layoutGroup->endIndex = spaceIndex;
									HX_STACK_LINE(977)
									layoutGroup->advances = layoutGroup->advances->concat(advances);
									HX_STACK_LINE(978)
									Float tmp29 = (marginRight + widthValue);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(978)
									hx::AddEq(layoutGroup->width,tmp29);
									HX_STACK_LINE(980)
									Float tmp30 = spaceWidth;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(980)
									layoutGroup->advances->push(tmp30);
									HX_STACK_LINE(981)
									marginRight = spaceWidth;
								}
							}
							HX_STACK_LINE(985)
							Float tmp26 = (widthValue + spaceWidth);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(985)
							hx::AddEq(offsetX,tmp26);
						}
						HX_STACK_LINE(989)
						int tmp24 = (spaceIndex + (int)1);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(989)
						textIndex = tmp24;
						HX_STACK_LINE(991)
						previousSpaceIndex = spaceIndex;
						HX_STACK_LINE(992)
						::String tmp25 = this->text;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(992)
						int tmp26 = (previousSpaceIndex + (int)1);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(992)
						int tmp27 = tmp25.indexOf(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"),tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(992)
						spaceIndex = tmp27;
						HX_STACK_LINE(994)
						bool tmp28 = (formatRange->end <= previousSpaceIndex);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(994)
						if ((tmp28)){
							HX_STACK_LINE(996)
							layoutGroup = null();
							HX_STACK_LINE(997)
							{
								HX_STACK_LINE(997)
								int tmp29 = rangeIndex;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(997)
								int tmp30 = _g->textFormatRanges->length;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(997)
								int tmp31 = (tmp30 - (int)1);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(997)
								bool tmp32 = (tmp29 < tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(997)
								if ((tmp32)){
									HX_STACK_LINE(997)
									(rangeIndex)++;
									HX_STACK_LINE(997)
									::openfl::_internal::text::TextFormatRange tmp33 = _g->textFormatRanges->__get(rangeIndex).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(997)
									formatRange = tmp33;
									HX_STACK_LINE(997)
									::openfl::text::TextFormat tmp34 = formatRange->format;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(997)
									currentFormat->__merge(tmp34);
									HX_STACK_LINE(997)
									::openfl::text::TextFormat tmp35 = currentFormat;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(997)
									::openfl::text::Font tmp36 = ::openfl::_internal::text::TextEngine_obj::getFontInstance(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(997)
									font = tmp36;
									HX_STACK_LINE(997)
									bool tmp37 = (font != null());		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(997)
									if ((tmp37)){
										HX_STACK_LINE(997)
										int tmp38 = font->get_ascender();		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(997)
										int tmp39 = font->get_unitsPerEM();		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(997)
										Float tmp40 = (Float(tmp38) / Float(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(997)
										Dynamic tmp41 = currentFormat->size;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(997)
										Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(997)
										ascent = tmp42;
										HX_STACK_LINE(997)
										int tmp43 = font->get_descender();		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(997)
										int tmp44 = font->get_unitsPerEM();		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(997)
										Float tmp45 = (Float(tmp43) / Float(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(997)
										Dynamic tmp46 = currentFormat->size;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(997)
										Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(997)
										Float tmp48 = ::Math_obj::abs(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(997)
										descent = tmp48;
										HX_STACK_LINE(997)
										leading = currentFormat->leading;
										HX_STACK_LINE(997)
										Float tmp49 = (ascent + descent);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(997)
										int tmp50 = leading;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(997)
										Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(997)
										heightValue = tmp51;
									}
									else{
										HX_STACK_LINE(997)
										ascent = currentFormat->size;
										HX_STACK_LINE(997)
										Float tmp38 = (currentFormat->size * ((Float)0.185));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(997)
										descent = tmp38;
										HX_STACK_LINE(997)
										leading = currentFormat->leading;
										HX_STACK_LINE(997)
										Float tmp39 = (ascent + descent);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(997)
										int tmp40 = leading;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(997)
										Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(997)
										heightValue = tmp41;
									}
									HX_STACK_LINE(997)
									bool tmp38 = (spaceIndex > (int)-1);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(997)
									if ((tmp38)){
										HX_STACK_LINE(997)
										Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(997)
										{
											HX_STACK_LINE(997)
											bool tmp40 = (_g->__textLayout == null());		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(997)
											if ((tmp40)){
												HX_STACK_LINE(997)
												::lime::text::TextLayout tmp41 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(997)
												_g->__textLayout = tmp41;
											}
											HX_STACK_LINE(997)
											Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
											HX_STACK_LINE(997)
											_g->__textLayout->set_text(null());
											HX_STACK_LINE(997)
											::lime::text::Font tmp41 = font;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(997)
											_g->__textLayout->set_font(tmp41);
											HX_STACK_LINE(997)
											Dynamic tmp42 = formatRange->format->size;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(997)
											bool tmp43 = (tmp42 != null());		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(997)
											if ((tmp43)){
												HX_STACK_LINE(997)
												Dynamic tmp44 = formatRange->format->size;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(997)
												_g->__textLayout->set_size(tmp44);
											}
											HX_STACK_LINE(997)
											_g->__textLayout->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
											HX_STACK_LINE(997)
											{
												HX_STACK_LINE(997)
												int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
												HX_STACK_LINE(997)
												Array< ::Dynamic > _g2 = _g->__textLayout->get_positions();		HX_STACK_VAR(_g2,"_g2");
												HX_STACK_LINE(997)
												while((true)){
													HX_STACK_LINE(997)
													bool tmp44 = (_g1 < _g2->length);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(997)
													bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(997)
													if ((tmp45)){
														HX_STACK_LINE(997)
														break;
													}
													HX_STACK_LINE(997)
													::lime::text::GlyphPosition tmp46 = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(997)
													::lime::text::GlyphPosition position = tmp46;		HX_STACK_VAR(position,"position");
													HX_STACK_LINE(997)
													++(_g1);
													HX_STACK_LINE(997)
													Float tmp47 = position->advance->x;		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(997)
													hx::AddEq(width,tmp47);
												}
											}
											HX_STACK_LINE(997)
											tmp39 = width;
										}
										HX_STACK_LINE(997)
										spaceWidth = tmp39;
									}
								}
							}
						}
						HX_STACK_LINE(1001)
						bool tmp29 = (spaceIndex > breakIndex);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1001)
						bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1001)
						bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1001)
						if ((tmp30)){
							HX_STACK_LINE(1001)
							tmp31 = (breakIndex > (int)-1);
						}
						else{
							HX_STACK_LINE(1001)
							tmp31 = false;
						}
						HX_STACK_LINE(1001)
						bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1001)
						bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1001)
						bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1001)
						if ((tmp33)){
							HX_STACK_LINE(1001)
							int tmp35 = textIndex;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1001)
							::String tmp36 = this->text;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1001)
							::String tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1001)
							::String tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1001)
							int tmp39 = tmp38.length;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1001)
							tmp34 = (tmp35 > tmp39);
						}
						else{
							HX_STACK_LINE(1001)
							tmp34 = true;
						}
						HX_STACK_LINE(1001)
						bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1001)
						bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1001)
						bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1001)
						if ((tmp36)){
							HX_STACK_LINE(1001)
							tmp37 = (spaceIndex > formatRange->end);
						}
						else{
							HX_STACK_LINE(1001)
							tmp37 = true;
						}
						HX_STACK_LINE(1001)
						bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1001)
						bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1001)
						if ((tmp38)){
							HX_STACK_LINE(1001)
							int tmp40 = spaceIndex;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1001)
							int tmp41 = (int)-1;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1001)
							int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1001)
							bool tmp43 = (tmp40 == tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1001)
							bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1001)
							bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1001)
							if ((tmp45)){
								HX_STACK_LINE(1001)
								tmp39 = (breakIndex > (int)-1);
							}
							else{
								HX_STACK_LINE(1001)
								tmp39 = false;
							}
						}
						else{
							HX_STACK_LINE(1001)
							tmp39 = true;
						}
						HX_STACK_LINE(1001)
						if ((tmp39)){
							HX_STACK_LINE(1003)
							bool tmp40 = (spaceIndex > formatRange->end);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1003)
							if ((tmp40)){
								HX_STACK_LINE(1005)
								(textIndex)--;
							}
							HX_STACK_LINE(1009)
							break;
						}
					}
				}
				else{
					HX_STACK_LINE(1017)
					bool tmp19 = (textIndex > formatRange->end);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1017)
					if ((tmp19)){
						HX_STACK_LINE(1019)
						break;
					}
					else{
						HX_STACK_LINE(1021)
						bool tmp20 = (textIndex < formatRange->end);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1021)
						if ((tmp20)){
							HX_STACK_LINE(1023)
							::openfl::_internal::text::TextLayoutGroup tmp21 = ::openfl::_internal::text::TextLayoutGroup_obj::__new(formatRange->format,textIndex,formatRange->end);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1023)
							layoutGroup = tmp21;
							HX_STACK_LINE(1024)
							{
								HX_STACK_LINE(1024)
								Array< Float > advances1 = Array_obj< Float >::__new();		HX_STACK_VAR(advances1,"advances1");
								HX_STACK_LINE(1024)
								bool tmp22 = (_g->__textLayout == null());		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1024)
								if ((tmp22)){
									HX_STACK_LINE(1024)
									::lime::text::TextLayout tmp23 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1024)
									_g->__textLayout = tmp23;
								}
								HX_STACK_LINE(1024)
								Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
								HX_STACK_LINE(1024)
								_g->__textLayout->set_text(null());
								HX_STACK_LINE(1024)
								::lime::text::Font tmp23 = font;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1024)
								_g->__textLayout->set_font(tmp23);
								HX_STACK_LINE(1024)
								Dynamic tmp24 = formatRange->format->size;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1024)
								bool tmp25 = (tmp24 != null());		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1024)
								if ((tmp25)){
									HX_STACK_LINE(1024)
									Dynamic tmp26 = formatRange->format->size;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1024)
									_g->__textLayout->set_size(tmp26);
								}
								HX_STACK_LINE(1024)
								::String tmp26 = this->text;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1024)
								int tmp27 = textIndex;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1024)
								int tmp28 = formatRange->end;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1024)
								::String tmp29 = tmp26.substring(tmp27,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1024)
								_g->__textLayout->set_text(tmp29);
								HX_STACK_LINE(1024)
								{
									HX_STACK_LINE(1024)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(1024)
									Array< ::Dynamic > _g2 = _g->__textLayout->get_positions();		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1024)
									while((true)){
										HX_STACK_LINE(1024)
										bool tmp30 = (_g1 < _g2->length);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1024)
										bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(1024)
										if ((tmp31)){
											HX_STACK_LINE(1024)
											break;
										}
										HX_STACK_LINE(1024)
										::lime::text::GlyphPosition tmp32 = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(1024)
										::lime::text::GlyphPosition position = tmp32;		HX_STACK_VAR(position,"position");
										HX_STACK_LINE(1024)
										++(_g1);
										HX_STACK_LINE(1024)
										Float tmp33 = position->advance->x;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1024)
										advances1->push(tmp33);
									}
								}
								HX_STACK_LINE(1024)
								layoutGroup->advances = advances1;
							}
							HX_STACK_LINE(1025)
							layoutGroup->offsetX = offsetX;
							HX_STACK_LINE(1026)
							layoutGroup->ascent = ascent;
							HX_STACK_LINE(1027)
							layoutGroup->descent = descent;
							HX_STACK_LINE(1028)
							layoutGroup->leading = leading;
							HX_STACK_LINE(1029)
							layoutGroup->lineIndex = lineIndex;
							HX_STACK_LINE(1030)
							layoutGroup->offsetY = offsetY;
							HX_STACK_LINE(1031)
							Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1031)
							{
								HX_STACK_LINE(1031)
								Array< Float > advances1 = layoutGroup->advances;		HX_STACK_VAR(advances1,"advances1");
								HX_STACK_LINE(1031)
								Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
								HX_STACK_LINE(1031)
								{
									HX_STACK_LINE(1031)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(1031)
									while((true)){
										HX_STACK_LINE(1031)
										bool tmp23 = (_g1 < advances1->length);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(1031)
										bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1031)
										if ((tmp24)){
											HX_STACK_LINE(1031)
											break;
										}
										HX_STACK_LINE(1031)
										Float tmp25 = advances1->__get(_g1);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1031)
										Float advance = tmp25;		HX_STACK_VAR(advance,"advance");
										HX_STACK_LINE(1031)
										++(_g1);
										HX_STACK_LINE(1031)
										hx::AddEq(width,advance);
									}
								}
								HX_STACK_LINE(1031)
								tmp22 = width;
							}
							HX_STACK_LINE(1031)
							layoutGroup->width = tmp22;
							HX_STACK_LINE(1032)
							layoutGroup->height = heightValue;
							HX_STACK_LINE(1033)
							::openfl::_internal::text::TextLayoutGroup tmp23 = layoutGroup;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1033)
							this->layoutGroups->push(tmp23);
							HX_STACK_LINE(1035)
							hx::AddEq(offsetX,layoutGroup->width);
							HX_STACK_LINE(1037)
							textIndex = formatRange->end;
						}
					}
					HX_STACK_LINE(1041)
					{
						HX_STACK_LINE(1041)
						int tmp20 = rangeIndex;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1041)
						int tmp21 = _g->textFormatRanges->length;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1041)
						int tmp22 = (tmp21 - (int)1);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1041)
						bool tmp23 = (tmp20 < tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1041)
						if ((tmp23)){
							HX_STACK_LINE(1041)
							(rangeIndex)++;
							HX_STACK_LINE(1041)
							::openfl::_internal::text::TextFormatRange tmp24 = _g->textFormatRanges->__get(rangeIndex).StaticCast< ::openfl::_internal::text::TextFormatRange >();		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1041)
							formatRange = tmp24;
							HX_STACK_LINE(1041)
							::openfl::text::TextFormat tmp25 = formatRange->format;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1041)
							currentFormat->__merge(tmp25);
							HX_STACK_LINE(1041)
							::openfl::text::TextFormat tmp26 = currentFormat;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1041)
							::openfl::text::Font tmp27 = ::openfl::_internal::text::TextEngine_obj::getFontInstance(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1041)
							font = tmp27;
							HX_STACK_LINE(1041)
							bool tmp28 = (font != null());		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1041)
							if ((tmp28)){
								HX_STACK_LINE(1041)
								int tmp29 = font->get_ascender();		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1041)
								int tmp30 = font->get_unitsPerEM();		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1041)
								Float tmp31 = (Float(tmp29) / Float(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1041)
								Dynamic tmp32 = currentFormat->size;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1041)
								Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1041)
								ascent = tmp33;
								HX_STACK_LINE(1041)
								int tmp34 = font->get_descender();		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1041)
								int tmp35 = font->get_unitsPerEM();		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1041)
								Float tmp36 = (Float(tmp34) / Float(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1041)
								Dynamic tmp37 = currentFormat->size;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1041)
								Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(1041)
								Float tmp39 = ::Math_obj::abs(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(1041)
								descent = tmp39;
								HX_STACK_LINE(1041)
								leading = currentFormat->leading;
								HX_STACK_LINE(1041)
								Float tmp40 = (ascent + descent);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(1041)
								int tmp41 = leading;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(1041)
								Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(1041)
								heightValue = tmp42;
							}
							else{
								HX_STACK_LINE(1041)
								ascent = currentFormat->size;
								HX_STACK_LINE(1041)
								Float tmp29 = (currentFormat->size * ((Float)0.185));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1041)
								descent = tmp29;
								HX_STACK_LINE(1041)
								leading = currentFormat->leading;
								HX_STACK_LINE(1041)
								Float tmp30 = (ascent + descent);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1041)
								int tmp31 = leading;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1041)
								Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1041)
								heightValue = tmp32;
							}
							HX_STACK_LINE(1041)
							bool tmp29 = (spaceIndex > (int)-1);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1041)
							if ((tmp29)){
								HX_STACK_LINE(1041)
								Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1041)
								{
									HX_STACK_LINE(1041)
									bool tmp31 = (_g->__textLayout == null());		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1041)
									if ((tmp31)){
										HX_STACK_LINE(1041)
										::lime::text::TextLayout tmp32 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(1041)
										_g->__textLayout = tmp32;
									}
									HX_STACK_LINE(1041)
									Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
									HX_STACK_LINE(1041)
									_g->__textLayout->set_text(null());
									HX_STACK_LINE(1041)
									::lime::text::Font tmp32 = font;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1041)
									_g->__textLayout->set_font(tmp32);
									HX_STACK_LINE(1041)
									Dynamic tmp33 = formatRange->format->size;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(1041)
									bool tmp34 = (tmp33 != null());		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(1041)
									if ((tmp34)){
										HX_STACK_LINE(1041)
										Dynamic tmp35 = formatRange->format->size;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(1041)
										_g->__textLayout->set_size(tmp35);
									}
									HX_STACK_LINE(1041)
									_g->__textLayout->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
									HX_STACK_LINE(1041)
									{
										HX_STACK_LINE(1041)
										int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(1041)
										Array< ::Dynamic > _g2 = _g->__textLayout->get_positions();		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(1041)
										while((true)){
											HX_STACK_LINE(1041)
											bool tmp35 = (_g1 < _g2->length);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(1041)
											bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(1041)
											if ((tmp36)){
												HX_STACK_LINE(1041)
												break;
											}
											HX_STACK_LINE(1041)
											::lime::text::GlyphPosition tmp37 = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1041)
											::lime::text::GlyphPosition position = tmp37;		HX_STACK_VAR(position,"position");
											HX_STACK_LINE(1041)
											++(_g1);
											HX_STACK_LINE(1041)
											Float tmp38 = position->advance->x;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1041)
											hx::AddEq(width,tmp38);
										}
									}
									HX_STACK_LINE(1041)
									tmp30 = width;
								}
								HX_STACK_LINE(1041)
								spaceWidth = tmp30;
							}
						}
					}
					HX_STACK_LINE(1043)
					bool tmp20 = (textIndex == formatRange->end);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1043)
					if ((tmp20)){
						HX_STACK_LINE(1045)
						(textIndex)++;
						HX_STACK_LINE(1046)
						break;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,getLayoutGroups,(void))

Void TextEngine_obj::setTextAlignment( ){
{
		HX_STACK_FRAME("openfl._internal.text.TextEngine","setTextAlignment",0xb5caa542,"openfl._internal.text.TextEngine.setTextAlignment","openfl/_internal/text/TextEngine.hx",1057,0xdff93b7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1059)
		int lineIndex = (int)-1;		HX_STACK_VAR(lineIndex,"lineIndex");
		HX_STACK_LINE(1060)
		Float offsetX = ((Float)0.0);		HX_STACK_VAR(offsetX,"offsetX");
		HX_STACK_LINE(1061)
		::openfl::_internal::text::TextLayoutGroup group;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(1061)
		int lineLength;		HX_STACK_VAR(lineLength,"lineLength");
		HX_STACK_LINE(1063)
		{
			HX_STACK_LINE(1063)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1063)
			int tmp = this->layoutGroups->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1063)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1063)
			while((true)){
				HX_STACK_LINE(1063)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1063)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1063)
				if ((tmp2)){
					HX_STACK_LINE(1063)
					break;
				}
				HX_STACK_LINE(1063)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1063)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1065)
				::openfl::_internal::text::TextLayoutGroup tmp4 = this->layoutGroups->__get(i).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1065)
				group = tmp4;
				HX_STACK_LINE(1067)
				bool tmp5 = (group->lineIndex != lineIndex);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1067)
				if ((tmp5)){
					HX_STACK_LINE(1069)
					lineIndex = group->lineIndex;
					HX_STACK_LINE(1071)
					{
						HX_STACK_LINE(1071)
						Dynamic tmp6 = group->format->align;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1071)
						Dynamic _g2 = tmp6;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1071)
						Dynamic tmp7 = _g2;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1071)
						switch( (int)(tmp7)){
							case (int)0: {
								HX_STACK_LINE(1075)
								Float tmp8 = this->lineWidths->__get(lineIndex);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1075)
								Float tmp9 = this->width;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1075)
								Float tmp10 = (tmp9 - (int)4);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1075)
								bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1075)
								if ((tmp11)){
									HX_STACK_LINE(1077)
									Float tmp12 = this->width;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1077)
									Float tmp13 = (tmp12 - (int)4);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1077)
									Float tmp14 = this->lineWidths->__get(lineIndex);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1077)
									Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1077)
									Float tmp16 = (Float(tmp15) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1077)
									int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1077)
									offsetX = tmp17;
								}
								else{
									HX_STACK_LINE(1081)
									offsetX = (int)0;
								}
							}
							;break;
							case (int)4: {
								HX_STACK_LINE(1087)
								Float tmp8 = this->lineWidths->__get(lineIndex);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1087)
								Float tmp9 = this->width;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1087)
								Float tmp10 = (tmp9 - (int)4);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1087)
								bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1087)
								if ((tmp11)){
									HX_STACK_LINE(1089)
									Float tmp12 = this->width;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1089)
									Float tmp13 = (tmp12 - (int)4);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1089)
									Float tmp14 = this->lineWidths->__get(lineIndex);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1089)
									Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1089)
									int tmp16 = ::Math_obj::round(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1089)
									offsetX = tmp16;
								}
								else{
									HX_STACK_LINE(1093)
									offsetX = (int)0;
								}
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(1099)
								Float tmp8 = this->lineWidths->__get(lineIndex);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1099)
								Float tmp9 = this->width;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1099)
								Float tmp10 = (tmp9 - (int)4);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1099)
								bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1099)
								if ((tmp11)){
									HX_STACK_LINE(1101)
									lineLength = (int)1;
									HX_STACK_LINE(1103)
									{
										HX_STACK_LINE(1103)
										int tmp12 = (i + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1103)
										int _g4 = tmp12;		HX_STACK_VAR(_g4,"_g4");
										HX_STACK_LINE(1103)
										int tmp13 = this->layoutGroups->length;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1103)
										int _g3 = tmp13;		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(1103)
										while((true)){
											HX_STACK_LINE(1103)
											bool tmp14 = (_g4 < _g3);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1103)
											bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1103)
											if ((tmp15)){
												HX_STACK_LINE(1103)
												break;
											}
											HX_STACK_LINE(1103)
											int tmp16 = (_g4)++;		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1103)
											int j = tmp16;		HX_STACK_VAR(j,"j");
											HX_STACK_LINE(1105)
											::openfl::_internal::text::TextLayoutGroup tmp17 = this->layoutGroups->__get(j).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(1105)
											int tmp18 = tmp17->lineIndex;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(1105)
											int tmp19 = lineIndex;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1105)
											bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1105)
											if ((tmp20)){
												HX_STACK_LINE(1107)
												(lineLength)++;
											}
											else{
												HX_STACK_LINE(1111)
												break;
											}
										}
									}
									HX_STACK_LINE(1117)
									bool tmp12 = (lineLength > (int)1);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1117)
									if ((tmp12)){
										HX_STACK_LINE(1119)
										int tmp13 = (i + lineLength);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1119)
										int tmp14 = (tmp13 - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1119)
										::openfl::_internal::text::TextLayoutGroup tmp15 = this->layoutGroups->__get(tmp14).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1119)
										group = tmp15;
										HX_STACK_LINE(1121)
										::String tmp16 = this->text;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1121)
										int tmp17 = group->endIndex;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1121)
										::String tmp18 = tmp16.charAt(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1121)
										::String endChar = tmp18;		HX_STACK_VAR(endChar,"endChar");
										HX_STACK_LINE(1122)
										int tmp19 = group->endIndex;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1122)
										::String tmp20 = this->text;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1122)
										int tmp21 = tmp20.length;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1122)
										bool tmp22 = (tmp19 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1122)
										bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(1122)
										bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1122)
										if ((tmp23)){
											HX_STACK_LINE(1122)
											tmp24 = (endChar != HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
										}
										else{
											HX_STACK_LINE(1122)
											tmp24 = false;
										}
										HX_STACK_LINE(1122)
										bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1122)
										if ((tmp24)){
											HX_STACK_LINE(1122)
											tmp25 = (endChar != HX_HCSTRING("\r","\x0d","\x00","\x00","\x00"));
										}
										else{
											HX_STACK_LINE(1122)
											tmp25 = false;
										}
										HX_STACK_LINE(1122)
										if ((tmp25)){
											HX_STACK_LINE(1124)
											Float tmp26 = this->width;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(1124)
											Float tmp27 = (tmp26 - (int)4);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(1124)
											Float tmp28 = this->lineWidths->__get(lineIndex);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(1124)
											Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1124)
											int tmp30 = (lineLength - (int)1);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1124)
											Float tmp31 = (Float(tmp29) / Float(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1124)
											offsetX = tmp31;
											HX_STACK_LINE(1126)
											{
												HX_STACK_LINE(1126)
												int _g3 = (int)1;		HX_STACK_VAR(_g3,"_g3");
												HX_STACK_LINE(1126)
												while((true)){
													HX_STACK_LINE(1126)
													bool tmp32 = (_g3 < lineLength);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(1126)
													bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(1126)
													if ((tmp33)){
														HX_STACK_LINE(1126)
														break;
													}
													HX_STACK_LINE(1126)
													int tmp34 = (_g3)++;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(1126)
													int j = tmp34;		HX_STACK_VAR(j,"j");
													HX_STACK_LINE(1128)
													Float tmp35 = (offsetX * j);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(1128)
													int tmp36 = (i + j);		HX_STACK_VAR(tmp36,"tmp36");
													HX_STACK_LINE(1128)
													::openfl::_internal::text::TextLayoutGroup tmp37 = this->layoutGroups->__get(tmp36).StaticCast< ::openfl::_internal::text::TextLayoutGroup >();		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(1128)
													hx::AddEq(tmp37->offsetX,tmp35);
												}
											}
										}
									}
								}
								HX_STACK_LINE(1138)
								offsetX = (int)0;
							}
							;break;
							default: {
								HX_STACK_LINE(1142)
								offsetX = (int)0;
							}
						}
					}
				}
				HX_STACK_LINE(1148)
				bool tmp6 = (offsetX > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1148)
				if ((tmp6)){
					HX_STACK_LINE(1150)
					hx::AddEq(group->offsetX,offsetX);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,setTextAlignment,(void))

Void TextEngine_obj::update( ){
{
		HX_STACK_FRAME("openfl._internal.text.TextEngine","update",0x7da66e57,"openfl._internal.text.TextEngine.update","openfl/_internal/text/TextEngine.hx",1159,0xdff93b7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1161)
		::String tmp = this->text;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1161)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1161)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1161)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1161)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1161)
		if ((tmp3)){
			HX_STACK_LINE(1161)
			::String tmp5 = this->text;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1161)
			::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1161)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1161)
			::String tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1161)
			::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1161)
			::String tmp10 = ::StringTools_obj::trim(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1161)
			::String tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1161)
			::String tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1161)
			tmp4 = (tmp12 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(1161)
			tmp4 = true;
		}
		HX_STACK_LINE(1161)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1161)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1161)
		if ((tmp5)){
			HX_STACK_LINE(1161)
			int tmp7 = this->textFormatRanges->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1161)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1161)
			tmp6 = (tmp8 == (int)0);
		}
		else{
			HX_STACK_LINE(1161)
			tmp6 = true;
		}
		HX_STACK_LINE(1161)
		if ((tmp6)){
			HX_STACK_LINE(1163)
			int tmp7 = this->lineAscents->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1163)
			this->lineAscents->splice((int)0,tmp7);
			HX_STACK_LINE(1164)
			int tmp8 = this->lineBreaks->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1164)
			this->lineBreaks->splice((int)0,tmp8);
			HX_STACK_LINE(1165)
			int tmp9 = this->lineDescents->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1165)
			this->lineDescents->splice((int)0,tmp9);
			HX_STACK_LINE(1166)
			int tmp10 = this->lineLeadings->length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1166)
			this->lineLeadings->splice((int)0,tmp10);
			HX_STACK_LINE(1167)
			int tmp11 = this->lineHeights->length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1167)
			this->lineHeights->splice((int)0,tmp11);
			HX_STACK_LINE(1168)
			int tmp12 = this->lineWidths->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1168)
			this->lineWidths->splice((int)0,tmp12);
			HX_STACK_LINE(1169)
			int tmp13 = this->layoutGroups->length;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1169)
			this->layoutGroups->splice((int)0,tmp13);
			HX_STACK_LINE(1171)
			this->textWidth = (int)0;
			HX_STACK_LINE(1172)
			this->textHeight = (int)0;
			HX_STACK_LINE(1173)
			this->numLines = (int)1;
			HX_STACK_LINE(1174)
			this->maxScrollH = (int)0;
			HX_STACK_LINE(1175)
			this->maxScrollV = (int)1;
			HX_STACK_LINE(1176)
			this->bottomScrollV = (int)1;
		}
		else{
			HX_STACK_LINE(1180)
			this->getLayoutGroups();
			HX_STACK_LINE(1181)
			this->getLineMeasurements();
			HX_STACK_LINE(1182)
			this->setTextAlignment();
		}
		HX_STACK_LINE(1186)
		this->getBounds();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextEngine_obj,update,(void))

int TextEngine_obj::UTF8_TAB;

int TextEngine_obj::UTF8_ENDLINE;

int TextEngine_obj::UTF8_SPACE;

int TextEngine_obj::UTF8_HYPHEN;

::haxe::ds::StringMap TextEngine_obj::__defaultFonts;

::openfl::text::Font TextEngine_obj::findFont( ::String name){
	HX_STACK_FRAME("openfl._internal.text.TextEngine","findFont",0x253a8276,"openfl._internal.text.TextEngine.findFont","openfl/_internal/text/TextEngine.hx",162,0xdff93b7f)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(166)
	{
		HX_STACK_LINE(166)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(166)
		Array< ::Dynamic > _g1 = ::openfl::text::Font_obj::__registeredFonts;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(166)
		while((true)){
			HX_STACK_LINE(166)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(166)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(166)
			if ((tmp1)){
				HX_STACK_LINE(166)
				break;
			}
			HX_STACK_LINE(166)
			::openfl::text::Font tmp2 = _g1->__get(_g).StaticCast< ::openfl::text::Font >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(166)
			::openfl::text::Font registeredFont = tmp2;		HX_STACK_VAR(registeredFont,"registeredFont");
			HX_STACK_LINE(166)
			++(_g);
			HX_STACK_LINE(168)
			bool tmp3 = (registeredFont == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(168)
			if ((tmp3)){
				HX_STACK_LINE(168)
				continue;
			}
			HX_STACK_LINE(170)
			bool tmp4 = (registeredFont->name == name);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(170)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(170)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(170)
			if ((tmp5)){
				HX_STACK_LINE(170)
				bool tmp7 = (registeredFont->__fontPath != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(170)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(170)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(170)
				if ((tmp9)){
					HX_STACK_LINE(170)
					bool tmp10 = (registeredFont->__fontPath == name);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(170)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(170)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(170)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(170)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(170)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(170)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(170)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(170)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(170)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(170)
					if ((tmp19)){
						HX_STACK_LINE(170)
						tmp6 = (registeredFont->__fontPathWithoutDirectory == name);
					}
					else{
						HX_STACK_LINE(170)
						tmp6 = true;
					}
				}
				else{
					HX_STACK_LINE(170)
					tmp6 = false;
				}
			}
			else{
				HX_STACK_LINE(170)
				tmp6 = true;
			}
			HX_STACK_LINE(170)
			if ((tmp6)){
				HX_STACK_LINE(172)
				::openfl::text::Font tmp7 = registeredFont;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(172)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(178)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	::openfl::text::Font tmp1 = ::openfl::text::Font_obj::fromFile(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(178)
	::openfl::text::Font font = tmp1;		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(180)
	bool tmp2 = (font != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(180)
	if ((tmp2)){
		HX_STACK_LINE(182)
		::openfl::text::Font tmp3 = font;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(182)
		::openfl::text::Font_obj::__registeredFonts->push(tmp3);
		HX_STACK_LINE(183)
		::openfl::text::Font tmp4 = font;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(183)
		return tmp4;
	}
	HX_STACK_LINE(189)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,findFont,return )

Float TextEngine_obj::getFormatHeight( ::openfl::text::TextFormat format){
	HX_STACK_FRAME("openfl._internal.text.TextEngine","getFormatHeight",0xaafdc226,"openfl._internal.text.TextEngine.getFormatHeight","openfl/_internal/text/TextEngine.hx",204,0xdff93b7f)
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(206)
	Float ascent;		HX_STACK_VAR(ascent,"ascent");
	HX_STACK_LINE(206)
	Float descent;		HX_STACK_VAR(descent,"descent");
	HX_STACK_LINE(206)
	Dynamic leading;		HX_STACK_VAR(leading,"leading");
	HX_STACK_LINE(218)
	::openfl::text::TextFormat tmp = format;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(218)
	::openfl::text::Font tmp1 = ::openfl::_internal::text::TextEngine_obj::getFontInstance(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(218)
	::openfl::text::Font font = tmp1;		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(220)
	bool tmp2 = (font != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(220)
	if ((tmp2)){
		HX_STACK_LINE(222)
		int tmp3 = font->get_ascender();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(222)
		int tmp4 = font->get_unitsPerEM();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(222)
		Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(222)
		Dynamic tmp6 = format->size;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(222)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(222)
		ascent = tmp7;
		HX_STACK_LINE(223)
		int tmp8 = font->get_descender();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(223)
		int tmp9 = font->get_unitsPerEM();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(223)
		Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(223)
		Dynamic tmp11 = format->size;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(223)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(223)
		Float tmp13 = ::Math_obj::abs(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(223)
		descent = tmp13;
		HX_STACK_LINE(224)
		leading = format->leading;
	}
	else{
		HX_STACK_LINE(228)
		ascent = format->size;
		HX_STACK_LINE(229)
		Float tmp3 = (format->size * ((Float)0.185));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(229)
		descent = tmp3;
		HX_STACK_LINE(230)
		leading = format->leading;
	}
	HX_STACK_LINE(236)
	Float tmp3 = (ascent + descent);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(236)
	Dynamic tmp4 = leading;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(236)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(236)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getFormatHeight,return )

::String TextEngine_obj::getFont( ::openfl::text::TextFormat format){
	HX_STACK_FRAME("openfl._internal.text.TextEngine","getFont",0xec6d6977,"openfl._internal.text.TextEngine.getFont","openfl/_internal/text/TextEngine.hx",241,0xdff93b7f)
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(243)
	Dynamic tmp = format->italic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(243)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(243)
	if ((tmp)){
		HX_STACK_LINE(243)
		tmp1 = HX_HCSTRING("italic ","\x30","\xe3","\x44","\x91");
	}
	else{
		HX_STACK_LINE(243)
		tmp1 = HX_HCSTRING("normal ","\x19","\x70","\xda","\x2b");
	}
	HX_STACK_LINE(243)
	::String font = tmp1;		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(244)
	hx::AddEq(font,HX_HCSTRING("normal ","\x19","\x70","\xda","\x2b"));
	HX_STACK_LINE(245)
	Dynamic tmp2 = format->bold;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(245)
	::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(245)
	if ((tmp2)){
		HX_STACK_LINE(245)
		tmp3 = HX_HCSTRING("bold ","\xfb","\xd2","\xf5","\xb6");
	}
	else{
		HX_STACK_LINE(245)
		tmp3 = HX_HCSTRING("normal ","\x19","\x70","\xda","\x2b");
	}
	HX_STACK_LINE(245)
	hx::AddEq(font,tmp3);
	HX_STACK_LINE(246)
	::String tmp4 = (format->size + HX_HCSTRING("px","\x08","\x62","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(246)
	hx::AddEq(font,tmp4);
	HX_STACK_LINE(247)
	int tmp5 = (format->size + format->leading);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(247)
	int tmp6 = (tmp5 + (int)6);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(247)
	::String tmp7 = (HX_HCSTRING("/","\x2f","\x00","\x00","\x00") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(247)
	::String tmp8 = (tmp7 + HX_HCSTRING("px ","\x18","\x65","\x55","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(247)
	hx::AddEq(font,tmp8);
	HX_STACK_LINE(249)
	::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(249)
	{
		HX_STACK_LINE(249)
		::String _g = format->font;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(249)
		::String tmp10 = _g;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(249)
		::String _switch_1 = (tmp10);
		if (  ( _switch_1==HX_HCSTRING("_sans","\x32","\xa0","\x5e","\xff"))){
			HX_STACK_LINE(251)
			tmp9 = HX_HCSTRING("sans-serif","\xc3","\x60","\xfb","\x08");
		}
		else if (  ( _switch_1==HX_HCSTRING("_serif","\xbe","\x66","\x15","\x76"))){
			HX_STACK_LINE(252)
			tmp9 = HX_HCSTRING("serif","\x7d","\x1f","\x2e","\x7a");
		}
		else if (  ( _switch_1==HX_HCSTRING("_typewriter","\x0c","\x5e","\x52","\x94"))){
			HX_STACK_LINE(253)
			tmp9 = HX_HCSTRING("monospace","\xc3","\xd1","\xe5","\x5e");
		}
		else  {
			HX_STACK_LINE(254)
			::String tmp11 = (HX_HCSTRING("'","\x27","\x00","\x00","\x00") + format->font);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(254)
			tmp9 = (tmp11 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));
		}
;
;
	}
	HX_STACK_LINE(249)
	::String tmp10 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(249)
	hx::AddEq(font,tmp10);
	HX_STACK_LINE(258)
	::String tmp11 = font;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(258)
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getFont,return )

::openfl::text::Font TextEngine_obj::getFontInstance( ::openfl::text::TextFormat format){
	HX_STACK_FRAME("openfl._internal.text.TextEngine","getFontInstance",0xe749142c,"openfl._internal.text.TextEngine.getFontInstance","openfl/_internal/text/TextEngine.hx",263,0xdff93b7f)
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(267)
	::openfl::text::Font instance = null();		HX_STACK_VAR(instance,"instance");
	HX_STACK_LINE(268)
	Array< ::String > fontList = null();		HX_STACK_VAR(fontList,"fontList");
	HX_STACK_LINE(270)
	bool tmp = (format != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(270)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(270)
	if ((tmp)){
		HX_STACK_LINE(270)
		tmp1 = (format->font != null());
	}
	else{
		HX_STACK_LINE(270)
		tmp1 = false;
	}
	HX_STACK_LINE(270)
	if ((tmp1)){
		HX_STACK_LINE(272)
		::haxe::ds::StringMap tmp2 = ::openfl::_internal::text::TextEngine_obj::__defaultFonts;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(272)
		::String tmp3 = format->font;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(272)
		bool tmp4 = tmp2->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(272)
		if ((tmp4)){
			HX_STACK_LINE(274)
			::haxe::ds::StringMap tmp5 = ::openfl::_internal::text::TextEngine_obj::__defaultFonts;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(274)
			::String tmp6 = format->font;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(274)
			::openfl::text::Font tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(274)
			::openfl::text::Font tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(274)
			return tmp8;
		}
		HX_STACK_LINE(278)
		::String tmp5 = format->font;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(278)
		::openfl::text::Font tmp6 = ::openfl::_internal::text::TextEngine_obj::findFont(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(278)
		instance = tmp6;
		HX_STACK_LINE(279)
		bool tmp7 = (instance != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(279)
		if ((tmp7)){
			HX_STACK_LINE(279)
			::openfl::text::Font tmp8 = instance;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(279)
			return tmp8;
		}
		HX_STACK_LINE(281)
		::String tmp8 = ::lime::_system::System_obj::get_fontsDirectory();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(281)
		::String systemFontDirectory = tmp8;		HX_STACK_VAR(systemFontDirectory,"systemFontDirectory");
		HX_STACK_LINE(283)
		{
			HX_STACK_LINE(283)
			::String _g = format->font;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(283)
			::String tmp9 = _g;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(283)
			::String _switch_2 = (tmp9);
			if (  ( _switch_2==HX_HCSTRING("_sans","\x32","\xa0","\x5e","\xff"))){
				HX_STACK_LINE(316)
				::sys::io::Process tmp10 = ::sys::io::Process_obj::__new(HX_HCSTRING("fc-match","\xf5","\xea","\x18","\xe0"),Array_obj< ::String >::__new().Add(HX_HCSTRING("sans","\x53","\x84","\x4d","\x4c")).Add(HX_HCSTRING("-f%{file}","\x92","\x57","\xa1","\x0f")));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(316)
				::String tmp11 = tmp10->_stdout->readLine();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(316)
				fontList = Array_obj< ::String >::__new().Add(tmp11);
			}
			else if (  ( _switch_2==HX_HCSTRING("_serif","\xbe","\x66","\x15","\x76"))){
			}
			else if (  ( _switch_2==HX_HCSTRING("_typewriter","\x0c","\x5e","\x52","\x94"))){
				HX_STACK_LINE(358)
				::sys::io::Process tmp10 = ::sys::io::Process_obj::__new(HX_HCSTRING("fc-match","\xf5","\xea","\x18","\xe0"),Array_obj< ::String >::__new().Add(HX_HCSTRING("mono","\x23","\xdc","\x60","\x48")).Add(HX_HCSTRING("-f%{file}","\x92","\x57","\xa1","\x0f")));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(358)
				::String tmp11 = tmp10->_stdout->readLine();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(358)
				fontList = Array_obj< ::String >::__new().Add(tmp11);
			}
			else  {
				HX_STACK_LINE(367)
				::String tmp10 = (systemFontDirectory + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(367)
				::String tmp11 = format->font;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(367)
				::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(367)
				fontList = Array_obj< ::String >::__new().Add(tmp12);
			}
;
;
		}
		HX_STACK_LINE(384)
		bool tmp9 = (fontList != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(384)
		if ((tmp9)){
			HX_STACK_LINE(386)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(386)
			while((true)){
				HX_STACK_LINE(386)
				bool tmp10 = (_g < fontList->length);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(386)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(386)
				if ((tmp11)){
					HX_STACK_LINE(386)
					break;
				}
				HX_STACK_LINE(386)
				::String tmp12 = fontList->__get(_g);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(386)
				::String font = tmp12;		HX_STACK_VAR(font,"font");
				HX_STACK_LINE(386)
				++(_g);
				HX_STACK_LINE(388)
				::String tmp13 = font;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(388)
				::openfl::text::Font tmp14 = ::openfl::_internal::text::TextEngine_obj::findFont(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(388)
				instance = tmp14;
				HX_STACK_LINE(390)
				bool tmp15 = (instance != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(390)
				if ((tmp15)){
					HX_STACK_LINE(392)
					::haxe::ds::StringMap tmp16 = ::openfl::_internal::text::TextEngine_obj::__defaultFonts;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(392)
					::String tmp17 = format->font;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(392)
					::openfl::text::Font tmp18 = instance;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(392)
					tmp16->set(tmp17,tmp18);
					HX_STACK_LINE(393)
					::openfl::text::Font tmp19 = instance;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(393)
					return tmp19;
				}
			}
		}
		HX_STACK_LINE(401)
		::openfl::text::Font tmp10 = ::openfl::_internal::text::TextEngine_obj::findFont(HX_HCSTRING("_serif","\xbe","\x66","\x15","\x76"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(401)
		instance = tmp10;
		HX_STACK_LINE(402)
		bool tmp11 = (instance != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(402)
		if ((tmp11)){
			HX_STACK_LINE(402)
			::openfl::text::Font tmp12 = instance;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(402)
			return tmp12;
		}
	}
	HX_STACK_LINE(406)
	::String tmp2 = ::lime::_system::System_obj::get_fontsDirectory();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(406)
	::String systemFontDirectory = tmp2;		HX_STACK_VAR(systemFontDirectory,"systemFontDirectory");
	HX_STACK_LINE(437)
	::sys::io::Process tmp3 = ::sys::io::Process_obj::__new(HX_HCSTRING("fc-match","\xf5","\xea","\x18","\xe0"),Array_obj< ::String >::__new().Add(HX_HCSTRING("serif","\x7d","\x1f","\x2e","\x7a")).Add(HX_HCSTRING("-f%{file}","\x92","\x57","\xa1","\x0f")));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(437)
	::String tmp4 = tmp3->_stdout->readLine();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(437)
	fontList = Array_obj< ::String >::__new().Add(tmp4);
	HX_STACK_LINE(446)
	{
		HX_STACK_LINE(446)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(446)
		while((true)){
			HX_STACK_LINE(446)
			bool tmp5 = (_g < fontList->length);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(446)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(446)
			if ((tmp6)){
				HX_STACK_LINE(446)
				break;
			}
			HX_STACK_LINE(446)
			::String tmp7 = fontList->__get(_g);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(446)
			::String font = tmp7;		HX_STACK_VAR(font,"font");
			HX_STACK_LINE(446)
			++(_g);
			HX_STACK_LINE(448)
			::String tmp8 = font;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(448)
			::openfl::text::Font tmp9 = ::openfl::_internal::text::TextEngine_obj::findFont(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(448)
			instance = tmp9;
			HX_STACK_LINE(450)
			bool tmp10 = (instance != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(450)
			if ((tmp10)){
				HX_STACK_LINE(452)
				::haxe::ds::StringMap tmp11 = ::openfl::_internal::text::TextEngine_obj::__defaultFonts;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(452)
				::String tmp12 = format->font;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(452)
				::openfl::text::Font tmp13 = instance;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(452)
				tmp11->set(tmp12,tmp13);
				HX_STACK_LINE(453)
				::openfl::text::Font tmp14 = instance;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(453)
				return tmp14;
			}
		}
	}
	HX_STACK_LINE(459)
	::haxe::ds::StringMap tmp5 = ::openfl::_internal::text::TextEngine_obj::__defaultFonts;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(459)
	::String tmp6 = format->font;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(459)
	tmp5->set(tmp6,null());
	HX_STACK_LINE(463)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEngine_obj,getFontInstance,return )


TextEngine_obj::TextEngine_obj()
{
}

void TextEngine_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextEngine);
	HX_MARK_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_MARK_MEMBER_NAME(autoSize,"autoSize");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(caretIndex,"caretIndex");
	HX_MARK_MEMBER_NAME(embedFonts,"embedFonts");
	HX_MARK_MEMBER_NAME(gridFitType,"gridFitType");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(layoutGroups,"layoutGroups");
	HX_MARK_MEMBER_NAME(lineAscents,"lineAscents");
	HX_MARK_MEMBER_NAME(lineBreaks,"lineBreaks");
	HX_MARK_MEMBER_NAME(lineDescents,"lineDescents");
	HX_MARK_MEMBER_NAME(lineLeadings,"lineLeadings");
	HX_MARK_MEMBER_NAME(lineHeights,"lineHeights");
	HX_MARK_MEMBER_NAME(lineWidths,"lineWidths");
	HX_MARK_MEMBER_NAME(maxChars,"maxChars");
	HX_MARK_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_MARK_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_MARK_MEMBER_NAME(multiline,"multiline");
	HX_MARK_MEMBER_NAME(numLines,"numLines");
	HX_MARK_MEMBER_NAME(restrict,"restrict");
	HX_MARK_MEMBER_NAME(scrollH,"scrollH");
	HX_MARK_MEMBER_NAME(scrollV,"scrollV");
	HX_MARK_MEMBER_NAME(selectable,"selectable");
	HX_MARK_MEMBER_NAME(sharpness,"sharpness");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(textHeight,"textHeight");
	HX_MARK_MEMBER_NAME(textFormatRanges,"textFormatRanges");
	HX_MARK_MEMBER_NAME(textWidth,"textWidth");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(wordWrap,"wordWrap");
	HX_MARK_MEMBER_NAME(textField,"textField");
	HX_MARK_MEMBER_NAME(__cursorPosition,"__cursorPosition");
	HX_MARK_MEMBER_NAME(__cursorTimer,"__cursorTimer");
	HX_MARK_MEMBER_NAME(__hasFocus,"__hasFocus");
	HX_MARK_MEMBER_NAME(__isKeyDown,"__isKeyDown");
	HX_MARK_MEMBER_NAME(__measuredHeight,"__measuredHeight");
	HX_MARK_MEMBER_NAME(__measuredWidth,"__measuredWidth");
	HX_MARK_MEMBER_NAME(__selectionStart,"__selectionStart");
	HX_MARK_MEMBER_NAME(__showCursor,"__showCursor");
	HX_MARK_MEMBER_NAME(__textFormat,"__textFormat");
	HX_MARK_MEMBER_NAME(__textLayout,"__textLayout");
	HX_MARK_MEMBER_NAME(__texture,"__texture");
	HX_MARK_MEMBER_NAME(__cairoFont,"__cairoFont");
	HX_MARK_MEMBER_NAME(__font,"__font");
	HX_MARK_END_CLASS();
}

void TextEngine_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_VISIT_MEMBER_NAME(autoSize,"autoSize");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_VISIT_MEMBER_NAME(border,"border");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(caretIndex,"caretIndex");
	HX_VISIT_MEMBER_NAME(embedFonts,"embedFonts");
	HX_VISIT_MEMBER_NAME(gridFitType,"gridFitType");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(layoutGroups,"layoutGroups");
	HX_VISIT_MEMBER_NAME(lineAscents,"lineAscents");
	HX_VISIT_MEMBER_NAME(lineBreaks,"lineBreaks");
	HX_VISIT_MEMBER_NAME(lineDescents,"lineDescents");
	HX_VISIT_MEMBER_NAME(lineLeadings,"lineLeadings");
	HX_VISIT_MEMBER_NAME(lineHeights,"lineHeights");
	HX_VISIT_MEMBER_NAME(lineWidths,"lineWidths");
	HX_VISIT_MEMBER_NAME(maxChars,"maxChars");
	HX_VISIT_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_VISIT_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_VISIT_MEMBER_NAME(multiline,"multiline");
	HX_VISIT_MEMBER_NAME(numLines,"numLines");
	HX_VISIT_MEMBER_NAME(restrict,"restrict");
	HX_VISIT_MEMBER_NAME(scrollH,"scrollH");
	HX_VISIT_MEMBER_NAME(scrollV,"scrollV");
	HX_VISIT_MEMBER_NAME(selectable,"selectable");
	HX_VISIT_MEMBER_NAME(sharpness,"sharpness");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(textHeight,"textHeight");
	HX_VISIT_MEMBER_NAME(textFormatRanges,"textFormatRanges");
	HX_VISIT_MEMBER_NAME(textWidth,"textWidth");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(wordWrap,"wordWrap");
	HX_VISIT_MEMBER_NAME(textField,"textField");
	HX_VISIT_MEMBER_NAME(__cursorPosition,"__cursorPosition");
	HX_VISIT_MEMBER_NAME(__cursorTimer,"__cursorTimer");
	HX_VISIT_MEMBER_NAME(__hasFocus,"__hasFocus");
	HX_VISIT_MEMBER_NAME(__isKeyDown,"__isKeyDown");
	HX_VISIT_MEMBER_NAME(__measuredHeight,"__measuredHeight");
	HX_VISIT_MEMBER_NAME(__measuredWidth,"__measuredWidth");
	HX_VISIT_MEMBER_NAME(__selectionStart,"__selectionStart");
	HX_VISIT_MEMBER_NAME(__showCursor,"__showCursor");
	HX_VISIT_MEMBER_NAME(__textFormat,"__textFormat");
	HX_VISIT_MEMBER_NAME(__textLayout,"__textLayout");
	HX_VISIT_MEMBER_NAME(__texture,"__texture");
	HX_VISIT_MEMBER_NAME(__cairoFont,"__cairoFont");
	HX_VISIT_MEMBER_NAME(__font,"__font");
}

Dynamic TextEngine_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { return border; }
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"__font") ) { return __font; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { return scrollH; }
		if (HX_FIELD_EQ(inName,"scrollV") ) { return scrollV; }
		if (HX_FIELD_EQ(inName,"getLine") ) { return getLine_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { return autoSize; }
		if (HX_FIELD_EQ(inName,"maxChars") ) { return maxChars; }
		if (HX_FIELD_EQ(inName,"numLines") ) { return numLines; }
		if (HX_FIELD_EQ(inName,"restrict") ) { return restrict; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return wordWrap; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { return multiline; }
		if (HX_FIELD_EQ(inName,"sharpness") ) { return sharpness; }
		if (HX_FIELD_EQ(inName,"textWidth") ) { return textWidth; }
		if (HX_FIELD_EQ(inName,"textField") ) { return textField; }
		if (HX_FIELD_EQ(inName,"__texture") ) { return __texture; }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return getBounds_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { return caretIndex; }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { return embedFonts; }
		if (HX_FIELD_EQ(inName,"lineBreaks") ) { return lineBreaks; }
		if (HX_FIELD_EQ(inName,"lineWidths") ) { return lineWidths; }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { return maxScrollH; }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { return maxScrollV; }
		if (HX_FIELD_EQ(inName,"selectable") ) { return selectable; }
		if (HX_FIELD_EQ(inName,"textHeight") ) { return textHeight; }
		if (HX_FIELD_EQ(inName,"__hasFocus") ) { return __hasFocus; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { return borderColor; }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { return gridFitType; }
		if (HX_FIELD_EQ(inName,"lineAscents") ) { return lineAscents; }
		if (HX_FIELD_EQ(inName,"lineHeights") ) { return lineHeights; }
		if (HX_FIELD_EQ(inName,"__isKeyDown") ) { return __isKeyDown; }
		if (HX_FIELD_EQ(inName,"__cairoFont") ) { return __cairoFont; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"layoutGroups") ) { return layoutGroups; }
		if (HX_FIELD_EQ(inName,"lineDescents") ) { return lineDescents; }
		if (HX_FIELD_EQ(inName,"lineLeadings") ) { return lineLeadings; }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { return __showCursor; }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { return __textFormat; }
		if (HX_FIELD_EQ(inName,"__textLayout") ) { return __textLayout; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { return antiAliasType; }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { return bottomScrollV; }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { return __cursorTimer; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return backgroundColor; }
		if (HX_FIELD_EQ(inName,"__measuredWidth") ) { return __measuredWidth; }
		if (HX_FIELD_EQ(inName,"getLayoutGroups") ) { return getLayoutGroups_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"textFormatRanges") ) { return textFormatRanges; }
		if (HX_FIELD_EQ(inName,"__cursorPosition") ) { return __cursorPosition; }
		if (HX_FIELD_EQ(inName,"__measuredHeight") ) { return __measuredHeight; }
		if (HX_FIELD_EQ(inName,"__selectionStart") ) { return __selectionStart; }
		if (HX_FIELD_EQ(inName,"setTextAlignment") ) { return setTextAlignment_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getLineBreakIndex") ) { return getLineBreakIndex_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getLineMeasurements") ) { return getLineMeasurements_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextEngine_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { outValue = getFont_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"findFont") ) { outValue = findFont_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__defaultFonts") ) { outValue = __defaultFonts; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFormatHeight") ) { outValue = getFormatHeight_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getFontInstance") ) { outValue = getFontInstance_dyn(); return true;  }
	}
	return false;
}

Dynamic TextEngine_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__font") ) { __font=inValue.Cast< ::openfl::text::Font >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { scrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollV") ) { scrollV=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { autoSize=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxChars") ) { maxChars=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numLines") ) { numLines=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"restrict") ) { restrict=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { wordWrap=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { multiline=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sharpness") ) { sharpness=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textWidth") ) { textWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textField") ) { textField=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture") ) { __texture=inValue.Cast< ::lime::graphics::opengl::GLTexture >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { caretIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { embedFonts=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineBreaks") ) { lineBreaks=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineWidths") ) { lineWidths=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { maxScrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { maxScrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectable") ) { selectable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textHeight") ) { textHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hasFocus") ) { __hasFocus=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { borderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { gridFitType=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineAscents") ) { lineAscents=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineHeights") ) { lineHeights=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isKeyDown") ) { __isKeyDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cairoFont") ) { __cairoFont=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"layoutGroups") ) { layoutGroups=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineDescents") ) { lineDescents=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineLeadings") ) { lineLeadings=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__showCursor") ) { __showCursor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textFormat") ) { __textFormat=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textLayout") ) { __textLayout=inValue.Cast< ::lime::text::TextLayout >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { antiAliasType=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { bottomScrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cursorTimer") ) { __cursorTimer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { backgroundColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__measuredWidth") ) { __measuredWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"textFormatRanges") ) { textFormatRanges=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cursorPosition") ) { __cursorPosition=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__measuredHeight") ) { __measuredHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__selectionStart") ) { __selectionStart=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextEngine_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"__defaultFonts") ) { __defaultFonts=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void TextEngine_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("antiAliasType","\x68","\xc4","\xfa","\xe7"));
	outFields->push(HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"));
	outFields->push(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));
	outFields->push(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"));
	outFields->push(HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"));
	outFields->push(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"));
	outFields->push(HX_HCSTRING("bottomScrollV","\xfe","\xf7","\x87","\x8b"));
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	outFields->push(HX_HCSTRING("caretIndex","\x8f","\xb6","\x5b","\xdd"));
	outFields->push(HX_HCSTRING("embedFonts","\x2b","\xc7","\xe1","\x8e"));
	outFields->push(HX_HCSTRING("gridFitType","\x05","\xf3","\x13","\xb4"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("layoutGroups","\x9e","\xa2","\x6c","\x37"));
	outFields->push(HX_HCSTRING("lineAscents","\x45","\x0c","\xc2","\x3e"));
	outFields->push(HX_HCSTRING("lineBreaks","\xe8","\xfd","\x5b","\xea"));
	outFields->push(HX_HCSTRING("lineDescents","\x0d","\xad","\x64","\x49"));
	outFields->push(HX_HCSTRING("lineLeadings","\x01","\x23","\x97","\x76"));
	outFields->push(HX_HCSTRING("lineHeights","\x18","\x99","\x8e","\x3e"));
	outFields->push(HX_HCSTRING("lineWidths","\xc1","\x8a","\xa4","\x20"));
	outFields->push(HX_HCSTRING("maxChars","\x99","\xef","\xd0","\xef"));
	outFields->push(HX_HCSTRING("maxScrollH","\x57","\xad","\xfc","\x9a"));
	outFields->push(HX_HCSTRING("maxScrollV","\x65","\xad","\xfc","\x9a"));
	outFields->push(HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e"));
	outFields->push(HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32"));
	outFields->push(HX_HCSTRING("restrict","\x3c","\xcb","\x9e","\xf1"));
	outFields->push(HX_HCSTRING("scrollH","\x9b","\x33","\xd8","\x30"));
	outFields->push(HX_HCSTRING("scrollV","\xa9","\x33","\xd8","\x30"));
	outFields->push(HX_HCSTRING("selectable","\x96","\xb6","\x2a","\xc4"));
	outFields->push(HX_HCSTRING("sharpness","\x81","\x22","\x25","\x1b"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39"));
	outFields->push(HX_HCSTRING("textFormatRanges","\xfa","\x0e","\x49","\xa2"));
	outFields->push(HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"));
	outFields->push(HX_HCSTRING("textField","\xcd","\x24","\x81","\x99"));
	outFields->push(HX_HCSTRING("__cursorPosition","\xbf","\x3c","\xe0","\x7d"));
	outFields->push(HX_HCSTRING("__cursorTimer","\xef","\x59","\x8f","\xe1"));
	outFields->push(HX_HCSTRING("__hasFocus","\x3e","\x1d","\x1a","\x34"));
	outFields->push(HX_HCSTRING("__isKeyDown","\xb7","\x2f","\x72","\xce"));
	outFields->push(HX_HCSTRING("__measuredHeight","\xed","\xb6","\x23","\x42"));
	outFields->push(HX_HCSTRING("__measuredWidth","\xc0","\x49","\xec","\x02"));
	outFields->push(HX_HCSTRING("__selectionStart","\x96","\xe3","\xb9","\x43"));
	outFields->push(HX_HCSTRING("__showCursor","\xd3","\xae","\xf0","\xe0"));
	outFields->push(HX_HCSTRING("__textFormat","\xe4","\x8a","\x12","\x6d"));
	outFields->push(HX_HCSTRING("__textLayout","\x57","\xaa","\x3c","\xc8"));
	outFields->push(HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20"));
	outFields->push(HX_HCSTRING("__cairoFont","\x57","\xe7","\xb5","\x28"));
	outFields->push(HX_HCSTRING("__font","\xef","\xc0","\xb8","\xf2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextEngine_obj,antiAliasType),HX_HCSTRING("antiAliasType","\x68","\xc4","\xfa","\xe7")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextEngine_obj,autoSize),HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,background),HX_HCSTRING("background","\xee","\x93","\x1d","\x26")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,backgroundColor),HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,border),HX_HCSTRING("border","\xec","\x4c","\x1a","\x64")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,borderColor),HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,bottomScrollV),HX_HCSTRING("bottomScrollV","\xfe","\xf7","\x87","\x8b")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(TextEngine_obj,bounds),HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,caretIndex),HX_HCSTRING("caretIndex","\x8f","\xb6","\x5b","\xdd")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,embedFonts),HX_HCSTRING("embedFonts","\x2b","\xc7","\xe1","\x8e")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextEngine_obj,gridFitType),HX_HCSTRING("gridFitType","\x05","\xf3","\x13","\xb4")},
	{hx::fsFloat,(int)offsetof(TextEngine_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TextEngine_obj,layoutGroups),HX_HCSTRING("layoutGroups","\x9e","\xa2","\x6c","\x37")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(TextEngine_obj,lineAscents),HX_HCSTRING("lineAscents","\x45","\x0c","\xc2","\x3e")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(TextEngine_obj,lineBreaks),HX_HCSTRING("lineBreaks","\xe8","\xfd","\x5b","\xea")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(TextEngine_obj,lineDescents),HX_HCSTRING("lineDescents","\x0d","\xad","\x64","\x49")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(TextEngine_obj,lineLeadings),HX_HCSTRING("lineLeadings","\x01","\x23","\x97","\x76")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(TextEngine_obj,lineHeights),HX_HCSTRING("lineHeights","\x18","\x99","\x8e","\x3e")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(TextEngine_obj,lineWidths),HX_HCSTRING("lineWidths","\xc1","\x8a","\xa4","\x20")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,maxChars),HX_HCSTRING("maxChars","\x99","\xef","\xd0","\xef")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,maxScrollH),HX_HCSTRING("maxScrollH","\x57","\xad","\xfc","\x9a")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,maxScrollV),HX_HCSTRING("maxScrollV","\x65","\xad","\xfc","\x9a")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,multiline),HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,numLines),HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32")},
	{hx::fsString,(int)offsetof(TextEngine_obj,restrict),HX_HCSTRING("restrict","\x3c","\xcb","\x9e","\xf1")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,scrollH),HX_HCSTRING("scrollH","\x9b","\x33","\xd8","\x30")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,scrollV),HX_HCSTRING("scrollV","\xa9","\x33","\xd8","\x30")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,selectable),HX_HCSTRING("selectable","\x96","\xb6","\x2a","\xc4")},
	{hx::fsFloat,(int)offsetof(TextEngine_obj,sharpness),HX_HCSTRING("sharpness","\x81","\x22","\x25","\x1b")},
	{hx::fsString,(int)offsetof(TextEngine_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsFloat,(int)offsetof(TextEngine_obj,textHeight),HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TextEngine_obj,textFormatRanges),HX_HCSTRING("textFormatRanges","\xfa","\x0e","\x49","\xa2")},
	{hx::fsFloat,(int)offsetof(TextEngine_obj,textWidth),HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextEngine_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsFloat,(int)offsetof(TextEngine_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,wordWrap),HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(TextEngine_obj,textField),HX_HCSTRING("textField","\xcd","\x24","\x81","\x99")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,__cursorPosition),HX_HCSTRING("__cursorPosition","\xbf","\x3c","\xe0","\x7d")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(TextEngine_obj,__cursorTimer),HX_HCSTRING("__cursorTimer","\xef","\x59","\x8f","\xe1")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,__hasFocus),HX_HCSTRING("__hasFocus","\x3e","\x1d","\x1a","\x34")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,__isKeyDown),HX_HCSTRING("__isKeyDown","\xb7","\x2f","\x72","\xce")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,__measuredHeight),HX_HCSTRING("__measuredHeight","\xed","\xb6","\x23","\x42")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,__measuredWidth),HX_HCSTRING("__measuredWidth","\xc0","\x49","\xec","\x02")},
	{hx::fsInt,(int)offsetof(TextEngine_obj,__selectionStart),HX_HCSTRING("__selectionStart","\x96","\xe3","\xb9","\x43")},
	{hx::fsBool,(int)offsetof(TextEngine_obj,__showCursor),HX_HCSTRING("__showCursor","\xd3","\xae","\xf0","\xe0")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(TextEngine_obj,__textFormat),HX_HCSTRING("__textFormat","\xe4","\x8a","\x12","\x6d")},
	{hx::fsObject /*::lime::text::TextLayout*/ ,(int)offsetof(TextEngine_obj,__textLayout),HX_HCSTRING("__textLayout","\x57","\xaa","\x3c","\xc8")},
	{hx::fsObject /*::lime::graphics::opengl::GLTexture*/ ,(int)offsetof(TextEngine_obj,__texture),HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextEngine_obj,__cairoFont),HX_HCSTRING("__cairoFont","\x57","\xe7","\xb5","\x28")},
	{hx::fsObject /*::openfl::text::Font*/ ,(int)offsetof(TextEngine_obj,__font),HX_HCSTRING("__font","\xef","\xc0","\xb8","\xf2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &TextEngine_obj::UTF8_TAB,HX_HCSTRING("UTF8_TAB","\x07","\xd5","\x41","\x1d")},
	{hx::fsInt,(void *) &TextEngine_obj::UTF8_ENDLINE,HX_HCSTRING("UTF8_ENDLINE","\x01","\x29","\x41","\xcf")},
	{hx::fsInt,(void *) &TextEngine_obj::UTF8_SPACE,HX_HCSTRING("UTF8_SPACE","\xf8","\x7b","\xa9","\xc7")},
	{hx::fsInt,(void *) &TextEngine_obj::UTF8_HYPHEN,HX_HCSTRING("UTF8_HYPHEN","\x60","\x3c","\x3f","\xbf")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &TextEngine_obj::__defaultFonts,HX_HCSTRING("__defaultFonts","\x63","\x76","\xad","\xda")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("antiAliasType","\x68","\xc4","\xfa","\xe7"),
	HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"),
	HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),
	HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"),
	HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"),
	HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"),
	HX_HCSTRING("bottomScrollV","\xfe","\xf7","\x87","\x8b"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("caretIndex","\x8f","\xb6","\x5b","\xdd"),
	HX_HCSTRING("embedFonts","\x2b","\xc7","\xe1","\x8e"),
	HX_HCSTRING("gridFitType","\x05","\xf3","\x13","\xb4"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("layoutGroups","\x9e","\xa2","\x6c","\x37"),
	HX_HCSTRING("lineAscents","\x45","\x0c","\xc2","\x3e"),
	HX_HCSTRING("lineBreaks","\xe8","\xfd","\x5b","\xea"),
	HX_HCSTRING("lineDescents","\x0d","\xad","\x64","\x49"),
	HX_HCSTRING("lineLeadings","\x01","\x23","\x97","\x76"),
	HX_HCSTRING("lineHeights","\x18","\x99","\x8e","\x3e"),
	HX_HCSTRING("lineWidths","\xc1","\x8a","\xa4","\x20"),
	HX_HCSTRING("maxChars","\x99","\xef","\xd0","\xef"),
	HX_HCSTRING("maxScrollH","\x57","\xad","\xfc","\x9a"),
	HX_HCSTRING("maxScrollV","\x65","\xad","\xfc","\x9a"),
	HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e"),
	HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32"),
	HX_HCSTRING("restrict","\x3c","\xcb","\x9e","\xf1"),
	HX_HCSTRING("scrollH","\x9b","\x33","\xd8","\x30"),
	HX_HCSTRING("scrollV","\xa9","\x33","\xd8","\x30"),
	HX_HCSTRING("selectable","\x96","\xb6","\x2a","\xc4"),
	HX_HCSTRING("sharpness","\x81","\x22","\x25","\x1b"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39"),
	HX_HCSTRING("textFormatRanges","\xfa","\x0e","\x49","\xa2"),
	HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"),
	HX_HCSTRING("textField","\xcd","\x24","\x81","\x99"),
	HX_HCSTRING("__cursorPosition","\xbf","\x3c","\xe0","\x7d"),
	HX_HCSTRING("__cursorTimer","\xef","\x59","\x8f","\xe1"),
	HX_HCSTRING("__hasFocus","\x3e","\x1d","\x1a","\x34"),
	HX_HCSTRING("__isKeyDown","\xb7","\x2f","\x72","\xce"),
	HX_HCSTRING("__measuredHeight","\xed","\xb6","\x23","\x42"),
	HX_HCSTRING("__measuredWidth","\xc0","\x49","\xec","\x02"),
	HX_HCSTRING("__selectionStart","\x96","\xe3","\xb9","\x43"),
	HX_HCSTRING("__showCursor","\xd3","\xae","\xf0","\xe0"),
	HX_HCSTRING("__textFormat","\xe4","\x8a","\x12","\x6d"),
	HX_HCSTRING("__textLayout","\x57","\xaa","\x3c","\xc8"),
	HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20"),
	HX_HCSTRING("__cairoFont","\x57","\xe7","\xb5","\x28"),
	HX_HCSTRING("__font","\xef","\xc0","\xb8","\xf2"),
	HX_HCSTRING("getBounds","\xab","\x0f","\x74","\xe2"),
	HX_HCSTRING("getLine","\xaa","\xc7","\x35","\x1a"),
	HX_HCSTRING("getLineBreakIndex","\x1d","\x16","\x36","\x36"),
	HX_HCSTRING("getLineMeasurements","\xc1","\x9f","\x81","\x56"),
	HX_HCSTRING("getLayoutGroups","\x54","\xf8","\x56","\x5a"),
	HX_HCSTRING("setTextAlignment","\x74","\x0f","\x33","\x62"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextEngine_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_TAB,"UTF8_TAB");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_ENDLINE,"UTF8_ENDLINE");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_SPACE,"UTF8_SPACE");
	HX_MARK_MEMBER_NAME(TextEngine_obj::UTF8_HYPHEN,"UTF8_HYPHEN");
	HX_MARK_MEMBER_NAME(TextEngine_obj::__defaultFonts,"__defaultFonts");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextEngine_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_TAB,"UTF8_TAB");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_ENDLINE,"UTF8_ENDLINE");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_SPACE,"UTF8_SPACE");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::UTF8_HYPHEN,"UTF8_HYPHEN");
	HX_VISIT_MEMBER_NAME(TextEngine_obj::__defaultFonts,"__defaultFonts");
};

#endif

hx::Class TextEngine_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("UTF8_TAB","\x07","\xd5","\x41","\x1d"),
	HX_HCSTRING("UTF8_ENDLINE","\x01","\x29","\x41","\xcf"),
	HX_HCSTRING("UTF8_SPACE","\xf8","\x7b","\xa9","\xc7"),
	HX_HCSTRING("UTF8_HYPHEN","\x60","\x3c","\x3f","\xbf"),
	HX_HCSTRING("__defaultFonts","\x63","\x76","\xad","\xda"),
	HX_HCSTRING("findFont","\xa8","\x6a","\x54","\x96"),
	HX_HCSTRING("getFormatHeight","\x34","\x24","\x4b","\x62"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getFontInstance","\x3a","\x76","\x96","\x9e"),
	::String(null()) };

void TextEngine_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.text.TextEngine","\x60","\x7a","\x88","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextEngine_obj::__GetStatic;
	__mClass->mSetStaticField = &TextEngine_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextEngine_obj >;
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

void TextEngine_obj::__boot()
{
	UTF8_TAB= (int)9;
	UTF8_ENDLINE= (int)10;
	UTF8_SPACE= (int)32;
	UTF8_HYPHEN= (int)45;
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/text/TextEngine.hx",50,0xdff93b7f)
		{
			HX_STACK_LINE(50)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(50)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(50)
			return tmp1;
		}
		return null();
	}
};
	__defaultFonts= _Function_0_1::Block();
}

} // end namespace openfl
} // end namespace _internal
} // end namespace text
