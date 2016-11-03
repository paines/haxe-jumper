#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_haxe_crypto_BaseCode
#include <haxe/crypto/BaseCode.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageChannel
#include <lime/graphics/ImageChannel.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageType
#include <lime/graphics/ImageType.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_graphics_format_BMP
#include <lime/graphics/format/BMP.h>
#endif
#ifndef INCLUDED_lime_graphics_format_BMPType
#include <lime/graphics/format/BMPType.h>
#endif
#ifndef INCLUDED_lime_graphics_format_JPEG
#include <lime/graphics/format/JPEG.h>
#endif
#ifndef INCLUDED_lime_graphics_format_PNG
#include <lime/graphics/format/PNG.h>
#endif
#ifndef INCLUDED_lime_graphics_utils_ImageCanvasUtil
#include <lime/graphics/utils/ImageCanvasUtil.h>
#endif
#ifndef INCLUDED_lime_graphics_utils_ImageDataUtil
#include <lime/graphics/utils/ImageDataUtil.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_math__ColorMatrix_ColorMatrix_Impl_
#include <lime/math/_ColorMatrix/ColorMatrix_Impl_.h>
#endif
#ifndef INCLUDED_lime_system_CFFI
#include <lime/system/CFFI.h>
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
namespace lime{
namespace graphics{

Void Image_obj::__construct(::lime::graphics::ImageBuffer buffer,hx::Null< int >  __o_offsetX,hx::Null< int >  __o_offsetY,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic color,::lime::graphics::ImageType type)
{
HX_STACK_FRAME("lime.graphics.Image","new",0x344ae603,"lime.graphics.Image.new","lime/graphics/Image.hx",89,0xc7b862ad)
HX_STACK_THIS(this)
HX_STACK_ARG(buffer,"buffer")
HX_STACK_ARG(__o_offsetX,"offsetX")
HX_STACK_ARG(__o_offsetY,"offsetY")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
HX_STACK_ARG(color,"color")
HX_STACK_ARG(type,"type")
int offsetX = __o_offsetX.Default(0);
int offsetY = __o_offsetY.Default(0);
int width = __o_width.Default(-1);
int height = __o_height.Default(-1);
{
	HX_STACK_LINE(91)
	this->offsetX = offsetX;
	HX_STACK_LINE(92)
	this->offsetY = offsetY;
	HX_STACK_LINE(93)
	this->width = width;
	HX_STACK_LINE(94)
	this->height = height;
	HX_STACK_LINE(96)
	this->version = (int)0;
	HX_STACK_LINE(98)
	bool tmp = (type == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(98)
	if ((tmp)){
		HX_STACK_LINE(100)
		::lime::app::Application tmp1 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(100)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(100)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(100)
		if ((tmp2)){
			HX_STACK_LINE(100)
			::lime::app::Application tmp4 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(100)
			::lime::app::Application tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(100)
			::lime::graphics::Renderer tmp6 = tmp5->__renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(100)
			::lime::graphics::Renderer tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(100)
			tmp3 = (tmp7 != null());
		}
		else{
			HX_STACK_LINE(100)
			tmp3 = false;
		}
		HX_STACK_LINE(100)
		if ((tmp3)){
			HX_STACK_LINE(102)
			::lime::graphics::ImageType tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(102)
			{
				HX_STACK_LINE(102)
				::lime::app::Application tmp5 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(102)
				::lime::graphics::Renderer tmp6 = tmp5->__renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(102)
				::lime::graphics::RenderContext _g = tmp6->context;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(102)
				switch( (int)(_g->__Index())){
					case (int)2: case (int)1: {
						HX_STACK_LINE(104)
						tmp4 = ::lime::graphics::ImageType_obj::CANVAS;
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(105)
						tmp4 = ::lime::graphics::ImageType_obj::FLASH;
					}
					;break;
					default: {
						HX_STACK_LINE(106)
						tmp4 = ::lime::graphics::ImageType_obj::DATA;
					}
				}
			}
			HX_STACK_LINE(102)
			this->type = tmp4;
		}
		else{
			HX_STACK_LINE(112)
			this->type = ::lime::graphics::ImageType_obj::DATA;
		}
	}
	else{
		HX_STACK_LINE(118)
		this->type = type;
	}
	HX_STACK_LINE(122)
	bool tmp1 = (buffer == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(122)
	if ((tmp1)){
		HX_STACK_LINE(124)
		bool tmp2 = (width > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(124)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(124)
		if ((tmp2)){
			HX_STACK_LINE(124)
			tmp3 = (height > (int)0);
		}
		else{
			HX_STACK_LINE(124)
			tmp3 = false;
		}
		HX_STACK_LINE(124)
		if ((tmp3)){
			HX_STACK_LINE(126)
			::lime::graphics::ImageType tmp4 = this->type;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(126)
			::lime::graphics::ImageType _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(126)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(130)
					::lime::graphics::ImageBuffer tmp5 = ::lime::graphics::ImageBuffer_obj::__new(null(),width,height,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(130)
					this->buffer = tmp5;
					HX_STACK_LINE(131)
					int tmp6 = width;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(131)
					int tmp7 = height;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(131)
					::lime::graphics::utils::ImageCanvasUtil_obj::createCanvas(hx::ObjectPtr<OBJ_>(this),tmp6,tmp7);
					HX_STACK_LINE(133)
					bool tmp8 = (color != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(133)
					if ((tmp8)){
						HX_STACK_LINE(135)
						::lime::math::Rectangle tmp9 = ::lime::math::Rectangle_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(135)
						Dynamic tmp10 = color;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(135)
						this->fillRect(tmp9,tmp10,null());
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(141)
					::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(141)
					{
						HX_STACK_LINE(141)
						int tmp6 = (width * height);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(141)
						int tmp7 = (tmp6 * (int)4);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(141)
						Dynamic elements = tmp7;		HX_STACK_VAR(elements,"elements");
						HX_STACK_LINE(141)
						::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(141)
						bool tmp8 = (elements != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(141)
						if ((tmp8)){
							HX_STACK_LINE(141)
							::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new(elements,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(141)
							this1 = tmp9;
						}
						else{
							HX_STACK_LINE(141)
							bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(141)
							if ((tmp9)){
								HX_STACK_LINE(141)
								::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(141)
								{
									HX_STACK_LINE(141)
									::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(141)
									::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(141)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(141)
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(141)
									_this->length = tmp12;
									HX_STACK_LINE(141)
									int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(141)
									_this->byteLength = tmp13;
									HX_STACK_LINE(141)
									::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(141)
									{
										HX_STACK_LINE(141)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(141)
										int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(141)
										::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(141)
										this2 = tmp16;
										HX_STACK_LINE(141)
										tmp14 = this2;
									}
									HX_STACK_LINE(141)
									_this->buffer = tmp14;
									HX_STACK_LINE(141)
									_this->copyFromArray(((Array< Float >)(null())),null());
									HX_STACK_LINE(141)
									tmp10 = _this;
								}
								HX_STACK_LINE(141)
								this1 = tmp10;
							}
							else{
								HX_STACK_LINE(141)
								bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(141)
								if ((tmp10)){
									HX_STACK_LINE(141)
									::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(141)
									{
										HX_STACK_LINE(141)
										::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(141)
										::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(141)
										cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
										HX_STACK_LINE(141)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(141)
										_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
										HX_STACK_LINE(141)
										int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(141)
										_this->byteLength = tmp13;
										HX_STACK_LINE(141)
										::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(141)
										{
											HX_STACK_LINE(141)
											::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(141)
											int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(141)
											::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(141)
											this2 = tmp16;
											HX_STACK_LINE(141)
											tmp14 = this2;
										}
										HX_STACK_LINE(141)
										_this->buffer = tmp14;
										HX_STACK_LINE(141)
										_this->copyFromArray(((Array< Float >)(array)),null());
										HX_STACK_LINE(141)
										tmp11 = _this;
									}
									HX_STACK_LINE(141)
									this1 = tmp11;
								}
								else{
									HX_STACK_LINE(141)
									bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(141)
									if ((tmp11)){
										HX_STACK_LINE(141)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(141)
										{
											HX_STACK_LINE(141)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(141)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(141)
											::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(141)
											::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(141)
											int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(141)
											int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(141)
											int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(141)
											int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(141)
											int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(141)
											int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(141)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(141)
											int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(141)
											int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(141)
											bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(141)
											if ((tmp20)){
												HX_STACK_LINE(141)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(141)
												int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(141)
												int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(141)
												::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(141)
												{
													HX_STACK_LINE(141)
													::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
													HX_STACK_LINE(141)
													int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(141)
													::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(141)
													this2 = tmp24;
													HX_STACK_LINE(141)
													tmp22 = this2;
												}
												HX_STACK_LINE(141)
												_this->buffer = tmp22;
												HX_STACK_LINE(141)
												::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(141)
												int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(141)
												int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(141)
												_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
											}
											else{
												HX_STACK_LINE(141)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(141)
											int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(141)
											_this->byteLength = tmp21;
											HX_STACK_LINE(141)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(141)
											_this->length = srcLength;
											HX_STACK_LINE(141)
											tmp12 = _this;
										}
										HX_STACK_LINE(141)
										this1 = tmp12;
									}
									else{
										HX_STACK_LINE(141)
										bool tmp12 = false;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(141)
										if ((tmp12)){
											HX_STACK_LINE(141)
											::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(141)
											{
												HX_STACK_LINE(141)
												::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp14,"tmp14");
												HX_STACK_LINE(141)
												::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(141)
												bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
												HX_STACK_LINE(141)
												if ((tmp15)){
													HX_STACK_LINE(141)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(141)
												int tmp16 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(141)
												bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
												HX_STACK_LINE(141)
												if ((tmp17)){
													HX_STACK_LINE(141)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(141)
												int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(141)
												int bufferByteLength = tmp18;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(141)
												int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(141)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(141)
												bool tmp19 = true;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(141)
												if ((tmp19)){
													HX_STACK_LINE(141)
													int tmp20 = bufferByteLength;		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(141)
													newByteLength = tmp20;
													HX_STACK_LINE(141)
													int tmp21 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(141)
													bool tmp22 = (tmp21 != (int)0);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(141)
													if ((tmp22)){
														HX_STACK_LINE(141)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
													HX_STACK_LINE(141)
													bool tmp23 = (newByteLength < (int)0);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(141)
													if ((tmp23)){
														HX_STACK_LINE(141)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(141)
													int tmp20 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
													HX_STACK_LINE(141)
													newByteLength = tmp20;
													HX_STACK_LINE(141)
													int tmp21 = newByteLength;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(141)
													int newRange = tmp21;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(141)
													bool tmp22 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(141)
													if ((tmp22)){
														HX_STACK_LINE(141)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(141)
												_this->buffer = null();
												HX_STACK_LINE(141)
												_this->byteOffset = (int)0;
												HX_STACK_LINE(141)
												_this->byteLength = newByteLength;
												HX_STACK_LINE(141)
												Float tmp20 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(141)
												int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(141)
												_this->length = tmp21;
												HX_STACK_LINE(141)
												tmp13 = _this;
											}
											HX_STACK_LINE(141)
											this1 = tmp13;
										}
										else{
											HX_STACK_LINE(141)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
										}
									}
								}
							}
						}
						HX_STACK_LINE(141)
						tmp5 = this1;
					}
					HX_STACK_LINE(141)
					int tmp6 = width;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(141)
					int tmp7 = height;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(141)
					::lime::graphics::ImageBuffer tmp8 = ::lime::graphics::ImageBuffer_obj::__new(tmp5,tmp6,tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(141)
					this->buffer = tmp8;
					HX_STACK_LINE(143)
					bool tmp9 = (color != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(143)
					if ((tmp9)){
						HX_STACK_LINE(145)
						::lime::math::Rectangle tmp10 = ::lime::math::Rectangle_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(145)
						Dynamic tmp11 = color;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(145)
						this->fillRect(tmp10,tmp11,null());
					}
				}
				;break;
				case (int)2: {
				}
				;break;
				default: {
				}
			}
		}
	}
	else{
		HX_STACK_LINE(164)
		::lime::graphics::ImageBuffer tmp2 = buffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		this->__fromImageBuffer(tmp2);
	}
}
;
	return null();
}

//Image_obj::~Image_obj() { }

Dynamic Image_obj::__CreateEmpty() { return  new Image_obj; }
hx::ObjectPtr< Image_obj > Image_obj::__new(::lime::graphics::ImageBuffer buffer,hx::Null< int >  __o_offsetX,hx::Null< int >  __o_offsetY,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic color,::lime::graphics::ImageType type)
{  hx::ObjectPtr< Image_obj > _result_ = new Image_obj();
	_result_->__construct(buffer,__o_offsetX,__o_offsetY,__o_width,__o_height,color,type);
	return _result_;}

Dynamic Image_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Image_obj > _result_ = new Image_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _result_;}

::lime::graphics::Image Image_obj::clone( ){
	HX_STACK_FRAME("lime.graphics.Image","clone",0xb88517c0,"lime.graphics.Image.clone","lime/graphics/Image.hx",171,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(173)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(173)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(173)
	if ((tmp1)){
		HX_STACK_LINE(187)
		::lime::graphics::ImageBuffer tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(187)
		::lime::graphics::ImageBuffer tmp3 = tmp2->clone();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(187)
		int tmp4 = this->offsetX;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(187)
		int tmp5 = this->offsetY;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(187)
		int tmp6 = this->width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(187)
		int tmp7 = this->height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(187)
		::lime::graphics::ImageType tmp8 = this->type;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(187)
		::lime::graphics::Image tmp9 = ::lime::graphics::Image_obj::__new(tmp3,tmp4,tmp5,tmp6,tmp7,null(),tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(187)
		::lime::graphics::Image image = tmp9;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(188)
		int tmp10 = this->version;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(188)
		image->version = tmp10;
		HX_STACK_LINE(189)
		::lime::graphics::Image tmp11 = image;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(189)
		return tmp11;
	}
	else{
		HX_STACK_LINE(193)
		int tmp2 = this->offsetX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(193)
		int tmp3 = this->offsetY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(193)
		int tmp4 = this->width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(193)
		int tmp5 = this->height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(193)
		::lime::graphics::ImageType tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(193)
		::lime::graphics::Image tmp7 = ::lime::graphics::Image_obj::__new(null(),tmp2,tmp3,tmp4,tmp5,null(),tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(193)
		return tmp7;
	}
	HX_STACK_LINE(173)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,clone,return )

Void Image_obj::colorTransform( ::lime::math::Rectangle rect,::lime::utils::ArrayBufferView colorMatrix){
{
		HX_STACK_FRAME("lime.graphics.Image","colorTransform",0xaf89aec6,"lime.graphics.Image.colorTransform","lime/graphics/Image.hx",200,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(colorMatrix,"colorMatrix")
		HX_STACK_LINE(202)
		::lime::math::Rectangle tmp = rect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(202)
		::lime::math::Rectangle tmp1 = this->__clipRect(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(202)
		rect = tmp1;
		HX_STACK_LINE(203)
		::lime::graphics::ImageBuffer tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(203)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(203)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(203)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(203)
		if ((tmp4)){
			HX_STACK_LINE(203)
			tmp5 = (rect == null());
		}
		else{
			HX_STACK_LINE(203)
			tmp5 = true;
		}
		HX_STACK_LINE(203)
		if ((tmp5)){
			HX_STACK_LINE(203)
			return null();
		}
		HX_STACK_LINE(205)
		{
			HX_STACK_LINE(205)
			::lime::graphics::ImageType tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(205)
			::lime::graphics::ImageType _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(205)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(209)
					::lime::math::Rectangle tmp7 = rect;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(209)
					::lime::utils::ArrayBufferView tmp8 = colorMatrix;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(209)
					::lime::graphics::utils::ImageCanvasUtil_obj::colorTransform(hx::ObjectPtr<OBJ_>(this),tmp7,tmp8);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(217)
					::lime::math::Rectangle tmp7 = rect;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(217)
					::lime::utils::ArrayBufferView tmp8 = colorMatrix;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(217)
					::lime::graphics::utils::ImageDataUtil_obj::colorTransform(hx::ObjectPtr<OBJ_>(this),tmp7,tmp8);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(221)
					int tmp7 = this->offsetX;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(221)
					int tmp8 = this->offsetY;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(221)
					rect->offset(tmp7,tmp8);
					HX_STACK_LINE(222)
					::lime::graphics::ImageBuffer tmp9 = this->buffer;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(222)
					::lime::utils::ArrayBufferView tmp10 = colorMatrix;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(222)
					tmp9->__srcBitmapData->__Field(HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"), hx::paccDynamic )(rect->__toFlashRectangle(),::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::__toFlashColorTransform(tmp10));
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,colorTransform,(void))

Void Image_obj::copyChannel( ::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::ImageChannel sourceChannel,::lime::graphics::ImageChannel destChannel){
{
		HX_STACK_FRAME("lime.graphics.Image","copyChannel",0xc3306e31,"lime.graphics.Image.copyChannel","lime/graphics/Image.hx",231,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(sourceChannel,"sourceChannel")
		HX_STACK_ARG(destChannel,"destChannel")
		HX_STACK_LINE(233)
		::lime::math::Rectangle tmp = sourceRect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(233)
		::lime::math::Rectangle tmp1 = this->__clipRect(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(233)
		sourceRect = tmp1;
		HX_STACK_LINE(234)
		::lime::graphics::ImageBuffer tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(234)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(234)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(234)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(234)
		if ((tmp4)){
			HX_STACK_LINE(234)
			tmp5 = (sourceRect == null());
		}
		else{
			HX_STACK_LINE(234)
			tmp5 = true;
		}
		HX_STACK_LINE(234)
		if ((tmp5)){
			HX_STACK_LINE(234)
			return null();
		}
		HX_STACK_LINE(236)
		bool tmp6 = (destChannel == ::lime::graphics::ImageChannel_obj::ALPHA);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(236)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(236)
		if ((tmp6)){
			HX_STACK_LINE(236)
			bool tmp8 = this->get_transparent();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(236)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(236)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(236)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(236)
			tmp7 = false;
		}
		HX_STACK_LINE(236)
		if ((tmp7)){
			HX_STACK_LINE(236)
			return null();
		}
		HX_STACK_LINE(237)
		bool tmp8 = (sourceRect->width <= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(237)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(237)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(237)
		if ((tmp9)){
			HX_STACK_LINE(237)
			tmp10 = (sourceRect->height <= (int)0);
		}
		else{
			HX_STACK_LINE(237)
			tmp10 = true;
		}
		HX_STACK_LINE(237)
		if ((tmp10)){
			HX_STACK_LINE(237)
			return null();
		}
		HX_STACK_LINE(238)
		Float tmp11 = (sourceRect->x + sourceRect->width);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(238)
		int tmp12 = sourceImage->width;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(238)
		bool tmp13 = (tmp11 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(238)
		if ((tmp13)){
			HX_STACK_LINE(238)
			Float tmp14 = (sourceImage->width - sourceRect->x);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(238)
			sourceRect->width = tmp14;
		}
		HX_STACK_LINE(239)
		Float tmp14 = (sourceRect->y + sourceRect->height);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(239)
		int tmp15 = sourceImage->height;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(239)
		bool tmp16 = (tmp14 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(239)
		if ((tmp16)){
			HX_STACK_LINE(239)
			Float tmp17 = (sourceImage->height - sourceRect->y);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(239)
			sourceRect->height = tmp17;
		}
		HX_STACK_LINE(241)
		{
			HX_STACK_LINE(241)
			::lime::graphics::ImageType tmp17 = this->type;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(241)
			::lime::graphics::ImageType _g = tmp17;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(241)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(245)
					::lime::graphics::Image tmp18 = sourceImage;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(245)
					::lime::math::Rectangle tmp19 = sourceRect;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(245)
					::lime::math::Vector2 tmp20 = destPoint;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(245)
					::lime::graphics::ImageChannel tmp21 = sourceChannel;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(245)
					::lime::graphics::ImageChannel tmp22 = destChannel;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(245)
					::lime::graphics::utils::ImageCanvasUtil_obj::copyChannel(hx::ObjectPtr<OBJ_>(this),tmp18,tmp19,tmp20,tmp21,tmp22);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(253)
					::lime::graphics::Image tmp18 = sourceImage;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(253)
					::lime::math::Rectangle tmp19 = sourceRect;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(253)
					::lime::math::Vector2 tmp20 = destPoint;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(253)
					::lime::graphics::ImageChannel tmp21 = sourceChannel;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(253)
					::lime::graphics::ImageChannel tmp22 = destChannel;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(253)
					::lime::graphics::utils::ImageDataUtil_obj::copyChannel(hx::ObjectPtr<OBJ_>(this),tmp18,tmp19,tmp20,tmp21,tmp22);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(257)
					int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(257)
					switch( (int)(sourceChannel->__Index())){
						case (int)0: {
							HX_STACK_LINE(258)
							tmp18 = (int)1;
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(259)
							tmp18 = (int)2;
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(260)
							tmp18 = (int)4;
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(261)
							tmp18 = (int)8;
						}
						;break;
					}
					HX_STACK_LINE(257)
					int srcChannel = tmp18;		HX_STACK_VAR(srcChannel,"srcChannel");
					HX_STACK_LINE(264)
					int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(264)
					switch( (int)(destChannel->__Index())){
						case (int)0: {
							HX_STACK_LINE(265)
							tmp19 = (int)1;
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(266)
							tmp19 = (int)2;
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(267)
							tmp19 = (int)4;
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(268)
							tmp19 = (int)8;
						}
						;break;
					}
					HX_STACK_LINE(264)
					int dstChannel = tmp19;		HX_STACK_VAR(dstChannel,"dstChannel");
					HX_STACK_LINE(271)
					int tmp20 = sourceImage->offsetX;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(271)
					int tmp21 = sourceImage->offsetY;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(271)
					sourceRect->offset(tmp20,tmp21);
					HX_STACK_LINE(272)
					int tmp22 = this->offsetX;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(272)
					int tmp23 = this->offsetY;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(272)
					destPoint->offset(tmp22,tmp23);
					HX_STACK_LINE(274)
					::lime::graphics::ImageBuffer tmp24 = this->buffer;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(274)
					tmp24->__srcBitmapData->__Field(HX_HCSTRING("copyChannel","\x8e","\x7d","\xe6","\x22"), hx::paccDynamic )(sourceImage->buffer->get_src(),sourceRect->__toFlashRectangle(),destPoint->__toFlashPoint(),srcChannel,dstChannel);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Image_obj,copyChannel,(void))

Void Image_obj::copyPixels( ::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::Image alphaImage,::lime::math::Vector2 alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
	HX_STACK_FRAME("lime.graphics.Image","copyPixels",0x19d2897f,"lime.graphics.Image.copyPixels","lime/graphics/Image.hx",283,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceImage,"sourceImage")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(alphaImage,"alphaImage")
	HX_STACK_ARG(alphaPoint,"alphaPoint")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
{
		HX_STACK_LINE(286)
		::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(286)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(286)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(286)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(286)
		if ((tmp2)){
			HX_STACK_LINE(286)
			tmp3 = (sourceImage == null());
		}
		else{
			HX_STACK_LINE(286)
			tmp3 = true;
		}
		HX_STACK_LINE(286)
		if ((tmp3)){
			HX_STACK_LINE(286)
			return null();
		}
		HX_STACK_LINE(287)
		bool tmp4 = (sourceRect->width <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(287)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(287)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(287)
		if ((tmp5)){
			HX_STACK_LINE(287)
			tmp6 = (sourceRect->height <= (int)0);
		}
		else{
			HX_STACK_LINE(287)
			tmp6 = true;
		}
		HX_STACK_LINE(287)
		if ((tmp6)){
			HX_STACK_LINE(287)
			return null();
		}
		HX_STACK_LINE(288)
		int tmp7 = this->width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(288)
		bool tmp8 = (tmp7 <= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(288)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(288)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(288)
		if ((tmp9)){
			HX_STACK_LINE(288)
			int tmp11 = this->height;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(288)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(288)
			tmp10 = (tmp12 <= (int)0);
		}
		else{
			HX_STACK_LINE(288)
			tmp10 = true;
		}
		HX_STACK_LINE(288)
		if ((tmp10)){
			HX_STACK_LINE(288)
			return null();
		}
		HX_STACK_LINE(291)
		Float tmp11 = (sourceRect->x + sourceRect->width);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(291)
		int tmp12 = sourceImage->width;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(291)
		bool tmp13 = (tmp11 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(291)
		if ((tmp13)){
			HX_STACK_LINE(291)
			Float tmp14 = (sourceImage->width - sourceRect->x);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(291)
			sourceRect->width = tmp14;
		}
		HX_STACK_LINE(292)
		Float tmp14 = (sourceRect->y + sourceRect->height);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(292)
		int tmp15 = sourceImage->height;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(292)
		bool tmp16 = (tmp14 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(292)
		if ((tmp16)){
			HX_STACK_LINE(292)
			Float tmp17 = (sourceImage->height - sourceRect->y);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(292)
			sourceRect->height = tmp17;
		}
		HX_STACK_LINE(295)
		bool tmp17 = (sourceRect->x < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(295)
		if ((tmp17)){
			HX_STACK_LINE(296)
			hx::AddEq(sourceRect->width,sourceRect->x);
			HX_STACK_LINE(297)
			sourceRect->x = (int)0;
		}
		HX_STACK_LINE(299)
		bool tmp18 = (sourceRect->y < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(299)
		if ((tmp18)){
			HX_STACK_LINE(300)
			hx::AddEq(sourceRect->height,sourceRect->y);
			HX_STACK_LINE(301)
			sourceRect->y = (int)0;
		}
		HX_STACK_LINE(305)
		Float tmp19 = (destPoint->x + sourceRect->width);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(305)
		int tmp20 = this->width;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(305)
		bool tmp21 = (tmp19 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(305)
		if ((tmp21)){
			HX_STACK_LINE(305)
			int tmp22 = this->width;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(305)
			Float tmp23 = destPoint->x;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(305)
			Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(305)
			sourceRect->width = tmp24;
		}
		HX_STACK_LINE(306)
		Float tmp22 = (destPoint->y + sourceRect->height);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(306)
		int tmp23 = this->height;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(306)
		bool tmp24 = (tmp22 > tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(306)
		if ((tmp24)){
			HX_STACK_LINE(306)
			int tmp25 = this->height;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(306)
			Float tmp26 = destPoint->y;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(306)
			Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(306)
			sourceRect->height = tmp27;
		}
		HX_STACK_LINE(309)
		bool tmp25 = (destPoint->x < (int)0);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(309)
		if ((tmp25)){
			HX_STACK_LINE(310)
			hx::AddEq(sourceRect->width,destPoint->x);
			HX_STACK_LINE(311)
			hx::SubEq(sourceRect->x,destPoint->x);
			HX_STACK_LINE(312)
			destPoint->x = (int)0;
		}
		HX_STACK_LINE(314)
		bool tmp26 = (destPoint->y < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(314)
		if ((tmp26)){
			HX_STACK_LINE(315)
			hx::AddEq(sourceRect->height,destPoint->y);
			HX_STACK_LINE(316)
			hx::SubEq(sourceRect->y,destPoint->y);
			HX_STACK_LINE(317)
			destPoint->y = (int)0;
		}
		HX_STACK_LINE(320)
		{
			HX_STACK_LINE(320)
			::lime::graphics::ImageType tmp27 = this->type;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(320)
			::lime::graphics::ImageType _g = tmp27;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(320)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(324)
					::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(hx::ObjectPtr<OBJ_>(this),null());
					HX_STACK_LINE(325)
					::lime::graphics::Image tmp28 = sourceImage;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(325)
					::lime::math::Rectangle tmp29 = sourceRect;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(325)
					::lime::math::Vector2 tmp30 = destPoint;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(325)
					::lime::graphics::Image tmp31 = alphaImage;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(325)
					::lime::math::Vector2 tmp32 = alphaPoint;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(325)
					bool tmp33 = mergeAlpha;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(325)
					::lime::graphics::utils::ImageCanvasUtil_obj::copyPixels(hx::ObjectPtr<OBJ_>(this),tmp28,tmp29,tmp30,tmp31,tmp32,tmp33);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(334)
					::lime::graphics::Image tmp28 = sourceImage;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(334)
					::lime::math::Rectangle tmp29 = sourceRect;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(334)
					::lime::math::Vector2 tmp30 = destPoint;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(334)
					::lime::graphics::Image tmp31 = alphaImage;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(334)
					::lime::math::Vector2 tmp32 = alphaPoint;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(334)
					bool tmp33 = mergeAlpha;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(334)
					::lime::graphics::utils::ImageDataUtil_obj::copyPixels(hx::ObjectPtr<OBJ_>(this),tmp28,tmp29,tmp30,tmp31,tmp32,tmp33);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(338)
					int tmp28 = sourceImage->offsetX;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(338)
					int tmp29 = sourceImage->offsetY;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(338)
					sourceRect->offset(tmp28,tmp29);
					HX_STACK_LINE(339)
					int tmp30 = this->offsetX;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(339)
					int tmp31 = this->offsetY;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(339)
					destPoint->offset(tmp30,tmp31);
					HX_STACK_LINE(341)
					bool tmp32 = (alphaImage != null());		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(341)
					bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(341)
					if ((tmp32)){
						HX_STACK_LINE(341)
						tmp33 = (alphaPoint != null());
					}
					else{
						HX_STACK_LINE(341)
						tmp33 = false;
					}
					HX_STACK_LINE(341)
					if ((tmp33)){
						HX_STACK_LINE(343)
						int tmp34 = alphaImage->offsetX;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(343)
						int tmp35 = alphaImage->offsetY;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(343)
						alphaPoint->offset(tmp34,tmp35);
					}
					HX_STACK_LINE(347)
					::lime::graphics::ImageBuffer tmp34 = this->buffer;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(347)
					bool tmp35 = (alphaImage != null());		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(347)
					bool tmp36 = (alphaPoint != null());		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(347)
					tmp34->__srcBitmapData->__Field(HX_HCSTRING("copyPixels","\xc2","\x54","\x6e","\x42"), hx::paccDynamic )(sourceImage->buffer->__srcBitmapData,sourceRect->__toFlashRectangle(),destPoint->__toFlashPoint(),(  ((tmp35)) ? Dynamic(alphaImage->buffer->get_src()) : Dynamic(null()) ),(  ((tmp36)) ? Dynamic(alphaPoint->__toFlashPoint()) : Dynamic(null()) ),mergeAlpha);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Image_obj,copyPixels,(void))

::haxe::io::Bytes Image_obj::encode( ::String __o_format,hx::Null< int >  __o_quality){
::String format = __o_format.Default(HX_HCSTRING("png","\xa9","\x5c","\x55","\x00"));
int quality = __o_quality.Default(90);
	HX_STACK_FRAME("lime.graphics.Image","encode",0xa785c453,"lime.graphics.Image.encode","lime/graphics/Image.hx",356,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(quality,"quality")
{
		HX_STACK_LINE(358)
		::String tmp = format;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(358)
		::String _switch_1 = (tmp);
		if (  ( _switch_1==HX_HCSTRING("png","\xa9","\x5c","\x55","\x00"))){
			HX_STACK_LINE(362)
			::haxe::io::Bytes tmp1 = ::lime::graphics::format::PNG_obj::encode(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(362)
			return tmp1;
		}
		else if (  ( _switch_1==HX_HCSTRING("jpg","\xe1","\xd0","\x50","\x00")) ||  ( _switch_1==HX_HCSTRING("jpeg","\xa8","\xf2","\x65","\x46"))){
			HX_STACK_LINE(366)
			int tmp1 = quality;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(366)
			::haxe::io::Bytes tmp2 = ::lime::graphics::format::JPEG_obj::encode(hx::ObjectPtr<OBJ_>(this),tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(366)
			return tmp2;
		}
		else if (  ( _switch_1==HX_HCSTRING("bmp","\x45","\xbc","\x4a","\x00"))){
			HX_STACK_LINE(370)
			::haxe::io::Bytes tmp1 = ::lime::graphics::format::BMP_obj::encode(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(370)
			return tmp1;
		}
		else  {
		}
;
;
		HX_STACK_LINE(376)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,encode,return )

Void Image_obj::fillRect( ::lime::math::Rectangle rect,int color,Dynamic format){
{
		HX_STACK_FRAME("lime.graphics.Image","fillRect",0x2421e0c4,"lime.graphics.Image.fillRect","lime/graphics/Image.hx",381,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(383)
		::lime::math::Rectangle tmp = rect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(383)
		::lime::math::Rectangle tmp1 = this->__clipRect(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(383)
		rect = tmp1;
		HX_STACK_LINE(384)
		::lime::graphics::ImageBuffer tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(384)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(384)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(384)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(384)
		if ((tmp4)){
			HX_STACK_LINE(384)
			tmp5 = (rect == null());
		}
		else{
			HX_STACK_LINE(384)
			tmp5 = true;
		}
		HX_STACK_LINE(384)
		if ((tmp5)){
			HX_STACK_LINE(384)
			return null();
		}
		HX_STACK_LINE(386)
		{
			HX_STACK_LINE(386)
			::lime::graphics::ImageType tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(386)
			::lime::graphics::ImageType _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(386)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(390)
					::lime::math::Rectangle tmp7 = rect;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(390)
					int tmp8 = color;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(390)
					Dynamic tmp9 = format;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(390)
					::lime::graphics::utils::ImageCanvasUtil_obj::fillRect(hx::ObjectPtr<OBJ_>(this),tmp7,tmp8,tmp9);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(398)
					::lime::graphics::ImageBuffer tmp7 = this->buffer;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(398)
					int tmp8 = tmp7->data->length;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(398)
					bool tmp9 = (tmp8 == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(398)
					if ((tmp9)){
						HX_STACK_LINE(398)
						return null();
					}
					HX_STACK_LINE(400)
					::lime::math::Rectangle tmp10 = rect;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(400)
					int tmp11 = color;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(400)
					Dynamic tmp12 = format;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(400)
					::lime::graphics::utils::ImageDataUtil_obj::fillRect(hx::ObjectPtr<OBJ_>(this),tmp10,tmp11,tmp12);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(404)
					int tmp7 = this->offsetX;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(404)
					int tmp8 = this->offsetY;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(404)
					rect->offset(tmp7,tmp8);
					HX_STACK_LINE(406)
					bool tmp9 = (format != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(406)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(406)
					if ((tmp9)){
						HX_STACK_LINE(406)
						Dynamic tmp11 = format;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(406)
						switch( (int)(tmp11)){
							case (int)1: {
								HX_STACK_LINE(408)
								tmp10 = color;
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(409)
								int bgra = color;		HX_STACK_VAR(bgra,"bgra");
								HX_STACK_LINE(409)
								{
									HX_STACK_LINE(409)
									int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(409)
									{
										HX_STACK_LINE(409)
										int argb = (int)0;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(409)
										tmp12 = argb;
									}
									HX_STACK_LINE(409)
									int argb = tmp12;		HX_STACK_VAR(argb,"argb");
									HX_STACK_LINE(409)
									{
										HX_STACK_LINE(409)
										int tmp13 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(409)
										int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(409)
										int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(409)
										int tmp16 = (int(tmp15) << int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(409)
										int tmp17 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(409)
										int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(409)
										int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(409)
										int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(409)
										int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(409)
										int tmp22 = (int(tmp21) << int((int)16));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(409)
										int tmp23 = (int(tmp16) | int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(409)
										int tmp24 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(409)
										int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(409)
										int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(409)
										int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(409)
										int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(409)
										int tmp29 = (int(tmp28) << int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(409)
										int tmp30 = (int(tmp23) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(409)
										int tmp31 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(409)
										int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(409)
										int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(409)
										int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(409)
										int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(409)
										int tmp36 = (int(tmp30) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(409)
										argb = tmp36;
									}
									HX_STACK_LINE(409)
									tmp10 = argb;
								}
							}
							;break;
							default: {
								HX_STACK_LINE(410)
								int rgba = color;		HX_STACK_VAR(rgba,"rgba");
								HX_STACK_LINE(410)
								{
									HX_STACK_LINE(410)
									int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(410)
									{
										HX_STACK_LINE(410)
										int argb = (int)0;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(410)
										tmp12 = argb;
									}
									HX_STACK_LINE(410)
									int argb = tmp12;		HX_STACK_VAR(argb,"argb");
									HX_STACK_LINE(410)
									{
										HX_STACK_LINE(410)
										int tmp13 = (int(rgba) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(410)
										int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(410)
										int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(410)
										int tmp16 = (int(tmp15) << int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(410)
										int tmp17 = (int(rgba) >> int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(410)
										int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(410)
										int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(410)
										int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(410)
										int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(410)
										int tmp22 = (int(tmp21) << int((int)16));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(410)
										int tmp23 = (int(tmp16) | int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(410)
										int tmp24 = (int(rgba) >> int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(410)
										int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(410)
										int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(410)
										int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(410)
										int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(410)
										int tmp29 = (int(tmp28) << int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(410)
										int tmp30 = (int(tmp23) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(410)
										int tmp31 = (int(rgba) >> int((int)8));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(410)
										int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(410)
										int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(410)
										int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(410)
										int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(410)
										int tmp36 = (int(tmp30) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(410)
										argb = tmp36;
									}
									HX_STACK_LINE(410)
									tmp10 = argb;
								}
							}
						}
					}
					else{
						HX_STACK_LINE(410)
						int rgba = color;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(410)
						{
							HX_STACK_LINE(410)
							int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(410)
							{
								HX_STACK_LINE(410)
								int argb = (int)0;		HX_STACK_VAR(argb,"argb");
								HX_STACK_LINE(410)
								tmp11 = argb;
							}
							HX_STACK_LINE(410)
							int argb = tmp11;		HX_STACK_VAR(argb,"argb");
							HX_STACK_LINE(410)
							{
								HX_STACK_LINE(410)
								int tmp12 = (int(rgba) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(410)
								int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(410)
								int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(410)
								int tmp15 = (int(tmp14) << int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(410)
								int tmp16 = (int(rgba) >> int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(410)
								int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(410)
								int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(410)
								int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(410)
								int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(410)
								int tmp21 = (int(tmp20) << int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(410)
								int tmp22 = (int(tmp15) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(410)
								int tmp23 = (int(rgba) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(410)
								int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(410)
								int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(410)
								int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(410)
								int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(410)
								int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(410)
								int tmp29 = (int(tmp22) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(410)
								int tmp30 = (int(rgba) >> int((int)8));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(410)
								int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(410)
								int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(410)
								int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(410)
								int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(410)
								int tmp35 = (int(tmp29) | int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(410)
								argb = tmp35;
							}
							HX_STACK_LINE(410)
							tmp10 = argb;
						}
					}
					HX_STACK_LINE(406)
					int argb = tmp10;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(414)
					::lime::graphics::ImageBuffer tmp11 = this->buffer;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(414)
					tmp11->__srcBitmapData->__Field(HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"), hx::paccDynamic )(rect->__toFlashRectangle(),argb);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,fillRect,(void))

Void Image_obj::floodFill( int x,int y,int color,Dynamic format){
{
		HX_STACK_FRAME("lime.graphics.Image","floodFill",0x1da9f544,"lime.graphics.Image.floodFill","lime/graphics/Image.hx",423,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(425)
		::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(425)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(425)
		if ((tmp1)){
			HX_STACK_LINE(425)
			return null();
		}
		HX_STACK_LINE(427)
		{
			HX_STACK_LINE(427)
			::lime::graphics::ImageType tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(427)
			::lime::graphics::ImageType _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(427)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(431)
					int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(431)
					int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(431)
					int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(431)
					Dynamic tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(431)
					::lime::graphics::utils::ImageCanvasUtil_obj::floodFill(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4,tmp5,tmp6);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(439)
					int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(439)
					int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(439)
					int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(439)
					Dynamic tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(439)
					::lime::graphics::utils::ImageDataUtil_obj::floodFill(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4,tmp5,tmp6);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(443)
					bool tmp3 = (format != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(443)
					int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(443)
					if ((tmp3)){
						HX_STACK_LINE(443)
						Dynamic tmp5 = format;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(443)
						switch( (int)(tmp5)){
							case (int)1: {
								HX_STACK_LINE(445)
								tmp4 = color;
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(446)
								int bgra = color;		HX_STACK_VAR(bgra,"bgra");
								HX_STACK_LINE(446)
								{
									HX_STACK_LINE(446)
									int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(446)
									{
										HX_STACK_LINE(446)
										int argb = (int)0;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(446)
										tmp6 = argb;
									}
									HX_STACK_LINE(446)
									int argb = tmp6;		HX_STACK_VAR(argb,"argb");
									HX_STACK_LINE(446)
									{
										HX_STACK_LINE(446)
										int tmp7 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(446)
										int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(446)
										int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(446)
										int tmp10 = (int(tmp9) << int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(446)
										int tmp11 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(446)
										int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(446)
										int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(446)
										int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(446)
										int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(446)
										int tmp16 = (int(tmp15) << int((int)16));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(446)
										int tmp17 = (int(tmp10) | int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(446)
										int tmp18 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(446)
										int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(446)
										int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(446)
										int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(446)
										int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(446)
										int tmp23 = (int(tmp22) << int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(446)
										int tmp24 = (int(tmp17) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(446)
										int tmp25 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(446)
										int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(446)
										int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(446)
										int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(446)
										int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(446)
										int tmp30 = (int(tmp24) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(446)
										argb = tmp30;
									}
									HX_STACK_LINE(446)
									tmp4 = argb;
								}
							}
							;break;
							default: {
								HX_STACK_LINE(447)
								int rgba = color;		HX_STACK_VAR(rgba,"rgba");
								HX_STACK_LINE(447)
								{
									HX_STACK_LINE(447)
									int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(447)
									{
										HX_STACK_LINE(447)
										int argb = (int)0;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(447)
										tmp6 = argb;
									}
									HX_STACK_LINE(447)
									int argb = tmp6;		HX_STACK_VAR(argb,"argb");
									HX_STACK_LINE(447)
									{
										HX_STACK_LINE(447)
										int tmp7 = (int(rgba) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(447)
										int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(447)
										int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(447)
										int tmp10 = (int(tmp9) << int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(447)
										int tmp11 = (int(rgba) >> int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(447)
										int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(447)
										int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(447)
										int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(447)
										int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(447)
										int tmp16 = (int(tmp15) << int((int)16));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(447)
										int tmp17 = (int(tmp10) | int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(447)
										int tmp18 = (int(rgba) >> int((int)16));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(447)
										int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(447)
										int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(447)
										int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(447)
										int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(447)
										int tmp23 = (int(tmp22) << int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(447)
										int tmp24 = (int(tmp17) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(447)
										int tmp25 = (int(rgba) >> int((int)8));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(447)
										int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(447)
										int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(447)
										int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(447)
										int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(447)
										int tmp30 = (int(tmp24) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(447)
										argb = tmp30;
									}
									HX_STACK_LINE(447)
									tmp4 = argb;
								}
							}
						}
					}
					else{
						HX_STACK_LINE(447)
						int rgba = color;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(447)
						{
							HX_STACK_LINE(447)
							int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(447)
							{
								HX_STACK_LINE(447)
								int argb = (int)0;		HX_STACK_VAR(argb,"argb");
								HX_STACK_LINE(447)
								tmp5 = argb;
							}
							HX_STACK_LINE(447)
							int argb = tmp5;		HX_STACK_VAR(argb,"argb");
							HX_STACK_LINE(447)
							{
								HX_STACK_LINE(447)
								int tmp6 = (int(rgba) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(447)
								int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(447)
								int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(447)
								int tmp9 = (int(tmp8) << int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(447)
								int tmp10 = (int(rgba) >> int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(447)
								int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(447)
								int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(447)
								int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(447)
								int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(447)
								int tmp15 = (int(tmp14) << int((int)16));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(447)
								int tmp16 = (int(tmp9) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(447)
								int tmp17 = (int(rgba) >> int((int)16));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(447)
								int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(447)
								int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(447)
								int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(447)
								int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(447)
								int tmp22 = (int(tmp21) << int((int)8));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(447)
								int tmp23 = (int(tmp16) | int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(447)
								int tmp24 = (int(rgba) >> int((int)8));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(447)
								int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(447)
								int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(447)
								int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(447)
								int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(447)
								int tmp29 = (int(tmp23) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(447)
								argb = tmp29;
							}
							HX_STACK_LINE(447)
							tmp4 = argb;
						}
					}
					HX_STACK_LINE(443)
					int argb = tmp4;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(451)
					::lime::graphics::ImageBuffer tmp5 = this->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(451)
					int tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(451)
					int tmp7 = this->offsetX;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(451)
					int tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(451)
					int tmp9 = this->offsetY;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(451)
					tmp5->__srcBitmapData->__Field(HX_HCSTRING("floodFill","\x61","\x83","\x8a","\x59"), hx::paccDynamic )((tmp6 + tmp7),(tmp8 + tmp9),argb);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Image_obj,floodFill,(void))

::lime::math::Rectangle Image_obj::getColorBoundsRect( int mask,int color,hx::Null< bool >  __o_findColor,Dynamic format){
bool findColor = __o_findColor.Default(true);
	HX_STACK_FRAME("lime.graphics.Image","getColorBoundsRect",0x21db6743,"lime.graphics.Image.getColorBoundsRect","lime/graphics/Image.hx",540,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(findColor,"findColor")
	HX_STACK_ARG(format,"format")
{
		HX_STACK_LINE(542)
		::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(542)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(542)
		if ((tmp1)){
			HX_STACK_LINE(542)
			return null();
		}
		HX_STACK_LINE(544)
		::lime::graphics::ImageType tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(544)
		::lime::graphics::ImageType _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(544)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(552)
				int tmp3 = mask;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(552)
				int tmp4 = color;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(552)
				bool tmp5 = findColor;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(552)
				Dynamic tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(552)
				::lime::math::Rectangle tmp7 = ::lime::graphics::utils::ImageDataUtil_obj::getColorBoundsRect(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(552)
				return tmp7;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(556)
				int tmp3 = mask;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(556)
				int tmp4 = color;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(556)
				bool tmp5 = findColor;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(556)
				Dynamic tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(556)
				::lime::math::Rectangle tmp7 = ::lime::graphics::utils::ImageDataUtil_obj::getColorBoundsRect(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(556)
				return tmp7;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(560)
				::lime::graphics::ImageBuffer tmp3 = this->buffer;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(560)
				Dynamic tmp4 = tmp3->__srcBitmapData->__Field(HX_HCSTRING("getColorBoundsRect","\x86","\xad","\xe8","\x80"), hx::paccDynamic )(mask,color,findColor);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(560)
				Dynamic rect = tmp4;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(561)
				::lime::math::Rectangle tmp5 = ::lime::math::Rectangle_obj::__new(rect->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),rect->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ),rect->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),rect->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(561)
				return tmp5;
			}
			;break;
			default: {
				HX_STACK_LINE(565)
				return null();
			}
		}
		HX_STACK_LINE(544)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Image_obj,getColorBoundsRect,return )

int Image_obj::getPixel( int x,int y,Dynamic format){
	HX_STACK_FRAME("lime.graphics.Image","getPixel",0xd9e3718d,"lime.graphics.Image.getPixel","lime/graphics/Image.hx",570,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(572)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(572)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(572)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(572)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(572)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(572)
	if ((tmp3)){
		HX_STACK_LINE(572)
		tmp4 = (x < (int)0);
	}
	else{
		HX_STACK_LINE(572)
		tmp4 = true;
	}
	HX_STACK_LINE(572)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(572)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(572)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(572)
	if ((tmp6)){
		HX_STACK_LINE(572)
		tmp7 = (y < (int)0);
	}
	else{
		HX_STACK_LINE(572)
		tmp7 = true;
	}
	HX_STACK_LINE(572)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(572)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(572)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(572)
	if ((tmp9)){
		HX_STACK_LINE(572)
		int tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(572)
		int tmp12 = this->width;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(572)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(572)
		int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(572)
		tmp10 = (tmp11 >= tmp14);
	}
	else{
		HX_STACK_LINE(572)
		tmp10 = true;
	}
	HX_STACK_LINE(572)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(572)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(572)
	if ((tmp11)){
		HX_STACK_LINE(572)
		int tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(572)
		int tmp14 = this->height;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(572)
		int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(572)
		tmp12 = (tmp13 >= tmp15);
	}
	else{
		HX_STACK_LINE(572)
		tmp12 = true;
	}
	HX_STACK_LINE(572)
	if ((tmp12)){
		HX_STACK_LINE(572)
		return (int)0;
	}
	HX_STACK_LINE(574)
	::lime::graphics::ImageType tmp13 = this->type;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(574)
	::lime::graphics::ImageType _g = tmp13;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(574)
	switch( (int)(_g->__Index())){
		case (int)0: {
			HX_STACK_LINE(578)
			int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(578)
			int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(578)
			Dynamic tmp16 = format;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(578)
			int tmp17 = ::lime::graphics::utils::ImageCanvasUtil_obj::getPixel(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(578)
			return tmp17;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(586)
			int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(586)
			int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(586)
			Dynamic tmp16 = format;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(586)
			int tmp17 = ::lime::graphics::utils::ImageDataUtil_obj::getPixel(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(586)
			return tmp17;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(590)
			::lime::graphics::ImageBuffer tmp14 = this->buffer;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(590)
			int tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(590)
			int tmp16 = this->offsetX;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(590)
			int tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(590)
			int tmp18 = this->offsetY;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(590)
			Dynamic tmp19 = tmp14->__srcBitmapData->__Field(HX_HCSTRING("getPixel","\x10","\xd6","\x7a","\x22"), hx::paccDynamic )((tmp15 + tmp16),(tmp17 + tmp18));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(590)
			int color = tmp19;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(592)
			bool tmp20 = (format != null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(592)
			if ((tmp20)){
				HX_STACK_LINE(592)
				Dynamic tmp21 = format;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(592)
				switch( (int)(tmp21)){
					case (int)1: {
						HX_STACK_LINE(594)
						int tmp22 = color;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(594)
						return tmp22;
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(595)
						int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(595)
						{
							HX_STACK_LINE(595)
							int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(595)
							{
								HX_STACK_LINE(595)
								int bgra = (int)0;		HX_STACK_VAR(bgra,"bgra");
								HX_STACK_LINE(595)
								tmp23 = bgra;
							}
							HX_STACK_LINE(595)
							int bgra = tmp23;		HX_STACK_VAR(bgra,"bgra");
							HX_STACK_LINE(595)
							{
								HX_STACK_LINE(595)
								int tmp24 = (int(color) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(595)
								int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(595)
								int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(595)
								int tmp27 = (int(tmp26) << int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(595)
								int tmp28 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(595)
								int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(595)
								int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(595)
								int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(595)
								int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(595)
								int tmp33 = (int(tmp32) << int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(595)
								int tmp34 = (int(tmp27) | int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(595)
								int tmp35 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(595)
								int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(595)
								int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(595)
								int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(595)
								int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(595)
								int tmp40 = (int(tmp39) << int((int)8));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(595)
								int tmp41 = (int(tmp34) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(595)
								int tmp42 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(595)
								int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(595)
								int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(595)
								int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(595)
								int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(595)
								int tmp47 = (int(tmp41) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(595)
								bgra = tmp47;
							}
							HX_STACK_LINE(595)
							tmp22 = bgra;
						}
						HX_STACK_LINE(595)
						int bgra = tmp22;		HX_STACK_VAR(bgra,"bgra");
						HX_STACK_LINE(595)
						int tmp23 = bgra;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(595)
						return tmp23;
					}
					;break;
					default: {
						HX_STACK_LINE(596)
						int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(596)
						{
							HX_STACK_LINE(596)
							int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(596)
							{
								HX_STACK_LINE(596)
								int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
								HX_STACK_LINE(596)
								tmp23 = rgba;
							}
							HX_STACK_LINE(596)
							int rgba = tmp23;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(596)
							{
								HX_STACK_LINE(596)
								int tmp24 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(596)
								int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(596)
								int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(596)
								int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(596)
								int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(596)
								int tmp29 = (int(tmp28) << int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(596)
								int tmp30 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(596)
								int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(596)
								int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(596)
								int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(596)
								int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(596)
								int tmp35 = (int(tmp34) << int((int)16));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(596)
								int tmp36 = (int(tmp29) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(596)
								int tmp37 = (int(color) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(596)
								int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(596)
								int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(596)
								int tmp40 = (int(tmp39) << int((int)8));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(596)
								int tmp41 = (int(tmp36) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(596)
								int tmp42 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(596)
								int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(596)
								int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(596)
								int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(596)
								int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(596)
								int tmp47 = (int(tmp41) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(596)
								rgba = tmp47;
							}
							HX_STACK_LINE(596)
							tmp22 = rgba;
						}
						HX_STACK_LINE(596)
						int rgba = tmp22;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(596)
						int tmp23 = rgba;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(596)
						return tmp23;
					}
				}
			}
			else{
				HX_STACK_LINE(596)
				int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(596)
				{
					HX_STACK_LINE(596)
					int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(596)
					{
						HX_STACK_LINE(596)
						int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(596)
						tmp22 = rgba;
					}
					HX_STACK_LINE(596)
					int rgba = tmp22;		HX_STACK_VAR(rgba,"rgba");
					HX_STACK_LINE(596)
					{
						HX_STACK_LINE(596)
						int tmp23 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(596)
						int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(596)
						int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(596)
						int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(596)
						int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(596)
						int tmp28 = (int(tmp27) << int((int)24));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(596)
						int tmp29 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(596)
						int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(596)
						int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(596)
						int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(596)
						int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(596)
						int tmp34 = (int(tmp33) << int((int)16));		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(596)
						int tmp35 = (int(tmp28) | int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(596)
						int tmp36 = (int(color) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(596)
						int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(596)
						int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(596)
						int tmp39 = (int(tmp38) << int((int)8));		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(596)
						int tmp40 = (int(tmp35) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(596)
						int tmp41 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(596)
						int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(596)
						int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(596)
						int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(596)
						int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(596)
						int tmp46 = (int(tmp40) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(596)
						rgba = tmp46;
					}
					HX_STACK_LINE(596)
					tmp21 = rgba;
				}
				HX_STACK_LINE(596)
				int rgba = tmp21;		HX_STACK_VAR(rgba,"rgba");
				HX_STACK_LINE(596)
				int tmp22 = rgba;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(596)
				return tmp22;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(602)
			return (int)0;
		}
	}
	HX_STACK_LINE(574)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,getPixel,return )

int Image_obj::getPixel32( int x,int y,Dynamic format){
	HX_STACK_FRAME("lime.graphics.Image","getPixel32",0xaeccdb6c,"lime.graphics.Image.getPixel32","lime/graphics/Image.hx",609,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(611)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(611)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(611)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(611)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(611)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(611)
	if ((tmp3)){
		HX_STACK_LINE(611)
		tmp4 = (x < (int)0);
	}
	else{
		HX_STACK_LINE(611)
		tmp4 = true;
	}
	HX_STACK_LINE(611)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(611)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(611)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(611)
	if ((tmp6)){
		HX_STACK_LINE(611)
		tmp7 = (y < (int)0);
	}
	else{
		HX_STACK_LINE(611)
		tmp7 = true;
	}
	HX_STACK_LINE(611)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(611)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(611)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(611)
	if ((tmp9)){
		HX_STACK_LINE(611)
		int tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(611)
		int tmp12 = this->width;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(611)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(611)
		int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(611)
		tmp10 = (tmp11 >= tmp14);
	}
	else{
		HX_STACK_LINE(611)
		tmp10 = true;
	}
	HX_STACK_LINE(611)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(611)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(611)
	if ((tmp11)){
		HX_STACK_LINE(611)
		int tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(611)
		int tmp14 = this->height;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(611)
		int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(611)
		tmp12 = (tmp13 >= tmp15);
	}
	else{
		HX_STACK_LINE(611)
		tmp12 = true;
	}
	HX_STACK_LINE(611)
	if ((tmp12)){
		HX_STACK_LINE(611)
		return (int)0;
	}
	HX_STACK_LINE(613)
	::lime::graphics::ImageType tmp13 = this->type;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(613)
	::lime::graphics::ImageType _g = tmp13;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(613)
	switch( (int)(_g->__Index())){
		case (int)0: {
			HX_STACK_LINE(617)
			int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(617)
			int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(617)
			Dynamic tmp16 = format;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(617)
			int tmp17 = ::lime::graphics::utils::ImageCanvasUtil_obj::getPixel32(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(617)
			return tmp17;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(625)
			int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(625)
			int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(625)
			Dynamic tmp16 = format;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(625)
			int tmp17 = ::lime::graphics::utils::ImageDataUtil_obj::getPixel32(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(625)
			return tmp17;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(629)
			::lime::graphics::ImageBuffer tmp14 = this->buffer;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(629)
			int tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(629)
			int tmp16 = this->offsetX;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(629)
			int tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(629)
			int tmp18 = this->offsetY;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(629)
			Dynamic tmp19 = tmp14->__srcBitmapData->__Field(HX_HCSTRING("getPixel32","\xaf","\xa6","\x68","\xd7"), hx::paccDynamic )((tmp15 + tmp16),(tmp17 + tmp18));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(629)
			int color = tmp19;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(631)
			bool tmp20 = (format != null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(631)
			if ((tmp20)){
				HX_STACK_LINE(631)
				Dynamic tmp21 = format;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(631)
				switch( (int)(tmp21)){
					case (int)1: {
						HX_STACK_LINE(633)
						int tmp22 = color;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(633)
						return tmp22;
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(634)
						int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(634)
						{
							HX_STACK_LINE(634)
							int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(634)
							{
								HX_STACK_LINE(634)
								int bgra = (int)0;		HX_STACK_VAR(bgra,"bgra");
								HX_STACK_LINE(634)
								tmp23 = bgra;
							}
							HX_STACK_LINE(634)
							int bgra = tmp23;		HX_STACK_VAR(bgra,"bgra");
							HX_STACK_LINE(634)
							{
								HX_STACK_LINE(634)
								int tmp24 = (int(color) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(634)
								int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(634)
								int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(634)
								int tmp27 = (int(tmp26) << int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(634)
								int tmp28 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(634)
								int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(634)
								int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(634)
								int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(634)
								int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(634)
								int tmp33 = (int(tmp32) << int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(634)
								int tmp34 = (int(tmp27) | int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(634)
								int tmp35 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(634)
								int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(634)
								int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(634)
								int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(634)
								int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(634)
								int tmp40 = (int(tmp39) << int((int)8));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(634)
								int tmp41 = (int(tmp34) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(634)
								int tmp42 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(634)
								int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(634)
								int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(634)
								int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(634)
								int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(634)
								int tmp47 = (int(tmp41) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(634)
								bgra = tmp47;
							}
							HX_STACK_LINE(634)
							tmp22 = bgra;
						}
						HX_STACK_LINE(634)
						int bgra = tmp22;		HX_STACK_VAR(bgra,"bgra");
						HX_STACK_LINE(634)
						int tmp23 = bgra;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(634)
						return tmp23;
					}
					;break;
					default: {
						HX_STACK_LINE(635)
						int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(635)
						{
							HX_STACK_LINE(635)
							int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(635)
							{
								HX_STACK_LINE(635)
								int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
								HX_STACK_LINE(635)
								tmp23 = rgba;
							}
							HX_STACK_LINE(635)
							int rgba = tmp23;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(635)
							{
								HX_STACK_LINE(635)
								int tmp24 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(635)
								int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(635)
								int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(635)
								int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(635)
								int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(635)
								int tmp29 = (int(tmp28) << int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(635)
								int tmp30 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(635)
								int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(635)
								int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(635)
								int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(635)
								int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(635)
								int tmp35 = (int(tmp34) << int((int)16));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(635)
								int tmp36 = (int(tmp29) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(635)
								int tmp37 = (int(color) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(635)
								int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(635)
								int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(635)
								int tmp40 = (int(tmp39) << int((int)8));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(635)
								int tmp41 = (int(tmp36) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(635)
								int tmp42 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(635)
								int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(635)
								int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(635)
								int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(635)
								int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(635)
								int tmp47 = (int(tmp41) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(635)
								rgba = tmp47;
							}
							HX_STACK_LINE(635)
							tmp22 = rgba;
						}
						HX_STACK_LINE(635)
						int rgba = tmp22;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(635)
						int tmp23 = rgba;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(635)
						return tmp23;
					}
				}
			}
			else{
				HX_STACK_LINE(635)
				int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(635)
				{
					HX_STACK_LINE(635)
					int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(635)
					{
						HX_STACK_LINE(635)
						int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(635)
						tmp22 = rgba;
					}
					HX_STACK_LINE(635)
					int rgba = tmp22;		HX_STACK_VAR(rgba,"rgba");
					HX_STACK_LINE(635)
					{
						HX_STACK_LINE(635)
						int tmp23 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(635)
						int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(635)
						int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(635)
						int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(635)
						int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(635)
						int tmp28 = (int(tmp27) << int((int)24));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(635)
						int tmp29 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(635)
						int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(635)
						int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(635)
						int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(635)
						int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(635)
						int tmp34 = (int(tmp33) << int((int)16));		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(635)
						int tmp35 = (int(tmp28) | int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(635)
						int tmp36 = (int(color) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(635)
						int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(635)
						int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(635)
						int tmp39 = (int(tmp38) << int((int)8));		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(635)
						int tmp40 = (int(tmp35) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(635)
						int tmp41 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(635)
						int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(635)
						int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(635)
						int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(635)
						int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(635)
						int tmp46 = (int(tmp40) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(635)
						rgba = tmp46;
					}
					HX_STACK_LINE(635)
					tmp21 = rgba;
				}
				HX_STACK_LINE(635)
				int rgba = tmp21;		HX_STACK_VAR(rgba,"rgba");
				HX_STACK_LINE(635)
				int tmp22 = rgba;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(635)
				return tmp22;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(641)
			return (int)0;
		}
	}
	HX_STACK_LINE(613)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,getPixel32,return )

::haxe::io::Bytes Image_obj::getPixels( ::lime::math::Rectangle rect,Dynamic format){
	HX_STACK_FRAME("lime.graphics.Image","getPixels",0xcd1fea46,"lime.graphics.Image.getPixels","lime/graphics/Image.hx",648,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(650)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(650)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(650)
	if ((tmp1)){
		HX_STACK_LINE(650)
		return null();
	}
	HX_STACK_LINE(652)
	::lime::graphics::ImageType tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(652)
	::lime::graphics::ImageType _g = tmp2;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(652)
	switch( (int)(_g->__Index())){
		case (int)0: {
			HX_STACK_LINE(656)
			::lime::math::Rectangle tmp3 = rect;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(656)
			Dynamic tmp4 = format;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(656)
			::haxe::io::Bytes tmp5 = ::lime::graphics::utils::ImageCanvasUtil_obj::getPixels(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(656)
			return tmp5;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(664)
			::lime::math::Rectangle tmp3 = rect;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(664)
			Dynamic tmp4 = format;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(664)
			::haxe::io::Bytes tmp5 = ::lime::graphics::utils::ImageDataUtil_obj::getPixels(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(664)
			return tmp5;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(709)
			return null();
		}
		;break;
		default: {
			HX_STACK_LINE(714)
			return null();
		}
	}
	HX_STACK_LINE(652)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,getPixels,return )

Void Image_obj::merge( ::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		HX_STACK_FRAME("lime.graphics.Image","merge",0x75e8a71b,"lime.graphics.Image.merge","lime/graphics/Image.hx",721,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redMultiplier,"redMultiplier")
		HX_STACK_ARG(greenMultiplier,"greenMultiplier")
		HX_STACK_ARG(blueMultiplier,"blueMultiplier")
		HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
		HX_STACK_LINE(723)
		::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(723)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(723)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(723)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(723)
		if ((tmp2)){
			HX_STACK_LINE(723)
			tmp3 = (sourceImage == null());
		}
		else{
			HX_STACK_LINE(723)
			tmp3 = true;
		}
		HX_STACK_LINE(723)
		if ((tmp3)){
			HX_STACK_LINE(723)
			return null();
		}
		HX_STACK_LINE(725)
		{
			HX_STACK_LINE(725)
			::lime::graphics::ImageType tmp4 = this->type;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(725)
			::lime::graphics::ImageType _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(725)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(729)
					::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(hx::ObjectPtr<OBJ_>(this),null());
					HX_STACK_LINE(730)
					::lime::graphics::Image tmp5 = sourceImage;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(730)
					::lime::math::Rectangle tmp6 = sourceRect;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(730)
					::lime::math::Vector2 tmp7 = destPoint;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(730)
					int tmp8 = redMultiplier;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(730)
					int tmp9 = greenMultiplier;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(730)
					int tmp10 = blueMultiplier;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(730)
					int tmp11 = alphaMultiplier;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(730)
					::lime::graphics::utils::ImageCanvasUtil_obj::merge(hx::ObjectPtr<OBJ_>(this),tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(739)
					::lime::graphics::Image tmp5 = sourceImage;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(739)
					::lime::math::Rectangle tmp6 = sourceRect;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(739)
					::lime::math::Vector2 tmp7 = destPoint;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(739)
					int tmp8 = redMultiplier;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(739)
					int tmp9 = greenMultiplier;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(739)
					int tmp10 = blueMultiplier;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(739)
					int tmp11 = alphaMultiplier;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(739)
					::lime::graphics::utils::ImageDataUtil_obj::merge(hx::ObjectPtr<OBJ_>(this),tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(743)
					int tmp5 = this->offsetX;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(743)
					int tmp6 = this->offsetY;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(743)
					sourceRect->offset(tmp5,tmp6);
					HX_STACK_LINE(744)
					::lime::graphics::ImageBuffer tmp7 = this->buffer;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(744)
					tmp7->__srcBitmapData->__Field(HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"), hx::paccDynamic )(sourceImage->buffer->__srcBitmapData,sourceRect->__toFlashRectangle(),destPoint->__toFlashPoint(),redMultiplier,greenMultiplier,blueMultiplier,alphaMultiplier);
				}
				;break;
				default: {
					HX_STACK_LINE(748)
					return null();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(Image_obj,merge,(void))

Void Image_obj::resize( int newWidth,int newHeight){
{
		HX_STACK_FRAME("lime.graphics.Image","resize",0xb61d2c31,"lime.graphics.Image.resize","lime/graphics/Image.hx",755,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newWidth,"newWidth")
		HX_STACK_ARG(newHeight,"newHeight")
		HX_STACK_LINE(757)
		{
			HX_STACK_LINE(757)
			::lime::graphics::ImageType tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(757)
			::lime::graphics::ImageType _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(757)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(761)
					int tmp1 = newWidth;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(761)
					int tmp2 = newHeight;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(761)
					::lime::graphics::utils::ImageCanvasUtil_obj::resize(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(765)
					int tmp1 = newWidth;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(765)
					int tmp2 = newHeight;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(765)
					::lime::graphics::utils::ImageDataUtil_obj::resize(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2);
				}
				;break;
				case (int)2: {
				}
				;break;
				default: {
				}
			}
		}
		HX_STACK_LINE(781)
		::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(781)
		tmp->width = newWidth;
		HX_STACK_LINE(782)
		::lime::graphics::ImageBuffer tmp1 = this->buffer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(782)
		tmp1->height = newHeight;
		HX_STACK_LINE(784)
		this->offsetX = (int)0;
		HX_STACK_LINE(785)
		this->offsetY = (int)0;
		HX_STACK_LINE(786)
		this->width = newWidth;
		HX_STACK_LINE(787)
		this->height = newHeight;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,resize,(void))

Void Image_obj::scroll( int x,int y){
{
		HX_STACK_FRAME("lime.graphics.Image","scroll",0xf506aa4a,"lime.graphics.Image.scroll","lime/graphics/Image.hx",792,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(794)
		::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(794)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(794)
		if ((tmp1)){
			HX_STACK_LINE(794)
			return null();
		}
		HX_STACK_LINE(796)
		{
			HX_STACK_LINE(796)
			::lime::graphics::ImageType tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(796)
			::lime::graphics::ImageType _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(796)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(800)
					int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(800)
					int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(800)
					::lime::graphics::utils::ImageCanvasUtil_obj::scroll(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(810)
					::lime::math::Rectangle tmp3 = this->get_rect();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(810)
					::lime::math::Vector2 tmp4 = ::lime::math::Vector2_obj::__new(x,y);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(810)
					this->copyPixels(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4,null(),null(),null());
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(814)
					::lime::graphics::ImageBuffer tmp3 = this->buffer;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(814)
					int tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(814)
					int tmp5 = this->offsetX;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(814)
					int tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(814)
					int tmp7 = this->offsetX;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(814)
					tmp3->__srcBitmapData->__Field(HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"), hx::paccDynamic )((tmp4 + tmp5),(tmp6 + tmp7));
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,scroll,(void))

Void Image_obj::setPixel( int x,int y,int color,Dynamic format){
{
		HX_STACK_FRAME("lime.graphics.Image","setPixel",0x8840cb01,"lime.graphics.Image.setPixel","lime/graphics/Image.hx",823,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(825)
		::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(825)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(825)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(825)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(825)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(825)
		if ((tmp3)){
			HX_STACK_LINE(825)
			tmp4 = (x < (int)0);
		}
		else{
			HX_STACK_LINE(825)
			tmp4 = true;
		}
		HX_STACK_LINE(825)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(825)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(825)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(825)
		if ((tmp6)){
			HX_STACK_LINE(825)
			tmp7 = (y < (int)0);
		}
		else{
			HX_STACK_LINE(825)
			tmp7 = true;
		}
		HX_STACK_LINE(825)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(825)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(825)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(825)
		if ((tmp9)){
			HX_STACK_LINE(825)
			int tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(825)
			int tmp12 = this->width;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(825)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(825)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(825)
			tmp10 = (tmp11 >= tmp14);
		}
		else{
			HX_STACK_LINE(825)
			tmp10 = true;
		}
		HX_STACK_LINE(825)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(825)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(825)
		if ((tmp11)){
			HX_STACK_LINE(825)
			int tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(825)
			int tmp14 = this->height;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(825)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(825)
			tmp12 = (tmp13 >= tmp15);
		}
		else{
			HX_STACK_LINE(825)
			tmp12 = true;
		}
		HX_STACK_LINE(825)
		if ((tmp12)){
			HX_STACK_LINE(825)
			return null();
		}
		HX_STACK_LINE(827)
		{
			HX_STACK_LINE(827)
			::lime::graphics::ImageType tmp13 = this->type;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(827)
			::lime::graphics::ImageType _g = tmp13;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(827)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(831)
					int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(831)
					int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(831)
					int tmp16 = color;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(831)
					Dynamic tmp17 = format;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(831)
					::lime::graphics::utils::ImageCanvasUtil_obj::setPixel(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16,tmp17);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(839)
					int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(839)
					int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(839)
					int tmp16 = color;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(839)
					Dynamic tmp17 = format;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(839)
					::lime::graphics::utils::ImageDataUtil_obj::setPixel(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16,tmp17);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(843)
					bool tmp14 = (format != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(843)
					int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(843)
					if ((tmp14)){
						HX_STACK_LINE(843)
						Dynamic tmp16 = format;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(843)
						switch( (int)(tmp16)){
							case (int)1: {
								HX_STACK_LINE(845)
								tmp15 = color;
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(846)
								int bgra = color;		HX_STACK_VAR(bgra,"bgra");
								HX_STACK_LINE(846)
								{
									HX_STACK_LINE(846)
									int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(846)
									{
										HX_STACK_LINE(846)
										int argb = (int)0;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(846)
										tmp17 = argb;
									}
									HX_STACK_LINE(846)
									int argb = tmp17;		HX_STACK_VAR(argb,"argb");
									HX_STACK_LINE(846)
									{
										HX_STACK_LINE(846)
										int tmp18 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(846)
										int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(846)
										int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(846)
										int tmp21 = (int(tmp20) << int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(846)
										int tmp22 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(846)
										int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(846)
										int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(846)
										int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(846)
										int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(846)
										int tmp27 = (int(tmp26) << int((int)16));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(846)
										int tmp28 = (int(tmp21) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(846)
										int tmp29 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(846)
										int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(846)
										int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(846)
										int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(846)
										int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(846)
										int tmp34 = (int(tmp33) << int((int)8));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(846)
										int tmp35 = (int(tmp28) | int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(846)
										int tmp36 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(846)
										int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(846)
										int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(846)
										int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(846)
										int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(846)
										int tmp41 = (int(tmp35) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(846)
										argb = tmp41;
									}
									HX_STACK_LINE(846)
									tmp15 = argb;
								}
							}
							;break;
							default: {
								HX_STACK_LINE(847)
								int rgba = color;		HX_STACK_VAR(rgba,"rgba");
								HX_STACK_LINE(847)
								{
									HX_STACK_LINE(847)
									int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(847)
									{
										HX_STACK_LINE(847)
										int argb = (int)0;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(847)
										tmp17 = argb;
									}
									HX_STACK_LINE(847)
									int argb = tmp17;		HX_STACK_VAR(argb,"argb");
									HX_STACK_LINE(847)
									{
										HX_STACK_LINE(847)
										int tmp18 = (int(rgba) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(847)
										int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(847)
										int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(847)
										int tmp21 = (int(tmp20) << int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(847)
										int tmp22 = (int(rgba) >> int((int)24));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(847)
										int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(847)
										int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(847)
										int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(847)
										int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(847)
										int tmp27 = (int(tmp26) << int((int)16));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(847)
										int tmp28 = (int(tmp21) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(847)
										int tmp29 = (int(rgba) >> int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(847)
										int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(847)
										int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(847)
										int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(847)
										int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(847)
										int tmp34 = (int(tmp33) << int((int)8));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(847)
										int tmp35 = (int(tmp28) | int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(847)
										int tmp36 = (int(rgba) >> int((int)8));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(847)
										int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(847)
										int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(847)
										int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(847)
										int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(847)
										int tmp41 = (int(tmp35) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(847)
										argb = tmp41;
									}
									HX_STACK_LINE(847)
									tmp15 = argb;
								}
							}
						}
					}
					else{
						HX_STACK_LINE(847)
						int rgba = color;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(847)
						{
							HX_STACK_LINE(847)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(847)
							{
								HX_STACK_LINE(847)
								int argb = (int)0;		HX_STACK_VAR(argb,"argb");
								HX_STACK_LINE(847)
								tmp16 = argb;
							}
							HX_STACK_LINE(847)
							int argb = tmp16;		HX_STACK_VAR(argb,"argb");
							HX_STACK_LINE(847)
							{
								HX_STACK_LINE(847)
								int tmp17 = (int(rgba) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(847)
								int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(847)
								int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(847)
								int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(847)
								int tmp21 = (int(rgba) >> int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(847)
								int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(847)
								int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(847)
								int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(847)
								int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(847)
								int tmp26 = (int(tmp25) << int((int)16));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(847)
								int tmp27 = (int(tmp20) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(847)
								int tmp28 = (int(rgba) >> int((int)16));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(847)
								int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(847)
								int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(847)
								int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(847)
								int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(847)
								int tmp33 = (int(tmp32) << int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(847)
								int tmp34 = (int(tmp27) | int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(847)
								int tmp35 = (int(rgba) >> int((int)8));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(847)
								int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(847)
								int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(847)
								int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(847)
								int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(847)
								int tmp40 = (int(tmp34) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(847)
								argb = tmp40;
							}
							HX_STACK_LINE(847)
							tmp15 = argb;
						}
					}
					HX_STACK_LINE(843)
					int argb = tmp15;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(851)
					::lime::graphics::ImageBuffer tmp16 = this->buffer;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(851)
					int tmp17 = x;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(851)
					int tmp18 = this->offsetX;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(851)
					int tmp19 = y;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(851)
					int tmp20 = this->offsetX;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(851)
					tmp16->__srcBitmapData->__Field(HX_HCSTRING("setPixel","\x84","\x2f","\xd8","\xd0"), hx::paccDynamic )((tmp17 + tmp18),(tmp19 + tmp20),argb);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Image_obj,setPixel,(void))

Void Image_obj::setPixel32( int x,int y,int color,Dynamic format){
{
		HX_STACK_FRAME("lime.graphics.Image","setPixel32",0xb24a79e0,"lime.graphics.Image.setPixel32","lime/graphics/Image.hx",860,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(862)
		::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(862)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(862)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(862)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(862)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(862)
		if ((tmp3)){
			HX_STACK_LINE(862)
			tmp4 = (x < (int)0);
		}
		else{
			HX_STACK_LINE(862)
			tmp4 = true;
		}
		HX_STACK_LINE(862)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(862)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(862)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(862)
		if ((tmp6)){
			HX_STACK_LINE(862)
			tmp7 = (y < (int)0);
		}
		else{
			HX_STACK_LINE(862)
			tmp7 = true;
		}
		HX_STACK_LINE(862)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(862)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(862)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(862)
		if ((tmp9)){
			HX_STACK_LINE(862)
			int tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(862)
			int tmp12 = this->width;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(862)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(862)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(862)
			tmp10 = (tmp11 >= tmp14);
		}
		else{
			HX_STACK_LINE(862)
			tmp10 = true;
		}
		HX_STACK_LINE(862)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(862)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(862)
		if ((tmp11)){
			HX_STACK_LINE(862)
			int tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(862)
			int tmp14 = this->height;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(862)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(862)
			tmp12 = (tmp13 >= tmp15);
		}
		else{
			HX_STACK_LINE(862)
			tmp12 = true;
		}
		HX_STACK_LINE(862)
		if ((tmp12)){
			HX_STACK_LINE(862)
			return null();
		}
		HX_STACK_LINE(864)
		{
			HX_STACK_LINE(864)
			::lime::graphics::ImageType tmp13 = this->type;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(864)
			::lime::graphics::ImageType _g = tmp13;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(864)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(868)
					int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(868)
					int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(868)
					int tmp16 = color;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(868)
					Dynamic tmp17 = format;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(868)
					::lime::graphics::utils::ImageCanvasUtil_obj::setPixel32(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16,tmp17);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(876)
					int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(876)
					int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(876)
					int tmp16 = color;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(876)
					Dynamic tmp17 = format;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(876)
					::lime::graphics::utils::ImageDataUtil_obj::setPixel32(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16,tmp17);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(880)
					bool tmp14 = (format != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(880)
					int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(880)
					if ((tmp14)){
						HX_STACK_LINE(880)
						Dynamic tmp16 = format;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(880)
						switch( (int)(tmp16)){
							case (int)1: {
								HX_STACK_LINE(882)
								tmp15 = color;
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(883)
								int bgra = color;		HX_STACK_VAR(bgra,"bgra");
								HX_STACK_LINE(883)
								{
									HX_STACK_LINE(883)
									int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(883)
									{
										HX_STACK_LINE(883)
										int argb = (int)0;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(883)
										tmp17 = argb;
									}
									HX_STACK_LINE(883)
									int argb = tmp17;		HX_STACK_VAR(argb,"argb");
									HX_STACK_LINE(883)
									{
										HX_STACK_LINE(883)
										int tmp18 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(883)
										int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(883)
										int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(883)
										int tmp21 = (int(tmp20) << int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(883)
										int tmp22 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(883)
										int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(883)
										int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(883)
										int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(883)
										int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(883)
										int tmp27 = (int(tmp26) << int((int)16));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(883)
										int tmp28 = (int(tmp21) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(883)
										int tmp29 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(883)
										int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(883)
										int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(883)
										int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(883)
										int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(883)
										int tmp34 = (int(tmp33) << int((int)8));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(883)
										int tmp35 = (int(tmp28) | int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(883)
										int tmp36 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(883)
										int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(883)
										int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(883)
										int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(883)
										int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(883)
										int tmp41 = (int(tmp35) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(883)
										argb = tmp41;
									}
									HX_STACK_LINE(883)
									tmp15 = argb;
								}
							}
							;break;
							default: {
								HX_STACK_LINE(884)
								int rgba = color;		HX_STACK_VAR(rgba,"rgba");
								HX_STACK_LINE(884)
								{
									HX_STACK_LINE(884)
									int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(884)
									{
										HX_STACK_LINE(884)
										int argb = (int)0;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(884)
										tmp17 = argb;
									}
									HX_STACK_LINE(884)
									int argb = tmp17;		HX_STACK_VAR(argb,"argb");
									HX_STACK_LINE(884)
									{
										HX_STACK_LINE(884)
										int tmp18 = (int(rgba) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(884)
										int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(884)
										int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(884)
										int tmp21 = (int(tmp20) << int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(884)
										int tmp22 = (int(rgba) >> int((int)24));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(884)
										int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(884)
										int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(884)
										int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(884)
										int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(884)
										int tmp27 = (int(tmp26) << int((int)16));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(884)
										int tmp28 = (int(tmp21) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(884)
										int tmp29 = (int(rgba) >> int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(884)
										int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(884)
										int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(884)
										int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(884)
										int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(884)
										int tmp34 = (int(tmp33) << int((int)8));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(884)
										int tmp35 = (int(tmp28) | int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(884)
										int tmp36 = (int(rgba) >> int((int)8));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(884)
										int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(884)
										int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(884)
										int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(884)
										int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(884)
										int tmp41 = (int(tmp35) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(884)
										argb = tmp41;
									}
									HX_STACK_LINE(884)
									tmp15 = argb;
								}
							}
						}
					}
					else{
						HX_STACK_LINE(884)
						int rgba = color;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(884)
						{
							HX_STACK_LINE(884)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(884)
							{
								HX_STACK_LINE(884)
								int argb = (int)0;		HX_STACK_VAR(argb,"argb");
								HX_STACK_LINE(884)
								tmp16 = argb;
							}
							HX_STACK_LINE(884)
							int argb = tmp16;		HX_STACK_VAR(argb,"argb");
							HX_STACK_LINE(884)
							{
								HX_STACK_LINE(884)
								int tmp17 = (int(rgba) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(884)
								int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(884)
								int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(884)
								int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(884)
								int tmp21 = (int(rgba) >> int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(884)
								int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(884)
								int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(884)
								int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(884)
								int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(884)
								int tmp26 = (int(tmp25) << int((int)16));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(884)
								int tmp27 = (int(tmp20) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(884)
								int tmp28 = (int(rgba) >> int((int)16));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(884)
								int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(884)
								int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(884)
								int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(884)
								int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(884)
								int tmp33 = (int(tmp32) << int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(884)
								int tmp34 = (int(tmp27) | int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(884)
								int tmp35 = (int(rgba) >> int((int)8));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(884)
								int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(884)
								int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(884)
								int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(884)
								int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(884)
								int tmp40 = (int(tmp34) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(884)
								argb = tmp40;
							}
							HX_STACK_LINE(884)
							tmp15 = argb;
						}
					}
					HX_STACK_LINE(880)
					int argb = tmp15;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(888)
					::lime::graphics::ImageBuffer tmp16 = this->buffer;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(888)
					int tmp17 = x;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(888)
					int tmp18 = this->offsetX;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(888)
					int tmp19 = y;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(888)
					int tmp20 = this->offsetY;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(888)
					tmp16->__srcBitmapData->__Field(HX_HCSTRING("setPixel32","\x23","\x45","\xe6","\xda"), hx::paccDynamic )((tmp17 + tmp18),(tmp19 + tmp20),argb);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Image_obj,setPixel32,(void))

Void Image_obj::setPixels( ::lime::math::Rectangle rect,::haxe::io::Bytes bytes,Dynamic format){
{
		HX_STACK_FRAME("lime.graphics.Image","setPixels",0xb070d652,"lime.graphics.Image.setPixels","lime/graphics/Image.hx",897,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(899)
		::lime::math::Rectangle tmp = rect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(899)
		::lime::math::Rectangle tmp1 = this->__clipRect(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(899)
		rect = tmp1;
		HX_STACK_LINE(900)
		::lime::graphics::ImageBuffer tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(900)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(900)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(900)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(900)
		if ((tmp4)){
			HX_STACK_LINE(900)
			tmp5 = (rect == null());
		}
		else{
			HX_STACK_LINE(900)
			tmp5 = true;
		}
		HX_STACK_LINE(900)
		if ((tmp5)){
			HX_STACK_LINE(900)
			return null();
		}
		HX_STACK_LINE(902)
		{
			HX_STACK_LINE(902)
			::lime::graphics::ImageType tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(902)
			::lime::graphics::ImageType _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(902)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(906)
					::lime::math::Rectangle tmp7 = rect;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(906)
					::haxe::io::Bytes tmp8 = bytes;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(906)
					Dynamic tmp9 = format;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(906)
					::lime::graphics::utils::ImageCanvasUtil_obj::setPixels(hx::ObjectPtr<OBJ_>(this),tmp7,tmp8,tmp9);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(914)
					::lime::math::Rectangle tmp7 = rect;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(914)
					::haxe::io::Bytes tmp8 = bytes;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(914)
					Dynamic tmp9 = format;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(914)
					::lime::graphics::utils::ImageDataUtil_obj::setPixels(hx::ObjectPtr<OBJ_>(this),tmp7,tmp8,tmp9);
				}
				;break;
				case (int)2: {
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,setPixels,(void))

int Image_obj::threshold( ::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::String operation,int threshold,hx::Null< int >  __o_color,hx::Null< int >  __o_mask,hx::Null< bool >  __o_copySource,Dynamic format){
int color = __o_color.Default(0);
int mask = __o_mask.Default(-1);
bool copySource = __o_copySource.Default(false);
	HX_STACK_FRAME("lime.graphics.Image","threshold",0xf8c3358e,"lime.graphics.Image.threshold","lime/graphics/Image.hx",979,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceImage,"sourceImage")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(operation,"operation")
	HX_STACK_ARG(threshold,"threshold")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(copySource,"copySource")
	HX_STACK_ARG(format,"format")
{
		HX_STACK_LINE(981)
		::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(981)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(981)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(981)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(981)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(981)
		if ((tmp3)){
			HX_STACK_LINE(981)
			tmp4 = (sourceImage == null());
		}
		else{
			HX_STACK_LINE(981)
			tmp4 = true;
		}
		HX_STACK_LINE(981)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(981)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(981)
		if ((tmp5)){
			HX_STACK_LINE(981)
			tmp6 = (sourceRect == null());
		}
		else{
			HX_STACK_LINE(981)
			tmp6 = true;
		}
		HX_STACK_LINE(981)
		if ((tmp6)){
			HX_STACK_LINE(981)
			return (int)0;
		}
		HX_STACK_LINE(983)
		{
			HX_STACK_LINE(983)
			::lime::graphics::ImageType tmp7 = this->type;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(983)
			::lime::graphics::ImageType _g = tmp7;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(983)
			switch( (int)(_g->__Index())){
				case (int)0: case (int)1: {
					HX_STACK_LINE(991)
					::lime::graphics::Image tmp8 = sourceImage;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(991)
					::lime::math::Rectangle tmp9 = sourceRect;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(991)
					::lime::math::Vector2 tmp10 = destPoint;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(991)
					::String tmp11 = operation;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(991)
					int tmp12 = threshold;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(991)
					int tmp13 = color;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(991)
					int tmp14 = mask;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(991)
					bool tmp15 = copySource;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(991)
					Dynamic tmp16 = format;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(991)
					int tmp17 = ::lime::graphics::utils::ImageDataUtil_obj::threshold(hx::ObjectPtr<OBJ_>(this),tmp8,tmp9,tmp10,tmp11,tmp12,tmp13,tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(991)
					return tmp17;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(995)
					bool tmp8 = (format != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(995)
					int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(995)
					if ((tmp8)){
						HX_STACK_LINE(995)
						Dynamic tmp10 = format;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(995)
						switch( (int)(tmp10)){
							case (int)1: {
								HX_STACK_LINE(997)
								tmp9 = color;
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(998)
								int bgra = color;		HX_STACK_VAR(bgra,"bgra");
								HX_STACK_LINE(998)
								{
									HX_STACK_LINE(998)
									int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(998)
									{
										HX_STACK_LINE(998)
										int argb = (int)0;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(998)
										tmp11 = argb;
									}
									HX_STACK_LINE(998)
									int argb = tmp11;		HX_STACK_VAR(argb,"argb");
									HX_STACK_LINE(998)
									{
										HX_STACK_LINE(998)
										int tmp12 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(998)
										int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(998)
										int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(998)
										int tmp15 = (int(tmp14) << int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(998)
										int tmp16 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(998)
										int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(998)
										int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(998)
										int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(998)
										int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(998)
										int tmp21 = (int(tmp20) << int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(998)
										int tmp22 = (int(tmp15) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(998)
										int tmp23 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(998)
										int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(998)
										int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(998)
										int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(998)
										int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(998)
										int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(998)
										int tmp29 = (int(tmp22) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(998)
										int tmp30 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(998)
										int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(998)
										int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(998)
										int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(998)
										int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(998)
										int tmp35 = (int(tmp29) | int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(998)
										argb = tmp35;
									}
									HX_STACK_LINE(998)
									tmp9 = argb;
								}
							}
							;break;
							default: {
								HX_STACK_LINE(999)
								int rgba = color;		HX_STACK_VAR(rgba,"rgba");
								HX_STACK_LINE(999)
								{
									HX_STACK_LINE(999)
									int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(999)
									{
										HX_STACK_LINE(999)
										int argb = (int)0;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(999)
										tmp11 = argb;
									}
									HX_STACK_LINE(999)
									int argb = tmp11;		HX_STACK_VAR(argb,"argb");
									HX_STACK_LINE(999)
									{
										HX_STACK_LINE(999)
										int tmp12 = (int(rgba) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(999)
										int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(999)
										int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(999)
										int tmp15 = (int(tmp14) << int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(999)
										int tmp16 = (int(rgba) >> int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(999)
										int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(999)
										int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(999)
										int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(999)
										int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(999)
										int tmp21 = (int(tmp20) << int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(999)
										int tmp22 = (int(tmp15) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(999)
										int tmp23 = (int(rgba) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(999)
										int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(999)
										int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(999)
										int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(999)
										int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(999)
										int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(999)
										int tmp29 = (int(tmp22) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(999)
										int tmp30 = (int(rgba) >> int((int)8));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(999)
										int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(999)
										int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(999)
										int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(999)
										int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(999)
										int tmp35 = (int(tmp29) | int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(999)
										argb = tmp35;
									}
									HX_STACK_LINE(999)
									tmp9 = argb;
								}
							}
						}
					}
					else{
						HX_STACK_LINE(999)
						int rgba = color;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(999)
						{
							HX_STACK_LINE(999)
							int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(999)
							{
								HX_STACK_LINE(999)
								int argb = (int)0;		HX_STACK_VAR(argb,"argb");
								HX_STACK_LINE(999)
								tmp10 = argb;
							}
							HX_STACK_LINE(999)
							int argb = tmp10;		HX_STACK_VAR(argb,"argb");
							HX_STACK_LINE(999)
							{
								HX_STACK_LINE(999)
								int tmp11 = (int(rgba) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(999)
								int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(999)
								int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(999)
								int tmp14 = (int(tmp13) << int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(999)
								int tmp15 = (int(rgba) >> int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(999)
								int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(999)
								int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(999)
								int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(999)
								int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(999)
								int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(999)
								int tmp21 = (int(tmp14) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(999)
								int tmp22 = (int(rgba) >> int((int)16));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(999)
								int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(999)
								int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(999)
								int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(999)
								int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(999)
								int tmp27 = (int(tmp26) << int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(999)
								int tmp28 = (int(tmp21) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(999)
								int tmp29 = (int(rgba) >> int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(999)
								int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(999)
								int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(999)
								int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(999)
								int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(999)
								int tmp34 = (int(tmp28) | int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(999)
								argb = tmp34;
							}
							HX_STACK_LINE(999)
							tmp9 = argb;
						}
					}
					HX_STACK_LINE(995)
					int _color = tmp9;		HX_STACK_VAR(_color,"_color");
					HX_STACK_LINE(1003)
					bool tmp10 = (format != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1003)
					int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1003)
					if ((tmp10)){
						HX_STACK_LINE(1003)
						Dynamic tmp12 = format;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1003)
						switch( (int)(tmp12)){
							case (int)1: {
								HX_STACK_LINE(1005)
								tmp11 = mask;
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(1006)
								int bgra = mask;		HX_STACK_VAR(bgra,"bgra");
								HX_STACK_LINE(1006)
								{
									HX_STACK_LINE(1006)
									int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1006)
									{
										HX_STACK_LINE(1006)
										int argb = (int)0;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(1006)
										tmp13 = argb;
									}
									HX_STACK_LINE(1006)
									int argb = tmp13;		HX_STACK_VAR(argb,"argb");
									HX_STACK_LINE(1006)
									{
										HX_STACK_LINE(1006)
										int tmp14 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1006)
										int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1006)
										int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1006)
										int tmp17 = (int(tmp16) << int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1006)
										int tmp18 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1006)
										int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1006)
										int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1006)
										int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1006)
										int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1006)
										int tmp23 = (int(tmp22) << int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(1006)
										int tmp24 = (int(tmp17) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1006)
										int tmp25 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1006)
										int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1006)
										int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1006)
										int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1006)
										int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1006)
										int tmp30 = (int(tmp29) << int((int)8));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1006)
										int tmp31 = (int(tmp24) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(1006)
										int tmp32 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(1006)
										int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1006)
										int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(1006)
										int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(1006)
										int tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(1006)
										int tmp37 = (int(tmp31) | int(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(1006)
										argb = tmp37;
									}
									HX_STACK_LINE(1006)
									tmp11 = argb;
								}
							}
							;break;
							default: {
								HX_STACK_LINE(1007)
								int rgba = mask;		HX_STACK_VAR(rgba,"rgba");
								HX_STACK_LINE(1007)
								{
									HX_STACK_LINE(1007)
									int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1007)
									{
										HX_STACK_LINE(1007)
										int argb = (int)0;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(1007)
										tmp13 = argb;
									}
									HX_STACK_LINE(1007)
									int argb = tmp13;		HX_STACK_VAR(argb,"argb");
									HX_STACK_LINE(1007)
									{
										HX_STACK_LINE(1007)
										int tmp14 = (int(rgba) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1007)
										int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1007)
										int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1007)
										int tmp17 = (int(tmp16) << int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1007)
										int tmp18 = (int(rgba) >> int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1007)
										int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1007)
										int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1007)
										int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1007)
										int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1007)
										int tmp23 = (int(tmp22) << int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(1007)
										int tmp24 = (int(tmp17) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1007)
										int tmp25 = (int(rgba) >> int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1007)
										int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1007)
										int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1007)
										int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1007)
										int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1007)
										int tmp30 = (int(tmp29) << int((int)8));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1007)
										int tmp31 = (int(tmp24) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(1007)
										int tmp32 = (int(rgba) >> int((int)8));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(1007)
										int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1007)
										int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(1007)
										int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(1007)
										int tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(1007)
										int tmp37 = (int(tmp31) | int(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(1007)
										argb = tmp37;
									}
									HX_STACK_LINE(1007)
									tmp11 = argb;
								}
							}
						}
					}
					else{
						HX_STACK_LINE(1007)
						int rgba = mask;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(1007)
						{
							HX_STACK_LINE(1007)
							int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1007)
							{
								HX_STACK_LINE(1007)
								int argb = (int)0;		HX_STACK_VAR(argb,"argb");
								HX_STACK_LINE(1007)
								tmp12 = argb;
							}
							HX_STACK_LINE(1007)
							int argb = tmp12;		HX_STACK_VAR(argb,"argb");
							HX_STACK_LINE(1007)
							{
								HX_STACK_LINE(1007)
								int tmp13 = (int(rgba) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1007)
								int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1007)
								int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1007)
								int tmp16 = (int(tmp15) << int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1007)
								int tmp17 = (int(rgba) >> int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1007)
								int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1007)
								int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1007)
								int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1007)
								int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1007)
								int tmp22 = (int(tmp21) << int((int)16));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1007)
								int tmp23 = (int(tmp16) | int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1007)
								int tmp24 = (int(rgba) >> int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1007)
								int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1007)
								int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1007)
								int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1007)
								int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1007)
								int tmp29 = (int(tmp28) << int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1007)
								int tmp30 = (int(tmp23) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1007)
								int tmp31 = (int(rgba) >> int((int)8));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1007)
								int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1007)
								int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1007)
								int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1007)
								int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1007)
								int tmp36 = (int(tmp30) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1007)
								argb = tmp36;
							}
							HX_STACK_LINE(1007)
							tmp11 = argb;
						}
					}
					HX_STACK_LINE(1003)
					int _mask = tmp11;		HX_STACK_VAR(_mask,"_mask");
					HX_STACK_LINE(1011)
					int tmp12 = sourceImage->offsetX;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1011)
					int tmp13 = sourceImage->offsetY;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1011)
					sourceRect->offset(tmp12,tmp13);
					HX_STACK_LINE(1012)
					int tmp14 = this->offsetX;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1012)
					int tmp15 = this->offsetY;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1012)
					destPoint->offset(tmp14,tmp15);
					HX_STACK_LINE(1014)
					::lime::graphics::ImageBuffer tmp16 = this->buffer;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1014)
					Dynamic tmp17 = tmp16->__srcBitmapData->__Field(HX_HCSTRING("threshold","\xab","\xc3","\xa3","\x34"), hx::paccDynamic )(sourceImage->buffer->get_src(),sourceRect->__toFlashRectangle(),destPoint->__toFlashPoint(),operation,threshold,_color,_mask,copySource);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1014)
					return tmp17;
				}
				;break;
				default: {
				}
			}
		}
		HX_STACK_LINE(1020)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC9(Image_obj,threshold,return )

::lime::math::Rectangle Image_obj::__clipRect( ::lime::math::Rectangle r){
	HX_STACK_FRAME("lime.graphics.Image","__clipRect",0xd30737f1,"lime.graphics.Image.__clipRect","lime/graphics/Image.hx",1054,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(1056)
	bool tmp = (r == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1056)
	if ((tmp)){
		HX_STACK_LINE(1056)
		return null();
	}
	HX_STACK_LINE(1058)
	bool tmp1 = (r->x < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1058)
	if ((tmp1)){
		HX_STACK_LINE(1060)
		Float tmp2 = r->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1060)
		Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1060)
		hx::SubEq(r->width,tmp3);
		HX_STACK_LINE(1061)
		r->x = (int)0;
		HX_STACK_LINE(1063)
		Float tmp4 = (r->x + r->width);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1063)
		bool tmp5 = (tmp4 <= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1063)
		if ((tmp5)){
			HX_STACK_LINE(1063)
			return null();
		}
	}
	HX_STACK_LINE(1067)
	bool tmp2 = (r->y < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1067)
	if ((tmp2)){
		HX_STACK_LINE(1069)
		Float tmp3 = r->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1069)
		Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1069)
		hx::SubEq(r->height,tmp4);
		HX_STACK_LINE(1070)
		r->y = (int)0;
		HX_STACK_LINE(1072)
		Float tmp5 = (r->y + r->height);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1072)
		bool tmp6 = (tmp5 <= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1072)
		if ((tmp6)){
			HX_STACK_LINE(1072)
			return null();
		}
	}
	HX_STACK_LINE(1076)
	Float tmp3 = (r->x + r->width);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1076)
	int tmp4 = this->width;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1076)
	bool tmp5 = (tmp3 >= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1076)
	if ((tmp5)){
		HX_STACK_LINE(1078)
		Float tmp6 = (r->x + r->width);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1078)
		int tmp7 = this->width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1078)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1078)
		hx::SubEq(r->width,tmp8);
		HX_STACK_LINE(1080)
		bool tmp9 = (r->width <= (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1080)
		if ((tmp9)){
			HX_STACK_LINE(1080)
			return null();
		}
	}
	HX_STACK_LINE(1084)
	Float tmp6 = (r->y + r->height);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1084)
	int tmp7 = this->height;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1084)
	bool tmp8 = (tmp6 >= tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1084)
	if ((tmp8)){
		HX_STACK_LINE(1086)
		Float tmp9 = (r->y + r->height);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1086)
		int tmp10 = this->height;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1086)
		Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1086)
		hx::SubEq(r->height,tmp11);
		HX_STACK_LINE(1088)
		bool tmp12 = (r->height <= (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1088)
		if ((tmp12)){
			HX_STACK_LINE(1088)
			return null();
		}
	}
	HX_STACK_LINE(1092)
	::lime::math::Rectangle tmp9 = r;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1092)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__clipRect,return )

Void Image_obj::__fromBase64( ::String base64,::String type,Dynamic onload){
{
		HX_STACK_FRAME("lime.graphics.Image","__fromBase64",0x71681bb6,"lime.graphics.Image.__fromBase64","lime/graphics/Image.hx",1097,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(base64,"base64")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(onload,"onload")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,__fromBase64,(void))

Void Image_obj::__fromBytes( ::haxe::io::Bytes bytes,Dynamic onload){
{
		HX_STACK_FRAME("lime.graphics.Image","__fromBytes",0x40972c24,"lime.graphics.Image.__fromBytes","lime/graphics/Image.hx",1127,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(1159)
		::lime::graphics::ImageBuffer imageBuffer = null();		HX_STACK_VAR(imageBuffer,"imageBuffer");
		HX_STACK_LINE(1162)
		Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1162)
		{
			HX_STACK_LINE(1162)
			::lime::utils::ArrayBufferView tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1162)
			{
				HX_STACK_LINE(1162)
				::haxe::io::Bytes tmp2 = ::haxe::io::Bytes_obj::alloc((int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1162)
				::haxe::io::Bytes buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(1162)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(1162)
				bool tmp3 = (buffer != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1162)
				if ((tmp3)){
					HX_STACK_LINE(1162)
					::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1162)
					{
						HX_STACK_LINE(1162)
						::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1162)
						::lime::utils::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1162)
						int tmp6 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1162)
						bool tmp7 = (tmp6 != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1162)
						if ((tmp7)){
							HX_STACK_LINE(1162)
							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
						}
						HX_STACK_LINE(1162)
						int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
						HX_STACK_LINE(1162)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(1162)
						int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
						HX_STACK_LINE(1162)
						{
							HX_STACK_LINE(1162)
							newByteLength = bufferByteLength;
							HX_STACK_LINE(1162)
							int tmp8 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1162)
							bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1162)
							if ((tmp9)){
								HX_STACK_LINE(1162)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(1162)
							bool tmp10 = (newByteLength < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1162)
							if ((tmp10)){
								HX_STACK_LINE(1162)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
						}
						HX_STACK_LINE(1162)
						_this->buffer = buffer;
						HX_STACK_LINE(1162)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(1162)
						_this->byteLength = newByteLength;
						HX_STACK_LINE(1162)
						Float tmp8 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1162)
						int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1162)
						_this->length = tmp9;
						HX_STACK_LINE(1162)
						tmp4 = _this;
					}
					HX_STACK_LINE(1162)
					this1 = tmp4;
				}
				else{
					HX_STACK_LINE(1162)
					HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
				}
				HX_STACK_LINE(1162)
				tmp1 = this1;
			}
			HX_STACK_LINE(1162)
			::lime::graphics::ImageBuffer tmp2 = ::lime::graphics::ImageBuffer_obj::__new(tmp1,null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1162)
			Dynamic buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(1162)
			tmp = ::lime::graphics::Image_obj::cffi_lime_image_load.call(hx::DynamicPtr(bytes),hx::DynamicPtr(buffer));
		}
		HX_STACK_LINE(1162)
		imageBuffer = tmp;
		HX_STACK_LINE(1170)
		bool tmp1 = (imageBuffer != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1170)
		if ((tmp1)){
			HX_STACK_LINE(1172)
			::lime::graphics::ImageBuffer tmp2 = imageBuffer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1172)
			this->__fromImageBuffer(tmp2);
			HX_STACK_LINE(1174)
			bool tmp3 = (onload != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1174)
			if ((tmp3)){
				HX_STACK_LINE(1176)
				onload(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,__fromBytes,(void))

Void Image_obj::__fromFile( ::String path,Dynamic onload,Dynamic onerror){
{
		HX_STACK_FRAME("lime.graphics.Image","__fromFile",0x1c2444e3,"lime.graphics.Image.__fromFile","lime/graphics/Image.hx",1191,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_ARG(onerror,"onerror")
		HX_STACK_LINE(1232)
		::lime::graphics::ImageBuffer buffer = null();		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(1286)
		bool tmp = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1286)
		if ((tmp)){
			HX_STACK_LINE(1289)
			Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1289)
			{
				HX_STACK_LINE(1289)
				::lime::utils::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1289)
				{
					HX_STACK_LINE(1289)
					::haxe::io::Bytes tmp3 = ::haxe::io::Bytes_obj::alloc((int)0);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1289)
					::haxe::io::Bytes buffer1 = tmp3;		HX_STACK_VAR(buffer1,"buffer1");
					HX_STACK_LINE(1289)
					::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(1289)
					bool tmp4 = (buffer1 != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1289)
					if ((tmp4)){
						HX_STACK_LINE(1289)
						::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1289)
						{
							HX_STACK_LINE(1289)
							::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1289)
							::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1289)
							int tmp7 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1289)
							bool tmp8 = (tmp7 != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1289)
							if ((tmp8)){
								HX_STACK_LINE(1289)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(1289)
							int bufferByteLength = buffer1->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(1289)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(1289)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(1289)
							{
								HX_STACK_LINE(1289)
								newByteLength = bufferByteLength;
								HX_STACK_LINE(1289)
								int tmp9 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1289)
								bool tmp10 = (tmp9 != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1289)
								if ((tmp10)){
									HX_STACK_LINE(1289)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(1289)
								bool tmp11 = (newByteLength < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1289)
								if ((tmp11)){
									HX_STACK_LINE(1289)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(1289)
							_this->buffer = buffer1;
							HX_STACK_LINE(1289)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(1289)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(1289)
							Float tmp9 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1289)
							int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1289)
							_this->length = tmp10;
							HX_STACK_LINE(1289)
							tmp5 = _this;
						}
						HX_STACK_LINE(1289)
						this1 = tmp5;
					}
					else{
						HX_STACK_LINE(1289)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
					}
					HX_STACK_LINE(1289)
					tmp2 = this1;
				}
				HX_STACK_LINE(1289)
				::lime::graphics::ImageBuffer tmp3 = ::lime::graphics::ImageBuffer_obj::__new(tmp2,null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1289)
				Dynamic buffer1 = tmp3;		HX_STACK_VAR(buffer1,"buffer1");
				HX_STACK_LINE(1289)
				tmp1 = ::lime::graphics::Image_obj::cffi_lime_image_load.call(hx::DynamicPtr(path),hx::DynamicPtr(buffer1));
			}
			HX_STACK_LINE(1289)
			buffer = tmp1;
		}
		HX_STACK_LINE(1340)
		bool tmp1 = (buffer != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1340)
		if ((tmp1)){
			HX_STACK_LINE(1342)
			::lime::graphics::ImageBuffer tmp2 = buffer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1342)
			this->__fromImageBuffer(tmp2);
			HX_STACK_LINE(1344)
			bool tmp3 = (onload != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1344)
			if ((tmp3)){
				HX_STACK_LINE(1346)
				onload(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,__fromFile,(void))

Void Image_obj::__fromImageBuffer( ::lime::graphics::ImageBuffer buffer){
{
		HX_STACK_FRAME("lime.graphics.Image","__fromImageBuffer",0xe152fb34,"lime.graphics.Image.__fromImageBuffer","lime/graphics/Image.hx",1361,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(1363)
		this->buffer = buffer;
		HX_STACK_LINE(1365)
		bool tmp = (buffer != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1365)
		if ((tmp)){
			HX_STACK_LINE(1367)
			int tmp1 = this->width;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1367)
			bool tmp2 = (tmp1 == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1367)
			if ((tmp2)){
				HX_STACK_LINE(1369)
				this->width = buffer->width;
			}
			HX_STACK_LINE(1373)
			int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1373)
			bool tmp4 = (tmp3 == (int)-1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1373)
			if ((tmp4)){
				HX_STACK_LINE(1375)
				this->height = buffer->height;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__fromImageBuffer,(void))

::lime::utils::ArrayBufferView Image_obj::get_data( ){
	HX_STACK_FRAME("lime.graphics.Image","get_data",0x7986ad30,"lime.graphics.Image.get_data","lime/graphics/Image.hx",1418,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1420)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1420)
	::lime::utils::ArrayBufferView tmp1 = tmp->data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1420)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1420)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1420)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1420)
	if ((tmp3)){
		HX_STACK_LINE(1420)
		::lime::graphics::ImageBuffer tmp5 = this->buffer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1420)
		::lime::graphics::ImageBuffer tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1420)
		::lime::graphics::ImageBuffer tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1420)
		int tmp8 = tmp7->width;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1420)
		tmp4 = (tmp8 > (int)0);
	}
	else{
		HX_STACK_LINE(1420)
		tmp4 = false;
	}
	HX_STACK_LINE(1420)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1420)
	if ((tmp4)){
		HX_STACK_LINE(1420)
		::lime::graphics::ImageBuffer tmp6 = this->buffer;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1420)
		::lime::graphics::ImageBuffer tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1420)
		int tmp8 = tmp7->height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1420)
		tmp5 = (tmp8 > (int)0);
	}
	else{
		HX_STACK_LINE(1420)
		tmp5 = false;
	}
	HX_STACK_LINE(1420)
	if ((tmp5)){
	}
	HX_STACK_LINE(1435)
	::lime::graphics::ImageBuffer tmp6 = this->buffer;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1435)
	::lime::utils::ArrayBufferView tmp7 = tmp6->data;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1435)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_data,return )

::lime::utils::ArrayBufferView Image_obj::set_data( ::lime::utils::ArrayBufferView value){
	HX_STACK_FRAME("lime.graphics.Image","set_data",0x27e406a4,"lime.graphics.Image.set_data","lime/graphics/Image.hx",1440,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1442)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1442)
	::lime::utils::ArrayBufferView tmp1 = tmp->data = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1442)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_data,return )

int Image_obj::get_format( ){
	HX_STACK_FRAME("lime.graphics.Image","get_format",0xc57a33bd,"lime.graphics.Image.get_format","lime/graphics/Image.hx",1447,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1449)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1449)
	int tmp1 = tmp->format;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1449)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_format,return )

int Image_obj::set_format( int value){
	HX_STACK_FRAME("lime.graphics.Image","set_format",0xc8f7d231,"lime.graphics.Image.set_format","lime/graphics/Image.hx",1454,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1456)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1456)
	int tmp1 = tmp->format;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1456)
	int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1456)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1456)
	if ((tmp3)){
		HX_STACK_LINE(1458)
		::lime::graphics::ImageType tmp4 = this->type;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1458)
		::lime::graphics::ImageType _g = tmp4;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1458)
		switch( (int)(_g->__Index())){
			case (int)1: {
				HX_STACK_LINE(1462)
				int tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1462)
				::lime::graphics::utils::ImageDataUtil_obj::setFormat(hx::ObjectPtr<OBJ_>(this),tmp5);
			}
			;break;
			default: {
			}
		}
	}
	HX_STACK_LINE(1470)
	::lime::graphics::ImageBuffer tmp4 = this->buffer;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1470)
	int tmp5 = tmp4->format = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1470)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_format,return )

bool Image_obj::get_powerOfTwo( ){
	HX_STACK_FRAME("lime.graphics.Image","get_powerOfTwo",0x62ee1df6,"lime.graphics.Image.get_powerOfTwo","lime/graphics/Image.hx",1475,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1477)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1477)
	int tmp1 = tmp->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1477)
	bool tmp2 = (tmp1 != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1477)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1477)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1477)
	if ((tmp3)){
		HX_STACK_LINE(1477)
		::lime::graphics::ImageBuffer tmp5 = this->buffer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1477)
		::lime::graphics::ImageBuffer tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1477)
		::lime::graphics::ImageBuffer tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1477)
		int tmp8 = tmp7->width;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1477)
		::lime::graphics::ImageBuffer tmp9 = this->buffer;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1477)
		::lime::graphics::ImageBuffer tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1477)
		::lime::graphics::ImageBuffer tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1477)
		int tmp12 = tmp11->width;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1477)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1477)
		int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1477)
		int tmp15 = ~(int)(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1477)
		int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1477)
		int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1477)
		int tmp18 = (tmp17 + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1477)
		int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1477)
		int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1477)
		int tmp21 = (int(tmp8) & int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1477)
		int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1477)
		int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1477)
		::lime::graphics::ImageBuffer tmp24 = this->buffer;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1477)
		::lime::graphics::ImageBuffer tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1477)
		::lime::graphics::ImageBuffer tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1477)
		int tmp27 = tmp26->width;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1477)
		tmp4 = (tmp23 == tmp27);
	}
	else{
		HX_STACK_LINE(1477)
		tmp4 = false;
	}
	HX_STACK_LINE(1477)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1477)
	if ((tmp4)){
		HX_STACK_LINE(1477)
		::lime::graphics::ImageBuffer tmp6 = this->buffer;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1477)
		::lime::graphics::ImageBuffer tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1477)
		int tmp8 = tmp7->height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1477)
		bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1477)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1477)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1477)
		if ((tmp11)){
			HX_STACK_LINE(1477)
			::lime::graphics::ImageBuffer tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1477)
			::lime::graphics::ImageBuffer tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1477)
			::lime::graphics::ImageBuffer tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1477)
			int tmp15 = tmp14->height;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1477)
			::lime::graphics::ImageBuffer tmp16 = this->buffer;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1477)
			::lime::graphics::ImageBuffer tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1477)
			::lime::graphics::ImageBuffer tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1477)
			int tmp19 = tmp18->height;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1477)
			int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1477)
			int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1477)
			int tmp22 = ~(int)(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1477)
			int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1477)
			int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1477)
			int tmp25 = (tmp24 + (int)1);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1477)
			int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1477)
			int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1477)
			int tmp28 = (int(tmp15) & int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1477)
			int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1477)
			int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1477)
			::lime::graphics::ImageBuffer tmp31 = this->buffer;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1477)
			::lime::graphics::ImageBuffer tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1477)
			::lime::graphics::ImageBuffer tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1477)
			int tmp34 = tmp33->height;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1477)
			tmp5 = (tmp30 == tmp34);
		}
		else{
			HX_STACK_LINE(1477)
			tmp5 = false;
		}
	}
	else{
		HX_STACK_LINE(1477)
		tmp5 = false;
	}
	HX_STACK_LINE(1477)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_powerOfTwo,return )

bool Image_obj::set_powerOfTwo( bool value){
	HX_STACK_FRAME("lime.graphics.Image","set_powerOfTwo",0x830e066a,"lime.graphics.Image.set_powerOfTwo","lime/graphics/Image.hx",1482,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1484)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1484)
	bool tmp1 = this->get_powerOfTwo();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1484)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1484)
	if ((tmp2)){
		HX_STACK_LINE(1486)
		int newWidth = (int)1;		HX_STACK_VAR(newWidth,"newWidth");
		HX_STACK_LINE(1487)
		int newHeight = (int)1;		HX_STACK_VAR(newHeight,"newHeight");
		HX_STACK_LINE(1489)
		while((true)){
			HX_STACK_LINE(1489)
			int tmp3 = newWidth;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1489)
			::lime::graphics::ImageBuffer tmp4 = this->buffer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1489)
			int tmp5 = tmp4->width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1489)
			bool tmp6 = (tmp3 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1489)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1489)
			if ((tmp7)){
				HX_STACK_LINE(1489)
				break;
			}
			HX_STACK_LINE(1491)
			hx::ShlEq(newWidth,(int)1);
		}
		HX_STACK_LINE(1495)
		while((true)){
			HX_STACK_LINE(1495)
			int tmp3 = newHeight;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1495)
			::lime::graphics::ImageBuffer tmp4 = this->buffer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1495)
			int tmp5 = tmp4->height;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1495)
			bool tmp6 = (tmp3 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1495)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1495)
			if ((tmp7)){
				HX_STACK_LINE(1495)
				break;
			}
			HX_STACK_LINE(1497)
			hx::ShlEq(newHeight,(int)1);
		}
		HX_STACK_LINE(1501)
		{
			HX_STACK_LINE(1501)
			::lime::graphics::ImageType tmp3 = this->type;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1501)
			::lime::graphics::ImageType _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1501)
			switch( (int)(_g->__Index())){
				case (int)0: {
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(1509)
					int tmp4 = newWidth;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1509)
					int tmp5 = newHeight;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1509)
					::lime::graphics::utils::ImageDataUtil_obj::resizeBuffer(hx::ObjectPtr<OBJ_>(this),tmp4,tmp5);
				}
				;break;
				case (int)2: {
				}
				;break;
				default: {
				}
			}
		}
	}
	HX_STACK_LINE(1527)
	bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1527)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_powerOfTwo,return )

bool Image_obj::get_premultiplied( ){
	HX_STACK_FRAME("lime.graphics.Image","get_premultiplied",0xc1478990,"lime.graphics.Image.get_premultiplied","lime/graphics/Image.hx",1532,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1534)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1534)
	bool tmp1 = tmp->premultiplied;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1534)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_premultiplied,return )

bool Image_obj::set_premultiplied( bool value){
	HX_STACK_FRAME("lime.graphics.Image","set_premultiplied",0xe4b5619c,"lime.graphics.Image.set_premultiplied","lime/graphics/Image.hx",1539,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1541)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1541)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1541)
	if ((tmp)){
		HX_STACK_LINE(1541)
		::lime::graphics::ImageBuffer tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1541)
		::lime::graphics::ImageBuffer tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1541)
		bool tmp4 = tmp3->premultiplied;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1541)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1541)
		tmp1 = !(tmp5);
	}
	else{
		HX_STACK_LINE(1541)
		tmp1 = false;
	}
	HX_STACK_LINE(1541)
	if ((tmp1)){
		HX_STACK_LINE(1543)
		::lime::graphics::ImageType tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1543)
		::lime::graphics::ImageType _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1543)
		switch( (int)(_g->__Index())){
			case (int)0: case (int)1: {
				HX_STACK_LINE(1551)
				::lime::graphics::utils::ImageDataUtil_obj::multiplyAlpha(hx::ObjectPtr<OBJ_>(this));
			}
			;break;
			default: {
			}
		}
	}
	else{
		HX_STACK_LINE(1559)
		bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1559)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1559)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1559)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1559)
		if ((tmp4)){
			HX_STACK_LINE(1559)
			::lime::graphics::ImageBuffer tmp6 = this->buffer;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1559)
			::lime::graphics::ImageBuffer tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1559)
			tmp5 = tmp7->premultiplied;
		}
		else{
			HX_STACK_LINE(1559)
			tmp5 = false;
		}
		HX_STACK_LINE(1559)
		if ((tmp5)){
			HX_STACK_LINE(1561)
			::lime::graphics::ImageType tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1561)
			::lime::graphics::ImageType _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1561)
			switch( (int)(_g->__Index())){
				case (int)1: {
					HX_STACK_LINE(1569)
					::lime::graphics::utils::ImageDataUtil_obj::unmultiplyAlpha(hx::ObjectPtr<OBJ_>(this));
				}
				;break;
				default: {
				}
			}
		}
	}
	HX_STACK_LINE(1579)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1579)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_premultiplied,return )

::lime::math::Rectangle Image_obj::get_rect( ){
	HX_STACK_FRAME("lime.graphics.Image","get_rect",0x82caa42a,"lime.graphics.Image.get_rect","lime/graphics/Image.hx",1584,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1586)
	int tmp = this->width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1586)
	int tmp1 = this->height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1586)
	::lime::math::Rectangle tmp2 = ::lime::math::Rectangle_obj::__new((int)0,(int)0,tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1586)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_rect,return )

Dynamic Image_obj::get_src( ){
	HX_STACK_FRAME("lime.graphics.Image","get_src",0x66c2929e,"lime.graphics.Image.get_src","lime/graphics/Image.hx",1591,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1601)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1601)
	Dynamic tmp1 = tmp->get_src();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1601)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_src,return )

Dynamic Image_obj::set_src( Dynamic value){
	HX_STACK_FRAME("lime.graphics.Image","set_src",0x59c423aa,"lime.graphics.Image.set_src","lime/graphics/Image.hx",1606,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1608)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1608)
	Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1608)
	Dynamic tmp2 = tmp->set_src(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1608)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_src,return )

bool Image_obj::get_transparent( ){
	HX_STACK_FRAME("lime.graphics.Image","get_transparent",0xe1ee610c,"lime.graphics.Image.get_transparent","lime/graphics/Image.hx",1613,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1615)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1615)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1615)
	if ((tmp1)){
		HX_STACK_LINE(1615)
		return false;
	}
	HX_STACK_LINE(1616)
	::lime::graphics::ImageBuffer tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1616)
	bool tmp3 = tmp2->transparent;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1616)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_transparent,return )

bool Image_obj::set_transparent( bool value){
	HX_STACK_FRAME("lime.graphics.Image","set_transparent",0xddb9de18,"lime.graphics.Image.set_transparent","lime/graphics/Image.hx",1621,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1624)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1624)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1624)
	if ((tmp1)){
		HX_STACK_LINE(1624)
		return false;
	}
	HX_STACK_LINE(1625)
	::lime::graphics::ImageBuffer tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1625)
	bool tmp3 = tmp2->transparent = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1625)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_transparent,return )

::String Image_obj::__base64Chars;

::haxe::crypto::BaseCode Image_obj::__base64Encoder;

::lime::graphics::Image Image_obj::fromBase64( ::String base64,::String type,Dynamic onload){
	HX_STACK_FRAME("lime.graphics.Image","fromBase64",0x6fd03756,"lime.graphics.Image.fromBase64","lime/graphics/Image.hx",460,0xc7b862ad)
	HX_STACK_ARG(base64,"base64")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_LINE(462)
	bool tmp = (base64 == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(462)
	if ((tmp)){
		HX_STACK_LINE(462)
		return null();
	}
	HX_STACK_LINE(463)
	::lime::graphics::Image tmp1 = ::lime::graphics::Image_obj::__new(null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(463)
	::lime::graphics::Image image = tmp1;		HX_STACK_VAR(image,"image");
	HX_STACK_LINE(464)
	::String tmp2 = base64;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(464)
	::String tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(464)
	Dynamic tmp4 = onload;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(464)
	image->__fromBase64(tmp2,tmp3,tmp4);
	HX_STACK_LINE(465)
	::lime::graphics::Image tmp5 = image;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(465)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Image_obj,fromBase64,return )

::lime::graphics::Image Image_obj::fromBitmapData( Dynamic bitmapData){
	HX_STACK_FRAME("lime.graphics.Image","fromBitmapData",0x2e36df00,"lime.graphics.Image.fromBitmapData","lime/graphics/Image.hx",473,0xc7b862ad)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_LINE(476)
	bool tmp = (bitmapData == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(476)
	if ((tmp)){
		HX_STACK_LINE(476)
		return null();
	}
	HX_STACK_LINE(482)
	return bitmapData->__Field(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"), hx::paccDynamic );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,fromBitmapData,return )

::lime::graphics::Image Image_obj::fromBytes( ::haxe::io::Bytes bytes,Dynamic onload){
	HX_STACK_FRAME("lime.graphics.Image","fromBytes",0x36406484,"lime.graphics.Image.fromBytes","lime/graphics/Image.hx",488,0xc7b862ad)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_LINE(490)
	bool tmp = (bytes == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(490)
	if ((tmp)){
		HX_STACK_LINE(490)
		return null();
	}
	HX_STACK_LINE(491)
	::lime::graphics::Image tmp1 = ::lime::graphics::Image_obj::__new(null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(491)
	::lime::graphics::Image image = tmp1;		HX_STACK_VAR(image,"image");
	HX_STACK_LINE(492)
	::haxe::io::Bytes tmp2 = bytes;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(492)
	Dynamic tmp3 = onload;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(492)
	image->__fromBytes(tmp2,tmp3);
	HX_STACK_LINE(493)
	::lime::graphics::Image tmp4 = image;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(493)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Image_obj,fromBytes,return )

::lime::graphics::Image Image_obj::fromCanvas( Dynamic canvas){
	HX_STACK_FRAME("lime.graphics.Image","fromCanvas",0xd2ea8e9f,"lime.graphics.Image.fromCanvas","lime/graphics/Image.hx",501,0xc7b862ad)
	HX_STACK_ARG(canvas,"canvas")
	HX_STACK_LINE(504)
	bool tmp = (canvas == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(504)
	if ((tmp)){
		HX_STACK_LINE(504)
		return null();
	}
	HX_STACK_LINE(505)
	::lime::graphics::ImageBuffer tmp1 = ::lime::graphics::ImageBuffer_obj::__new(null(),canvas->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),canvas->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(505)
	::lime::graphics::ImageBuffer buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
	HX_STACK_LINE(506)
	Dynamic tmp2 = canvas;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(506)
	buffer->set_src(tmp2);
	HX_STACK_LINE(507)
	::lime::graphics::Image tmp3 = ::lime::graphics::Image_obj::__new(buffer,null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(507)
	::lime::graphics::Image image = tmp3;		HX_STACK_VAR(image,"image");
	HX_STACK_LINE(508)
	image->type = ::lime::graphics::ImageType_obj::CANVAS;
	HX_STACK_LINE(509)
	::lime::graphics::Image tmp4 = image;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(509)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,fromCanvas,return )

::lime::graphics::Image Image_obj::fromFile( ::String path,Dynamic onload,Dynamic onerror){
	HX_STACK_FRAME("lime.graphics.Image","fromFile",0x58f03883,"lime.graphics.Image.fromFile","lime/graphics/Image.hx",514,0xc7b862ad)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_ARG(onerror,"onerror")
	HX_STACK_LINE(516)
	bool tmp = (path == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(516)
	if ((tmp)){
		HX_STACK_LINE(516)
		return null();
	}
	HX_STACK_LINE(517)
	::lime::graphics::Image tmp1 = ::lime::graphics::Image_obj::__new(null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(517)
	::lime::graphics::Image image = tmp1;		HX_STACK_VAR(image,"image");
	HX_STACK_LINE(518)
	::String tmp2 = path;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(518)
	Dynamic tmp3 = onload;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(518)
	Dynamic tmp4 = onerror;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(518)
	image->__fromFile(tmp2,tmp3,tmp4);
	HX_STACK_LINE(519)
	::lime::graphics::Image tmp5 = image;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(519)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Image_obj,fromFile,return )

::lime::graphics::Image Image_obj::fromImageElement( Dynamic image){
	HX_STACK_FRAME("lime.graphics.Image","fromImageElement",0x196571a8,"lime.graphics.Image.fromImageElement","lime/graphics/Image.hx",527,0xc7b862ad)
	HX_STACK_ARG(image,"image")
	HX_STACK_LINE(530)
	bool tmp = (image == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(530)
	if ((tmp)){
		HX_STACK_LINE(530)
		return null();
	}
	HX_STACK_LINE(531)
	::lime::graphics::ImageBuffer tmp1 = ::lime::graphics::ImageBuffer_obj::__new(null(),image->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),image->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(531)
	::lime::graphics::ImageBuffer buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
	HX_STACK_LINE(532)
	Dynamic tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(532)
	buffer->set_src(tmp2);
	HX_STACK_LINE(533)
	::lime::graphics::Image tmp3 = ::lime::graphics::Image_obj::__new(buffer,null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(533)
	::lime::graphics::Image _image = tmp3;		HX_STACK_VAR(_image,"_image");
	HX_STACK_LINE(534)
	_image->type = ::lime::graphics::ImageType_obj::CANVAS;
	HX_STACK_LINE(535)
	::lime::graphics::Image tmp4 = _image;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(535)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,fromImageElement,return )

::String Image_obj::__base64Encode( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.graphics.Image","__base64Encode",0x6ec3d362,"lime.graphics.Image.__base64Encode","lime/graphics/Image.hx",1047,0xc7b862ad)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(1047)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__base64Encode,return )

bool Image_obj::__isJPG( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.graphics.Image","__isJPG",0x6ba35b1a,"lime.graphics.Image.__isJPG","lime/graphics/Image.hx",1384,0xc7b862ad)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(1386)
	int tmp = bytes->b->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1386)
	bool tmp1 = (tmp == (int)255);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1386)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1386)
	if ((tmp1)){
		HX_STACK_LINE(1386)
		int tmp3 = bytes->b->__get((int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1386)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1386)
		tmp2 = (tmp4 == (int)216);
	}
	else{
		HX_STACK_LINE(1386)
		tmp2 = false;
	}
	HX_STACK_LINE(1386)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__isJPG,return )

bool Image_obj::__isPNG( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.graphics.Image","__isPNG",0x6ba7e6e2,"lime.graphics.Image.__isPNG","lime/graphics/Image.hx",1391,0xc7b862ad)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(1393)
	int tmp = bytes->b->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1393)
	bool tmp1 = (tmp == (int)137);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1393)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1393)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1393)
	if ((tmp2)){
		HX_STACK_LINE(1393)
		int tmp4 = bytes->b->__get((int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1393)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1393)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1393)
		tmp3 = (tmp6 == (int)80);
	}
	else{
		HX_STACK_LINE(1393)
		tmp3 = false;
	}
	HX_STACK_LINE(1393)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1393)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1393)
	if ((tmp4)){
		HX_STACK_LINE(1393)
		int tmp6 = bytes->b->__get((int)2);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1393)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1393)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1393)
		tmp5 = (tmp8 == (int)78);
	}
	else{
		HX_STACK_LINE(1393)
		tmp5 = false;
	}
	HX_STACK_LINE(1393)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1393)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1393)
	if ((tmp6)){
		HX_STACK_LINE(1393)
		int tmp8 = bytes->b->__get((int)3);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1393)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1393)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1393)
		tmp7 = (tmp10 == (int)71);
	}
	else{
		HX_STACK_LINE(1393)
		tmp7 = false;
	}
	HX_STACK_LINE(1393)
	bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1393)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1393)
	if ((tmp8)){
		HX_STACK_LINE(1393)
		int tmp10 = bytes->b->__get((int)4);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1393)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1393)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1393)
		tmp9 = (tmp12 == (int)13);
	}
	else{
		HX_STACK_LINE(1393)
		tmp9 = false;
	}
	HX_STACK_LINE(1393)
	bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1393)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1393)
	if ((tmp10)){
		HX_STACK_LINE(1393)
		int tmp12 = bytes->b->__get((int)5);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1393)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1393)
		int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1393)
		tmp11 = (tmp14 == (int)10);
	}
	else{
		HX_STACK_LINE(1393)
		tmp11 = false;
	}
	HX_STACK_LINE(1393)
	bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1393)
	bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1393)
	if ((tmp12)){
		HX_STACK_LINE(1393)
		int tmp14 = bytes->b->__get((int)6);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1393)
		int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1393)
		int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1393)
		tmp13 = (tmp16 == (int)26);
	}
	else{
		HX_STACK_LINE(1393)
		tmp13 = false;
	}
	HX_STACK_LINE(1393)
	bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1393)
	if ((tmp13)){
		HX_STACK_LINE(1393)
		int tmp15 = bytes->b->__get((int)7);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1393)
		int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1393)
		tmp14 = (tmp16 == (int)10);
	}
	else{
		HX_STACK_LINE(1393)
		tmp14 = false;
	}
	HX_STACK_LINE(1393)
	return tmp14;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__isPNG,return )

bool Image_obj::__isGIF( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.graphics.Image","__isGIF",0x6ba10e3d,"lime.graphics.Image.__isGIF","lime/graphics/Image.hx",1397,0xc7b862ad)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(1399)
	int tmp = bytes->b->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1399)
	bool tmp1 = (tmp == (int)71);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1399)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1399)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1399)
	if ((tmp2)){
		HX_STACK_LINE(1399)
		int tmp4 = bytes->b->__get((int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1399)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1399)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1399)
		tmp3 = (tmp6 == (int)73);
	}
	else{
		HX_STACK_LINE(1399)
		tmp3 = false;
	}
	HX_STACK_LINE(1399)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1399)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1399)
	if ((tmp4)){
		HX_STACK_LINE(1399)
		int tmp6 = bytes->b->__get((int)2);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1399)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1399)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1399)
		tmp5 = (tmp8 == (int)70);
	}
	else{
		HX_STACK_LINE(1399)
		tmp5 = false;
	}
	HX_STACK_LINE(1399)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1399)
	if ((tmp5)){
		HX_STACK_LINE(1399)
		int tmp7 = bytes->b->__get((int)3);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1399)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1399)
		tmp6 = (tmp8 == (int)56);
	}
	else{
		HX_STACK_LINE(1399)
		tmp6 = false;
	}
	HX_STACK_LINE(1399)
	if ((tmp6)){
		HX_STACK_LINE(1401)
		int tmp7 = bytes->b->__get((int)4);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1401)
		int b = tmp7;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(1402)
		bool tmp8 = (b == (int)55);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1402)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1402)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1402)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1402)
		if ((tmp10)){
			HX_STACK_LINE(1402)
			tmp11 = (b == (int)57);
		}
		else{
			HX_STACK_LINE(1402)
			tmp11 = true;
		}
		HX_STACK_LINE(1402)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1402)
		if ((tmp11)){
			HX_STACK_LINE(1402)
			int tmp13 = bytes->b->__get((int)5);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1402)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1402)
			tmp12 = (tmp14 == (int)97);
		}
		else{
			HX_STACK_LINE(1402)
			tmp12 = false;
		}
		HX_STACK_LINE(1402)
		return tmp12;
	}
	HX_STACK_LINE(1406)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__isGIF,return )

