#include <hxcpp.h>

#ifndef INCLUDED_lime_project_Haxelib
#include <lime/project/Haxelib.h>
#endif
#ifndef INCLUDED_lime_project_NDLL
#include <lime/project/NDLL.h>
#endif
#ifndef INCLUDED_lime_project_NDLLType
#include <lime/project/NDLLType.h>
#endif
namespace lime{
namespace project{

Void NDLL_obj::__construct(::String name,::lime::project::Haxelib haxelib,::lime::project::NDLLType type,hx::Null< bool >  __o_registerStatics)
{
HX_STACK_FRAME("lime.project.NDLL","new",0x3869f9d6,"lime.project.NDLL.new","lime/project/NDLL.hx",19,0xc73d2d98)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(haxelib,"haxelib")
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_registerStatics,"registerStatics")
bool registerStatics = __o_registerStatics.Default(true);
{
	HX_STACK_LINE(21)
	this->name = name;
	HX_STACK_LINE(22)
	this->haxelib = haxelib;
	HX_STACK_LINE(23)
	bool tmp = (type == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::lime::project::NDLLType tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	if ((tmp)){
		HX_STACK_LINE(23)
		tmp1 = ::lime::project::NDLLType_obj::AUTO;
	}
	else{
		HX_STACK_LINE(23)
		tmp1 = type;
	}
	HX_STACK_LINE(23)
	this->type = tmp1;
	HX_STACK_LINE(24)
	this->registerStatics = registerStatics;
}
;
	return null();
}

//NDLL_obj::~NDLL_obj() { }

Dynamic NDLL_obj::__CreateEmpty() { return  new NDLL_obj; }
hx::ObjectPtr< NDLL_obj > NDLL_obj::__new(::String name,::lime::project::Haxelib haxelib,::lime::project::NDLLType type,hx::Null< bool >  __o_registerStatics)
{  hx::ObjectPtr< NDLL_obj > _result_ = new NDLL_obj();
	_result_->__construct(name,haxelib,type,__o_registerStatics);
	return _result_;}

Dynamic NDLL_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NDLL_obj > _result_ = new NDLL_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::lime::project::NDLL NDLL_obj::clone( ){
	HX_STACK_FRAME("lime.project.NDLL","clone",0x516f0653,"lime.project.NDLL.clone","lime/project/NDLL.hx",29,0xc73d2d98)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	::String tmp = this->name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	::lime::project::Haxelib tmp1 = this->haxelib;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	::lime::project::NDLLType tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	bool tmp3 = this->registerStatics;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(31)
	::lime::project::NDLL tmp4 = ::lime::project::NDLL_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(31)
	::lime::project::NDLL ndll = tmp4;		HX_STACK_VAR(ndll,"ndll");
	HX_STACK_LINE(32)
	::String tmp5 = this->path;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(32)
	ndll->path = tmp5;
	HX_STACK_LINE(33)
	::String tmp6 = this->extensionPath;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(33)
	ndll->extensionPath = tmp6;
	HX_STACK_LINE(34)
	::String tmp7 = this->subdirectory;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(34)
	ndll->subdirectory = tmp7;
	HX_STACK_LINE(35)
	::lime::project::NDLL tmp8 = ndll;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(35)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(NDLL_obj,clone,return )


NDLL_obj::NDLL_obj()
{
}

void NDLL_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NDLL);
	HX_MARK_MEMBER_NAME(extensionPath,"extensionPath");
	HX_MARK_MEMBER_NAME(haxelib,"haxelib");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(registerStatics,"registerStatics");
	HX_MARK_MEMBER_NAME(subdirectory,"subdirectory");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void NDLL_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(extensionPath,"extensionPath");
	HX_VISIT_MEMBER_NAME(haxelib,"haxelib");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(registerStatics,"registerStatics");
	HX_VISIT_MEMBER_NAME(subdirectory,"subdirectory");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic NDLL_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"path") ) { return path; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"haxelib") ) { return haxelib; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"subdirectory") ) { return subdirectory; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"extensionPath") ) { return extensionPath; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"registerStatics") ) { return registerStatics; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NDLL_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::lime::project::NDLLType >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"haxelib") ) { haxelib=inValue.Cast< ::lime::project::Haxelib >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"subdirectory") ) { subdirectory=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"extensionPath") ) { extensionPath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"registerStatics") ) { registerStatics=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NDLL_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("extensionPath","\xc4","\xd0","\x64","\xe9"));
	outFields->push(HX_HCSTRING("haxelib","\xdf","\xb6","\x80","\x08"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));
	outFields->push(HX_HCSTRING("registerStatics","\xe2","\x9f","\x79","\xe9"));
	outFields->push(HX_HCSTRING("subdirectory","\xed","\x18","\x6c","\x1b"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(NDLL_obj,extensionPath),HX_HCSTRING("extensionPath","\xc4","\xd0","\x64","\xe9")},
	{hx::fsObject /*::lime::project::Haxelib*/ ,(int)offsetof(NDLL_obj,haxelib),HX_HCSTRING("haxelib","\xdf","\xb6","\x80","\x08")},
	{hx::fsString,(int)offsetof(NDLL_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsString,(int)offsetof(NDLL_obj,path),HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a")},
	{hx::fsBool,(int)offsetof(NDLL_obj,registerStatics),HX_HCSTRING("registerStatics","\xe2","\x9f","\x79","\xe9")},
	{hx::fsString,(int)offsetof(NDLL_obj,subdirectory),HX_HCSTRING("subdirectory","\xed","\x18","\x6c","\x1b")},
	{hx::fsObject /*::lime::project::NDLLType*/ ,(int)offsetof(NDLL_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("extensionPath","\xc4","\xd0","\x64","\xe9"),
	HX_HCSTRING("haxelib","\xdf","\xb6","\x80","\x08"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"),
	HX_HCSTRING("registerStatics","\xe2","\x9f","\x79","\xe9"),
	HX_HCSTRING("subdirectory","\xed","\x18","\x6c","\x1b"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NDLL_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NDLL_obj::__mClass,"__mClass");
};

#endif

hx::Class NDLL_obj::__mClass;

void NDLL_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.project.NDLL","\xe4","\x16","\x0f","\x4e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NDLL_obj >;
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
