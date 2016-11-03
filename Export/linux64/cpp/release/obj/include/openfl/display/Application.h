#ifndef INCLUDED_openfl_display_Application
#define INCLUDED_openfl_display_Application

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(openfl,display,Application)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Application_obj : public ::lime::app::Application_obj{
	public:
		typedef ::lime::app::Application_obj super;
		typedef Application_obj OBJ_;
		Application_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.Application")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Application_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Application_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Application","\x30","\x43","\x71","\x0e"); }

		virtual Void create( Dynamic config);

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Application */ 
