#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
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
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoBlendModeManager
#include <openfl/_internal/renderer/cairo/CairoBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoMaskManager
#include <openfl/_internal/renderer/cairo/CairoMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_utils_PerlinNoise
#include <openfl/_internal/utils/PerlinNoise.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_JPEGEncoderOptions
#include <openfl/display/JPEGEncoderOptions.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_PNGEncoderOptions
#include <openfl/display/PNGEncoderOptions.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
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
namespace display{

Void BitmapData_obj::__construct(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor)
{
HX_STACK_FRAME("openfl.display.BitmapData","new",0x7e3e4115,"openfl.display.BitmapData.new","openfl/display/BitmapData.hx",86,0xdd12d5b9)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(__o_transparent,"transparent")
HX_STACK_ARG(__o_fillColor,"fillColor")
bool transparent = __o_transparent.Default(true);
int fillColor = __o_fillColor.Default(-1);
{
	HX_STACK_LINE(88)
	this->transparent = transparent;
	HX_STACK_LINE(95)
	bool tmp = (width < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	if ((tmp)){
		HX_STACK_LINE(95)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(95)
		tmp1 = width;
	}
	HX_STACK_LINE(95)
	width = tmp1;
	HX_STACK_LINE(96)
	bool tmp2 = (height < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(96)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(96)
	if ((tmp2)){
		HX_STACK_LINE(96)
		tmp3 = (int)0;
	}
	else{
		HX_STACK_LINE(96)
		tmp3 = height;
	}
	HX_STACK_LINE(96)
	height = tmp3;
	HX_STACK_LINE(98)
	this->width = width;
	HX_STACK_LINE(99)
	this->height = height;
	HX_STACK_LINE(100)
	::openfl::geom::Rectangle tmp4 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(100)
	this->rect = tmp4;
	HX_STACK_LINE(102)
	bool tmp5 = (width > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(102)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(102)
	if ((tmp5)){
		HX_STACK_LINE(102)
		tmp6 = (height > (int)0);
	}
	else{
		HX_STACK_LINE(102)
		tmp6 = false;
	}
	HX_STACK_LINE(102)
	if ((tmp6)){
		HX_STACK_LINE(104)
		bool tmp7 = transparent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(104)
		if ((tmp7)){
			HX_STACK_LINE(106)
			int tmp8 = (int(fillColor) & int((int)-16777216));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(106)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(106)
			bool tmp10 = (tmp9 == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(106)
			if ((tmp10)){
				HX_STACK_LINE(108)
				fillColor = (int)0;
			}
		}
		else{
			HX_STACK_LINE(114)
			int tmp8 = (int(fillColor) & int((int)16777215));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(114)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(114)
			int tmp10 = (int((int)-16777216) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(114)
			fillColor = tmp10;
		}
		HX_STACK_LINE(118)
		int tmp8 = (int(fillColor) << int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(118)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(118)
		int tmp10 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(118)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(118)
		int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(118)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(118)
		int tmp14 = (int(tmp9) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(118)
		fillColor = tmp14;
		HX_STACK_LINE(121)
		::lime::utils::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(121)
		{
			HX_STACK_LINE(121)
			int tmp16 = (width * height);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(121)
			int tmp17 = (tmp16 * (int)4);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(121)
			Dynamic elements = tmp17;		HX_STACK_VAR(elements,"elements");
			HX_STACK_LINE(121)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(121)
			bool tmp18 = (elements != null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(121)
			if ((tmp18)){
				HX_STACK_LINE(121)
				::lime::utils::ArrayBufferView tmp19 = ::lime::utils::ArrayBufferView_obj::__new(elements,(int)4);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(121)
				this1 = tmp19;
			}
			else{
				HX_STACK_LINE(121)
				bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(121)
				if ((tmp19)){
					HX_STACK_LINE(121)
					::lime::utils::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(121)
					{
						HX_STACK_LINE(121)
						::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(121)
						::lime::utils::ArrayBufferView _this = tmp21;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(121)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(121)
						int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(121)
						_this->length = tmp22;
						HX_STACK_LINE(121)
						int tmp23 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(121)
						_this->byteLength = tmp23;
						HX_STACK_LINE(121)
						::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(121)
						{
							HX_STACK_LINE(121)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(121)
							int tmp25 = _this->byteLength;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(121)
							::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(121)
							this2 = tmp26;
							HX_STACK_LINE(121)
							tmp24 = this2;
						}
						HX_STACK_LINE(121)
						_this->buffer = tmp24;
						HX_STACK_LINE(121)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(121)
						tmp20 = _this;
					}
					HX_STACK_LINE(121)
					this1 = tmp20;
				}
				else{
					HX_STACK_LINE(121)
					bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(121)
					if ((tmp20)){
						HX_STACK_LINE(121)
						::lime::utils::ArrayBufferView tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(121)
						{
							HX_STACK_LINE(121)
							::lime::utils::ArrayBufferView tmp22 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(121)
							::lime::utils::ArrayBufferView _this = tmp22;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(121)
							cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
							HX_STACK_LINE(121)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(121)
							_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
							HX_STACK_LINE(121)
							int tmp23 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(121)
							_this->byteLength = tmp23;
							HX_STACK_LINE(121)
							::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(121)
							{
								HX_STACK_LINE(121)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(121)
								int tmp25 = _this->byteLength;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(121)
								::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(121)
								this2 = tmp26;
								HX_STACK_LINE(121)
								tmp24 = this2;
							}
							HX_STACK_LINE(121)
							_this->buffer = tmp24;
							HX_STACK_LINE(121)
							_this->copyFromArray(((Array< Float >)(array)),null());
							HX_STACK_LINE(121)
							tmp21 = _this;
						}
						HX_STACK_LINE(121)
						this1 = tmp21;
					}
					else{
						HX_STACK_LINE(121)
						bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(121)
						if ((tmp21)){
							HX_STACK_LINE(121)
							::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(121)
							{
								HX_STACK_LINE(121)
								::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(121)
								::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(121)
								::haxe::io::Bytes tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(121)
								::haxe::io::Bytes srcData = tmp24;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(121)
								int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(121)
								int srcLength = tmp25;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(121)
								int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(121)
								int srcByteOffset = tmp26;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(121)
								int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(121)
								int srcElementSize = tmp27;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(121)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(121)
								int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(121)
								int tmp29 = _this->type;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(121)
								bool tmp30 = (tmp28 == tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(121)
								if ((tmp30)){
									HX_STACK_LINE(121)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(121)
									int tmp31 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(121)
									int cloneLength = tmp31;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(121)
									::haxe::io::Bytes tmp32;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(121)
									{
										HX_STACK_LINE(121)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(121)
										int tmp33 = cloneLength;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(121)
										::haxe::io::Bytes tmp34 = ::haxe::io::Bytes_obj::alloc(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(121)
										this2 = tmp34;
										HX_STACK_LINE(121)
										tmp32 = this2;
									}
									HX_STACK_LINE(121)
									_this->buffer = tmp32;
									HX_STACK_LINE(121)
									::haxe::io::Bytes tmp33 = srcData;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(121)
									int tmp34 = srcByteOffset;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(121)
									int tmp35 = cloneLength;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(121)
									_this->buffer->blit((int)0,tmp33,tmp34,tmp35);
								}
								else{
									HX_STACK_LINE(121)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(121)
								int tmp31 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(121)
								_this->byteLength = tmp31;
								HX_STACK_LINE(121)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(121)
								_this->length = srcLength;
								HX_STACK_LINE(121)
								tmp22 = _this;
							}
							HX_STACK_LINE(121)
							this1 = tmp22;
						}
						else{
							HX_STACK_LINE(121)
							bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(121)
							if ((tmp22)){
								HX_STACK_LINE(121)
								::lime::utils::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(121)
								{
									HX_STACK_LINE(121)
									::lime::utils::ArrayBufferView tmp24 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(121)
									::lime::utils::ArrayBufferView _this = tmp24;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(121)
									bool tmp25 = false;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(121)
									if ((tmp25)){
										HX_STACK_LINE(121)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(121)
									int tmp26 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(121)
									bool tmp27 = (tmp26 != (int)0);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(121)
									if ((tmp27)){
										HX_STACK_LINE(121)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(121)
									int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(121)
									int bufferByteLength = tmp28;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(121)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(121)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(121)
									bool tmp29 = true;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(121)
									if ((tmp29)){
										HX_STACK_LINE(121)
										int tmp30 = bufferByteLength;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(121)
										newByteLength = tmp30;
										HX_STACK_LINE(121)
										int tmp31 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(121)
										bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(121)
										if ((tmp32)){
											HX_STACK_LINE(121)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(121)
										bool tmp33 = (newByteLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(121)
										if ((tmp33)){
											HX_STACK_LINE(121)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(121)
										int tmp30 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(121)
										newByteLength = tmp30;
										HX_STACK_LINE(121)
										int tmp31 = newByteLength;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(121)
										int newRange = tmp31;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(121)
										bool tmp32 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(121)
										if ((tmp32)){
											HX_STACK_LINE(121)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(121)
									_this->buffer = null();
									HX_STACK_LINE(121)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(121)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(121)
									Float tmp30 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(121)
									int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(121)
									_this->length = tmp31;
									HX_STACK_LINE(121)
									tmp23 = _this;
								}
								HX_STACK_LINE(121)
								this1 = tmp23;
							}
							else{
								HX_STACK_LINE(121)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
							}
						}
					}
				}
			}
			HX_STACK_LINE(121)
			tmp15 = this1;
		}
		HX_STACK_LINE(121)
		int tmp16 = width;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(121)
		int tmp17 = height;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(121)
		::lime::graphics::ImageBuffer tmp18 = ::lime::graphics::ImageBuffer_obj::__new(tmp15,tmp16,tmp17,null(),null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(121)
		::lime::graphics::ImageBuffer buffer = tmp18;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(122)
		buffer->format = (int)2;
		HX_STACK_LINE(123)
		buffer->premultiplied = true;
		HX_STACK_LINE(125)
		::lime::graphics::Image tmp19 = ::lime::graphics::Image_obj::__new(buffer,(int)0,(int)0,width,height,null(),null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(125)
		this->image = tmp19;
		HX_STACK_LINE(127)
		bool tmp20 = (fillColor != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(127)
		if ((tmp20)){
			HX_STACK_LINE(129)
			::lime::graphics::Image tmp21 = this->image;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(129)
			::lime::graphics::Image tmp22 = this->image;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(129)
			::lime::math::Rectangle tmp23 = tmp22->get_rect();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(129)
			int tmp24 = fillColor;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(129)
			tmp21->fillRect(tmp23,tmp24,null());
		}
		HX_STACK_LINE(136)
		::lime::graphics::Image tmp21 = this->image;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(136)
		bool tmp22 = transparent;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(136)
		tmp21->set_transparent(tmp22);
		HX_STACK_LINE(137)
		this->__isValid = true;
	}
	HX_STACK_LINE(141)
	::openfl::geom::Matrix tmp7 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(141)
	this->__worldTransform = tmp7;
	HX_STACK_LINE(142)
	::openfl::geom::ColorTransform tmp8 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(142)
	this->__worldColorTransform = tmp8;
}
;
	return null();
}

//BitmapData_obj::~BitmapData_obj() { }

Dynamic BitmapData_obj::__CreateEmpty() { return  new BitmapData_obj; }
hx::ObjectPtr< BitmapData_obj > BitmapData_obj::__new(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor)
{  hx::ObjectPtr< BitmapData_obj > _result_ = new BitmapData_obj();
	_result_->__construct(width,height,__o_transparent,__o_fillColor);
	return _result_;}

Dynamic BitmapData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapData_obj > _result_ = new BitmapData_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

hx::Object *BitmapData_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::display::IBitmapDrawable_obj)) return operator ::openfl::display::IBitmapDrawable_obj *();
	return super::__ToInterface(inType);
}

BitmapData_obj::operator ::openfl::display::IBitmapDrawable_obj *()
	{ return new ::openfl::display::IBitmapDrawable_delegate_< BitmapData_obj >(this); }
Void BitmapData_obj::applyFilter( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::openfl::filters::BitmapFilter filter){
{
		HX_STACK_FRAME("openfl.display.BitmapData","applyFilter",0xfbb98d7b,"openfl.display.BitmapData.applyFilter","openfl/display/BitmapData.hx",147,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(filter,"filter")
		HX_STACK_LINE(149)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(149)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(149)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(149)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(149)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(149)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(149)
		if ((tmp4)){
			HX_STACK_LINE(149)
			tmp5 = (sourceBitmapData == null());
		}
		else{
			HX_STACK_LINE(149)
			tmp5 = true;
		}
		HX_STACK_LINE(149)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(149)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(149)
		if ((tmp6)){
			HX_STACK_LINE(149)
			bool tmp8 = sourceBitmapData->__isValid;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(149)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(149)
			tmp7 = !(tmp9);
		}
		else{
			HX_STACK_LINE(149)
			tmp7 = true;
		}
		HX_STACK_LINE(149)
		if ((tmp7)){
			HX_STACK_LINE(149)
			return null();
		}
		HX_STACK_LINE(151)
		::openfl::display::BitmapData tmp8 = sourceBitmapData;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(151)
		::openfl::geom::Rectangle tmp9 = sourceRect;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(151)
		::openfl::geom::Point tmp10 = destPoint;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(151)
		filter->__applyFilter(tmp8,hx::ObjectPtr<OBJ_>(this),tmp9,tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(BitmapData_obj,applyFilter,(void))

::openfl::display::BitmapData BitmapData_obj::clone( ){
	HX_STACK_FRAME("openfl.display.BitmapData","clone",0xea52db52,"openfl.display.BitmapData.clone","openfl/display/BitmapData.hx",156,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(158)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(158)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(158)
	if ((tmp1)){
		HX_STACK_LINE(160)
		int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(160)
		int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(160)
		bool tmp4 = this->transparent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(160)
		::openfl::display::BitmapData tmp5 = ::openfl::display::BitmapData_obj::__new(tmp2,tmp3,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(160)
		return tmp5;
	}
	else{
		HX_STACK_LINE(164)
		::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		::lime::graphics::Image tmp3 = tmp2->clone();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(164)
		bool tmp4 = this->transparent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(164)
		::openfl::display::BitmapData tmp5 = ::openfl::display::BitmapData_obj::fromImage(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(164)
		return tmp5;
	}
	HX_STACK_LINE(158)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,clone,return )

Void BitmapData_obj::colorTransform( ::openfl::geom::Rectangle rect,::openfl::geom::ColorTransform colorTransform){
{
		HX_STACK_FRAME("openfl.display.BitmapData","colorTransform",0xbfe3e8f4,"openfl.display.BitmapData.colorTransform","openfl/display/BitmapData.hx",171,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(colorTransform,"colorTransform")
		HX_STACK_LINE(173)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(173)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(173)
		if ((tmp1)){
			HX_STACK_LINE(173)
			return null();
		}
		HX_STACK_LINE(175)
		::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(175)
		::lime::math::Rectangle tmp3 = rect->__toLimeRectangle();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(175)
		::lime::utils::ArrayBufferView tmp4 = colorTransform->__toLimeColorMatrix();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(175)
		tmp2->colorTransform(tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,colorTransform,(void))

Dynamic BitmapData_obj::compare( ::openfl::display::BitmapData otherBitmapData){
	HX_STACK_FRAME("openfl.display.BitmapData","compare",0x56d287da,"openfl.display.BitmapData.compare","openfl/display/BitmapData.hx",180,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherBitmapData,"otherBitmapData")
	HX_STACK_LINE(182)
	bool tmp = (otherBitmapData == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(182)
	if ((tmp)){
		HX_STACK_LINE(184)
		return (int)0;
	}
	else{
		HX_STACK_LINE(186)
		bool tmp1 = (otherBitmapData == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(186)
		if ((tmp1)){
			HX_STACK_LINE(188)
			return (int)-1;
		}
		else{
			HX_STACK_LINE(190)
			bool tmp2 = this->__isValid;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(190)
			bool tmp3 = (tmp2 == false);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(190)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(190)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(190)
			if ((tmp4)){
				HX_STACK_LINE(190)
				tmp5 = (otherBitmapData->__isValid == false);
			}
			else{
				HX_STACK_LINE(190)
				tmp5 = true;
			}
			HX_STACK_LINE(190)
			if ((tmp5)){
				HX_STACK_LINE(192)
				return (int)-2;
			}
			else{
				HX_STACK_LINE(194)
				int tmp6 = this->width;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(194)
				int tmp7 = otherBitmapData->width;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(194)
				bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(194)
				if ((tmp8)){
					HX_STACK_LINE(196)
					return (int)-3;
				}
				else{
					HX_STACK_LINE(198)
					int tmp9 = this->height;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(198)
					int tmp10 = otherBitmapData->height;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(198)
					bool tmp11 = (tmp9 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(198)
					if ((tmp11)){
						HX_STACK_LINE(200)
						return (int)-4;
					}
				}
			}
		}
	}
	HX_STACK_LINE(204)
	::lime::graphics::Image tmp1 = this->image;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(204)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(204)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(204)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(204)
	if ((tmp3)){
		HX_STACK_LINE(204)
		tmp4 = (otherBitmapData->image != null());
	}
	else{
		HX_STACK_LINE(204)
		tmp4 = false;
	}
	HX_STACK_LINE(204)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(204)
	if ((tmp4)){
		HX_STACK_LINE(204)
		::lime::graphics::Image tmp6 = this->image;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(204)
		::lime::graphics::Image tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(204)
		int tmp8 = tmp7->get_format();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(204)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(204)
		int tmp10 = otherBitmapData->image->get_format();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(204)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(204)
		tmp5 = (tmp9 == tmp11);
	}
	else{
		HX_STACK_LINE(204)
		tmp5 = false;
	}
	HX_STACK_LINE(204)
	if ((tmp5)){
		HX_STACK_LINE(206)
		::lime::graphics::Image tmp6 = this->image;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(206)
		::lime::utils::ArrayBufferView tmp7 = tmp6->get_data();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(206)
		::lime::utils::ArrayBufferView bytes = tmp7;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(207)
		::lime::utils::ArrayBufferView tmp8 = otherBitmapData->image->get_data();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(207)
		::lime::utils::ArrayBufferView otherBytes = tmp8;		HX_STACK_VAR(otherBytes,"otherBytes");
		HX_STACK_LINE(208)
		bool equal = true;		HX_STACK_VAR(equal,"equal");
		HX_STACK_LINE(210)
		{
			HX_STACK_LINE(210)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(210)
			int tmp9 = bytes->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(210)
			int _g = tmp9;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(210)
			while((true)){
				HX_STACK_LINE(210)
				bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(210)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(210)
				if ((tmp11)){
					HX_STACK_LINE(210)
					break;
				}
				HX_STACK_LINE(210)
				int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(210)
				int i = tmp12;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(212)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(212)
				{
					HX_STACK_LINE(212)
					int tmp14 = ::__hxcpp_memory_get_byte(bytes->buffer->b,(bytes->byteOffset + i));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(212)
					Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(212)
					int a = tmp15;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(212)
					int tmp16 = ::__hxcpp_memory_get_byte(otherBytes->buffer->b,(otherBytes->byteOffset + i));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(212)
					Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(212)
					Dynamic b = tmp17;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(212)
					tmp13 = (a != b);
				}
				HX_STACK_LINE(212)
				if ((tmp13)){
					HX_STACK_LINE(214)
					equal = false;
					HX_STACK_LINE(215)
					break;
				}
			}
		}
		HX_STACK_LINE(220)
		bool tmp9 = equal;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(220)
		if ((tmp9)){
			HX_STACK_LINE(222)
			return (int)0;
		}
	}
	HX_STACK_LINE(228)
	::openfl::display::BitmapData bitmapData = null();		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(229)
	bool foundDifference;		HX_STACK_VAR(foundDifference,"foundDifference");
	HX_STACK_LINE(229)
	int pixel;		HX_STACK_VAR(pixel,"pixel");
	HX_STACK_LINE(229)
	int otherPixel;		HX_STACK_VAR(otherPixel,"otherPixel");
	HX_STACK_LINE(229)
	int comparePixel;		HX_STACK_VAR(comparePixel,"comparePixel");
	HX_STACK_LINE(229)
	int r;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(229)
	int g;		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(229)
	int b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(229)
	int a;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(231)
	{
		HX_STACK_LINE(231)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(231)
		int tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(231)
		int _g = tmp6;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(231)
		while((true)){
			HX_STACK_LINE(231)
			bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(231)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(231)
			if ((tmp8)){
				HX_STACK_LINE(231)
				break;
			}
			HX_STACK_LINE(231)
			int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(231)
			int y = tmp9;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(233)
			{
				HX_STACK_LINE(233)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(233)
				int tmp10 = this->width;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(233)
				int _g2 = tmp10;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(233)
				while((true)){
					HX_STACK_LINE(233)
					bool tmp11 = (_g3 < _g2);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(233)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(233)
					if ((tmp12)){
						HX_STACK_LINE(233)
						break;
					}
					HX_STACK_LINE(233)
					int tmp13 = (_g3)++;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(233)
					int x = tmp13;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(235)
					foundDifference = false;
					HX_STACK_LINE(237)
					int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(237)
					int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(237)
					int tmp16 = this->getPixel32(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(237)
					pixel = tmp16;
					HX_STACK_LINE(238)
					int tmp17 = x;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(238)
					int tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(238)
					int tmp19 = otherBitmapData->getPixel32(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(238)
					otherPixel = tmp19;
					HX_STACK_LINE(239)
					comparePixel = (int)0;
					HX_STACK_LINE(241)
					bool tmp20 = (pixel != otherPixel);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(241)
					if ((tmp20)){
						HX_STACK_LINE(243)
						int tmp21 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(243)
						int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(243)
						int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(243)
						int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(243)
						int tmp25 = (int(otherPixel) >> int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(243)
						int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(243)
						int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(243)
						int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(243)
						int tmp29 = (tmp24 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(243)
						r = tmp29;
						HX_STACK_LINE(244)
						int tmp30 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(244)
						int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(244)
						int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(244)
						int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(244)
						int tmp34 = (int(otherPixel) >> int((int)8));		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(244)
						int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(244)
						int tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(244)
						int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(244)
						int tmp38 = (tmp33 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(244)
						g = tmp38;
						HX_STACK_LINE(245)
						int tmp39 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(245)
						int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(245)
						int tmp41 = (int(otherPixel) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(245)
						int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(245)
						int tmp43 = (tmp40 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(245)
						b = tmp43;
						HX_STACK_LINE(247)
						bool tmp44 = (r < (int)0);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(247)
						if ((tmp44)){
							HX_STACK_LINE(247)
							hx::MultEq(r,(int)-1);
						}
						HX_STACK_LINE(248)
						bool tmp45 = (g < (int)0);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(248)
						if ((tmp45)){
							HX_STACK_LINE(248)
							hx::MultEq(g,(int)-1);
						}
						HX_STACK_LINE(249)
						bool tmp46 = (b < (int)0);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(249)
						if ((tmp46)){
							HX_STACK_LINE(249)
							hx::MultEq(b,(int)-1);
						}
						HX_STACK_LINE(251)
						bool tmp47 = (r == (int)0);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(251)
						bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(251)
						bool tmp49;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(251)
						if ((tmp48)){
							HX_STACK_LINE(251)
							tmp49 = (g == (int)0);
						}
						else{
							HX_STACK_LINE(251)
							tmp49 = false;
						}
						HX_STACK_LINE(251)
						bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(251)
						if ((tmp49)){
							HX_STACK_LINE(251)
							tmp50 = (b == (int)0);
						}
						else{
							HX_STACK_LINE(251)
							tmp50 = false;
						}
						HX_STACK_LINE(251)
						if ((tmp50)){
							HX_STACK_LINE(253)
							int tmp51 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(253)
							int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(253)
							int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(253)
							int tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(253)
							int tmp55 = (int(otherPixel) >> int((int)24));		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(253)
							int tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(253)
							int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(253)
							int tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(253)
							int tmp59 = (tmp54 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(253)
							a = tmp59;
							HX_STACK_LINE(255)
							bool tmp60 = (a != (int)0);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(255)
							if ((tmp60)){
								HX_STACK_LINE(257)
								{
									HX_STACK_LINE(257)
									{
										HX_STACK_LINE(257)
										int tmp61 = (int(comparePixel) >> int((int)24));		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(257)
										int tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(257)
										int tmp63 = (int(tmp62) & int((int)255));		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(257)
										int tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(257)
										int tmp65 = (int(tmp64) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(257)
										int tmp66 = (int(tmp65) << int((int)24));		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(257)
										int tmp67 = (int)255;		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(257)
										int tmp68 = (int(tmp67) << int((int)16));		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(257)
										int tmp69 = (int(tmp66) | int(tmp68));		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(257)
										int tmp70 = (int(comparePixel) >> int((int)8));		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(257)
										int tmp71 = tmp70;		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(257)
										int tmp72 = (int(tmp71) & int((int)255));		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(257)
										int tmp73 = tmp72;		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(257)
										int tmp74 = (int(tmp73) & int((int)255));		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(257)
										int tmp75 = (int(tmp74) << int((int)8));		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(257)
										int tmp76 = (int(tmp69) | int(tmp75));		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(257)
										int tmp77 = (int(comparePixel) & int((int)255));		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(257)
										int tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(257)
										int tmp79 = (int(tmp78) & int((int)255));		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(257)
										int tmp80 = (int(tmp76) | int(tmp79));		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(257)
										comparePixel = tmp80;
									}
									HX_STACK_LINE(257)
									(int)255;
								}
								HX_STACK_LINE(258)
								{
									HX_STACK_LINE(258)
									{
										HX_STACK_LINE(258)
										int tmp61 = (int(comparePixel) >> int((int)24));		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(258)
										int tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(258)
										int tmp63 = (int(tmp62) & int((int)255));		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(258)
										int tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(258)
										int tmp65 = (int(tmp64) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(258)
										int tmp66 = (int(tmp65) << int((int)24));		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(258)
										int tmp67 = (int(comparePixel) >> int((int)16));		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(258)
										int tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(258)
										int tmp69 = (int(tmp68) & int((int)255));		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(258)
										int tmp70 = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(258)
										int tmp71 = (int(tmp70) & int((int)255));		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(258)
										int tmp72 = (int(tmp71) << int((int)16));		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(258)
										int tmp73 = (int(tmp66) | int(tmp72));		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(258)
										int tmp74 = (int)255;		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(258)
										int tmp75 = (int(tmp74) << int((int)8));		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(258)
										int tmp76 = (int(tmp73) | int(tmp75));		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(258)
										int tmp77 = (int(comparePixel) & int((int)255));		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(258)
										int tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(258)
										int tmp79 = (int(tmp78) & int((int)255));		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(258)
										int tmp80 = (int(tmp76) | int(tmp79));		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(258)
										comparePixel = tmp80;
									}
									HX_STACK_LINE(258)
									(int)255;
								}
								HX_STACK_LINE(259)
								{
									HX_STACK_LINE(259)
									{
										HX_STACK_LINE(259)
										int tmp61 = (int(comparePixel) >> int((int)24));		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(259)
										int tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(259)
										int tmp63 = (int(tmp62) & int((int)255));		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(259)
										int tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(259)
										int tmp65 = (int(tmp64) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(259)
										int tmp66 = (int(tmp65) << int((int)24));		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(259)
										int tmp67 = (int(comparePixel) >> int((int)16));		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(259)
										int tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(259)
										int tmp69 = (int(tmp68) & int((int)255));		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(259)
										int tmp70 = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(259)
										int tmp71 = (int(tmp70) & int((int)255));		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(259)
										int tmp72 = (int(tmp71) << int((int)16));		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(259)
										int tmp73 = (int(tmp66) | int(tmp72));		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(259)
										int tmp74 = (int(comparePixel) >> int((int)8));		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(259)
										int tmp75 = tmp74;		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(259)
										int tmp76 = (int(tmp75) & int((int)255));		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(259)
										int tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(259)
										int tmp78 = (int(tmp77) & int((int)255));		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(259)
										int tmp79 = (int(tmp78) << int((int)8));		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(259)
										int tmp80 = (int(tmp73) | int(tmp79));		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(259)
										int tmp81 = (int)255;		HX_STACK_VAR(tmp81,"tmp81");
										HX_STACK_LINE(259)
										int tmp82 = (int(tmp80) | int(tmp81));		HX_STACK_VAR(tmp82,"tmp82");
										HX_STACK_LINE(259)
										comparePixel = tmp82;
									}
									HX_STACK_LINE(259)
									(int)255;
								}
								HX_STACK_LINE(260)
								{
									HX_STACK_LINE(260)
									{
										HX_STACK_LINE(260)
										int tmp61 = (int(a) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(260)
										int tmp62 = (int(tmp61) << int((int)24));		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(260)
										int tmp63 = (int(comparePixel) >> int((int)16));		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(260)
										int tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(260)
										int tmp65 = (int(tmp64) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(260)
										int tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(260)
										int tmp67 = (int(tmp66) & int((int)255));		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(260)
										int tmp68 = (int(tmp67) << int((int)16));		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(260)
										int tmp69 = (int(tmp62) | int(tmp68));		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(260)
										int tmp70 = (int(comparePixel) >> int((int)8));		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(260)
										int tmp71 = tmp70;		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(260)
										int tmp72 = (int(tmp71) & int((int)255));		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(260)
										int tmp73 = tmp72;		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(260)
										int tmp74 = (int(tmp73) & int((int)255));		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(260)
										int tmp75 = (int(tmp74) << int((int)8));		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(260)
										int tmp76 = (int(tmp69) | int(tmp75));		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(260)
										int tmp77 = (int(comparePixel) & int((int)255));		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(260)
										int tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(260)
										int tmp79 = (int(tmp78) & int((int)255));		HX_STACK_VAR(tmp79,"tmp79");
										HX_STACK_LINE(260)
										int tmp80 = (int(tmp76) | int(tmp79));		HX_STACK_VAR(tmp80,"tmp80");
										HX_STACK_LINE(260)
										comparePixel = tmp80;
									}
									HX_STACK_LINE(260)
									a;
								}
								HX_STACK_LINE(262)
								foundDifference = true;
							}
						}
						else{
							HX_STACK_LINE(268)
							{
								HX_STACK_LINE(268)
								{
									HX_STACK_LINE(268)
									int tmp51 = (int(comparePixel) >> int((int)24));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(268)
									int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(268)
									int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(268)
									int tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(268)
									int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(268)
									int tmp56 = (int(tmp55) << int((int)24));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(268)
									int tmp57 = (int(r) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(268)
									int tmp58 = (int(tmp57) << int((int)16));		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(268)
									int tmp59 = (int(tmp56) | int(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(268)
									int tmp60 = (int(comparePixel) >> int((int)8));		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(268)
									int tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(268)
									int tmp62 = (int(tmp61) & int((int)255));		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(268)
									int tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(268)
									int tmp64 = (int(tmp63) & int((int)255));		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(268)
									int tmp65 = (int(tmp64) << int((int)8));		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(268)
									int tmp66 = (int(tmp59) | int(tmp65));		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(268)
									int tmp67 = (int(comparePixel) & int((int)255));		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(268)
									int tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(268)
									int tmp69 = (int(tmp68) & int((int)255));		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(268)
									int tmp70 = (int(tmp66) | int(tmp69));		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(268)
									comparePixel = tmp70;
								}
								HX_STACK_LINE(268)
								r;
							}
							HX_STACK_LINE(269)
							{
								HX_STACK_LINE(269)
								{
									HX_STACK_LINE(269)
									int tmp51 = (int(comparePixel) >> int((int)24));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(269)
									int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(269)
									int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(269)
									int tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(269)
									int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(269)
									int tmp56 = (int(tmp55) << int((int)24));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(269)
									int tmp57 = (int(comparePixel) >> int((int)16));		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(269)
									int tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(269)
									int tmp59 = (int(tmp58) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(269)
									int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(269)
									int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(269)
									int tmp62 = (int(tmp61) << int((int)16));		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(269)
									int tmp63 = (int(tmp56) | int(tmp62));		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(269)
									int tmp64 = (int(g) & int((int)255));		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(269)
									int tmp65 = (int(tmp64) << int((int)8));		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(269)
									int tmp66 = (int(tmp63) | int(tmp65));		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(269)
									int tmp67 = (int(comparePixel) & int((int)255));		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(269)
									int tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(269)
									int tmp69 = (int(tmp68) & int((int)255));		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(269)
									int tmp70 = (int(tmp66) | int(tmp69));		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(269)
									comparePixel = tmp70;
								}
								HX_STACK_LINE(269)
								g;
							}
							HX_STACK_LINE(270)
							{
								HX_STACK_LINE(270)
								{
									HX_STACK_LINE(270)
									int tmp51 = (int(comparePixel) >> int((int)24));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(270)
									int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(270)
									int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(270)
									int tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(270)
									int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(270)
									int tmp56 = (int(tmp55) << int((int)24));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(270)
									int tmp57 = (int(comparePixel) >> int((int)16));		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(270)
									int tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(270)
									int tmp59 = (int(tmp58) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(270)
									int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(270)
									int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(270)
									int tmp62 = (int(tmp61) << int((int)16));		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(270)
									int tmp63 = (int(tmp56) | int(tmp62));		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(270)
									int tmp64 = (int(comparePixel) >> int((int)8));		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(270)
									int tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(270)
									int tmp66 = (int(tmp65) & int((int)255));		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(270)
									int tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(270)
									int tmp68 = (int(tmp67) & int((int)255));		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(270)
									int tmp69 = (int(tmp68) << int((int)8));		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(270)
									int tmp70 = (int(tmp63) | int(tmp69));		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(270)
									int tmp71 = (int(b) & int((int)255));		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(270)
									int tmp72 = (int(tmp70) | int(tmp71));		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(270)
									comparePixel = tmp72;
								}
								HX_STACK_LINE(270)
								b;
							}
							HX_STACK_LINE(271)
							{
								HX_STACK_LINE(271)
								{
									HX_STACK_LINE(271)
									int tmp51 = (int)255;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(271)
									int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(271)
									int tmp53 = (int(comparePixel) >> int((int)16));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(271)
									int tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(271)
									int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(271)
									int tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(271)
									int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(271)
									int tmp58 = (int(tmp57) << int((int)16));		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(271)
									int tmp59 = (int(tmp52) | int(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(271)
									int tmp60 = (int(comparePixel) >> int((int)8));		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(271)
									int tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(271)
									int tmp62 = (int(tmp61) & int((int)255));		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(271)
									int tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(271)
									int tmp64 = (int(tmp63) & int((int)255));		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(271)
									int tmp65 = (int(tmp64) << int((int)8));		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(271)
									int tmp66 = (int(tmp59) | int(tmp65));		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(271)
									int tmp67 = (int(comparePixel) & int((int)255));		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(271)
									int tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(271)
									int tmp69 = (int(tmp68) & int((int)255));		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(271)
									int tmp70 = (int(tmp66) | int(tmp69));		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(271)
									comparePixel = tmp70;
								}
								HX_STACK_LINE(271)
								(int)255;
							}
							HX_STACK_LINE(273)
							foundDifference = true;
						}
					}
					HX_STACK_LINE(279)
					bool tmp21 = foundDifference;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(279)
					if ((tmp21)){
						HX_STACK_LINE(281)
						bool tmp22 = (bitmapData == null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(281)
						if ((tmp22)){
							HX_STACK_LINE(283)
							int tmp23 = this->width;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(283)
							int tmp24 = this->height;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(283)
							bool tmp25 = this->transparent;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(283)
							bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(283)
							bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(283)
							if ((tmp26)){
								HX_STACK_LINE(283)
								tmp27 = otherBitmapData->transparent;
							}
							else{
								HX_STACK_LINE(283)
								tmp27 = true;
							}
							HX_STACK_LINE(283)
							::openfl::display::BitmapData tmp28 = ::openfl::display::BitmapData_obj::__new(tmp23,tmp24,tmp27,(int)0);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(283)
							bitmapData = tmp28;
						}
						HX_STACK_LINE(287)
						int tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(287)
						int tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(287)
						int tmp25 = comparePixel;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(287)
						bitmapData->setPixel32(tmp23,tmp24,tmp25);
					}
				}
			}
		}
	}
	HX_STACK_LINE(295)
	bool tmp6 = (bitmapData == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(295)
	if ((tmp6)){
		HX_STACK_LINE(297)
		return (int)0;
	}
	HX_STACK_LINE(301)
	::openfl::display::BitmapData tmp7 = bitmapData;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(301)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,compare,return )

Void BitmapData_obj::copyChannel( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,int sourceChannel,int destChannel){
{
		HX_STACK_FRAME("openfl.display.BitmapData","copyChannel",0x5d702b43,"openfl.display.BitmapData.copyChannel","openfl/display/BitmapData.hx",306,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(sourceChannel,"sourceChannel")
		HX_STACK_ARG(destChannel,"destChannel")
		HX_STACK_LINE(308)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(308)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(308)
		if ((tmp1)){
			HX_STACK_LINE(308)
			return null();
		}
		HX_STACK_LINE(310)
		int tmp2 = sourceChannel;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(310)
		::lime::graphics::ImageChannel tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(310)
		switch( (int)(tmp2)){
			case (int)1: {
				HX_STACK_LINE(312)
				tmp3 = ::lime::graphics::ImageChannel_obj::RED;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(313)
				tmp3 = ::lime::graphics::ImageChannel_obj::GREEN;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(314)
				tmp3 = ::lime::graphics::ImageChannel_obj::BLUE;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(315)
				tmp3 = ::lime::graphics::ImageChannel_obj::ALPHA;
			}
			;break;
			default: {
				HX_STACK_LINE(316)
				return null();
			}
		}
		HX_STACK_LINE(310)
		::lime::graphics::ImageChannel sourceChannel1 = tmp3;		HX_STACK_VAR(sourceChannel1,"sourceChannel1");
		HX_STACK_LINE(320)
		int tmp4 = destChannel;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(320)
		::lime::graphics::ImageChannel tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(320)
		switch( (int)(tmp4)){
			case (int)1: {
				HX_STACK_LINE(322)
				tmp5 = ::lime::graphics::ImageChannel_obj::RED;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(323)
				tmp5 = ::lime::graphics::ImageChannel_obj::GREEN;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(324)
				tmp5 = ::lime::graphics::ImageChannel_obj::BLUE;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(325)
				tmp5 = ::lime::graphics::ImageChannel_obj::ALPHA;
			}
			;break;
			default: {
				HX_STACK_LINE(326)
				return null();
			}
		}
		HX_STACK_LINE(320)
		::lime::graphics::ImageChannel destChannel1 = tmp5;		HX_STACK_VAR(destChannel1,"destChannel1");
		HX_STACK_LINE(330)
		::lime::graphics::Image tmp6 = this->image;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(330)
		::lime::graphics::Image tmp7 = sourceBitmapData->image;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(330)
		::lime::math::Rectangle tmp8 = sourceRect->__toLimeRectangle();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(330)
		::lime::math::Vector2 tmp9 = destPoint->__toLimeVector2();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(330)
		::lime::graphics::ImageChannel tmp10 = sourceChannel1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(330)
		::lime::graphics::ImageChannel tmp11 = destChannel1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(330)
		tmp6->copyChannel(tmp7,tmp8,tmp9,tmp10,tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,copyChannel,(void))

Void BitmapData_obj::copyPixels( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::openfl::display::BitmapData alphaBitmapData,::openfl::geom::Point alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","copyPixels",0x385c94ad,"openfl.display.BitmapData.copyPixels","openfl/display/BitmapData.hx",335,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(alphaBitmapData,"alphaBitmapData")
	HX_STACK_ARG(alphaPoint,"alphaPoint")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
{
		HX_STACK_LINE(337)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(337)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(337)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(337)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(337)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(337)
		if ((tmp3)){
			HX_STACK_LINE(337)
			tmp4 = (sourceBitmapData == null());
		}
		else{
			HX_STACK_LINE(337)
			tmp4 = true;
		}
		HX_STACK_LINE(337)
		if ((tmp4)){
			HX_STACK_LINE(337)
			return null();
		}
		HX_STACK_LINE(339)
		bool tmp5 = (sourceBitmapData == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(339)
		if ((tmp5)){
			HX_STACK_LINE(341)
			::openfl::display::BitmapData tmp6 = sourceBitmapData->clone();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(341)
			sourceBitmapData = tmp6;
		}
		HX_STACK_LINE(345)
		::lime::graphics::Image tmp6 = this->image;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(345)
		::lime::graphics::Image tmp7 = sourceBitmapData->image;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(345)
		::lime::math::Rectangle tmp8 = sourceRect->__toLimeRectangle();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(345)
		::lime::math::Vector2 tmp9 = destPoint->__toLimeVector2();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(345)
		bool tmp10 = (alphaBitmapData != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(345)
		::lime::graphics::Image tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(345)
		if ((tmp10)){
			HX_STACK_LINE(345)
			tmp11 = alphaBitmapData->image;
		}
		else{
			HX_STACK_LINE(345)
			tmp11 = null();
		}
		HX_STACK_LINE(345)
		bool tmp12 = (alphaPoint != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(345)
		::lime::math::Vector2 tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(345)
		if ((tmp12)){
			HX_STACK_LINE(345)
			tmp13 = alphaPoint->__toLimeVector2();
		}
		else{
			HX_STACK_LINE(345)
			tmp13 = null();
		}
		HX_STACK_LINE(345)
		bool tmp14 = mergeAlpha;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(345)
		tmp6->copyPixels(tmp7,tmp8,tmp9,tmp11,tmp13,tmp14);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,copyPixels,(void))

Void BitmapData_obj::dispose( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","dispose",0x8eb5efd4,"openfl.display.BitmapData.dispose","openfl/display/BitmapData.hx",350,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(352)
		this->image = null();
		HX_STACK_LINE(354)
		this->width = (int)0;
		HX_STACK_LINE(355)
		this->height = (int)0;
		HX_STACK_LINE(356)
		this->rect = null();
		HX_STACK_LINE(357)
		this->__isValid = false;
		HX_STACK_LINE(359)
		::lime::graphics::opengl::GLTexture tmp = this->__texture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(359)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(359)
		if ((tmp1)){
			HX_STACK_LINE(361)
			::openfl::display::MovieClip tmp2 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(361)
			::openfl::_internal::renderer::AbstractRenderer tmp3 = tmp2->stage->__renderer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(361)
			::openfl::_internal::renderer::AbstractRenderer renderer = tmp3;		HX_STACK_VAR(renderer,"renderer");
			HX_STACK_LINE(363)
			bool tmp4 = (renderer != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(363)
			if ((tmp4)){
				HX_STACK_LINE(365)
				::openfl::_internal::renderer::RenderSession renderSession = renderer->renderSession;		HX_STACK_VAR(renderSession,"renderSession");
				HX_STACK_LINE(366)
				::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
				HX_STACK_LINE(368)
				bool tmp5 = (gl != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(368)
				if ((tmp5)){
					HX_STACK_LINE(370)
					{
						HX_STACK_LINE(370)
						::lime::graphics::opengl::GLTexture tmp6 = this->__texture;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(370)
						::lime::graphics::opengl::GLTexture texture = tmp6;		HX_STACK_VAR(texture,"texture");
						HX_STACK_LINE(370)
						{
							HX_STACK_LINE(370)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_texture.call(hx::DynamicPtr(texture->id));
							HX_STACK_LINE(370)
							texture->invalidate();
						}
					}
					HX_STACK_LINE(371)
					this->__texture = null();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,dispose,(void))

Void BitmapData_obj::draw( ::openfl::display::IBitmapDrawable source,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform colorTransform,Dynamic blendMode,::openfl::geom::Rectangle clipRect,hx::Null< bool >  __o_smoothing){
bool smoothing = __o_smoothing.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","draw",0xf1a859af,"openfl.display.BitmapData.draw","openfl/display/BitmapData.hx",382,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(colorTransform,"colorTransform")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(clipRect,"clipRect")
	HX_STACK_ARG(smoothing,"smoothing")
{
		HX_STACK_LINE(384)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(384)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(384)
		if ((tmp1)){
			HX_STACK_LINE(384)
			return null();
		}
		HX_STACK_LINE(454)
		bool tmp2 = (source == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(454)
		if ((tmp2)){
			HX_STACK_LINE(456)
			::openfl::display::BitmapData tmp3 = this->clone();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(456)
			source = tmp3;
		}
		HX_STACK_LINE(460)
		bool tmp3 = (colorTransform != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(460)
		if ((tmp3)){
			HX_STACK_LINE(462)
			::openfl::display::IBitmapDrawable tmp4 = source;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(462)
			Dynamic tmp5 = ::Reflect_obj::getProperty(tmp4,HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(462)
			::openfl::display::IBitmapDrawable tmp6 = source;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(462)
			Dynamic tmp7 = ::Reflect_obj::getProperty(tmp6,HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(462)
			::openfl::display::BitmapData tmp8 = ::openfl::display::BitmapData_obj::__new(tmp5,tmp7,true,(int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(462)
			::openfl::display::BitmapData copy = tmp8;		HX_STACK_VAR(copy,"copy");
			HX_STACK_LINE(463)
			::openfl::display::IBitmapDrawable tmp9 = source;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(463)
			copy->draw(tmp9,null(),null(),null(),null(),null());
			HX_STACK_LINE(464)
			::openfl::geom::Rectangle tmp10 = copy->rect;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(464)
			::openfl::geom::ColorTransform tmp11 = colorTransform;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(464)
			copy->colorTransform(tmp10,tmp11);
			HX_STACK_LINE(465)
			source = copy;
		}
		HX_STACK_LINE(469)
		Dynamic tmp4 = this->getSurface();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(469)
		Dynamic surface = tmp4;		HX_STACK_VAR(surface,"surface");
		HX_STACK_LINE(470)
		::lime::graphics::cairo::Cairo tmp5 = ::lime::graphics::cairo::Cairo_obj::__new(surface);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(470)
		::lime::graphics::cairo::Cairo cairo = tmp5;		HX_STACK_VAR(cairo,"cairo");
		HX_STACK_LINE(472)
		bool tmp6 = smoothing;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(472)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(472)
		if ((tmp7)){
			HX_STACK_LINE(474)
			cairo->set_antialias((int)1);
		}
		HX_STACK_LINE(478)
		::openfl::_internal::renderer::RenderSession tmp8 = ::openfl::_internal::renderer::RenderSession_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(478)
		::openfl::_internal::renderer::RenderSession renderSession = tmp8;		HX_STACK_VAR(renderSession,"renderSession");
		HX_STACK_LINE(479)
		renderSession->cairo = cairo;
		HX_STACK_LINE(480)
		renderSession->allowSmoothing = smoothing;
		HX_STACK_LINE(481)
		renderSession->roundPixels = true;
		HX_STACK_LINE(482)
		::openfl::_internal::renderer::cairo::CairoMaskManager tmp9 = ::openfl::_internal::renderer::cairo::CairoMaskManager_obj::__new(renderSession);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(482)
		renderSession->maskManager = tmp9;
		HX_STACK_LINE(483)
		::openfl::_internal::renderer::cairo::CairoBlendModeManager tmp10 = ::openfl::_internal::renderer::cairo::CairoBlendModeManager_obj::__new(renderSession);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(483)
		renderSession->blendModeManager = tmp10;
		HX_STACK_LINE(485)
		bool tmp11 = (clipRect != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(485)
		if ((tmp11)){
			HX_STACK_LINE(487)
			::openfl::geom::Rectangle tmp12 = clipRect;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(487)
			::openfl::geom::Matrix tmp13 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(487)
			renderSession->maskManager->pushRect(tmp12,tmp13);
		}
		HX_STACK_LINE(491)
		::openfl::geom::Matrix matrixCache = source->__Field(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"), hx::paccDynamic );		HX_STACK_VAR(matrixCache,"matrixCache");
		HX_STACK_LINE(492)
		bool tmp12 = (matrix != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(492)
		::openfl::geom::Matrix tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(492)
		if ((tmp12)){
			HX_STACK_LINE(492)
			tmp13 = matrix;
		}
		else{
			HX_STACK_LINE(492)
			tmp13 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(492)
		source->__updateTransforms(tmp13);
		HX_STACK_LINE(493)
		source->__updateChildren(false);
		HX_STACK_LINE(494)
		::openfl::_internal::renderer::RenderSession tmp14 = renderSession;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(494)
		source->__renderCairo(tmp14);
		HX_STACK_LINE(495)
		::openfl::geom::Matrix tmp15 = matrixCache;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(495)
		source->__updateTransforms(tmp15);
		HX_STACK_LINE(496)
		source->__updateChildren(true);
		HX_STACK_LINE(498)
		bool tmp16 = (clipRect != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(498)
		if ((tmp16)){
			HX_STACK_LINE(500)
			renderSession->maskManager->popRect();
		}
		HX_STACK_LINE(504)
		Dynamic tmp17 = surface;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(504)
		::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::flush(tmp17);
		HX_STACK_LINE(506)
		::lime::graphics::Image tmp18 = this->image;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(506)
		tmp18->dirty = true;
		HX_STACK_LINE(507)
		::lime::graphics::Image tmp19 = this->image;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(507)
		(tmp19->version)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,draw,(void))

Void BitmapData_obj::drawWithQuality( ::openfl::display::IBitmapDrawable source,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform colorTransform,Dynamic blendMode,::openfl::geom::Rectangle clipRect,hx::Null< bool >  __o_smoothing,Dynamic quality){
bool smoothing = __o_smoothing.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","drawWithQuality",0xabf0f1ea,"openfl.display.BitmapData.drawWithQuality","openfl/display/BitmapData.hx",514,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(colorTransform,"colorTransform")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(clipRect,"clipRect")
	HX_STACK_ARG(smoothing,"smoothing")
	HX_STACK_ARG(quality,"quality")
{
		HX_STACK_LINE(516)
		::openfl::display::IBitmapDrawable tmp = source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(516)
		::openfl::geom::Matrix tmp1 = matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(516)
		::openfl::geom::ColorTransform tmp2 = colorTransform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(516)
		Dynamic tmp3 = blendMode;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(516)
		::openfl::geom::Rectangle tmp4 = clipRect;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(516)
		bool tmp5 = smoothing;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(516)
		this->draw(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(BitmapData_obj,drawWithQuality,(void))

::openfl::utils::ByteArrayData BitmapData_obj::encode( ::openfl::geom::Rectangle rect,Dynamic compressor,::openfl::utils::ByteArrayData byteArray){
	HX_STACK_FRAME("openfl.display.BitmapData","encode",0x09c32081,"openfl.display.BitmapData.encode","openfl/display/BitmapData.hx",521,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(compressor,"compressor")
	HX_STACK_ARG(byteArray,"byteArray")
	HX_STACK_LINE(525)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(525)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(525)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(525)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(525)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(525)
	if ((tmp3)){
		HX_STACK_LINE(525)
		tmp4 = (rect == null());
	}
	else{
		HX_STACK_LINE(525)
		tmp4 = true;
	}
	HX_STACK_LINE(525)
	if ((tmp4)){
		HX_STACK_LINE(525)
		::openfl::utils::ByteArrayData tmp5 = byteArray = null();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(525)
		return tmp5;
	}
	HX_STACK_LINE(527)
	Dynamic tmp5 = compressor;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(527)
	bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::openfl::display::PNGEncoderOptions >());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(527)
	if ((tmp6)){
		HX_STACK_LINE(529)
		::lime::graphics::Image tmp7 = this->image;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(529)
		::haxe::io::Bytes tmp8 = tmp7->encode(HX_HCSTRING("png","\xa9","\x5c","\x55","\x00"),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(529)
		::openfl::utils::ByteArrayData tmp9 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(529)
		::openfl::utils::ByteArrayData tmp10 = byteArray = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(529)
		return tmp10;
	}
	else{
		HX_STACK_LINE(531)
		Dynamic tmp7 = compressor;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(531)
		bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::openfl::display::JPEGEncoderOptions >());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(531)
		if ((tmp8)){
			HX_STACK_LINE(533)
			::lime::graphics::Image tmp9 = this->image;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(533)
			::openfl::display::JPEGEncoderOptions tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(533)
			tmp10 = hx::TCast< ::openfl::display::JPEGEncoderOptions >::cast(compressor);
			HX_STACK_LINE(533)
			int tmp11 = tmp10->quality;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(533)
			::haxe::io::Bytes tmp12 = tmp9->encode(HX_HCSTRING("jpg","\xe1","\xd0","\x50","\x00"),tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(533)
			::openfl::utils::ByteArrayData tmp13 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(533)
			::openfl::utils::ByteArrayData tmp14 = byteArray = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(533)
			return tmp14;
		}
	}
	HX_STACK_LINE(537)
	::openfl::utils::ByteArrayData tmp7 = byteArray = null();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(537)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,encode,return )

Void BitmapData_obj::fillRect( ::openfl::geom::Rectangle rect,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","fillRect",0x95912472,"openfl.display.BitmapData.fillRect","openfl/display/BitmapData.hx",542,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(544)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(544)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(544)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(544)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(544)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(544)
		if ((tmp3)){
			HX_STACK_LINE(544)
			tmp4 = (rect == null());
		}
		else{
			HX_STACK_LINE(544)
			tmp4 = true;
		}
		HX_STACK_LINE(544)
		if ((tmp4)){
			HX_STACK_LINE(544)
			return null();
		}
		HX_STACK_LINE(546)
		bool tmp5 = this->transparent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(546)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(546)
		if ((tmp5)){
			HX_STACK_LINE(546)
			int tmp7 = (int(color) & int((int)-16777216));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(546)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(546)
			tmp6 = (tmp8 == (int)0);
		}
		else{
			HX_STACK_LINE(546)
			tmp6 = false;
		}
		HX_STACK_LINE(546)
		if ((tmp6)){
			HX_STACK_LINE(548)
			color = (int)0;
		}
		HX_STACK_LINE(552)
		::lime::graphics::Image tmp7 = this->image;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(552)
		::lime::math::Rectangle tmp8 = rect->__toLimeRectangle();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(552)
		int tmp9 = color;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(552)
		tmp7->fillRect(tmp8,tmp9,(int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,fillRect,(void))

Void BitmapData_obj::floodFill( int x,int y,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","floodFill",0xed95e9d6,"openfl.display.BitmapData.floodFill","openfl/display/BitmapData.hx",557,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(559)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(559)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(559)
		if ((tmp1)){
			HX_STACK_LINE(559)
			return null();
		}
		HX_STACK_LINE(560)
		::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(560)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(560)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(560)
		int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(560)
		tmp2->floodFill(tmp3,tmp4,tmp5,(int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,floodFill,(void))

::openfl::geom::Rectangle BitmapData_obj::generateFilterRect( ::openfl::geom::Rectangle sourceRect,::openfl::filters::BitmapFilter filter){
	HX_STACK_FRAME("openfl.display.BitmapData","generateFilterRect",0x1ef8cf7c,"openfl.display.BitmapData.generateFilterRect","openfl/display/BitmapData.hx",618,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(620)
	::openfl::geom::Rectangle tmp = sourceRect->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(620)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,generateFilterRect,return )

::lime::graphics::opengl::GLBuffer BitmapData_obj::getBuffer( ::lime::graphics::GLRenderContext gl,Float alpha){
	HX_STACK_FRAME("openfl.display.BitmapData","getBuffer",0xe0f6acab,"openfl.display.BitmapData.getBuffer","openfl/display/BitmapData.hx",625,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gl,"gl")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_LINE(627)
	::lime::graphics::opengl::GLBuffer tmp = this->__buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(627)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(627)
	if ((tmp1)){
		HX_STACK_LINE(651)
		int uvWidth = (int)1;		HX_STACK_VAR(uvWidth,"uvWidth");
		HX_STACK_LINE(652)
		int uvHeight = (int)1;		HX_STACK_VAR(uvHeight,"uvHeight");
		HX_STACK_LINE(656)
		::lime::utils::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(656)
		{
			HX_STACK_LINE(658)
			int tmp3 = this->width;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(658)
			int tmp4 = this->height;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(658)
			int tmp5 = uvWidth;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(658)
			int tmp6 = uvHeight;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(658)
			Float tmp7 = alpha;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(659)
			int tmp8 = this->height;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(659)
			int tmp9 = uvHeight;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(659)
			Float tmp10 = alpha;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(660)
			int tmp11 = this->width;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(660)
			int tmp12 = uvWidth;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(660)
			Float tmp13 = alpha;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(661)
			Float tmp14 = alpha;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(656)
			cpp::ArrayBase array = Array_obj< Float >::__new().Add(tmp3).Add(tmp4).Add((int)0).Add(tmp5).Add(tmp6).Add(tmp7).Add((int)0).Add(tmp8).Add((int)0).Add((int)0).Add(tmp9).Add(tmp10).Add(tmp11).Add((int)0).Add((int)0).Add(tmp12).Add((int)0).Add(tmp13).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add(tmp14);		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(656)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(656)
			bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(656)
			if ((tmp15)){
				HX_STACK_LINE(656)
				::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(656)
				this1 = tmp16;
			}
			else{
				HX_STACK_LINE(656)
				bool tmp16 = (array != null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(656)
				if ((tmp16)){
					HX_STACK_LINE(656)
					::lime::utils::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(656)
					{
						HX_STACK_LINE(656)
						::lime::utils::ArrayBufferView tmp18 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(656)
						::lime::utils::ArrayBufferView _this = tmp18;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(656)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(656)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(656)
						int tmp19 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(656)
						_this->byteLength = tmp19;
						HX_STACK_LINE(656)
						::haxe::io::Bytes tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(656)
						{
							HX_STACK_LINE(656)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(656)
							int tmp21 = _this->byteLength;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(656)
							::haxe::io::Bytes tmp22 = ::haxe::io::Bytes_obj::alloc(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(656)
							this2 = tmp22;
							HX_STACK_LINE(656)
							tmp20 = this2;
						}
						HX_STACK_LINE(656)
						_this->buffer = tmp20;
						HX_STACK_LINE(656)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(656)
						tmp17 = _this;
					}
					HX_STACK_LINE(656)
					this1 = tmp17;
				}
				else{
					HX_STACK_LINE(656)
					bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(656)
					if ((tmp17)){
						HX_STACK_LINE(656)
						::lime::utils::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(656)
						{
							HX_STACK_LINE(656)
							::lime::utils::ArrayBufferView tmp19 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(656)
							::lime::utils::ArrayBufferView _this = tmp19;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(656)
							cpp::ArrayBase array1 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array1,"array1");
							HX_STACK_LINE(656)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(656)
							_this->length = array1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
							HX_STACK_LINE(656)
							int tmp20 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(656)
							_this->byteLength = tmp20;
							HX_STACK_LINE(656)
							::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(656)
							{
								HX_STACK_LINE(656)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(656)
								int tmp22 = _this->byteLength;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(656)
								::haxe::io::Bytes tmp23 = ::haxe::io::Bytes_obj::alloc(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(656)
								this2 = tmp23;
								HX_STACK_LINE(656)
								tmp21 = this2;
							}
							HX_STACK_LINE(656)
							_this->buffer = tmp21;
							HX_STACK_LINE(656)
							_this->copyFromArray(((Array< Float >)(array1)),null());
							HX_STACK_LINE(656)
							tmp18 = _this;
						}
						HX_STACK_LINE(656)
						this1 = tmp18;
					}
					else{
						HX_STACK_LINE(656)
						bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(656)
						if ((tmp18)){
							HX_STACK_LINE(656)
							::lime::utils::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(656)
							{
								HX_STACK_LINE(656)
								::lime::utils::ArrayBufferView tmp20 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(656)
								::lime::utils::ArrayBufferView _this = tmp20;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(656)
								::haxe::io::Bytes tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(656)
								::haxe::io::Bytes srcData = tmp21;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(656)
								int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(656)
								int srcLength = tmp22;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(656)
								int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(656)
								int srcByteOffset = tmp23;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(656)
								int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(656)
								int srcElementSize = tmp24;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(656)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(656)
								int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(656)
								int tmp26 = _this->type;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(656)
								bool tmp27 = (tmp25 == tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(656)
								if ((tmp27)){
									HX_STACK_LINE(656)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(656)
									int tmp28 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(656)
									int cloneLength = tmp28;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(656)
									::haxe::io::Bytes tmp29;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(656)
									{
										HX_STACK_LINE(656)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(656)
										int tmp30 = cloneLength;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(656)
										::haxe::io::Bytes tmp31 = ::haxe::io::Bytes_obj::alloc(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(656)
										this2 = tmp31;
										HX_STACK_LINE(656)
										tmp29 = this2;
									}
									HX_STACK_LINE(656)
									_this->buffer = tmp29;
									HX_STACK_LINE(656)
									::haxe::io::Bytes tmp30 = srcData;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(656)
									int tmp31 = srcByteOffset;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(656)
									int tmp32 = cloneLength;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(656)
									_this->buffer->blit((int)0,tmp30,tmp31,tmp32);
								}
								else{
									HX_STACK_LINE(656)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(656)
								int tmp28 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(656)
								_this->byteLength = tmp28;
								HX_STACK_LINE(656)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(656)
								_this->length = srcLength;
								HX_STACK_LINE(656)
								tmp19 = _this;
							}
							HX_STACK_LINE(656)
							this1 = tmp19;
						}
						else{
							HX_STACK_LINE(656)
							bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(656)
							if ((tmp19)){
								HX_STACK_LINE(656)
								::lime::utils::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(656)
								{
									HX_STACK_LINE(656)
									::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(656)
									::lime::utils::ArrayBufferView _this = tmp21;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(656)
									bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(656)
									if ((tmp22)){
										HX_STACK_LINE(656)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(656)
									int tmp23 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(656)
									bool tmp24 = (tmp23 != (int)0);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(656)
									if ((tmp24)){
										HX_STACK_LINE(656)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(656)
									int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(656)
									int bufferByteLength = tmp25;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(656)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(656)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(656)
									bool tmp26 = true;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(656)
									if ((tmp26)){
										HX_STACK_LINE(656)
										int tmp27 = bufferByteLength;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(656)
										newByteLength = tmp27;
										HX_STACK_LINE(656)
										int tmp28 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(656)
										bool tmp29 = (tmp28 != (int)0);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(656)
										if ((tmp29)){
											HX_STACK_LINE(656)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(656)
										bool tmp30 = (newByteLength < (int)0);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(656)
										if ((tmp30)){
											HX_STACK_LINE(656)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(656)
										int tmp27 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(656)
										newByteLength = tmp27;
										HX_STACK_LINE(656)
										int tmp28 = newByteLength;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(656)
										int newRange = tmp28;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(656)
										bool tmp29 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(656)
										if ((tmp29)){
											HX_STACK_LINE(656)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(656)
									_this->buffer = null();
									HX_STACK_LINE(656)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(656)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(656)
									Float tmp27 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(656)
									int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(656)
									_this->length = tmp28;
									HX_STACK_LINE(656)
									tmp20 = _this;
								}
								HX_STACK_LINE(656)
								this1 = tmp20;
							}
							else{
								HX_STACK_LINE(656)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
						}
					}
				}
			}
			HX_STACK_LINE(656)
			tmp2 = this1;
		}
		HX_STACK_LINE(656)
		this->__bufferData = tmp2;
		HX_STACK_LINE(665)
		this->__bufferAlpha = alpha;
		HX_STACK_LINE(666)
		int tmp3 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(666)
		Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(666)
		{
			HX_STACK_LINE(666)
			::hx::Object * inVal = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_buffer.call();		HX_STACK_VAR(inVal,"inVal");
			HX_STACK_LINE(666)
			::hx::Object * tmp5 = inVal;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(666)
			::hx::Object * tmp6 = hx::DynamicPtr(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(666)
			tmp4 = Dynamic(tmp6);
		}
		HX_STACK_LINE(666)
		::lime::graphics::opengl::GLBuffer tmp5 = ::lime::graphics::opengl::GLBuffer_obj::__new(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(666)
		this->__buffer = tmp5;
		HX_STACK_LINE(668)
		{
			HX_STACK_LINE(668)
			::lime::graphics::opengl::GLBuffer tmp6 = this->__buffer;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(668)
			::lime::graphics::opengl::GLBuffer buffer = tmp6;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(668)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(gl->ARRAY_BUFFER,hx::DynamicPtr((  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) )));
		}
		HX_STACK_LINE(669)
		{
			HX_STACK_LINE(669)
			::lime::utils::ArrayBufferView tmp6 = this->__bufferData;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(669)
			::lime::utils::ArrayBufferView data = tmp6;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(669)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_buffer_data.call(gl->ARRAY_BUFFER,hx::DynamicPtr(data->buffer),data->byteOffset,data->byteLength,gl->STATIC_DRAW);
		}
	}
	else{
		HX_STACK_LINE(672)
		Float tmp2 = this->__bufferAlpha;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(672)
		Float tmp3 = alpha;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(672)
		bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(672)
		if ((tmp4)){
			HX_STACK_LINE(674)
			{
				HX_STACK_LINE(674)
				::lime::utils::ArrayBufferView tmp5 = this->__bufferData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(674)
				::lime::utils::ArrayBufferView this1 = tmp5;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(674)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)20),alpha);
				HX_STACK_LINE(674)
				alpha;
			}
			HX_STACK_LINE(675)
			{
				HX_STACK_LINE(675)
				::lime::utils::ArrayBufferView tmp5 = this->__bufferData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(675)
				::lime::utils::ArrayBufferView this1 = tmp5;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(675)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)44),alpha);
				HX_STACK_LINE(675)
				alpha;
			}
			HX_STACK_LINE(676)
			{
				HX_STACK_LINE(676)
				::lime::utils::ArrayBufferView tmp5 = this->__bufferData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(676)
				::lime::utils::ArrayBufferView this1 = tmp5;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(676)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)68),alpha);
				HX_STACK_LINE(676)
				alpha;
			}
			HX_STACK_LINE(677)
			{
				HX_STACK_LINE(677)
				::lime::utils::ArrayBufferView tmp5 = this->__bufferData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(677)
				::lime::utils::ArrayBufferView this1 = tmp5;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(677)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)92),alpha);
				HX_STACK_LINE(677)
				alpha;
			}
			HX_STACK_LINE(678)
			this->__bufferAlpha = alpha;
			HX_STACK_LINE(680)
			{
				HX_STACK_LINE(680)
				::lime::graphics::opengl::GLBuffer tmp5 = this->__buffer;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(680)
				::lime::graphics::opengl::GLBuffer buffer = tmp5;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(680)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(gl->ARRAY_BUFFER,hx::DynamicPtr((  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) )));
			}
			HX_STACK_LINE(681)
			{
				HX_STACK_LINE(681)
				::lime::utils::ArrayBufferView tmp5 = this->__bufferData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(681)
				::lime::utils::ArrayBufferView data = tmp5;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(681)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_buffer_data.call(gl->ARRAY_BUFFER,hx::DynamicPtr(data->buffer),data->byteOffset,data->byteLength,gl->STATIC_DRAW);
			}
		}
	}
	HX_STACK_LINE(685)
	::lime::graphics::opengl::GLBuffer tmp2 = this->__buffer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(685)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,getBuffer,return )

::openfl::geom::Rectangle BitmapData_obj::getColorBoundsRect( int mask,int color,hx::Null< bool >  __o_findColor){
bool findColor = __o_findColor.Default(true);
	HX_STACK_FRAME("openfl.display.BitmapData","getColorBoundsRect",0x21495071,"openfl.display.BitmapData.getColorBoundsRect","openfl/display/BitmapData.hx",690,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(findColor,"findColor")
{
		HX_STACK_LINE(692)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(692)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(692)
		if ((tmp1)){
			HX_STACK_LINE(692)
			int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(692)
			int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(692)
			::openfl::geom::Rectangle tmp4 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(692)
			return tmp4;
		}
		HX_STACK_LINE(694)
		bool tmp2 = this->transparent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(694)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(694)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(694)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(694)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(694)
		if ((tmp5)){
			HX_STACK_LINE(694)
			int tmp7 = (int(mask) >> int((int)24));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(694)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(694)
			int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(694)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(694)
			tmp6 = (tmp10 > (int)0);
		}
		else{
			HX_STACK_LINE(694)
			tmp6 = true;
		}
		HX_STACK_LINE(694)
		if ((tmp6)){
			HX_STACK_LINE(696)
			int color1 = color;		HX_STACK_VAR(color1,"color1");
			HX_STACK_LINE(697)
			int tmp7 = (int(color1) >> int((int)24));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(697)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(697)
			int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(697)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(697)
			bool tmp11 = (tmp10 == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(697)
			if ((tmp11)){
				HX_STACK_LINE(697)
				color1 = (int)0;
			}
		}
		HX_STACK_LINE(701)
		::lime::graphics::Image tmp7 = this->image;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(701)
		int tmp8 = mask;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(701)
		int tmp9 = color;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(701)
		bool tmp10 = findColor;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(701)
		::lime::math::Rectangle tmp11 = tmp7->getColorBoundsRect(tmp8,tmp9,tmp10,(int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(701)
		::lime::math::Rectangle rect = tmp11;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(702)
		::openfl::geom::Rectangle tmp12 = ::openfl::geom::Rectangle_obj::__new(rect->x,rect->y,rect->width,rect->height);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(702)
		return tmp12;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,getColorBoundsRect,return )

int BitmapData_obj::getPixel( int x,int y){
	HX_STACK_FRAME("openfl.display.BitmapData","getPixel",0x4b52b53b,"openfl.display.BitmapData.getPixel","openfl/display/BitmapData.hx",707,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(709)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(709)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(709)
	if ((tmp1)){
		HX_STACK_LINE(709)
		return (int)0;
	}
	HX_STACK_LINE(710)
	::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(710)
	int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(710)
	int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(710)
	int tmp5 = tmp2->getPixel(tmp3,tmp4,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(710)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,getPixel,return )

int BitmapData_obj::getPixel32( int x,int y){
	HX_STACK_FRAME("openfl.display.BitmapData","getPixel32",0xcd56e69a,"openfl.display.BitmapData.getPixel32","openfl/display/BitmapData.hx",715,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(717)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(717)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(717)
	if ((tmp1)){
		HX_STACK_LINE(717)
		return (int)0;
	}
	HX_STACK_LINE(718)
	::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(718)
	int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(718)
	int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(718)
	int tmp5 = tmp2->getPixel32(tmp3,tmp4,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(718)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,getPixel32,return )

::openfl::utils::ByteArrayData BitmapData_obj::getPixels( ::openfl::geom::Rectangle rect){
	HX_STACK_FRAME("openfl.display.BitmapData","getPixels",0x9d0bded8,"openfl.display.BitmapData.getPixels","openfl/display/BitmapData.hx",723,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(725)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(725)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(725)
	if ((tmp1)){
		HX_STACK_LINE(725)
		return null();
	}
	HX_STACK_LINE(726)
	bool tmp2 = (rect == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(726)
	if ((tmp2)){
		HX_STACK_LINE(726)
		::openfl::geom::Rectangle tmp3 = this->rect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(726)
		rect = tmp3;
	}
	HX_STACK_LINE(727)
	::lime::graphics::Image tmp3 = this->image;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(727)
	::lime::math::Rectangle tmp4 = rect->__toLimeRectangle();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(727)
	::haxe::io::Bytes tmp5 = tmp3->getPixels(tmp4,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(727)
	::openfl::utils::ByteArrayData tmp6 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(727)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getPixels,return )

Dynamic BitmapData_obj::getSurface( ){
	HX_STACK_FRAME("openfl.display.BitmapData","getSurface",0xa2992c22,"openfl.display.BitmapData.getSurface","openfl/display/BitmapData.hx",732,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(734)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(734)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(734)
	if ((tmp1)){
		HX_STACK_LINE(734)
		return null();
	}
	HX_STACK_LINE(736)
	Dynamic tmp2 = this->__surface;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(736)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(736)
	if ((tmp3)){
		HX_STACK_LINE(738)
		::lime::graphics::Image tmp4 = this->image;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(738)
		Dynamic tmp5 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::fromImage(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(738)
		this->__surface = tmp5;
	}
	HX_STACK_LINE(742)
	Dynamic tmp4 = this->__surface;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(742)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,getSurface,return )

::lime::graphics::opengl::GLTexture BitmapData_obj::getTexture( ::lime::graphics::GLRenderContext gl){
	HX_STACK_FRAME("openfl.display.BitmapData","getTexture",0xe4308ed0,"openfl.display.BitmapData.getTexture","openfl/display/BitmapData.hx",747,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gl,"gl")
	HX_STACK_LINE(749)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(749)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(749)
	if ((tmp1)){
		HX_STACK_LINE(749)
		return null();
	}
	HX_STACK_LINE(751)
	::lime::graphics::opengl::GLTexture tmp2 = this->__texture;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(751)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(751)
	if ((tmp3)){
		HX_STACK_LINE(753)
		int tmp4 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(753)
		Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(753)
		{
			HX_STACK_LINE(753)
			::hx::Object * inVal = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_texture.call();		HX_STACK_VAR(inVal,"inVal");
			HX_STACK_LINE(753)
			::hx::Object * tmp6 = inVal;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(753)
			::hx::Object * tmp7 = hx::DynamicPtr(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(753)
			tmp5 = Dynamic(tmp7);
		}
		HX_STACK_LINE(753)
		::lime::graphics::opengl::GLTexture tmp6 = ::lime::graphics::opengl::GLTexture_obj::__new(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(753)
		this->__texture = tmp6;
		HX_STACK_LINE(754)
		{
			HX_STACK_LINE(754)
			::lime::graphics::opengl::GLTexture tmp7 = this->__texture;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(754)
			::lime::graphics::opengl::GLTexture texture = tmp7;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(754)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(gl->TEXTURE_2D,hx::DynamicPtr((  (((texture == null()))) ? Dynamic(null()) : Dynamic(texture->id) )));
		}
		HX_STACK_LINE(755)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_WRAP_S,gl->CLAMP_TO_EDGE);
		HX_STACK_LINE(756)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_WRAP_T,gl->CLAMP_TO_EDGE);
		HX_STACK_LINE(757)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_MAG_FILTER,gl->NEAREST);
		HX_STACK_LINE(758)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_MIN_FILTER,gl->NEAREST);
		HX_STACK_LINE(759)
		this->__textureVersion = (int)-1;
	}
	HX_STACK_LINE(767)
	::lime::graphics::Image tmp4 = this->image;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(767)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(767)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(767)
	if ((tmp5)){
		HX_STACK_LINE(767)
		::lime::graphics::Image tmp7 = this->image;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(767)
		::lime::graphics::Image tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(767)
		int tmp9 = tmp8->version;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(767)
		int tmp10 = this->__textureVersion;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(767)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(767)
		tmp6 = (tmp9 != tmp11);
	}
	else{
		HX_STACK_LINE(767)
		tmp6 = false;
	}
	HX_STACK_LINE(767)
	if ((tmp6)){
		HX_STACK_LINE(769)
		int internalFormat;		HX_STACK_VAR(internalFormat,"internalFormat");
		HX_STACK_LINE(769)
		int format;		HX_STACK_VAR(format,"format");
		HX_STACK_LINE(771)
		Dynamic tmp7 = this->__surface;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(771)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(771)
		if ((tmp8)){
			HX_STACK_LINE(773)
			Dynamic tmp9 = this->__surface;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(773)
			::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::flush(tmp9);
		}
		HX_STACK_LINE(777)
		::lime::graphics::Image tmp9 = this->image;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(777)
		int tmp10 = tmp9->buffer->bitsPerPixel;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(777)
		bool tmp11 = (tmp10 == (int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(777)
		if ((tmp11)){
			HX_STACK_LINE(779)
			internalFormat = gl->ALPHA;
			HX_STACK_LINE(780)
			format = gl->ALPHA;
		}
		else{
			HX_STACK_LINE(796)
			Dynamic tmp12 = ::openfl::display::BitmapData_obj::__isGLES;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(796)
			bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(796)
			if ((tmp13)){
				HX_STACK_LINE(798)
				::String version = ((Dynamic)(::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_parameter.call(gl->VERSION)));		HX_STACK_VAR(version,"version");
				HX_STACK_LINE(799)
				int tmp14 = version.indexOf(HX_HCSTRING("OpenGL ES","\x5f","\xcb","\x92","\x95"),null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(799)
				int tmp15 = (int)-1;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(799)
				bool tmp16 = (tmp14 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(799)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(799)
				if ((tmp16)){
					HX_STACK_LINE(799)
					int tmp18 = version.indexOf(HX_HCSTRING("WebGL","\x99","\x9f","\xe9","\x5a"),null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(799)
					int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(799)
					tmp17 = (tmp19 == (int)-1);
				}
				else{
					HX_STACK_LINE(799)
					tmp17 = false;
				}
				HX_STACK_LINE(799)
				::openfl::display::BitmapData_obj::__isGLES = tmp17;
			}
			HX_STACK_LINE(803)
			Dynamic tmp14 = ::openfl::display::BitmapData_obj::__isGLES;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(803)
			int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(803)
			if ((tmp14)){
				HX_STACK_LINE(803)
				tmp15 = gl->BGRA_EXT;
			}
			else{
				HX_STACK_LINE(803)
				tmp15 = gl->RGBA;
			}
			HX_STACK_LINE(803)
			internalFormat = tmp15;
			HX_STACK_LINE(804)
			format = gl->BGRA_EXT;
		}
		HX_STACK_LINE(810)
		{
			HX_STACK_LINE(810)
			::lime::graphics::opengl::GLTexture tmp12 = this->__texture;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(810)
			::lime::graphics::opengl::GLTexture texture = tmp12;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(810)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(gl->TEXTURE_2D,hx::DynamicPtr((  (((texture == null()))) ? Dynamic(null()) : Dynamic(texture->id) )));
		}
		HX_STACK_LINE(812)
		::lime::graphics::Image tmp12 = this->image;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(812)
		::lime::graphics::Image textureImage = tmp12;		HX_STACK_VAR(textureImage,"textureImage");
		HX_STACK_LINE(853)
		bool tmp13 = textureImage->get_premultiplied();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(853)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(853)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(853)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(853)
		if ((tmp15)){
			HX_STACK_LINE(853)
			tmp16 = textureImage->get_transparent();
		}
		else{
			HX_STACK_LINE(853)
			tmp16 = false;
		}
		HX_STACK_LINE(853)
		if ((tmp16)){
			HX_STACK_LINE(855)
			::lime::graphics::Image tmp17 = textureImage->clone();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(855)
			textureImage = tmp17;
			HX_STACK_LINE(856)
			textureImage->set_premultiplied(true);
		}
		HX_STACK_LINE(863)
		{
			HX_STACK_LINE(863)
			::lime::utils::ArrayBufferView tmp17 = textureImage->get_data();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(863)
			::lime::utils::ArrayBufferView pixels = tmp17;		HX_STACK_VAR(pixels,"pixels");
			HX_STACK_LINE(863)
			{
				HX_STACK_LINE(863)
				bool tmp18 = (pixels == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(863)
				::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(863)
				if ((tmp18)){
					HX_STACK_LINE(863)
					tmp19 = null();
				}
				else{
					HX_STACK_LINE(863)
					tmp19 = pixels->buffer;
				}
				HX_STACK_LINE(863)
				::haxe::io::Bytes buffer = tmp19;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(863)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_image_2d.call(gl->TEXTURE_2D,(int)0,internalFormat,textureImage->buffer->width,textureImage->buffer->height,(int)0,format,gl->UNSIGNED_BYTE,hx::DynamicPtr(buffer),(  (((pixels == null()))) ? int((int)0) : int(pixels->byteOffset) ));
			}
		}
		HX_STACK_LINE(867)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(gl->TEXTURE_2D,hx::DynamicPtr(null()));
		HX_STACK_LINE(868)
		::lime::graphics::Image tmp17 = this->image;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(868)
		this->__textureVersion = tmp17->version;
	}
	HX_STACK_LINE(872)
	::lime::graphics::opengl::GLTexture tmp7 = this->__texture;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(872)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getTexture,return )

::openfl::_Vector::IntVector BitmapData_obj::getVector( ::openfl::geom::Rectangle rect){
	HX_STACK_FRAME("openfl.display.BitmapData","getVector",0xa7bfa06e,"openfl.display.BitmapData.getVector","openfl/display/BitmapData.hx",877,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(879)
	::openfl::geom::Rectangle tmp = rect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(879)
	::openfl::utils::ByteArrayData tmp1 = this->getPixels(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(879)
	::openfl::utils::ByteArrayData pixels = tmp1;		HX_STACK_VAR(pixels,"pixels");
	HX_STACK_LINE(880)
	::openfl::utils::ByteArrayData tmp2 = pixels;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(880)
	int tmp3 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(880)
	Float tmp4 = (Float(tmp3) / Float((int)4));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(880)
	int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(880)
	int length = tmp5;		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(881)
	::openfl::_Vector::IntVector tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(881)
	{
		HX_STACK_LINE(881)
		::openfl::_Vector::IntVector tmp7 = ::openfl::_Vector::IntVector_obj::__new(length,true,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(881)
		::openfl::_Vector::IntVector tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(881)
		tmp6 = tmp8;
	}
	HX_STACK_LINE(881)
	::openfl::_Vector::IntVector result = tmp6;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(883)
	{
		HX_STACK_LINE(883)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(883)
		while((true)){
			HX_STACK_LINE(883)
			bool tmp7 = (_g < length);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(883)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(883)
			if ((tmp8)){
				HX_STACK_LINE(883)
				break;
			}
			HX_STACK_LINE(883)
			int tmp9 = (_g)++;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(883)
			int i = tmp9;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(885)
			{
				HX_STACK_LINE(885)
				int tmp10 = pixels->readUnsignedInt();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(885)
				int value = tmp10;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(885)
				int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(885)
				int tmp12 = value;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(885)
				int tmp13 = result->set(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(885)
				tmp13;
			}
		}
	}
	HX_STACK_LINE(889)
	::openfl::_Vector::IntVector tmp7 = result;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(889)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getVector,return )

Array< ::Dynamic > BitmapData_obj::histogram( ::openfl::geom::Rectangle hRect){
	HX_STACK_FRAME("openfl.display.BitmapData","histogram",0xf93f4519,"openfl.display.BitmapData.histogram","openfl/display/BitmapData.hx",894,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(hRect,"hRect")
	HX_STACK_LINE(896)
	bool tmp = (hRect != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(896)
	::openfl::geom::Rectangle tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(896)
	if ((tmp)){
		HX_STACK_LINE(896)
		tmp1 = hRect;
	}
	else{
		HX_STACK_LINE(896)
		int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(896)
		int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(896)
		tmp1 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,tmp2,tmp3);
	}
	HX_STACK_LINE(896)
	::openfl::geom::Rectangle rect = tmp1;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(897)
	::openfl::geom::Rectangle tmp2 = rect;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(897)
	::openfl::utils::ByteArrayData tmp3 = this->getPixels(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(897)
	::openfl::utils::ByteArrayData pixels = tmp3;		HX_STACK_VAR(pixels,"pixels");
	HX_STACK_LINE(898)
	Array< ::Dynamic > result;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(898)
	{
		HX_STACK_LINE(898)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(898)
		{
			HX_STACK_LINE(898)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(898)
			while((true)){
				HX_STACK_LINE(898)
				bool tmp4 = (_g1 < (int)4);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(898)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(898)
				if ((tmp5)){
					HX_STACK_LINE(898)
					break;
				}
				HX_STACK_LINE(898)
				int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(898)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				struct _Function_4_1{
					inline static Array< int > Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/BitmapData.hx",898,0xdd12d5b9)
						{
							HX_STACK_LINE(898)
							Array< int > _g2 = Array_obj< int >::__new();		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(898)
							{
								HX_STACK_LINE(898)
								int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(898)
								while((true)){
									HX_STACK_LINE(898)
									bool tmp7 = (_g3 < (int)256);		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(898)
									bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(898)
									if ((tmp8)){
										HX_STACK_LINE(898)
										break;
									}
									HX_STACK_LINE(898)
									int tmp9 = (_g3)++;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(898)
									int j = tmp9;		HX_STACK_VAR(j,"j");
									HX_STACK_LINE(898)
									_g2->push((int)0);
								}
							}
							HX_STACK_LINE(898)
							return _g2;
						}
						return null();
					}
				};
				HX_STACK_LINE(898)
				_g->push(_Function_4_1::Block());
			}
		}
		HX_STACK_LINE(898)
		result = _g;
	}
	HX_STACK_LINE(900)
	{
		HX_STACK_LINE(900)
		int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(900)
		::openfl::utils::ByteArrayData tmp4 = pixels;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(900)
		int tmp5 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(900)
		int _g1 = tmp5;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(900)
		while((true)){
			HX_STACK_LINE(900)
			bool tmp6 = (_g2 < _g1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(900)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(900)
			if ((tmp7)){
				HX_STACK_LINE(900)
				break;
			}
			HX_STACK_LINE(900)
			int tmp8 = (_g2)++;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(900)
			int i = tmp8;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(902)
			int tmp9 = hx::Mod(i,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(902)
			int tmp10 = pixels->readUnsignedByte();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(902)
			++(result->__get(tmp9).StaticCast< Array< int > >()[tmp10]);
		}
	}
	HX_STACK_LINE(906)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,histogram,return )

bool BitmapData_obj::hitTest( ::openfl::geom::Point firstPoint,int firstAlphaThreshold,Dynamic secondObject,::openfl::geom::Point secondBitmapDataPoint,hx::Null< int >  __o_secondAlphaThreshold){
int secondAlphaThreshold = __o_secondAlphaThreshold.Default(1);
	HX_STACK_FRAME("openfl.display.BitmapData","hitTest",0xb5e8cf7a,"openfl.display.BitmapData.hitTest","openfl/display/BitmapData.hx",911,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(firstPoint,"firstPoint")
	HX_STACK_ARG(firstAlphaThreshold,"firstAlphaThreshold")
	HX_STACK_ARG(secondObject,"secondObject")
	HX_STACK_ARG(secondBitmapDataPoint,"secondBitmapDataPoint")
	HX_STACK_ARG(secondAlphaThreshold,"secondAlphaThreshold")
{
		HX_STACK_LINE(913)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(913)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(913)
		if ((tmp1)){
			HX_STACK_LINE(913)
			return false;
		}
		HX_STACK_LINE(915)
		Dynamic tmp2 = secondObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(915)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::openfl::display::Bitmap >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(915)
		if ((tmp3)){
			HX_STACK_LINE(917)
			::openfl::display::Bitmap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(917)
			tmp4 = hx::TCast< ::openfl::display::Bitmap >::cast(secondObject);
			HX_STACK_LINE(917)
			secondObject = tmp4->bitmapData;
		}
		HX_STACK_LINE(921)
		Dynamic tmp4 = secondObject;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(921)
		bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::openfl::geom::Point >());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(921)
		if ((tmp5)){
			HX_STACK_LINE(923)
			::openfl::geom::Point secondPoint = ((::openfl::geom::Point)(secondObject));		HX_STACK_VAR(secondPoint,"secondPoint");
			HX_STACK_LINE(925)
			Float tmp6 = (secondPoint->x - firstPoint->x);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(925)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(925)
			int x = tmp7;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(926)
			Float tmp8 = (secondPoint->y - firstPoint->y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(926)
			int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(926)
			int y = tmp9;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(928)
			::openfl::geom::Rectangle tmp10 = this->rect;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(928)
			int tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(928)
			int tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(928)
			bool tmp13 = tmp10->contains(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(928)
			if ((tmp13)){
				HX_STACK_LINE(930)
				int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(930)
				int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(930)
				int tmp16 = this->getPixel32(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(930)
				int pixel = tmp16;		HX_STACK_VAR(pixel,"pixel");
				HX_STACK_LINE(932)
				int tmp17 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(932)
				int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(932)
				int tmp19 = firstAlphaThreshold;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(932)
				bool tmp20 = (tmp18 >= tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(932)
				if ((tmp20)){
					HX_STACK_LINE(934)
					return true;
				}
			}
		}
		else{
			HX_STACK_LINE(940)
			Dynamic tmp6 = secondObject;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(940)
			bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::openfl::display::BitmapData >());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(940)
			if ((tmp7)){
				HX_STACK_LINE(942)
				::openfl::display::BitmapData secondBitmapData = ((::openfl::display::BitmapData)(secondObject));		HX_STACK_VAR(secondBitmapData,"secondBitmapData");
				HX_STACK_LINE(943)
				int x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(943)
				int y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(945)
				bool tmp8 = (secondBitmapDataPoint == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(945)
				if ((tmp8)){
					HX_STACK_LINE(947)
					x = (int)0;
					HX_STACK_LINE(948)
					y = (int)0;
				}
				else{
					HX_STACK_LINE(952)
					Float tmp9 = (secondBitmapDataPoint->x - firstPoint->x);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(952)
					int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(952)
					x = tmp10;
					HX_STACK_LINE(953)
					Float tmp11 = (secondBitmapDataPoint->y - firstPoint->y);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(953)
					int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(953)
					y = tmp12;
				}
				HX_STACK_LINE(957)
				::openfl::geom::Rectangle tmp9 = this->rect;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(957)
				int tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(957)
				int tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(957)
				bool tmp12 = tmp9->contains(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(957)
				if ((tmp12)){
					HX_STACK_LINE(959)
					::openfl::geom::Rectangle tmp13 = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(959)
					::openfl::geom::Rectangle hitRect = tmp13;		HX_STACK_VAR(hitRect,"hitRect");
					HX_STACK_LINE(960)
					int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(960)
					int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(960)
					int tmp16 = secondBitmapData->width;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(960)
					int tmp17 = this->width;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(960)
					int tmp18 = x;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(960)
					int tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(960)
					Float tmp20 = ::Math_obj::min(tmp16,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(960)
					int tmp21 = secondBitmapData->height;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(960)
					int tmp22 = this->height;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(960)
					int tmp23 = y;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(960)
					int tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(960)
					Float tmp25 = ::Math_obj::min(tmp21,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(960)
					hitRect->setTo(tmp14,tmp15,tmp20,tmp25);
					HX_STACK_LINE(962)
					::openfl::geom::Rectangle tmp26 = hitRect;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(962)
					::openfl::utils::ByteArrayData tmp27 = this->getPixels(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(962)
					::openfl::utils::ByteArrayData pixels = tmp27;		HX_STACK_VAR(pixels,"pixels");
					HX_STACK_LINE(964)
					int tmp28 = x;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(964)
					int tmp29 = -(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(964)
					int tmp30 = y;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(964)
					int tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(964)
					hitRect->offset(tmp29,tmp31);
					HX_STACK_LINE(965)
					::openfl::geom::Rectangle tmp32 = hitRect;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(965)
					::openfl::utils::ByteArrayData tmp33 = secondBitmapData->getPixels(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(965)
					::openfl::utils::ByteArrayData testPixels = tmp33;		HX_STACK_VAR(testPixels,"testPixels");
					HX_STACK_LINE(967)
					Float tmp34 = (hitRect->width * hitRect->height);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(967)
					int tmp35 = ::Std_obj::_int(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(967)
					int length = tmp35;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(968)
					int pixel;		HX_STACK_VAR(pixel,"pixel");
					HX_STACK_LINE(968)
					int testPixel;		HX_STACK_VAR(testPixel,"testPixel");
					HX_STACK_LINE(970)
					{
						HX_STACK_LINE(970)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(970)
						while((true)){
							HX_STACK_LINE(970)
							bool tmp36 = (_g < length);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(970)
							bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(970)
							if ((tmp37)){
								HX_STACK_LINE(970)
								break;
							}
							HX_STACK_LINE(970)
							int tmp38 = (_g)++;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(970)
							int i = tmp38;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(972)
							int tmp39 = pixels->readUnsignedInt();		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(972)
							pixel = tmp39;
							HX_STACK_LINE(973)
							int tmp40 = testPixels->readUnsignedInt();		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(973)
							testPixel = tmp40;
							HX_STACK_LINE(975)
							int tmp41 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(975)
							int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(975)
							int tmp43 = firstAlphaThreshold;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(975)
							bool tmp44 = (tmp42 >= tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(975)
							bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(975)
							if ((tmp44)){
								HX_STACK_LINE(975)
								int tmp46 = (int(testPixel) >> int((int)24));		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(975)
								int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(975)
								int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(975)
								int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(975)
								int tmp50 = secondAlphaThreshold;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(975)
								tmp45 = (tmp49 >= tmp50);
							}
							else{
								HX_STACK_LINE(975)
								tmp45 = false;
							}
							HX_STACK_LINE(975)
							if ((tmp45)){
								HX_STACK_LINE(977)
								return true;
							}
						}
					}
					HX_STACK_LINE(983)
					return false;
				}
			}
			else{
				HX_STACK_LINE(987)
				Dynamic tmp8 = secondObject;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(987)
				bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::openfl::geom::Rectangle >());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(987)
				if ((tmp9)){
					HX_STACK_LINE(989)
					::openfl::geom::Rectangle tmp10 = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(989)
					::openfl::geom::Rectangle secondRectangle = tmp10;		HX_STACK_VAR(secondRectangle,"secondRectangle");
					HX_STACK_LINE(990)
					::openfl::geom::Rectangle tmp11 = ((::openfl::geom::Rectangle)(secondObject));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(990)
					secondRectangle->copyFrom(tmp11);
					HX_STACK_LINE(991)
					Float tmp12 = firstPoint->x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(991)
					Float tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(991)
					Float tmp14 = firstPoint->y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(991)
					Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(991)
					secondRectangle->offset(tmp13,tmp15);
					HX_STACK_LINE(992)
					int tmp16 = this->width;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(992)
					int tmp17 = this->height;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(992)
					secondRectangle->__contract((int)0,(int)0,tmp16,tmp17);
					HX_STACK_LINE(994)
					bool tmp18 = (secondRectangle->width > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(994)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(994)
					if ((tmp18)){
						HX_STACK_LINE(994)
						tmp19 = (secondRectangle->height > (int)0);
					}
					else{
						HX_STACK_LINE(994)
						tmp19 = false;
					}
					HX_STACK_LINE(994)
					if ((tmp19)){
						HX_STACK_LINE(996)
						::openfl::geom::Rectangle tmp20 = secondRectangle;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(996)
						::openfl::utils::ByteArrayData tmp21 = this->getPixels(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(996)
						::openfl::utils::ByteArrayData pixels = tmp21;		HX_STACK_VAR(pixels,"pixels");
						HX_STACK_LINE(997)
						::openfl::utils::ByteArrayData tmp22 = pixels;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(997)
						int tmp23 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(997)
						Float tmp24 = (Float(tmp23) / Float((int)4));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(997)
						int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(997)
						int length = tmp25;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(998)
						int pixel;		HX_STACK_VAR(pixel,"pixel");
						HX_STACK_LINE(1000)
						{
							HX_STACK_LINE(1000)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1000)
							while((true)){
								HX_STACK_LINE(1000)
								bool tmp26 = (_g < length);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1000)
								bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1000)
								if ((tmp27)){
									HX_STACK_LINE(1000)
									break;
								}
								HX_STACK_LINE(1000)
								int tmp28 = (_g)++;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1000)
								int i = tmp28;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1002)
								int tmp29 = pixels->readUnsignedInt();		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1002)
								pixel = tmp29;
								HX_STACK_LINE(1004)
								int tmp30 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1004)
								int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1004)
								int tmp32 = firstAlphaThreshold;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1004)
								bool tmp33 = (tmp31 >= tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1004)
								if ((tmp33)){
									HX_STACK_LINE(1006)
									return true;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(1016)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,hitTest,return )

Void BitmapData_obj::lock( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","lock",0xf6efc996,"openfl.display.BitmapData.lock","openfl/display/BitmapData.hx",1021,0xdd12d5b9)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,lock,(void))

Void BitmapData_obj::merge( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		HX_STACK_FRAME("openfl.display.BitmapData","merge",0xa7b66aad,"openfl.display.BitmapData.merge","openfl/display/BitmapData.hx",1028,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redMultiplier,"redMultiplier")
		HX_STACK_ARG(greenMultiplier,"greenMultiplier")
		HX_STACK_ARG(blueMultiplier,"blueMultiplier")
		HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
		HX_STACK_LINE(1030)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1030)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1030)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1030)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1030)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1030)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1030)
		if ((tmp4)){
			HX_STACK_LINE(1030)
			tmp5 = (sourceBitmapData == null());
		}
		else{
			HX_STACK_LINE(1030)
			tmp5 = true;
		}
		HX_STACK_LINE(1030)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1030)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1030)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1030)
		if ((tmp7)){
			HX_STACK_LINE(1030)
			bool tmp9 = sourceBitmapData->__isValid;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1030)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1030)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1030)
			tmp8 = !(tmp11);
		}
		else{
			HX_STACK_LINE(1030)
			tmp8 = true;
		}
		HX_STACK_LINE(1030)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1030)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1030)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1030)
		if ((tmp10)){
			HX_STACK_LINE(1030)
			tmp11 = (sourceRect == null());
		}
		else{
			HX_STACK_LINE(1030)
			tmp11 = true;
		}
		HX_STACK_LINE(1030)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1030)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1030)
		if ((tmp12)){
			HX_STACK_LINE(1030)
			tmp13 = (destPoint == null());
		}
		else{
			HX_STACK_LINE(1030)
			tmp13 = true;
		}
		HX_STACK_LINE(1030)
		if ((tmp13)){
			HX_STACK_LINE(1030)
			return null();
		}
		HX_STACK_LINE(1031)
		::lime::graphics::Image tmp14 = this->image;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1031)
		::lime::graphics::Image tmp15 = sourceBitmapData->image;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1031)
		::lime::math::Rectangle tmp16 = sourceRect->__toLimeRectangle();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1031)
		::lime::math::Vector2 tmp17 = destPoint->__toLimeVector2();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1031)
		int tmp18 = redMultiplier;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1031)
		int tmp19 = greenMultiplier;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1031)
		int tmp20 = blueMultiplier;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1031)
		int tmp21 = alphaMultiplier;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1031)
		tmp14->merge(tmp15,tmp16,tmp17,tmp18,tmp19,tmp20,tmp21);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(BitmapData_obj,merge,(void))

Void BitmapData_obj::noise( int randomSeed,hx::Null< int >  __o_low,hx::Null< int >  __o_high,hx::Null< int >  __o_channelOptions,hx::Null< bool >  __o_grayScale){
int low = __o_low.Default(0);
int high = __o_high.Default(255);
int channelOptions = __o_channelOptions.Default(7);
bool grayScale = __o_grayScale.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","noise",0x41b2578f,"openfl.display.BitmapData.noise","openfl/display/BitmapData.hx",1036,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(randomSeed,"randomSeed")
	HX_STACK_ARG(low,"low")
	HX_STACK_ARG(high,"high")
	HX_STACK_ARG(channelOptions,"channelOptions")
	HX_STACK_ARG(grayScale,"grayScale")
{
		HX_STACK_LINE(1036)
		Array< int > randomSeed1 = Array_obj< int >::__new().Add(randomSeed);		HX_STACK_VAR(randomSeed1,"randomSeed1");
		HX_STACK_LINE(1038)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1038)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1038)
		if ((tmp1)){
			HX_STACK_LINE(1038)
			return null();
		}
		HX_STACK_LINE(1041)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1042)
		{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< int >,randomSeed1)
			int __ArgCount() const { return 0; }
			int run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/BitmapData.hx",1043,0xdd12d5b9)
				{
					HX_STACK_LINE(1044)
					int tmp3 = (randomSeed1->__get((int)0) * (int)1103515245);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1044)
					int tmp4 = (tmp3 + (int)12345);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1044)
					randomSeed1[(int)0] = tmp4;
					HX_STACK_LINE(1045)
					Float tmp5 = (Float(randomSeed1->__get((int)0)) / Float((int)65536));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1045)
					Float tmp6 = ::Math_obj::abs(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1045)
					int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1045)
					int tmp8 = hx::Mod(tmp7,(int)32768);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1045)
					return tmp8;
				}
				return null();
			}
			HX_END_LOCAL_FUNC0(return)

			HX_STACK_LINE(1042)
			Dynamic func =  Dynamic(new _Function_2_1(randomSeed1));		HX_STACK_VAR(func,"func");
			HX_STACK_LINE(1042)
			tmp2 = func;
		}
		HX_STACK_LINE(1041)
		Dynamic rand = tmp2;		HX_STACK_VAR(rand,"rand");
		HX_STACK_LINE(1048)
		rand().Cast< int >();
		HX_STACK_LINE(1051)
		int tmp3 = (high - low);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1051)
		int range = tmp3;		HX_STACK_VAR(range,"range");
		HX_STACK_LINE(1052)
		::openfl::utils::ByteArrayData tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1052)
		{
			HX_STACK_LINE(1052)
			int length = (int)0;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(1052)
			::openfl::utils::ByteArrayData tmp5 = ::openfl::utils::ByteArrayData_obj::__new(length);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1052)
			tmp4 = tmp5;
		}
		HX_STACK_LINE(1052)
		::openfl::utils::ByteArrayData data = tmp4;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(1054)
		int tmp5 = channelOptions;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1054)
		int tmp6 = (int)1;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1054)
		int tmp7 = (int(tmp5) & int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1054)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1054)
		bool tmp9 = (tmp8 == (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1054)
		bool redChannel = tmp9;		HX_STACK_VAR(redChannel,"redChannel");
		HX_STACK_LINE(1055)
		int tmp10 = channelOptions;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1055)
		int tmp11 = (int)2;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1055)
		int tmp12 = (int(tmp10) & int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1055)
		int tmp13 = (int(tmp12) >> int((int)1));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1055)
		bool tmp14 = (tmp13 == (int)1);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1055)
		bool greenChannel = tmp14;		HX_STACK_VAR(greenChannel,"greenChannel");
		HX_STACK_LINE(1056)
		int tmp15 = channelOptions;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1056)
		int tmp16 = (int)4;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1056)
		int tmp17 = (int(tmp15) & int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1056)
		int tmp18 = (int(tmp17) >> int((int)2));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1056)
		bool tmp19 = (tmp18 == (int)1);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1056)
		bool blueChannel = tmp19;		HX_STACK_VAR(blueChannel,"blueChannel");
		HX_STACK_LINE(1057)
		int tmp20 = channelOptions;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1057)
		int tmp21 = (int)8;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1057)
		int tmp22 = (int(tmp20) & int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1057)
		int tmp23 = (int(tmp22) >> int((int)3));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1057)
		bool tmp24 = (tmp23 == (int)1);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1057)
		bool alphaChannel = tmp24;		HX_STACK_VAR(alphaChannel,"alphaChannel");
		HX_STACK_LINE(1059)
		{
			HX_STACK_LINE(1059)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1059)
			int tmp25 = this->height;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1059)
			int _g = tmp25;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1059)
			while((true)){
				HX_STACK_LINE(1059)
				bool tmp26 = (_g1 < _g);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1059)
				bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1059)
				if ((tmp27)){
					HX_STACK_LINE(1059)
					break;
				}
				HX_STACK_LINE(1059)
				int tmp28 = (_g1)++;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1059)
				int y = tmp28;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(1061)
				{
					HX_STACK_LINE(1061)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(1061)
					int tmp29 = this->width;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1061)
					int _g2 = tmp29;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1061)
					while((true)){
						HX_STACK_LINE(1061)
						bool tmp30 = (_g3 < _g2);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1061)
						bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1061)
						if ((tmp31)){
							HX_STACK_LINE(1061)
							break;
						}
						HX_STACK_LINE(1061)
						int tmp32 = (_g3)++;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1061)
						int x = tmp32;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1064)
						int red = (int)0;		HX_STACK_VAR(red,"red");
						HX_STACK_LINE(1065)
						int blue = (int)0;		HX_STACK_VAR(blue,"blue");
						HX_STACK_LINE(1066)
						int green = (int)0;		HX_STACK_VAR(green,"green");
						HX_STACK_LINE(1067)
						int alpha = (int)255;		HX_STACK_VAR(alpha,"alpha");
						HX_STACK_LINE(1069)
						bool tmp33 = grayScale;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1069)
						if ((tmp33)){
							HX_STACK_LINE(1071)
							int tmp34 = low;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1071)
							int tmp35 = rand().Cast< int >();		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1071)
							int tmp36 = range;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1071)
							int tmp37 = hx::Mod(tmp35,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1071)
							int tmp38 = (tmp34 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1071)
							int tmp39 = blue = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1071)
							int tmp40 = green = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1071)
							red = tmp40;
							HX_STACK_LINE(1072)
							alpha = (int)255;
						}
						else{
							HX_STACK_LINE(1076)
							bool tmp34 = redChannel;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1076)
							if ((tmp34)){
								HX_STACK_LINE(1076)
								int tmp35 = low;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1076)
								int tmp36 = rand().Cast< int >();		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1076)
								int tmp37 = range;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1076)
								int tmp38 = hx::Mod(tmp36,tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(1076)
								int tmp39 = (tmp35 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(1076)
								red = tmp39;
							}
							HX_STACK_LINE(1077)
							bool tmp35 = greenChannel;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1077)
							if ((tmp35)){
								HX_STACK_LINE(1077)
								int tmp36 = low;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1077)
								int tmp37 = rand().Cast< int >();		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1077)
								int tmp38 = range;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(1077)
								int tmp39 = hx::Mod(tmp37,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(1077)
								int tmp40 = (tmp36 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(1077)
								green = tmp40;
							}
							HX_STACK_LINE(1078)
							bool tmp36 = blueChannel;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1078)
							if ((tmp36)){
								HX_STACK_LINE(1078)
								int tmp37 = low;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1078)
								int tmp38 = rand().Cast< int >();		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(1078)
								int tmp39 = range;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(1078)
								int tmp40 = hx::Mod(tmp38,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(1078)
								int tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(1078)
								blue = tmp41;
							}
							HX_STACK_LINE(1079)
							bool tmp37 = alphaChannel;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1079)
							if ((tmp37)){
								HX_STACK_LINE(1079)
								int tmp38 = low;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(1079)
								int tmp39 = rand().Cast< int >();		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(1079)
								int tmp40 = range;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(1079)
								int tmp41 = hx::Mod(tmp39,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(1079)
								int tmp42 = (tmp38 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(1079)
								alpha = tmp42;
							}
						}
						HX_STACK_LINE(1082)
						int rgb = alpha;		HX_STACK_VAR(rgb,"rgb");
						HX_STACK_LINE(1083)
						int tmp34 = (int(rgb) << int((int)8));		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1083)
						int tmp35 = red;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1083)
						int tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1083)
						rgb = tmp36;
						HX_STACK_LINE(1084)
						int tmp37 = (int(rgb) << int((int)8));		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1084)
						int tmp38 = green;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1084)
						int tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(1084)
						rgb = tmp39;
						HX_STACK_LINE(1085)
						int tmp40 = (int(rgb) << int((int)8));		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1085)
						int tmp41 = blue;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1085)
						int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(1085)
						rgb = tmp42;
						HX_STACK_LINE(1087)
						int tmp43 = x;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(1087)
						int tmp44 = y;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(1087)
						int tmp45 = rgb;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(1087)
						this->setPixel32(tmp43,tmp44,tmp45);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,noise,(void))

Void BitmapData_obj::paletteMap( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,Array< int > redArray,Array< int > greenArray,Array< int > blueArray,Array< int > alphaArray){
{
		HX_STACK_FRAME("openfl.display.BitmapData","paletteMap",0xfc19eecc,"openfl.display.BitmapData.paletteMap","openfl/display/BitmapData.hx",1093,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redArray,"redArray")
		HX_STACK_ARG(greenArray,"greenArray")
		HX_STACK_ARG(blueArray,"blueArray")
		HX_STACK_ARG(alphaArray,"alphaArray")
		HX_STACK_LINE(1095)
		Float tmp = sourceRect->width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1095)
		int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1095)
		int sw = tmp1;		HX_STACK_VAR(sw,"sw");
		HX_STACK_LINE(1096)
		Float tmp2 = sourceRect->height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1096)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1096)
		int sh = tmp3;		HX_STACK_VAR(sh,"sh");
		HX_STACK_LINE(1098)
		::openfl::geom::Rectangle tmp4 = sourceRect;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1098)
		::openfl::utils::ByteArrayData tmp5 = this->getPixels(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1098)
		::openfl::utils::ByteArrayData pixels = tmp5;		HX_STACK_VAR(pixels,"pixels");
		HX_STACK_LINE(1099)
		pixels->position = (int)0;
		HX_STACK_LINE(1101)
		int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
		HX_STACK_LINE(1101)
		int r;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(1101)
		int g;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(1101)
		int b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(1101)
		int a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(1101)
		int color;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(1101)
		int c1;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(1101)
		int c2;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(1101)
		int c3;		HX_STACK_VAR(c3,"c3");
		HX_STACK_LINE(1101)
		int c4;		HX_STACK_VAR(c4,"c4");
		HX_STACK_LINE(1103)
		{
			HX_STACK_LINE(1103)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1103)
			int tmp6 = (sh * sw);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1103)
			int _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1103)
			while((true)){
				HX_STACK_LINE(1103)
				bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1103)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1103)
				if ((tmp8)){
					HX_STACK_LINE(1103)
					break;
				}
				HX_STACK_LINE(1103)
				int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1103)
				int i = tmp9;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1105)
				int tmp10 = pixels->readUnsignedInt();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1105)
				pixelValue = tmp10;
				HX_STACK_LINE(1107)
				bool tmp11 = (alphaArray == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1107)
				int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1107)
				if ((tmp11)){
					HX_STACK_LINE(1107)
					tmp12 = (int(pixelValue) & int((int)-16777216));
				}
				else{
					HX_STACK_LINE(1107)
					int tmp13 = (int(pixelValue) >> int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1107)
					int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1107)
					tmp12 = alphaArray->__get(tmp14);
				}
				HX_STACK_LINE(1107)
				c1 = tmp12;
				HX_STACK_LINE(1108)
				bool tmp13 = (redArray == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1108)
				int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1108)
				if ((tmp13)){
					HX_STACK_LINE(1108)
					tmp14 = (int(pixelValue) & int((int)16711680));
				}
				else{
					HX_STACK_LINE(1108)
					int tmp15 = (int(pixelValue) >> int((int)16));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1108)
					int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1108)
					tmp14 = redArray->__get(tmp16);
				}
				HX_STACK_LINE(1108)
				c2 = tmp14;
				HX_STACK_LINE(1109)
				bool tmp15 = (greenArray == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1109)
				int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1109)
				if ((tmp15)){
					HX_STACK_LINE(1109)
					tmp16 = (int(pixelValue) & int((int)65280));
				}
				else{
					HX_STACK_LINE(1109)
					int tmp17 = (int(pixelValue) >> int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1109)
					int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1109)
					tmp16 = greenArray->__get(tmp18);
				}
				HX_STACK_LINE(1109)
				c3 = tmp16;
				HX_STACK_LINE(1110)
				bool tmp17 = (blueArray == null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1110)
				int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1110)
				if ((tmp17)){
					HX_STACK_LINE(1110)
					tmp18 = (int(pixelValue) & int((int)255));
				}
				else{
					HX_STACK_LINE(1110)
					int tmp19 = (int(pixelValue) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1110)
					tmp18 = blueArray->__get(tmp19);
				}
				HX_STACK_LINE(1110)
				c4 = tmp18;
				HX_STACK_LINE(1112)
				int tmp19 = (int(c1) >> int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1112)
				int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1112)
				int tmp21 = (int(c2) >> int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1112)
				int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1112)
				int tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1112)
				int tmp24 = (int(c3) >> int((int)24));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1112)
				int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1112)
				int tmp26 = (tmp23 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1112)
				int tmp27 = (int(c4) >> int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1112)
				int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1112)
				int tmp29 = (tmp26 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1112)
				a = tmp29;
				HX_STACK_LINE(1113)
				bool tmp30 = (a > (int)255);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1113)
				if ((tmp30)){
					HX_STACK_LINE(1113)
					(a == (int)255);
				}
				HX_STACK_LINE(1115)
				int tmp31 = (int(c1) >> int((int)16));		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1115)
				int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1115)
				int tmp33 = (int(c2) >> int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1115)
				int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1115)
				int tmp35 = (tmp32 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1115)
				int tmp36 = (int(c3) >> int((int)16));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1115)
				int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1115)
				int tmp38 = (tmp35 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1115)
				int tmp39 = (int(c4) >> int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1115)
				int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1115)
				int tmp41 = (tmp38 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1115)
				r = tmp41;
				HX_STACK_LINE(1116)
				bool tmp42 = (r > (int)255);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1116)
				if ((tmp42)){
					HX_STACK_LINE(1116)
					(r == (int)255);
				}
				HX_STACK_LINE(1118)
				int tmp43 = (int(c1) >> int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1118)
				int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(1118)
				int tmp45 = (int(c2) >> int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(1118)
				int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(1118)
				int tmp47 = (tmp44 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(1118)
				int tmp48 = (int(c3) >> int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(1118)
				int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(1118)
				int tmp50 = (tmp47 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(1118)
				int tmp51 = (int(c4) >> int((int)8));		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(1118)
				int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(1118)
				int tmp53 = (tmp50 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(1118)
				g = tmp53;
				HX_STACK_LINE(1119)
				bool tmp54 = (g > (int)255);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(1119)
				if ((tmp54)){
					HX_STACK_LINE(1119)
					(g == (int)255);
				}
				HX_STACK_LINE(1121)
				int tmp55 = (int(c1) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(1121)
				int tmp56 = (int(c2) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(1121)
				int tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(1121)
				int tmp58 = (int(c3) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(1121)
				int tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(1121)
				int tmp60 = (int(c4) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(1121)
				int tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(1121)
				b = tmp61;
				HX_STACK_LINE(1122)
				bool tmp62 = (b > (int)255);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(1122)
				if ((tmp62)){
					HX_STACK_LINE(1122)
					(b == (int)255);
				}
				HX_STACK_LINE(1124)
				int tmp63 = (int(a) << int((int)24));		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(1124)
				int tmp64 = (int(r) << int((int)16));		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(1124)
				int tmp65 = (int(tmp63) | int(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(1124)
				int tmp66 = (int(g) << int((int)8));		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(1124)
				int tmp67 = (int(tmp65) | int(tmp66));		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(1124)
				int tmp68 = b;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(1124)
				int tmp69 = (int(tmp67) | int(tmp68));		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(1124)
				color = tmp69;
				HX_STACK_LINE(1126)
				int tmp70 = (i * (int)4);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(1126)
				pixels->position = tmp70;
				HX_STACK_LINE(1127)
				int tmp71 = color;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(1127)
				pixels->writeUnsignedInt(tmp71);
			}
		}
		HX_STACK_LINE(1131)
		pixels->position = (int)0;
		HX_STACK_LINE(1132)
		::openfl::geom::Rectangle tmp6 = ::openfl::geom::Rectangle_obj::__new(destPoint->x,destPoint->y,sw,sh);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1132)
		::openfl::geom::Rectangle destRect = tmp6;		HX_STACK_VAR(destRect,"destRect");
		HX_STACK_LINE(1133)
		::openfl::geom::Rectangle tmp7 = destRect;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1133)
		::openfl::utils::ByteArrayData tmp8 = pixels;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1133)
		this->setPixels(tmp7,tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(BitmapData_obj,paletteMap,(void))

Void BitmapData_obj::perlinNoise( Float baseX,Float baseY,int numOctaves,int randomSeed,bool stitch,bool fractalNoise,hx::Null< int >  __o_channelOptions,hx::Null< bool >  __o_grayScale,Array< ::Dynamic > offsets){
int channelOptions = __o_channelOptions.Default(7);
bool grayScale = __o_grayScale.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","perlinNoise",0xc682321b,"openfl.display.BitmapData.perlinNoise","openfl/display/BitmapData.hx",1138,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(baseX,"baseX")
	HX_STACK_ARG(baseY,"baseY")
	HX_STACK_ARG(numOctaves,"numOctaves")
	HX_STACK_ARG(randomSeed,"randomSeed")
	HX_STACK_ARG(stitch,"stitch")
	HX_STACK_ARG(fractalNoise,"fractalNoise")
	HX_STACK_ARG(channelOptions,"channelOptions")
	HX_STACK_ARG(grayScale,"grayScale")
	HX_STACK_ARG(offsets,"offsets")
{
		HX_STACK_LINE(1140)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1140)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1140)
		if ((tmp1)){
			HX_STACK_LINE(1140)
			return null();
		}
		HX_STACK_LINE(1141)
		::openfl::_internal::utils::PerlinNoise tmp2 = ::openfl::_internal::utils::PerlinNoise_obj::__new(randomSeed,numOctaves,((Float)0.01));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1141)
		::openfl::_internal::utils::PerlinNoise noise = tmp2;		HX_STACK_VAR(noise,"noise");
		HX_STACK_LINE(1142)
		Float tmp3 = baseX;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1142)
		Float tmp4 = baseY;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1142)
		noise->fill(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4,(int)0,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(BitmapData_obj,perlinNoise,(void))

Void BitmapData_obj::scroll( int x,int y){
{
		HX_STACK_FRAME("openfl.display.BitmapData","scroll",0x57440678,"openfl.display.BitmapData.scroll","openfl/display/BitmapData.hx",1147,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1149)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1149)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1149)
		if ((tmp1)){
			HX_STACK_LINE(1149)
			return null();
		}
		HX_STACK_LINE(1150)
		::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1150)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1150)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1150)
		tmp2->scroll(tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,scroll,(void))

Void BitmapData_obj::setPixel( int x,int y,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setPixel",0xf9b00eaf,"openfl.display.BitmapData.setPixel","openfl/display/BitmapData.hx",1155,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(1157)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1157)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1157)
		if ((tmp1)){
			HX_STACK_LINE(1157)
			return null();
		}
		HX_STACK_LINE(1158)
		::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1158)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1158)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1158)
		int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1158)
		tmp2->setPixel(tmp3,tmp4,tmp5,(int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,setPixel,(void))

Void BitmapData_obj::setPixel32( int x,int y,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setPixel32",0xd0d4850e,"openfl.display.BitmapData.setPixel32","openfl/display/BitmapData.hx",1163,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(1165)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1165)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1165)
		if ((tmp1)){
			HX_STACK_LINE(1165)
			return null();
		}
		HX_STACK_LINE(1166)
		::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1166)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1166)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1166)
		int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1166)
		tmp2->setPixel32(tmp3,tmp4,tmp5,(int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,setPixel32,(void))

Void BitmapData_obj::setPixels( ::openfl::geom::Rectangle rect,::openfl::utils::ByteArrayData byteArray){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setPixels",0x805ccae4,"openfl.display.BitmapData.setPixels","openfl/display/BitmapData.hx",1171,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(byteArray,"byteArray")
		HX_STACK_LINE(1173)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1173)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1173)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1173)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1173)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1173)
		if ((tmp3)){
			HX_STACK_LINE(1173)
			tmp4 = (rect == null());
		}
		else{
			HX_STACK_LINE(1173)
			tmp4 = true;
		}
		HX_STACK_LINE(1173)
		if ((tmp4)){
			HX_STACK_LINE(1173)
			return null();
		}
		HX_STACK_LINE(1174)
		::lime::graphics::Image tmp5 = this->image;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1174)
		::lime::math::Rectangle tmp6 = rect->__toLimeRectangle();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1174)
		::openfl::utils::ByteArrayData tmp7 = byteArray;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1174)
		::haxe::io::Bytes tmp8 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1174)
		tmp5->setPixels(tmp6,tmp8,(int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,setPixels,(void))

Void BitmapData_obj::setVector( ::openfl::geom::Rectangle rect,::openfl::_Vector::IntVector inputVector){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setVector",0x8b108c7a,"openfl.display.BitmapData.setVector","openfl/display/BitmapData.hx",1179,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(inputVector,"inputVector")
		HX_STACK_LINE(1181)
		::openfl::utils::ByteArrayData tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1181)
		{
			HX_STACK_LINE(1181)
			int length = (int)0;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(1181)
			::openfl::utils::ByteArrayData tmp1 = ::openfl::utils::ByteArrayData_obj::__new(length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1181)
			tmp = tmp1;
		}
		HX_STACK_LINE(1181)
		::openfl::utils::ByteArrayData byteArray = tmp;		HX_STACK_VAR(byteArray,"byteArray");
		HX_STACK_LINE(1182)
		::openfl::utils::ByteArrayData tmp1 = byteArray;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1182)
		int tmp2 = inputVector->get_length();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1182)
		int tmp3 = (tmp2 * (int)4);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1182)
		::openfl::utils::_ByteArray::ByteArray_Impl__obj::set_length(tmp1,tmp3);
		HX_STACK_LINE(1184)
		{
			HX_STACK_LINE(1184)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1184)
			while((true)){
				HX_STACK_LINE(1184)
				int tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1184)
				int tmp5 = inputVector->get_length();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1184)
				bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1184)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1184)
				if ((tmp7)){
					HX_STACK_LINE(1184)
					break;
				}
				HX_STACK_LINE(1184)
				int tmp8 = _g;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1184)
				int tmp9 = inputVector->get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1184)
				int color = tmp9;		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(1184)
				++(_g);
				HX_STACK_LINE(1186)
				int tmp10 = color;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1186)
				byteArray->writeUnsignedInt(tmp10);
			}
		}
		HX_STACK_LINE(1190)
		byteArray->position = (int)0;
		HX_STACK_LINE(1191)
		::openfl::geom::Rectangle tmp4 = rect;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1191)
		::openfl::utils::ByteArrayData tmp5 = byteArray;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1191)
		this->setPixels(tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,setVector,(void))

