#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLProgram
#include <lime/graphics/opengl/GLProgram.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_GLUtils
#include <lime/utils/GLUtils.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderData
#include <openfl/display/ShaderData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Bool
#include <openfl/display/ShaderParameter_Bool.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Int
#include <openfl/display/ShaderParameter_Int.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
namespace openfl{
namespace display{

Void Shader_obj::__construct(::openfl::utils::ByteArrayData code)
{
HX_STACK_FRAME("openfl.display.Shader","new",0x88fbb381,"openfl.display.Shader.new","openfl/display/Shader.hx",19,0xae8f5dcd)
HX_STACK_THIS(this)
HX_STACK_ARG(code,"code")
{
	HX_STACK_LINE(15)
	this->__data = ::openfl::display::ShaderData_obj::__new(null());
	HX_STACK_LINE(767)
	::String tmp = this->__glFragmentSource;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(767)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(767)
	if ((tmp1)){
		HX_STACK_LINE(767)
		this->__glFragmentSource = HX_HCSTRING("varying float vAlpha;\n\t\tvarying vec2 vTexCoord;\n\t\tuniform sampler2D uImage0;\n\t\t\n\t\tvoid main(void) {\n\t\t\t\n\t\t\tvec4 color = texture2D (uImage0, vTexCoord);\n\t\t\t\n\t\t\tif (color.a == 0.0) {\n\t\t\t\t\n\t\t\t\tgl_FragColor = vec4 (0.0, 0.0, 0.0, 0.0);\n\t\t\t\t\n\t\t\t} else {\n\t\t\t\t\n\t\t\t\tgl_FragColor = vec4 (color.rgb / color.a, color.a * vAlpha);\n\t\t\t\t\n\t\t\t}\n\t\t\t\n\t\t}","\x51","\xad","\xd1","\x10");
	}
	HX_STACK_LINE(766)
	::String tmp2 = this->__glVertexSource;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(766)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(766)
	if ((tmp3)){
		HX_STACK_LINE(766)
		this->__glVertexSource = HX_HCSTRING("attribute float aAlpha;\n\t\tattribute vec4 aPosition;\n\t\tattribute vec2 aTexCoord;\n\t\tvarying float vAlpha;\n\t\tvarying vec2 vTexCoord;\n\t\t\n\t\tuniform mat4 uMatrix;\n\t\t\n\t\tvoid main(void) {\n\t\t\t\n\t\t\tvAlpha = aAlpha;\n\t\t\tvTexCoord = aTexCoord;\n\t\t\tgl_Position = uMatrix * aPosition;\n\t\t\t\n\t\t}","\xa2","\x64","\x9a","\x8b");
	}
	HX_STACK_LINE(93)
	this->byteCode = code;
	HX_STACK_LINE(94)
	this->precisionHint = ((Dynamic)((int)1));
	HX_STACK_LINE(96)
	this->__glSourceDirty = true;
}
;
	return null();
}

//Shader_obj::~Shader_obj() { }

Dynamic Shader_obj::__CreateEmpty() { return  new Shader_obj; }
hx::ObjectPtr< Shader_obj > Shader_obj::__new(::openfl::utils::ByteArrayData code)
{  hx::ObjectPtr< Shader_obj > _result_ = new Shader_obj();
	_result_->__construct(code);
	return _result_;}

Dynamic Shader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Shader_obj > _result_ = new Shader_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Shader_obj::__disable( ){
{
		HX_STACK_FRAME("openfl.display.Shader","__disable",0x171f2ca9,"openfl.display.Shader.__disable","openfl/display/Shader.hx",101,0xae8f5dcd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(103)
		::lime::graphics::opengl::GLProgram tmp = this->glProgram;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(103)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(103)
		if ((tmp1)){
			HX_STACK_LINE(105)
			this->__disableGL();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,__disable,(void))

Void Shader_obj::__disableGL( ){
{
		HX_STACK_FRAME("openfl.display.Shader","__disableGL",0x7ec2a70e,"openfl.display.Shader.__disableGL","openfl/display/Shader.hx",112,0xae8f5dcd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(114)
		::openfl::display::ShaderData tmp = this->get_data();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		::openfl::display::ShaderInput_openfl_display_BitmapData tmp1 = tmp->uImage0;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(114)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(114)
		if ((tmp2)){
			HX_STACK_LINE(116)
			::openfl::display::ShaderData tmp3 = this->get_data();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(116)
			tmp3->uImage0->input = null();
		}
		HX_STACK_LINE(120)
		{
			HX_STACK_LINE(120)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(120)
			Array< ::Dynamic > _g1 = this->__paramBool;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(120)
			while((true)){
				HX_STACK_LINE(120)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(120)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(120)
				if ((tmp4)){
					HX_STACK_LINE(120)
					break;
				}
				HX_STACK_LINE(120)
				::openfl::display::ShaderParameter_Bool tmp5 = _g1->__get(_g).StaticCast< ::openfl::display::ShaderParameter_Bool >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(120)
				::openfl::display::ShaderParameter_Bool parameter = tmp5;		HX_STACK_VAR(parameter,"parameter");
				HX_STACK_LINE(120)
				++(_g);
				HX_STACK_LINE(122)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable_vertex_attrib_array.call(parameter->index);
			}
		}
		HX_STACK_LINE(126)
		{
			HX_STACK_LINE(126)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(126)
			Array< ::Dynamic > _g1 = this->__paramFloat;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(126)
			while((true)){
				HX_STACK_LINE(126)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(126)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(126)
				if ((tmp4)){
					HX_STACK_LINE(126)
					break;
				}
				HX_STACK_LINE(126)
				::openfl::display::ShaderParameter_Float tmp5 = _g1->__get(_g).StaticCast< ::openfl::display::ShaderParameter_Float >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(126)
				::openfl::display::ShaderParameter_Float parameter = tmp5;		HX_STACK_VAR(parameter,"parameter");
				HX_STACK_LINE(126)
				++(_g);
				HX_STACK_LINE(128)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable_vertex_attrib_array.call(parameter->index);
			}
		}
		HX_STACK_LINE(132)
		{
			HX_STACK_LINE(132)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(132)
			Array< ::Dynamic > _g1 = this->__paramInt;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(132)
			while((true)){
				HX_STACK_LINE(132)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(132)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(132)
				if ((tmp4)){
					HX_STACK_LINE(132)
					break;
				}
				HX_STACK_LINE(132)
				::openfl::display::ShaderParameter_Int tmp5 = _g1->__get(_g).StaticCast< ::openfl::display::ShaderParameter_Int >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(132)
				::openfl::display::ShaderParameter_Int parameter = tmp5;		HX_STACK_VAR(parameter,"parameter");
				HX_STACK_LINE(132)
				++(_g);
				HX_STACK_LINE(134)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable_vertex_attrib_array.call(parameter->index);
			}
		}
		HX_STACK_LINE(138)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(this->gl->ARRAY_BUFFER,hx::DynamicPtr(null()));
		HX_STACK_LINE(139)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(this->gl->TEXTURE_2D,hx::DynamicPtr(null()));
		HX_STACK_LINE(142)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable.call(this->gl->TEXTURE_2D);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,__disableGL,(void))

Void Shader_obj::__enable( ){
{
		HX_STACK_FRAME("openfl.display.Shader","__enable",0x8f5f3ee2,"openfl.display.Shader.__enable","openfl/display/Shader.hx",148,0xae8f5dcd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(150)
		this->__init();
		HX_STACK_LINE(152)
		::lime::graphics::opengl::GLProgram tmp = this->glProgram;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(152)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(152)
		if ((tmp1)){
			HX_STACK_LINE(154)
			this->__enableGL();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,__enable,(void))

Void Shader_obj::__enableGL( ){
{
		HX_STACK_FRAME("openfl.display.Shader","__enableGL",0x94d67987,"openfl.display.Shader.__enableGL","openfl/display/Shader.hx",161,0xae8f5dcd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(163)
		int textureCount = (int)0;		HX_STACK_VAR(textureCount,"textureCount");
		HX_STACK_LINE(165)
		{
			HX_STACK_LINE(165)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(165)
			Array< ::Dynamic > _g1 = this->__inputBitmapData;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(165)
			while((true)){
				HX_STACK_LINE(165)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(165)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(165)
				if ((tmp1)){
					HX_STACK_LINE(165)
					break;
				}
				HX_STACK_LINE(165)
				::openfl::display::ShaderInput_openfl_display_BitmapData tmp2 = _g1->__get(_g).StaticCast< ::openfl::display::ShaderInput_openfl_display_BitmapData >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(165)
				::openfl::display::ShaderInput_openfl_display_BitmapData input = tmp2;		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(165)
				++(_g);
				HX_STACK_LINE(167)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform1i.call(input->index,textureCount);
				HX_STACK_LINE(168)
				(textureCount)++;
			}
		}
		HX_STACK_LINE(173)
		bool tmp = (textureCount > (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(173)
		if ((tmp)){
			HX_STACK_LINE(175)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable.call(this->gl->TEXTURE_2D);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,__enableGL,(void))

Void Shader_obj::__init( ){
{
		HX_STACK_FRAME("openfl.display.Shader","__init",0x2faba5af,"openfl.display.Shader.__init","openfl/display/Shader.hx",183,0xae8f5dcd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(185)
		::openfl::display::ShaderData tmp = this->__data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(185)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(185)
		if ((tmp1)){
			HX_STACK_LINE(187)
			::openfl::display::ShaderData tmp2 = ::openfl::display::ShaderData_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(187)
			this->__data = tmp2;
		}
		HX_STACK_LINE(191)
		::String tmp2 = this->__glFragmentSource;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(191)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(191)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(191)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(191)
		if ((tmp4)){
			HX_STACK_LINE(191)
			::String tmp6 = this->__glVertexSource;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(191)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(191)
			::String tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(191)
			tmp5 = (tmp8 != null());
		}
		else{
			HX_STACK_LINE(191)
			tmp5 = false;
		}
		HX_STACK_LINE(191)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(191)
		if ((tmp5)){
			HX_STACK_LINE(191)
			::lime::graphics::opengl::GLProgram tmp7 = this->glProgram;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(191)
			::lime::graphics::opengl::GLProgram tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(191)
			bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(191)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(191)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(191)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(191)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(191)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(191)
			if ((tmp14)){
				HX_STACK_LINE(191)
				tmp6 = this->__glSourceDirty;
			}
			else{
				HX_STACK_LINE(191)
				tmp6 = true;
			}
		}
		else{
			HX_STACK_LINE(191)
			tmp6 = false;
		}
		HX_STACK_LINE(191)
		if ((tmp6)){
			HX_STACK_LINE(193)
			this->__initGL();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,__init,(void))

Void Shader_obj::__initGL( ){
{
		HX_STACK_FRAME("openfl.display.Shader","__initGL",0x2e23ed94,"openfl.display.Shader.__initGL","openfl/display/Shader.hx",200,0xae8f5dcd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(202)
		bool tmp = this->__glSourceDirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(202)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(202)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(202)
		if ((tmp1)){
			HX_STACK_LINE(202)
			::haxe::ds::StringMap tmp3 = this->__isUniform;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(202)
			::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(202)
			tmp2 = (tmp4 == null());
		}
		else{
			HX_STACK_LINE(202)
			tmp2 = true;
		}
		HX_STACK_LINE(202)
		if ((tmp2)){
			HX_STACK_LINE(204)
			this->__glSourceDirty = false;
			HX_STACK_LINE(205)
			this->glProgram = null();
			HX_STACK_LINE(207)
			::haxe::ds::StringMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(207)
			{
				HX_STACK_LINE(207)
				::haxe::ds::StringMap tmp4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(207)
				::haxe::ds::StringMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(207)
				tmp3 = tmp5;
			}
			HX_STACK_LINE(207)
			this->__isUniform = tmp3;
			HX_STACK_LINE(209)
			this->__inputBitmapData = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(210)
			this->__paramBool = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(211)
			this->__paramFloat = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(212)
			this->__paramInt = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(214)
			::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(214)
			{
				HX_STACK_LINE(214)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(214)
				bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(214)
				if ((tmp5)){
					HX_STACK_LINE(214)
					::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)4,(int)8);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(214)
					this1 = tmp6;
				}
				else{
					HX_STACK_LINE(214)
					bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(214)
					if ((tmp6)){
						HX_STACK_LINE(214)
						::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(214)
						{
							HX_STACK_LINE(214)
							::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(214)
							::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(214)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(214)
							int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(214)
							_this->length = tmp9;
							HX_STACK_LINE(214)
							int tmp10 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(214)
							_this->byteLength = tmp10;
							HX_STACK_LINE(214)
							::haxe::io::Bytes tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(214)
							{
								HX_STACK_LINE(214)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(214)
								int tmp12 = _this->byteLength;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(214)
								::haxe::io::Bytes tmp13 = ::haxe::io::Bytes_obj::alloc(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(214)
								this2 = tmp13;
								HX_STACK_LINE(214)
								tmp11 = this2;
							}
							HX_STACK_LINE(214)
							_this->buffer = tmp11;
							HX_STACK_LINE(214)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(214)
							tmp7 = _this;
						}
						HX_STACK_LINE(214)
						this1 = tmp7;
					}
					else{
						HX_STACK_LINE(214)
						bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(214)
						if ((tmp7)){
							HX_STACK_LINE(214)
							::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(214)
							{
								HX_STACK_LINE(214)
								::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(214)
								::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(214)
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
								HX_STACK_LINE(214)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(214)
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								HX_STACK_LINE(214)
								int tmp10 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(214)
								_this->byteLength = tmp10;
								HX_STACK_LINE(214)
								::haxe::io::Bytes tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(214)
								{
									HX_STACK_LINE(214)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(214)
									int tmp12 = _this->byteLength;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(214)
									::haxe::io::Bytes tmp13 = ::haxe::io::Bytes_obj::alloc(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(214)
									this2 = tmp13;
									HX_STACK_LINE(214)
									tmp11 = this2;
								}
								HX_STACK_LINE(214)
								_this->buffer = tmp11;
								HX_STACK_LINE(214)
								_this->copyFromArray(((Array< Float >)(array)),null());
								HX_STACK_LINE(214)
								tmp8 = _this;
							}
							HX_STACK_LINE(214)
							this1 = tmp8;
						}
						else{
							HX_STACK_LINE(214)
							bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(214)
							if ((tmp8)){
								HX_STACK_LINE(214)
								::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(214)
								{
									HX_STACK_LINE(214)
									::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(214)
									::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(214)
									::haxe::io::Bytes tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(214)
									::haxe::io::Bytes srcData = tmp11;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(214)
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(214)
									int srcLength = tmp12;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(214)
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(214)
									int srcByteOffset = tmp13;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(214)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(214)
									int srcElementSize = tmp14;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(214)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(214)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(214)
									int tmp16 = _this->type;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(214)
									bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(214)
									if ((tmp17)){
										HX_STACK_LINE(214)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(214)
										int tmp18 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(214)
										int cloneLength = tmp18;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(214)
										::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(214)
										{
											HX_STACK_LINE(214)
											::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(214)
											int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(214)
											::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(214)
											this2 = tmp21;
											HX_STACK_LINE(214)
											tmp19 = this2;
										}
										HX_STACK_LINE(214)
										_this->buffer = tmp19;
										HX_STACK_LINE(214)
										::haxe::io::Bytes tmp20 = srcData;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(214)
										int tmp21 = srcByteOffset;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(214)
										int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(214)
										_this->buffer->blit((int)0,tmp20,tmp21,tmp22);
									}
									else{
										HX_STACK_LINE(214)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(214)
									int tmp18 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(214)
									_this->byteLength = tmp18;
									HX_STACK_LINE(214)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(214)
									_this->length = srcLength;
									HX_STACK_LINE(214)
									tmp9 = _this;
								}
								HX_STACK_LINE(214)
								this1 = tmp9;
							}
							else{
								HX_STACK_LINE(214)
								bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(214)
								if ((tmp9)){
									HX_STACK_LINE(214)
									::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(214)
									{
										HX_STACK_LINE(214)
										::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(214)
										::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(214)
										bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(214)
										if ((tmp12)){
											HX_STACK_LINE(214)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(214)
										int tmp13 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(214)
										bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(214)
										if ((tmp14)){
											HX_STACK_LINE(214)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(214)
										int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(214)
										int bufferByteLength = tmp15;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(214)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(214)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(214)
										bool tmp16 = true;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(214)
										if ((tmp16)){
											HX_STACK_LINE(214)
											int tmp17 = bufferByteLength;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(214)
											newByteLength = tmp17;
											HX_STACK_LINE(214)
											int tmp18 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(214)
											bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(214)
											if ((tmp19)){
												HX_STACK_LINE(214)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(214)
											bool tmp20 = (newByteLength < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(214)
											if ((tmp20)){
												HX_STACK_LINE(214)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(214)
											int tmp17 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(214)
											newByteLength = tmp17;
											HX_STACK_LINE(214)
											int tmp18 = newByteLength;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(214)
											int newRange = tmp18;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(214)
											bool tmp19 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(214)
											if ((tmp19)){
												HX_STACK_LINE(214)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(214)
										_this->buffer = null();
										HX_STACK_LINE(214)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(214)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(214)
										Float tmp17 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(214)
										int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(214)
										_this->length = tmp18;
										HX_STACK_LINE(214)
										tmp10 = _this;
									}
									HX_STACK_LINE(214)
									this1 = tmp10;
								}
								else{
									HX_STACK_LINE(214)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
								}
							}
						}
					}
				}
				HX_STACK_LINE(214)
				tmp4 = this1;
			}
			HX_STACK_LINE(214)
			this->__uniformMatrix2 = tmp4;
			HX_STACK_LINE(215)
			::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(215)
			{
				HX_STACK_LINE(215)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(215)
				bool tmp6 = true;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(215)
				if ((tmp6)){
					HX_STACK_LINE(215)
					::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)9,(int)8);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(215)
					this1 = tmp7;
				}
				else{
					HX_STACK_LINE(215)
					bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(215)
					if ((tmp7)){
						HX_STACK_LINE(215)
						::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(215)
						{
							HX_STACK_LINE(215)
							::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(215)
							::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(215)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(215)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(215)
							_this->length = tmp10;
							HX_STACK_LINE(215)
							int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(215)
							_this->byteLength = tmp11;
							HX_STACK_LINE(215)
							::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(215)
							{
								HX_STACK_LINE(215)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(215)
								int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(215)
								::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(215)
								this2 = tmp14;
								HX_STACK_LINE(215)
								tmp12 = this2;
							}
							HX_STACK_LINE(215)
							_this->buffer = tmp12;
							HX_STACK_LINE(215)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(215)
							tmp8 = _this;
						}
						HX_STACK_LINE(215)
						this1 = tmp8;
					}
					else{
						HX_STACK_LINE(215)
						bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(215)
						if ((tmp8)){
							HX_STACK_LINE(215)
							::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(215)
							{
								HX_STACK_LINE(215)
								::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(215)
								::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(215)
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
								HX_STACK_LINE(215)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(215)
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								HX_STACK_LINE(215)
								int tmp11 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(215)
								_this->byteLength = tmp11;
								HX_STACK_LINE(215)
								::haxe::io::Bytes tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(215)
								{
									HX_STACK_LINE(215)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(215)
									int tmp13 = _this->byteLength;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(215)
									::haxe::io::Bytes tmp14 = ::haxe::io::Bytes_obj::alloc(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(215)
									this2 = tmp14;
									HX_STACK_LINE(215)
									tmp12 = this2;
								}
								HX_STACK_LINE(215)
								_this->buffer = tmp12;
								HX_STACK_LINE(215)
								_this->copyFromArray(((Array< Float >)(array)),null());
								HX_STACK_LINE(215)
								tmp9 = _this;
							}
							HX_STACK_LINE(215)
							this1 = tmp9;
						}
						else{
							HX_STACK_LINE(215)
							bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(215)
							if ((tmp9)){
								HX_STACK_LINE(215)
								::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(215)
								{
									HX_STACK_LINE(215)
									::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(215)
									::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(215)
									::haxe::io::Bytes tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(215)
									::haxe::io::Bytes srcData = tmp12;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(215)
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(215)
									int srcLength = tmp13;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(215)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(215)
									int srcByteOffset = tmp14;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(215)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(215)
									int srcElementSize = tmp15;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(215)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(215)
									int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(215)
									int tmp17 = _this->type;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(215)
									bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(215)
									if ((tmp18)){
										HX_STACK_LINE(215)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(215)
										int tmp19 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(215)
										int cloneLength = tmp19;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(215)
										::haxe::io::Bytes tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(215)
										{
											HX_STACK_LINE(215)
											::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(215)
											int tmp21 = cloneLength;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(215)
											::haxe::io::Bytes tmp22 = ::haxe::io::Bytes_obj::alloc(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(215)
											this2 = tmp22;
											HX_STACK_LINE(215)
											tmp20 = this2;
										}
										HX_STACK_LINE(215)
										_this->buffer = tmp20;
										HX_STACK_LINE(215)
										::haxe::io::Bytes tmp21 = srcData;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(215)
										int tmp22 = srcByteOffset;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(215)
										int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(215)
										_this->buffer->blit((int)0,tmp21,tmp22,tmp23);
									}
									else{
										HX_STACK_LINE(215)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(215)
									int tmp19 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(215)
									_this->byteLength = tmp19;
									HX_STACK_LINE(215)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(215)
									_this->length = srcLength;
									HX_STACK_LINE(215)
									tmp10 = _this;
								}
								HX_STACK_LINE(215)
								this1 = tmp10;
							}
							else{
								HX_STACK_LINE(215)
								bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(215)
								if ((tmp10)){
									HX_STACK_LINE(215)
									::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(215)
									{
										HX_STACK_LINE(215)
										::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(215)
										::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(215)
										bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(215)
										if ((tmp13)){
											HX_STACK_LINE(215)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(215)
										int tmp14 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(215)
										bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(215)
										if ((tmp15)){
											HX_STACK_LINE(215)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(215)
										int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(215)
										int bufferByteLength = tmp16;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(215)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(215)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(215)
										bool tmp17 = true;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(215)
										if ((tmp17)){
											HX_STACK_LINE(215)
											int tmp18 = bufferByteLength;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(215)
											newByteLength = tmp18;
											HX_STACK_LINE(215)
											int tmp19 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(215)
											bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(215)
											if ((tmp20)){
												HX_STACK_LINE(215)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(215)
											bool tmp21 = (newByteLength < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(215)
											if ((tmp21)){
												HX_STACK_LINE(215)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(215)
											int tmp18 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(215)
											newByteLength = tmp18;
											HX_STACK_LINE(215)
											int tmp19 = newByteLength;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(215)
											int newRange = tmp19;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(215)
											bool tmp20 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(215)
											if ((tmp20)){
												HX_STACK_LINE(215)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(215)
										_this->buffer = null();
										HX_STACK_LINE(215)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(215)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(215)
										Float tmp18 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(215)
										int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(215)
										_this->length = tmp19;
										HX_STACK_LINE(215)
										tmp11 = _this;
									}
									HX_STACK_LINE(215)
									this1 = tmp11;
								}
								else{
									HX_STACK_LINE(215)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
								}
							}
						}
					}
				}
				HX_STACK_LINE(215)
				tmp5 = this1;
			}
			HX_STACK_LINE(215)
			this->__uniformMatrix3 = tmp5;
			HX_STACK_LINE(216)
			::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(216)
			{
				HX_STACK_LINE(216)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(216)
				bool tmp7 = true;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(216)
				if ((tmp7)){
					HX_STACK_LINE(216)
					::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)16,(int)8);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(216)
					this1 = tmp8;
				}
				else{
					HX_STACK_LINE(216)
					bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(216)
					if ((tmp8)){
						HX_STACK_LINE(216)
						::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(216)
						{
							HX_STACK_LINE(216)
							::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(216)
							::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(216)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(216)
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(216)
							_this->length = tmp11;
							HX_STACK_LINE(216)
							int tmp12 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(216)
							_this->byteLength = tmp12;
							HX_STACK_LINE(216)
							::haxe::io::Bytes tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(216)
							{
								HX_STACK_LINE(216)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(216)
								int tmp14 = _this->byteLength;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(216)
								::haxe::io::Bytes tmp15 = ::haxe::io::Bytes_obj::alloc(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(216)
								this2 = tmp15;
								HX_STACK_LINE(216)
								tmp13 = this2;
							}
							HX_STACK_LINE(216)
							_this->buffer = tmp13;
							HX_STACK_LINE(216)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(216)
							tmp9 = _this;
						}
						HX_STACK_LINE(216)
						this1 = tmp9;
					}
					else{
						HX_STACK_LINE(216)
						bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(216)
						if ((tmp9)){
							HX_STACK_LINE(216)
							::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(216)
							{
								HX_STACK_LINE(216)
								::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(216)
								::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(216)
								cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
								HX_STACK_LINE(216)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(216)
								_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								HX_STACK_LINE(216)
								int tmp12 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(216)
								_this->byteLength = tmp12;
								HX_STACK_LINE(216)
								::haxe::io::Bytes tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(216)
								{
									HX_STACK_LINE(216)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(216)
									int tmp14 = _this->byteLength;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(216)
									::haxe::io::Bytes tmp15 = ::haxe::io::Bytes_obj::alloc(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(216)
									this2 = tmp15;
									HX_STACK_LINE(216)
									tmp13 = this2;
								}
								HX_STACK_LINE(216)
								_this->buffer = tmp13;
								HX_STACK_LINE(216)
								_this->copyFromArray(((Array< Float >)(array)),null());
								HX_STACK_LINE(216)
								tmp10 = _this;
							}
							HX_STACK_LINE(216)
							this1 = tmp10;
						}
						else{
							HX_STACK_LINE(216)
							bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(216)
							if ((tmp10)){
								HX_STACK_LINE(216)
								::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(216)
								{
									HX_STACK_LINE(216)
									::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(216)
									::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(216)
									::haxe::io::Bytes tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(216)
									::haxe::io::Bytes srcData = tmp13;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(216)
									int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(216)
									int srcLength = tmp14;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(216)
									int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(216)
									int srcByteOffset = tmp15;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(216)
									int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(216)
									int srcElementSize = tmp16;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(216)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(216)
									int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(216)
									int tmp18 = _this->type;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(216)
									bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(216)
									if ((tmp19)){
										HX_STACK_LINE(216)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(216)
										int tmp20 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(216)
										int cloneLength = tmp20;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(216)
										::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(216)
										{
											HX_STACK_LINE(216)
											::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(216)
											int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(216)
											::haxe::io::Bytes tmp23 = ::haxe::io::Bytes_obj::alloc(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(216)
											this2 = tmp23;
											HX_STACK_LINE(216)
											tmp21 = this2;
										}
										HX_STACK_LINE(216)
										_this->buffer = tmp21;
										HX_STACK_LINE(216)
										::haxe::io::Bytes tmp22 = srcData;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(216)
										int tmp23 = srcByteOffset;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(216)
										int tmp24 = cloneLength;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(216)
										_this->buffer->blit((int)0,tmp22,tmp23,tmp24);
									}
									else{
										HX_STACK_LINE(216)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(216)
									int tmp20 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(216)
									_this->byteLength = tmp20;
									HX_STACK_LINE(216)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(216)
									_this->length = srcLength;
									HX_STACK_LINE(216)
									tmp11 = _this;
								}
								HX_STACK_LINE(216)
								this1 = tmp11;
							}
							else{
								HX_STACK_LINE(216)
								bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(216)
								if ((tmp11)){
									HX_STACK_LINE(216)
									::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(216)
									{
										HX_STACK_LINE(216)
										::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(216)
										::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(216)
										bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(216)
										if ((tmp14)){
											HX_STACK_LINE(216)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(216)
										int tmp15 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(216)
										bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(216)
										if ((tmp16)){
											HX_STACK_LINE(216)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(216)
										int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(216)
										int bufferByteLength = tmp17;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(216)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(216)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(216)
										bool tmp18 = true;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(216)
										if ((tmp18)){
											HX_STACK_LINE(216)
											int tmp19 = bufferByteLength;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(216)
											newByteLength = tmp19;
											HX_STACK_LINE(216)
											int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(216)
											bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(216)
											if ((tmp21)){
												HX_STACK_LINE(216)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(216)
											bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(216)
											if ((tmp22)){
												HX_STACK_LINE(216)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(216)
											int tmp19 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(216)
											newByteLength = tmp19;
											HX_STACK_LINE(216)
											int tmp20 = newByteLength;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(216)
											int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(216)
											bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(216)
											if ((tmp21)){
												HX_STACK_LINE(216)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(216)
										_this->buffer = null();
										HX_STACK_LINE(216)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(216)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(216)
										Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(216)
										int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(216)
										_this->length = tmp20;
										HX_STACK_LINE(216)
										tmp12 = _this;
									}
									HX_STACK_LINE(216)
									this1 = tmp12;
								}
								else{
									HX_STACK_LINE(216)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
								}
							}
						}
					}
				}
				HX_STACK_LINE(216)
				tmp6 = this1;
			}
			HX_STACK_LINE(216)
			this->__uniformMatrix4 = tmp6;
			HX_STACK_LINE(218)
			::String tmp7 = this->get_glVertexSource();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(218)
			this->__processGLData(tmp7,HX_HCSTRING("attribute","\x1c","\x70","\xf0","\xfa"));
			HX_STACK_LINE(219)
			::String tmp8 = this->get_glVertexSource();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(219)
			this->__processGLData(tmp8,HX_HCSTRING("uniform","\x34","\x41","\x64","\xb5"));
			HX_STACK_LINE(220)
			::String tmp9 = this->get_glFragmentSource();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(220)
			this->__processGLData(tmp9,HX_HCSTRING("uniform","\x34","\x41","\x64","\xb5"));
		}
		HX_STACK_LINE(224)
		::lime::graphics::GLRenderContext tmp3 = this->gl;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(224)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(224)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(224)
		if ((tmp4)){
			HX_STACK_LINE(224)
			::lime::graphics::opengl::GLProgram tmp6 = this->glProgram;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(224)
			::lime::graphics::opengl::GLProgram tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(224)
			tmp5 = (tmp7 == null());
		}
		else{
			HX_STACK_LINE(224)
			tmp5 = false;
		}
		HX_STACK_LINE(224)
		if ((tmp5)){
			HX_STACK_LINE(229)
			Dynamic tmp6 = this->precisionHint;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(229)
			bool tmp7 = (tmp6 == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(229)
			::String tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(229)
			if ((tmp7)){
				HX_STACK_LINE(229)
				tmp8 = HX_HCSTRING("mediump","\x5b","\x92","\x81","\xf0");
			}
			else{
				HX_STACK_LINE(229)
				tmp8 = HX_HCSTRING("lowp","\x5c","\xad","\xb7","\x47");
			}
			HX_STACK_LINE(228)
			::String tmp9 = (HX_HCSTRING("#ifdef GL_ES\n\t\t\t\tprecision ","\xdf","\x92","\x6a","\x64") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(228)
			::String tmp10 = (tmp9 + HX_HCSTRING(" float;\n\t\t\t\t#endif\n\t\t\t\t","\xea","\xd3","\x26","\xbb"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(231)
			::String tmp11 = this->get_glFragmentSource();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(228)
			::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(228)
			::String fragment = tmp12;		HX_STACK_VAR(fragment,"fragment");
			HX_STACK_LINE(233)
			::String tmp13 = this->get_glVertexSource();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(233)
			::String tmp14 = fragment;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(233)
			::lime::graphics::opengl::GLProgram tmp15 = ::lime::utils::GLUtils_obj::createProgram(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(233)
			this->glProgram = tmp15;
			HX_STACK_LINE(235)
			::lime::graphics::opengl::GLProgram tmp16 = this->glProgram;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(235)
			bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(235)
			if ((tmp17)){
				HX_STACK_LINE(237)
				{
					HX_STACK_LINE(237)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(237)
					Array< ::Dynamic > _g1 = this->__inputBitmapData;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(237)
					while((true)){
						HX_STACK_LINE(237)
						bool tmp18 = (_g < _g1->length);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(237)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(237)
						if ((tmp19)){
							HX_STACK_LINE(237)
							break;
						}
						HX_STACK_LINE(237)
						::openfl::display::ShaderInput_openfl_display_BitmapData tmp20 = _g1->__get(_g).StaticCast< ::openfl::display::ShaderInput_openfl_display_BitmapData >();		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(237)
						::openfl::display::ShaderInput_openfl_display_BitmapData input = tmp20;		HX_STACK_VAR(input,"input");
						HX_STACK_LINE(237)
						++(_g);
						HX_STACK_LINE(239)
						::haxe::ds::StringMap tmp21 = this->__isUniform;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(239)
						::String tmp22 = input->name;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(239)
						Dynamic tmp23 = tmp21->get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(239)
						Dynamic tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(239)
						if ((tmp24)){
							HX_STACK_LINE(241)
							input->index = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_uniform_location.call(hx::DynamicPtr(this->glProgram->id),input->name);
						}
						else{
							HX_STACK_LINE(245)
							input->index = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_attrib_location.call(hx::DynamicPtr(this->glProgram->id),input->name);
						}
					}
				}
				HX_STACK_LINE(251)
				{
					HX_STACK_LINE(251)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(251)
					Array< ::Dynamic > _g1 = this->__paramBool;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(251)
					while((true)){
						HX_STACK_LINE(251)
						bool tmp18 = (_g < _g1->length);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(251)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(251)
						if ((tmp19)){
							HX_STACK_LINE(251)
							break;
						}
						HX_STACK_LINE(251)
						::openfl::display::ShaderParameter_Bool tmp20 = _g1->__get(_g).StaticCast< ::openfl::display::ShaderParameter_Bool >();		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(251)
						::openfl::display::ShaderParameter_Bool parameter = tmp20;		HX_STACK_VAR(parameter,"parameter");
						HX_STACK_LINE(251)
						++(_g);
						HX_STACK_LINE(253)
						::haxe::ds::StringMap tmp21 = this->__isUniform;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(253)
						::String tmp22 = parameter->name;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(253)
						Dynamic tmp23 = tmp21->get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(253)
						Dynamic tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(253)
						if ((tmp24)){
							HX_STACK_LINE(255)
							parameter->index = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_uniform_location.call(hx::DynamicPtr(this->glProgram->id),parameter->name);
						}
						else{
							HX_STACK_LINE(259)
							parameter->index = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_attrib_location.call(hx::DynamicPtr(this->glProgram->id),parameter->name);
						}
					}
				}
				HX_STACK_LINE(265)
				{
					HX_STACK_LINE(265)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(265)
					Array< ::Dynamic > _g1 = this->__paramFloat;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(265)
					while((true)){
						HX_STACK_LINE(265)
						bool tmp18 = (_g < _g1->length);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(265)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(265)
						if ((tmp19)){
							HX_STACK_LINE(265)
							break;
						}
						HX_STACK_LINE(265)
						::openfl::display::ShaderParameter_Float tmp20 = _g1->__get(_g).StaticCast< ::openfl::display::ShaderParameter_Float >();		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(265)
						::openfl::display::ShaderParameter_Float parameter = tmp20;		HX_STACK_VAR(parameter,"parameter");
						HX_STACK_LINE(265)
						++(_g);
						HX_STACK_LINE(267)
						::haxe::ds::StringMap tmp21 = this->__isUniform;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(267)
						::String tmp22 = parameter->name;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(267)
						Dynamic tmp23 = tmp21->get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(267)
						Dynamic tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(267)
						if ((tmp24)){
							HX_STACK_LINE(269)
							parameter->index = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_uniform_location.call(hx::DynamicPtr(this->glProgram->id),parameter->name);
						}
						else{
							HX_STACK_LINE(273)
							parameter->index = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_attrib_location.call(hx::DynamicPtr(this->glProgram->id),parameter->name);
						}
					}
				}
				HX_STACK_LINE(279)
				{
					HX_STACK_LINE(279)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(279)
					Array< ::Dynamic > _g1 = this->__paramInt;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(279)
					while((true)){
						HX_STACK_LINE(279)
						bool tmp18 = (_g < _g1->length);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(279)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(279)
						if ((tmp19)){
							HX_STACK_LINE(279)
							break;
						}
						HX_STACK_LINE(279)
						::openfl::display::ShaderParameter_Int tmp20 = _g1->__get(_g).StaticCast< ::openfl::display::ShaderParameter_Int >();		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(279)
						::openfl::display::ShaderParameter_Int parameter = tmp20;		HX_STACK_VAR(parameter,"parameter");
						HX_STACK_LINE(279)
						++(_g);
						HX_STACK_LINE(281)
						::haxe::ds::StringMap tmp21 = this->__isUniform;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(281)
						::String tmp22 = parameter->name;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(281)
						Dynamic tmp23 = tmp21->get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(281)
						Dynamic tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(281)
						if ((tmp24)){
							HX_STACK_LINE(283)
							parameter->index = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_uniform_location.call(hx::DynamicPtr(this->glProgram->id),parameter->name);
						}
						else{
							HX_STACK_LINE(287)
							parameter->index = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_attrib_location.call(hx::DynamicPtr(this->glProgram->id),parameter->name);
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,__initGL,(void))

Void Shader_obj::__processGLData( ::String source,::String storageType){
{
		HX_STACK_FRAME("openfl.display.Shader","__processGLData",0x90b8a01f,"openfl.display.Shader.__processGLData","openfl/display/Shader.hx",300,0xae8f5dcd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(source,"source")
		HX_STACK_ARG(storageType,"storageType")
		HX_STACK_LINE(302)
		int lastMatch = (int)0;		HX_STACK_VAR(lastMatch,"lastMatch");
		HX_STACK_LINE(302)
		Dynamic position;		HX_STACK_VAR(position,"position");
		HX_STACK_LINE(302)
		::EReg regex;		HX_STACK_VAR(regex,"regex");
		HX_STACK_LINE(302)
		::String name;		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(302)
		::String type;		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(304)
		bool tmp = (storageType == HX_HCSTRING("uniform","\x34","\x41","\x64","\xb5"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(304)
		if ((tmp)){
			HX_STACK_LINE(306)
			::EReg tmp1 = ::EReg_obj::__new(HX_HCSTRING("uniform ([A-Za-z0-9]+) ([A-Za-z0-9]+)","\x74","\x9c","\x40","\x21"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(306)
			regex = tmp1;
		}
		else{
			HX_STACK_LINE(310)
			::EReg tmp1 = ::EReg_obj::__new(HX_HCSTRING("attribute ([A-Za-z0-9]+) ([A-Za-z0-9]+)","\x5c","\x61","\xa8","\xc8"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(310)
			regex = tmp1;
		}
		HX_STACK_LINE(314)
		while((true)){
			HX_STACK_LINE(314)
			::String tmp1 = source;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(314)
			int tmp2 = lastMatch;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(314)
			bool tmp3 = regex->matchSub(tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(314)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(314)
			if ((tmp4)){
				HX_STACK_LINE(314)
				break;
			}
			HX_STACK_LINE(316)
			::String tmp5 = regex->matched((int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(316)
			type = tmp5;
			HX_STACK_LINE(317)
			::String tmp6 = regex->matched((int)2);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(317)
			name = tmp6;
			HX_STACK_LINE(319)
			::String tmp7 = type;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(319)
			bool tmp8 = ::StringTools_obj::startsWith(tmp7,HX_HCSTRING("sampler","\x08","\xc5","\xc9","\x83"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(319)
			if ((tmp8)){
				HX_STACK_LINE(321)
				::openfl::display::ShaderInput_openfl_display_BitmapData tmp9 = ::openfl::display::ShaderInput_openfl_display_BitmapData_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(321)
				::openfl::display::ShaderInput_openfl_display_BitmapData input = tmp9;		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(322)
				input->name = name;
				HX_STACK_LINE(323)
				::openfl::display::ShaderInput_openfl_display_BitmapData tmp10 = input;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(323)
				this->__inputBitmapData->push(tmp10);
				HX_STACK_LINE(324)
				::openfl::display::ShaderData tmp11 = this->get_data();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(324)
				::String tmp12 = name;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(324)
				::openfl::display::ShaderInput_openfl_display_BitmapData tmp13 = input;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(324)
				::Reflect_obj::setField(tmp11,tmp12,tmp13);
			}
			else{
				HX_STACK_LINE(328)
				::String tmp9 = type;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(328)
				Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(328)
				::String _switch_1 = (tmp9);
				if (  ( _switch_1==HX_HCSTRING("bool","\x2a","\x84","\x1b","\x41"))){
					HX_STACK_LINE(330)
					tmp10 = ((Dynamic)((int)0));
				}
				else if (  ( _switch_1==HX_HCSTRING("double","\x11","\x2b","\xcb","\x32")) ||  ( _switch_1==HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"))){
					HX_STACK_LINE(331)
					tmp10 = ((Dynamic)((int)4));
				}
				else if (  ( _switch_1==HX_HCSTRING("int","\xef","\x0c","\x50","\x00")) ||  ( _switch_1==HX_HCSTRING("uint","\x9a","\x03","\xa6","\x4d"))){
					HX_STACK_LINE(332)
					tmp10 = ((Dynamic)((int)8));
				}
				else if (  ( _switch_1==HX_HCSTRING("bvec2","\xc0","\x00","\x91","\xbb"))){
					HX_STACK_LINE(333)
					tmp10 = ((Dynamic)((int)1));
				}
				else if (  ( _switch_1==HX_HCSTRING("bvec3","\xc1","\x00","\x91","\xbb"))){
					HX_STACK_LINE(334)
					tmp10 = ((Dynamic)((int)2));
				}
				else if (  ( _switch_1==HX_HCSTRING("bvec4","\xc2","\x00","\x91","\xbb"))){
					HX_STACK_LINE(335)
					tmp10 = ((Dynamic)((int)3));
				}
				else if (  ( _switch_1==HX_HCSTRING("ivec2","\x47","\x10","\x5f","\xc3")) ||  ( _switch_1==HX_HCSTRING("uvec2","\x53","\x06","\x2e","\xac"))){
					HX_STACK_LINE(336)
					tmp10 = ((Dynamic)((int)9));
				}
				else if (  ( _switch_1==HX_HCSTRING("ivec3","\x48","\x10","\x5f","\xc3")) ||  ( _switch_1==HX_HCSTRING("uvec3","\x54","\x06","\x2e","\xac"))){
					HX_STACK_LINE(337)
					tmp10 = ((Dynamic)((int)10));
				}
				else if (  ( _switch_1==HX_HCSTRING("ivec4","\x49","\x10","\x5f","\xc3")) ||  ( _switch_1==HX_HCSTRING("uvec4","\x55","\x06","\x2e","\xac"))){
					HX_STACK_LINE(338)
					tmp10 = ((Dynamic)((int)11));
				}
				else if (  ( _switch_1==HX_HCSTRING("vec2","\x5e","\x27","\x4c","\x4e")) ||  ( _switch_1==HX_HCSTRING("dvec2","\xc2","\x29","\x5e","\xe2"))){
					HX_STACK_LINE(339)
					tmp10 = ((Dynamic)((int)5));
				}
				else if (  ( _switch_1==HX_HCSTRING("vec3","\x5f","\x27","\x4c","\x4e")) ||  ( _switch_1==HX_HCSTRING("dvec3","\xc3","\x29","\x5e","\xe2"))){
					HX_STACK_LINE(340)
					tmp10 = ((Dynamic)((int)6));
				}
				else if (  ( _switch_1==HX_HCSTRING("vec4","\x60","\x27","\x4c","\x4e")) ||  ( _switch_1==HX_HCSTRING("dvec4","\xc4","\x29","\x5e","\xe2"))){
					HX_STACK_LINE(341)
					tmp10 = ((Dynamic)((int)7));
				}
				else if (  ( _switch_1==HX_HCSTRING("mat2","\x92","\x41","\x56","\x48")) ||  ( _switch_1==HX_HCSTRING("mat2x2","\xcc","\xb2","\x97","\xbb"))){
					HX_STACK_LINE(342)
					tmp10 = ((Dynamic)((int)12));
				}
				else if (  ( _switch_1==HX_HCSTRING("mat2x3","\xcd","\xb2","\x97","\xbb"))){
					HX_STACK_LINE(343)
					tmp10 = ((Dynamic)((int)13));
				}
				else if (  ( _switch_1==HX_HCSTRING("mat2x4","\xce","\xb2","\x97","\xbb"))){
					HX_STACK_LINE(344)
					tmp10 = ((Dynamic)((int)14));
				}
				else if (  ( _switch_1==HX_HCSTRING("mat3x2","\x0d","\x75","\x98","\xbb"))){
					HX_STACK_LINE(345)
					tmp10 = ((Dynamic)((int)15));
				}
				else if (  ( _switch_1==HX_HCSTRING("mat3","\x93","\x41","\x56","\x48")) ||  ( _switch_1==HX_HCSTRING("mat3x3","\x0e","\x75","\x98","\xbb"))){
					HX_STACK_LINE(346)
					tmp10 = ((Dynamic)((int)16));
				}
				else if (  ( _switch_1==HX_HCSTRING("mat3x4","\x0f","\x75","\x98","\xbb"))){
					HX_STACK_LINE(347)
					tmp10 = ((Dynamic)((int)17));
				}
				else if (  ( _switch_1==HX_HCSTRING("mat4x2","\x4e","\x37","\x99","\xbb"))){
					HX_STACK_LINE(348)
					tmp10 = ((Dynamic)((int)18));
				}
				else if (  ( _switch_1==HX_HCSTRING("mat4x3","\x4f","\x37","\x99","\xbb"))){
					HX_STACK_LINE(349)
					tmp10 = ((Dynamic)((int)19));
				}
				else if (  ( _switch_1==HX_HCSTRING("mat4","\x94","\x41","\x56","\x48")) ||  ( _switch_1==HX_HCSTRING("mat4x4","\x50","\x37","\x99","\xbb"))){
					HX_STACK_LINE(350)
					tmp10 = ((Dynamic)((int)20));
				}
				else  {
					HX_STACK_LINE(351)
					tmp10 = null();
				}
;
;
				HX_STACK_LINE(328)
				Dynamic parameterType = tmp10;		HX_STACK_VAR(parameterType,"parameterType");
				HX_STACK_LINE(355)
				Dynamic tmp11 = parameterType;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(355)
				switch( (int)(tmp11)){
					case (int)0: case (int)1: case (int)2: case (int)3: {
						HX_STACK_LINE(359)
						::openfl::display::ShaderParameter_Bool tmp12 = ::openfl::display::ShaderParameter_Bool_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(359)
						::openfl::display::ShaderParameter_Bool parameter = tmp12;		HX_STACK_VAR(parameter,"parameter");
						HX_STACK_LINE(360)
						parameter->name = name;
						HX_STACK_LINE(361)
						parameter->type = parameterType;
						HX_STACK_LINE(362)
						::openfl::display::ShaderParameter_Bool tmp13 = parameter;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(362)
						this->__paramBool->push(tmp13);
						HX_STACK_LINE(363)
						::openfl::display::ShaderData tmp14 = this->get_data();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(363)
						::String tmp15 = name;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(363)
						::openfl::display::ShaderParameter_Bool tmp16 = parameter;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(363)
						::Reflect_obj::setField(tmp14,tmp15,tmp16);
					}
					;break;
					case (int)8: case (int)9: case (int)10: case (int)11: {
						HX_STACK_LINE(367)
						::openfl::display::ShaderParameter_Int tmp12 = ::openfl::display::ShaderParameter_Int_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(367)
						::openfl::display::ShaderParameter_Int parameter = tmp12;		HX_STACK_VAR(parameter,"parameter");
						HX_STACK_LINE(368)
						parameter->name = name;
						HX_STACK_LINE(369)
						parameter->type = parameterType;
						HX_STACK_LINE(370)
						::openfl::display::ShaderParameter_Int tmp13 = parameter;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(370)
						this->__paramInt->push(tmp13);
						HX_STACK_LINE(371)
						::openfl::display::ShaderData tmp14 = this->get_data();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(371)
						::String tmp15 = name;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(371)
						::openfl::display::ShaderParameter_Int tmp16 = parameter;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(371)
						::Reflect_obj::setField(tmp14,tmp15,tmp16);
					}
					;break;
					default: {
						HX_STACK_LINE(375)
						::openfl::display::ShaderParameter_Float tmp12 = ::openfl::display::ShaderParameter_Float_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(375)
						::openfl::display::ShaderParameter_Float parameter = tmp12;		HX_STACK_VAR(parameter,"parameter");
						HX_STACK_LINE(376)
						parameter->name = name;
						HX_STACK_LINE(377)
						parameter->type = parameterType;
						HX_STACK_LINE(378)
						::openfl::display::ShaderParameter_Float tmp13 = parameter;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(378)
						this->__paramFloat->push(tmp13);
						HX_STACK_LINE(379)
						::openfl::display::ShaderData tmp14 = this->get_data();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(379)
						::String tmp15 = name;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(379)
						::openfl::display::ShaderParameter_Float tmp16 = parameter;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(379)
						::Reflect_obj::setField(tmp14,tmp15,tmp16);
					}
				}
			}
			HX_STACK_LINE(385)
			::haxe::ds::StringMap tmp9 = this->__isUniform;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(385)
			::String tmp10 = name;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(385)
			bool tmp11 = (storageType == HX_HCSTRING("uniform","\x34","\x41","\x64","\xb5"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(385)
			tmp9->set(tmp10,tmp11);
			HX_STACK_LINE(387)
			Dynamic tmp12 = regex->matchedPos();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(387)
			position = tmp12;
			HX_STACK_LINE(388)
			int tmp13 = (position->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) + position->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(388)
			lastMatch = tmp13;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,__processGLData,(void))

Void Shader_obj::__update( ){
{
		HX_STACK_FRAME("openfl.display.Shader","__update",0x1ddd1668,"openfl.display.Shader.__update","openfl/display/Shader.hx",395,0xae8f5dcd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(397)
		::lime::graphics::opengl::GLProgram tmp = this->glProgram;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(397)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(397)
		if ((tmp1)){
			HX_STACK_LINE(399)
			this->__updateGL();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,__update,(void))

Void Shader_obj::__updateGL( ){
{
		HX_STACK_FRAME("openfl.display.Shader","__updateGL",0x201dbe8d,"openfl.display.Shader.__updateGL","openfl/display/Shader.hx",406,0xae8f5dcd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(408)
		int textureCount = (int)0;		HX_STACK_VAR(textureCount,"textureCount");
		HX_STACK_LINE(410)
		{
			HX_STACK_LINE(410)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(410)
			Array< ::Dynamic > _g1 = this->__inputBitmapData;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(410)
			while((true)){
				HX_STACK_LINE(410)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(410)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(410)
				if ((tmp1)){
					HX_STACK_LINE(410)
					break;
				}
				HX_STACK_LINE(410)
				::openfl::display::ShaderInput_openfl_display_BitmapData tmp2 = _g1->__get(_g).StaticCast< ::openfl::display::ShaderInput_openfl_display_BitmapData >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(410)
				::openfl::display::ShaderInput_openfl_display_BitmapData input = tmp2;		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(410)
				++(_g);
				HX_STACK_LINE(412)
				bool tmp3 = (input->input != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(412)
				if ((tmp3)){
					HX_STACK_LINE(414)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_active_texture.call((this->gl->TEXTURE0 + textureCount));
					HX_STACK_LINE(415)
					{
						HX_STACK_LINE(415)
						::lime::graphics::GLRenderContext tmp4 = this->gl;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(415)
						::lime::graphics::opengl::GLTexture tmp5 = input->input->getTexture(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(415)
						::lime::graphics::opengl::GLTexture texture = tmp5;		HX_STACK_VAR(texture,"texture");
						HX_STACK_LINE(415)
						::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(this->gl->TEXTURE_2D,hx::DynamicPtr((  (((texture == null()))) ? Dynamic(null()) : Dynamic(texture->id) )));
					}
					HX_STACK_LINE(417)
					bool tmp4 = input->smoothing;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(417)
					if ((tmp4)){
						HX_STACK_LINE(419)
						::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(this->gl->TEXTURE_2D,this->gl->TEXTURE_MAG_FILTER,this->gl->LINEAR);
						HX_STACK_LINE(420)
						::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(this->gl->TEXTURE_2D,this->gl->TEXTURE_MIN_FILTER,this->gl->LINEAR);
					}
					else{
						HX_STACK_LINE(424)
						::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(this->gl->TEXTURE_2D,this->gl->TEXTURE_MAG_FILTER,this->gl->NEAREST);
						HX_STACK_LINE(425)
						::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(this->gl->TEXTURE_2D,this->gl->TEXTURE_MIN_FILTER,this->gl->NEAREST);
					}
				}
				HX_STACK_LINE(431)
				(textureCount)++;
			}
		}
		HX_STACK_LINE(435)
		Dynamic index = (int)0;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(437)
		{
			HX_STACK_LINE(437)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(437)
			Array< ::Dynamic > _g1 = this->__paramBool;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(437)
			while((true)){
				HX_STACK_LINE(437)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(437)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(437)
				if ((tmp1)){
					HX_STACK_LINE(437)
					break;
				}
				HX_STACK_LINE(437)
				::openfl::display::ShaderParameter_Bool tmp2 = _g1->__get(_g).StaticCast< ::openfl::display::ShaderParameter_Bool >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(437)
				::openfl::display::ShaderParameter_Bool parameter = tmp2;		HX_STACK_VAR(parameter,"parameter");
				HX_STACK_LINE(437)
				++(_g);
				HX_STACK_LINE(439)
				Array< bool > value = parameter->value;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(440)
				index = parameter->index;
				HX_STACK_LINE(442)
				bool tmp3 = (value != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(442)
				if ((tmp3)){
					HX_STACK_LINE(444)
					Dynamic _g2 = parameter->type;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(444)
					Dynamic tmp4 = _g2;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(444)
					switch( (int)(tmp4)){
						case (int)0: {
							HX_STACK_LINE(448)
							int location = index;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(448)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform1i.call(location,(  ((value->__get((int)0))) ? int((int)1) : int((int)0) ));
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(452)
							int location = index;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(452)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform2i.call(location,(  ((value->__get((int)0))) ? int((int)1) : int((int)0) ),(  ((value->__get((int)1))) ? int((int)1) : int((int)0) ));
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(456)
							int location = index;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(456)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform3i.call(location,(  ((value->__get((int)0))) ? int((int)1) : int((int)0) ),(  ((value->__get((int)1))) ? int((int)1) : int((int)0) ),(  ((value->__get((int)2))) ? int((int)1) : int((int)0) ));
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(460)
							int location = index;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(460)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform4i.call(location,(  ((value->__get((int)0))) ? int((int)1) : int((int)0) ),(  ((value->__get((int)1))) ? int((int)1) : int((int)0) ),(  ((value->__get((int)2))) ? int((int)1) : int((int)0) ),(  ((value->__get((int)3))) ? int((int)1) : int((int)0) ));
						}
						;break;
						default: {
						}
					}
				}
				else{
					HX_STACK_LINE(466)
					::haxe::ds::StringMap tmp4 = this->__isUniform;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(466)
					::String tmp5 = parameter->name;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(466)
					Dynamic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(466)
					Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(466)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(466)
					if ((tmp8)){
						HX_STACK_LINE(468)
						::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable_vertex_attrib_array.call(parameter->index);
					}
				}
			}
		}
		HX_STACK_LINE(474)
		{
			HX_STACK_LINE(474)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(474)
			Array< ::Dynamic > _g1 = this->__paramFloat;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(474)
			while((true)){
				HX_STACK_LINE(474)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(474)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(474)
				if ((tmp1)){
					HX_STACK_LINE(474)
					break;
				}
				HX_STACK_LINE(474)
				::openfl::display::ShaderParameter_Float tmp2 = _g1->__get(_g).StaticCast< ::openfl::display::ShaderParameter_Float >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(474)
				::openfl::display::ShaderParameter_Float parameter = tmp2;		HX_STACK_VAR(parameter,"parameter");
				HX_STACK_LINE(474)
				++(_g);
				HX_STACK_LINE(476)
				Array< Float > value = parameter->value;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(477)
				index = parameter->index;
				HX_STACK_LINE(479)
				bool tmp3 = (value != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(479)
				if ((tmp3)){
					HX_STACK_LINE(481)
					Dynamic _g2 = parameter->type;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(481)
					Dynamic tmp4 = _g2;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(481)
					switch( (int)(tmp4)){
						case (int)4: {
							HX_STACK_LINE(485)
							int location = index;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(485)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform1f.call(location,value->__get((int)0));
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(489)
							int location = index;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(489)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform2f.call(location,value->__get((int)0),value->__get((int)1));
						}
						;break;
						case (int)6: {
							HX_STACK_LINE(493)
							int location = index;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(493)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform3f.call(location,value->__get((int)0),value->__get((int)1),value->__get((int)2));
						}
						;break;
						case (int)7: {
							HX_STACK_LINE(497)
							int location = index;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(497)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform4f.call(location,value->__get((int)0),value->__get((int)1),value->__get((int)2),value->__get((int)3));
						}
						;break;
						case (int)12: {
							HX_STACK_LINE(501)
							{
								HX_STACK_LINE(501)
								int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(501)
								while((true)){
									HX_STACK_LINE(501)
									bool tmp5 = (_g3 < (int)4);		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(501)
									bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(501)
									if ((tmp6)){
										HX_STACK_LINE(501)
										break;
									}
									HX_STACK_LINE(501)
									int tmp7 = (_g3)++;		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(501)
									int i = tmp7;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(503)
									{
										HX_STACK_LINE(503)
										::lime::utils::ArrayBufferView tmp8 = this->__uniformMatrix2;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(503)
										::lime::utils::ArrayBufferView this1 = tmp8;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(503)
										Float tmp9 = value->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(503)
										Float val = tmp9;		HX_STACK_VAR(val,"val");
										HX_STACK_LINE(503)
										::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (i * (int)4)),val);
										HX_STACK_LINE(503)
										val;
									}
								}
							}
							HX_STACK_LINE(507)
							{
								HX_STACK_LINE(507)
								int location = index;		HX_STACK_VAR(location,"location");
								HX_STACK_LINE(507)
								::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform_matrix.call(location,false,hx::DynamicPtr(this->__uniformMatrix2->buffer),(int)2);
							}
						}
						;break;
						case (int)16: {
							HX_STACK_LINE(515)
							{
								HX_STACK_LINE(515)
								int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(515)
								while((true)){
									HX_STACK_LINE(515)
									bool tmp5 = (_g3 < (int)9);		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(515)
									bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(515)
									if ((tmp6)){
										HX_STACK_LINE(515)
										break;
									}
									HX_STACK_LINE(515)
									int tmp7 = (_g3)++;		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(515)
									int i = tmp7;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(517)
									{
										HX_STACK_LINE(517)
										::lime::utils::ArrayBufferView tmp8 = this->__uniformMatrix3;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(517)
										::lime::utils::ArrayBufferView this1 = tmp8;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(517)
										Float tmp9 = value->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(517)
										Float val = tmp9;		HX_STACK_VAR(val,"val");
										HX_STACK_LINE(517)
										::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (i * (int)4)),val);
										HX_STACK_LINE(517)
										val;
									}
								}
							}
							HX_STACK_LINE(521)
							{
								HX_STACK_LINE(521)
								int location = index;		HX_STACK_VAR(location,"location");
								HX_STACK_LINE(521)
								::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform_matrix.call(location,false,hx::DynamicPtr(this->__uniformMatrix3->buffer),(int)3);
							}
						}
						;break;
						case (int)20: {
							HX_STACK_LINE(529)
							{
								HX_STACK_LINE(529)
								int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(529)
								while((true)){
									HX_STACK_LINE(529)
									bool tmp5 = (_g3 < (int)16);		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(529)
									bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(529)
									if ((tmp6)){
										HX_STACK_LINE(529)
										break;
									}
									HX_STACK_LINE(529)
									int tmp7 = (_g3)++;		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(529)
									int i = tmp7;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(531)
									{
										HX_STACK_LINE(531)
										::lime::utils::ArrayBufferView tmp8 = this->__uniformMatrix4;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(531)
										::lime::utils::ArrayBufferView this1 = tmp8;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(531)
										Float tmp9 = value->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(531)
										Float val = tmp9;		HX_STACK_VAR(val,"val");
										HX_STACK_LINE(531)
										::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (i * (int)4)),val);
										HX_STACK_LINE(531)
										val;
									}
								}
							}
							HX_STACK_LINE(535)
							{
								HX_STACK_LINE(535)
								int location = index;		HX_STACK_VAR(location,"location");
								HX_STACK_LINE(535)
								::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform_matrix.call(location,false,hx::DynamicPtr(this->__uniformMatrix4->buffer),(int)4);
							}
						}
						;break;
						default: {
						}
					}
				}
				else{
					HX_STACK_LINE(541)
					::haxe::ds::StringMap tmp4 = this->__isUniform;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(541)
					::String tmp5 = parameter->name;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(541)
					Dynamic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(541)
					Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(541)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(541)
					if ((tmp8)){
						HX_STACK_LINE(543)
						::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable_vertex_attrib_array.call(parameter->index);
					}
				}
			}
		}
		HX_STACK_LINE(549)
		{
			HX_STACK_LINE(549)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(549)
			Array< ::Dynamic > _g1 = this->__paramInt;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(549)
			while((true)){
				HX_STACK_LINE(549)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(549)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(549)
				if ((tmp1)){
					HX_STACK_LINE(549)
					break;
				}
				HX_STACK_LINE(549)
				::openfl::display::ShaderParameter_Int tmp2 = _g1->__get(_g).StaticCast< ::openfl::display::ShaderParameter_Int >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(549)
				::openfl::display::ShaderParameter_Int parameter = tmp2;		HX_STACK_VAR(parameter,"parameter");
				HX_STACK_LINE(549)
				++(_g);
				HX_STACK_LINE(551)
				Array< int > value = parameter->value;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(553)
				bool tmp3 = (value != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(553)
				if ((tmp3)){
					HX_STACK_LINE(555)
					Dynamic _g2 = parameter->type;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(555)
					Dynamic tmp4 = _g2;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(555)
					switch( (int)(tmp4)){
						case (int)8: {
							HX_STACK_LINE(559)
							int location = index;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(559)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform1i.call(location,value->__get((int)0));
						}
						;break;
						case (int)9: {
							HX_STACK_LINE(563)
							int location = index;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(563)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform2i.call(location,value->__get((int)0),value->__get((int)1));
						}
						;break;
						case (int)10: {
							HX_STACK_LINE(567)
							int location = index;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(567)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform3i.call(location,value->__get((int)0),value->__get((int)1),value->__get((int)2));
						}
						;break;
						case (int)11: {
							HX_STACK_LINE(571)
							int location = index;		HX_STACK_VAR(location,"location");
							HX_STACK_LINE(571)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform4i.call(location,value->__get((int)0),value->__get((int)1),value->__get((int)2),value->__get((int)3));
						}
						;break;
						default: {
						}
					}
				}
				else{
					HX_STACK_LINE(577)
					::haxe::ds::StringMap tmp4 = this->__isUniform;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(577)
					::String tmp5 = parameter->name;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(577)
					Dynamic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(577)
					Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(577)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(577)
					if ((tmp8)){
						HX_STACK_LINE(579)
						::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable_vertex_attrib_array.call(parameter->index);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,__updateGL,(void))

::openfl::display::ShaderData Shader_obj::get_data( ){
	HX_STACK_FRAME("openfl.display.Shader","get_data",0xb0c636f2,"openfl.display.Shader.get_data","openfl/display/Shader.hx",595,0xae8f5dcd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(597)
	bool tmp = this->__glSourceDirty;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(597)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(597)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(597)
	if ((tmp1)){
		HX_STACK_LINE(597)
		::openfl::display::ShaderData tmp3 = this->__data;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(597)
		::openfl::display::ShaderData tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(597)
		tmp2 = (tmp4 == null());
	}
	else{
		HX_STACK_LINE(597)
		tmp2 = true;
	}
	HX_STACK_LINE(597)
	if ((tmp2)){
		HX_STACK_LINE(599)
		this->__init();
	}
	HX_STACK_LINE(603)
	::openfl::display::ShaderData tmp3 = this->__data;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(603)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,get_data,return )

::openfl::display::ShaderData Shader_obj::set_data( ::openfl::display::ShaderData value){
	HX_STACK_FRAME("openfl.display.Shader","set_data",0x5f239066,"openfl.display.Shader.set_data","openfl/display/Shader.hx",608,0xae8f5dcd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(610)
	::openfl::display::ShaderData tmp = this->__data = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(610)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,set_data,return )

::String Shader_obj::get_glFragmentSource( ){
	HX_STACK_FRAME("openfl.display.Shader","get_glFragmentSource",0x5d5fb298,"openfl.display.Shader.get_glFragmentSource","openfl/display/Shader.hx",615,0xae8f5dcd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(617)
	::String tmp = this->__glFragmentSource;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(617)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,get_glFragmentSource,return )

::String Shader_obj::set_glFragmentSource( ::String value){
	HX_STACK_FRAME("openfl.display.Shader","set_glFragmentSource",0x2a176a0c,"openfl.display.Shader.set_glFragmentSource","openfl/display/Shader.hx",622,0xae8f5dcd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(624)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(624)
	::String tmp1 = this->__glFragmentSource;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(624)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(624)
	if ((tmp2)){
		HX_STACK_LINE(626)
		this->__glSourceDirty = true;
	}
	HX_STACK_LINE(630)
	::String tmp3 = this->__glFragmentSource = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(630)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,set_glFragmentSource,return )

::String Shader_obj::get_glVertexSource( ){
	HX_STACK_FRAME("openfl.display.Shader","get_glVertexSource",0xa3c917ec,"openfl.display.Shader.get_glVertexSource","openfl/display/Shader.hx",635,0xae8f5dcd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(637)
	::String tmp = this->__glVertexSource;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(637)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,get_glVertexSource,return )

::String Shader_obj::set_glVertexSource( ::String value){
	HX_STACK_FRAME("openfl.display.Shader","set_glVertexSource",0x80784a60,"openfl.display.Shader.set_glVertexSource","openfl/display/Shader.hx",642,0xae8f5dcd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(644)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(644)
	::String tmp1 = this->__glFragmentSource;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(644)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(644)
	if ((tmp2)){
		HX_STACK_LINE(646)
		this->__glSourceDirty = true;
	}
	HX_STACK_LINE(650)
	::String tmp3 = this->__glFragmentSource = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(650)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,set_glVertexSource,return )


Shader_obj::Shader_obj()
{
}

void Shader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shader);
	HX_MARK_MEMBER_NAME(byteCode,"byteCode");
	HX_MARK_MEMBER_NAME(glProgram,"glProgram");
	HX_MARK_MEMBER_NAME(precisionHint,"precisionHint");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(__data,"__data");
	HX_MARK_MEMBER_NAME(__glFragmentSource,"__glFragmentSource");
	HX_MARK_MEMBER_NAME(__glSourceDirty,"__glSourceDirty");
	HX_MARK_MEMBER_NAME(__glVertexSource,"__glVertexSource");
	HX_MARK_MEMBER_NAME(__isUniform,"__isUniform");
	HX_MARK_MEMBER_NAME(__inputBitmapData,"__inputBitmapData");
	HX_MARK_MEMBER_NAME(__paramBool,"__paramBool");
	HX_MARK_MEMBER_NAME(__paramFloat,"__paramFloat");
	HX_MARK_MEMBER_NAME(__paramInt,"__paramInt");
	HX_MARK_MEMBER_NAME(__uniformMatrix2,"__uniformMatrix2");
	HX_MARK_MEMBER_NAME(__uniformMatrix3,"__uniformMatrix3");
	HX_MARK_MEMBER_NAME(__uniformMatrix4,"__uniformMatrix4");
	HX_MARK_END_CLASS();
}

void Shader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(byteCode,"byteCode");
	HX_VISIT_MEMBER_NAME(glProgram,"glProgram");
	HX_VISIT_MEMBER_NAME(precisionHint,"precisionHint");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(__data,"__data");
	HX_VISIT_MEMBER_NAME(__glFragmentSource,"__glFragmentSource");
	HX_VISIT_MEMBER_NAME(__glSourceDirty,"__glSourceDirty");
	HX_VISIT_MEMBER_NAME(__glVertexSource,"__glVertexSource");
	HX_VISIT_MEMBER_NAME(__isUniform,"__isUniform");
	HX_VISIT_MEMBER_NAME(__inputBitmapData,"__inputBitmapData");
	HX_VISIT_MEMBER_NAME(__paramBool,"__paramBool");
	HX_VISIT_MEMBER_NAME(__paramFloat,"__paramFloat");
	HX_VISIT_MEMBER_NAME(__paramInt,"__paramInt");
	HX_VISIT_MEMBER_NAME(__uniformMatrix2,"__uniformMatrix2");
	HX_VISIT_MEMBER_NAME(__uniformMatrix3,"__uniformMatrix3");
	HX_VISIT_MEMBER_NAME(__uniformMatrix4,"__uniformMatrix4");
}

Dynamic Shader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == hx::paccAlways) return get_data(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { return __data; }
		if (HX_FIELD_EQ(inName,"__init") ) { return __init_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"byteCode") ) { return byteCode; }
		if (HX_FIELD_EQ(inName,"__enable") ) { return __enable_dyn(); }
		if (HX_FIELD_EQ(inName,"__initGL") ) { return __initGL_dyn(); }
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		if (HX_FIELD_EQ(inName,"get_data") ) { return get_data_dyn(); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"glProgram") ) { return glProgram; }
		if (HX_FIELD_EQ(inName,"__disable") ) { return __disable_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__paramInt") ) { return __paramInt; }
		if (HX_FIELD_EQ(inName,"__enableGL") ) { return __enableGL_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateGL") ) { return __updateGL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__isUniform") ) { return __isUniform; }
		if (HX_FIELD_EQ(inName,"__paramBool") ) { return __paramBool; }
		if (HX_FIELD_EQ(inName,"__disableGL") ) { return __disableGL_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__paramFloat") ) { return __paramFloat; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"precisionHint") ) { return precisionHint; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"glVertexSource") ) { if (inCallProp == hx::paccAlways) return get_glVertexSource(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__glSourceDirty") ) { return __glSourceDirty; }
		if (HX_FIELD_EQ(inName,"__processGLData") ) { return __processGLData_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"glFragmentSource") ) { if (inCallProp == hx::paccAlways) return get_glFragmentSource(); }
		if (HX_FIELD_EQ(inName,"__glVertexSource") ) { return __glVertexSource; }
		if (HX_FIELD_EQ(inName,"__uniformMatrix2") ) { return __uniformMatrix2; }
		if (HX_FIELD_EQ(inName,"__uniformMatrix3") ) { return __uniformMatrix3; }
		if (HX_FIELD_EQ(inName,"__uniformMatrix4") ) { return __uniformMatrix4; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__inputBitmapData") ) { return __inputBitmapData; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__glFragmentSource") ) { return __glFragmentSource; }
		if (HX_FIELD_EQ(inName,"get_glVertexSource") ) { return get_glVertexSource_dyn(); }
		if (HX_FIELD_EQ(inName,"set_glVertexSource") ) { return set_glVertexSource_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_glFragmentSource") ) { return get_glFragmentSource_dyn(); }
		if (HX_FIELD_EQ(inName,"set_glFragmentSource") ) { return set_glFragmentSource_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Shader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == hx::paccAlways) return set_data(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { __data=inValue.Cast< ::openfl::display::ShaderData >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"byteCode") ) { byteCode=inValue.Cast< ::openfl::utils::ByteArrayData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"glProgram") ) { glProgram=inValue.Cast< ::lime::graphics::opengl::GLProgram >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__paramInt") ) { __paramInt=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__isUniform") ) { __isUniform=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__paramBool") ) { __paramBool=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__paramFloat") ) { __paramFloat=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"precisionHint") ) { precisionHint=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"glVertexSource") ) { if (inCallProp == hx::paccAlways) return set_glVertexSource(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__glSourceDirty") ) { __glSourceDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"glFragmentSource") ) { if (inCallProp == hx::paccAlways) return set_glFragmentSource(inValue); }
		if (HX_FIELD_EQ(inName,"__glVertexSource") ) { __glVertexSource=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__uniformMatrix2") ) { __uniformMatrix2=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__uniformMatrix3") ) { __uniformMatrix3=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__uniformMatrix4") ) { __uniformMatrix4=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__inputBitmapData") ) { __inputBitmapData=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__glFragmentSource") ) { __glFragmentSource=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Shader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("byteCode","\x55","\x20","\x71","\x42"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("glFragmentSource","\xd0","\xc5","\xca","\xf7"));
	outFields->push(HX_HCSTRING("glProgram","\xdf","\xd6","\xb3","\xc1"));
	outFields->push(HX_HCSTRING("glVertexSource","\x24","\x6d","\x4a","\x5b"));
	outFields->push(HX_HCSTRING("precisionHint","\xe5","\xb5","\x95","\x2c"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"));
	outFields->push(HX_HCSTRING("__glFragmentSource","\xf0","\x58","\x5b","\x63"));
	outFields->push(HX_HCSTRING("__glSourceDirty","\xf2","\xa3","\xef","\x41"));
	outFields->push(HX_HCSTRING("__glVertexSource","\x44","\xf8","\x89","\x8f"));
	outFields->push(HX_HCSTRING("__isUniform","\x4a","\x07","\x8f","\xe7"));
	outFields->push(HX_HCSTRING("__inputBitmapData","\x43","\xdf","\xf6","\x64"));
	outFields->push(HX_HCSTRING("__paramBool","\x37","\x44","\xb6","\x5f"));
	outFields->push(HX_HCSTRING("__paramFloat","\xef","\x10","\x64","\xab"));
	outFields->push(HX_HCSTRING("__paramInt","\x82","\xcd","\xbd","\x21"));
	outFields->push(HX_HCSTRING("__uniformMatrix2","\x1d","\x03","\x4d","\x81"));
	outFields->push(HX_HCSTRING("__uniformMatrix3","\x1e","\x03","\x4d","\x81"));
	outFields->push(HX_HCSTRING("__uniformMatrix4","\x1f","\x03","\x4d","\x81"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::utils::ByteArrayData*/ ,(int)offsetof(Shader_obj,byteCode),HX_HCSTRING("byteCode","\x55","\x20","\x71","\x42")},
	{hx::fsObject /*::lime::graphics::opengl::GLProgram*/ ,(int)offsetof(Shader_obj,glProgram),HX_HCSTRING("glProgram","\xdf","\xd6","\xb3","\xc1")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Shader_obj,precisionHint),HX_HCSTRING("precisionHint","\xe5","\xb5","\x95","\x2c")},
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(Shader_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsObject /*::openfl::display::ShaderData*/ ,(int)offsetof(Shader_obj,__data),HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1")},
	{hx::fsString,(int)offsetof(Shader_obj,__glFragmentSource),HX_HCSTRING("__glFragmentSource","\xf0","\x58","\x5b","\x63")},
	{hx::fsBool,(int)offsetof(Shader_obj,__glSourceDirty),HX_HCSTRING("__glSourceDirty","\xf2","\xa3","\xef","\x41")},
	{hx::fsString,(int)offsetof(Shader_obj,__glVertexSource),HX_HCSTRING("__glVertexSource","\x44","\xf8","\x89","\x8f")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Shader_obj,__isUniform),HX_HCSTRING("__isUniform","\x4a","\x07","\x8f","\xe7")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Shader_obj,__inputBitmapData),HX_HCSTRING("__inputBitmapData","\x43","\xdf","\xf6","\x64")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Shader_obj,__paramBool),HX_HCSTRING("__paramBool","\x37","\x44","\xb6","\x5f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Shader_obj,__paramFloat),HX_HCSTRING("__paramFloat","\xef","\x10","\x64","\xab")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Shader_obj,__paramInt),HX_HCSTRING("__paramInt","\x82","\xcd","\xbd","\x21")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(Shader_obj,__uniformMatrix2),HX_HCSTRING("__uniformMatrix2","\x1d","\x03","\x4d","\x81")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(Shader_obj,__uniformMatrix3),HX_HCSTRING("__uniformMatrix3","\x1e","\x03","\x4d","\x81")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(Shader_obj,__uniformMatrix4),HX_HCSTRING("__uniformMatrix4","\x1f","\x03","\x4d","\x81")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("byteCode","\x55","\x20","\x71","\x42"),
	HX_HCSTRING("glProgram","\xdf","\xd6","\xb3","\xc1"),
	HX_HCSTRING("precisionHint","\xe5","\xb5","\x95","\x2c"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"),
	HX_HCSTRING("__glFragmentSource","\xf0","\x58","\x5b","\x63"),
	HX_HCSTRING("__glSourceDirty","\xf2","\xa3","\xef","\x41"),
	HX_HCSTRING("__glVertexSource","\x44","\xf8","\x89","\x8f"),
	HX_HCSTRING("__isUniform","\x4a","\x07","\x8f","\xe7"),
	HX_HCSTRING("__inputBitmapData","\x43","\xdf","\xf6","\x64"),
	HX_HCSTRING("__paramBool","\x37","\x44","\xb6","\x5f"),
	HX_HCSTRING("__paramFloat","\xef","\x10","\x64","\xab"),
	HX_HCSTRING("__paramInt","\x82","\xcd","\xbd","\x21"),
	HX_HCSTRING("__uniformMatrix2","\x1d","\x03","\x4d","\x81"),
	HX_HCSTRING("__uniformMatrix3","\x1e","\x03","\x4d","\x81"),
	HX_HCSTRING("__uniformMatrix4","\x1f","\x03","\x4d","\x81"),
	HX_HCSTRING("__disable","\xc8","\xba","\xa6","\x32"),
	HX_HCSTRING("__disableGL","\xed","\x3a","\xe1","\x35"),
	HX_HCSTRING("__enable","\xa3","\x19","\xb7","\xa0"),
	HX_HCSTRING("__enableGL","\x88","\x46","\xeb","\x8f"),
	HX_HCSTRING("__init","\x30","\x9e","\xb3","\xf4"),
	HX_HCSTRING("__initGL","\x55","\xc8","\x7b","\x3f"),
	HX_HCSTRING("__processGLData","\x7e","\x0f","\x78","\x7c"),
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	HX_HCSTRING("__updateGL","\x8e","\x8b","\x32","\x1b"),
	HX_HCSTRING("get_data","\xb3","\x11","\x1e","\xc2"),
	HX_HCSTRING("set_data","\x27","\x6b","\x7b","\x70"),
	HX_HCSTRING("get_glFragmentSource","\xd9","\x2a","\x35","\x16"),
	HX_HCSTRING("set_glFragmentSource","\x4d","\xe2","\xec","\xe2"),
	HX_HCSTRING("get_glVertexSource","\xed","\x4d","\xe4","\xf6"),
	HX_HCSTRING("set_glVertexSource","\x61","\x80","\x93","\xd3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
};

#endif

hx::Class Shader_obj::__mClass;

void Shader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Shader","\x0f","\xdf","\x61","\xa7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Shader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
