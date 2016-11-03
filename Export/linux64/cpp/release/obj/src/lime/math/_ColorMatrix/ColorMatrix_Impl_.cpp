#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_math__ColorMatrix_ColorMatrix_Impl_
#include <lime/math/_ColorMatrix/ColorMatrix_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
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
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
namespace lime{
namespace math{
namespace _ColorMatrix{

Void ColorMatrix_Impl__obj::__construct()
{
	return null();
}

//ColorMatrix_Impl__obj::~ColorMatrix_Impl__obj() { }

Dynamic ColorMatrix_Impl__obj::__CreateEmpty() { return  new ColorMatrix_Impl__obj; }
hx::ObjectPtr< ColorMatrix_Impl__obj > ColorMatrix_Impl__obj::__new()
{  hx::ObjectPtr< ColorMatrix_Impl__obj > _result_ = new ColorMatrix_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic ColorMatrix_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColorMatrix_Impl__obj > _result_ = new ColorMatrix_Impl__obj();
	_result_->__construct();
	return _result_;}

::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::__alphaTable;

::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::__blueTable;

::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::__greenTable;

Array< Float > ColorMatrix_Impl__obj::__identity;

::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::__redTable;

::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::_new( ::lime::utils::ArrayBufferView data){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","_new",0x66bc06c7,"lime.math._ColorMatrix.ColorMatrix_Impl_._new","lime/math/ColorMatrix.hx",32,0x337975c7)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(32)
	::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
	HX_STACK_LINE(34)
	bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	if ((tmp)){
		HX_STACK_LINE(34)
		int tmp2 = data->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		tmp1 = (tmp3 == (int)20);
	}
	else{
		HX_STACK_LINE(34)
		tmp1 = false;
	}
	HX_STACK_LINE(34)
	if ((tmp1)){
		HX_STACK_LINE(36)
		this1 = data;
	}
	else{
		HX_STACK_LINE(40)
		::lime::utils::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			cpp::ArrayBase array = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::__identity;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(40)
			::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
			HX_STACK_LINE(40)
			bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(40)
			if ((tmp3)){
				HX_STACK_LINE(40)
				::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(40)
				this2 = tmp4;
			}
			else{
				HX_STACK_LINE(40)
				bool tmp4 = (array != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(40)
				if ((tmp4)){
					HX_STACK_LINE(40)
					::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(40)
					{
						HX_STACK_LINE(40)
						::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(40)
						::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(40)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(40)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(40)
						int tmp7 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(40)
						_this->byteLength = tmp7;
						HX_STACK_LINE(40)
						::haxe::io::Bytes tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(40)
						{
							HX_STACK_LINE(40)
							::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
							HX_STACK_LINE(40)
							int tmp9 = _this->byteLength;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(40)
							::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(40)
							this3 = tmp10;
							HX_STACK_LINE(40)
							tmp8 = this3;
						}
						HX_STACK_LINE(40)
						_this->buffer = tmp8;
						HX_STACK_LINE(40)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(40)
						tmp5 = _this;
					}
					HX_STACK_LINE(40)
					this2 = tmp5;
				}
				else{
					HX_STACK_LINE(40)
					bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(40)
					if ((tmp5)){
						HX_STACK_LINE(40)
						::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(40)
						{
							HX_STACK_LINE(40)
							::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(40)
							::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(40)
							cpp::ArrayBase array1 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array1,"array1");
							HX_STACK_LINE(40)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(40)
							_this->length = array1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
							HX_STACK_LINE(40)
							int tmp8 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(40)
							_this->byteLength = tmp8;
							HX_STACK_LINE(40)
							::haxe::io::Bytes tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(40)
							{
								HX_STACK_LINE(40)
								::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
								HX_STACK_LINE(40)
								int tmp10 = _this->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(40)
								::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(40)
								this3 = tmp11;
								HX_STACK_LINE(40)
								tmp9 = this3;
							}
							HX_STACK_LINE(40)
							_this->buffer = tmp9;
							HX_STACK_LINE(40)
							_this->copyFromArray(((Array< Float >)(array1)),null());
							HX_STACK_LINE(40)
							tmp6 = _this;
						}
						HX_STACK_LINE(40)
						this2 = tmp6;
					}
					else{
						HX_STACK_LINE(40)
						bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(40)
						if ((tmp6)){
							HX_STACK_LINE(40)
							::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(40)
							{
								HX_STACK_LINE(40)
								::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(40)
								::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(40)
								::haxe::io::Bytes tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(40)
								::haxe::io::Bytes srcData = tmp9;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(40)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(40)
								int srcLength = tmp10;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(40)
								int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(40)
								int srcByteOffset = tmp11;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(40)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(40)
								int srcElementSize = tmp12;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(40)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(40)
								int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(40)
								int tmp14 = _this->type;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(40)
								bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(40)
								if ((tmp15)){
									HX_STACK_LINE(40)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(40)
									int tmp16 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(40)
									int cloneLength = tmp16;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(40)
									::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(40)
									{
										HX_STACK_LINE(40)
										::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
										HX_STACK_LINE(40)
										int tmp18 = cloneLength;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(40)
										::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(40)
										this3 = tmp19;
										HX_STACK_LINE(40)
										tmp17 = this3;
									}
									HX_STACK_LINE(40)
									_this->buffer = tmp17;
									HX_STACK_LINE(40)
									::haxe::io::Bytes tmp18 = srcData;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(40)
									int tmp19 = srcByteOffset;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(40)
									int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(40)
									_this->buffer->blit((int)0,tmp18,tmp19,tmp20);
								}
								else{
									HX_STACK_LINE(40)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(40)
								int tmp16 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(40)
								_this->byteLength = tmp16;
								HX_STACK_LINE(40)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(40)
								_this->length = srcLength;
								HX_STACK_LINE(40)
								tmp7 = _this;
							}
							HX_STACK_LINE(40)
							this2 = tmp7;
						}
						else{
							HX_STACK_LINE(40)
							bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(40)
							if ((tmp7)){
								HX_STACK_LINE(40)
								::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(40)
								{
									HX_STACK_LINE(40)
									::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(40)
									::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(40)
									bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(40)
									if ((tmp10)){
										HX_STACK_LINE(40)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(40)
									int tmp11 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(40)
									bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(40)
									if ((tmp12)){
										HX_STACK_LINE(40)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(40)
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(40)
									int bufferByteLength = tmp13;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(40)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(40)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(40)
									bool tmp14 = true;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(40)
									if ((tmp14)){
										HX_STACK_LINE(40)
										int tmp15 = bufferByteLength;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(40)
										newByteLength = tmp15;
										HX_STACK_LINE(40)
										int tmp16 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(40)
										bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(40)
										if ((tmp17)){
											HX_STACK_LINE(40)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(40)
										bool tmp18 = (newByteLength < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(40)
										if ((tmp18)){
											HX_STACK_LINE(40)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(40)
										int tmp15 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(40)
										newByteLength = tmp15;
										HX_STACK_LINE(40)
										int tmp16 = newByteLength;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(40)
										int newRange = tmp16;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(40)
										bool tmp17 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(40)
										if ((tmp17)){
											HX_STACK_LINE(40)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(40)
									_this->buffer = null();
									HX_STACK_LINE(40)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(40)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(40)
									Float tmp15 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(40)
									int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(40)
									_this->length = tmp16;
									HX_STACK_LINE(40)
									tmp8 = _this;
								}
								HX_STACK_LINE(40)
								this2 = tmp8;
							}
							else{
								HX_STACK_LINE(40)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
						}
					}
				}
			}
			HX_STACK_LINE(40)
			tmp2 = this2;
		}
		HX_STACK_LINE(40)
		this1 = tmp2;
	}
	HX_STACK_LINE(32)
	::lime::utils::ArrayBufferView tmp2 = this1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(32)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,_new,return )

::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::clone( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","clone",0xca195b37,"lime.math._ColorMatrix.ColorMatrix_Impl_.clone","lime/math/ColorMatrix.hx",47,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(49)
	::lime::utils::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
		HX_STACK_LINE(49)
		bool tmp1 = false;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		if ((tmp1)){
			HX_STACK_LINE(49)
			::lime::utils::ArrayBufferView tmp2 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(49)
			this2 = tmp2;
		}
		else{
			HX_STACK_LINE(49)
			bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(49)
			if ((tmp2)){
				HX_STACK_LINE(49)
				::lime::utils::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(49)
				{
					HX_STACK_LINE(49)
					::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(49)
					::lime::utils::ArrayBufferView _this = tmp4;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(49)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(49)
					int tmp5 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(49)
					_this->length = tmp5;
					HX_STACK_LINE(49)
					int tmp6 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(49)
					_this->byteLength = tmp6;
					HX_STACK_LINE(49)
					::haxe::io::Bytes tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(49)
					{
						HX_STACK_LINE(49)
						::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
						HX_STACK_LINE(49)
						int tmp8 = _this->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(49)
						::haxe::io::Bytes tmp9 = ::haxe::io::Bytes_obj::alloc(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(49)
						this3 = tmp9;
						HX_STACK_LINE(49)
						tmp7 = this3;
					}
					HX_STACK_LINE(49)
					_this->buffer = tmp7;
					HX_STACK_LINE(49)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(49)
					tmp3 = _this;
				}
				HX_STACK_LINE(49)
				this2 = tmp3;
			}
			else{
				HX_STACK_LINE(49)
				bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(49)
				if ((tmp3)){
					HX_STACK_LINE(49)
					::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(49)
					{
						HX_STACK_LINE(49)
						::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(49)
						::lime::utils::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(49)
						cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
						HX_STACK_LINE(49)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(49)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(49)
						int tmp6 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(49)
						_this->byteLength = tmp6;
						HX_STACK_LINE(49)
						::haxe::io::Bytes tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(49)
						{
							HX_STACK_LINE(49)
							::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
							HX_STACK_LINE(49)
							int tmp8 = _this->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(49)
							::haxe::io::Bytes tmp9 = ::haxe::io::Bytes_obj::alloc(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(49)
							this3 = tmp9;
							HX_STACK_LINE(49)
							tmp7 = this3;
						}
						HX_STACK_LINE(49)
						_this->buffer = tmp7;
						HX_STACK_LINE(49)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(49)
						tmp4 = _this;
					}
					HX_STACK_LINE(49)
					this2 = tmp4;
				}
				else{
					HX_STACK_LINE(49)
					bool tmp4 = (this1 != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(49)
					if ((tmp4)){
						HX_STACK_LINE(49)
						::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(49)
						{
							HX_STACK_LINE(49)
							::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(49)
							::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(49)
							::haxe::io::Bytes srcData = this1->buffer;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(49)
							int srcLength = this1->length;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(49)
							int srcByteOffset = this1->byteOffset;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(49)
							int srcElementSize = this1->bytesPerElement;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(49)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(49)
							bool tmp7 = (this1->type == _this->type);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(49)
							if ((tmp7)){
								HX_STACK_LINE(49)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(49)
								int tmp8 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(49)
								int cloneLength = tmp8;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(49)
								::haxe::io::Bytes tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(49)
								{
									HX_STACK_LINE(49)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(49)
									int tmp10 = cloneLength;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(49)
									::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(49)
									this3 = tmp11;
									HX_STACK_LINE(49)
									tmp9 = this3;
								}
								HX_STACK_LINE(49)
								_this->buffer = tmp9;
								HX_STACK_LINE(49)
								::haxe::io::Bytes tmp10 = srcData;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(49)
								int tmp11 = srcByteOffset;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(49)
								int tmp12 = cloneLength;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(49)
								_this->buffer->blit((int)0,tmp10,tmp11,tmp12);
							}
							else{
								HX_STACK_LINE(49)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(49)
							int tmp8 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(49)
							_this->byteLength = tmp8;
							HX_STACK_LINE(49)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(49)
							_this->length = srcLength;
							HX_STACK_LINE(49)
							tmp5 = _this;
						}
						HX_STACK_LINE(49)
						this2 = tmp5;
					}
					else{
						HX_STACK_LINE(49)
						bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(49)
						if ((tmp5)){
							HX_STACK_LINE(49)
							::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(49)
							{
								HX_STACK_LINE(49)
								::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(49)
								::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(49)
								bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(49)
								if ((tmp8)){
									HX_STACK_LINE(49)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(49)
								int tmp9 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(49)
								bool tmp10 = (tmp9 != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(49)
								if ((tmp10)){
									HX_STACK_LINE(49)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(49)
								int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(49)
								int bufferByteLength = tmp11;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(49)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(49)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(49)
								bool tmp12 = true;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(49)
								if ((tmp12)){
									HX_STACK_LINE(49)
									int tmp13 = bufferByteLength;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(49)
									newByteLength = tmp13;
									HX_STACK_LINE(49)
									int tmp14 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(49)
									bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(49)
									if ((tmp15)){
										HX_STACK_LINE(49)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(49)
									bool tmp16 = (newByteLength < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(49)
									if ((tmp16)){
										HX_STACK_LINE(49)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(49)
									int tmp13 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(49)
									newByteLength = tmp13;
									HX_STACK_LINE(49)
									int tmp14 = newByteLength;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(49)
									int newRange = tmp14;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(49)
									bool tmp15 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(49)
									if ((tmp15)){
										HX_STACK_LINE(49)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(49)
								_this->buffer = null();
								HX_STACK_LINE(49)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(49)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(49)
								Float tmp13 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(49)
								int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(49)
								_this->length = tmp14;
								HX_STACK_LINE(49)
								tmp6 = _this;
							}
							HX_STACK_LINE(49)
							this2 = tmp6;
						}
						else{
							HX_STACK_LINE(49)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
					}
				}
			}
		}
		HX_STACK_LINE(49)
		tmp = this2;
	}
	HX_STACK_LINE(49)
	::lime::utils::ArrayBufferView tmp1 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,clone,return )

Void ColorMatrix_Impl__obj::concat( ::lime::utils::ArrayBufferView this1,::lime::utils::ArrayBufferView second){
{
		HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","concat",0xc5989ffa,"lime.math._ColorMatrix.ColorMatrix_Impl_.concat","lime/math/ColorMatrix.hx",54,0x337975c7)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(second,"second")
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			::lime::utils::ArrayBufferView _g = this1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(56)
			{
				HX_STACK_LINE(56)
				Float tmp = ::__hxcpp_memory_get_float(_g->buffer->b,_g->byteOffset);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(56)
				Float tmp1 = ::__hxcpp_memory_get_float(second->buffer->b,second->byteOffset);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(56)
				Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(56)
				Float value = tmp2;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(56)
				{
					HX_STACK_LINE(56)
					::__hxcpp_memory_set_float(_g->buffer->b,_g->byteOffset,value);
					HX_STACK_LINE(56)
					value;
				}
			}
		}
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			::lime::utils::ArrayBufferView _g = this1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				Float tmp = ::__hxcpp_memory_get_float(_g->buffer->b,(_g->byteOffset + (int)24));		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(57)
				Float tmp1 = ::__hxcpp_memory_get_float(second->buffer->b,(second->byteOffset + (int)24));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(57)
				Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(57)
				Float value = tmp2;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(57)
				{
					HX_STACK_LINE(57)
					::__hxcpp_memory_set_float(_g->buffer->b,(_g->byteOffset + (int)24),value);
					HX_STACK_LINE(57)
					value;
				}
			}
		}
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			::lime::utils::ArrayBufferView _g = this1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(58)
			{
				HX_STACK_LINE(58)
				Float tmp = ::__hxcpp_memory_get_float(_g->buffer->b,(_g->byteOffset + (int)48));		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(58)
				Float tmp1 = ::__hxcpp_memory_get_float(second->buffer->b,(second->byteOffset + (int)48));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(58)
				Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(58)
				Float value = tmp2;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(58)
				{
					HX_STACK_LINE(58)
					::__hxcpp_memory_set_float(_g->buffer->b,(_g->byteOffset + (int)48),value);
					HX_STACK_LINE(58)
					value;
				}
			}
		}
		HX_STACK_LINE(59)
		{
			HX_STACK_LINE(59)
			::lime::utils::ArrayBufferView _g = this1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(59)
			{
				HX_STACK_LINE(59)
				Float tmp = ::__hxcpp_memory_get_float(_g->buffer->b,(_g->byteOffset + (int)72));		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(59)
				Float tmp1 = ::__hxcpp_memory_get_float(second->buffer->b,(second->byteOffset + (int)72));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(59)
				Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(59)
				Float value = tmp2;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(59)
				{
					HX_STACK_LINE(59)
					::__hxcpp_memory_set_float(_g->buffer->b,(_g->byteOffset + (int)72),value);
					HX_STACK_LINE(59)
					value;
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,concat,(void))

Void ColorMatrix_Impl__obj::copyFrom( ::lime::utils::ArrayBufferView this1,::lime::utils::ArrayBufferView other){
{
		HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","copyFrom",0x3aa9a825,"lime.math._ColorMatrix.ColorMatrix_Impl_.copyFrom","lime/math/ColorMatrix.hx",66,0x337975c7)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(66)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(66)
		bool tmp = (other != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		if ((tmp)){
			HX_STACK_LINE(66)
			tmp1 = true;
		}
		else{
			HX_STACK_LINE(66)
			tmp1 = false;
		}
		HX_STACK_LINE(66)
		if ((tmp1)){
			HX_STACK_LINE(66)
			int tmp2 = (offset * this1->bytesPerElement);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(66)
			::haxe::io::Bytes tmp3 = other->buffer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(66)
			int tmp4 = other->byteOffset;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(66)
			int tmp5 = other->byteLength;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(66)
			this1->buffer->blit(tmp2,tmp3,tmp4,tmp5);
		}
		else{
			HX_STACK_LINE(66)
			bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(66)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(66)
			if ((tmp2)){
				HX_STACK_LINE(66)
				tmp3 = (other == null());
			}
			else{
				HX_STACK_LINE(66)
				tmp3 = false;
			}
			HX_STACK_LINE(66)
			if ((tmp3)){
				HX_STACK_LINE(66)
				int tmp4 = offset;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(66)
				this1->copyFromArray(((Array< Float >)(null())),tmp4);
			}
			else{
				HX_STACK_LINE(66)
				HX_STACK_DO_THROW(HX_HCSTRING("Invalid .set call. either view, or array must be not-null.","\x64","\xba","\xb7","\x6c"));
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,copyFrom,(void))

Void ColorMatrix_Impl__obj::identity( ::lime::utils::ArrayBufferView this1){
{
		HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","identity",0x2b77e1a4,"lime.math._ColorMatrix.ColorMatrix_Impl_.identity","lime/math/ColorMatrix.hx",71,0x337975c7)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,(int)1);
			HX_STACK_LINE(73)
			(int)1;
		}
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)4),(int)0);
			HX_STACK_LINE(74)
			(int)0;
		}
		HX_STACK_LINE(75)
		{
			HX_STACK_LINE(75)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)8),(int)0);
			HX_STACK_LINE(75)
			(int)0;
		}
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)12),(int)0);
			HX_STACK_LINE(76)
			(int)0;
		}
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)16),(int)0);
			HX_STACK_LINE(77)
			(int)0;
		}
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)20),(int)0);
			HX_STACK_LINE(78)
			(int)0;
		}
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)24),(int)1);
			HX_STACK_LINE(79)
			(int)1;
		}
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)28),(int)0);
			HX_STACK_LINE(80)
			(int)0;
		}
		HX_STACK_LINE(81)
		{
			HX_STACK_LINE(81)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)32),(int)0);
			HX_STACK_LINE(81)
			(int)0;
		}
		HX_STACK_LINE(82)
		{
			HX_STACK_LINE(82)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)36),(int)0);
			HX_STACK_LINE(82)
			(int)0;
		}
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)40),(int)0);
			HX_STACK_LINE(83)
			(int)0;
		}
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)44),(int)0);
			HX_STACK_LINE(84)
			(int)0;
		}
		HX_STACK_LINE(85)
		{
			HX_STACK_LINE(85)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)48),(int)1);
			HX_STACK_LINE(85)
			(int)1;
		}
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)52),(int)0);
			HX_STACK_LINE(86)
			(int)0;
		}
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)56),(int)0);
			HX_STACK_LINE(87)
			(int)0;
		}
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(88)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)60),(int)0);
			HX_STACK_LINE(88)
			(int)0;
		}
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)64),(int)0);
			HX_STACK_LINE(89)
			(int)0;
		}
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)68),(int)0);
			HX_STACK_LINE(90)
			(int)0;
		}
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)72),(int)1);
			HX_STACK_LINE(91)
			(int)1;
		}
		HX_STACK_LINE(92)
		{
			HX_STACK_LINE(92)
			::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)76),(int)0);
			HX_STACK_LINE(92)
			(int)0;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,identity,(void))

