#ifndef INCLUDED_lime_tools_helpers_LogHelper
#define INCLUDED_lime_tools_helpers_LogHelper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(lime,tools,helpers,LogHelper)
namespace lime{
namespace tools{
namespace helpers{


class HXCPP_CLASS_ATTRIBUTES  LogHelper_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LogHelper_obj OBJ_;
		LogHelper_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.tools.helpers.LogHelper")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LogHelper_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LogHelper_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("LogHelper","\xf2","\x60","\x90","\x60"); }

		static void __boot();
		static ::String accentColor;
		static bool enableColor;
		static bool mute;
		static ::String resetColor;
		static bool verbose;
		static ::EReg colorCodes;
		static Dynamic colorSupported;
		static ::haxe::ds::StringMap sentWarnings;
		static Void error( ::String message,::String verboseMessage,Dynamic e);
		static Dynamic error_dyn();

		static Void info( ::String message,::String verboseMessage);
		static Dynamic info_dyn();

		static Void print( ::String message);
		static Dynamic print_dyn();

		static Void println( ::String message);
		static Dynamic println_dyn();

		static ::String stripColor( ::String output);
		static Dynamic stripColor_dyn();

		static Void warn( ::String message,::String verboseMessage,hx::Null< bool >  allowRepeat);
		static Dynamic warn_dyn();

};

} // end namespace lime
} // end namespace tools
} // end namespace helpers

#endif /* INCLUDED_lime_tools_helpers_LogHelper */ 
