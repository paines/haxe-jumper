#include <hxcpp.h>

#ifndef INCLUDED_lime_project_NDLLType
#include <lime/project/NDLLType.h>
#endif
namespace lime{
namespace project{

::lime::project::NDLLType NDLLType_obj::AUTO;

::lime::project::NDLLType NDLLType_obj::DYNAMIC;

::lime::project::NDLLType NDLLType_obj::STATIC;

HX_DEFINE_CREATE_ENUM(NDLLType_obj)

int NDLLType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("AUTO","\x6f","\xa7","\x37","\x2b")) return 0;
	if (inName==HX_HCSTRING("DYNAMIC","\x5f","\x73","\xe9","\xb5")) return 1;
	if (inName==HX_HCSTRING("STATIC","\xae","\x88","\x7e","\xb8")) return 2;
	return super::__FindIndex(inName);
}

int NDLLType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("AUTO","\x6f","\xa7","\x37","\x2b")) return 0;
	if (inName==HX_HCSTRING("DYNAMIC","\x5f","\x73","\xe9","\xb5")) return 0;
	if (inName==HX_HCSTRING("STATIC","\xae","\x88","\x7e","\xb8")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic NDLLType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("AUTO","\x6f","\xa7","\x37","\x2b")) return AUTO;
	if (inName==HX_HCSTRING("DYNAMIC","\x5f","\x73","\xe9","\xb5")) return DYNAMIC;
	if (inName==HX_HCSTRING("STATIC","\xae","\x88","\x7e","\xb8")) return STATIC;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("AUTO","\x6f","\xa7","\x37","\x2b"),
	HX_HCSTRING("DYNAMIC","\x5f","\x73","\xe9","\xb5"),
	HX_HCSTRING("STATIC","\xae","\x88","\x7e","\xb8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NDLLType_obj::AUTO,"AUTO");
	HX_MARK_MEMBER_NAME(NDLLType_obj::DYNAMIC,"DYNAMIC");
	HX_MARK_MEMBER_NAME(NDLLType_obj::STATIC,"STATIC");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NDLLType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NDLLType_obj::AUTO,"AUTO");
	HX_VISIT_MEMBER_NAME(NDLLType_obj::DYNAMIC,"DYNAMIC");
	HX_VISIT_MEMBER_NAME(NDLLType_obj::STATIC,"STATIC");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class NDLLType_obj::__mClass;

Dynamic __Create_NDLLType_obj() { return new NDLLType_obj; }

void NDLLType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("lime.project.NDLLType","\xbe","\x77","\x90","\x51"), hx::TCanCast< NDLLType_obj >,sStaticFields,sMemberFields,
	&__Create_NDLLType_obj, &__Create,
	&super::__SGetClass(), &CreateNDLLType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void NDLLType_obj::__boot()
{
hx::Static(AUTO) = hx::CreateEnum< NDLLType_obj >(HX_HCSTRING("AUTO","\x6f","\xa7","\x37","\x2b"),0);
hx::Static(DYNAMIC) = hx::CreateEnum< NDLLType_obj >(HX_HCSTRING("DYNAMIC","\x5f","\x73","\xe9","\xb5"),1);
hx::Static(STATIC) = hx::CreateEnum< NDLLType_obj >(HX_HCSTRING("STATIC","\xae","\x88","\x7e","\xb8"),2);
}


} // end namespace lime
} // end namespace project
