#ifndef INCLUDED_openfl_display_ShaderParameter_Bool
#define INCLUDED_openfl_display_ShaderParameter_Bool

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Bool)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  ShaderParameter_Bool_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ShaderParameter_Bool_obj OBJ_;
		ShaderParameter_Bool_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.ShaderParameter_Bool")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ShaderParameter_Bool_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ShaderParameter_Bool_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ShaderParameter_Bool","\x05","\x88","\x35","\x8c"); }

		int index;
		::String name;
		Dynamic type;
		Array< bool > value;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_ShaderParameter_Bool */ 