::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::getAlphaTable( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","getAlphaTable",0x456419e0,"lime.math._ColorMatrix.ColorMatrix_Impl_.getAlphaTable","lime/math/ColorMatrix.hx",97,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(99)
	::lime::utils::ArrayBufferView tmp = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::__alphaTable;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(99)
	if ((tmp1)){
		HX_STACK_LINE(101)
		::lime::utils::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
			HX_STACK_LINE(101)
			bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(101)
			if ((tmp3)){
				HX_STACK_LINE(101)
				::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new((int)256,(int)4);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(101)
				this2 = tmp4;
			}
			else{
				HX_STACK_LINE(101)
				bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(101)
				if ((tmp4)){
					HX_STACK_LINE(101)
					::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(101)
					{
						HX_STACK_LINE(101)
						::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(101)
						::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(101)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(101)
						int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(101)
						_this->length = tmp7;
						HX_STACK_LINE(101)
						int tmp8 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(101)
						_this->byteLength = tmp8;
						HX_STACK_LINE(101)
						::haxe::io::Bytes tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(101)
						{
							HX_STACK_LINE(101)
							::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
							HX_STACK_LINE(101)
							int tmp10 = _this->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(101)
							::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(101)
							this3 = tmp11;
							HX_STACK_LINE(101)
							tmp9 = this3;
						}
						HX_STACK_LINE(101)
						_this->buffer = tmp9;
						HX_STACK_LINE(101)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(101)
						tmp5 = _this;
					}
					HX_STACK_LINE(101)
					this2 = tmp5;
				}
				else{
					HX_STACK_LINE(101)
					bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(101)
					if ((tmp5)){
						HX_STACK_LINE(101)
						::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(101)
						{
							HX_STACK_LINE(101)
							::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(101)
							::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(101)
							cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
							HX_STACK_LINE(101)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(101)
							_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
							HX_STACK_LINE(101)
							int tmp8 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(101)
							_this->byteLength = tmp8;
							HX_STACK_LINE(101)
							::haxe::io::Bytes tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(101)
							{
								HX_STACK_LINE(101)
								::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
								HX_STACK_LINE(101)
								int tmp10 = _this->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(101)
								::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(101)
								this3 = tmp11;
								HX_STACK_LINE(101)
								tmp9 = this3;
							}
							HX_STACK_LINE(101)
							_this->buffer = tmp9;
							HX_STACK_LINE(101)
							_this->copyFromArray(((Array< Float >)(array)),null());
							HX_STACK_LINE(101)
							tmp6 = _this;
						}
						HX_STACK_LINE(101)
						this2 = tmp6;
					}
					else{
						HX_STACK_LINE(101)
						bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(101)
						if ((tmp6)){
							HX_STACK_LINE(101)
							::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(101)
							{
								HX_STACK_LINE(101)
								::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(101)
								::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(101)
								::haxe::io::Bytes tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(101)
								::haxe::io::Bytes srcData = tmp9;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(101)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(101)
								int srcLength = tmp10;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(101)
								int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(101)
								int srcByteOffset = tmp11;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(101)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(101)
								int srcElementSize = tmp12;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(101)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(101)
								int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(101)
								int tmp14 = _this->type;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(101)
								bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(101)
								if ((tmp15)){
									HX_STACK_LINE(101)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(101)
									int tmp16 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(101)
									int cloneLength = tmp16;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(101)
									::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(101)
									{
										HX_STACK_LINE(101)
										::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
										HX_STACK_LINE(101)
										int tmp18 = cloneLength;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(101)
										::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(101)
										this3 = tmp19;
										HX_STACK_LINE(101)
										tmp17 = this3;
									}
									HX_STACK_LINE(101)
									_this->buffer = tmp17;
									HX_STACK_LINE(101)
									::haxe::io::Bytes tmp18 = srcData;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(101)
									int tmp19 = srcByteOffset;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(101)
									int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(101)
									_this->buffer->blit((int)0,tmp18,tmp19,tmp20);
								}
								else{
									HX_STACK_LINE(101)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(101)
								int tmp16 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(101)
								_this->byteLength = tmp16;
								HX_STACK_LINE(101)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(101)
								_this->length = srcLength;
								HX_STACK_LINE(101)
								tmp7 = _this;
							}
							HX_STACK_LINE(101)
							this2 = tmp7;
						}
						else{
							HX_STACK_LINE(101)
							bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(101)
							if ((tmp7)){
								HX_STACK_LINE(101)
								::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(101)
								{
									HX_STACK_LINE(101)
									::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(101)
									::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(101)
									bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(101)
									if ((tmp10)){
										HX_STACK_LINE(101)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(101)
									int tmp11 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(101)
									bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(101)
									if ((tmp12)){
										HX_STACK_LINE(101)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(101)
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(101)
									int bufferByteLength = tmp13;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(101)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(101)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(101)
									bool tmp14 = true;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(101)
									if ((tmp14)){
										HX_STACK_LINE(101)
										int tmp15 = bufferByteLength;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(101)
										newByteLength = tmp15;
										HX_STACK_LINE(101)
										int tmp16 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(101)
										bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(101)
										if ((tmp17)){
											HX_STACK_LINE(101)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(101)
										bool tmp18 = (newByteLength < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(101)
										if ((tmp18)){
											HX_STACK_LINE(101)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(101)
										int tmp15 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(101)
										newByteLength = tmp15;
										HX_STACK_LINE(101)
										int tmp16 = newByteLength;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(101)
										int newRange = tmp16;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(101)
										bool tmp17 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(101)
										if ((tmp17)){
											HX_STACK_LINE(101)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(101)
									_this->buffer = null();
									HX_STACK_LINE(101)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(101)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(101)
									Float tmp15 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(101)
									int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(101)
									_this->length = tmp16;
									HX_STACK_LINE(101)
									tmp8 = _this;
								}
								HX_STACK_LINE(101)
								this2 = tmp8;
							}
							else{
								HX_STACK_LINE(101)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
							}
						}
					}
				}
			}
			HX_STACK_LINE(101)
			tmp2 = this2;
		}
		HX_STACK_LINE(101)
		::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::__alphaTable = tmp2;
	}
	HX_STACK_LINE(105)
	int value;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(106)
	{
		HX_STACK_LINE(106)
		::lime::utils::ArrayBufferView tmp2 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::__alphaTable;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		::lime::utils::ArrayBufferView this2 = tmp2;		HX_STACK_VAR(this2,"this2");
		HX_STACK_LINE(106)
		::__hxcpp_memory_set_byte(this2->buffer->b,this2->byteOffset,(int)0);
		HX_STACK_LINE(106)
		(int)0;
	}
	HX_STACK_LINE(108)
	{
		HX_STACK_LINE(108)
		int _g = (int)1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(108)
		while((true)){
			HX_STACK_LINE(108)
			bool tmp2 = (_g < (int)256);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(108)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(108)
			if ((tmp3)){
				HX_STACK_LINE(108)
				break;
			}
			HX_STACK_LINE(108)
			int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(108)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(110)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(110)
			Float tmp6 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)72));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(110)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(110)
			Float tmp8 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)76));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(110)
			Float tmp9 = (tmp8 * (int)255);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(110)
			Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(110)
			int tmp11 = ::Math_obj::floor(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(110)
			value = tmp11;
			HX_STACK_LINE(111)
			bool tmp12 = (value > (int)255);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(111)
			if ((tmp12)){
				HX_STACK_LINE(111)
				value = (int)255;
			}
			HX_STACK_LINE(112)
			bool tmp13 = (value < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(112)
			if ((tmp13)){
				HX_STACK_LINE(112)
				value = (int)0;
			}
			HX_STACK_LINE(113)
			{
				HX_STACK_LINE(113)
				::lime::utils::ArrayBufferView tmp14 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::__alphaTable;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(113)
				::lime::utils::ArrayBufferView this2 = tmp14;		HX_STACK_VAR(this2,"this2");
				HX_STACK_LINE(113)
				::__hxcpp_memory_set_byte(this2->buffer->b,(this2->byteOffset + i),value);
				HX_STACK_LINE(113)
				value;
			}
		}
	}
	HX_STACK_LINE(117)
	::lime::utils::ArrayBufferView tmp2 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::__alphaTable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(117)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,getAlphaTable,return )

::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::getBlueTable( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","getBlueTable",0x661a9b04,"lime.math._ColorMatrix.ColorMatrix_Impl_.getBlueTable","lime/math/ColorMatrix.hx",122,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(124)
	::lime::utils::ArrayBufferView tmp = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::__blueTable;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(124)
	if ((tmp1)){
		HX_STACK_LINE(126)
		::lime::utils::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(126)
		{
			HX_STACK_LINE(126)
			::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
			HX_STACK_LINE(126)
			bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(126)
			if ((tmp3)){
				HX_STACK_LINE(126)
				::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new((int)256,(int)4);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(126)
				this2 = tmp4;
			}
			else{
				HX_STACK_LINE(126)
				bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(126)
				if ((tmp4)){
					HX_STACK_LINE(126)
					::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(126)
					{
						HX_STACK_LINE(126)
						::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(126)
						::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(126)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(126)
						int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(126)
						_this->length = tmp7;
						HX_STACK_LINE(126)
						int tmp8 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(126)
						_this->byteLength = tmp8;
						HX_STACK_LINE(126)
						::haxe::io::Bytes tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(126)
						{
							HX_STACK_LINE(126)
							::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
							HX_STACK_LINE(126)
							int tmp10 = _this->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(126)
							::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(126)
							this3 = tmp11;
							HX_STACK_LINE(126)
							tmp9 = this3;
						}
						HX_STACK_LINE(126)
						_this->buffer = tmp9;
						HX_STACK_LINE(126)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(126)
						tmp5 = _this;
					}
					HX_STACK_LINE(126)
					this2 = tmp5;
				}
				else{
					HX_STACK_LINE(126)
					bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(126)
					if ((tmp5)){
						HX_STACK_LINE(126)
						::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(126)
						{
							HX_STACK_LINE(126)
							::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(126)
							::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(126)
							cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
							HX_STACK_LINE(126)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(126)
							_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
							HX_STACK_LINE(126)
							int tmp8 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(126)
							_this->byteLength = tmp8;
							HX_STACK_LINE(126)
							::haxe::io::Bytes tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(126)
							{
								HX_STACK_LINE(126)
								::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
								HX_STACK_LINE(126)
								int tmp10 = _this->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(126)
								::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(126)
								this3 = tmp11;
								HX_STACK_LINE(126)
								tmp9 = this3;
							}
							HX_STACK_LINE(126)
							_this->buffer = tmp9;
							HX_STACK_LINE(126)
							_this->copyFromArray(((Array< Float >)(array)),null());
							HX_STACK_LINE(126)
							tmp6 = _this;
						}
						HX_STACK_LINE(126)
						this2 = tmp6;
					}
					else{
						HX_STACK_LINE(126)
						bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(126)
						if ((tmp6)){
							HX_STACK_LINE(126)
							::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(126)
							{
								HX_STACK_LINE(126)
								::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(126)
								::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(126)
								::haxe::io::Bytes tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(126)
								::haxe::io::Bytes srcData = tmp9;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(126)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(126)
								int srcLength = tmp10;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(126)
								int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(126)
								int srcByteOffset = tmp11;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(126)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(126)
								int srcElementSize = tmp12;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(126)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(126)
								int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(126)
								int tmp14 = _this->type;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(126)
								bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(126)
								if ((tmp15)){
									HX_STACK_LINE(126)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(126)
									int tmp16 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(126)
									int cloneLength = tmp16;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(126)
									::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(126)
									{
										HX_STACK_LINE(126)
										::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
										HX_STACK_LINE(126)
										int tmp18 = cloneLength;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(126)
										::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(126)
										this3 = tmp19;
										HX_STACK_LINE(126)
										tmp17 = this3;
									}
									HX_STACK_LINE(126)
									_this->buffer = tmp17;
									HX_STACK_LINE(126)
									::haxe::io::Bytes tmp18 = srcData;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(126)
									int tmp19 = srcByteOffset;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(126)
									int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(126)
									_this->buffer->blit((int)0,tmp18,tmp19,tmp20);
								}
								else{
									HX_STACK_LINE(126)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(126)
								int tmp16 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(126)
								_this->byteLength = tmp16;
								HX_STACK_LINE(126)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(126)
								_this->length = srcLength;
								HX_STACK_LINE(126)
								tmp7 = _this;
							}
							HX_STACK_LINE(126)
							this2 = tmp7;
						}
						else{
							HX_STACK_LINE(126)
							bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(126)
							if ((tmp7)){
								HX_STACK_LINE(126)
								::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(126)
								{
									HX_STACK_LINE(126)
									::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(126)
									::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(126)
									bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(126)
									if ((tmp10)){
										HX_STACK_LINE(126)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(126)
									int tmp11 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(126)
									bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(126)
									if ((tmp12)){
										HX_STACK_LINE(126)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(126)
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(126)
									int bufferByteLength = tmp13;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(126)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(126)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(126)
									bool tmp14 = true;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(126)
									if ((tmp14)){
										HX_STACK_LINE(126)
										int tmp15 = bufferByteLength;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(126)
										newByteLength = tmp15;
										HX_STACK_LINE(126)
										int tmp16 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(126)
										bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(126)
										if ((tmp17)){
											HX_STACK_LINE(126)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(126)
										bool tmp18 = (newByteLength < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(126)
										if ((tmp18)){
											HX_STACK_LINE(126)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(126)
										int tmp15 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(126)
										newByteLength = tmp15;
										HX_STACK_LINE(126)
										int tmp16 = newByteLength;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(126)
										int newRange = tmp16;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(126)
										bool tmp17 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(126)
										if ((tmp17)){
											HX_STACK_LINE(126)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(126)
									_this->buffer = null();
									HX_STACK_LINE(126)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(126)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(126)
									Float tmp15 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(126)
									int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(126)
									_this->length = tmp16;
									HX_STACK_LINE(126)
									tmp8 = _this;
								}
								HX_STACK_LINE(126)
								this2 = tmp8;
							}
							else{
								HX_STACK_LINE(126)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
							}
						}
					}
				}
			}
			HX_STACK_LINE(126)
			tmp2 = this2;
		}
		HX_STACK_LINE(126)
		::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::__blueTable = tmp2;
	}
	HX_STACK_LINE(130)
	int value;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(132)
	{
		HX_STACK_LINE(132)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(132)
		while((true)){
			HX_STACK_LINE(132)
			bool tmp2 = (_g < (int)256);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(132)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(132)
			if ((tmp3)){
				HX_STACK_LINE(132)
				break;
			}
			HX_STACK_LINE(132)
			int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(132)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(134)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(134)
			Float tmp6 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)48));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(134)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(134)
			Float tmp8 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)56));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(134)
			Float tmp9 = (tmp8 * (int)255);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(134)
			Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(134)
			int tmp11 = ::Math_obj::floor(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(134)
			value = tmp11;
			HX_STACK_LINE(135)
			bool tmp12 = (value > (int)255);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(135)
			if ((tmp12)){
				HX_STACK_LINE(135)
				value = (int)255;
			}
			HX_STACK_LINE(136)
			bool tmp13 = (value < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(136)
			if ((tmp13)){
				HX_STACK_LINE(136)
				value = (int)0;
			}
			HX_STACK_LINE(137)
			{
				HX_STACK_LINE(137)
				::lime::utils::ArrayBufferView tmp14 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::__blueTable;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(137)
				::lime::utils::ArrayBufferView this2 = tmp14;		HX_STACK_VAR(this2,"this2");
				HX_STACK_LINE(137)
				::__hxcpp_memory_set_byte(this2->buffer->b,(this2->byteOffset + i),value);
				HX_STACK_LINE(137)
				value;
			}
		}
	}
	HX_STACK_LINE(141)
	::lime::utils::ArrayBufferView tmp2 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::__blueTable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(141)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,getBlueTable,return )

::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::getGreenTable( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","getGreenTable",0xf983c45b,"lime.math._ColorMatrix.ColorMatrix_Impl_.getGreenTable","lime/math/ColorMatrix.hx",146,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(148)
	::lime::utils::ArrayBufferView tmp = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::__greenTable;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(148)
	if ((tmp1)){
		HX_STACK_LINE(150)
		::lime::utils::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(150)
		{
			HX_STACK_LINE(150)
			::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
			HX_STACK_LINE(150)
			bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(150)
			if ((tmp3)){
				HX_STACK_LINE(150)
				::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new((int)256,(int)4);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(150)
				this2 = tmp4;
			}
			else{
				HX_STACK_LINE(150)
				bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(150)
				if ((tmp4)){
					HX_STACK_LINE(150)
					::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(150)
					{
						HX_STACK_LINE(150)
						::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(150)
						::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(150)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(150)
						int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(150)
						_this->length = tmp7;
						HX_STACK_LINE(150)
						int tmp8 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(150)
						_this->byteLength = tmp8;
						HX_STACK_LINE(150)
						::haxe::io::Bytes tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(150)
						{
							HX_STACK_LINE(150)
							::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
							HX_STACK_LINE(150)
							int tmp10 = _this->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(150)
							::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(150)
							this3 = tmp11;
							HX_STACK_LINE(150)
							tmp9 = this3;
						}
						HX_STACK_LINE(150)
						_this->buffer = tmp9;
						HX_STACK_LINE(150)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(150)
						tmp5 = _this;
					}
					HX_STACK_LINE(150)
					this2 = tmp5;
				}
				else{
					HX_STACK_LINE(150)
					bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(150)
					if ((tmp5)){
						HX_STACK_LINE(150)
						::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(150)
						{
							HX_STACK_LINE(150)
							::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(150)
							::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(150)
							cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
							HX_STACK_LINE(150)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(150)
							_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
							HX_STACK_LINE(150)
							int tmp8 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(150)
							_this->byteLength = tmp8;
							HX_STACK_LINE(150)
							::haxe::io::Bytes tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(150)
							{
								HX_STACK_LINE(150)
								::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
								HX_STACK_LINE(150)
								int tmp10 = _this->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(150)
								::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(150)
								this3 = tmp11;
								HX_STACK_LINE(150)
								tmp9 = this3;
							}
							HX_STACK_LINE(150)
							_this->buffer = tmp9;
							HX_STACK_LINE(150)
							_this->copyFromArray(((Array< Float >)(array)),null());
							HX_STACK_LINE(150)
							tmp6 = _this;
						}
						HX_STACK_LINE(150)
						this2 = tmp6;
					}
					else{
						HX_STACK_LINE(150)
						bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(150)
						if ((tmp6)){
							HX_STACK_LINE(150)
							::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(150)
							{
								HX_STACK_LINE(150)
								::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(150)
								::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(150)
								::haxe::io::Bytes tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(150)
								::haxe::io::Bytes srcData = tmp9;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(150)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(150)
								int srcLength = tmp10;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(150)
								int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(150)
								int srcByteOffset = tmp11;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(150)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(150)
								int srcElementSize = tmp12;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(150)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(150)
								int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(150)
								int tmp14 = _this->type;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(150)
								bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(150)
								if ((tmp15)){
									HX_STACK_LINE(150)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(150)
									int tmp16 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(150)
									int cloneLength = tmp16;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(150)
									::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(150)
									{
										HX_STACK_LINE(150)
										::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
										HX_STACK_LINE(150)
										int tmp18 = cloneLength;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(150)
										::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(150)
										this3 = tmp19;
										HX_STACK_LINE(150)
										tmp17 = this3;
									}
									HX_STACK_LINE(150)
									_this->buffer = tmp17;
									HX_STACK_LINE(150)
									::haxe::io::Bytes tmp18 = srcData;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(150)
									int tmp19 = srcByteOffset;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(150)
									int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(150)
									_this->buffer->blit((int)0,tmp18,tmp19,tmp20);
								}
								else{
									HX_STACK_LINE(150)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(150)
								int tmp16 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(150)
								_this->byteLength = tmp16;
								HX_STACK_LINE(150)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(150)
								_this->length = srcLength;
								HX_STACK_LINE(150)
								tmp7 = _this;
							}
							HX_STACK_LINE(150)
							this2 = tmp7;
						}
						else{
							HX_STACK_LINE(150)
							bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(150)
							if ((tmp7)){
								HX_STACK_LINE(150)
								::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(150)
								{
									HX_STACK_LINE(150)
									::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(150)
									::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(150)
									bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(150)
									if ((tmp10)){
										HX_STACK_LINE(150)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(150)
									int tmp11 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(150)
									bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(150)
									if ((tmp12)){
										HX_STACK_LINE(150)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(150)
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(150)
									int bufferByteLength = tmp13;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(150)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(150)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(150)
									bool tmp14 = true;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(150)
									if ((tmp14)){
										HX_STACK_LINE(150)
										int tmp15 = bufferByteLength;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(150)
										newByteLength = tmp15;
										HX_STACK_LINE(150)
										int tmp16 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(150)
										bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(150)
										if ((tmp17)){
											HX_STACK_LINE(150)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(150)
										bool tmp18 = (newByteLength < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(150)
										if ((tmp18)){
											HX_STACK_LINE(150)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(150)
										int tmp15 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(150)
										newByteLength = tmp15;
										HX_STACK_LINE(150)
										int tmp16 = newByteLength;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(150)
										int newRange = tmp16;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(150)
										bool tmp17 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(150)
										if ((tmp17)){
											HX_STACK_LINE(150)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(150)
									_this->buffer = null();
									HX_STACK_LINE(150)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(150)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(150)
									Float tmp15 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(150)
									int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(150)
									_this->length = tmp16;
									HX_STACK_LINE(150)
									tmp8 = _this;
								}
								HX_STACK_LINE(150)
								this2 = tmp8;
							}
							else{
								HX_STACK_LINE(150)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
							}
						}
					}
				}
			}
			HX_STACK_LINE(150)
			tmp2 = this2;
		}
		HX_STACK_LINE(150)
		::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::__greenTable = tmp2;
	}
	HX_STACK_LINE(154)
	int value;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(156)
	{
		HX_STACK_LINE(156)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(156)
		while((true)){
			HX_STACK_LINE(156)
			bool tmp2 = (_g < (int)256);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(156)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(156)
			if ((tmp3)){
				HX_STACK_LINE(156)
				break;
			}
			HX_STACK_LINE(156)
			int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(156)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(158)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(158)
			Float tmp6 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)24));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(158)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(158)
			Float tmp8 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)36));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(158)
			Float tmp9 = (tmp8 * (int)255);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(158)
			Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(158)
			int tmp11 = ::Math_obj::floor(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(158)
			value = tmp11;
			HX_STACK_LINE(159)
			bool tmp12 = (value > (int)255);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(159)
			if ((tmp12)){
				HX_STACK_LINE(159)
				value = (int)255;
			}
			HX_STACK_LINE(160)
			bool tmp13 = (value < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(160)
			if ((tmp13)){
				HX_STACK_LINE(160)
				value = (int)0;
			}
			HX_STACK_LINE(161)
			{
				HX_STACK_LINE(161)
				::lime::utils::ArrayBufferView tmp14 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::__greenTable;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(161)
				::lime::utils::ArrayBufferView this2 = tmp14;		HX_STACK_VAR(this2,"this2");
				HX_STACK_LINE(161)
				::__hxcpp_memory_set_byte(this2->buffer->b,(this2->byteOffset + i),value);
				HX_STACK_LINE(161)
				value;
			}
		}
	}
	HX_STACK_LINE(165)
	::lime::utils::ArrayBufferView tmp2 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::__greenTable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(165)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,getGreenTable,return )

::lime::utils::ArrayBufferView ColorMatrix_Impl__obj::getRedTable( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","getRedTable",0x2b90530d,"lime.math._ColorMatrix.ColorMatrix_Impl_.getRedTable","lime/math/ColorMatrix.hx",170,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(172)
	::lime::utils::ArrayBufferView tmp = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::__redTable;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(172)
	if ((tmp1)){
		HX_STACK_LINE(174)
		::lime::utils::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(174)
		{
			HX_STACK_LINE(174)
			::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
			HX_STACK_LINE(174)
			bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(174)
			if ((tmp3)){
				HX_STACK_LINE(174)
				::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new((int)256,(int)4);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(174)
				this2 = tmp4;
			}
			else{
				HX_STACK_LINE(174)
				bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(174)
				if ((tmp4)){
					HX_STACK_LINE(174)
					::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(174)
					{
						HX_STACK_LINE(174)
						::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(174)
						::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(174)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(174)
						int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(174)
						_this->length = tmp7;
						HX_STACK_LINE(174)
						int tmp8 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(174)
						_this->byteLength = tmp8;
						HX_STACK_LINE(174)
						::haxe::io::Bytes tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(174)
						{
							HX_STACK_LINE(174)
							::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
							HX_STACK_LINE(174)
							int tmp10 = _this->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(174)
							::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(174)
							this3 = tmp11;
							HX_STACK_LINE(174)
							tmp9 = this3;
						}
						HX_STACK_LINE(174)
						_this->buffer = tmp9;
						HX_STACK_LINE(174)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(174)
						tmp5 = _this;
					}
					HX_STACK_LINE(174)
					this2 = tmp5;
				}
				else{
					HX_STACK_LINE(174)
					bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(174)
					if ((tmp5)){
						HX_STACK_LINE(174)
						::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(174)
						{
							HX_STACK_LINE(174)
							::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(174)
							::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(174)
							cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
							HX_STACK_LINE(174)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(174)
							_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
							HX_STACK_LINE(174)
							int tmp8 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(174)
							_this->byteLength = tmp8;
							HX_STACK_LINE(174)
							::haxe::io::Bytes tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(174)
							{
								HX_STACK_LINE(174)
								::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
								HX_STACK_LINE(174)
								int tmp10 = _this->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(174)
								::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(174)
								this3 = tmp11;
								HX_STACK_LINE(174)
								tmp9 = this3;
							}
							HX_STACK_LINE(174)
							_this->buffer = tmp9;
							HX_STACK_LINE(174)
							_this->copyFromArray(((Array< Float >)(array)),null());
							HX_STACK_LINE(174)
							tmp6 = _this;
						}
						HX_STACK_LINE(174)
						this2 = tmp6;
					}
					else{
						HX_STACK_LINE(174)
						bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(174)
						if ((tmp6)){
							HX_STACK_LINE(174)
							::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(174)
							{
								HX_STACK_LINE(174)
								::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(174)
								::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(174)
								::haxe::io::Bytes tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(174)
								::haxe::io::Bytes srcData = tmp9;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(174)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(174)
								int srcLength = tmp10;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(174)
								int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(174)
								int srcByteOffset = tmp11;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(174)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(174)
								int srcElementSize = tmp12;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(174)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(174)
								int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(174)
								int tmp14 = _this->type;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(174)
								bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(174)
								if ((tmp15)){
									HX_STACK_LINE(174)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(174)
									int tmp16 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(174)
									int cloneLength = tmp16;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(174)
									::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(174)
									{
										HX_STACK_LINE(174)
										::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
										HX_STACK_LINE(174)
										int tmp18 = cloneLength;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(174)
										::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(174)
										this3 = tmp19;
										HX_STACK_LINE(174)
										tmp17 = this3;
									}
									HX_STACK_LINE(174)
									_this->buffer = tmp17;
									HX_STACK_LINE(174)
									::haxe::io::Bytes tmp18 = srcData;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(174)
									int tmp19 = srcByteOffset;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(174)
									int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(174)
									_this->buffer->blit((int)0,tmp18,tmp19,tmp20);
								}
								else{
									HX_STACK_LINE(174)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(174)
								int tmp16 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(174)
								_this->byteLength = tmp16;
								HX_STACK_LINE(174)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(174)
								_this->length = srcLength;
								HX_STACK_LINE(174)
								tmp7 = _this;
							}
							HX_STACK_LINE(174)
							this2 = tmp7;
						}
						else{
							HX_STACK_LINE(174)
							bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(174)
							if ((tmp7)){
								HX_STACK_LINE(174)
								::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(174)
								{
									HX_STACK_LINE(174)
									::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(174)
									::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(174)
									bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(174)
									if ((tmp10)){
										HX_STACK_LINE(174)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(174)
									int tmp11 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(174)
									bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(174)
									if ((tmp12)){
										HX_STACK_LINE(174)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(174)
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(174)
									int bufferByteLength = tmp13;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(174)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(174)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(174)
									bool tmp14 = true;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(174)
									if ((tmp14)){
										HX_STACK_LINE(174)
										int tmp15 = bufferByteLength;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(174)
										newByteLength = tmp15;
										HX_STACK_LINE(174)
										int tmp16 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(174)
										bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(174)
										if ((tmp17)){
											HX_STACK_LINE(174)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(174)
										bool tmp18 = (newByteLength < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(174)
										if ((tmp18)){
											HX_STACK_LINE(174)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(174)
										int tmp15 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(174)
										newByteLength = tmp15;
										HX_STACK_LINE(174)
										int tmp16 = newByteLength;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(174)
										int newRange = tmp16;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(174)
										bool tmp17 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(174)
										if ((tmp17)){
											HX_STACK_LINE(174)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(174)
									_this->buffer = null();
									HX_STACK_LINE(174)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(174)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(174)
									Float tmp15 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(174)
									int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(174)
									_this->length = tmp16;
									HX_STACK_LINE(174)
									tmp8 = _this;
								}
								HX_STACK_LINE(174)
								this2 = tmp8;
							}
							else{
								HX_STACK_LINE(174)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
							}
						}
					}
				}
			}
			HX_STACK_LINE(174)
			tmp2 = this2;
		}
		HX_STACK_LINE(174)
		::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::__redTable = tmp2;
	}
	HX_STACK_LINE(178)
	int value;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(180)
	{
		HX_STACK_LINE(180)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(180)
		while((true)){
			HX_STACK_LINE(180)
			bool tmp2 = (_g < (int)256);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(180)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(180)
			if ((tmp3)){
				HX_STACK_LINE(180)
				break;
			}
			HX_STACK_LINE(180)
			int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(180)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(182)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(182)
			Float tmp6 = ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(182)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(182)
			Float tmp8 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)16));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(182)
			Float tmp9 = (tmp8 * (int)255);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(182)
			Float tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(182)
			int tmp11 = ::Math_obj::floor(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(182)
			value = tmp11;
			HX_STACK_LINE(183)
			bool tmp12 = (value > (int)255);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(183)
			if ((tmp12)){
				HX_STACK_LINE(183)
				value = (int)255;
			}
			HX_STACK_LINE(184)
			bool tmp13 = (value < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(184)
			if ((tmp13)){
				HX_STACK_LINE(184)
				value = (int)0;
			}
			HX_STACK_LINE(185)
			{
				HX_STACK_LINE(185)
				::lime::utils::ArrayBufferView tmp14 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::__redTable;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(185)
				::lime::utils::ArrayBufferView this2 = tmp14;		HX_STACK_VAR(this2,"this2");
				HX_STACK_LINE(185)
				::__hxcpp_memory_set_byte(this2->buffer->b,(this2->byteOffset + i),value);
				HX_STACK_LINE(185)
				value;
			}
		}
	}
	HX_STACK_LINE(189)
	::lime::utils::ArrayBufferView tmp2 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::__redTable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(189)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,getRedTable,return )

Dynamic ColorMatrix_Impl__obj::__toFlashColorTransform( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","__toFlashColorTransform",0x02badfd8,"lime.math._ColorMatrix.ColorMatrix_Impl_.__toFlashColorTransform","lime/math/ColorMatrix.hx",199,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(199)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,__toFlashColorTransform,return )

Float ColorMatrix_Impl__obj::get_alphaMultiplier( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_alphaMultiplier",0xa15814f0,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_alphaMultiplier","lime/math/ColorMatrix.hx",212,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(214)
	Float tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)72));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(214)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_alphaMultiplier,return )

Float ColorMatrix_Impl__obj::set_alphaMultiplier( ::lime::utils::ArrayBufferView this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_alphaMultiplier",0xddf507fc,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_alphaMultiplier","lime/math/ColorMatrix.hx",219,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(221)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(221)
	{
		HX_STACK_LINE(221)
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)72),value);
		HX_STACK_LINE(221)
		tmp = value;
	}
	HX_STACK_LINE(221)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_alphaMultiplier,return )

Float ColorMatrix_Impl__obj::get_alphaOffset( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_alphaOffset",0xff81a182,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_alphaOffset","lime/math/ColorMatrix.hx",226,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(228)
	Float tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)76));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(228)
	Float tmp1 = (tmp * (int)255);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(228)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_alphaOffset,return )

Float ColorMatrix_Impl__obj::set_alphaOffset( ::lime::utils::ArrayBufferView this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_alphaOffset",0xfb4d1e8e,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_alphaOffset","lime/math/ColorMatrix.hx",233,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(235)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(235)
	{
		HX_STACK_LINE(235)
		Float tmp1 = (Float(value) / Float((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(235)
		Float val = tmp1;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(235)
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)76),val);
		HX_STACK_LINE(235)
		tmp = val;
	}
	HX_STACK_LINE(235)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_alphaOffset,return )

Float ColorMatrix_Impl__obj::get_blueMultiplier( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_blueMultiplier",0x69726b6a,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_blueMultiplier","lime/math/ColorMatrix.hx",240,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(242)
	Float tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)48));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(242)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_blueMultiplier,return )

Float ColorMatrix_Impl__obj::set_blueMultiplier( ::lime::utils::ArrayBufferView this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_blueMultiplier",0x46219dde,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_blueMultiplier","lime/math/ColorMatrix.hx",247,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(249)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(249)
	{
		HX_STACK_LINE(249)
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)48),value);
		HX_STACK_LINE(249)
		tmp = value;
	}
	HX_STACK_LINE(249)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_blueMultiplier,return )

Float ColorMatrix_Impl__obj::get_blueOffset( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_blueOffset",0x2f5cb2fc,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_blueOffset","lime/math/ColorMatrix.hx",254,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(256)
	Float tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)56));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(256)
	Float tmp1 = (tmp * (int)255);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(256)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_blueOffset,return )

Float ColorMatrix_Impl__obj::set_blueOffset( ::lime::utils::ArrayBufferView this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_blueOffset",0x4f7c9b70,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_blueOffset","lime/math/ColorMatrix.hx",261,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(263)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(263)
	{
		HX_STACK_LINE(263)
		Float tmp1 = (Float(value) / Float((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(263)
		Float val = tmp1;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(263)
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)56),val);
		HX_STACK_LINE(263)
		tmp = val;
	}
	HX_STACK_LINE(263)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_blueOffset,return )

int ColorMatrix_Impl__obj::get_color( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_color",0x1b460a94,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_color","lime/math/ColorMatrix.hx",268,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(270)
	Float tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(270)
	Float tmp1 = (tmp * (int)255);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(270)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(270)
	int tmp3 = (int(tmp2) << int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(270)
	Float tmp4 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)36));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(270)
	Float tmp5 = (tmp4 * (int)255);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(270)
	int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(270)
	int tmp7 = (int(tmp6) << int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(270)
	int tmp8 = (int(tmp3) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(270)
	Float tmp9 = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)56));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(270)
	Float tmp10 = (tmp9 * (int)255);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(270)
	int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(270)
	int tmp12 = (int(tmp8) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(270)
	return tmp12;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_color,return )

