#ifndef INCLUDED_lime_tools_helpers_PlatformHelper
#define INCLUDED_lime_tools_helpers_PlatformHelper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,project,Architecture)
HX_DECLARE_CLASS3(lime,tools,helpers,PlatformHelper)
namespace lime{
namespace tools{
namespace helpers{


class HXCPP_CLASS_ATTRIBUTES  PlatformHelper_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PlatformHelper_obj OBJ_;
		PlatformHelper_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.tools.helpers.PlatformHelper")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PlatformHelper_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlatformHelper_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("PlatformHelper","\xa1","\xc0","\x05","\x0c"); }

		static ::lime::project::Architecture hostArchitecture;
		static ::String hostPlatform;
		static ::lime::project::Architecture _hostArchitecture;
		static ::String _hostPlatform;
		static ::lime::project::Architecture get_hostArchitecture( );
		static Dynamic get_hostArchitecture_dyn();

		static ::String get_hostPlatform( );
		static Dynamic get_hostPlatform_dyn();

};

} // end namespace lime
} // end namespace tools
} // end namespace helpers

#endif /* INCLUDED_lime_tools_helpers_PlatformHelper */ 
