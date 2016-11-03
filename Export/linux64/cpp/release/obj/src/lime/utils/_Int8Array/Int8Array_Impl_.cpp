#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_lime_utils__Int8Array_Int8Array_Impl_
#include <lime/utils/_Int8Array/Int8Array_Impl_.h>
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
namespace utils{
namespace _Int8Array{

Void Int8Array_Impl__obj::__construct()
{
	return null();
}

//Int8Array_Impl__obj::~Int8Array_Impl__obj() { }

Dynamic Int8Array_Impl__obj::__CreateEmpty() { return  new Int8Array_Impl__obj; }
hx::ObjectPtr< Int8Array_Impl__obj > Int8Array_Impl__obj::__new()
{  hx::ObjectPtr< Int8Array_Impl__obj > _result_ = new Int8Array_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Int8Array_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Int8Array_Impl__obj > _result_ = new Int8Array_Impl__obj();
	_result_->__construct();
	return _result_;}

int Int8Array_Impl__obj::BYTES_PER_ELEMENT;

::lime::utils::ArrayBufferView Int8Array_Impl__obj::subarray( ::lime::utils::ArrayBufferView this1,int begin,Dynamic end){
	HX_STACK_FRAME("lime.utils._Int8Array.Int8Array_Impl_","subarray",0xb8bbe1fe,"lime.utils._Int8Array.Int8Array_Impl_.subarray","lime/utils/Int8Array.hx",96,0x4ea19046)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(96)
	::lime::utils::ArrayBufferView tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	{
		HX_STACK_LINE(96)
		bool tmp1 = (end == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		if ((tmp1)){
			HX_STACK_LINE(96)
			(end == this1->length);
		}
		HX_STACK_LINE(96)
		int tmp2 = (end - begin);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(96)
		int len = tmp2;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(96)
		int tmp3 = (begin * this1->bytesPerElement);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(96)
		int tmp4 = this1->byteOffset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(96)
		int tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(96)
		int byte_offset = tmp5;		HX_STACK_VAR(byte_offset,"byte_offset");
		HX_STACK_LINE(96)
		::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(96)
		{
			HX_STACK_LINE(96)
			int _g = this1->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(96)
			int tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(96)
			switch( (int)(tmp7)){
				case (int)1: {
					HX_STACK_LINE(96)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(96)
					::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(96)
					bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(96)
					if ((tmp8)){
						HX_STACK_LINE(96)
						::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)1);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(96)
						this2 = tmp9;
					}
					else{
						HX_STACK_LINE(96)
						bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(96)
						if ((tmp9)){
							HX_STACK_LINE(96)
							::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(96)
							{
								HX_STACK_LINE(96)
								::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(96)
								::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(96)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(96)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(96)
								_this->length = tmp12;
								HX_STACK_LINE(96)
								int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(96)
								_this->byteLength = tmp13;
								HX_STACK_LINE(96)
								::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(96)
								{
									HX_STACK_LINE(96)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(96)
									int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(96)
									::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(96)
									this3 = tmp16;
									HX_STACK_LINE(96)
									tmp14 = this3;
								}
								HX_STACK_LINE(96)
								_this->buffer = tmp14;
								HX_STACK_LINE(96)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(96)
								tmp10 = _this;
							}
							HX_STACK_LINE(96)
							this2 = tmp10;
						}
						else{
							HX_STACK_LINE(96)
							bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(96)
							if ((tmp10)){
								HX_STACK_LINE(96)
								::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(96)
								{
									HX_STACK_LINE(96)
									::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(96)
									::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(96)
									cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
									HX_STACK_LINE(96)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(96)
									_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
									HX_STACK_LINE(96)
									int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(96)
									_this->byteLength = tmp13;
									HX_STACK_LINE(96)
									::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(96)
									{
										HX_STACK_LINE(96)
										::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
										HX_STACK_LINE(96)
										int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(96)
										::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(96)
										this3 = tmp16;
										HX_STACK_LINE(96)
										tmp14 = this3;
									}
									HX_STACK_LINE(96)
									_this->buffer = tmp14;
									HX_STACK_LINE(96)
									_this->copyFromArray(((Array< Float >)(array)),null());
									HX_STACK_LINE(96)
									tmp11 = _this;
								}
								HX_STACK_LINE(96)
								this2 = tmp11;
							}
							else{
								HX_STACK_LINE(96)
								bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(96)
								if ((tmp11)){
									HX_STACK_LINE(96)
									::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(96)
									{
										HX_STACK_LINE(96)
										::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(96)
										::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(96)
										::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(96)
										::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
										HX_STACK_LINE(96)
										int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(96)
										int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
										HX_STACK_LINE(96)
										int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(96)
										int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
										HX_STACK_LINE(96)
										int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(96)
										int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
										HX_STACK_LINE(96)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(96)
										int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(96)
										int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(96)
										bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(96)
										if ((tmp20)){
											HX_STACK_LINE(96)
											int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
											HX_STACK_LINE(96)
											int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(96)
											int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
											HX_STACK_LINE(96)
											::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(96)
											{
												HX_STACK_LINE(96)
												::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
												HX_STACK_LINE(96)
												int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(96)
												::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(96)
												this3 = tmp24;
												HX_STACK_LINE(96)
												tmp22 = this3;
											}
											HX_STACK_LINE(96)
											_this->buffer = tmp22;
											HX_STACK_LINE(96)
											::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(96)
											int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(96)
											int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(96)
											_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
										}
										else{
											HX_STACK_LINE(96)
											HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
										}
										HX_STACK_LINE(96)
										int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(96)
										_this->byteLength = tmp21;
										HX_STACK_LINE(96)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(96)
										_this->length = srcLength;
										HX_STACK_LINE(96)
										tmp12 = _this;
									}
									HX_STACK_LINE(96)
									this2 = tmp12;
								}
								else{
									HX_STACK_LINE(96)
									bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(96)
									if ((tmp12)){
										HX_STACK_LINE(96)
										::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(96)
										{
											HX_STACK_LINE(96)
											::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(96)
											::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(96)
											bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(96)
											if ((tmp15)){
												HX_STACK_LINE(96)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(96)
											int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(96)
											bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(96)
											if ((tmp17)){
												HX_STACK_LINE(96)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(96)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(96)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(96)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(96)
											bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(96)
											if ((tmp18)){
												HX_STACK_LINE(96)
												int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(96)
												newByteLength = tmp19;
												HX_STACK_LINE(96)
												int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(96)
												bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(96)
												if ((tmp21)){
													HX_STACK_LINE(96)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(96)
												bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(96)
												if ((tmp22)){
													HX_STACK_LINE(96)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(96)
												int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(96)
												newByteLength = tmp19;
												HX_STACK_LINE(96)
												int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(96)
												int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(96)
												bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(96)
												if ((tmp21)){
													HX_STACK_LINE(96)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(96)
											_this->buffer = buffer;
											HX_STACK_LINE(96)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(96)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(96)
											Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(96)
											int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(96)
											_this->length = tmp20;
											HX_STACK_LINE(96)
											tmp13 = _this;
										}
										HX_STACK_LINE(96)
										this2 = tmp13;
									}
									else{
										HX_STACK_LINE(96)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
									}
								}
							}
						}
					}
					HX_STACK_LINE(96)
					tmp6 = this2;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(96)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(96)
					::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(96)
					bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(96)
					if ((tmp8)){
						HX_STACK_LINE(96)
						::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)2);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(96)
						this2 = tmp9;
					}
					else{
						HX_STACK_LINE(96)
						bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(96)
						if ((tmp9)){
							HX_STACK_LINE(96)
							::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(96)
							{
								HX_STACK_LINE(96)
								::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(96)
								::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(96)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(96)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(96)
								_this->length = tmp12;
								HX_STACK_LINE(96)
								int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(96)
								_this->byteLength = tmp13;
								HX_STACK_LINE(96)
								::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(96)
								{
									HX_STACK_LINE(96)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(96)
									int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(96)
									::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(96)
									this3 = tmp16;
									HX_STACK_LINE(96)
									tmp14 = this3;
								}
								HX_STACK_LINE(96)
								_this->buffer = tmp14;
								HX_STACK_LINE(96)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(96)
								tmp10 = _this;
							}
							HX_STACK_LINE(96)
							this2 = tmp10;
						}
						else{
							HX_STACK_LINE(96)
							bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(96)
							if ((tmp10)){
								HX_STACK_LINE(96)
								::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(96)
								{
									HX_STACK_LINE(96)
									::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(96)
									::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(96)
									cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
									HX_STACK_LINE(96)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(96)
									_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
									HX_STACK_LINE(96)
									int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(96)
									_this->byteLength = tmp13;
									HX_STACK_LINE(96)
									::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(96)
									{
										HX_STACK_LINE(96)
										::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
										HX_STACK_LINE(96)
										int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(96)
										::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(96)
										this3 = tmp16;
										HX_STACK_LINE(96)
										tmp14 = this3;
									}
									HX_STACK_LINE(96)
									_this->buffer = tmp14;
									HX_STACK_LINE(96)
									_this->copyFromArray(((Array< Float >)(array)),null());
									HX_STACK_LINE(96)
									tmp11 = _this;
								}
								HX_STACK_LINE(96)
								this2 = tmp11;
							}
							else{
								HX_STACK_LINE(96)
								bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(96)
								if ((tmp11)){
									HX_STACK_LINE(96)
									::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(96)
									{
										HX_STACK_LINE(96)
										::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(96)
										::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(96)
										::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(96)
										::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
										HX_STACK_LINE(96)
										int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(96)
										int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
										HX_STACK_LINE(96)
										int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(96)
										int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
										HX_STACK_LINE(96)
										int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(96)
										int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
										HX_STACK_LINE(96)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(96)
										int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(96)
										int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(96)
										bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(96)
										if ((tmp20)){
											HX_STACK_LINE(96)
											int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
											HX_STACK_LINE(96)
											int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(96)
											int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
											HX_STACK_LINE(96)
											::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(96)
											{
												HX_STACK_LINE(96)
												::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
												HX_STACK_LINE(96)
												int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(96)
												::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(96)
												this3 = tmp24;
												HX_STACK_LINE(96)
												tmp22 = this3;
											}
											HX_STACK_LINE(96)
											_this->buffer = tmp22;
											HX_STACK_LINE(96)
											::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(96)
											int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(96)
											int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(96)
											_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
										}
										else{
											HX_STACK_LINE(96)
											HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
										}
										HX_STACK_LINE(96)
										int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(96)
										_this->byteLength = tmp21;
										HX_STACK_LINE(96)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(96)
										_this->length = srcLength;
										HX_STACK_LINE(96)
										tmp12 = _this;
									}
									HX_STACK_LINE(96)
									this2 = tmp12;
								}
								else{
									HX_STACK_LINE(96)
									bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(96)
									if ((tmp12)){
										HX_STACK_LINE(96)
										::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(96)
										{
											HX_STACK_LINE(96)
											::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(96)
											::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(96)
											bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(96)
											if ((tmp15)){
												HX_STACK_LINE(96)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(96)
											int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(96)
											bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(96)
											if ((tmp17)){
												HX_STACK_LINE(96)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(96)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(96)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(96)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(96)
											bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(96)
											if ((tmp18)){
												HX_STACK_LINE(96)
												int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(96)
												newByteLength = tmp19;
												HX_STACK_LINE(96)
												int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(96)
												bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(96)
												if ((tmp21)){
													HX_STACK_LINE(96)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(96)
												bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(96)
												if ((tmp22)){
													HX_STACK_LINE(96)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(96)
												int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(96)
												newByteLength = tmp19;
												HX_STACK_LINE(96)
												int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(96)
												int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(96)
												bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(96)
												if ((tmp21)){
													HX_STACK_LINE(96)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(96)
											_this->buffer = buffer;
											HX_STACK_LINE(96)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(96)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(96)
											Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(96)
											int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(96)
											_this->length = tmp20;
											HX_STACK_LINE(96)
											tmp13 = _this;
										}
										HX_STACK_LINE(96)
										this2 = tmp13;
									}
									else{
										HX_STACK_LINE(96)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
									}
								}
							}
						}
					}
					HX_STACK_LINE(96)
					tmp6 = this2;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(96)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(96)
					::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(96)
					bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(96)
					if ((tmp8)){
						HX_STACK_LINE(96)
						::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)3);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(96)
						this2 = tmp9;
					}
					else{
						HX_STACK_LINE(96)
						bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(96)
						if ((tmp9)){
							HX_STACK_LINE(96)
							::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(96)
							{
								HX_STACK_LINE(96)
								::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(96)
								::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(96)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(96)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(96)
								_this->length = tmp12;
								HX_STACK_LINE(96)
								int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(96)
								_this->byteLength = tmp13;
								HX_STACK_LINE(96)
								::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(96)
								{
									HX_STACK_LINE(96)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(96)
									int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(96)
									::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(96)
									this3 = tmp16;
									HX_STACK_LINE(96)
									tmp14 = this3;
								}
								HX_STACK_LINE(96)
								_this->buffer = tmp14;
								HX_STACK_LINE(96)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(96)
								tmp10 = _this;
							}
							HX_STACK_LINE(96)
							this2 = tmp10;
						}
						else{
							HX_STACK_LINE(96)
							bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(96)
							if ((tmp10)){
								HX_STACK_LINE(96)
								::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(96)
								{
									HX_STACK_LINE(96)
									::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(96)
									::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(96)
									cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
									HX_STACK_LINE(96)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(96)
									_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
									HX_STACK_LINE(96)
									int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(96)
									_this->byteLength = tmp13;
									HX_STACK_LINE(96)
									::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(96)
									{
										HX_STACK_LINE(96)
										::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
										HX_STACK_LINE(96)
										int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(96)
										::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(96)
										this3 = tmp16;
										HX_STACK_LINE(96)
										tmp14 = this3;
									}
									HX_STACK_LINE(96)
									_this->buffer = tmp14;
									HX_STACK_LINE(96)
									_this->copyFromArray(((Array< Float >)(array)),null());
									HX_STACK_LINE(96)
									tmp11 = _this;
								}
								HX_STACK_LINE(96)
								this2 = tmp11;
							}
							else{
								HX_STACK_LINE(96)
								bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(96)
								if ((tmp11)){
									HX_STACK_LINE(96)
									::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(96)
									{
										HX_STACK_LINE(96)
										::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(96)
										::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(96)
										::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(96)
										::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
										HX_STACK_LINE(96)
										int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(96)
										int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
										HX_STACK_LINE(96)
										int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(96)
										int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
										HX_STACK_LINE(96)
										int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(96)
										int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
										HX_STACK_LINE(96)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(96)
										int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(96)
										int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(96)
										bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(96)
										if ((tmp20)){
											HX_STACK_LINE(96)
											int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
											HX_STACK_LINE(96)
											int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(96)
											int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
											HX_STACK_LINE(96)
											::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(96)
											{
												HX_STACK_LINE(96)
												::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
												HX_STACK_LINE(96)
												int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(96)
												::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(96)
												this3 = tmp24;
												HX_STACK_LINE(96)
												tmp22 = this3;
											}
											HX_STACK_LINE(96)
											_this->buffer = tmp22;
											HX_STACK_LINE(96)
											::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(96)
											int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(96)
											int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(96)
											_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
										}
										else{
											HX_STACK_LINE(96)
											HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
										}
										HX_STACK_LINE(96)
										int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(96)
										_this->byteLength = tmp21;
										HX_STACK_LINE(96)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(96)
										_this->length = srcLength;
										HX_STACK_LINE(96)
										tmp12 = _this;
									}
									HX_STACK_LINE(96)
									this2 = tmp12;
								}
								else{
									HX_STACK_LINE(96)
									bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(96)
									if ((tmp12)){
										HX_STACK_LINE(96)
										::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(96)
										{
											HX_STACK_LINE(96)
											::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(96)
											::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(96)
											bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(96)
											if ((tmp15)){
												HX_STACK_LINE(96)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(96)
											int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(96)
											bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(96)
											if ((tmp17)){
												HX_STACK_LINE(96)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(96)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(96)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(96)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(96)
											bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(96)
											if ((tmp18)){
												HX_STACK_LINE(96)
												int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(96)
												newByteLength = tmp19;
												HX_STACK_LINE(96)
												int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(96)
												bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(96)
												if ((tmp21)){
													HX_STACK_LINE(96)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(96)
												bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(96)
												if ((tmp22)){
													HX_STACK_LINE(96)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(96)
												int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(96)
												newByteLength = tmp19;
												HX_STACK_LINE(96)
												int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(96)
												int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(96)
												bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(96)
												if ((tmp21)){
													HX_STACK_LINE(96)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(96)
											_this->buffer = buffer;
											HX_STACK_LINE(96)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(96)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(96)
											Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(96)
											int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(96)
											_this->length = tmp20;
											HX_STACK_LINE(96)
											tmp13 = _this;
										}
										HX_STACK_LINE(96)
										this2 = tmp13;
									}
									else{
										HX_STACK_LINE(96)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
									}
								}
							}
						}
					}
					HX_STACK_LINE(96)
					tmp6 = this2;
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(96)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(96)
					::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(96)
					bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(96)
					if ((tmp8)){
						HX_STACK_LINE(96)
						::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(96)
						this2 = tmp9;
					}
					else{
						HX_STACK_LINE(96)
						bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(96)
						if ((tmp9)){
							HX_STACK_LINE(96)
							::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(96)
							{
								HX_STACK_LINE(96)
								::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(96)
								::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(96)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(96)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(96)
								_this->length = tmp12;
								HX_STACK_LINE(96)
								int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(96)
								_this->byteLength = tmp13;
								HX_STACK_LINE(96)
								::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(96)
								{
									HX_STACK_LINE(96)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(96)
									int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(96)
									::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(96)
									this3 = tmp16;
									HX_STACK_LINE(96)
									tmp14 = this3;
								}
								HX_STACK_LINE(96)
								_this->buffer = tmp14;
								HX_STACK_LINE(96)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(96)
								tmp10 = _this;
							}
							HX_STACK_LINE(96)
							this2 = tmp10;
						}
						else{
							HX_STACK_LINE(96)
							bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(96)
							if ((tmp10)){
								HX_STACK_LINE(96)
								::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(96)
								{
									HX_STACK_LINE(96)
									::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(96)
									::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(96)
									cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
									HX_STACK_LINE(96)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(96)
									_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
									HX_STACK_LINE(96)
									int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(96)
									_this->byteLength = tmp13;
									HX_STACK_LINE(96)
									::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(96)
									{
										HX_STACK_LINE(96)
										::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
										HX_STACK_LINE(96)
										int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(96)
										::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(96)
										this3 = tmp16;
										HX_STACK_LINE(96)
										tmp14 = this3;
									}
									HX_STACK_LINE(96)
									_this->buffer = tmp14;
									HX_STACK_LINE(96)
									_this->copyFromArray(((Array< Float >)(array)),null());
									HX_STACK_LINE(96)
									tmp11 = _this;
								}
								HX_STACK_LINE(96)
								this2 = tmp11;
							}
							else{
								HX_STACK_LINE(96)
								bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(96)
								if ((tmp11)){
									HX_STACK_LINE(96)
									::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(96)
									{
										HX_STACK_LINE(96)
										::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(96)
										::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(96)
										::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(96)
										::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
										HX_STACK_LINE(96)
										int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(96)
										int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
										HX_STACK_LINE(96)
										int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(96)
										int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
										HX_STACK_LINE(96)
										int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(96)
										int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
										HX_STACK_LINE(96)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(96)
										int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(96)
										int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(96)
										bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(96)
										if ((tmp20)){
											HX_STACK_LINE(96)
											int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
											HX_STACK_LINE(96)
											int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(96)
											int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
											HX_STACK_LINE(96)
											::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(96)
											{
												HX_STACK_LINE(96)
												::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
												HX_STACK_LINE(96)
												int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(96)
												::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(96)
												this3 = tmp24;
												HX_STACK_LINE(96)
												tmp22 = this3;
											}
											HX_STACK_LINE(96)
											_this->buffer = tmp22;
											HX_STACK_LINE(96)
											::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(96)
											int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(96)
											int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(96)
											_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
										}
										else{
											HX_STACK_LINE(96)
											HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
										}
										HX_STACK_LINE(96)
										int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(96)
										_this->byteLength = tmp21;
										HX_STACK_LINE(96)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(96)
										_this->length = srcLength;
										HX_STACK_LINE(96)
										tmp12 = _this;
									}
									HX_STACK_LINE(96)
									this2 = tmp12;
								}
								else{
									HX_STACK_LINE(96)
									bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(96)
									if ((tmp12)){
										HX_STACK_LINE(96)
										::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(96)
										{
											HX_STACK_LINE(96)
											::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(96)
											::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(96)
											bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(96)
											if ((tmp15)){
												HX_STACK_LINE(96)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(96)
											int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(96)
											bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(96)
											if ((tmp17)){
												HX_STACK_LINE(96)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(96)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(96)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(96)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(96)
											bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(96)
											if ((tmp18)){
												HX_STACK_LINE(96)
												int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(96)
												newByteLength = tmp19;
												HX_STACK_LINE(96)
												int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(96)
												bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(96)
												if ((tmp21)){
													HX_STACK_LINE(96)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(96)
												bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(96)
												if ((tmp22)){
													HX_STACK_LINE(96)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(96)
												int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(96)
												newByteLength = tmp19;
												HX_STACK_LINE(96)
												int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(96)
												int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(96)
												bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(96)
												if ((tmp21)){
													HX_STACK_LINE(96)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(96)
											_this->buffer = buffer;
											HX_STACK_LINE(96)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(96)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(96)
											Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(96)
											int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(96)
											_this->length = tmp20;
											HX_STACK_LINE(96)
											tmp13 = _this;
										}
										HX_STACK_LINE(96)
										this2 = tmp13;
									}
									else{
										HX_STACK_LINE(96)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
									}
								}
							}
						}
					}
					HX_STACK_LINE(96)
					tmp6 = this2;
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(96)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(96)
					::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(96)
					bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(96)
					if ((tmp8)){
						HX_STACK_LINE(96)
						::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)5);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(96)
						this2 = tmp9;
					}
					else{
						HX_STACK_LINE(96)
						bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(96)
						if ((tmp9)){
							HX_STACK_LINE(96)
							::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(96)
							{
								HX_STACK_LINE(96)
								::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(96)
								::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(96)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(96)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(96)
								_this->length = tmp12;
								HX_STACK_LINE(96)
								int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(96)
								_this->byteLength = tmp13;
								HX_STACK_LINE(96)
								::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(96)
								{
									HX_STACK_LINE(96)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(96)
									int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(96)
									::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(96)
									this3 = tmp16;
									HX_STACK_LINE(96)
									tmp14 = this3;
								}
								HX_STACK_LINE(96)
								_this->buffer = tmp14;
								HX_STACK_LINE(96)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(96)
								tmp10 = _this;
							}
							HX_STACK_LINE(96)
							this2 = tmp10;
						}
						else{
							HX_STACK_LINE(96)
							bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(96)
							if ((tmp10)){
								HX_STACK_LINE(96)
								::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(96)
								{
									HX_STACK_LINE(96)
									::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(96)
									::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(96)
									cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
									HX_STACK_LINE(96)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(96)
									_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
									HX_STACK_LINE(96)
									int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(96)
									_this->byteLength = tmp13;
									HX_STACK_LINE(96)
									::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(96)
									{
										HX_STACK_LINE(96)
										::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
										HX_STACK_LINE(96)
										int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(96)
										::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(96)
										this3 = tmp16;
										HX_STACK_LINE(96)
										tmp14 = this3;
									}
									HX_STACK_LINE(96)
									_this->buffer = tmp14;
									HX_STACK_LINE(96)
									_this->copyFromArray(((Array< Float >)(array)),null());
									HX_STACK_LINE(96)
									tmp11 = _this;
								}
								HX_STACK_LINE(96)
								this2 = tmp11;
							}
							else{
								HX_STACK_LINE(96)
								bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(96)
								if ((tmp11)){
									HX_STACK_LINE(96)
									::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(96)
									{
										HX_STACK_LINE(96)
										::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(96)
										::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(96)
										::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(96)
										::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
										HX_STACK_LINE(96)
										int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(96)
										int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
										HX_STACK_LINE(96)
										int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(96)
										int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
										HX_STACK_LINE(96)
										int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(96)
										int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
										HX_STACK_LINE(96)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(96)
										int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(96)
										int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(96)
										bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(96)
										if ((tmp20)){
											HX_STACK_LINE(96)
											int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
											HX_STACK_LINE(96)
											int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(96)
											int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
											HX_STACK_LINE(96)
											::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(96)
											{
												HX_STACK_LINE(96)
												::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
												HX_STACK_LINE(96)
												int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(96)
												::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(96)
												this3 = tmp24;
												HX_STACK_LINE(96)
												tmp22 = this3;
											}
											HX_STACK_LINE(96)
											_this->buffer = tmp22;
											HX_STACK_LINE(96)
											::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(96)
											int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(96)
											int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(96)
											_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
										}
										else{
											HX_STACK_LINE(96)
											HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
										}
										HX_STACK_LINE(96)
										int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(96)
										_this->byteLength = tmp21;
										HX_STACK_LINE(96)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(96)
										_this->length = srcLength;
										HX_STACK_LINE(96)
										tmp12 = _this;
									}
									HX_STACK_LINE(96)
									this2 = tmp12;
								}
								else{
									HX_STACK_LINE(96)
									bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(96)
									if ((tmp12)){
										HX_STACK_LINE(96)
										::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(96)
										{
											HX_STACK_LINE(96)
											::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(96)
											::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(96)
											bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(96)
											if ((tmp15)){
												HX_STACK_LINE(96)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(96)
											int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(96)
											bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(96)
											if ((tmp17)){
												HX_STACK_LINE(96)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(96)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(96)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(96)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(96)
											bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(96)
											if ((tmp18)){
												HX_STACK_LINE(96)
												int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(96)
												newByteLength = tmp19;
												HX_STACK_LINE(96)
												int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(96)
												bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(96)
												if ((tmp21)){
													HX_STACK_LINE(96)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(96)
												bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(96)
												if ((tmp22)){
													HX_STACK_LINE(96)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(96)
												int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(96)
												newByteLength = tmp19;
												HX_STACK_LINE(96)
												int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(96)
												int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(96)
												bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(96)
												if ((tmp21)){
													HX_STACK_LINE(96)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(96)
											_this->buffer = buffer;
											HX_STACK_LINE(96)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(96)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(96)
											Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(96)
											int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(96)
											_this->length = tmp20;
											HX_STACK_LINE(96)
											tmp13 = _this;
										}
										HX_STACK_LINE(96)
										this2 = tmp13;
									}
									else{
										HX_STACK_LINE(96)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8ClampedArray","\x8d","\x06","\x77","\x13"));
									}
								}
							}
						}
					}
					HX_STACK_LINE(96)
					tmp6 = this2;
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(96)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(96)
					::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(96)
					bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(96)
					if ((tmp8)){
						HX_STACK_LINE(96)
						::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)6);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(96)
						this2 = tmp9;
					}
					else{
						HX_STACK_LINE(96)
						bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(96)
						if ((tmp9)){
							HX_STACK_LINE(96)
							::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(96)
							{
								HX_STACK_LINE(96)
								::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(96)
								::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(96)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(96)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(96)
								_this->length = tmp12;
								HX_STACK_LINE(96)
								int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(96)
								_this->byteLength = tmp13;
								HX_STACK_LINE(96)
								::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(96)
								{
									HX_STACK_LINE(96)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(96)
									int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(96)
									::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(96)
									this3 = tmp16;
									HX_STACK_LINE(96)
									tmp14 = this3;
								}
								HX_STACK_LINE(96)
								_this->buffer = tmp14;
								HX_STACK_LINE(96)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(96)
								tmp10 = _this;
							}
							HX_STACK_LINE(96)
							this2 = tmp10;
						}
						else{
							HX_STACK_LINE(96)
							bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(96)
							if ((tmp10)){
								HX_STACK_LINE(96)
								::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(96)
								{
									HX_STACK_LINE(96)
									::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(96)
									::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(96)
									cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
									HX_STACK_LINE(96)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(96)
									_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
									HX_STACK_LINE(96)
									int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(96)
									_this->byteLength = tmp13;
									HX_STACK_LINE(96)
									::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(96)
									{
										HX_STACK_LINE(96)
										::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
										HX_STACK_LINE(96)
										int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(96)
										::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(96)
										this3 = tmp16;
										HX_STACK_LINE(96)
										tmp14 = this3;
									}
									HX_STACK_LINE(96)
									_this->buffer = tmp14;
									HX_STACK_LINE(96)
									_this->copyFromArray(((Array< Float >)(array)),null());
									HX_STACK_LINE(96)
									tmp11 = _this;
								}
								HX_STACK_LINE(96)
								this2 = tmp11;
							}
							else{
								HX_STACK_LINE(96)
								bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(96)
								if ((tmp11)){
									HX_STACK_LINE(96)
									::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(96)
									{
										HX_STACK_LINE(96)
										::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(96)
										::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(96)
										::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(96)
										::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
										HX_STACK_LINE(96)
										int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(96)
										int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
										HX_STACK_LINE(96)
										int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(96)
										int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
										HX_STACK_LINE(96)
										int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(96)
										int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
										HX_STACK_LINE(96)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(96)
										int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(96)
										int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(96)
										bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(96)
										if ((tmp20)){
											HX_STACK_LINE(96)
											int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
											HX_STACK_LINE(96)
											int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(96)
											int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
											HX_STACK_LINE(96)
											::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(96)
											{
												HX_STACK_LINE(96)
												::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
												HX_STACK_LINE(96)
												int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(96)
												::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(96)
												this3 = tmp24;
												HX_STACK_LINE(96)
												tmp22 = this3;
											}
											HX_STACK_LINE(96)
											_this->buffer = tmp22;
											HX_STACK_LINE(96)
											::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(96)
											int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(96)
											int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(96)
											_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
										}
										else{
											HX_STACK_LINE(96)
											HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
										}
										HX_STACK_LINE(96)
										int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(96)
										_this->byteLength = tmp21;
										HX_STACK_LINE(96)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(96)
										_this->length = srcLength;
										HX_STACK_LINE(96)
										tmp12 = _this;
									}
									HX_STACK_LINE(96)
									this2 = tmp12;
								}
								else{
									HX_STACK_LINE(96)
									bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(96)
									if ((tmp12)){
										HX_STACK_LINE(96)
										::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(96)
										{
											HX_STACK_LINE(96)
											::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(96)
											::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(96)
											bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(96)
											if ((tmp15)){
												HX_STACK_LINE(96)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(96)
											int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(96)
											bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(96)
											if ((tmp17)){
												HX_STACK_LINE(96)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(96)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(96)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(96)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(96)
											bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(96)
											if ((tmp18)){
												HX_STACK_LINE(96)
												int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(96)
												newByteLength = tmp19;
												HX_STACK_LINE(96)
												int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(96)
												bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(96)
												if ((tmp21)){
													HX_STACK_LINE(96)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(96)
												bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(96)
												if ((tmp22)){
													HX_STACK_LINE(96)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(96)
												int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(96)
												newByteLength = tmp19;
												HX_STACK_LINE(96)
												int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(96)
												int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(96)
												bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(96)
												if ((tmp21)){
													HX_STACK_LINE(96)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(96)
											_this->buffer = buffer;
											HX_STACK_LINE(96)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(96)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(96)
											Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(96)
											int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(96)
											_this->length = tmp20;
											HX_STACK_LINE(96)
											tmp13 = _this;
										}
										HX_STACK_LINE(96)
										this2 = tmp13;
									}
									else{
										HX_STACK_LINE(96)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt16Array","\x0a","\xc7","\x2d","\xd5"));
									}
								}
							}
						}
					}
					HX_STACK_LINE(96)
					tmp6 = this2;
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(96)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(96)
					::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(96)
					bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(96)
					if ((tmp8)){
						HX_STACK_LINE(96)
						::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(96)
						this2 = tmp9;
					}
					else{
						HX_STACK_LINE(96)
						bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(96)
						if ((tmp9)){
							HX_STACK_LINE(96)
							::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(96)
							{
								HX_STACK_LINE(96)
								::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(96)
								::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(96)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(96)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(96)
								_this->length = tmp12;
								HX_STACK_LINE(96)
								int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(96)
								_this->byteLength = tmp13;
								HX_STACK_LINE(96)
								::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(96)
								{
									HX_STACK_LINE(96)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(96)
									int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(96)
									::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(96)
									this3 = tmp16;
									HX_STACK_LINE(96)
									tmp14 = this3;
								}
								HX_STACK_LINE(96)
								_this->buffer = tmp14;
								HX_STACK_LINE(96)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(96)
								tmp10 = _this;
							}
							HX_STACK_LINE(96)
							this2 = tmp10;
						}
						else{
							HX_STACK_LINE(96)
							bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(96)
							if ((tmp10)){
								HX_STACK_LINE(96)
								::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(96)
								{
									HX_STACK_LINE(96)
									::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(96)
									::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(96)
									cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
									HX_STACK_LINE(96)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(96)
									_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
									HX_STACK_LINE(96)
									int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(96)
									_this->byteLength = tmp13;
									HX_STACK_LINE(96)
									::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(96)
									{
										HX_STACK_LINE(96)
										::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
										HX_STACK_LINE(96)
										int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(96)
										::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(96)
										this3 = tmp16;
										HX_STACK_LINE(96)
										tmp14 = this3;
									}
									HX_STACK_LINE(96)
									_this->buffer = tmp14;
									HX_STACK_LINE(96)
									_this->copyFromArray(((Array< Float >)(array)),null());
									HX_STACK_LINE(96)
									tmp11 = _this;
								}
								HX_STACK_LINE(96)
								this2 = tmp11;
							}
							else{
								HX_STACK_LINE(96)
								bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(96)
								if ((tmp11)){
									HX_STACK_LINE(96)
									::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(96)
									{
										HX_STACK_LINE(96)
										::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(96)
										::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(96)
										::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(96)
										::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
										HX_STACK_LINE(96)
										int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(96)
										int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
										HX_STACK_LINE(96)
										int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(96)
										int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
										HX_STACK_LINE(96)
										int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(96)
										int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
										HX_STACK_LINE(96)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(96)
										int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(96)
										int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(96)
										bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(96)
										if ((tmp20)){
											HX_STACK_LINE(96)
											int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
											HX_STACK_LINE(96)
											int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(96)
											int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
											HX_STACK_LINE(96)
											::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(96)
											{
												HX_STACK_LINE(96)
												::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
												HX_STACK_LINE(96)
												int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(96)
												::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(96)
												this3 = tmp24;
												HX_STACK_LINE(96)
												tmp22 = this3;
											}
											HX_STACK_LINE(96)
											_this->buffer = tmp22;
											HX_STACK_LINE(96)
											::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(96)
											int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(96)
											int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(96)
											_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
										}
										else{
											HX_STACK_LINE(96)
											HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
										}
										HX_STACK_LINE(96)
										int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(96)
										_this->byteLength = tmp21;
										HX_STACK_LINE(96)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(96)
										_this->length = srcLength;
										HX_STACK_LINE(96)
										tmp12 = _this;
									}
									HX_STACK_LINE(96)
									this2 = tmp12;
								}
								else{
									HX_STACK_LINE(96)
									bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(96)
									if ((tmp12)){
										HX_STACK_LINE(96)
										::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(96)
										{
											HX_STACK_LINE(96)
											::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(96)
											::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(96)
											bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(96)
											if ((tmp15)){
												HX_STACK_LINE(96)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(96)
											int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(96)
											bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(96)
											if ((tmp17)){
												HX_STACK_LINE(96)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(96)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(96)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(96)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(96)
											bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(96)
											if ((tmp18)){
												HX_STACK_LINE(96)
												int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(96)
												newByteLength = tmp19;
												HX_STACK_LINE(96)
												int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(96)
												bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(96)
												if ((tmp21)){
													HX_STACK_LINE(96)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(96)
												bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(96)
												if ((tmp22)){
													HX_STACK_LINE(96)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(96)
												int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(96)
												newByteLength = tmp19;
												HX_STACK_LINE(96)
												int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(96)
												int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(96)
												bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(96)
												if ((tmp21)){
													HX_STACK_LINE(96)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(96)
											_this->buffer = buffer;
											HX_STACK_LINE(96)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(96)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(96)
											Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(96)
											int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(96)
											_this->length = tmp20;
											HX_STACK_LINE(96)
											tmp13 = _this;
										}
										HX_STACK_LINE(96)
										this2 = tmp13;
									}
									else{
										HX_STACK_LINE(96)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt32Array","\x10","\x43","\xeb","\x8e"));
									}
								}
							}
						}
					}
					HX_STACK_LINE(96)
					tmp6 = this2;
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(96)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(96)
					::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(96)
					bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(96)
					if ((tmp8)){
						HX_STACK_LINE(96)
						::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(96)
						this2 = tmp9;
					}
					else{
						HX_STACK_LINE(96)
						bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(96)
						if ((tmp9)){
							HX_STACK_LINE(96)
							::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(96)
							{
								HX_STACK_LINE(96)
								::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(96)
								::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(96)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(96)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(96)
								_this->length = tmp12;
								HX_STACK_LINE(96)
								int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(96)
								_this->byteLength = tmp13;
								HX_STACK_LINE(96)
								::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(96)
								{
									HX_STACK_LINE(96)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(96)
									int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(96)
									::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(96)
									this3 = tmp16;
									HX_STACK_LINE(96)
									tmp14 = this3;
								}
								HX_STACK_LINE(96)
								_this->buffer = tmp14;
								HX_STACK_LINE(96)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(96)
								tmp10 = _this;
							}
							HX_STACK_LINE(96)
							this2 = tmp10;
						}
						else{
							HX_STACK_LINE(96)
							bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(96)
							if ((tmp10)){
								HX_STACK_LINE(96)
								::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(96)
								{
									HX_STACK_LINE(96)
									::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(96)
									::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(96)
									cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
									HX_STACK_LINE(96)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(96)
									_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
									HX_STACK_LINE(96)
									int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(96)
									_this->byteLength = tmp13;
									HX_STACK_LINE(96)
									::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(96)
									{
										HX_STACK_LINE(96)
										::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
										HX_STACK_LINE(96)
										int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(96)
										::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(96)
										this3 = tmp16;
										HX_STACK_LINE(96)
										tmp14 = this3;
									}
									HX_STACK_LINE(96)
									_this->buffer = tmp14;
									HX_STACK_LINE(96)
									_this->copyFromArray(((Array< Float >)(array)),null());
									HX_STACK_LINE(96)
									tmp11 = _this;
								}
								HX_STACK_LINE(96)
								this2 = tmp11;
							}
							else{
								HX_STACK_LINE(96)
								bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(96)
								if ((tmp11)){
									HX_STACK_LINE(96)
									::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(96)
									{
										HX_STACK_LINE(96)
										::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(96)
										::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(96)
										::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(96)
										::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
										HX_STACK_LINE(96)
										int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(96)
										int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
										HX_STACK_LINE(96)
										int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(96)
										int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
										HX_STACK_LINE(96)
										int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(96)
										int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
										HX_STACK_LINE(96)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(96)
										int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(96)
										int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(96)
										bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(96)
										if ((tmp20)){
											HX_STACK_LINE(96)
											int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
											HX_STACK_LINE(96)
											int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(96)
											int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
											HX_STACK_LINE(96)
											::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(96)
											{
												HX_STACK_LINE(96)
												::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
												HX_STACK_LINE(96)
												int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(96)
												::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(96)
												this3 = tmp24;
												HX_STACK_LINE(96)
												tmp22 = this3;
											}
											HX_STACK_LINE(96)
											_this->buffer = tmp22;
											HX_STACK_LINE(96)
											::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(96)
											int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(96)
											int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(96)
											_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
										}
										else{
											HX_STACK_LINE(96)
											HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
										}
										HX_STACK_LINE(96)
										int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(96)
										_this->byteLength = tmp21;
										HX_STACK_LINE(96)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(96)
										_this->length = srcLength;
										HX_STACK_LINE(96)
										tmp12 = _this;
									}
									HX_STACK_LINE(96)
									this2 = tmp12;
								}
								else{
									HX_STACK_LINE(96)
									bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(96)
									if ((tmp12)){
										HX_STACK_LINE(96)
										::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(96)
										{
											HX_STACK_LINE(96)
											::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(96)
											::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(96)
											bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(96)
											if ((tmp15)){
												HX_STACK_LINE(96)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(96)
											int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(96)
											bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(96)
											if ((tmp17)){
												HX_STACK_LINE(96)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(96)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(96)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(96)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(96)
											bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(96)
											if ((tmp18)){
												HX_STACK_LINE(96)
												int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(96)
												newByteLength = tmp19;
												HX_STACK_LINE(96)
												int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(96)
												bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(96)
												if ((tmp21)){
													HX_STACK_LINE(96)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(96)
												bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(96)
												if ((tmp22)){
													HX_STACK_LINE(96)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(96)
												int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(96)
												newByteLength = tmp19;
												HX_STACK_LINE(96)
												int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(96)
												int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(96)
												bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(96)
												if ((tmp21)){
													HX_STACK_LINE(96)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(96)
											_this->buffer = buffer;
											HX_STACK_LINE(96)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(96)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(96)
											Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(96)
											int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(96)
											_this->length = tmp20;
											HX_STACK_LINE(96)
											tmp13 = _this;
										}
										HX_STACK_LINE(96)
										this2 = tmp13;
									}
									else{
										HX_STACK_LINE(96)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
									}
								}
							}
						}
					}
					HX_STACK_LINE(96)
					tmp6 = this2;
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(96)
					::haxe::io::Bytes buffer = this1->buffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(96)
					::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(96)
					bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(96)
					if ((tmp8)){
						HX_STACK_LINE(96)
						::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)9);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(96)
						this2 = tmp9;
					}
					else{
						HX_STACK_LINE(96)
						bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(96)
						if ((tmp9)){
							HX_STACK_LINE(96)
							::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(96)
							{
								HX_STACK_LINE(96)
								::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(96)
								::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(96)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(96)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(96)
								_this->length = tmp12;
								HX_STACK_LINE(96)
								int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(96)
								_this->byteLength = tmp13;
								HX_STACK_LINE(96)
								::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(96)
								{
									HX_STACK_LINE(96)
									::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
									HX_STACK_LINE(96)
									int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(96)
									::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(96)
									this3 = tmp16;
									HX_STACK_LINE(96)
									tmp14 = this3;
								}
								HX_STACK_LINE(96)
								_this->buffer = tmp14;
								HX_STACK_LINE(96)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(96)
								tmp10 = _this;
							}
							HX_STACK_LINE(96)
							this2 = tmp10;
						}
						else{
							HX_STACK_LINE(96)
							bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(96)
							if ((tmp10)){
								HX_STACK_LINE(96)
								::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(96)
								{
									HX_STACK_LINE(96)
									::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(96)
									::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(96)
									cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
									HX_STACK_LINE(96)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(96)
									_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
									HX_STACK_LINE(96)
									int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(96)
									_this->byteLength = tmp13;
									HX_STACK_LINE(96)
									::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(96)
									{
										HX_STACK_LINE(96)
										::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
										HX_STACK_LINE(96)
										int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(96)
										::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(96)
										this3 = tmp16;
										HX_STACK_LINE(96)
										tmp14 = this3;
									}
									HX_STACK_LINE(96)
									_this->buffer = tmp14;
									HX_STACK_LINE(96)
									_this->copyFromArray(((Array< Float >)(array)),null());
									HX_STACK_LINE(96)
									tmp11 = _this;
								}
								HX_STACK_LINE(96)
								this2 = tmp11;
							}
							else{
								HX_STACK_LINE(96)
								bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(96)
								if ((tmp11)){
									HX_STACK_LINE(96)
									::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(96)
									{
										HX_STACK_LINE(96)
										::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(96)
										::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(96)
										::haxe::io::Bytes tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(96)
										::haxe::io::Bytes srcData = tmp14;		HX_STACK_VAR(srcData,"srcData");
										HX_STACK_LINE(96)
										int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(96)
										int srcLength = tmp15;		HX_STACK_VAR(srcLength,"srcLength");
										HX_STACK_LINE(96)
										int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(96)
										int srcByteOffset = tmp16;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
										HX_STACK_LINE(96)
										int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(96)
										int srcElementSize = tmp17;		HX_STACK_VAR(srcElementSize,"srcElementSize");
										HX_STACK_LINE(96)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(96)
										int tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(96)
										int tmp19 = _this->type;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(96)
										bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(96)
										if ((tmp20)){
											HX_STACK_LINE(96)
											int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
											HX_STACK_LINE(96)
											int tmp21 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(96)
											int cloneLength = tmp21;		HX_STACK_VAR(cloneLength,"cloneLength");
											HX_STACK_LINE(96)
											::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(96)
											{
												HX_STACK_LINE(96)
												::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
												HX_STACK_LINE(96)
												int tmp23 = cloneLength;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(96)
												::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(96)
												this3 = tmp24;
												HX_STACK_LINE(96)
												tmp22 = this3;
											}
											HX_STACK_LINE(96)
											_this->buffer = tmp22;
											HX_STACK_LINE(96)
											::haxe::io::Bytes tmp23 = srcData;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(96)
											int tmp24 = srcByteOffset;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(96)
											int tmp25 = cloneLength;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(96)
											_this->buffer->blit((int)0,tmp23,tmp24,tmp25);
										}
										else{
											HX_STACK_LINE(96)
											HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
										}
										HX_STACK_LINE(96)
										int tmp21 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(96)
										_this->byteLength = tmp21;
										HX_STACK_LINE(96)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(96)
										_this->length = srcLength;
										HX_STACK_LINE(96)
										tmp12 = _this;
									}
									HX_STACK_LINE(96)
									this2 = tmp12;
								}
								else{
									HX_STACK_LINE(96)
									bool tmp12 = (buffer != null());		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(96)
									if ((tmp12)){
										HX_STACK_LINE(96)
										::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(96)
										{
											HX_STACK_LINE(96)
											::lime::utils::ArrayBufferView tmp14 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(96)
											::lime::utils::ArrayBufferView _this = tmp14;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(96)
											bool tmp15 = (byte_offset < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(96)
											if ((tmp15)){
												HX_STACK_LINE(96)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(96)
											int tmp16 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(96)
											bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(96)
											if ((tmp17)){
												HX_STACK_LINE(96)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(96)
											int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(96)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(96)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(96)
											bool tmp18 = (len == null());		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(96)
											if ((tmp18)){
												HX_STACK_LINE(96)
												int tmp19 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(96)
												newByteLength = tmp19;
												HX_STACK_LINE(96)
												int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(96)
												bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(96)
												if ((tmp21)){
													HX_STACK_LINE(96)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(96)
												bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(96)
												if ((tmp22)){
													HX_STACK_LINE(96)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(96)
												int tmp19 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(96)
												newByteLength = tmp19;
												HX_STACK_LINE(96)
												int tmp20 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(96)
												int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(96)
												bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(96)
												if ((tmp21)){
													HX_STACK_LINE(96)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(96)
											_this->buffer = buffer;
											HX_STACK_LINE(96)
											_this->byteOffset = byte_offset;
											HX_STACK_LINE(96)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(96)
											Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(96)
											int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(96)
											_this->length = tmp20;
											HX_STACK_LINE(96)
											tmp13 = _this;
										}
										HX_STACK_LINE(96)
										this2 = tmp13;
									}
									else{
										HX_STACK_LINE(96)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
									}
								}
							}
						}
					}
					HX_STACK_LINE(96)
					tmp6 = this2;
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(96)
					HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
				}
				;break;
			}
		}
		HX_STACK_LINE(96)
		::lime::utils::ArrayBufferView view = tmp6;		HX_STACK_VAR(view,"view");
		HX_STACK_LINE(96)
		tmp = view;
	}
	HX_STACK_LINE(96)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Int8Array_Impl__obj,subarray,return )

::lime::utils::ArrayBufferView Int8Array_Impl__obj::fromBytes( ::haxe::io::Bytes bytes,Dynamic __o_byteOffset,Dynamic len){
Dynamic byteOffset = __o_byteOffset.Default(0);
	HX_STACK_FRAME("lime.utils._Int8Array.Int8Array_Impl_","fromBytes",0xd4228d1c,"lime.utils._Int8Array.Int8Array_Impl_.fromBytes","lime/utils/Int8Array.hx",100,0x4ea19046)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(byteOffset,"byteOffset")
	HX_STACK_ARG(len,"len")
{
		HX_STACK_LINE(101)
		bool tmp = (byteOffset == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(101)
		if ((tmp)){
			HX_STACK_LINE(101)
			::lime::utils::ArrayBufferView tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(101)
			{
				HX_STACK_LINE(101)
				cpp::ArrayBase array = ((cpp::ArrayBase)(bytes->b));		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(101)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(101)
				bool tmp2 = false;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(101)
				if ((tmp2)){
					HX_STACK_LINE(101)
					::lime::utils::ArrayBufferView tmp3 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)1);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(101)
					this1 = tmp3;
				}
				else{
					HX_STACK_LINE(101)
					bool tmp3 = (array != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(101)
					if ((tmp3)){
						HX_STACK_LINE(101)
						::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(101)
						{
							HX_STACK_LINE(101)
							::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(101)
							::lime::utils::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(101)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(101)
							_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
							HX_STACK_LINE(101)
							int tmp6 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(101)
							_this->byteLength = tmp6;
							HX_STACK_LINE(101)
							::haxe::io::Bytes tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(101)
							{
								HX_STACK_LINE(101)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(101)
								int tmp8 = _this->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(101)
								::haxe::io::Bytes tmp9 = ::haxe::io::Bytes_obj::alloc(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(101)
								this2 = tmp9;
								HX_STACK_LINE(101)
								tmp7 = this2;
							}
							HX_STACK_LINE(101)
							_this->buffer = tmp7;
							HX_STACK_LINE(101)
							_this->copyFromArray(((Array< Float >)(array)),null());
							HX_STACK_LINE(101)
							tmp4 = _this;
						}
						HX_STACK_LINE(101)
						this1 = tmp4;
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
								::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(101)
								::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(101)
								cpp::ArrayBase array1 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array1,"array1");
								HX_STACK_LINE(101)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(101)
								_this->length = array1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								HX_STACK_LINE(101)
								int tmp7 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(101)
								_this->byteLength = tmp7;
								HX_STACK_LINE(101)
								::haxe::io::Bytes tmp8;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(101)
								{
									HX_STACK_LINE(101)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(101)
									int tmp9 = _this->byteLength;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(101)
									::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(101)
									this2 = tmp10;
									HX_STACK_LINE(101)
									tmp8 = this2;
								}
								HX_STACK_LINE(101)
								_this->buffer = tmp8;
								HX_STACK_LINE(101)
								_this->copyFromArray(((Array< Float >)(array1)),null());
								HX_STACK_LINE(101)
								tmp5 = _this;
							}
							HX_STACK_LINE(101)
							this1 = tmp5;
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
									::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(101)
									::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(101)
									::haxe::io::Bytes tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(101)
									::haxe::io::Bytes srcData = tmp8;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(101)
									int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(101)
									int srcLength = tmp9;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(101)
									int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(101)
									int srcByteOffset = tmp10;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(101)
									int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(101)
									int srcElementSize = tmp11;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(101)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(101)
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(101)
									int tmp13 = _this->type;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(101)
									bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(101)
									if ((tmp14)){
										HX_STACK_LINE(101)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(101)
										int tmp15 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(101)
										int cloneLength = tmp15;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(101)
										::haxe::io::Bytes tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(101)
										{
											HX_STACK_LINE(101)
											::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(101)
											int tmp17 = cloneLength;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(101)
											::haxe::io::Bytes tmp18 = ::haxe::io::Bytes_obj::alloc(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(101)
											this2 = tmp18;
											HX_STACK_LINE(101)
											tmp16 = this2;
										}
										HX_STACK_LINE(101)
										_this->buffer = tmp16;
										HX_STACK_LINE(101)
										::haxe::io::Bytes tmp17 = srcData;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(101)
										int tmp18 = srcByteOffset;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(101)
										int tmp19 = cloneLength;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(101)
										_this->buffer->blit((int)0,tmp17,tmp18,tmp19);
									}
									else{
										HX_STACK_LINE(101)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(101)
									int tmp15 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(101)
									_this->byteLength = tmp15;
									HX_STACK_LINE(101)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(101)
									_this->length = srcLength;
									HX_STACK_LINE(101)
									tmp6 = _this;
								}
								HX_STACK_LINE(101)
								this1 = tmp6;
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
										::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(101)
										::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(101)
										bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(101)
										if ((tmp9)){
											HX_STACK_LINE(101)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(101)
										int tmp10 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(101)
										bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(101)
										if ((tmp11)){
											HX_STACK_LINE(101)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(101)
										int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(101)
										int bufferByteLength = tmp12;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(101)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(101)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(101)
										bool tmp13 = true;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(101)
										if ((tmp13)){
											HX_STACK_LINE(101)
											int tmp14 = bufferByteLength;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(101)
											newByteLength = tmp14;
											HX_STACK_LINE(101)
											int tmp15 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(101)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(101)
											if ((tmp16)){
												HX_STACK_LINE(101)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(101)
											bool tmp17 = (newByteLength < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(101)
											if ((tmp17)){
												HX_STACK_LINE(101)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(101)
											int tmp14 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(101)
											newByteLength = tmp14;
											HX_STACK_LINE(101)
											int tmp15 = newByteLength;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(101)
											int newRange = tmp15;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(101)
											bool tmp16 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(101)
											if ((tmp16)){
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
										Float tmp14 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(101)
										int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(101)
										_this->length = tmp15;
										HX_STACK_LINE(101)
										tmp7 = _this;
									}
									HX_STACK_LINE(101)
									this1 = tmp7;
								}
								else{
									HX_STACK_LINE(101)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
								}
							}
						}
					}
				}
				HX_STACK_LINE(101)
				tmp1 = this1;
			}
			HX_STACK_LINE(101)
			return tmp1;
		}
		HX_STACK_LINE(102)
		bool tmp1 = (len == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(102)
		if ((tmp1)){
			HX_STACK_LINE(102)
			::lime::utils::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(102)
			{
				HX_STACK_LINE(102)
				cpp::ArrayBase array = ((cpp::ArrayBase)(bytes->b));		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(102)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(102)
				bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(102)
				if ((tmp3)){
					HX_STACK_LINE(102)
					::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)1);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(102)
					this1 = tmp4;
				}
				else{
					HX_STACK_LINE(102)
					bool tmp4 = (array != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(102)
					if ((tmp4)){
						HX_STACK_LINE(102)
						::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(102)
						{
							HX_STACK_LINE(102)
							::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(102)
							::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(102)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(102)
							_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
							HX_STACK_LINE(102)
							int tmp7 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(102)
							_this->byteLength = tmp7;
							HX_STACK_LINE(102)
							::haxe::io::Bytes tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(102)
							{
								HX_STACK_LINE(102)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(102)
								int tmp9 = _this->byteLength;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(102)
								::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(102)
								this2 = tmp10;
								HX_STACK_LINE(102)
								tmp8 = this2;
							}
							HX_STACK_LINE(102)
							_this->buffer = tmp8;
							HX_STACK_LINE(102)
							_this->copyFromArray(((Array< Float >)(array)),null());
							HX_STACK_LINE(102)
							tmp5 = _this;
						}
						HX_STACK_LINE(102)
						this1 = tmp5;
					}
					else{
						HX_STACK_LINE(102)
						bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(102)
						if ((tmp5)){
							HX_STACK_LINE(102)
							::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(102)
							{
								HX_STACK_LINE(102)
								::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(102)
								::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(102)
								cpp::ArrayBase array1 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array1,"array1");
								HX_STACK_LINE(102)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(102)
								_this->length = array1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
								HX_STACK_LINE(102)
								int tmp8 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(102)
								_this->byteLength = tmp8;
								HX_STACK_LINE(102)
								::haxe::io::Bytes tmp9;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(102)
								{
									HX_STACK_LINE(102)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(102)
									int tmp10 = _this->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(102)
									::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(102)
									this2 = tmp11;
									HX_STACK_LINE(102)
									tmp9 = this2;
								}
								HX_STACK_LINE(102)
								_this->buffer = tmp9;
								HX_STACK_LINE(102)
								_this->copyFromArray(((Array< Float >)(array1)),null());
								HX_STACK_LINE(102)
								tmp6 = _this;
							}
							HX_STACK_LINE(102)
							this1 = tmp6;
						}
						else{
							HX_STACK_LINE(102)
							bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(102)
							if ((tmp6)){
								HX_STACK_LINE(102)
								::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(102)
								{
									HX_STACK_LINE(102)
									::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(102)
									::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(102)
									::haxe::io::Bytes tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(102)
									::haxe::io::Bytes srcData = tmp9;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(102)
									int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(102)
									int srcLength = tmp10;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(102)
									int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(102)
									int srcByteOffset = tmp11;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(102)
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(102)
									int srcElementSize = tmp12;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(102)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(102)
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(102)
									int tmp14 = _this->type;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(102)
									bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(102)
									if ((tmp15)){
										HX_STACK_LINE(102)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(102)
										int tmp16 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(102)
										int cloneLength = tmp16;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(102)
										::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(102)
										{
											HX_STACK_LINE(102)
											::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(102)
											int tmp18 = cloneLength;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(102)
											::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(102)
											this2 = tmp19;
											HX_STACK_LINE(102)
											tmp17 = this2;
										}
										HX_STACK_LINE(102)
										_this->buffer = tmp17;
										HX_STACK_LINE(102)
										::haxe::io::Bytes tmp18 = srcData;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(102)
										int tmp19 = srcByteOffset;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(102)
										int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(102)
										_this->buffer->blit((int)0,tmp18,tmp19,tmp20);
									}
									else{
										HX_STACK_LINE(102)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(102)
									int tmp16 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(102)
									_this->byteLength = tmp16;
									HX_STACK_LINE(102)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(102)
									_this->length = srcLength;
									HX_STACK_LINE(102)
									tmp7 = _this;
								}
								HX_STACK_LINE(102)
								this1 = tmp7;
							}
							else{
								HX_STACK_LINE(102)
								bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(102)
								if ((tmp7)){
									HX_STACK_LINE(102)
									::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(102)
									{
										HX_STACK_LINE(102)
										::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(102)
										::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(102)
										bool tmp10 = (byteOffset < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(102)
										if ((tmp10)){
											HX_STACK_LINE(102)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(102)
										int tmp11 = hx::Mod(byteOffset,_this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(102)
										bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(102)
										if ((tmp12)){
											HX_STACK_LINE(102)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(102)
										int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(102)
										int bufferByteLength = tmp13;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(102)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(102)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(102)
										bool tmp14 = true;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(102)
										if ((tmp14)){
											HX_STACK_LINE(102)
											int tmp15 = (bufferByteLength - byteOffset);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(102)
											newByteLength = tmp15;
											HX_STACK_LINE(102)
											int tmp16 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(102)
											bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(102)
											if ((tmp17)){
												HX_STACK_LINE(102)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(102)
											bool tmp18 = (newByteLength < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(102)
											if ((tmp18)){
												HX_STACK_LINE(102)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(102)
											int tmp15 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(102)
											newByteLength = tmp15;
											HX_STACK_LINE(102)
											int tmp16 = (byteOffset + newByteLength);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(102)
											int newRange = tmp16;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(102)
											bool tmp17 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(102)
											if ((tmp17)){
												HX_STACK_LINE(102)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(102)
										_this->buffer = null();
										HX_STACK_LINE(102)
										_this->byteOffset = byteOffset;
										HX_STACK_LINE(102)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(102)
										Float tmp15 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(102)
										int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(102)
										_this->length = tmp16;
										HX_STACK_LINE(102)
										tmp8 = _this;
									}
									HX_STACK_LINE(102)
									this1 = tmp8;
								}
								else{
									HX_STACK_LINE(102)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
								}
							}
						}
					}
				}
				HX_STACK_LINE(102)
				tmp2 = this1;
			}
			HX_STACK_LINE(102)
			return tmp2;
		}
		HX_STACK_LINE(103)
		::lime::utils::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(103)
		{
			HX_STACK_LINE(103)
			cpp::ArrayBase array = ((cpp::ArrayBase)(bytes->b));		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(103)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(103)
			bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(103)
			if ((tmp3)){
				HX_STACK_LINE(103)
				::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(103)
				this1 = tmp4;
			}
			else{
				HX_STACK_LINE(103)
				bool tmp4 = (array != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(103)
				if ((tmp4)){
					HX_STACK_LINE(103)
					::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(103)
					{
						HX_STACK_LINE(103)
						::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(103)
						::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(103)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(103)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(103)
						int tmp7 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(103)
						_this->byteLength = tmp7;
						HX_STACK_LINE(103)
						::haxe::io::Bytes tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(103)
						{
							HX_STACK_LINE(103)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(103)
							int tmp9 = _this->byteLength;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(103)
							::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(103)
							this2 = tmp10;
							HX_STACK_LINE(103)
							tmp8 = this2;
						}
						HX_STACK_LINE(103)
						_this->buffer = tmp8;
						HX_STACK_LINE(103)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(103)
						tmp5 = _this;
					}
					HX_STACK_LINE(103)
					this1 = tmp5;
				}
				else{
					HX_STACK_LINE(103)
					bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(103)
					if ((tmp5)){
						HX_STACK_LINE(103)
						::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(103)
						{
							HX_STACK_LINE(103)
							::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(103)
							::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(103)
							cpp::ArrayBase array1 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array1,"array1");
							HX_STACK_LINE(103)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(103)
							_this->length = array1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
							HX_STACK_LINE(103)
							int tmp8 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(103)
							_this->byteLength = tmp8;
							HX_STACK_LINE(103)
							::haxe::io::Bytes tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(103)
							{
								HX_STACK_LINE(103)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(103)
								int tmp10 = _this->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(103)
								::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(103)
								this2 = tmp11;
								HX_STACK_LINE(103)
								tmp9 = this2;
							}
							HX_STACK_LINE(103)
							_this->buffer = tmp9;
							HX_STACK_LINE(103)
							_this->copyFromArray(((Array< Float >)(array1)),null());
							HX_STACK_LINE(103)
							tmp6 = _this;
						}
						HX_STACK_LINE(103)
						this1 = tmp6;
					}
					else{
						HX_STACK_LINE(103)
						bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(103)
						if ((tmp6)){
							HX_STACK_LINE(103)
							::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(103)
							{
								HX_STACK_LINE(103)
								::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(103)
								::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(103)
								::haxe::io::Bytes tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(103)
								::haxe::io::Bytes srcData = tmp9;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(103)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(103)
								int srcLength = tmp10;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(103)
								int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(103)
								int srcByteOffset = tmp11;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(103)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(103)
								int srcElementSize = tmp12;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(103)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(103)
								int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(103)
								int tmp14 = _this->type;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(103)
								bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(103)
								if ((tmp15)){
									HX_STACK_LINE(103)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(103)
									int tmp16 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(103)
									int cloneLength = tmp16;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(103)
									::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(103)
									{
										HX_STACK_LINE(103)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(103)
										int tmp18 = cloneLength;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(103)
										::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(103)
										this2 = tmp19;
										HX_STACK_LINE(103)
										tmp17 = this2;
									}
									HX_STACK_LINE(103)
									_this->buffer = tmp17;
									HX_STACK_LINE(103)
									::haxe::io::Bytes tmp18 = srcData;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(103)
									int tmp19 = srcByteOffset;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(103)
									int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(103)
									_this->buffer->blit((int)0,tmp18,tmp19,tmp20);
								}
								else{
									HX_STACK_LINE(103)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(103)
								int tmp16 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(103)
								_this->byteLength = tmp16;
								HX_STACK_LINE(103)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(103)
								_this->length = srcLength;
								HX_STACK_LINE(103)
								tmp7 = _this;
							}
							HX_STACK_LINE(103)
							this1 = tmp7;
						}
						else{
							HX_STACK_LINE(103)
							bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(103)
							if ((tmp7)){
								HX_STACK_LINE(103)
								::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(103)
								{
									HX_STACK_LINE(103)
									::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(103)
									::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(103)
									bool tmp10 = (byteOffset < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(103)
									if ((tmp10)){
										HX_STACK_LINE(103)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(103)
									int tmp11 = hx::Mod(byteOffset,_this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(103)
									bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(103)
									if ((tmp12)){
										HX_STACK_LINE(103)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(103)
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(103)
									int bufferByteLength = tmp13;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(103)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(103)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(103)
									bool tmp14 = (len == null());		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(103)
									if ((tmp14)){
										HX_STACK_LINE(103)
										int tmp15 = (bufferByteLength - byteOffset);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(103)
										newByteLength = tmp15;
										HX_STACK_LINE(103)
										int tmp16 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(103)
										bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(103)
										if ((tmp17)){
											HX_STACK_LINE(103)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(103)
										bool tmp18 = (newByteLength < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(103)
										if ((tmp18)){
											HX_STACK_LINE(103)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(103)
										int tmp15 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(103)
										newByteLength = tmp15;
										HX_STACK_LINE(103)
										int tmp16 = (byteOffset + newByteLength);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(103)
										int newRange = tmp16;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(103)
										bool tmp17 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(103)
										if ((tmp17)){
											HX_STACK_LINE(103)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(103)
									_this->buffer = null();
									HX_STACK_LINE(103)
									_this->byteOffset = byteOffset;
									HX_STACK_LINE(103)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(103)
									Float tmp15 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(103)
									int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(103)
									_this->length = tmp16;
									HX_STACK_LINE(103)
									tmp8 = _this;
								}
								HX_STACK_LINE(103)
								this1 = tmp8;
							}
							else{
								HX_STACK_LINE(103)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
							}
						}
					}
				}
			}
			HX_STACK_LINE(103)
			tmp2 = this1;
		}
		HX_STACK_LINE(103)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Int8Array_Impl__obj,fromBytes,return )

::haxe::io::Bytes Int8Array_Impl__obj::toBytes( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.utils._Int8Array.Int8Array_Impl_","toBytes",0xcfc8caab,"lime.utils._Int8Array.Int8Array_Impl_.toBytes","lime/utils/Int8Array.hx",106,0x4ea19046)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(107)
	::haxe::io::Bytes tmp = this1->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(107)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int8Array_Impl__obj,toBytes,return )

int Int8Array_Impl__obj::get_length( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.utils._Int8Array.Int8Array_Impl_","get_length",0xeef495d4,"lime.utils._Int8Array.Int8Array_Impl_.get_length","lime/utils/Int8Array.hx",112,0x4ea19046)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(112)
	int tmp = this1->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int8Array_Impl__obj,get_length,return )

::String Int8Array_Impl__obj::toString( ::lime::utils::ArrayBufferView this1){
	HX_STACK_FRAME("lime.utils._Int8Array.Int8Array_Impl_","toString",0xe9a95e91,"lime.utils._Int8Array.Int8Array_Impl_.toString","lime/utils/Int8Array.hx",128,0x4ea19046)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(128)
	bool tmp = (this1 != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(128)
	if ((tmp)){
		HX_STACK_LINE(128)
		::String tmp2 = (HX_HCSTRING("Int8Array [byteLength:","\xc1","\x87","\xc3","\x43") + this1->byteLength);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(128)
		::String tmp3 = (tmp2 + HX_HCSTRING(", length:","\xa0","\x04","\x67","\xef"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(128)
		int tmp4 = this1->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(128)
		::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(128)
		tmp1 = (tmp5 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(128)
		tmp1 = null();
	}
	HX_STACK_LINE(128)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int8Array_Impl__obj,toString,return )


Int8Array_Impl__obj::Int8Array_Impl__obj()
{
}

bool Int8Array_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"toBytes") ) { outValue = toBytes_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subarray") ) { outValue = subarray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Int8Array_Impl__obj::BYTES_PER_ELEMENT,HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Int8Array_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Int8Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Int8Array_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Int8Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#endif

hx::Class Int8Array_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc"),
	HX_HCSTRING("subarray","\x19","\x54","\x81","\x07"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("toBytes","\xf0","\x54","\x1c","\x8a"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void Int8Array_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils._Int8Array.Int8Array_Impl_","\x29","\x23","\x97","\x45");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Int8Array_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Int8Array_Impl__obj >;
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

void Int8Array_Impl__obj::__boot()
{
	BYTES_PER_ELEMENT= (int)1;
}

} // end namespace lime
} // end namespace utils
} // end namespace _Int8Array
