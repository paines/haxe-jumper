#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_GLUtils
#include <openfl/_internal/stage3D/GLUtils.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
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
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif
namespace openfl{
namespace display3D{
namespace textures{

Void Texture_obj::__construct(::openfl::display3D::Context3D context,int width,int height,Dynamic format,bool optimizeForRenderToTexture,int streamingLevels)
{
HX_STACK_FRAME("openfl.display3D.textures.Texture","new",0xaee720f0,"openfl.display3D.textures.Texture.new","openfl/display3D/textures/Texture.hx",30,0x3ee19dbf)
HX_STACK_THIS(this)
HX_STACK_ARG(context,"context")
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(format,"format")
HX_STACK_ARG(optimizeForRenderToTexture,"optimizeForRenderToTexture")
HX_STACK_ARG(streamingLevels,"streamingLevels")
{
	HX_STACK_LINE(32)
	::openfl::display3D::Context3D tmp = context;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	super::__construct(tmp,(int)3553);
	HX_STACK_LINE(34)
	this->__width = width;
	HX_STACK_LINE(35)
	this->__height = height;
	HX_STACK_LINE(37)
	this->__optimizeForRenderToTexture = optimizeForRenderToTexture;
	HX_STACK_LINE(38)
	this->__streamingLevels = streamingLevels;
	HX_STACK_LINE(40)
	this->uploadFromTypedArray(null());
}
;
	return null();
}

//Texture_obj::~Texture_obj() { }

Dynamic Texture_obj::__CreateEmpty() { return  new Texture_obj; }
hx::ObjectPtr< Texture_obj > Texture_obj::__new(::openfl::display3D::Context3D context,int width,int height,Dynamic format,bool optimizeForRenderToTexture,int streamingLevels)
{  hx::ObjectPtr< Texture_obj > _result_ = new Texture_obj();
	_result_->__construct(context,width,height,format,optimizeForRenderToTexture,streamingLevels);
	return _result_;}

Dynamic Texture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Texture_obj > _result_ = new Texture_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

Void Texture_obj::uploadCompressedTextureFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,hx::Null< bool >  __o_async){
bool async = __o_async.Default(false);
	HX_STACK_FRAME("openfl.display3D.textures.Texture","uploadCompressedTextureFromByteArray",0xe2c5b53e,"openfl.display3D.textures.Texture.uploadCompressedTextureFromByteArray","openfl/display3D/textures/Texture.hx",45,0x3ee19dbf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
	HX_STACK_ARG(async,"async")
{
		HX_STACK_LINE(45)
		::openfl::display3D::textures::Texture _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(47)
		data->position = byteArrayOffset;
		HX_STACK_LINE(48)
		::String tmp = data->readUTFBytes((int)3);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		::String signature = tmp;		HX_STACK_VAR(signature,"signature");
		HX_STACK_LINE(49)
		data->position = byteArrayOffset;
		HX_STACK_LINE(51)
		bool tmp1 = (signature == HX_HCSTRING("ATF","\xf3","\x9b","\x31","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		if ((tmp1)){
			HX_STACK_LINE(53)
			{
				HX_STACK_LINE(53)
				::lime::graphics::opengl::GLTexture tmp2 = this->__textureID;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(53)
				::lime::graphics::opengl::GLTexture texture = tmp2;		HX_STACK_VAR(texture,"texture");
				HX_STACK_LINE(53)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(this->__textureTarget,hx::DynamicPtr((  (((texture == null()))) ? Dynamic(null()) : Dynamic(texture->id) )));
			}
			HX_STACK_LINE(54)
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
			HX_STACK_LINE(56)
			::openfl::utils::ByteArrayData tmp2 = data;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(56)
			int tmp3 = byteArrayOffset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(56)
			this->__uploadATFTextureFromByteArray(tmp2,tmp3);
			HX_STACK_LINE(58)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(this->__textureTarget,hx::DynamicPtr(null()));
			HX_STACK_LINE(59)
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		}
		else{
			HX_STACK_LINE(65)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(this->__textureTarget,hx::DynamicPtr(null()));
			HX_STACK_LINE(66)
			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		}
		HX_STACK_LINE(70)
		bool tmp2 = async;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		if ((tmp2)){

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::openfl::display3D::textures::Texture,_g)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display3D/textures/Texture.hx",72,0x3ee19dbf)
				{
					HX_STACK_LINE(74)
					::openfl::events::Event tmp3 = ::openfl::events::Event_obj::__new(HX_HCSTRING("textureReady","\x88","\x4d","\x5a","\xdf"),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(74)
					_g->dispatchEvent(tmp3);
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(72)
			::haxe::Timer_obj::delay( Dynamic(new _Function_2_1(_g)),(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadCompressedTextureFromByteArray,(void))

Void Texture_obj::uploadFromBitmapData( ::openfl::display::BitmapData source,hx::Null< int >  __o_miplevel,hx::Null< bool >  __o_generateMipmap){
int miplevel = __o_miplevel.Default(0);
bool generateMipmap = __o_generateMipmap.Default(false);
	HX_STACK_FRAME("openfl.display3D.textures.Texture","uploadFromBitmapData",0x5c4e9314,"openfl.display3D.textures.Texture.uploadFromBitmapData","openfl/display3D/textures/Texture.hx",83,0x3ee19dbf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(miplevel,"miplevel")
	HX_STACK_ARG(generateMipmap,"generateMipmap")
{
		HX_STACK_LINE(95)
		this->__miplevel = miplevel;
		HX_STACK_LINE(97)
		::lime::graphics::Image image = source->image;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(99)
		::lime::utils::ArrayBufferView tmp = image->get_data();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(99)
		this->uploadFromTypedArray(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadFromBitmapData,(void))

Void Texture_obj::uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
	HX_STACK_FRAME("openfl.display3D.textures.Texture","uploadFromByteArray",0x0d748876,"openfl.display3D.textures.Texture.uploadFromByteArray","openfl/display3D/textures/Texture.hx",104,0x3ee19dbf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
	HX_STACK_ARG(miplevel,"miplevel")
{
		HX_STACK_LINE(106)
		this->__miplevel = miplevel;
		HX_STACK_LINE(117)
		::lime::utils::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		{
			HX_STACK_LINE(117)
			::openfl::utils::ByteArrayData tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(117)
			::haxe::io::Bytes tmp2 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(117)
			::haxe::io::Bytes buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(117)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(117)
			bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(117)
			if ((tmp3)){
				HX_STACK_LINE(117)
				::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(117)
				this1 = tmp4;
			}
			else{
				HX_STACK_LINE(117)
				bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(117)
				if ((tmp4)){
					HX_STACK_LINE(117)
					::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(117)
					{
						HX_STACK_LINE(117)
						::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(117)
						::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(117)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(117)
						int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(117)
						_this->length = tmp7;
						HX_STACK_LINE(117)
						int tmp8 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(117)
						_this->byteLength = tmp8;
						HX_STACK_LINE(117)
						::haxe::io::Bytes tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(117)
						{
							HX_STACK_LINE(117)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(117)
							int tmp10 = _this->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(117)
							::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(117)
							this2 = tmp11;
							HX_STACK_LINE(117)
							tmp9 = this2;
						}
						HX_STACK_LINE(117)
						_this->buffer = tmp9;
						HX_STACK_LINE(117)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(117)
						tmp5 = _this;
					}
					HX_STACK_LINE(117)
					this1 = tmp5;
				}
				else{
					HX_STACK_LINE(117)
					bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(117)
					if ((tmp5)){
						HX_STACK_LINE(117)
						::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(117)
						{
							HX_STACK_LINE(117)
							::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(117)
							::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(117)
							cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
							HX_STACK_LINE(117)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(117)
							_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
							HX_STACK_LINE(117)
							int tmp8 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(117)
							_this->byteLength = tmp8;
							HX_STACK_LINE(117)
							::haxe::io::Bytes tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(117)
							{
								HX_STACK_LINE(117)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(117)
								int tmp10 = _this->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(117)
								::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(117)
								this2 = tmp11;
								HX_STACK_LINE(117)
								tmp9 = this2;
							}
							HX_STACK_LINE(117)
							_this->buffer = tmp9;
							HX_STACK_LINE(117)
							_this->copyFromArray(((Array< Float >)(array)),null());
							HX_STACK_LINE(117)
							tmp6 = _this;
						}
						HX_STACK_LINE(117)
						this1 = tmp6;
					}
					else{
						HX_STACK_LINE(117)
						bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(117)
						if ((tmp6)){
							HX_STACK_LINE(117)
							::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(117)
							{
								HX_STACK_LINE(117)
								::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(117)
								::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(117)
								::haxe::io::Bytes tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(117)
								::haxe::io::Bytes srcData = tmp9;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(117)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(117)
								int srcLength = tmp10;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(117)
								int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(117)
								int srcByteOffset = tmp11;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(117)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(117)
								int srcElementSize = tmp12;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(117)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(117)
								int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(117)
								int tmp14 = _this->type;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(117)
								bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(117)
								if ((tmp15)){
									HX_STACK_LINE(117)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(117)
									int tmp16 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(117)
									int cloneLength = tmp16;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(117)
									::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(117)
									{
										HX_STACK_LINE(117)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(117)
										int tmp18 = cloneLength;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(117)
										::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(117)
										this2 = tmp19;
										HX_STACK_LINE(117)
										tmp17 = this2;
									}
									HX_STACK_LINE(117)
									_this->buffer = tmp17;
									HX_STACK_LINE(117)
									::haxe::io::Bytes tmp18 = srcData;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(117)
									int tmp19 = srcByteOffset;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(117)
									int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(117)
									_this->buffer->blit((int)0,tmp18,tmp19,tmp20);
								}
								else{
									HX_STACK_LINE(117)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(117)
								int tmp16 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(117)
								_this->byteLength = tmp16;
								HX_STACK_LINE(117)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(117)
								_this->length = srcLength;
								HX_STACK_LINE(117)
								tmp7 = _this;
							}
							HX_STACK_LINE(117)
							this1 = tmp7;
						}
						else{
							HX_STACK_LINE(117)
							bool tmp7 = (buffer != null());		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(117)
							if ((tmp7)){
								HX_STACK_LINE(117)
								::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(117)
								{
									HX_STACK_LINE(117)
									::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(117)
									::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(117)
									bool tmp10 = (byteArrayOffset < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(117)
									if ((tmp10)){
										HX_STACK_LINE(117)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(117)
									int tmp11 = hx::Mod(byteArrayOffset,_this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(117)
									bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(117)
									if ((tmp12)){
										HX_STACK_LINE(117)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(117)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(117)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(117)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(117)
									bool tmp13 = true;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(117)
									if ((tmp13)){
										HX_STACK_LINE(117)
										int tmp14 = (bufferByteLength - byteArrayOffset);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(117)
										newByteLength = tmp14;
										HX_STACK_LINE(117)
										int tmp15 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(117)
										bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(117)
										if ((tmp16)){
											HX_STACK_LINE(117)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(117)
										bool tmp17 = (newByteLength < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(117)
										if ((tmp17)){
											HX_STACK_LINE(117)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(117)
										int tmp14 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(117)
										newByteLength = tmp14;
										HX_STACK_LINE(117)
										int tmp15 = (byteArrayOffset + newByteLength);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(117)
										int newRange = tmp15;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(117)
										bool tmp16 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(117)
										if ((tmp16)){
											HX_STACK_LINE(117)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(117)
									_this->buffer = buffer;
									HX_STACK_LINE(117)
									_this->byteOffset = byteArrayOffset;
									HX_STACK_LINE(117)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(117)
									Float tmp14 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(117)
									int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(117)
									_this->length = tmp15;
									HX_STACK_LINE(117)
									tmp8 = _this;
								}
								HX_STACK_LINE(117)
								this1 = tmp8;
							}
							else{
								HX_STACK_LINE(117)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
							}
						}
					}
				}
			}
			HX_STACK_LINE(117)
			tmp = this1;
		}
		HX_STACK_LINE(117)
		this->uploadFromTypedArray(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadFromByteArray,(void))

Void Texture_obj::uploadFromTypedArray( ::lime::utils::ArrayBufferView data){
{
		HX_STACK_FRAME("openfl.display3D.textures.Texture","uploadFromTypedArray",0x20dd8a2a,"openfl.display3D.textures.Texture.uploadFromTypedArray","openfl/display3D/textures/Texture.hx",122,0x3ee19dbf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			::lime::graphics::opengl::GLTexture tmp = this->__textureID;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(124)
			::lime::graphics::opengl::GLTexture texture = tmp;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(124)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(this->__textureTarget,hx::DynamicPtr((  (((texture == null()))) ? Dynamic(null()) : Dynamic(texture->id) )));
		}
		HX_STACK_LINE(125)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		HX_STACK_LINE(127)
		{
			HX_STACK_LINE(127)
			bool tmp = (data == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(127)
			::haxe::io::Bytes tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(127)
			if ((tmp)){
				HX_STACK_LINE(127)
				tmp1 = null();
			}
			else{
				HX_STACK_LINE(127)
				tmp1 = data->buffer;
			}
			HX_STACK_LINE(127)
			::haxe::io::Bytes buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(127)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_image_2d.call(this->__textureTarget,(int)0,this->__internalFormat,this->__width,this->__height,(int)0,this->__format,(int)5121,hx::DynamicPtr(buffer),(  (((data == null()))) ? int((int)0) : int(data->byteOffset) ));
		}
		HX_STACK_LINE(128)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		HX_STACK_LINE(130)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(this->__textureTarget,hx::DynamicPtr(null()));
		HX_STACK_LINE(131)
		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
		HX_STACK_LINE(133)
		int tmp = this->__width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		int tmp1 = this->__height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(133)
		int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(133)
		int tmp3 = (tmp2 * (int)4);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(133)
		int memUsage = tmp3;		HX_STACK_VAR(memUsage,"memUsage");
		HX_STACK_LINE(134)
		int tmp4 = memUsage;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(134)
		this->__trackMemoryUsage(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,uploadFromTypedArray,(void))

Void Texture_obj::__uploadATFTextureFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset){
{
		HX_STACK_FRAME("openfl.display3D.textures.Texture","__uploadATFTextureFromByteArray",0x7de383ee,"openfl.display3D.textures.Texture.__uploadATFTextureFromByteArray","openfl/display3D/textures/Texture.hx",196,0x3ee19dbf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
		HX_STACK_LINE(198)
		data->position = byteArrayOffset;
		HX_STACK_LINE(200)
		::openfl::utils::ByteArrayData tmp = data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(200)
		int tmp1 = ::openfl::display3D::textures::Texture_obj::__getATFVersion(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(200)
		int version = tmp1;		HX_STACK_VAR(version,"version");
		HX_STACK_LINE(201)
		bool tmp2 = (version == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(201)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(201)
		if ((tmp2)){
			HX_STACK_LINE(201)
			::openfl::utils::ByteArrayData tmp4 = data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(201)
			tmp3 = ::openfl::display3D::textures::Texture_obj::__readUInt24(tmp4);
		}
		else{
			HX_STACK_LINE(201)
			::openfl::utils::ByteArrayData tmp4 = data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(201)
			tmp3 = ::openfl::display3D::textures::Texture_obj::__readUInt32(tmp4);
		}
		HX_STACK_LINE(201)
		int length = tmp3;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(203)
		int tmp4 = (byteArrayOffset + length);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(203)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(203)
		tmp5 = hx::TCast< ::Int >::cast(tmp4);
		HX_STACK_LINE(203)
		::openfl::utils::ByteArrayData tmp6 = data;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(203)
		int tmp7 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(203)
		bool tmp8 = (tmp5 > tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(203)
		if ((tmp8)){
			HX_STACK_LINE(205)
			::openfl::errors::IllegalOperationError tmp9 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("ATF length exceeds byte array length","\xd7","\x29","\x45","\x0f"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(205)
			HX_STACK_DO_THROW(tmp9);
		}
		HX_STACK_LINE(209)
		int tmp9 = data->readUnsignedByte();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(209)
		int tdata = tmp9;		HX_STACK_VAR(tdata,"tdata");
		HX_STACK_LINE(210)
		int tmp10 = (int(tdata) >> int((int)7));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(210)
		int type = tmp10;		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(212)
		bool tmp11 = (type != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(212)
		if ((tmp11)){
			HX_STACK_LINE(214)
			::openfl::errors::IllegalOperationError tmp12 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("ATF Cube maps are not supported","\x0a","\xda","\x6c","\x45"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(214)
			HX_STACK_DO_THROW(tmp12);
		}
		HX_STACK_LINE(224)
		int tmp12 = data->readUnsignedByte();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(224)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(224)
		int tmp14 = (int((int)1) << int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(224)
		int width = tmp14;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(225)
		int tmp15 = data->readUnsignedByte();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(225)
		int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(225)
		int tmp17 = (int((int)1) << int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(225)
		int height = tmp17;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(227)
		int tmp18 = width;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(227)
		int tmp19 = this->__width;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(227)
		bool tmp20 = (tmp18 != tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(227)
		bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(227)
		bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(227)
		if ((tmp21)){
			HX_STACK_LINE(227)
			int tmp23 = height;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(227)
			int tmp24 = this->__height;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(227)
			int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(227)
			tmp22 = (tmp23 != tmp25);
		}
		else{
			HX_STACK_LINE(227)
			tmp22 = true;
		}
		HX_STACK_LINE(227)
		if ((tmp22)){
			HX_STACK_LINE(229)
			::openfl::errors::IllegalOperationError tmp23 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("ATF width and height dont match","\x3f","\x49","\x15","\x70"));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(229)
			HX_STACK_DO_THROW(tmp23);
		}
		HX_STACK_LINE(233)
		int tmp23 = data->readUnsignedByte();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(233)
		int mipCount = tmp23;		HX_STACK_VAR(mipCount,"mipCount");
		HX_STACK_LINE(235)
		{
			HX_STACK_LINE(235)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(235)
			while((true)){
				HX_STACK_LINE(235)
				bool tmp24 = (_g < mipCount);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(235)
				bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(235)
				if ((tmp25)){
					HX_STACK_LINE(235)
					break;
				}
				HX_STACK_LINE(235)
				int tmp26 = (_g)++;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(235)
				int level = tmp26;		HX_STACK_VAR(level,"level");
				HX_STACK_LINE(237)
				{
					HX_STACK_LINE(237)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(237)
					while((true)){
						HX_STACK_LINE(237)
						bool tmp27 = (_g1 < (int)3);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(237)
						bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(237)
						if ((tmp28)){
							HX_STACK_LINE(237)
							break;
						}
						HX_STACK_LINE(237)
						int tmp29 = (_g1)++;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(237)
						int gpuFormat = tmp29;		HX_STACK_VAR(gpuFormat,"gpuFormat");
						HX_STACK_LINE(239)
						bool tmp30 = (version == (int)0);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(239)
						int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(239)
						if ((tmp30)){
							HX_STACK_LINE(239)
							::openfl::utils::ByteArrayData tmp32 = data;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(239)
							tmp31 = ::openfl::display3D::textures::Texture_obj::__readUInt24(tmp32);
						}
						else{
							HX_STACK_LINE(239)
							::openfl::utils::ByteArrayData tmp32 = data;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(239)
							tmp31 = ::openfl::display3D::textures::Texture_obj::__readUInt32(tmp32);
						}
						HX_STACK_LINE(239)
						int blockLength = tmp31;		HX_STACK_VAR(blockLength,"blockLength");
						HX_STACK_LINE(247)
						bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(247)
						{
							HX_STACK_LINE(247)
							bool tmp33 = (blockLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(247)
							bool aNeg = tmp33;		HX_STACK_VAR(aNeg,"aNeg");
							HX_STACK_LINE(247)
							bool tmp34 = ((int)0 < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(247)
							bool bNeg = tmp34;		HX_STACK_VAR(bNeg,"bNeg");
							HX_STACK_LINE(247)
							bool tmp35 = (aNeg != bNeg);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(247)
							if ((tmp35)){
								HX_STACK_LINE(247)
								tmp32 = aNeg;
							}
							else{
								HX_STACK_LINE(247)
								tmp32 = (blockLength > (int)0);
							}
						}
						HX_STACK_LINE(247)
						if ((tmp32)){
							HX_STACK_LINE(249)
							bool tmp33 = (gpuFormat == (int)1);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(249)
							if ((tmp33)){
							}
							else{
								HX_STACK_LINE(253)
								bool tmp34 = (gpuFormat == (int)2);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(253)
								if ((tmp34)){
								}
							}
						}
						HX_STACK_LINE(263)
						int tmp33 = (data->position + blockLength);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(263)
						data->position = tmp33;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,__uploadATFTextureFromByteArray,(void))

bool Texture_obj::__lowMemoryMode;

int Texture_obj::__getATFVersion( ::openfl::utils::ByteArrayData data){
	HX_STACK_FRAME("openfl.display3D.textures.Texture","__getATFVersion",0x0832a0eb,"openfl.display3D.textures.Texture.__getATFVersion","openfl/display3D/textures/Texture.hx",139,0x3ee19dbf)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(141)
	::String tmp = data->readUTFBytes((int)3);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	::String signature = tmp;		HX_STACK_VAR(signature,"signature");
	HX_STACK_LINE(143)
	bool tmp1 = (signature != HX_HCSTRING("ATF","\xf3","\x9b","\x31","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(143)
	if ((tmp1)){
		HX_STACK_LINE(145)
		::openfl::errors::IllegalOperationError tmp2 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("ATF signature not found","\xa0","\xf7","\x2f","\x3a"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(145)
		HX_STACK_DO_THROW(tmp2);
	}
	HX_STACK_LINE(149)
	int position = data->position;		HX_STACK_VAR(position,"position");
	HX_STACK_LINE(150)
	int version = (int)0;		HX_STACK_VAR(version,"version");
	HX_STACK_LINE(152)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(152)
	{
		HX_STACK_LINE(152)
		int tmp3 = (data->length - data->position);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(152)
		int a = tmp3;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(152)
		bool tmp4 = (a < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(152)
		bool aNeg = tmp4;		HX_STACK_VAR(aNeg,"aNeg");
		HX_STACK_LINE(152)
		bool tmp5 = ((int)5 < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(152)
		bool bNeg = tmp5;		HX_STACK_VAR(bNeg,"bNeg");
		HX_STACK_LINE(152)
		bool tmp6 = (aNeg != bNeg);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(152)
		if ((tmp6)){
			HX_STACK_LINE(152)
			tmp2 = aNeg;
		}
		else{
			HX_STACK_LINE(152)
			tmp2 = (a >= (int)5);
		}
	}
	HX_STACK_LINE(152)
	if ((tmp2)){
		HX_STACK_LINE(154)
		::openfl::utils::ByteArrayData tmp3 = data;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(154)
		int tmp4 = ::openfl::display3D::textures::Texture_obj::__readUInt32(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(154)
		int sig = tmp4;		HX_STACK_VAR(sig,"sig");
		HX_STACK_LINE(156)
		bool tmp5 = (sig == (int)255);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(156)
		if ((tmp5)){
			HX_STACK_LINE(158)
			int tmp6 = data->readUnsignedByte();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(158)
			version = tmp6;
		}
		else{
			HX_STACK_LINE(162)
			data->position = position;
		}
	}
	HX_STACK_LINE(168)
	int tmp3 = version;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(168)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,__getATFVersion,return )

int Texture_obj::__readUInt24( ::openfl::utils::ByteArrayData data){
	HX_STACK_FRAME("openfl.display3D.textures.Texture","__readUInt24",0x2184b642,"openfl.display3D.textures.Texture.__readUInt24","openfl/display3D/textures/Texture.hx",173,0x3ee19dbf)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(175)
	int value;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(176)
	int tmp = data->readUnsignedByte();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(176)
	int tmp1 = (int(tmp) << int((int)16));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(176)
	value = tmp1;
	HX_STACK_LINE(177)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(177)
	{
		HX_STACK_LINE(177)
		int tmp3 = data->readUnsignedByte();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(177)
		int tmp4 = (int(tmp3) << int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(177)
		int b = tmp4;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(177)
		tmp2 = (int(value) | int(b));
	}
	HX_STACK_LINE(177)
	value = tmp2;
	HX_STACK_LINE(178)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(178)
	{
		HX_STACK_LINE(178)
		int tmp4 = data->readUnsignedByte();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(178)
		int b = tmp4;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(178)
		tmp3 = (int(value) | int(b));
	}
	HX_STACK_LINE(178)
	value = tmp3;
	HX_STACK_LINE(179)
	int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(179)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,__readUInt24,return )

int Texture_obj::__readUInt32( ::openfl::utils::ByteArrayData data){
	HX_STACK_FRAME("openfl.display3D.textures.Texture","__readUInt32",0x2184b71f,"openfl.display3D.textures.Texture.__readUInt32","openfl/display3D/textures/Texture.hx",184,0x3ee19dbf)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(186)
	int value;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(187)
	int tmp = data->readUnsignedByte();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	int tmp1 = (int(tmp) << int((int)24));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(187)
	value = tmp1;
	HX_STACK_LINE(188)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(188)
	{
		HX_STACK_LINE(188)
		int tmp3 = data->readUnsignedByte();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(188)
		int tmp4 = (int(tmp3) << int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(188)
		int b = tmp4;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(188)
		tmp2 = (int(value) | int(b));
	}
	HX_STACK_LINE(188)
	value = tmp2;
	HX_STACK_LINE(189)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(189)
	{
		HX_STACK_LINE(189)
		int tmp4 = data->readUnsignedByte();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(189)
		int tmp5 = (int(tmp4) << int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(189)
		int b = tmp5;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(189)
		tmp3 = (int(value) | int(b));
	}
	HX_STACK_LINE(189)
	value = tmp3;
	HX_STACK_LINE(190)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(190)
	{
		HX_STACK_LINE(190)
		int tmp5 = data->readUnsignedByte();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(190)
		int b = tmp5;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(190)
		tmp4 = (int(value) | int(b));
	}
	HX_STACK_LINE(190)
	value = tmp4;
	HX_STACK_LINE(191)
	int tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(191)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,__readUInt32,return )


Texture_obj::Texture_obj()
{
}

Dynamic Texture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__width") ) { return __width; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__height") ) { return __height; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__miplevel") ) { return __miplevel; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__streamingLevels") ) { return __streamingLevels; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return uploadFromBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"uploadFromTypedArray") ) { return uploadFromTypedArray_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"__optimizeForRenderToTexture") ) { return __optimizeForRenderToTexture; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"__uploadATFTextureFromByteArray") ) { return __uploadATFTextureFromByteArray_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"uploadCompressedTextureFromByteArray") ) { return uploadCompressedTextureFromByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Texture_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"__readUInt24") ) { outValue = __readUInt24_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__readUInt32") ) { outValue = __readUInt32_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__lowMemoryMode") ) { outValue = __lowMemoryMode; return true;  }
		if (HX_FIELD_EQ(inName,"__getATFVersion") ) { outValue = __getATFVersion_dyn(); return true;  }
	}
	return false;
}

Dynamic Texture_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__width") ) { __width=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__height") ) { __height=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__miplevel") ) { __miplevel=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__streamingLevels") ) { __streamingLevels=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"__optimizeForRenderToTexture") ) { __optimizeForRenderToTexture=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Texture_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"__lowMemoryMode") ) { __lowMemoryMode=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void Texture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"));
	outFields->push(HX_HCSTRING("__miplevel","\x90","\x3e","\x5c","\x46"));
	outFields->push(HX_HCSTRING("__optimizeForRenderToTexture","\xbe","\xd4","\x90","\xb3"));
	outFields->push(HX_HCSTRING("__streamingLevels","\x51","\xa1","\xde","\x07"));
	outFields->push(HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Texture_obj,__height),HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa")},
	{hx::fsInt,(int)offsetof(Texture_obj,__miplevel),HX_HCSTRING("__miplevel","\x90","\x3e","\x5c","\x46")},
	{hx::fsBool,(int)offsetof(Texture_obj,__optimizeForRenderToTexture),HX_HCSTRING("__optimizeForRenderToTexture","\xbe","\xd4","\x90","\xb3")},
	{hx::fsInt,(int)offsetof(Texture_obj,__streamingLevels),HX_HCSTRING("__streamingLevels","\x51","\xa1","\xde","\x07")},
	{hx::fsInt,(int)offsetof(Texture_obj,__width),HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Texture_obj::__lowMemoryMode,HX_HCSTRING("__lowMemoryMode","\x98","\x71","\x9e","\x43")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"),
	HX_HCSTRING("__miplevel","\x90","\x3e","\x5c","\x46"),
	HX_HCSTRING("__optimizeForRenderToTexture","\xbe","\xd4","\x90","\xb3"),
	HX_HCSTRING("__streamingLevels","\x51","\xa1","\xde","\x07"),
	HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"),
	HX_HCSTRING("uploadCompressedTextureFromByteArray","\xce","\xc7","\x86","\xc5"),
	HX_HCSTRING("uploadFromBitmapData","\xa4","\x85","\x65","\x0d"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromTypedArray","\xba","\x7c","\xf4","\xd1"),
	HX_HCSTRING("__uploadATFTextureFromByteArray","\x5e","\x7b","\xdb","\xc9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Texture_obj::__lowMemoryMode,"__lowMemoryMode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Texture_obj::__lowMemoryMode,"__lowMemoryMode");
};

#endif

hx::Class Texture_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__lowMemoryMode","\x98","\x71","\x9e","\x43"),
	HX_HCSTRING("__getATFVersion","\x5b","\xb8","\xa0","\xe5"),
	HX_HCSTRING("__readUInt24","\xd2","\x98","\x1e","\x4b"),
	HX_HCSTRING("__readUInt32","\xaf","\x99","\x1e","\x4b"),
	::String(null()) };

void Texture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.textures.Texture","\xfe","\x28","\x30","\xf1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Texture_obj::__GetStatic;
	__mClass->mSetStaticField = &Texture_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Texture_obj >;
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

void Texture_obj::__boot()
{
	__lowMemoryMode= false;
}

} // end namespace openfl
} // end namespace display3D
} // end namespace textures
