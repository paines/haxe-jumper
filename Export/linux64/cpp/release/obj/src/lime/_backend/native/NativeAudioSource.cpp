#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeAudioSource
#include <lime/_backend/native/NativeAudioSource.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_audio_AudioBuffer
#include <lime/audio/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_audio_AudioSource
#include <lime/audio/AudioSource.h>
#endif
#ifndef INCLUDED_lime_audio_openal_AL
#include <lime/audio/openal/AL.h>
#endif
#ifndef INCLUDED_lime_math_Vector4
#include <lime/math/Vector4.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
namespace lime{
namespace _backend{
namespace native{

Void NativeAudioSource_obj::__construct(::lime::audio::AudioSource parent)
{
HX_STACK_FRAME("lime._backend.native.NativeAudioSource","new",0xf98b6a15,"lime._backend.native.NativeAudioSource.new","lime/_backend/native/NativeAudioSource.hx",27,0xbddaa99c)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(29)
	this->parent = parent;
	HX_STACK_LINE(31)
	::lime::math::Vector4 tmp = ::lime::math::Vector4_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	this->position = tmp;
}
;
	return null();
}

//NativeAudioSource_obj::~NativeAudioSource_obj() { }

Dynamic NativeAudioSource_obj::__CreateEmpty() { return  new NativeAudioSource_obj; }
hx::ObjectPtr< NativeAudioSource_obj > NativeAudioSource_obj::__new(::lime::audio::AudioSource parent)
{  hx::ObjectPtr< NativeAudioSource_obj > _result_ = new NativeAudioSource_obj();
	_result_->__construct(parent);
	return _result_;}

Dynamic NativeAudioSource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NativeAudioSource_obj > _result_ = new NativeAudioSource_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void NativeAudioSource_obj::dispose( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeAudioSource","dispose",0xa24b98d4,"lime._backend.native.NativeAudioSource.dispose","lime/_backend/native/NativeAudioSource.hx",37,0xbddaa99c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		if ((tmp1)){
			HX_STACK_LINE(41)
			Dynamic tmp2 = this->handle;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(41)
			::lime::audio::openal::AL_obj::deleteSource(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,dispose,(void))

Void NativeAudioSource_obj::init( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeAudioSource","init",0x5d2a1fbb,"lime._backend.native.NativeAudioSource.init","lime/_backend/native/NativeAudioSource.hx",48,0xbddaa99c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		::lime::audio::AudioSource tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		Dynamic tmp1 = tmp->buffer->__srcBuffer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		if ((tmp2)){
			HX_STACK_LINE(52)
			Dynamic tmp3 = ::lime::audio::openal::AL_obj::genBuffer();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(52)
			::lime::audio::AudioSource tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(52)
			tmp4->buffer->__srcBuffer = tmp3;
			HX_STACK_LINE(54)
			int format = (int)0;		HX_STACK_VAR(format,"format");
			HX_STACK_LINE(56)
			::lime::audio::AudioSource tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(56)
			int tmp6 = tmp5->buffer->channels;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(56)
			bool tmp7 = (tmp6 == (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(56)
			if ((tmp7)){
				HX_STACK_LINE(58)
				::lime::audio::AudioSource tmp8 = this->parent;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(58)
				int tmp9 = tmp8->buffer->bitsPerSample;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(58)
				bool tmp10 = (tmp9 == (int)8);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(58)
				if ((tmp10)){
					HX_STACK_LINE(60)
					format = (int)4352;
				}
				else{
					HX_STACK_LINE(62)
					::lime::audio::AudioSource tmp11 = this->parent;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(62)
					int tmp12 = tmp11->buffer->bitsPerSample;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(62)
					bool tmp13 = (tmp12 == (int)16);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(62)
					if ((tmp13)){
						HX_STACK_LINE(64)
						format = (int)4353;
					}
				}
			}
			else{
				HX_STACK_LINE(68)
				::lime::audio::AudioSource tmp8 = this->parent;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(68)
				int tmp9 = tmp8->buffer->channels;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(68)
				bool tmp10 = (tmp9 == (int)2);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(68)
				if ((tmp10)){
					HX_STACK_LINE(70)
					::lime::audio::AudioSource tmp11 = this->parent;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(70)
					int tmp12 = tmp11->buffer->bitsPerSample;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(70)
					bool tmp13 = (tmp12 == (int)8);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(70)
					if ((tmp13)){
						HX_STACK_LINE(72)
						format = (int)4354;
					}
					else{
						HX_STACK_LINE(74)
						::lime::audio::AudioSource tmp14 = this->parent;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(74)
						int tmp15 = tmp14->buffer->bitsPerSample;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(74)
						bool tmp16 = (tmp15 == (int)16);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(74)
						if ((tmp16)){
							HX_STACK_LINE(76)
							format = (int)4355;
						}
					}
				}
			}
			HX_STACK_LINE(82)
			::lime::audio::AudioSource tmp8 = this->parent;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(82)
			Dynamic tmp9 = tmp8->buffer->__srcBuffer;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(82)
			int tmp10 = format;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(82)
			::lime::audio::AudioSource tmp11 = this->parent;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(82)
			::lime::utils::ArrayBufferView tmp12 = tmp11->buffer->data;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(82)
			::lime::audio::AudioSource tmp13 = this->parent;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(82)
			::lime::utils::ArrayBufferView tmp14 = tmp13->buffer->data;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(82)
			int tmp15 = tmp14->length;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(82)
			::lime::audio::AudioSource tmp16 = this->parent;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(82)
			int tmp17 = tmp16->buffer->sampleRate;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(82)
			::lime::audio::openal::AL_obj::bufferData(tmp9,tmp10,tmp12,tmp15,tmp17);
		}
		HX_STACK_LINE(86)
		Dynamic tmp3 = ::lime::audio::openal::AL_obj::genSource();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(86)
		this->handle = tmp3;
		HX_STACK_LINE(87)
		Dynamic tmp4 = this->handle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(87)
		::lime::audio::AudioSource tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(87)
		Dynamic tmp6 = tmp5->buffer->__srcBuffer;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(87)
		::lime::audio::openal::AL_obj::sourcei(tmp4,(int)4105,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,init,(void))

Void NativeAudioSource_obj::play( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeAudioSource","play",0x61c9129f,"lime._backend.native.NativeAudioSource.play","lime/_backend/native/NativeAudioSource.hx",92,0xbddaa99c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(94)
		bool tmp = this->playing;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		if ((tmp1)){
			HX_STACK_LINE(94)
			Dynamic tmp3 = this->handle;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(94)
			Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(94)
			tmp2 = (tmp4 == null());
		}
		else{
			HX_STACK_LINE(94)
			tmp2 = true;
		}
		HX_STACK_LINE(94)
		if ((tmp2)){
			HX_STACK_LINE(96)
			return null();
		}
		HX_STACK_LINE(100)
		this->playing = true;
		HX_STACK_LINE(102)
		int tmp3 = this->getCurrentTime();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(102)
		int time = tmp3;		HX_STACK_VAR(time,"time");
		HX_STACK_LINE(104)
		Dynamic tmp4 = this->handle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(104)
		::lime::audio::openal::AL_obj::sourcePlay(tmp4);
		HX_STACK_LINE(106)
		int tmp5 = time;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(106)
		this->setCurrentTime(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,play,(void))

Void NativeAudioSource_obj::pause( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeAudioSource","pause",0x26f107eb,"lime._backend.native.NativeAudioSource.pause","lime/_backend/native/NativeAudioSource.hx",111,0xbddaa99c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(113)
		this->playing = false;
		HX_STACK_LINE(114)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		::lime::audio::openal::AL_obj::sourcePause(tmp);
		HX_STACK_LINE(116)
		::haxe::Timer tmp1 = this->timer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		if ((tmp2)){
			HX_STACK_LINE(118)
			::haxe::Timer tmp3 = this->timer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(118)
			tmp3->stop();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,pause,(void))

Void NativeAudioSource_obj::stop( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeAudioSource","stop",0x63cad4ad,"lime._backend.native.NativeAudioSource.stop","lime/_backend/native/NativeAudioSource.hx",125,0xbddaa99c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(127)
		this->playing = false;
		HX_STACK_LINE(128)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(128)
		::lime::audio::openal::AL_obj::sourceStop(tmp);
		HX_STACK_LINE(130)
		::haxe::Timer tmp1 = this->timer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(130)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(130)
		if ((tmp2)){
			HX_STACK_LINE(132)
			::haxe::Timer tmp3 = this->timer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(132)
			tmp3->stop();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,stop,(void))

Void NativeAudioSource_obj::timer_onRun( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeAudioSource","timer_onRun",0x4c90fae7,"lime._backend.native.NativeAudioSource.timer_onRun","lime/_backend/native/NativeAudioSource.hx",146,0xbddaa99c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(148)
		this->playing = false;
		HX_STACK_LINE(150)
		int tmp = this->loops;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(150)
		if ((tmp1)){
			HX_STACK_LINE(152)
			(this->loops)--;
			HX_STACK_LINE(153)
			this->setCurrentTime((int)0);
			HX_STACK_LINE(154)
			this->play();
			HX_STACK_LINE(155)
			return null();
		}
		else{
			HX_STACK_LINE(159)
			Dynamic tmp2 = this->handle;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(159)
			::lime::audio::openal::AL_obj::sourceStop(tmp2);
			HX_STACK_LINE(160)
			::haxe::Timer tmp3 = this->timer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(160)
			tmp3->stop();
		}
		HX_STACK_LINE(164)
		this->completed = true;
		HX_STACK_LINE(165)
		::lime::audio::AudioSource tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(165)
		tmp2->onComplete->dispatch();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,timer_onRun,(void))

int NativeAudioSource_obj::getCurrentTime( ){
	HX_STACK_FRAME("lime._backend.native.NativeAudioSource","getCurrentTime",0x2632805b,"lime._backend.native.NativeAudioSource.getCurrentTime","lime/_backend/native/NativeAudioSource.hx",177,0xbddaa99c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(179)
	bool tmp = this->completed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(179)
	if ((tmp)){
		HX_STACK_LINE(181)
		int tmp1 = this->getLength();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(181)
		return tmp1;
	}
	else{
		HX_STACK_LINE(185)
		Dynamic tmp1 = this->handle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(185)
		Float tmp2 = ::lime::audio::openal::AL_obj::getSourcef(tmp1,(int)4132);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(185)
		Float tmp3 = (tmp2 * (int)1000);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(185)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(185)
		::lime::audio::AudioSource tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(185)
		int tmp6 = tmp5->offset;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(185)
		int tmp7 = (tmp4 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(185)
		int time = tmp7;		HX_STACK_VAR(time,"time");
		HX_STACK_LINE(186)
		bool tmp8 = (time < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(186)
		if ((tmp8)){
			HX_STACK_LINE(186)
			return (int)0;
		}
		HX_STACK_LINE(187)
		int tmp9 = time;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(187)
		return tmp9;
	}
	HX_STACK_LINE(179)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,getCurrentTime,return )

int NativeAudioSource_obj::setCurrentTime( int value){
	HX_STACK_FRAME("lime._backend.native.NativeAudioSource","setCurrentTime",0x465268cf,"lime._backend.native.NativeAudioSource.setCurrentTime","lime/_backend/native/NativeAudioSource.hx",194,0xbddaa99c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(196)
	::lime::audio::AudioSource tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	::lime::audio::AudioBuffer tmp1 = tmp->buffer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(196)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(196)
	if ((tmp2)){
		HX_STACK_LINE(198)
		Dynamic tmp3 = this->handle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(198)
		::lime::audio::openal::AL_obj::sourceRewind(tmp3);
		HX_STACK_LINE(199)
		bool tmp4 = this->playing;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(199)
		if ((tmp4)){
			HX_STACK_LINE(199)
			Dynamic tmp5 = this->handle;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(199)
			::lime::audio::openal::AL_obj::sourcePlay(tmp5);
		}
		HX_STACK_LINE(200)
		Dynamic tmp5 = this->handle;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(200)
		int tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(200)
		::lime::audio::AudioSource tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(200)
		int tmp8 = tmp7->offset;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(200)
		int tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(200)
		Float tmp10 = (Float(tmp9) / Float((int)1000));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(200)
		::lime::audio::openal::AL_obj::sourcef(tmp5,(int)4132,tmp10);
	}
	HX_STACK_LINE(204)
	bool tmp3 = this->playing;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(204)
	if ((tmp3)){
		HX_STACK_LINE(206)
		::haxe::Timer tmp4 = this->timer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(206)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(206)
		if ((tmp5)){
			HX_STACK_LINE(208)
			::haxe::Timer tmp6 = this->timer;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(208)
			tmp6->stop();
		}
		HX_STACK_LINE(212)
		int tmp6 = this->getLength();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(212)
		int tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(212)
		int tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(212)
		int timeRemaining = tmp8;		HX_STACK_VAR(timeRemaining,"timeRemaining");
		HX_STACK_LINE(214)
		bool tmp9 = (timeRemaining > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(214)
		if ((tmp9)){
			HX_STACK_LINE(216)
			this->completed = false;
			HX_STACK_LINE(217)
			::haxe::Timer tmp10 = ::haxe::Timer_obj::__new(timeRemaining);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(217)
			this->timer = tmp10;
			HX_STACK_LINE(218)
			Dynamic tmp11 = this->timer_onRun_dyn();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(218)
			::haxe::Timer tmp12 = this->timer;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(218)
			tmp12->run = tmp11;
		}
		else{
			HX_STACK_LINE(222)
			this->completed = true;
		}
	}
	HX_STACK_LINE(228)
	int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(228)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeAudioSource_obj,setCurrentTime,return )

Float NativeAudioSource_obj::getGain( ){
	HX_STACK_FRAME("lime._backend.native.NativeAudioSource","getGain",0xfde0b86a,"lime._backend.native.NativeAudioSource.getGain","lime/_backend/native/NativeAudioSource.hx",233,0xbddaa99c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(235)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(235)
	Float tmp1 = ::lime::audio::openal::AL_obj::getSourcef(tmp,(int)4106);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(235)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,getGain,return )

Float NativeAudioSource_obj::setGain( Float value){
	HX_STACK_FRAME("lime._backend.native.NativeAudioSource","setGain",0xf0e24976,"lime._backend.native.NativeAudioSource.setGain","lime/_backend/native/NativeAudioSource.hx",240,0xbddaa99c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(242)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(242)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(242)
	::lime::audio::openal::AL_obj::sourcef(tmp,(int)4106,tmp1);
	HX_STACK_LINE(243)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(243)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeAudioSource_obj,setGain,return )

int NativeAudioSource_obj::getLength( ){
	HX_STACK_FRAME("lime._backend.native.NativeAudioSource","getLength",0x127b6d91,"lime._backend.native.NativeAudioSource.getLength","lime/_backend/native/NativeAudioSource.hx",248,0xbddaa99c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(250)
	Dynamic tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(250)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(250)
	if ((tmp1)){
		HX_STACK_LINE(252)
		Dynamic tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(252)
		return tmp2;
	}
	HX_STACK_LINE(256)
	::lime::audio::AudioSource tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(256)
	::lime::utils::ArrayBufferView tmp3 = tmp2->buffer->data;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(256)
	int tmp4 = tmp3->length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(256)
	int tmp5 = (tmp4 * (int)8);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(256)
	::lime::audio::AudioSource tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(256)
	int tmp7 = tmp6->buffer->channels;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(256)
	::lime::audio::AudioSource tmp8 = this->parent;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(256)
	int tmp9 = tmp8->buffer->bitsPerSample;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(256)
	int tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(256)
	Float tmp11 = (Float(tmp5) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(256)
	Float samples = tmp11;		HX_STACK_VAR(samples,"samples");
	HX_STACK_LINE(257)
	Float tmp12 = samples;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(257)
	::lime::audio::AudioSource tmp13 = this->parent;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(257)
	int tmp14 = tmp13->buffer->sampleRate;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(257)
	Float tmp15 = (Float(tmp12) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(257)
	Float tmp16 = (tmp15 * (int)1000);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(257)
	int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(257)
	::lime::audio::AudioSource tmp18 = this->parent;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(257)
	int tmp19 = tmp18->offset;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(257)
	int tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(257)
	return tmp20;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,getLength,return )

int NativeAudioSource_obj::setLength( int value){
	HX_STACK_FRAME("lime._backend.native.NativeAudioSource","setLength",0xf5cc599d,"lime._backend.native.NativeAudioSource.setLength","lime/_backend/native/NativeAudioSource.hx",262,0xbddaa99c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(264)
	bool tmp = this->playing;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(264)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(264)
	if ((tmp)){
		HX_STACK_LINE(264)
		Dynamic tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(264)
		Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(264)
		int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(264)
		tmp1 = (tmp3 != tmp4);
	}
	else{
		HX_STACK_LINE(264)
		tmp1 = false;
	}
	HX_STACK_LINE(264)
	if ((tmp1)){
		HX_STACK_LINE(266)
		::haxe::Timer tmp2 = this->timer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(266)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(266)
		if ((tmp3)){
			HX_STACK_LINE(268)
			::haxe::Timer tmp4 = this->timer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(268)
			tmp4->stop();
		}
		HX_STACK_LINE(272)
		int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(272)
		int tmp5 = this->getCurrentTime();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(272)
		int tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(272)
		int timeRemaining = tmp6;		HX_STACK_VAR(timeRemaining,"timeRemaining");
		HX_STACK_LINE(274)
		bool tmp7 = (timeRemaining > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(274)
		if ((tmp7)){
			HX_STACK_LINE(276)
			::haxe::Timer tmp8 = ::haxe::Timer_obj::__new(timeRemaining);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(276)
			this->timer = tmp8;
			HX_STACK_LINE(277)
			Dynamic tmp9 = this->timer_onRun_dyn();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(277)
			::haxe::Timer tmp10 = this->timer;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(277)
			tmp10->run = tmp9;
		}
	}
	HX_STACK_LINE(283)
	Dynamic tmp2 = this->length = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(283)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeAudioSource_obj,setLength,return )

int NativeAudioSource_obj::getLoops( ){
	HX_STACK_FRAME("lime._backend.native.NativeAudioSource","getLoops",0x11071744,"lime._backend.native.NativeAudioSource.getLoops","lime/_backend/native/NativeAudioSource.hx",288,0xbddaa99c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(290)
	int tmp = this->loops;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(290)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,getLoops,return )

int NativeAudioSource_obj::setLoops( int value){
	HX_STACK_FRAME("lime._backend.native.NativeAudioSource","setLoops",0xbf6470b8,"lime._backend.native.NativeAudioSource.setLoops","lime/_backend/native/NativeAudioSource.hx",295,0xbddaa99c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(297)
	int tmp = this->loops = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(297)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeAudioSource_obj,setLoops,return )

::lime::math::Vector4 NativeAudioSource_obj::getPosition( ){
	HX_STACK_FRAME("lime._backend.native.NativeAudioSource","getPosition",0xe5963a14,"lime._backend.native.NativeAudioSource.getPosition","lime/_backend/native/NativeAudioSource.hx",302,0xbddaa99c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(304)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(304)
	Array< Float > value = ::lime::audio::openal::AL_obj::getSource3f(tmp,(int)4100);		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(305)
	Float tmp1 = value->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(305)
	::lime::math::Vector4 tmp2 = this->position;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(305)
	tmp2->x = tmp1;
	HX_STACK_LINE(306)
	Float tmp3 = value->__get((int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(306)
	::lime::math::Vector4 tmp4 = this->position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(306)
	tmp4->y = tmp3;
	HX_STACK_LINE(307)
	Float tmp5 = value->__get((int)2);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(307)
	::lime::math::Vector4 tmp6 = this->position;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(307)
	tmp6->z = tmp5;
	HX_STACK_LINE(308)
	::lime::math::Vector4 tmp7 = this->position;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(308)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeAudioSource_obj,getPosition,return )

::lime::math::Vector4 NativeAudioSource_obj::setPosition( ::lime::math::Vector4 value){
	HX_STACK_FRAME("lime._backend.native.NativeAudioSource","setPosition",0xf0034120,"lime._backend.native.NativeAudioSource.setPosition","lime/_backend/native/NativeAudioSource.hx",313,0xbddaa99c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(315)
	::lime::math::Vector4 tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(315)
	tmp->x = value->x;
	HX_STACK_LINE(316)
	::lime::math::Vector4 tmp1 = this->position;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(316)
	tmp1->y = value->y;
	HX_STACK_LINE(317)
	::lime::math::Vector4 tmp2 = this->position;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(317)
	tmp2->z = value->z;
	HX_STACK_LINE(318)
	::lime::math::Vector4 tmp3 = this->position;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(318)
	tmp3->w = value->w;
	HX_STACK_LINE(320)
	::lime::audio::openal::AL_obj::distanceModel((int)0);
	HX_STACK_LINE(321)
	Dynamic tmp4 = this->handle;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(321)
	::lime::math::Vector4 tmp5 = this->position;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(321)
	Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(321)
	::lime::math::Vector4 tmp7 = this->position;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(321)
	Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(321)
	::lime::math::Vector4 tmp9 = this->position;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(321)
	Float tmp10 = tmp9->z;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(321)
	::lime::audio::openal::AL_obj::source3f(tmp4,(int)4100,tmp6,tmp8,tmp10);
	HX_STACK_LINE(323)
	::lime::math::Vector4 tmp11 = this->position;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(323)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeAudioSource_obj,setPosition,return )


NativeAudioSource_obj::NativeAudioSource_obj()
{
}

void NativeAudioSource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeAudioSource);
	HX_MARK_MEMBER_NAME(completed,"completed");
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(loops,"loops");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(playing,"playing");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_END_CLASS();
}

void NativeAudioSource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(completed,"completed");
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(loops,"loops");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(playing,"playing");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(timer,"timer");
}

Dynamic NativeAudioSource_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { return loops; }
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playing") ) { return playing; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"getGain") ) { return getGain_dyn(); }
		if (HX_FIELD_EQ(inName,"setGain") ) { return setGain_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"getLoops") ) { return getLoops_dyn(); }
		if (HX_FIELD_EQ(inName,"setLoops") ) { return setLoops_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"completed") ) { return completed; }
		if (HX_FIELD_EQ(inName,"getLength") ) { return getLength_dyn(); }
		if (HX_FIELD_EQ(inName,"setLength") ) { return setLength_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"timer_onRun") ) { return timer_onRun_dyn(); }
		if (HX_FIELD_EQ(inName,"getPosition") ) { return getPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getCurrentTime") ) { return getCurrentTime_dyn(); }
		if (HX_FIELD_EQ(inName,"setCurrentTime") ) { return setCurrentTime_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NativeAudioSource_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { loops=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::lime::audio::AudioSource >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playing") ) { playing=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< ::lime::math::Vector4 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"completed") ) { completed=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NativeAudioSource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("completed","\x8b","\xa1","\x38","\x4f"));
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("loops","\x8f","\xf1","\xf9","\x78"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(NativeAudioSource_obj,completed),HX_HCSTRING("completed","\x8b","\xa1","\x38","\x4f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeAudioSource_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeAudioSource_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsInt,(int)offsetof(NativeAudioSource_obj,loops),HX_HCSTRING("loops","\x8f","\xf1","\xf9","\x78")},
	{hx::fsObject /*::lime::audio::AudioSource*/ ,(int)offsetof(NativeAudioSource_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsBool,(int)offsetof(NativeAudioSource_obj,playing),HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a")},
	{hx::fsObject /*::lime::math::Vector4*/ ,(int)offsetof(NativeAudioSource_obj,position),HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(NativeAudioSource_obj,timer),HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("completed","\x8b","\xa1","\x38","\x4f"),
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("loops","\x8f","\xf1","\xf9","\x78"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("timer_onRun","\x32","\x24","\xe9","\x57"),
	HX_HCSTRING("getCurrentTime","\xf0","\xf7","\x2c","\x0d"),
	HX_HCSTRING("setCurrentTime","\x64","\xe0","\x4c","\x2d"),
	HX_HCSTRING("getGain","\x35","\xa0","\xe1","\x16"),
	HX_HCSTRING("setGain","\x41","\x31","\xe3","\x09"),
	HX_HCSTRING("getLength","\x1c","\x1e","\x5e","\x1b"),
	HX_HCSTRING("setLength","\x28","\x0a","\xaf","\xfe"),
	HX_HCSTRING("getLoops","\x19","\x01","\xd1","\xd8"),
	HX_HCSTRING("setLoops","\x8d","\x5a","\x2e","\x87"),
	HX_HCSTRING("getPosition","\x5f","\x63","\xee","\xf0"),
	HX_HCSTRING("setPosition","\x6b","\x6a","\x5b","\xfb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeAudioSource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeAudioSource_obj::__mClass,"__mClass");
};

#endif

hx::Class NativeAudioSource_obj::__mClass;

void NativeAudioSource_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native.NativeAudioSource","\xa3","\xbb","\x85","\x6b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NativeAudioSource_obj >;
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

} // end namespace lime
} // end namespace _backend
} // end namespace native