int BitmapData_obj::threshold( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::String operation,int threshold,hx::Null< int >  __o_color,hx::Null< int >  __o_mask,hx::Null< bool >  __o_copySource){
int color = __o_color.Default(0);
int mask = __o_mask.Default(-1);
bool copySource = __o_copySource.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","threshold",0xc8af2a20,"openfl.display.BitmapData.threshold","openfl/display/BitmapData.hx",1196,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(operation,"operation")
	HX_STACK_ARG(threshold,"threshold")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(copySource,"copySource")
{
		HX_STACK_LINE(1198)
		bool tmp = (sourceBitmapData == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1198)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1198)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1198)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1198)
		if ((tmp2)){
			HX_STACK_LINE(1198)
			tmp3 = (sourceRect == null());
		}
		else{
			HX_STACK_LINE(1198)
			tmp3 = true;
		}
		HX_STACK_LINE(1198)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1198)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1198)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1198)
		if ((tmp5)){
			HX_STACK_LINE(1198)
			tmp6 = (destPoint == null());
		}
		else{
			HX_STACK_LINE(1198)
			tmp6 = true;
		}
		HX_STACK_LINE(1198)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1198)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1198)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1198)
		if ((tmp8)){
			HX_STACK_LINE(1198)
			tmp9 = (sourceRect->x > sourceBitmapData->width);
		}
		else{
			HX_STACK_LINE(1198)
			tmp9 = true;
		}
		HX_STACK_LINE(1198)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1198)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1198)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1198)
		if ((tmp11)){
			HX_STACK_LINE(1198)
			tmp12 = (sourceRect->y > sourceBitmapData->height);
		}
		else{
			HX_STACK_LINE(1198)
			tmp12 = true;
		}
		HX_STACK_LINE(1198)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1198)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1198)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1198)
		if ((tmp14)){
			HX_STACK_LINE(1198)
			Float tmp16 = destPoint->x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1198)
			int tmp17 = this->width;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1198)
			int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1198)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1198)
			tmp15 = (tmp16 > tmp19);
		}
		else{
			HX_STACK_LINE(1198)
			tmp15 = true;
		}
		HX_STACK_LINE(1198)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1198)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1198)
		if ((tmp16)){
			HX_STACK_LINE(1198)
			Float tmp18 = destPoint->y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1198)
			int tmp19 = this->height;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1198)
			int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1198)
			tmp17 = (tmp18 > tmp20);
		}
		else{
			HX_STACK_LINE(1198)
			tmp17 = true;
		}
		HX_STACK_LINE(1198)
		if ((tmp17)){
			HX_STACK_LINE(1198)
			return (int)0;
		}
		HX_STACK_LINE(1200)
		::lime::graphics::Image tmp18 = this->image;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1200)
		::lime::graphics::Image tmp19 = sourceBitmapData->image;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1200)
		::lime::math::Rectangle tmp20 = sourceRect->__toLimeRectangle();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1200)
		::lime::math::Vector2 tmp21 = destPoint->__toLimeVector2();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1200)
		::String tmp22 = operation;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1200)
		int tmp23 = threshold;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1200)
		int tmp24 = color;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1200)
		int tmp25 = mask;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1200)
		bool tmp26 = copySource;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1200)
		int tmp27 = tmp18->threshold(tmp19,tmp20,tmp21,tmp22,tmp23,tmp24,tmp25,tmp26,(int)1);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1200)
		return tmp27;
	}
}


