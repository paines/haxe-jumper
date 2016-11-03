#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
namespace openfl{
namespace display{

Void ShaderInput_openfl_display_BitmapData_obj::__construct()
{
HX_STACK_FRAME("openfl.display.ShaderInput_openfl_display_BitmapData","new",0x3cac89f3,"openfl.display.ShaderInput_openfl_display_BitmapData.new","openfl/display/ShaderInput.hx",19,0xcc724ba5)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(21)
	this->channels = (int)0;
	HX_STACK_LINE(22)
	this->height = (int)0;
	HX_STACK_LINE(23)
	this->index = (int)0;
	HX_STACK_LINE(24)
	this->width = (int)0;
}
;
	return null();
}

//ShaderInput_openfl_display_BitmapData_obj::~ShaderInput_openfl_display_BitmapData_obj() { }

Dynamic ShaderInput_openfl_display_BitmapData_obj::__CreateEmpty() { return  new ShaderInput_openfl_display_BitmapData_obj; }
hx::ObjectPtr< ShaderInput_openfl_display_BitmapData_obj > ShaderInput_openfl_display_BitmapData_obj::__new()
{  hx::ObjectPtr< ShaderInput_openfl_display_BitmapData_obj > _result_ = new ShaderInput_openfl_display_BitmapData_obj();
	_result_->__construct();
	return _result_;}

Dynamic ShaderInput_openfl_display_BitmapData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShaderInput_openfl_display_BitmapData_obj > _result_ = new ShaderInput_openfl_display_BitmapData_obj();
	_result_->__construct();
	return _result_;}


ShaderInput_openfl_display_BitmapData_obj::ShaderInput_openfl_display_BitmapData_obj()
{
}

void ShaderInput_openfl_display_BitmapData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderInput_openfl_display_BitmapData);
	HX_MARK_MEMBER_NAME(channels,"channels");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_END_CLASS();
}

void ShaderInput_openfl_display_BitmapData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(channels,"channels");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	HX_VISIT_MEMBER_NAME(width,"width");
}

Dynamic ShaderInput_openfl_display_BitmapData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		if (HX_FIELD_EQ(inName,"input") ) { return input; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { return channels; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return smoothing; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShaderInput_openfl_display_BitmapData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { channels=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { smoothing=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderInput_openfl_display_BitmapData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"));
	outFields->push(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ShaderInput_openfl_display_BitmapData_obj,channels),HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a")},
	{hx::fsInt,(int)offsetof(ShaderInput_openfl_display_BitmapData_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(ShaderInput_openfl_display_BitmapData_obj,index),HX_HCSTRING("index","\x12","\x9b","\x14","\xbe")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(ShaderInput_openfl_display_BitmapData_obj,input),HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsString,(int)offsetof(ShaderInput_openfl_display_BitmapData_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsBool,(int)offsetof(ShaderInput_openfl_display_BitmapData_obj,smoothing),HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95")},
	{hx::fsInt,(int)offsetof(ShaderInput_openfl_display_BitmapData_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"),
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderInput_openfl_display_BitmapData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderInput_openfl_display_BitmapData_obj::__mClass,"__mClass");
};

#endif

hx::Class ShaderInput_openfl_display_BitmapData_obj::__mClass;

void ShaderInput_openfl_display_BitmapData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.ShaderInput_openfl_display_BitmapData","\x81","\x14","\xa6","\x88");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ShaderInput_openfl_display_BitmapData_obj >;
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
