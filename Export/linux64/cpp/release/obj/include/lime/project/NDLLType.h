#ifndef INCLUDED_lime_project_NDLLType
#define INCLUDED_lime_project_NDLLType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,project,NDLLType)
namespace lime{
namespace project{


class NDLLType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef NDLLType_obj OBJ_;

	public:
		NDLLType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("lime.project.NDLLType","\xbe","\x77","\x90","\x51"); }
		::String __ToString() const { return HX_HCSTRING("NDLLType.","\x1e","\xdc","\x6b","\xe0") + tag; }

		static ::lime::project::NDLLType AUTO;
		static inline ::lime::project::NDLLType AUTO_dyn() { return AUTO; }
		static ::lime::project::NDLLType DYNAMIC;
		static inline ::lime::project::NDLLType DYNAMIC_dyn() { return DYNAMIC; }
		static ::lime::project::NDLLType STATIC;
		static inline ::lime::project::NDLLType STATIC_dyn() { return STATIC; }
};

} // end namespace lime
} // end namespace project

#endif /* INCLUDED_lime_project_NDLLType */ 