HX_DEFINE_DYNAMIC_FUNC8(BitmapData_obj,threshold,return )

Void BitmapData_obj::unlock( ::openfl::geom::Rectangle changeRect){
{
		HX_STACK_FRAME("openfl.display.BitmapData","unlock",0x756bd12f,"openfl.display.BitmapData.unlock","openfl/display/BitmapData.hx",1205,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(changeRect,"changeRect")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,unlock,(void))

Void BitmapData_obj::__fromBase64( ::String base64,::String type,Dynamic onload){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromBase64",0xceedce64,"openfl.display.BitmapData.__fromBase64","openfl/display/BitmapData.hx",1212,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(base64,"base64")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(1212)
		::openfl::display::BitmapData _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1214)
		::String tmp = base64;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1214)
		::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::openfl::display::BitmapData,_g,Dynamic,onload)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display/BitmapData.hx",1214,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(1216)
				::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1216)
				_g->__fromImage(tmp2);
				HX_STACK_LINE(1218)
				bool tmp3 = (onload != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1218)
				if ((tmp3)){
					HX_STACK_LINE(1220)
					::openfl::display::BitmapData tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1220)
					onload(tmp4).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1214)
		::lime::graphics::Image_obj::fromBase64(tmp,tmp1, Dynamic(new _Function_1_1(_g,onload)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,__fromBase64,(void))

Void BitmapData_obj::__fromBytes( ::openfl::utils::ByteArrayData bytes,::openfl::utils::ByteArrayData rawAlpha,Dynamic onload){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromBytes",0xdad6e936,"openfl.display.BitmapData.__fromBytes","openfl/display/BitmapData.hx",1229,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(rawAlpha,"rawAlpha")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(1229)
		::openfl::display::BitmapData _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1231)
		::openfl::utils::ByteArrayData tmp = bytes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1231)
		::haxe::io::Bytes tmp1 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(tmp);		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,::openfl::display::BitmapData,_g,Dynamic,onload,::openfl::utils::ByteArrayData,rawAlpha)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display/BitmapData.hx",1231,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(1233)
				::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1233)
				_g->__fromImage(tmp2);
				HX_STACK_LINE(1235)
				bool tmp3 = (rawAlpha != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1235)
				if ((tmp3)){
					HX_STACK_LINE(1242)
					::lime::utils::ArrayBufferView tmp4 = image->buffer->data;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1242)
					::lime::utils::ArrayBufferView data = tmp4;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(1244)
					{
						HX_STACK_LINE(1244)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1244)
						::openfl::utils::ByteArrayData tmp5 = rawAlpha;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1244)
						int tmp6 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1244)
						int _g1 = tmp6;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1244)
						while((true)){
							HX_STACK_LINE(1244)
							bool tmp7 = (_g2 < _g1);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1244)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1244)
							if ((tmp8)){
								HX_STACK_LINE(1244)
								break;
							}
							HX_STACK_LINE(1244)
							int tmp9 = (_g2)++;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1244)
							int i = tmp9;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(1246)
							{
								HX_STACK_LINE(1246)
								int tmp10 = rawAlpha->readUnsignedByte();		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1246)
								int val = tmp10;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(1246)
								::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (((i * (int)4) + (int)3))),val);
								HX_STACK_LINE(1246)
								val;
							}
						}
					}
					HX_STACK_LINE(1250)
					(image->version)++;
				}
				HX_STACK_LINE(1254)
				bool tmp4 = (onload != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1254)
				if ((tmp4)){
					HX_STACK_LINE(1256)
					::openfl::display::BitmapData tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1256)
					onload(tmp5).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1231)
		::lime::graphics::Image_obj::fromBytes(tmp1, Dynamic(new _Function_1_1(_g,onload,rawAlpha)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,__fromBytes,(void))

Void BitmapData_obj::__fromFile( ::String path,Dynamic onload,Dynamic onerror){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromFile",0x3aae5011,"openfl.display.BitmapData.__fromFile","openfl/display/BitmapData.hx",1265,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_ARG(onerror,"onerror")
		HX_STACK_LINE(1265)
		::openfl::display::BitmapData _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1267)
		::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1277)
		Dynamic tmp1 = onerror;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::openfl::display::BitmapData,_g,Dynamic,onload)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display/BitmapData.hx",1267,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(1269)
				::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1269)
				_g->__fromImage(tmp2);
				HX_STACK_LINE(1271)
				bool tmp3 = (onload != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1271)
				if ((tmp3)){
					HX_STACK_LINE(1273)
					::openfl::display::BitmapData tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1273)
					onload(tmp4).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1267)
		::lime::graphics::Image_obj::fromFile(tmp, Dynamic(new _Function_1_1(_g,onload)),tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,__fromFile,(void))

