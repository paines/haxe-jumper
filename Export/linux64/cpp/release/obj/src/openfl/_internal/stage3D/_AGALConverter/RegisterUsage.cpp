#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_RegisterUsage
#include <openfl/_internal/stage3D/_AGALConverter/RegisterUsage.h>
#endif
namespace openfl{
namespace _internal{
namespace stage3D{
namespace _AGALConverter{

::openfl::_internal::stage3D::_AGALConverter::RegisterUsage RegisterUsage_obj::MATRIX_4_4;

::openfl::_internal::stage3D::_AGALConverter::RegisterUsage RegisterUsage_obj::SAMPLER_2D;

::openfl::_internal::stage3D::_AGALConverter::RegisterUsage RegisterUsage_obj::SAMPLER_2D_ALPHA;

::openfl::_internal::stage3D::_AGALConverter::RegisterUsage RegisterUsage_obj::SAMPLER_CUBE;

::openfl::_internal::stage3D::_AGALConverter::RegisterUsage RegisterUsage_obj::UNUSED;

::openfl::_internal::stage3D::_AGALConverter::RegisterUsage RegisterUsage_obj::VECTOR_4;

::openfl::_internal::stage3D::_AGALConverter::RegisterUsage RegisterUsage_obj::VECTOR_4_ARRAY;

HX_DEFINE_CREATE_ENUM(RegisterUsage_obj)

int RegisterUsage_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("MATRIX_4_4","\xeb","\xa3","\x62","\x96")) return 2;
	if (inName==HX_HCSTRING("SAMPLER_2D","\x09","\x2a","\x93","\x6e")) return 3;
	if (inName==HX_HCSTRING("SAMPLER_2D_ALPHA","\x48","\xfd","\xfb","\xb5")) return 4;
	if (inName==HX_HCSTRING("SAMPLER_CUBE","\xec","\x3e","\x82","\xa4")) return 5;
	if (inName==HX_HCSTRING("UNUSED","\x16","\x45","\x05","\x1e")) return 0;
	if (inName==HX_HCSTRING("VECTOR_4","\x78","\xa6","\x43","\xc8")) return 1;
	if (inName==HX_HCSTRING("VECTOR_4_ARRAY","\x32","\xbd","\xf8","\xe4")) return 6;
	return super::__FindIndex(inName);
}

int RegisterUsage_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("MATRIX_4_4","\xeb","\xa3","\x62","\x96")) return 0;
	if (inName==HX_HCSTRING("SAMPLER_2D","\x09","\x2a","\x93","\x6e")) return 0;
	if (inName==HX_HCSTRING("SAMPLER_2D_ALPHA","\x48","\xfd","\xfb","\xb5")) return 0;
	if (inName==HX_HCSTRING("SAMPLER_CUBE","\xec","\x3e","\x82","\xa4")) return 0;
	if (inName==HX_HCSTRING("UNUSED","\x16","\x45","\x05","\x1e")) return 0;
	if (inName==HX_HCSTRING("VECTOR_4","\x78","\xa6","\x43","\xc8")) return 0;
	if (inName==HX_HCSTRING("VECTOR_4_ARRAY","\x32","\xbd","\xf8","\xe4")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic RegisterUsage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("MATRIX_4_4","\xeb","\xa3","\x62","\x96")) return MATRIX_4_4;
	if (inName==HX_HCSTRING("SAMPLER_2D","\x09","\x2a","\x93","\x6e")) return SAMPLER_2D;
	if (inName==HX_HCSTRING("SAMPLER_2D_ALPHA","\x48","\xfd","\xfb","\xb5")) return SAMPLER_2D_ALPHA;
	if (inName==HX_HCSTRING("SAMPLER_CUBE","\xec","\x3e","\x82","\xa4")) return SAMPLER_CUBE;
	if (inName==HX_HCSTRING("UNUSED","\x16","\x45","\x05","\x1e")) return UNUSED;
	if (inName==HX_HCSTRING("VECTOR_4","\x78","\xa6","\x43","\xc8")) return VECTOR_4;
	if (inName==HX_HCSTRING("VECTOR_4_ARRAY","\x32","\xbd","\xf8","\xe4")) return VECTOR_4_ARRAY;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("UNUSED","\x16","\x45","\x05","\x1e"),
	HX_HCSTRING("VECTOR_4","\x78","\xa6","\x43","\xc8"),
	HX_HCSTRING("MATRIX_4_4","\xeb","\xa3","\x62","\x96"),
	HX_HCSTRING("SAMPLER_2D","\x09","\x2a","\x93","\x6e"),
	HX_HCSTRING("SAMPLER_2D_ALPHA","\x48","\xfd","\xfb","\xb5"),
	HX_HCSTRING("SAMPLER_CUBE","\xec","\x3e","\x82","\xa4"),
	HX_HCSTRING("VECTOR_4_ARRAY","\x32","\xbd","\xf8","\xe4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RegisterUsage_obj::MATRIX_4_4,"MATRIX_4_4");
	HX_MARK_MEMBER_NAME(RegisterUsage_obj::SAMPLER_2D,"SAMPLER_2D");
	HX_MARK_MEMBER_NAME(RegisterUsage_obj::SAMPLER_2D_ALPHA,"SAMPLER_2D_ALPHA");
	HX_MARK_MEMBER_NAME(RegisterUsage_obj::SAMPLER_CUBE,"SAMPLER_CUBE");
	HX_MARK_MEMBER_NAME(RegisterUsage_obj::UNUSED,"UNUSED");
	HX_MARK_MEMBER_NAME(RegisterUsage_obj::VECTOR_4,"VECTOR_4");
	HX_MARK_MEMBER_NAME(RegisterUsage_obj::VECTOR_4_ARRAY,"VECTOR_4_ARRAY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RegisterUsage_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RegisterUsage_obj::MATRIX_4_4,"MATRIX_4_4");
	HX_VISIT_MEMBER_NAME(RegisterUsage_obj::SAMPLER_2D,"SAMPLER_2D");
	HX_VISIT_MEMBER_NAME(RegisterUsage_obj::SAMPLER_2D_ALPHA,"SAMPLER_2D_ALPHA");
	HX_VISIT_MEMBER_NAME(RegisterUsage_obj::SAMPLER_CUBE,"SAMPLER_CUBE");
	HX_VISIT_MEMBER_NAME(RegisterUsage_obj::UNUSED,"UNUSED");
	HX_VISIT_MEMBER_NAME(RegisterUsage_obj::VECTOR_4,"VECTOR_4");
	HX_VISIT_MEMBER_NAME(RegisterUsage_obj::VECTOR_4_ARRAY,"VECTOR_4_ARRAY");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class RegisterUsage_obj::__mClass;

Dynamic __Create_RegisterUsage_obj() { return new RegisterUsage_obj; }

void RegisterUsage_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl._internal.stage3D._AGALConverter.RegisterUsage","\x8f","\x93","\xf5","\x03"), hx::TCanCast< RegisterUsage_obj >,sStaticFields,sMemberFields,
	&__Create_RegisterUsage_obj, &__Create,
	&super::__SGetClass(), &CreateRegisterUsage_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void RegisterUsage_obj::__boot()
{
hx::Static(MATRIX_4_4) = hx::CreateEnum< RegisterUsage_obj >(HX_HCSTRING("MATRIX_4_4","\xeb","\xa3","\x62","\x96"),2);
hx::Static(SAMPLER_2D) = hx::CreateEnum< RegisterUsage_obj >(HX_HCSTRING("SAMPLER_2D","\x09","\x2a","\x93","\x6e"),3);
hx::Static(SAMPLER_2D_ALPHA) = hx::CreateEnum< RegisterUsage_obj >(HX_HCSTRING("SAMPLER_2D_ALPHA","\x48","\xfd","\xfb","\xb5"),4);
hx::Static(SAMPLER_CUBE) = hx::CreateEnum< RegisterUsage_obj >(HX_HCSTRING("SAMPLER_CUBE","\xec","\x3e","\x82","\xa4"),5);
hx::Static(UNUSED) = hx::CreateEnum< RegisterUsage_obj >(HX_HCSTRING("UNUSED","\x16","\x45","\x05","\x1e"),0);
hx::Static(VECTOR_4) = hx::CreateEnum< RegisterUsage_obj >(HX_HCSTRING("VECTOR_4","\x78","\xa6","\x43","\xc8"),1);
hx::Static(VECTOR_4_ARRAY) = hx::CreateEnum< RegisterUsage_obj >(HX_HCSTRING("VECTOR_4_ARRAY","\x32","\xbd","\xf8","\xe4"),6);
}


} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace _AGALConverter
