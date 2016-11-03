#ifndef INCLUDED_openfl_display_Shader
#define INCLUDED_openfl_display_Shader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLProgram)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,display,ShaderData)
HX_DECLARE_CLASS2(openfl,display,ShaderInput_openfl_display_BitmapData)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Bool)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Float)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Int)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Shader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Shader_obj OBJ_;
		Shader_obj();
		Void __construct(::openfl::utils::ByteArrayData code);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.Shader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Shader_obj > __new(::openfl::utils::ByteArrayData code);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Shader_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Shader","\x45","\x33","\xb5","\x51"); }

		::openfl::utils::ByteArrayData byteCode;
		::lime::graphics::opengl::GLProgram glProgram;
		Dynamic precisionHint;
		::lime::graphics::GLRenderContext gl;
		::openfl::display::ShaderData __data;
		::String __glFragmentSource;
		bool __glSourceDirty;
		::String __glVertexSource;
		::haxe::ds::StringMap __isUniform;
		Array< ::Dynamic > __inputBitmapData;
		Array< ::Dynamic > __paramBool;
		Array< ::Dynamic > __paramFloat;
		Array< ::Dynamic > __paramInt;
		::lime::utils::ArrayBufferView __uniformMatrix2;
		::lime::utils::ArrayBufferView __uniformMatrix3;
		::lime::utils::ArrayBufferView __uniformMatrix4;
		virtual Void __disable( );
		Dynamic __disable_dyn();

		virtual Void __disableGL( );
		Dynamic __disableGL_dyn();

		virtual Void __enable( );
		Dynamic __enable_dyn();

		virtual Void __enableGL( );
		Dynamic __enableGL_dyn();

		virtual Void __init( );
		Dynamic __init_dyn();

		virtual Void __initGL( );
		Dynamic __initGL_dyn();

		virtual Void __processGLData( ::String source,::String storageType);
		Dynamic __processGLData_dyn();

		virtual Void __update( );
		Dynamic __update_dyn();

		virtual Void __updateGL( );
		Dynamic __updateGL_dyn();

		virtual ::openfl::display::ShaderData get_data( );
		Dynamic get_data_dyn();

		virtual ::openfl::display::ShaderData set_data( ::openfl::display::ShaderData value);
		Dynamic set_data_dyn();

		virtual ::String get_glFragmentSource( );
		Dynamic get_glFragmentSource_dyn();

		virtual ::String set_glFragmentSource( ::String value);
		Dynamic set_glFragmentSource_dyn();

		virtual ::String get_glVertexSource( );
		Dynamic get_glVertexSource_dyn();

		virtual ::String set_glVertexSource( ::String value);
		Dynamic set_glVertexSource_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Shader */ 
