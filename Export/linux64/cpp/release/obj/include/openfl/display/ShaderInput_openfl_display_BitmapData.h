#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#define INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,ShaderInput_openfl_display_BitmapData)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  ShaderInput_openfl_display_BitmapData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ShaderInput_openfl_display_BitmapData_obj OBJ_;
		ShaderInput_openfl_display_BitmapData_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.ShaderInput_openfl_display_BitmapData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ShaderInput_openfl_display_BitmapData_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ShaderInput_openfl_display_BitmapData_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ShaderInput_openfl_display_BitmapData","\x0b","\x21","\xf9","\x6b"); }

		int channels;
		int height;
		int index;
		::openfl::display::BitmapData input;
		::String name;
		bool smoothing;
		int width;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData */ 
