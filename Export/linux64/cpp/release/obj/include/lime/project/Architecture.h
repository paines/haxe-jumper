#ifndef INCLUDED_lime_project_Architecture
#define INCLUDED_lime_project_Architecture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,project,Architecture)
namespace lime{
namespace project{


class Architecture_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Architecture_obj OBJ_;

	public:
		Architecture_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("lime.project.Architecture","\xa1","\xf9","\x94","\x3a"); }
		::String __ToString() const { return HX_HCSTRING("Architecture.","\xdb","\x4f","\xb7","\x76") + tag; }

		static ::lime::project::Architecture ARM64;
		static inline ::lime::project::Architecture ARM64_dyn() { return ARM64; }
		static ::lime::project::Architecture ARMV5;
		static inline ::lime::project::Architecture ARMV5_dyn() { return ARMV5; }
		static ::lime::project::Architecture ARMV6;
		static inline ::lime::project::Architecture ARMV6_dyn() { return ARMV6; }
		static ::lime::project::Architecture ARMV7;
		static inline ::lime::project::Architecture ARMV7_dyn() { return ARMV7; }
		static ::lime::project::Architecture ARMV7S;
		static inline ::lime::project::Architecture ARMV7S_dyn() { return ARMV7S; }
		static ::lime::project::Architecture MIPS;
		static inline ::lime::project::Architecture MIPS_dyn() { return MIPS; }
		static ::lime::project::Architecture MIPSEL;
		static inline ::lime::project::Architecture MIPSEL_dyn() { return MIPSEL; }
		static ::lime::project::Architecture X64;
		static inline ::lime::project::Architecture X64_dyn() { return X64; }
		static ::lime::project::Architecture X86;
		static inline ::lime::project::Architecture X86_dyn() { return X86; }
};

} // end namespace lime
} // end namespace project

#endif /* INCLUDED_lime_project_Architecture */ 
