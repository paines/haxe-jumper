#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_ShaderParameter_Bool
#include <openfl/display/ShaderParameter_Bool.h>
#endif
namespace openfl{
namespace display{

Void ShaderParameter_Bool_obj::__construct()
{
HX_STACK_FRAME("openfl.display.ShaderParameter_Bool","new",0xb2db75c1,"openfl.display.ShaderParameter_Bool.new","openfl/display/ShaderParameter.hx",18,0xc89f13e6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	this->index = (int)0;
}
;
	return null();
}

//ShaderParameter_Bool_obj::~ShaderParameter_Bool_obj() { }

Dynamic ShaderParameter_Bool_obj::__CreateEmpty() { return  new ShaderParameter_Bool_obj; }
hx::ObjectPtr< ShaderParameter_Bool_obj > ShaderParameter_Bool_obj::__new()
{  hx::ObjectPtr< ShaderParameter_Bool_obj > _result_ = new ShaderParameter_Bool_obj();
	_result_->__construct();
	return _result_;}

Dynamic ShaderParameter_Bool_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShaderParameter_Bool_obj > _result_ = new ShaderParameter_Bool_obj();
	_result_->__construct();
	return _result_;}


ShaderParameter_Bool_obj::ShaderParameter_Bool_obj()
{
}

void ShaderParameter_Bool_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderParameter_Bool);
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_END_CLASS();
}

void ShaderParameter_Bool_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(value,"value");
}

Dynamic ShaderParameter_Bool_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShaderParameter_Bool_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Array< bool > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderParameter_Bool_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ShaderParameter_Bool_obj,index),HX_HCSTRING("index","\x12","\x9b","\x14","\xbe")},
	{hx::fsString,(int)offsetof(ShaderParameter_Bool_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ShaderParameter_Bool_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(ShaderParameter_Bool_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderParameter_Bool_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderParameter_Bool_obj::__mClass,"__mClass");
};

#endif

hx::Class ShaderParameter_Bool_obj::__mClass;

void ShaderParameter_Bool_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.ShaderParameter_Bool","\x4f","\x81","\x23","\x99");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ShaderParameter_Bool_obj >;
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