Dynamic Image_obj::lime_image_load( Dynamic data,Dynamic buffer){
	HX_STACK_FRAME("lime.graphics.Image","lime_image_load",0x9aff9f17,"lime.graphics.Image.lime_image_load","lime/graphics/Image.hx",1638,0xc7b862ad)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(1638)
	return ::lime::graphics::Image_obj::cffi_lime_image_load.call(hx::DynamicPtr(data),hx::DynamicPtr(buffer));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Image_obj,lime_image_load,return )

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > Image_obj::cffi_lime_image_load;


Image_obj::Image_obj()
{
}

void Image_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Image);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_END_CLASS();
}

void Image_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
}

Dynamic Image_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp == hx::paccAlways) return get_src(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == hx::paccAlways) return get_data(); }
		if (HX_FIELD_EQ(inName,"rect") ) { return inCallProp == hx::paccAlways ? get_rect() : rect; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		if (HX_FIELD_EQ(inName,"format") ) { if (inCallProp == hx::paccAlways) return get_format(); }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"encode") ) { return encode_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { return offsetX; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return offsetY; }
		if (HX_FIELD_EQ(inName,"version") ) { return version; }
		if (HX_FIELD_EQ(inName,"get_src") ) { return get_src_dyn(); }
		if (HX_FIELD_EQ(inName,"set_src") ) { return set_src_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel") ) { return getPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel") ) { return setPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_data") ) { return get_data_dyn(); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rect") ) { return get_rect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"floodFill") ) { return floodFill_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixels") ) { return getPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixels") ) { return setPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"threshold") ) { return threshold_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"powerOfTwo") ) { if (inCallProp == hx::paccAlways) return get_powerOfTwo(); }
		if (HX_FIELD_EQ(inName,"copyPixels") ) { return copyPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { return getPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { return setPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"__clipRect") ) { return __clipRect_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromFile") ) { return __fromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"get_format") ) { return get_format_dyn(); }
		if (HX_FIELD_EQ(inName,"set_format") ) { return set_format_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { if (inCallProp == hx::paccAlways) return get_transparent(); }
		if (HX_FIELD_EQ(inName,"copyChannel") ) { return copyChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__fromBase64") ) { return __fromBase64_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"premultiplied") ) { if (inCallProp == hx::paccAlways) return get_premultiplied(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_powerOfTwo") ) { return get_powerOfTwo_dyn(); }
		if (HX_FIELD_EQ(inName,"set_powerOfTwo") ) { return set_powerOfTwo_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_transparent") ) { return get_transparent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_transparent") ) { return set_transparent_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__fromImageBuffer") ) { return __fromImageBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_premultiplied") ) { return get_premultiplied_dyn(); }
		if (HX_FIELD_EQ(inName,"set_premultiplied") ) { return set_premultiplied_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getColorBoundsRect") ) { return getColorBoundsRect_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Image_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__isJPG") ) { outValue = __isJPG_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__isPNG") ) { outValue = __isPNG_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__isGIF") ) { outValue = __isGIF_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromBase64") ) { outValue = fromBase64_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromCanvas") ) { outValue = fromCanvas_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__base64Chars") ) { outValue = __base64Chars; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromBitmapData") ) { outValue = fromBitmapData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__base64Encode") ) { outValue = __base64Encode_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__base64Encoder") ) { outValue = __base64Encoder; return true;  }
		if (HX_FIELD_EQ(inName,"lime_image_load") ) { outValue = lime_image_load_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fromImageElement") ) { outValue = fromImageElement_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_load") ) { outValue = cffi_lime_image_load; return true;  }
	}
	return false;
}