Void BitmapData_obj::__fromImage( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromImage",0xdaa80026,"openfl.display.BitmapData.__fromImage","openfl/display/BitmapData.hx",1282,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(1284)
		bool tmp = (image != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1284)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1284)
		if ((tmp)){
			HX_STACK_LINE(1284)
			tmp1 = (image->buffer != null());
		}
		else{
			HX_STACK_LINE(1284)
			tmp1 = false;
		}
		HX_STACK_LINE(1284)
		if ((tmp1)){
			HX_STACK_LINE(1286)
			this->image = image;
			HX_STACK_LINE(1288)
			this->width = image->width;
			HX_STACK_LINE(1289)
			this->height = image->height;
			HX_STACK_LINE(1290)
			::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,image->width,image->height);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1290)
			this->rect = tmp2;
			HX_STACK_LINE(1293)
			image->set_format((int)2);
			HX_STACK_LINE(1294)
			image->set_premultiplied(true);
			HX_STACK_LINE(1297)
			this->__isValid = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__fromImage,(void))

Void BitmapData_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCairo",0x87dae327,"openfl.display.BitmapData.__renderCairo","openfl/display/BitmapData.hx",1304,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1306)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1306)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1306)
		if ((tmp1)){
			HX_STACK_LINE(1306)
			return null();
		}
		HX_STACK_LINE(1308)
		::lime::graphics::cairo::Cairo cairo = renderSession->cairo;		HX_STACK_VAR(cairo,"cairo");
		HX_STACK_LINE(1310)
		::openfl::geom::Matrix tmp2 = this->__worldTransform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1310)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1310)
		if ((tmp3)){
			HX_STACK_LINE(1310)
			::openfl::geom::Matrix tmp4 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1310)
			this->__worldTransform = tmp4;
		}
		HX_STACK_LINE(1312)
		::openfl::geom::Matrix tmp4 = this->__worldTransform;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1312)
		::openfl::geom::Matrix transform = tmp4;		HX_STACK_VAR(transform,"transform");
		HX_STACK_LINE(1314)
		bool tmp5 = renderSession->roundPixels;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1314)
		if ((tmp5)){
			HX_STACK_LINE(1316)
			::lime::math::Matrix3 tmp6 = transform->__toMatrix3();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1316)
			::lime::math::Matrix3 matrix = tmp6;		HX_STACK_VAR(matrix,"matrix");
			HX_STACK_LINE(1317)
			Float tmp7 = matrix->tx;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1317)
			int tmp8 = ::Math_obj::round(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1317)
			matrix->tx = tmp8;
			HX_STACK_LINE(1318)
			Float tmp9 = matrix->ty;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1318)
			int tmp10 = ::Math_obj::round(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1318)
			matrix->ty = tmp10;
			HX_STACK_LINE(1319)
			::lime::math::Matrix3 tmp11 = matrix;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1319)
			cairo->set_matrix(tmp11);
		}
		else{
			HX_STACK_LINE(1323)
			::lime::math::Matrix3 tmp6 = transform->__toMatrix3();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1323)
			cairo->set_matrix(tmp6);
		}
		HX_STACK_LINE(1327)
		Dynamic tmp6 = this->getSurface();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1327)
		Dynamic surface = tmp6;		HX_STACK_VAR(surface,"surface");
		HX_STACK_LINE(1329)
		bool tmp7 = (surface != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1329)
		if ((tmp7)){
			HX_STACK_LINE(1331)
			Dynamic tmp8 = surface;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1331)
			Dynamic tmp9 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1331)
			Dynamic pattern = tmp9;		HX_STACK_VAR(pattern,"pattern");
			HX_STACK_LINE(1333)
			bool tmp10 = renderSession->allowSmoothing;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1333)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1333)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1333)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1333)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1333)
			if ((tmp13)){
				HX_STACK_LINE(1333)
				int tmp15 = cairo->get_antialias();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1333)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1333)
				tmp14 = (tmp16 == (int)1);
			}
			else{
				HX_STACK_LINE(1333)
				tmp14 = true;
			}
			HX_STACK_LINE(1333)
			if ((tmp14)){
				HX_STACK_LINE(1335)
				Dynamic tmp15 = pattern;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1335)
				::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(tmp15,(int)3);
			}
			else{
				HX_STACK_LINE(1339)
				Dynamic tmp15 = pattern;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1339)
				::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(tmp15,(int)1);
			}
			HX_STACK_LINE(1343)
			Dynamic tmp15 = pattern;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1343)
			cairo->set_source(tmp15);
			HX_STACK_LINE(1344)
			cairo->paint();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCairo,(void))

