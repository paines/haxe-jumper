#include <hxcpp.h>

#ifndef INCLUDED_lime_project_Haxelib
#include <lime/project/Haxelib.h>
#endif
namespace lime{
namespace project{

Void Haxelib_obj::__construct(::String name,::String __o_version)
{
HX_STACK_FRAME("lime.project.Haxelib","new",0x15b90643,"lime.project.Haxelib.new","lime/project/Haxelib.hx",11,0x56f3320f)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(__o_version,"version")
::String version = __o_version.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(13)
	this->name = name;
	HX_STACK_LINE(14)
	this->version = version;
}
;
	return null();
}

//Haxelib_obj::~Haxelib_obj() { }

Dynamic Haxelib_obj::__CreateEmpty() { return  new Haxelib_obj; }
hx::ObjectPtr< Haxelib_obj > Haxelib_obj::__new(::String name,::String __o_version)
{  hx::ObjectPtr< Haxelib_obj > _result_ = new Haxelib_obj();
	_result_->__construct(name,__o_version);
	return _result_;}

Dynamic Haxelib_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Haxelib_obj > _result_ = new Haxelib_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::lime::project::Haxelib Haxelib_obj::clone( ){
	HX_STACK_FRAME("lime.project.Haxelib","clone",0x69ebc800,"lime.project.Haxelib.clone","lime/project/Haxelib.hx",19,0x56f3320f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(21)
	::String tmp = this->name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	::String tmp1 = this->version;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	::lime::project::Haxelib tmp2 = ::lime::project::Haxelib_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(21)
	::lime::project::Haxelib haxelib = tmp2;		HX_STACK_VAR(haxelib,"haxelib");
	HX_STACK_LINE(22)
	::lime::project::Haxelib tmp3 = haxelib;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(22)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Haxelib_obj,clone,return )


Haxelib_obj::Haxelib_obj()
{
}

void Haxelib_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Haxelib);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_END_CLASS();
}

void Haxelib_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(version,"version");
}

Dynamic Haxelib_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return version; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Haxelib_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Haxelib_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Haxelib_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsString,(int)offsetof(Haxelib_obj,version),HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Haxelib_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Haxelib_obj::__mClass,"__mClass");
};

#endif

hx::Class Haxelib_obj::__mClass;

void Haxelib_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.project.Haxelib","\xd1","\x28","\x0a","\xcc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Haxelib_obj >;
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

} // end namespace lime
} // end namespace project