int ColorMatrix_Impl__obj::set_color( ::lime::utils::ArrayBufferView this1,int value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_color",0xfe96f6a0,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_color","lime/math/ColorMatrix.hx",275,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(277)
	{
		HX_STACK_LINE(277)
		int tmp = (int(value) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(277)
		int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(277)
		Float tmp2 = (Float(tmp1) / Float((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(277)
		Float val = tmp2;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(277)
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)16),val);
		HX_STACK_LINE(277)
		val;
	}
	HX_STACK_LINE(278)
	{
		HX_STACK_LINE(278)
		int tmp = (int(value) >> int((int)8));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(278)
		int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(278)
		Float tmp2 = (Float(tmp1) / Float((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(278)
		Float val = tmp2;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(278)
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)36),val);
		HX_STACK_LINE(278)
		val;
	}
	HX_STACK_LINE(279)
	{
		HX_STACK_LINE(279)
		int tmp = (int(value) & int((int)255));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(279)
		Float tmp1 = (Float(tmp) / Float((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(279)
		Float val = tmp1;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(279)
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)56),val);
		HX_STACK_LINE(279)
		val;
	}
	HX_STACK_LINE(281)
	{
		HX_STACK_LINE(281)
		::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,(int)0);
		HX_STACK_LINE(281)
		(int)0;
	}
	HX_STACK_LINE(282)
	{
		HX_STACK_LINE(282)
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)24),(int)0);
		HX_STACK_LINE(282)
		(int)0;
	}
	HX_STACK_LINE(283)
	{
		HX_STACK_LINE(283)
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)48),(int)0);
		HX_STACK_LINE(283)
		(int)0;
	}
	HX_STACK_LINE(285)
	::lime::utils::ArrayBufferView tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(285)
	int tmp1 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::get_color(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(285)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_color,return )