Void BitmapData_obj::__renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCairoMask",0x1a586fb3,"openfl.display.BitmapData.__renderCairoMask","openfl/display/BitmapData.hx",1351,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCairoMask,(void))

Void BitmapData_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCanvas",0x5afced59,"openfl.display.BitmapData.__renderCanvas","openfl/display/BitmapData.hx",1358,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCanvas,(void))

Void BitmapData_obj::__renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCanvasMask",0xf2507ae5,"openfl.display.BitmapData.__renderCanvasMask","openfl/display/BitmapData.hx",1392,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCanvasMask,(void))

Void BitmapData_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderGL",0x4c025e06,"openfl.display.BitmapData.__renderGL","openfl/display/BitmapData.hx",1399,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderGL,(void))

Void BitmapData_obj::__resize( int width,int height){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__resize",0xd982a43f,"openfl.display.BitmapData.__resize","openfl/display/BitmapData.hx",1406,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(1408)
		this->width = width;
		HX_STACK_LINE(1409)
		this->height = height;
		HX_STACK_LINE(1410)
		::openfl::geom::Rectangle tmp = this->rect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1410)
		tmp->width = width;
		HX_STACK_LINE(1411)
		::openfl::geom::Rectangle tmp1 = this->rect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1411)
		tmp1->height = height;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,__resize,(void))

