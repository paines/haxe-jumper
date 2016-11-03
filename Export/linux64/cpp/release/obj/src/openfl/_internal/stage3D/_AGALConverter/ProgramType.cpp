#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_ProgramType
#include <openfl/_internal/stage3D/_AGALConverter/ProgramType.h>
#endif
namespace openfl{
namespace _internal{
namespace stage3D{
namespace _AGALConverter{

::openfl::_internal::stage3D::_AGALConverter::ProgramType ProgramType_obj::FRAGMENT;

::openfl::_internal::stage3D::_AGALConverter::ProgramType ProgramType_obj::VERTEX;

HX_DEFINE_CREATE_ENUM(ProgramType_obj)

int ProgramType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("FRAGMENT","\xd0","\xef","\x6a","\x07")) return 1;
	if (inName==HX_HCSTRING("VERTEX","\x64","\x87","\xca","\x53")) return 0;
	return super::__FindIndex(inName);
}

int ProgramType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("FRAGMENT","\xd0","\xef","\x6a","\x07")) return 0;
	if (inName==HX_HCSTRING("VERTEX","\x64","\x87","\xca","\x53")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic ProgramType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("FRAGMENT","\xd0","\xef","\x6a","\x07")) return FRAGMENT;
	if (inName==HX_HCSTRING("VERTEX","\x64","\x87","\xca","\x53")) return VERTEX;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("VERTEX","\x64","\x87","\xca","\x53"),
	HX_HCSTRING("FRAGMENT","\xd0","\xef","\x6a","\x07"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProgramType_obj::FRAGMENT,"FRAGMENT");
	HX_MARK_MEMBER_NAME(ProgramType_obj::VERTEX,"VERTEX");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProgramType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ProgramType_obj::FRAGMENT,"FRAGMENT");
	HX_VISIT_MEMBER_NAME(ProgramType_obj::VERTEX,"VERTEX");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class ProgramType_obj::__mClass;

Dynamic __Create_ProgramType_obj() { return new ProgramType_obj; }

void ProgramType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl._internal.stage3D._AGALConverter.ProgramType","\xef","\x28","\x77","\x1f"), hx::TCanCast< ProgramType_obj >,sStaticFields,sMemberFields,
	&__Create_ProgramType_obj, &__Create,
	&super::__SGetClass(), &CreateProgramType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ProgramType_obj::__boot()
{
hx::Static(FRAGMENT) = hx::CreateEnum< ProgramType_obj >(HX_HCSTRING("FRAGMENT","\xd0","\xef","\x6a","\x07"),1);
hx::Static(VERTEX) = hx::CreateEnum< ProgramType_obj >(HX_HCSTRING("VERTEX","\x64","\x87","\xca","\x53"),0);
}


} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace _AGALConverter