Float ColorMatrix_Impl__obj::get_greenMultiplier( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_greenMultiplier",0x76158c95,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_greenMultiplier","lime/math/ColorMatrix.hx",290,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(292)
	Float tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)24));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(292)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_greenMultiplier,return )

Float ColorMatrix_Impl__obj::set_greenMultiplier( ::lime::utils::ArrayBufferView this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_greenMultiplier",0xb2b27fa1,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_greenMultiplier","lime/math/ColorMatrix.hx",297,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(299)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(299)
	{
		HX_STACK_LINE(299)
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)24),value);
		HX_STACK_LINE(299)
		tmp = value;
	}
	HX_STACK_LINE(299)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_greenMultiplier,return )

Float ColorMatrix_Impl__obj::get_greenOffset( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_greenOffset",0xe71722a7,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_greenOffset","lime/math/ColorMatrix.hx",304,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(306)
	Float tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)36));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(306)
	Float tmp1 = (tmp * (int)255);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(306)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_greenOffset,return )

Float ColorMatrix_Impl__obj::set_greenOffset( ::lime::utils::ArrayBufferView this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_greenOffset",0xe2e29fb3,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_greenOffset","lime/math/ColorMatrix.hx",311,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(313)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(313)
	{
		HX_STACK_LINE(313)
		Float tmp1 = (Float(value) / Float((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(313)
		Float val = tmp1;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(313)
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)36),val);
		HX_STACK_LINE(313)
		tmp = val;
	}
	HX_STACK_LINE(313)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_greenOffset,return )