Void BitmapData_obj::__sync( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__sync",0x0b374be6,"openfl.display.BitmapData.__sync","openfl/display/BitmapData.hx",1416,0xdd12d5b9)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,__sync,(void))

Void BitmapData_obj::__updateChildren( bool transformOnly){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__updateChildren",0xeaaf19b3,"openfl.display.BitmapData.__updateChildren","openfl/display/BitmapData.hx",1425,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__updateChildren,(void))

Void BitmapData_obj::__updateMask( ::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__updateMask",0x378cf760,"openfl.display.BitmapData.__updateMask","openfl/display/BitmapData.hx",1432,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(maskGraphics,"maskGraphics")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__updateMask,(void))

Void BitmapData_obj::__updateTransforms( ::openfl::geom::Matrix overrideTransform){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__updateTransforms",0xf11196fb,"openfl.display.BitmapData.__updateTransforms","openfl/display/BitmapData.hx",1439,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(overrideTransform,"overrideTransform")
		HX_STACK_LINE(1441)
		bool tmp = (overrideTransform == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1441)
		if ((tmp)){
			HX_STACK_LINE(1443)
			::openfl::geom::Matrix tmp1 = this->__worldTransform;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1443)
			tmp1->identity();
		}
		else{
			HX_STACK_LINE(1447)
			this->__worldTransform = overrideTransform;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__updateTransforms,(void))

Dynamic BitmapData_obj::__isGLES;

::openfl::display::BitmapData BitmapData_obj::fromBase64( ::String base64,::String type,Dynamic onload){
	HX_STACK_FRAME("openfl.display.BitmapData","fromBase64",0x8e5a4284,"openfl.display.BitmapData.fromBase64","openfl/display/BitmapData.hx",565,0xdd12d5b9)
	HX_STACK_ARG(base64,"base64")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_LINE(567)
	::openfl::display::BitmapData tmp = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,true,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(567)
	::openfl::display::BitmapData bitmapData = tmp;		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(568)
	{
		HX_STACK_LINE(568)
		Dynamic onload1 = onload;		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(568)
		::openfl::display::BitmapData _g = bitmapData;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(568)
		::String tmp1 = base64;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(568)
		::String tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::openfl::display::BitmapData,_g,Dynamic,onload1)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/BitmapData.hx",568,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(568)
				::lime::graphics::Image tmp3 = image;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(568)
				_g->__fromImage(tmp3);
				HX_STACK_LINE(568)
				bool tmp4 = (onload1 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(568)
				if ((tmp4)){
					HX_STACK_LINE(568)
					::openfl::display::BitmapData tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(568)
					onload1(tmp5).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(568)
		::lime::graphics::Image_obj::fromBase64(tmp1,tmp2, Dynamic(new _Function_2_1(_g,onload1)));
	}
	HX_STACK_LINE(569)
	::openfl::display::BitmapData tmp1 = bitmapData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(569)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,fromBase64,return )

::openfl::display::BitmapData BitmapData_obj::fromBytes( ::openfl::utils::ByteArrayData bytes,::openfl::utils::ByteArrayData rawAlpha,Dynamic onload){
	HX_STACK_FRAME("openfl.display.BitmapData","fromBytes",0x062c5916,"openfl.display.BitmapData.fromBytes","openfl/display/BitmapData.hx",574,0xdd12d5b9)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(rawAlpha,"rawAlpha")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_LINE(576)
	::openfl::display::BitmapData tmp = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,true,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(576)
	::openfl::display::BitmapData bitmapData = tmp;		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(577)
	{
		HX_STACK_LINE(577)
		::openfl::utils::ByteArrayData rawAlpha1 = rawAlpha;		HX_STACK_VAR(rawAlpha1,"rawAlpha1");
		HX_STACK_LINE(577)
		Dynamic onload1 = onload;		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(577)
		::openfl::display::BitmapData _g = bitmapData;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(577)
		::openfl::utils::ByteArrayData tmp1 = bytes;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(577)
		::haxe::io::Bytes tmp2 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(tmp1);		HX_STACK_VAR(tmp2,"tmp2");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_2_1,::openfl::utils::ByteArrayData,rawAlpha1,::openfl::display::BitmapData,_g,Dynamic,onload1)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/BitmapData.hx",577,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(577)
				::lime::graphics::Image tmp3 = image;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(577)
				_g->__fromImage(tmp3);
				HX_STACK_LINE(577)
				bool tmp4 = (rawAlpha1 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(577)
				if ((tmp4)){
					HX_STACK_LINE(577)
					::lime::utils::ArrayBufferView tmp5 = image->buffer->data;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(577)
					::lime::utils::ArrayBufferView data = tmp5;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(577)
					{
						HX_STACK_LINE(577)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(577)
						::openfl::utils::ByteArrayData tmp6 = rawAlpha1;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(577)
						int tmp7 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(577)
						int _g1 = tmp7;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(577)
						while((true)){
							HX_STACK_LINE(577)
							bool tmp8 = (_g2 < _g1);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(577)
							bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(577)
							if ((tmp9)){
								HX_STACK_LINE(577)
								break;
							}
							HX_STACK_LINE(577)
							int tmp10 = (_g2)++;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(577)
							int i = tmp10;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(577)
							{
								HX_STACK_LINE(577)
								int tmp11 = rawAlpha1->readUnsignedByte();		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(577)
								int val = tmp11;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(577)
								::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (((i * (int)4) + (int)3))),val);
								HX_STACK_LINE(577)
								val;
							}
						}
					}
					HX_STACK_LINE(577)
					(image->version)++;
				}
				HX_STACK_LINE(577)
				bool tmp5 = (onload1 != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(577)
				if ((tmp5)){
					HX_STACK_LINE(577)
					::openfl::display::BitmapData tmp6 = _g;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(577)
					onload1(tmp6).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(577)
		::lime::graphics::Image_obj::fromBytes(tmp2, Dynamic(new _Function_2_1(rawAlpha1,_g,onload1)));
	}
	HX_STACK_LINE(578)
	::openfl::display::BitmapData tmp1 = bitmapData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(578)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,fromBytes,return )

::openfl::display::BitmapData BitmapData_obj::fromFile( ::String path,Dynamic onload,Dynamic onerror){
	HX_STACK_FRAME("openfl.display.BitmapData","fromFile",0xca5f7c31,"openfl.display.BitmapData.fromFile","openfl/display/BitmapData.hx",597,0xdd12d5b9)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_ARG(onerror,"onerror")
	HX_STACK_LINE(599)
	::openfl::display::BitmapData tmp = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,true,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(599)
	::openfl::display::BitmapData bitmapData = tmp;		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(600)
	::String tmp1 = path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(600)
	Dynamic tmp2 = onload;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(600)
	Dynamic tmp3 = onerror;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(600)
	bitmapData->__fromFile(tmp1,tmp2,tmp3);
	HX_STACK_LINE(601)
	::openfl::display::BitmapData tmp4 = bitmapData;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(601)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,fromFile,return )

::openfl::display::BitmapData BitmapData_obj::fromImage( ::lime::graphics::Image image,hx::Null< bool >  __o_transparent){
bool transparent = __o_transparent.Default(true);
	HX_STACK_FRAME("openfl.display.BitmapData","fromImage",0x05fd7006,"openfl.display.BitmapData.fromImage","openfl/display/BitmapData.hx",606,0xdd12d5b9)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(transparent,"transparent")
{
		HX_STACK_LINE(608)
		bool tmp = (image == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(608)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(608)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(608)
		if ((tmp1)){
			HX_STACK_LINE(608)
			tmp2 = (image->buffer == null());
		}
		else{
			HX_STACK_LINE(608)
			tmp2 = true;
		}
		HX_STACK_LINE(608)
		if ((tmp2)){
			HX_STACK_LINE(608)
			return null();
		}
		HX_STACK_LINE(610)
		::openfl::display::BitmapData tmp3 = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,transparent,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(610)
		::openfl::display::BitmapData bitmapData = tmp3;		HX_STACK_VAR(bitmapData,"bitmapData");
		HX_STACK_LINE(611)
		::lime::graphics::Image tmp4 = image;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(611)
		bitmapData->__fromImage(tmp4);
		HX_STACK_LINE(612)
		bool tmp5 = transparent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(612)
		bitmapData->image->set_transparent(tmp5);
		HX_STACK_LINE(613)
		::openfl::display::BitmapData tmp6 = bitmapData;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(613)
		return tmp6;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,fromImage,return )


BitmapData_obj::BitmapData_obj()
{
}

void BitmapData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapData);
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(transparent,"transparent");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_MARK_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_MARK_MEMBER_NAME(__blendMode,"__blendMode");
	HX_MARK_MEMBER_NAME(__buffer,"__buffer");
	HX_MARK_MEMBER_NAME(__bufferAlpha,"__bufferAlpha");
	HX_MARK_MEMBER_NAME(__bufferData,"__bufferData");
	HX_MARK_MEMBER_NAME(__isValid,"__isValid");
	HX_MARK_MEMBER_NAME(__surface,"__surface");
	HX_MARK_MEMBER_NAME(__texture,"__texture");
	HX_MARK_MEMBER_NAME(__textureVersion,"__textureVersion");
	HX_MARK_END_CLASS();
}

void BitmapData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(transparent,"transparent");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_VISIT_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_VISIT_MEMBER_NAME(__blendMode,"__blendMode");
	HX_VISIT_MEMBER_NAME(__buffer,"__buffer");
	HX_VISIT_MEMBER_NAME(__bufferAlpha,"__bufferAlpha");
	HX_VISIT_MEMBER_NAME(__bufferData,"__bufferData");
	HX_VISIT_MEMBER_NAME(__isValid,"__isValid");
	HX_VISIT_MEMBER_NAME(__surface,"__surface");
	HX_VISIT_MEMBER_NAME(__texture,"__texture");
	HX_VISIT_MEMBER_NAME(__textureVersion,"__textureVersion");
}

Dynamic BitmapData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		if (HX_FIELD_EQ(inName,"noise") ) { return noise_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"encode") ) { return encode_dyn(); }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll_dyn(); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return unlock_dyn(); }
		if (HX_FIELD_EQ(inName,"__sync") ) { return __sync_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"hitTest") ) { return hitTest_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__buffer") ) { return __buffer; }
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel") ) { return getPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel") ) { return setPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"__resize") ) { return __resize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__isValid") ) { return __isValid; }
		if (HX_FIELD_EQ(inName,"__surface") ) { return __surface; }
		if (HX_FIELD_EQ(inName,"__texture") ) { return __texture; }
		if (HX_FIELD_EQ(inName,"floodFill") ) { return floodFill_dyn(); }
		if (HX_FIELD_EQ(inName,"getBuffer") ) { return getBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixels") ) { return getPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getVector") ) { return getVector_dyn(); }
		if (HX_FIELD_EQ(inName,"histogram") ) { return histogram_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixels") ) { return setPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"setVector") ) { return setVector_dyn(); }
		if (HX_FIELD_EQ(inName,"threshold") ) { return threshold_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"copyPixels") ) { return copyPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { return getPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"getSurface") ) { return getSurface_dyn(); }
		if (HX_FIELD_EQ(inName,"getTexture") ) { return getTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"paletteMap") ) { return paletteMap_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { return setPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromFile") ) { return __fromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { return transparent; }
		if (HX_FIELD_EQ(inName,"__blendMode") ) { return __blendMode; }
		if (HX_FIELD_EQ(inName,"applyFilter") ) { return applyFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"copyChannel") ) { return copyChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"perlinNoise") ) { return perlinNoise_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromImage") ) { return __fromImage_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__bufferData") ) { return __bufferData; }
		if (HX_FIELD_EQ(inName,"__fromBase64") ) { return __fromBase64_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateMask") ) { return __updateMask_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__bufferAlpha") ) { return __bufferAlpha; }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"drawWithQuality") ) { return drawWithQuality_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { return __worldTransform; }
		if (HX_FIELD_EQ(inName,"__textureVersion") ) { return __textureVersion; }
		if (HX_FIELD_EQ(inName,"__updateChildren") ) { return __updateChildren_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return __renderCairoMask_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"generateFilterRect") ) { return generateFilterRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorBoundsRect") ) { return getColorBoundsRect_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return __renderCanvasMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateTransforms") ) { return __updateTransforms_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { return __worldColorTransform; }
	}
	return super::__Field(inName,inCallProp);
}

