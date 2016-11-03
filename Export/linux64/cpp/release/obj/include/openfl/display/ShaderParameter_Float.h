#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#define INCLUDED_openfl_display_ShaderParameter_Float

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Float)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  ShaderParameter_Float_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ShaderParameter_Float_obj OBJ_;
		ShaderParameter_Float_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.ShaderParameter_Float")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ShaderParameter_Float_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ShaderParameter_Float_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ShaderParameter_Float","\x61","\x21","\x40","\x6e"); }

		int index;
		::String name;
		Dynamic type;
		Array< Float > value;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_ShaderParameter_Float */ 
