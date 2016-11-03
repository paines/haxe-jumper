#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise_lime_audio_AudioBuffer
#include <lime/app/Promise_lime_audio_AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_audio_AudioBuffer
#include <lime/audio/AudioBuffer.h>
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
namespace audio{

Void AudioBuffer_obj::__construct()
{
HX_STACK_FRAME("lime.audio.AudioBuffer","new",0x54859e97,"lime.audio.AudioBuffer.new","lime/audio/AudioBuffer.hx",49,0x5fb686fb)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//AudioBuffer_obj::~AudioBuffer_obj() { }

Dynamic AudioBuffer_obj::__CreateEmpty() { return  new AudioBuffer_obj; }
hx::ObjectPtr< AudioBuffer_obj > AudioBuffer_obj::__new()
{  hx::ObjectPtr< AudioBuffer_obj > _result_ = new AudioBuffer_obj();
	_result_->__construct();
	return _result_;}

Dynamic AudioBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioBuffer_obj > _result_ = new AudioBuffer_obj();
	_result_->__construct();
	return _result_;}

Void AudioBuffer_obj::dispose( ){
{
		HX_STACK_FRAME("lime.audio.AudioBuffer","dispose",0xb2873656,"lime.audio.AudioBuffer.dispose","lime/audio/AudioBuffer.hx",56,0x5fb686fb)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioBuffer_obj,dispose,(void))

Dynamic AudioBuffer_obj::get_src( ){
	HX_STACK_FRAME("lime.audio.AudioBuffer","get_src",0x1e072532,"lime.audio.AudioBuffer.get_src","lime/audio/AudioBuffer.hx",393,0x5fb686fb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(415)
	Dynamic tmp = this->__srcCustom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(415)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AudioBuffer_obj,get_src,return )

Dynamic AudioBuffer_obj::set_src( Dynamic value){
	HX_STACK_FRAME("lime.audio.AudioBuffer","set_src",0x1108b63e,"lime.audio.AudioBuffer.set_src","lime/audio/AudioBuffer.hx",422,0x5fb686fb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(444)
	Dynamic tmp = this->__srcCustom = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(444)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,set_src,return )

::lime::audio::AudioBuffer AudioBuffer_obj::fromBytes( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.audio.AudioBuffer","fromBytes",0xb5bdc418,"lime.audio.AudioBuffer.fromBytes","lime/audio/AudioBuffer.hx",80,0x5fb686fb)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(82)
	bool tmp = (bytes == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	if ((tmp)){
		HX_STACK_LINE(82)
		return null();
	}
	HX_STACK_LINE(91)
	::lime::audio::AudioBuffer tmp1 = ::lime::audio::AudioBuffer_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	::lime::audio::AudioBuffer audioBuffer = tmp1;		HX_STACK_VAR(audioBuffer,"audioBuffer");
	HX_STACK_LINE(92)
	::lime::utils::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(92)
	{
		HX_STACK_LINE(92)
		::haxe::io::Bytes tmp3 = ::haxe::io::Bytes_obj::alloc((int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(92)
		::haxe::io::Bytes buffer = tmp3;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(92)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(92)
		bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(92)
		if ((tmp4)){
			HX_STACK_LINE(92)
			::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(92)
			this1 = tmp5;
		}
		else{
			HX_STACK_LINE(92)
			bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(92)
			if ((tmp5)){
				HX_STACK_LINE(92)
				::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(92)
				{
					HX_STACK_LINE(92)
					::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(92)
					::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(92)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(92)
					int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(92)
					_this->length = tmp8;
					HX_STACK_LINE(92)
					int tmp9 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(92)
					_this->byteLength = tmp9;
					HX_STACK_LINE(92)
					::haxe::io::Bytes tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(92)
					{
						HX_STACK_LINE(92)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(92)
						int tmp11 = _this->byteLength;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(92)
						::haxe::io::Bytes tmp12 = ::haxe::io::Bytes_obj::alloc(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(92)
						this2 = tmp12;
						HX_STACK_LINE(92)
						tmp10 = this2;
					}
					HX_STACK_LINE(92)
					_this->buffer = tmp10;
					HX_STACK_LINE(92)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(92)
					tmp6 = _this;
				}
				HX_STACK_LINE(92)
				this1 = tmp6;
			}
			else{
				HX_STACK_LINE(92)
				bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(92)
				if ((tmp6)){
					HX_STACK_LINE(92)
					::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(92)
					{
						HX_STACK_LINE(92)
						::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(92)
						::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(92)
						cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
						HX_STACK_LINE(92)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(92)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(92)
						int tmp9 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(92)
						_this->byteLength = tmp9;
						HX_STACK_LINE(92)
						::haxe::io::Bytes tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(92)
						{
							HX_STACK_LINE(92)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(92)
							int tmp11 = _this->byteLength;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(92)
							::haxe::io::Bytes tmp12 = ::haxe::io::Bytes_obj::alloc(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(92)
							this2 = tmp12;
							HX_STACK_LINE(92)
							tmp10 = this2;
						}
						HX_STACK_LINE(92)
						_this->buffer = tmp10;
						HX_STACK_LINE(92)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(92)
						tmp7 = _this;
					}
					HX_STACK_LINE(92)
					this1 = tmp7;
				}
				else{
					HX_STACK_LINE(92)
					bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(92)
					if ((tmp7)){
						HX_STACK_LINE(92)
						::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(92)
						{
							HX_STACK_LINE(92)
							::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(92)
							::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(92)
							::haxe::io::Bytes tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(92)
							::haxe::io::Bytes srcData = tmp10;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(92)
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(92)
							int srcLength = tmp11;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(92)
							int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(92)
							int srcByteOffset = tmp12;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(92)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(92)
							int srcElementSize = tmp13;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(92)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(92)
							int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(92)
							int tmp15 = _this->type;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(92)
							bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(92)
							if ((tmp16)){
								HX_STACK_LINE(92)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(92)
								int tmp17 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(92)
								int cloneLength = tmp17;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(92)
								::haxe::io::Bytes tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(92)
								{
									HX_STACK_LINE(92)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(92)
									int tmp19 = cloneLength;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(92)
									::haxe::io::Bytes tmp20 = ::haxe::io::Bytes_obj::alloc(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(92)
									this2 = tmp20;
									HX_STACK_LINE(92)
									tmp18 = this2;
								}
								HX_STACK_LINE(92)
								_this->buffer = tmp18;
								HX_STACK_LINE(92)
								::haxe::io::Bytes tmp19 = srcData;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(92)
								int tmp20 = srcByteOffset;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(92)
								int tmp21 = cloneLength;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(92)
								_this->buffer->blit((int)0,tmp19,tmp20,tmp21);
							}
							else{
								HX_STACK_LINE(92)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(92)
							int tmp17 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(92)
							_this->byteLength = tmp17;
							HX_STACK_LINE(92)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(92)
							_this->length = srcLength;
							HX_STACK_LINE(92)
							tmp8 = _this;
						}
						HX_STACK_LINE(92)
						this1 = tmp8;
					}
					else{
						HX_STACK_LINE(92)
						bool tmp8 = (buffer != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(92)
						if ((tmp8)){
							HX_STACK_LINE(92)
							::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(92)
							{
								HX_STACK_LINE(92)
								::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(92)
								::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(92)
								bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(92)
								if ((tmp11)){
									HX_STACK_LINE(92)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(92)
								int tmp12 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(92)
								bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(92)
								if ((tmp13)){
									HX_STACK_LINE(92)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(92)
								int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(92)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(92)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(92)
								bool tmp14 = true;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(92)
								if ((tmp14)){
									HX_STACK_LINE(92)
									int tmp15 = bufferByteLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(92)
									newByteLength = tmp15;
									HX_STACK_LINE(92)
									int tmp16 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(92)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(92)
									if ((tmp17)){
										HX_STACK_LINE(92)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(92)
									bool tmp18 = (newByteLength < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(92)
									if ((tmp18)){
										HX_STACK_LINE(92)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(92)
									int tmp15 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(92)
									newByteLength = tmp15;
									HX_STACK_LINE(92)
									int tmp16 = newByteLength;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(92)
									int newRange = tmp16;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(92)
									bool tmp17 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(92)
									if ((tmp17)){
										HX_STACK_LINE(92)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(92)
								_this->buffer = buffer;
								HX_STACK_LINE(92)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(92)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(92)
								Float tmp15 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(92)
								int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(92)
								_this->length = tmp16;
								HX_STACK_LINE(92)
								tmp9 = _this;
							}
							HX_STACK_LINE(92)
							this1 = tmp9;
						}
						else{
							HX_STACK_LINE(92)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
						}
					}
				}
			}
		}
		HX_STACK_LINE(92)
		tmp2 = this1;
	}
	HX_STACK_LINE(92)
	audioBuffer->data = tmp2;
	HX_STACK_LINE(94)
	return ((Dynamic)(::lime::audio::AudioBuffer_obj::cffi_lime_audio_load.call(hx::DynamicPtr(bytes),hx::DynamicPtr(audioBuffer))));
	HX_STACK_LINE(114)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,fromBytes,return )

::lime::audio::AudioBuffer AudioBuffer_obj::fromFile( ::String path){
	HX_STACK_FRAME("lime.audio.AudioBuffer","fromFile",0xfdabe76f,"lime.audio.AudioBuffer.fromFile","lime/audio/AudioBuffer.hx",119,0x5fb686fb)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(121)
	bool tmp = (path == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(121)
	if ((tmp)){
		HX_STACK_LINE(121)
		return null();
	}
	HX_STACK_LINE(170)
	::lime::audio::AudioBuffer tmp1 = ::lime::audio::AudioBuffer_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(170)
	::lime::audio::AudioBuffer audioBuffer = tmp1;		HX_STACK_VAR(audioBuffer,"audioBuffer");
	HX_STACK_LINE(171)
	::lime::utils::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(171)
	{
		HX_STACK_LINE(171)
		::haxe::io::Bytes tmp3 = ::haxe::io::Bytes_obj::alloc((int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(171)
		::haxe::io::Bytes buffer = tmp3;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(171)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(171)
		bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(171)
		if ((tmp4)){
			HX_STACK_LINE(171)
			::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(171)
			this1 = tmp5;
		}
		else{
			HX_STACK_LINE(171)
			bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(171)
			if ((tmp5)){
				HX_STACK_LINE(171)
				::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(171)
				{
					HX_STACK_LINE(171)
					::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(171)
					::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(171)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(171)
					int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(171)
					_this->length = tmp8;
					HX_STACK_LINE(171)
					int tmp9 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(171)
					_this->byteLength = tmp9;
					HX_STACK_LINE(171)
					::haxe::io::Bytes tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(171)
					{
						HX_STACK_LINE(171)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(171)
						int tmp11 = _this->byteLength;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(171)
						::haxe::io::Bytes tmp12 = ::haxe::io::Bytes_obj::alloc(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(171)
						this2 = tmp12;
						HX_STACK_LINE(171)
						tmp10 = this2;
					}
					HX_STACK_LINE(171)
					_this->buffer = tmp10;
					HX_STACK_LINE(171)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(171)
					tmp6 = _this;
				}
				HX_STACK_LINE(171)
				this1 = tmp6;
			}
			else{
				HX_STACK_LINE(171)
				bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(171)
				if ((tmp6)){
					HX_STACK_LINE(171)
					::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(171)
					{
						HX_STACK_LINE(171)
						::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(171)
						::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(171)
						cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
						HX_STACK_LINE(171)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(171)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(171)
						int tmp9 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(171)
						_this->byteLength = tmp9;
						HX_STACK_LINE(171)
						::haxe::io::Bytes tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(171)
						{
							HX_STACK_LINE(171)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(171)
							int tmp11 = _this->byteLength;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(171)
							::haxe::io::Bytes tmp12 = ::haxe::io::Bytes_obj::alloc(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(171)
							this2 = tmp12;
							HX_STACK_LINE(171)
							tmp10 = this2;
						}
						HX_STACK_LINE(171)
						_this->buffer = tmp10;
						HX_STACK_LINE(171)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(171)
						tmp7 = _this;
					}
					HX_STACK_LINE(171)
					this1 = tmp7;
				}
				else{
					HX_STACK_LINE(171)
					bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(171)
					if ((tmp7)){
						HX_STACK_LINE(171)
						::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(171)
						{
							HX_STACK_LINE(171)
							::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(171)
							::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(171)
							::haxe::io::Bytes tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(171)
							::haxe::io::Bytes srcData = tmp10;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(171)
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(171)
							int srcLength = tmp11;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(171)
							int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(171)
							int srcByteOffset = tmp12;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(171)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(171)
							int srcElementSize = tmp13;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(171)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(171)
							int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(171)
							int tmp15 = _this->type;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(171)
							bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(171)
							if ((tmp16)){
								HX_STACK_LINE(171)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(171)
								int tmp17 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(171)
								int cloneLength = tmp17;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(171)
								::haxe::io::Bytes tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(171)
								{
									HX_STACK_LINE(171)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(171)
									int tmp19 = cloneLength;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(171)
									::haxe::io::Bytes tmp20 = ::haxe::io::Bytes_obj::alloc(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(171)
									this2 = tmp20;
									HX_STACK_LINE(171)
									tmp18 = this2;
								}
								HX_STACK_LINE(171)
								_this->buffer = tmp18;
								HX_STACK_LINE(171)
								::haxe::io::Bytes tmp19 = srcData;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(171)
								int tmp20 = srcByteOffset;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(171)
								int tmp21 = cloneLength;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(171)
								_this->buffer->blit((int)0,tmp19,tmp20,tmp21);
							}
							else{
								HX_STACK_LINE(171)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(171)
							int tmp17 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(171)
							_this->byteLength = tmp17;
							HX_STACK_LINE(171)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(171)
							_this->length = srcLength;
							HX_STACK_LINE(171)
							tmp8 = _this;
						}
						HX_STACK_LINE(171)
						this1 = tmp8;
					}
					else{
						HX_STACK_LINE(171)
						bool tmp8 = (buffer != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(171)
						if ((tmp8)){
							HX_STACK_LINE(171)
							::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(171)
							{
								HX_STACK_LINE(171)
								::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(171)
								::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(171)
								bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(171)
								if ((tmp11)){
									HX_STACK_LINE(171)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(171)
								int tmp12 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(171)
								bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(171)
								if ((tmp13)){
									HX_STACK_LINE(171)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(171)
								int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(171)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(171)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(171)
								bool tmp14 = true;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(171)
								if ((tmp14)){
									HX_STACK_LINE(171)
									int tmp15 = bufferByteLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(171)
									newByteLength = tmp15;
									HX_STACK_LINE(171)
									int tmp16 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(171)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(171)
									if ((tmp17)){
										HX_STACK_LINE(171)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(171)
									bool tmp18 = (newByteLength < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(171)
									if ((tmp18)){
										HX_STACK_LINE(171)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(171)
									int tmp15 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(171)
									newByteLength = tmp15;
									HX_STACK_LINE(171)
									int tmp16 = newByteLength;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(171)
									int newRange = tmp16;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(171)
									bool tmp17 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(171)
									if ((tmp17)){
										HX_STACK_LINE(171)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(171)
								_this->buffer = buffer;
								HX_STACK_LINE(171)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(171)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(171)
								Float tmp15 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(171)
								int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(171)
								_this->length = tmp16;
								HX_STACK_LINE(171)
								tmp9 = _this;
							}
							HX_STACK_LINE(171)
							this1 = tmp9;
						}
						else{
							HX_STACK_LINE(171)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
						}
					}
				}
			}
		}
		HX_STACK_LINE(171)
		tmp2 = this1;
	}
	HX_STACK_LINE(171)
	audioBuffer->data = tmp2;
	HX_STACK_LINE(173)
	return ((Dynamic)(::lime::audio::AudioBuffer_obj::cffi_lime_audio_load.call(hx::DynamicPtr(path),hx::DynamicPtr(audioBuffer))));
	HX_STACK_LINE(193)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,fromFile,return )

::lime::audio::AudioBuffer AudioBuffer_obj::fromFiles( Array< ::String > paths){
	HX_STACK_FRAME("lime.audio.AudioBuffer","fromFiles",0xf8be9a24,"lime.audio.AudioBuffer.fromFiles","lime/audio/AudioBuffer.hx",198,0x5fb686fb)
	HX_STACK_ARG(paths,"paths")
	HX_STACK_LINE(208)
	::lime::audio::AudioBuffer buffer = null();		HX_STACK_VAR(buffer,"buffer");
	HX_STACK_LINE(210)
	{
		HX_STACK_LINE(210)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(210)
		while((true)){
			HX_STACK_LINE(210)
			bool tmp = (_g < paths->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(210)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(210)
			if ((tmp1)){
				HX_STACK_LINE(210)
				break;
			}
			HX_STACK_LINE(210)
			::String tmp2 = paths->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(210)
			::String path = tmp2;		HX_STACK_VAR(path,"path");
			HX_STACK_LINE(210)
			++(_g);
			HX_STACK_LINE(212)
			::String tmp3 = path;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(212)
			::lime::audio::AudioBuffer tmp4 = ::lime::audio::AudioBuffer_obj::fromFile(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(212)
			buffer = tmp4;
			HX_STACK_LINE(213)
			bool tmp5 = (buffer != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(213)
			if ((tmp5)){
				HX_STACK_LINE(213)
				break;
			}
		}
	}
	HX_STACK_LINE(217)
	::lime::audio::AudioBuffer tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(217)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,fromFiles,return )

Void AudioBuffer_obj::fromURL( ::String url,Dynamic handler){
{
		HX_STACK_FRAME("lime.audio.AudioBuffer","fromURL",0x4f3e95dc,"lime.audio.AudioBuffer.fromURL","lime/audio/AudioBuffer.hx",224,0x5fb686fb)
		HX_STACK_ARG(url,"url")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(236)
		bool tmp = (url != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(236)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(236)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(236)
		if ((tmp1)){
			HX_STACK_LINE(236)
			int tmp3 = url.indexOf(HX_HCSTRING("http://","\x52","\x75","\xcd","\x5a"),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(236)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(236)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(236)
			int tmp6 = (int)-1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(236)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(236)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(236)
			tmp2 = (tmp5 == tmp8);
		}
		else{
			HX_STACK_LINE(236)
			tmp2 = false;
		}
		HX_STACK_LINE(236)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(236)
		if ((tmp2)){
			HX_STACK_LINE(236)
			int tmp4 = url.indexOf(HX_HCSTRING("https://","\xcf","\xb4","\xae","\x3e"),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(236)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(236)
			tmp3 = (tmp5 == (int)-1);
		}
		else{
			HX_STACK_LINE(236)
			tmp3 = false;
		}
		HX_STACK_LINE(236)
		if ((tmp3)){
			HX_STACK_LINE(238)
			::String tmp4 = url;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(238)
			::lime::audio::AudioBuffer tmp5 = ::lime::audio::AudioBuffer_obj::fromFile(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(238)
			handler(tmp5).Cast< Void >();
		}
		else{
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AudioBuffer_obj,fromURL,(void))

::lime::app::Future AudioBuffer_obj::loadFromFile( ::String path){
	HX_STACK_FRAME("lime.audio.AudioBuffer","loadFromFile",0xb514bc35,"lime.audio.AudioBuffer.loadFromFile","lime/audio/AudioBuffer.hx",276,0x5fb686fb)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(278)
	::lime::app::Promise_lime_audio_AudioBuffer tmp = ::lime::app::Promise_lime_audio_AudioBuffer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(278)
	::lime::app::Promise_lime_audio_AudioBuffer promise = tmp;		HX_STACK_VAR(promise,"promise");
	HX_STACK_LINE(280)
	::String tmp1 = path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(280)
	::lime::audio::AudioBuffer tmp2 = ::lime::audio::AudioBuffer_obj::fromFile(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(280)
	::lime::audio::AudioBuffer audioBuffer = tmp2;		HX_STACK_VAR(audioBuffer,"audioBuffer");
	HX_STACK_LINE(282)
	bool tmp3 = (audioBuffer != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(282)
	if ((tmp3)){
		HX_STACK_LINE(330)
		::lime::audio::AudioBuffer tmp4 = audioBuffer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(330)
		promise->complete(tmp4);
	}
	else{
		HX_STACK_LINE(336)
		promise->error(null());
	}
	HX_STACK_LINE(340)
	::lime::app::Future tmp4 = promise->future;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(340)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,loadFromFile,return )

::lime::app::Future AudioBuffer_obj::loadFromFiles( Array< ::String > paths){
	HX_STACK_FRAME("lime.audio.AudioBuffer","loadFromFiles",0xbd0ff29e,"lime.audio.AudioBuffer.loadFromFiles","lime/audio/AudioBuffer.hx",345,0x5fb686fb)
	HX_STACK_ARG(paths,"paths")
	HX_STACK_LINE(347)
	::lime::app::Promise_lime_audio_AudioBuffer tmp = ::lime::app::Promise_lime_audio_AudioBuffer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(347)
	::lime::app::Promise_lime_audio_AudioBuffer promise = tmp;		HX_STACK_VAR(promise,"promise");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::String >,paths)
	int __ArgCount() const { return 0; }
	::lime::audio::AudioBuffer run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","lime/audio/AudioBuffer.hx",377,0x5fb686fb)
		{
			HX_STACK_LINE(377)
			::lime::audio::AudioBuffer tmp1 = ::lime::audio::AudioBuffer_obj::fromFiles(paths);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(377)
			return tmp1;
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_STACK_LINE(377)
	::lime::app::Future tmp1 = ::lime::app::Future_obj::__new( Dynamic(new _Function_1_1(paths)));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(377)
	promise->completeWith(tmp1);
	HX_STACK_LINE(381)
	::lime::app::Future tmp2 = promise->future;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(381)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,loadFromFiles,return )

Dynamic AudioBuffer_obj::lime_audio_load( Dynamic data,Dynamic buffer){
	HX_STACK_FRAME("lime.audio.AudioBuffer","lime_audio_load",0x6b424e50,"lime.audio.AudioBuffer.lime_audio_load","lime/audio/AudioBuffer.hx",459,0x5fb686fb)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(459)
	return ::lime::audio::AudioBuffer_obj::cffi_lime_audio_load.call(hx::DynamicPtr(data),hx::DynamicPtr(buffer));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AudioBuffer_obj,lime_audio_load,return )

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > AudioBuffer_obj::cffi_lime_audio_load;


AudioBuffer_obj::AudioBuffer_obj()
{
}

void AudioBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioBuffer);
	HX_MARK_MEMBER_NAME(bitsPerSample,"bitsPerSample");
	HX_MARK_MEMBER_NAME(channels,"channels");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(sampleRate,"sampleRate");
	HX_MARK_MEMBER_NAME(__srcAudio,"__srcAudio");
	HX_MARK_MEMBER_NAME(__srcBuffer,"__srcBuffer");
	HX_MARK_MEMBER_NAME(__srcCustom,"__srcCustom");
	HX_MARK_MEMBER_NAME(__srcFMODSound,"__srcFMODSound");
	HX_MARK_MEMBER_NAME(__srcHowl,"__srcHowl");
	HX_MARK_MEMBER_NAME(__srcSound,"__srcSound");
	HX_MARK_END_CLASS();
}

void AudioBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitsPerSample,"bitsPerSample");
	HX_VISIT_MEMBER_NAME(channels,"channels");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(sampleRate,"sampleRate");
	HX_VISIT_MEMBER_NAME(__srcAudio,"__srcAudio");
	HX_VISIT_MEMBER_NAME(__srcBuffer,"__srcBuffer");
	HX_VISIT_MEMBER_NAME(__srcCustom,"__srcCustom");
	HX_VISIT_MEMBER_NAME(__srcFMODSound,"__srcFMODSound");
	HX_VISIT_MEMBER_NAME(__srcHowl,"__srcHowl");
	HX_VISIT_MEMBER_NAME(__srcSound,"__srcSound");
}

Dynamic AudioBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp == hx::paccAlways) return get_src(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"get_src") ) { return get_src_dyn(); }
		if (HX_FIELD_EQ(inName,"set_src") ) { return set_src_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { return channels; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__srcHowl") ) { return __srcHowl; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sampleRate") ) { return sampleRate; }
		if (HX_FIELD_EQ(inName,"__srcAudio") ) { return __srcAudio; }
		if (HX_FIELD_EQ(inName,"__srcSound") ) { return __srcSound; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__srcBuffer") ) { return __srcBuffer; }
		if (HX_FIELD_EQ(inName,"__srcCustom") ) { return __srcCustom; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bitsPerSample") ) { return bitsPerSample; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__srcFMODSound") ) { return __srcFMODSound; }
	}
	return super::__Field(inName,inCallProp);
}

bool AudioBuffer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"fromURL") ) { outValue = fromURL_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromFiles") ) { outValue = fromFiles_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadFromFile") ) { outValue = loadFromFile_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadFromFiles") ) { outValue = loadFromFiles_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lime_audio_load") ) { outValue = lime_audio_load_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"cffi_lime_audio_load") ) { outValue = cffi_lime_audio_load; return true;  }
	}
	return false;
}

Dynamic AudioBuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp == hx::paccAlways) return set_src(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { channels=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__srcHowl") ) { __srcHowl=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sampleRate") ) { sampleRate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__srcAudio") ) { __srcAudio=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__srcSound") ) { __srcSound=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__srcBuffer") ) { __srcBuffer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__srcCustom") ) { __srcCustom=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bitsPerSample") ) { bitsPerSample=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__srcFMODSound") ) { __srcFMODSound=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AudioBuffer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 20:
		if (HX_FIELD_EQ(inName,"cffi_lime_audio_load") ) { cffi_lime_audio_load=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
	}
	return false;
}

void AudioBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitsPerSample","\x01","\x01","\x36","\xc4"));
	outFields->push(HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("sampleRate","\x2a","\x3c","\x4c","\x67"));
	outFields->push(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00"));
	outFields->push(HX_HCSTRING("__srcAudio","\x72","\x3a","\x73","\x29"));
	outFields->push(HX_HCSTRING("__srcBuffer","\xe4","\x63","\x0b","\x83"));
	outFields->push(HX_HCSTRING("__srcCustom","\x95","\x2e","\x09","\xf2"));
	outFields->push(HX_HCSTRING("__srcFMODSound","\xcf","\x14","\x24","\x65"));
	outFields->push(HX_HCSTRING("__srcHowl","\xc0","\x38","\xb9","\xf4"));
	outFields->push(HX_HCSTRING("__srcSound","\x6b","\x4e","\xbf","\x82"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(AudioBuffer_obj,bitsPerSample),HX_HCSTRING("bitsPerSample","\x01","\x01","\x36","\xc4")},
	{hx::fsInt,(int)offsetof(AudioBuffer_obj,channels),HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(AudioBuffer_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsInt,(int)offsetof(AudioBuffer_obj,sampleRate),HX_HCSTRING("sampleRate","\x2a","\x3c","\x4c","\x67")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AudioBuffer_obj,__srcAudio),HX_HCSTRING("__srcAudio","\x72","\x3a","\x73","\x29")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AudioBuffer_obj,__srcBuffer),HX_HCSTRING("__srcBuffer","\xe4","\x63","\x0b","\x83")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AudioBuffer_obj,__srcCustom),HX_HCSTRING("__srcCustom","\x95","\x2e","\x09","\xf2")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AudioBuffer_obj,__srcFMODSound),HX_HCSTRING("__srcFMODSound","\xcf","\x14","\x24","\x65")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AudioBuffer_obj,__srcHowl),HX_HCSTRING("__srcHowl","\xc0","\x38","\xb9","\xf4")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AudioBuffer_obj,__srcSound),HX_HCSTRING("__srcSound","\x6b","\x4e","\xbf","\x82")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &AudioBuffer_obj::cffi_lime_audio_load,HX_HCSTRING("cffi_lime_audio_load","\xc0","\xd6","\x0b","\xc1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bitsPerSample","\x01","\x01","\x36","\xc4"),
	HX_HCSTRING("channels","\x50","\xaa","\xee","\x6a"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("sampleRate","\x2a","\x3c","\x4c","\x67"),
	HX_HCSTRING("__srcAudio","\x72","\x3a","\x73","\x29"),
	HX_HCSTRING("__srcBuffer","\xe4","\x63","\x0b","\x83"),
	HX_HCSTRING("__srcCustom","\x95","\x2e","\x09","\xf2"),
	HX_HCSTRING("__srcFMODSound","\xcf","\x14","\x24","\x65"),
	HX_HCSTRING("__srcHowl","\xc0","\x38","\xb9","\xf4"),
	HX_HCSTRING("__srcSound","\x6b","\x4e","\xbf","\x82"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("get_src","\x7b","\x6f","\xcc","\x26"),
	HX_HCSTRING("set_src","\x87","\x00","\xce","\x19"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioBuffer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AudioBuffer_obj::cffi_lime_audio_load,"cffi_lime_audio_load");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioBuffer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AudioBuffer_obj::cffi_lime_audio_load,"cffi_lime_audio_load");
};

#endif

hx::Class AudioBuffer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("fromFiles","\xad","\xc8","\x21","\xb5"),
	HX_HCSTRING("fromURL","\x25","\xe0","\x03","\x58"),
	HX_HCSTRING("loadFromFile","\x4c","\x89","\xf0","\x5a"),
	HX_HCSTRING("loadFromFiles","\xa7","\x99","\x87","\x37"),
	HX_HCSTRING("lime_audio_load","\x99","\x89","\x38","\x30"),
	HX_HCSTRING("cffi_lime_audio_load","\xc0","\xd6","\x0b","\xc1"),
	::String(null()) };

void AudioBuffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.audio.AudioBuffer","\x25","\x07","\x67","\x5a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AudioBuffer_obj::__GetStatic;
	__mClass->mSetStaticField = &AudioBuffer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AudioBuffer_obj >;
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

void AudioBuffer_obj::__boot()
{
	cffi_lime_audio_load= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_audio_load","\x99","\x89","\x38","\x30"),HX_HCSTRING("ooo","\x4f","\x9b","\x54","\x00"),false));
}

} // end namespace lime
} // end namespace audio