Dynamic Image_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp == hx::paccAlways) return set_src(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == hx::paccAlways) return set_data(inValue); }
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::lime::math::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::lime::graphics::ImageType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::lime::graphics::ImageBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"format") ) { if (inCallProp == hx::paccAlways) return set_format(inValue); }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"powerOfTwo") ) { if (inCallProp == hx::paccAlways) return set_powerOfTwo(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { if (inCallProp == hx::paccAlways) return set_transparent(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"premultiplied") ) { if (inCallProp == hx::paccAlways) return set_premultiplied(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Image_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"__base64Chars") ) { __base64Chars=ioValue.Cast< ::String >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__base64Encoder") ) { __base64Encoder=ioValue.Cast< ::haxe::crypto::BaseCode >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_load") ) { cffi_lime_image_load=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
	}
	return false;
}

void Image_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"));
	outFields->push(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("powerOfTwo","\x70","\xbe","\xae","\xea"));
	outFields->push(HX_HCSTRING("premultiplied","\x56","\xf1","\x4e","\xa4"));
	outFields->push(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"));
	outFields->push(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00"));
	outFields->push(HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::ImageBuffer*/ ,(int)offsetof(Image_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsBool,(int)offsetof(Image_obj,dirty),HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9")},
	{hx::fsInt,(int)offsetof(Image_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(Image_obj,offsetX),HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7")},
	{hx::fsInt,(int)offsetof(Image_obj,offsetY),HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7")},
	{hx::fsObject /*::lime::math::Rectangle*/ ,(int)offsetof(Image_obj,rect),HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b")},
	{hx::fsObject /*::lime::graphics::ImageType*/ ,(int)offsetof(Image_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(Image_obj,version),HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{hx::fsInt,(int)offsetof(Image_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(Image_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Image_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Image_obj::__base64Chars,HX_HCSTRING("__base64Chars","\xae","\xc9","\x24","\x36")},
	{hx::fsObject /*::haxe::crypto::BaseCode*/ ,(void *) &Image_obj::__base64Encoder,HX_HCSTRING("__base64Encoder","\xad","\xa4","\x42","\x7e")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &Image_obj::cffi_lime_image_load,HX_HCSTRING("cffi_lime_image_load","\x1b","\x6e","\x80","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"),
	HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"),
	HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("copyChannel","\x8e","\x7d","\xe6","\x22"),
	HX_HCSTRING("copyPixels","\xc2","\x54","\x6e","\x42"),
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"),
	HX_HCSTRING("floodFill","\x61","\x83","\x8a","\x59"),
	HX_HCSTRING("getColorBoundsRect","\x86","\xad","\xe8","\x80"),
	HX_HCSTRING("getPixel","\x10","\xd6","\x7a","\x22"),
	HX_HCSTRING("getPixel32","\xaf","\xa6","\x68","\xd7"),
	HX_HCSTRING("getPixels","\x63","\x78","\x00","\x09"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"),
	HX_HCSTRING("setPixel","\x84","\x2f","\xd8","\xd0"),
	HX_HCSTRING("setPixel32","\x23","\x45","\xe6","\xda"),
	HX_HCSTRING("setPixels","\x6f","\x64","\x51","\xec"),
	HX_HCSTRING("threshold","\xab","\xc3","\xa3","\x34"),
	HX_HCSTRING("__clipRect","\x34","\x03","\xa3","\xfb"),
	HX_HCSTRING("__fromBase64","\xb9","\x7d","\xff","\xd0"),
	HX_HCSTRING("__fromBytes","\x81","\x3b","\x4d","\xa0"),
	HX_HCSTRING("__fromFile","\x26","\x10","\xc0","\x44"),
	HX_HCSTRING("__fromImageBuffer","\x51","\x6e","\xca","\xca"),
	HX_HCSTRING("get_data","\xb3","\x11","\x1e","\xc2"),
	HX_HCSTRING("set_data","\x27","\x6b","\x7b","\x70"),
	HX_HCSTRING("get_format","\x00","\xff","\x15","\xee"),
	HX_HCSTRING("set_format","\x74","\x9d","\x93","\xf1"),
	HX_HCSTRING("get_powerOfTwo","\xb9","\x46","\xa4","\x60"),
	HX_HCSTRING("set_powerOfTwo","\x2d","\x2f","\xc4","\x80"),
	HX_HCSTRING("get_premultiplied","\xad","\xfc","\xbe","\xaa"),
	HX_HCSTRING("set_premultiplied","\xb9","\xd4","\x2c","\xce"),
	HX_HCSTRING("get_rect","\xad","\x08","\x62","\xcb"),
	HX_HCSTRING("get_src","\x7b","\x6f","\xcc","\x26"),
	HX_HCSTRING("set_src","\x87","\x00","\xce","\x19"),
	HX_HCSTRING("get_transparent","\xe9","\xe2","\x9b","\xe3"),
	HX_HCSTRING("set_transparent","\xf5","\x5f","\x67","\xdf"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Image_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Image_obj::__base64Chars,"__base64Chars");
	HX_MARK_MEMBER_NAME(Image_obj::__base64Encoder,"__base64Encoder");
	HX_MARK_MEMBER_NAME(Image_obj::cffi_lime_image_load,"cffi_lime_image_load");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Image_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Image_obj::__base64Chars,"__base64Chars");
	HX_VISIT_MEMBER_NAME(Image_obj::__base64Encoder,"__base64Encoder");
	HX_VISIT_MEMBER_NAME(Image_obj::cffi_lime_image_load,"cffi_lime_image_load");
};

#endif

hx::Class Image_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__base64Chars","\xae","\xc9","\x24","\x36"),
	HX_HCSTRING("__base64Encoder","\xad","\xa4","\x42","\x7e"),
	HX_HCSTRING("fromBase64","\x99","\x02","\x6c","\x98"),
	HX_HCSTRING("fromBitmapData","\xc3","\x07","\xed","\x2b"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromCanvas","\xe2","\x59","\x86","\xfb"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("fromImageElement","\x2b","\x91","\x89","\x8f"),
	HX_HCSTRING("__base64Encode","\x25","\xfc","\x79","\x6c"),
	HX_HCSTRING("__isJPG","\xf7","\x37","\xad","\x2b"),
	HX_HCSTRING("__isPNG","\xbf","\xc3","\xb1","\x2b"),
	HX_HCSTRING("__isGIF","\x1a","\xeb","\xaa","\x2b"),
	HX_HCSTRING("lime_image_load","\xf4","\x20","\xad","\x9c"),
	HX_HCSTRING("cffi_lime_image_load","\x1b","\x6e","\x80","\x2d"),
	::String(null()) };

void Image_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.Image","\x91","\x28","\xc1","\x9c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Image_obj::__GetStatic;
	__mClass->mSetStaticField = &Image_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Image_obj >;
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

void Image_obj::__boot()
{
	__base64Chars= HX_HCSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/","\x03","\x41","\x03","\x7f");
	cffi_lime_image_load= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_load","\xf4","\x20","\xad","\x9c"),HX_HCSTRING("ooo","\x4f","\x9b","\x54","\x00"),false));
}

} // end namespace lime
} // end namespace graphics
