#include <hxcpp.h>

#ifndef INCLUDED_lime_project_Architecture
#include <lime/project/Architecture.h>
#endif
namespace lime{
namespace project{

::lime::project::Architecture Architecture_obj::ARM64;

::lime::project::Architecture Architecture_obj::ARMV5;

::lime::project::Architecture Architecture_obj::ARMV6;

::lime::project::Architecture Architecture_obj::ARMV7;

::lime::project::Architecture Architecture_obj::ARMV7S;

::lime::project::Architecture Architecture_obj::MIPS;

::lime::project::Architecture Architecture_obj::MIPSEL;

::lime::project::Architecture Architecture_obj::X64;

::lime::project::Architecture Architecture_obj::X86;

HX_DEFINE_CREATE_ENUM(Architecture_obj)

int Architecture_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("ARM64","\x7a","\xd0","\x79","\xa3")) return 4;
	if (inName==HX_HCSTRING("ARMV5","\x5b","\xec","\x79","\xa3")) return 0;
	if (inName==HX_HCSTRING("ARMV6","\x5c","\xec","\x79","\xa3")) return 1;
	if (inName==HX_HCSTRING("ARMV7","\x5d","\xec","\x79","\xa3")) return 2;
	if (inName==HX_HCSTRING("ARMV7S","\x56","\xe5","\x34","\x67")) return 3;
	if (inName==HX_HCSTRING("MIPS","\x5f","\x18","\x1d","\x33")) return 7;
	if (inName==HX_HCSTRING("MIPSEL","\x86","\x6a","\xdb","\x06")) return 8;
	if (inName==HX_HCSTRING("X64","\x96","\xf5","\x42","\x00")) return 6;
	if (inName==HX_HCSTRING("X86","\x56","\xf7","\x42","\x00")) return 5;
	return super::__FindIndex(inName);
}

int Architecture_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("ARM64","\x7a","\xd0","\x79","\xa3")) return 0;
	if (inName==HX_HCSTRING("ARMV5","\x5b","\xec","\x79","\xa3")) return 0;
	if (inName==HX_HCSTRING("ARMV6","\x5c","\xec","\x79","\xa3")) return 0;
	if (inName==HX_HCSTRING("ARMV7","\x5d","\xec","\x79","\xa3")) return 0;
	if (inName==HX_HCSTRING("ARMV7S","\x56","\xe5","\x34","\x67")) return 0;
	if (inName==HX_HCSTRING("MIPS","\x5f","\x18","\x1d","\x33")) return 0;
	if (inName==HX_HCSTRING("MIPSEL","\x86","\x6a","\xdb","\x06")) return 0;
	if (inName==HX_HCSTRING("X64","\x96","\xf5","\x42","\x00")) return 0;
	if (inName==HX_HCSTRING("X86","\x56","\xf7","\x42","\x00")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Architecture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("ARM64","\x7a","\xd0","\x79","\xa3")) return ARM64;
	if (inName==HX_HCSTRING("ARMV5","\x5b","\xec","\x79","\xa3")) return ARMV5;
	if (inName==HX_HCSTRING("ARMV6","\x5c","\xec","\x79","\xa3")) return ARMV6;
	if (inName==HX_HCSTRING("ARMV7","\x5d","\xec","\x79","\xa3")) return ARMV7;
	if (inName==HX_HCSTRING("ARMV7S","\x56","\xe5","\x34","\x67")) return ARMV7S;
	if (inName==HX_HCSTRING("MIPS","\x5f","\x18","\x1d","\x33")) return MIPS;
	if (inName==HX_HCSTRING("MIPSEL","\x86","\x6a","\xdb","\x06")) return MIPSEL;
	if (inName==HX_HCSTRING("X64","\x96","\xf5","\x42","\x00")) return X64;
	if (inName==HX_HCSTRING("X86","\x56","\xf7","\x42","\x00")) return X86;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("ARMV5","\x5b","\xec","\x79","\xa3"),
	HX_HCSTRING("ARMV6","\x5c","\xec","\x79","\xa3"),
	HX_HCSTRING("ARMV7","\x5d","\xec","\x79","\xa3"),
	HX_HCSTRING("ARMV7S","\x56","\xe5","\x34","\x67"),
	HX_HCSTRING("ARM64","\x7a","\xd0","\x79","\xa3"),
	HX_HCSTRING("X86","\x56","\xf7","\x42","\x00"),
	HX_HCSTRING("X64","\x96","\xf5","\x42","\x00"),
	HX_HCSTRING("MIPS","\x5f","\x18","\x1d","\x33"),
	HX_HCSTRING("MIPSEL","\x86","\x6a","\xdb","\x06"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Architecture_obj::ARM64,"ARM64");
	HX_MARK_MEMBER_NAME(Architecture_obj::ARMV5,"ARMV5");
	HX_MARK_MEMBER_NAME(Architecture_obj::ARMV6,"ARMV6");
	HX_MARK_MEMBER_NAME(Architecture_obj::ARMV7,"ARMV7");
	HX_MARK_MEMBER_NAME(Architecture_obj::ARMV7S,"ARMV7S");
	HX_MARK_MEMBER_NAME(Architecture_obj::MIPS,"MIPS");
	HX_MARK_MEMBER_NAME(Architecture_obj::MIPSEL,"MIPSEL");
	HX_MARK_MEMBER_NAME(Architecture_obj::X64,"X64");
	HX_MARK_MEMBER_NAME(Architecture_obj::X86,"X86");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Architecture_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Architecture_obj::ARM64,"ARM64");
	HX_VISIT_MEMBER_NAME(Architecture_obj::ARMV5,"ARMV5");
	HX_VISIT_MEMBER_NAME(Architecture_obj::ARMV6,"ARMV6");
	HX_VISIT_MEMBER_NAME(Architecture_obj::ARMV7,"ARMV7");
	HX_VISIT_MEMBER_NAME(Architecture_obj::ARMV7S,"ARMV7S");
	HX_VISIT_MEMBER_NAME(Architecture_obj::MIPS,"MIPS");
	HX_VISIT_MEMBER_NAME(Architecture_obj::MIPSEL,"MIPSEL");
	HX_VISIT_MEMBER_NAME(Architecture_obj::X64,"X64");
	HX_VISIT_MEMBER_NAME(Architecture_obj::X86,"X86");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Architecture_obj::__mClass;

