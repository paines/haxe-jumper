#ifndef INCLUDED_openfl_display_ShaderParameter_Int
#define INCLUDED_openfl_display_ShaderParameter_Int

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Int)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  ShaderParameter_Int_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ShaderParameter_Int_obj OBJ_;
		ShaderParameter_Int_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.ShaderParameter_Int")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ShaderParameter_Int_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ShaderParameter_Int_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ShaderParameter_Int","\x74","\x7d","\x98","\x74"); }

		int index;
		::String name;
		Dynamic type;
		Array< int > value;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_ShaderParameter_Int */ 
