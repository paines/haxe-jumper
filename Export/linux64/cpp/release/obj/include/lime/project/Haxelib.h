#ifndef INCLUDED_lime_project_Haxelib
#define INCLUDED_lime_project_Haxelib

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,project,Haxelib)
namespace lime{
namespace project{


class HXCPP_CLASS_ATTRIBUTES  Haxelib_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Haxelib_obj OBJ_;
		Haxelib_obj();
		Void __construct(::String name,::String __o_version);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.project.Haxelib")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Haxelib_obj > __new(::String name,::String __o_version);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Haxelib_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Haxelib","\xbf","\xde","\xd1","\xd5"); }

		::String name;
		::String version;
		virtual ::lime::project::Haxelib clone( );
		Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace project

#endif /* INCLUDED_lime_project_Haxelib */ 