Float ColorMatrix_Impl__obj::get_redMultiplier( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_redMultiplier",0x58c9a663,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_redMultiplier","lime/math/ColorMatrix.hx",318,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(320)
	Float tmp = ::__hxcpp_memory_get_float(this1->buffer->b,this1->byteOffset);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(320)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_redMultiplier,return )

Float ColorMatrix_Impl__obj::set_redMultiplier( ::lime::utils::ArrayBufferView this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_redMultiplier",0x7c377e6f,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_redMultiplier","lime/math/ColorMatrix.hx",325,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(327)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(327)
	{
		HX_STACK_LINE(327)
		::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,value);
		HX_STACK_LINE(327)
		tmp = value;
	}
	HX_STACK_LINE(327)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_redMultiplier,return )

Float ColorMatrix_Impl__obj::get_redOffset( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_redOffset",0xd26abd75,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_redOffset","lime/math/ColorMatrix.hx",332,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(334)
	Float tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(334)
	Float tmp1 = (tmp * (int)255);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(334)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_redOffset,return )

Float ColorMatrix_Impl__obj::set_redOffset( ::lime::utils::ArrayBufferView this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_redOffset",0x17709f81,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_redOffset","lime/math/ColorMatrix.hx",339,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(341)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(341)
	{
		HX_STACK_LINE(341)
		Float tmp1 = (Float(value) / Float((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(341)
		Float val = tmp1;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(341)
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)16),val);
		HX_STACK_LINE(341)
		tmp = val;
	}
	HX_STACK_LINE(341)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_redOffset,return )

