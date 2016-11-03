#ifndef INCLUDED_lime_project_NDLL
#define INCLUDED_lime_project_NDLL

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,project,Haxelib)
HX_DECLARE_CLASS2(lime,project,NDLL)
HX_DECLARE_CLASS2(lime,project,NDLLType)
namespace lime{
namespace project{


class HXCPP_CLASS_ATTRIBUTES  NDLL_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NDLL_obj OBJ_;
		NDLL_obj();
		Void __construct(::String name,::lime::project::Haxelib haxelib,::lime::project::NDLLType type,hx::Null< bool >  __o_registerStatics);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.project.NDLL")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NDLL_obj > __new(::String name,::lime::project::Haxelib haxelib,::lime::project::NDLLType type,hx::Null< bool >  __o_registerStatics);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NDLL_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("NDLL","\x36","\x80","\xc2","\x33"); }

		::String extensionPath;
		::lime::project::Haxelib haxelib;
		::String name;
		::String path;
		bool registerStatics;
		::String subdirectory;
		::lime::project::NDLLType type;
		virtual ::lime::project::NDLL clone( );
		Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace project

#endif /* INCLUDED_lime_project_NDLL */ 