Dynamic __Create_Architecture_obj() { return new Architecture_obj; }

void Architecture_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("lime.project.Architecture","\xa1","\xf9","\x94","\x3a"), hx::TCanCast< Architecture_obj >,sStaticFields,sMemberFields,
	&__Create_Architecture_obj, &__Create,
	&super::__SGetClass(), &CreateArchitecture_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Architecture_obj::__boot()
{
hx::Static(ARM64) = hx::CreateEnum< Architecture_obj >(HX_HCSTRING("ARM64","\x7a","\xd0","\x79","\xa3"),4);
hx::Static(ARMV5) = hx::CreateEnum< Architecture_obj >(HX_HCSTRING("ARMV5","\x5b","\xec","\x79","\xa3"),0);
hx::Static(ARMV6) = hx::CreateEnum< Architecture_obj >(HX_HCSTRING("ARMV6","\x5c","\xec","\x79","\xa3"),1);
hx::Static(ARMV7) = hx::CreateEnum< Architecture_obj >(HX_HCSTRING("ARMV7","\x5d","\xec","\x79","\xa3"),2);
hx::Static(ARMV7S) = hx::CreateEnum< Architecture_obj >(HX_HCSTRING("ARMV7S","\x56","\xe5","\x34","\x67"),3);
hx::Static(MIPS) = hx::CreateEnum< Architecture_obj >(HX_HCSTRING("MIPS","\x5f","\x18","\x1d","\x33"),7);
hx::Static(MIPSEL) = hx::CreateEnum< Architecture_obj >(HX_HCSTRING("MIPSEL","\x86","\x6a","\xdb","\x06"),8);
hx::Static(X64) = hx::CreateEnum< Architecture_obj >(HX_HCSTRING("X64","\x96","\xf5","\x42","\x00"),6);
hx::Static(X86) = hx::CreateEnum< Architecture_obj >(HX_HCSTRING("X86","\x56","\xf7","\x42","\x00"),5);
}


} // end namespace lime
} // end namespace project
