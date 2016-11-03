#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_FPS_Mem
#include <FPS_Mem.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
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
#ifndef INCLUDED_openfl_system_System
#include <openfl/system/System.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

Void FPS_Mem_obj::__construct(hx::Null< Float >  __o_inX,hx::Null< Float >  __o_inY,hx::Null< int >  __o_inCol)
{
HX_STACK_FRAME("FPS_Mem","new",0xb77d33b1,"FPS_Mem.new","FPS_Mem.hx",13,0xb2c28cdf)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_inX,"inX")
HX_STACK_ARG(__o_inY,"inY")
HX_STACK_ARG(__o_inCol,"inCol")
Float inX = __o_inX.Default(((Float)10.0));
Float inY = __o_inY.Default(((Float)10.0));
int inCol = __o_inCol.Default(0);
{
	HX_STACK_LINE(16)
	this->memPeak = ((Float)0);
	HX_STACK_LINE(20)
	super::__construct();
	HX_STACK_LINE(22)
	Float tmp = inX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	this->set_x(tmp);
	HX_STACK_LINE(23)
	Float tmp1 = inY;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	this->set_y(tmp1);
	HX_STACK_LINE(24)
	this->set_selectable(false);
	HX_STACK_LINE(26)
	::openfl::text::TextFormat tmp2 = ::openfl::text::TextFormat_obj::__new(HX_HCSTRING("_sans","\x32","\xa0","\x5e","\xff"),(int)12,inCol,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	this->set_defaultTextFormat(tmp2);
	HX_STACK_LINE(28)
	this->set_text(HX_HCSTRING("FPS: ","\xaf","\xda","\x2c","\x83"));
	HX_STACK_LINE(30)
	this->times = Array_obj< Float >::__new();
	HX_STACK_LINE(31)
	Dynamic tmp3 = this->onEnter_dyn();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(31)
	this->addEventListener(HX_HCSTRING("enterFrame","\xf5","\x03","\x50","\x02"),tmp3,null(),null(),null());
	HX_STACK_LINE(32)
	this->set_width((int)150);
	HX_STACK_LINE(33)
	this->set_height((int)70);
}
;
	return null();
}

//FPS_Mem_obj::~FPS_Mem_obj() { }

Dynamic FPS_Mem_obj::__CreateEmpty() { return  new FPS_Mem_obj; }
hx::ObjectPtr< FPS_Mem_obj > FPS_Mem_obj::__new(hx::Null< Float >  __o_inX,hx::Null< Float >  __o_inY,hx::Null< int >  __o_inCol)
{  hx::ObjectPtr< FPS_Mem_obj > _result_ = new FPS_Mem_obj();
	_result_->__construct(__o_inX,__o_inY,__o_inCol);
	return _result_;}

Dynamic FPS_Mem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FPS_Mem_obj > _result_ = new FPS_Mem_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void FPS_Mem_obj::onEnter( Dynamic _){
{
		HX_STACK_FRAME("FPS_Mem","onEnter",0x554feb4a,"FPS_Mem.onEnter","FPS_Mem.hx",37,0xb2c28cdf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(38)
		Float tmp = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		Float now = tmp;		HX_STACK_VAR(now,"now");
		HX_STACK_LINE(39)
		Float tmp1 = now;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		this->times->push(tmp1);
		HX_STACK_LINE(41)
		while((true)){
			HX_STACK_LINE(41)
			Float tmp2 = this->times->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(41)
			Float tmp3 = (now - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(41)
			bool tmp4 = (tmp2 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(41)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(41)
			if ((tmp5)){
				HX_STACK_LINE(41)
				break;
			}
			HX_STACK_LINE(42)
			this->times->shift();
		}
		HX_STACK_LINE(44)
		int tmp2 = ::openfl::_system::System_obj::get_totalMemory();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		Float tmp3 = (Float(tmp2) / Float((int)1024));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(44)
		Float tmp4 = (Float(tmp3) / Float((int)1024));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		Float tmp5 = (tmp4 * (int)100);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(44)
		int tmp6 = ::Math_obj::round(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(44)
		Float tmp7 = (Float(tmp6) / Float((int)100));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(44)
		Float mem = tmp7;		HX_STACK_VAR(mem,"mem");
		HX_STACK_LINE(45)
		Float tmp8 = mem;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(45)
		Float tmp9 = this->memPeak;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(45)
		bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(45)
		if ((tmp10)){
			HX_STACK_LINE(45)
			this->memPeak = mem;
		}
		HX_STACK_LINE(47)
		bool tmp11 = this->get_visible();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(47)
		if ((tmp11)){
			HX_STACK_LINE(49)
			int tmp12 = this->times->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(49)
			::String tmp13 = (HX_HCSTRING("FPS: ","\xaf","\xda","\x2c","\x83") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(49)
			::String tmp14 = (tmp13 + HX_HCSTRING("\nMEM: ","\x91","\x9f","\x42","\x83"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(49)
			Float tmp15 = mem;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(49)
			::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(49)
			::String tmp17 = (tmp16 + HX_HCSTRING(" MB\nMEM peak: ","\x85","\x3c","\xcd","\x94"));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(49)
			Float tmp18 = this->memPeak;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(49)
			::String tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(49)
			::String tmp20 = (tmp19 + HX_HCSTRING(" MB","\x75","\x8b","\x18","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(49)
			this->set_text(tmp20);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FPS_Mem_obj,onEnter,(void))


FPS_Mem_obj::FPS_Mem_obj()
{
}

void FPS_Mem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FPS_Mem);
	HX_MARK_MEMBER_NAME(times,"times");
	HX_MARK_MEMBER_NAME(memPeak,"memPeak");
	::openfl::text::TextField_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FPS_Mem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(times,"times");
	HX_VISIT_MEMBER_NAME(memPeak,"memPeak");
	::openfl::text::TextField_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FPS_Mem_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"times") ) { return times; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"memPeak") ) { return memPeak; }
		if (HX_FIELD_EQ(inName,"onEnter") ) { return onEnter_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FPS_Mem_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"times") ) { times=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"memPeak") ) { memPeak=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FPS_Mem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("times","\xc6","\xbf","\x35","\x10"));
	outFields->push(HX_HCSTRING("memPeak","\xd4","\x46","\x8a","\x0e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FPS_Mem_obj,times),HX_HCSTRING("times","\xc6","\xbf","\x35","\x10")},
	{hx::fsFloat,(int)offsetof(FPS_Mem_obj,memPeak),HX_HCSTRING("memPeak","\xd4","\x46","\x8a","\x0e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("times","\xc6","\xbf","\x35","\x10"),
	HX_HCSTRING("memPeak","\xd4","\x46","\x8a","\x0e"),
	HX_HCSTRING("onEnter","\x79","\x0b","\xc4","\x06"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FPS_Mem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FPS_Mem_obj::__mClass,"__mClass");
};

#endif

hx::Class FPS_Mem_obj::__mClass;

void FPS_Mem_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("FPS_Mem","\x3f","\x87","\xb3","\x64");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FPS_Mem_obj >;
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