Float ColorMatrix_Impl__obj::get( ::lime::utils::ArrayBufferView this1,int index){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get",0xe0573df0,"lime.math._ColorMatrix.ColorMatrix_Impl_.get","lime/math/ColorMatrix.hx",346,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(348)
	Float tmp = ::__hxcpp_memory_get_float(this1->buffer->b,(this1->byteOffset + (index * (int)4)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(348)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,get,return )

Float ColorMatrix_Impl__obj::set( ::lime::utils::ArrayBufferView this1,int index,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set",0xe06058fc,"lime.math._ColorMatrix.ColorMatrix_Impl_.set","lime/math/ColorMatrix.hx",353,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(355)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(355)
	{
		HX_STACK_LINE(355)
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (index * (int)4)),value);
		HX_STACK_LINE(355)
		tmp = value;
	}
	HX_STACK_LINE(355)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ColorMatrix_Impl__obj,set,return )


ColorMatrix_Impl__obj::ColorMatrix_Impl__obj()
{
}

bool ColorMatrix_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { outValue = clone_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { outValue = concat_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { outValue = copyFrom_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"identity") ) { outValue = identity_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_color") ) { outValue = get_color_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_color") ) { outValue = set_color_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getRedTable") ) { outValue = getRedTable_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getBlueTable") ) { outValue = getBlueTable_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getAlphaTable") ) { outValue = getAlphaTable_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getGreenTable") ) { outValue = getGreenTable_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_redOffset") ) { outValue = get_redOffset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_redOffset") ) { outValue = set_redOffset_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_blueOffset") ) { outValue = get_blueOffset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_blueOffset") ) { outValue = set_blueOffset_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_alphaOffset") ) { outValue = get_alphaOffset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_alphaOffset") ) { outValue = set_alphaOffset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_greenOffset") ) { outValue = get_greenOffset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_greenOffset") ) { outValue = set_greenOffset_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_redMultiplier") ) { outValue = get_redMultiplier_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_redMultiplier") ) { outValue = set_redMultiplier_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_blueMultiplier") ) { outValue = get_blueMultiplier_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_blueMultiplier") ) { outValue = set_blueMultiplier_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_alphaMultiplier") ) { outValue = get_alphaMultiplier_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_alphaMultiplier") ) { outValue = set_alphaMultiplier_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_greenMultiplier") ) { outValue = get_greenMultiplier_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_greenMultiplier") ) { outValue = set_greenMultiplier_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__toFlashColorTransform") ) { outValue = __toFlashColorTransform_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(void *) &ColorMatrix_Impl__obj::__alphaTable,HX_HCSTRING("__alphaTable","\xf0","\x86","\x1c","\x64")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(void *) &ColorMatrix_Impl__obj::__blueTable,HX_HCSTRING("__blueTable","\xf4","\x7f","\x4a","\x11")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(void *) &ColorMatrix_Impl__obj::__greenTable,HX_HCSTRING("__greenTable","\x6b","\x31","\x3c","\x18")},
	{hx::fsObject /*Array< Float >*/ ,(void *) &ColorMatrix_Impl__obj::__identity,HX_HCSTRING("__identity","\x5e","\xb8","\x67","\x5c")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(void *) &ColorMatrix_Impl__obj::__redTable,HX_HCSTRING("__redTable","\x1d","\x5c","\x68","\x1d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorMatrix_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ColorMatrix_Impl__obj::__alphaTable,"__alphaTable");
	HX_MARK_MEMBER_NAME(ColorMatrix_Impl__obj::__blueTable,"__blueTable");
	HX_MARK_MEMBER_NAME(ColorMatrix_Impl__obj::__greenTable,"__greenTable");
	HX_MARK_MEMBER_NAME(ColorMatrix_Impl__obj::__identity,"__identity");
	HX_MARK_MEMBER_NAME(ColorMatrix_Impl__obj::__redTable,"__redTable");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorMatrix_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ColorMatrix_Impl__obj::__alphaTable,"__alphaTable");
	HX_VISIT_MEMBER_NAME(ColorMatrix_Impl__obj::__blueTable,"__blueTable");
	HX_VISIT_MEMBER_NAME(ColorMatrix_Impl__obj::__greenTable,"__greenTable");
	HX_VISIT_MEMBER_NAME(ColorMatrix_Impl__obj::__identity,"__identity");
	HX_VISIT_MEMBER_NAME(ColorMatrix_Impl__obj::__redTable,"__redTable");
};

#endif

hx::Class ColorMatrix_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__alphaTable","\xf0","\x86","\x1c","\x64"),
	HX_HCSTRING("__blueTable","\xf4","\x7f","\x4a","\x11"),
	HX_HCSTRING("__greenTable","\x6b","\x31","\x3c","\x18"),
	HX_HCSTRING("__identity","\x5e","\xb8","\x67","\x5c"),
	HX_HCSTRING("__redTable","\x1d","\x5c","\x68","\x1d"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("identity","\x3e","\x45","\x2f","\xb9"),
	HX_HCSTRING("getAlphaTable","\x06","\x68","\xfb","\x87"),
	HX_HCSTRING("getBlueTable","\x9e","\xd3","\x74","\xf2"),
	HX_HCSTRING("getGreenTable","\x81","\x12","\x1b","\x3c"),
	HX_HCSTRING("getRedTable","\xb3","\xab","\x23","\xa0"),
	HX_HCSTRING("__toFlashColorTransform","\x7e","\x99","\xc3","\xed"),
	HX_HCSTRING("get_alphaMultiplier","\x96","\x83","\x8d","\x25"),
	HX_HCSTRING("set_alphaMultiplier","\xa2","\x76","\x2a","\x62"),
	HX_HCSTRING("get_alphaOffset","\x28","\x45","\x25","\x91"),
	HX_HCSTRING("set_alphaOffset","\x34","\xc2","\xf0","\x8c"),
	HX_HCSTRING("get_blueMultiplier","\x84","\x13","\x30","\x6b"),
	HX_HCSTRING("set_blueMultiplier","\xf8","\x45","\xdf","\x47"),
	HX_HCSTRING("get_blueOffset","\x16","\xc6","\x29","\x31"),
	HX_HCSTRING("set_blueOffset","\x8a","\xae","\x49","\x51"),
	HX_HCSTRING("get_color","\xba","\xcd","\x05","\x8e"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("get_greenMultiplier","\x3b","\xfb","\x4a","\xfa"),
	HX_HCSTRING("set_greenMultiplier","\x47","\xee","\xe7","\x36"),
	HX_HCSTRING("get_greenOffset","\x4d","\xc6","\xba","\x78"),
	HX_HCSTRING("set_greenOffset","\x59","\x43","\x86","\x74"),
	HX_HCSTRING("get_redMultiplier","\x89","\xff","\x59","\x55"),
	HX_HCSTRING("set_redMultiplier","\x95","\xd7","\xc7","\x78"),
	HX_HCSTRING("get_redOffset","\x9b","\x0b","\x02","\x15"),
	HX_HCSTRING("set_redOffset","\xa7","\xed","\x07","\x5a"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

void ColorMatrix_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.math._ColorMatrix.ColorMatrix_Impl_","\xc8","\xe8","\xe8","\x0e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ColorMatrix_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ColorMatrix_Impl__obj >;
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

void ColorMatrix_Impl__obj::__boot()
{
	__identity= Array_obj< Float >::__new().Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0));
}

} // end namespace lime
} // end namespace math
} // end namespace _ColorMatrix