bool BitmapData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__isGLES") ) { outValue = __isGLES; return true;  }
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromImage") ) { outValue = fromImage_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromBase64") ) { outValue = fromBase64_dyn(); return true;  }
	}
	return false;
}

Dynamic BitmapData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::lime::graphics::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__buffer") ) { __buffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__isValid") ) { __isValid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__surface") ) { __surface=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture") ) { __texture=inValue.Cast< ::lime::graphics::opengl::GLTexture >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { transparent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__blendMode") ) { __blendMode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__bufferData") ) { __bufferData=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__bufferAlpha") ) { __bufferAlpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { __worldTransform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textureVersion") ) { __textureVersion=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { __worldColorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BitmapData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__isGLES") ) { __isGLES=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void BitmapData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));
	outFields->push(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"));
	outFields->push(HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"));
	outFields->push(HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"));
	outFields->push(HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"));
	outFields->push(HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78"));
	outFields->push(HX_HCSTRING("__bufferAlpha","\x1e","\x7b","\x5a","\x07"));
	outFields->push(HX_HCSTRING("__bufferData","\x6a","\x3a","\x07","\xcc"));
	outFields->push(HX_HCSTRING("__isValid","\x92","\x69","\x8c","\x4f"));
	outFields->push(HX_HCSTRING("__surface","\x0d","\xb7","\x97","\xde"));
	outFields->push(HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20"));
	outFields->push(HX_HCSTRING("__textureVersion","\x9d","\x72","\xf2","\xd2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(BitmapData_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::lime::graphics::Image*/ ,(int)offsetof(BitmapData_obj,image),HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(BitmapData_obj,rect),HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,transparent),HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22")},
	{hx::fsInt,(int)offsetof(BitmapData_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(BitmapData_obj,__worldTransform),HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(BitmapData_obj,__worldColorTransform),HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BitmapData_obj,__blendMode),HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(BitmapData_obj,__buffer),HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78")},
	{hx::fsFloat,(int)offsetof(BitmapData_obj,__bufferAlpha),HX_HCSTRING("__bufferAlpha","\x1e","\x7b","\x5a","\x07")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(BitmapData_obj,__bufferData),HX_HCSTRING("__bufferData","\x6a","\x3a","\x07","\xcc")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,__isValid),HX_HCSTRING("__isValid","\x92","\x69","\x8c","\x4f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BitmapData_obj,__surface),HX_HCSTRING("__surface","\x0d","\xb7","\x97","\xde")},
	{hx::fsObject /*::lime::graphics::opengl::GLTexture*/ ,(int)offsetof(BitmapData_obj,__texture),HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20")},
	{hx::fsInt,(int)offsetof(BitmapData_obj,__textureVersion),HX_HCSTRING("__textureVersion","\x9d","\x72","\xf2","\xd2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::__isGLES,HX_HCSTRING("__isGLES","\xdd","\x11","\xe5","\x09")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),
	HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"),
	HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"),
	HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"),
	HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"),
	HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78"),
	HX_HCSTRING("__bufferAlpha","\x1e","\x7b","\x5a","\x07"),
	HX_HCSTRING("__bufferData","\x6a","\x3a","\x07","\xcc"),
	HX_HCSTRING("__isValid","\x92","\x69","\x8c","\x4f"),
	HX_HCSTRING("__surface","\x0d","\xb7","\x97","\xde"),
	HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20"),
	HX_HCSTRING("__textureVersion","\x9d","\x72","\xf2","\xd2"),
	HX_HCSTRING("applyFilter","\xc6","\xdf","\x2f","\xc1"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("compare","\xa5","\x18","\x69","\x83"),
	HX_HCSTRING("copyChannel","\x8e","\x7d","\xe6","\x22"),
	HX_HCSTRING("copyPixels","\xc2","\x54","\x6e","\x42"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("drawWithQuality","\xb5","\xc5","\x05","\x6f"),
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"),
	HX_HCSTRING("floodFill","\x61","\x83","\x8a","\x59"),
	HX_HCSTRING("generateFilterRect","\x91","\x2c","\x98","\x7e"),
	HX_HCSTRING("getBuffer","\x36","\x46","\xeb","\x4c"),
	HX_HCSTRING("getColorBoundsRect","\x86","\xad","\xe8","\x80"),
	HX_HCSTRING("getPixel","\x10","\xd6","\x7a","\x22"),
	HX_HCSTRING("getPixel32","\xaf","\xa6","\x68","\xd7"),
	HX_HCSTRING("getPixels","\x63","\x78","\x00","\x09"),
	HX_HCSTRING("getSurface","\x37","\xec","\xaa","\xac"),
	HX_HCSTRING("getTexture","\xe5","\x4e","\x42","\xee"),
	HX_HCSTRING("getVector","\xf9","\x39","\xb4","\x13"),
	HX_HCSTRING("histogram","\xa4","\xde","\x33","\x65"),
	HX_HCSTRING("hitTest","\x45","\x60","\x7f","\xe2"),
	HX_HCSTRING("lock","\xeb","\x9b","\xb7","\x47"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("noise","\x9a","\x8f","\xc2","\x9f"),
	HX_HCSTRING("paletteMap","\xe1","\xae","\x2b","\x06"),
	HX_HCSTRING("perlinNoise","\x66","\x84","\xf8","\x8b"),
	HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"),
	HX_HCSTRING("setPixel","\x84","\x2f","\xd8","\xd0"),
	HX_HCSTRING("setPixel32","\x23","\x45","\xe6","\xda"),
	HX_HCSTRING("setPixels","\x6f","\x64","\x51","\xec"),
	HX_HCSTRING("setVector","\x05","\x26","\x05","\xf7"),
	HX_HCSTRING("threshold","\xab","\xc3","\xa3","\x34"),
	HX_HCSTRING("unlock","\xc4","\xa2","\x8c","\x65"),
	HX_HCSTRING("__fromBase64","\xb9","\x7d","\xff","\xd0"),
	HX_HCSTRING("__fromBytes","\x81","\x3b","\x4d","\xa0"),
	HX_HCSTRING("__fromFile","\x26","\x10","\xc0","\x44"),
	HX_HCSTRING("__fromImage","\x71","\x52","\x1e","\xa0"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCairoMask","\x3e","\x0c","\x22","\x6b"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderCanvasMask","\xfa","\xd7","\xef","\x51"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__resize","\x14","\xc5","\xaa","\xb0"),
	HX_HCSTRING("__sync","\x7b","\x1d","\x58","\xfb"),
	HX_HCSTRING("__updateChildren","\x88","\x97","\xd3","\xd9"),
	HX_HCSTRING("__updateMask","\xb5","\xa6","\x9e","\x39"),
	HX_HCSTRING("__updateTransforms","\x10","\xf4","\xb0","\x50"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BitmapData_obj::__isGLES,"__isGLES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::__isGLES,"__isGLES");
};

#endif

hx::Class BitmapData_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__isGLES","\xdd","\x11","\xe5","\x09"),
	HX_HCSTRING("fromBase64","\x99","\x02","\x6c","\x98"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("fromImage","\x91","\x09","\xf2","\x71"),
	::String(null()) };

void BitmapData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.BitmapData","\xa3","\x12","\x41","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BitmapData_obj::__GetStatic;
	__mClass->mSetStaticField = &BitmapData_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapData_obj >;
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

void BitmapData_obj::__boot()
{
	__isGLES= null();
}

} // end namespace openfl
} // end namespace display
