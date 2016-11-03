#include <hxcpp.h>

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
#ifndef INCLUDED_lime_math_Vector4
#include <lime/math/Vector4.h>
#endif
namespace lime{
namespace audio{

Void AudioSource_obj::__construct(::lime::audio::AudioBuffer buffer,hx::Null< int >  __o_offset,Dynamic length,hx::Null< int >  __o_loops)
{
HX_STACK_FRAME("lime.audio.AudioSource","new",0x2bd91bf2,"lime.audio.AudioSource.new","lime/audio/AudioSource.hx",10,0x17352e00)
HX_STACK_THIS(this)
HX_STACK_ARG(buffer,"buffer")
HX_STACK_ARG(__o_offset,"offset")
HX_STACK_ARG(length,"length")
HX_STACK_ARG(__o_loops,"loops")
int offset = __o_offset.Default(0);
int loops = __o_loops.Default(0);
{
	HX_STACK_LINE(13)
	this->onComplete = ::lime::app::_Event_Void_Void_obj::__new();
	HX_STACK_LINE(28)
	this->buffer = buffer;
	HX_STACK_LINE(29)
	this->offset = offset;
	HX_STACK_LINE(31)
	::lime::_backend::native::NativeAudioSource tmp = ::lime::_backend::native::NativeAudioSource_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	this->backend = tmp;
	HX_STACK_LINE(33)
	bool tmp1 = (length != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	if ((tmp1)){
		HX_STACK_LINE(33)
		tmp2 = (length != (int)0);
	}
	else{
		HX_STACK_LINE(33)
		tmp2 = false;
	}
	HX_STACK_LINE(33)
	if ((tmp2)){
		HX_STACK_LINE(35)
		Dynamic tmp3 = length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		this->set_length(tmp3);
	}
	HX_STACK_LINE(39)
	int tmp3 = loops;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(39)
	this->set_loops(tmp3);
	HX_STACK_LINE(41)
	bool tmp4 = (buffer != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(41)
	if ((tmp4)){
		HX_STACK_LINE(43)
		this->init();
	}
}
;
	return null();
}

//AudioSource_obj::~AudioSource_obj() { }

Dynamic AudioSource_obj::__CreateEmpty() { return  new AudioSource_obj; }
hx::ObjectPtr< AudioSource_obj > AudioSource_obj::__new(::lime::audio::AudioBuffer buffer,hx::Null< int >  __o_offset,Dynamic length,hx::Null< int >  __o_loops)
{  hx::ObjectPtr< AudioSource_obj > _result_ = new AudioSource_obj();
	_result_->__construct(buffer,__o_offset,length,__o_loops);
	return _result_;}

Dynamic AudioSource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioSource_obj > _result_ = new AudioSource_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void AudioSource_obj::dispose( ){
{
		HX_STACK_FRAME("lime.audio.AudioSource","dispose",0xab53fd31,"lime.audio.AudioSource.dispose","lime/audio/AudioSource.hx",50,0x17352e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		::lime::_backend::native::NativeAudioSource tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		tmp->dispose();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,dispose,(void))

Void AudioSource_obj::init( ){
{
		HX_STACK_FRAME("lime.audio.AudioSource","init",0x2ed80f3e,"lime.audio.AudioSource.init","lime/audio/AudioSource.hx",57,0x17352e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(59)
		::lime::_backend::native::NativeAudioSource tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		tmp->init();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,init,(void))

Void AudioSource_obj::play( ){
{
		HX_STACK_FRAME("lime.audio.AudioSource","play",0x33770222,"lime.audio.AudioSource.play","lime/audio/AudioSource.hx",64,0x17352e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		::lime::_backend::native::NativeAudioSource tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		tmp->play();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,play,(void))

Void AudioSource_obj::pause( ){
{
		HX_STACK_FRAME("lime.audio.AudioSource","pause",0xcd74ab08,"lime.audio.AudioSource.pause","lime/audio/AudioSource.hx",71,0x17352e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		::lime::_backend::native::NativeAudioSource tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		tmp->pause();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,pause,(void))

Void AudioSource_obj::stop( ){
{
		HX_STACK_FRAME("lime.audio.AudioSource","stop",0x3578c430,"lime.audio.AudioSource.stop","lime/audio/AudioSource.hx",78,0x17352e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		::lime::_backend::native::NativeAudioSource tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		tmp->stop();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,stop,(void))

int AudioSource_obj::get_currentTime( ){
	HX_STACK_FRAME("lime.audio.AudioSource","get_currentTime",0x5201bb0f,"lime.audio.AudioSource.get_currentTime","lime/audio/AudioSource.hx",92,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_LINE(94)
	::lime::_backend::native::NativeAudioSource tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	int tmp1 = tmp->getCurrentTime();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(94)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_currentTime,return )

int AudioSource_obj::set_currentTime( int value){
	HX_STACK_FRAME("lime.audio.AudioSource","set_currentTime",0x4dcd381b,"lime.audio.AudioSource.set_currentTime","lime/audio/AudioSource.hx",99,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(101)
	::lime::_backend::native::NativeAudioSource tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(101)
	int tmp2 = tmp->setCurrentTime(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(101)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_currentTime,return )

Float AudioSource_obj::get_gain( ){
	HX_STACK_FRAME("lime.audio.AudioSource","get_gain",0xda9f2f36,"lime.audio.AudioSource.get_gain","lime/audio/AudioSource.hx",106,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_LINE(108)
	::lime::_backend::native::NativeAudioSource tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	Float tmp1 = tmp->getGain();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(108)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_gain,return )

Float AudioSource_obj::set_gain( Float value){
	HX_STACK_FRAME("lime.audio.AudioSource","set_gain",0x88fc88aa,"lime.audio.AudioSource.set_gain","lime/audio/AudioSource.hx",113,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(115)
	::lime::_backend::native::NativeAudioSource tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(115)
	Float tmp2 = tmp->setGain(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(115)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_gain,return )

int AudioSource_obj::get_length( ){
	HX_STACK_FRAME("lime.audio.AudioSource","get_length",0x74de2f5d,"lime.audio.AudioSource.get_length","lime/audio/AudioSource.hx",120,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_LINE(122)
	::lime::_backend::native::NativeAudioSource tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	int tmp1 = tmp->getLength();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(122)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_length,return )

int AudioSource_obj::set_length( int value){
	HX_STACK_FRAME("lime.audio.AudioSource","set_length",0x785bcdd1,"lime.audio.AudioSource.set_length","lime/audio/AudioSource.hx",127,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(129)
	::lime::_backend::native::NativeAudioSource tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(129)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(129)
	int tmp2 = tmp->setLength(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(129)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_length,return )

int AudioSource_obj::get_loops( ){
	HX_STACK_FRAME("lime.audio.AudioSource","get_loops",0x5af092f8,"lime.audio.AudioSource.get_loops","lime/audio/AudioSource.hx",134,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_LINE(136)
	::lime::_backend::native::NativeAudioSource tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	int tmp1 = tmp->getLoops();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(136)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_loops,return )

int AudioSource_obj::set_loops( int value){
	HX_STACK_FRAME("lime.audio.AudioSource","set_loops",0x3e417f04,"lime.audio.AudioSource.set_loops","lime/audio/AudioSource.hx",141,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(143)
	::lime::_backend::native::NativeAudioSource tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(143)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(143)
	int tmp2 = tmp->setLoops(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(143)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_loops,return )

::lime::math::Vector4 AudioSource_obj::get_position( ){
	HX_STACK_FRAME("lime.audio.AudioSource","get_position",0xb78606e0,"lime.audio.AudioSource.get_position","lime/audio/AudioSource.hx",148,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_LINE(150)
	::lime::_backend::native::NativeAudioSource tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(150)
	::lime::math::Vector4 tmp1 = tmp->getPosition();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(150)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_position,return )

::lime::math::Vector4 AudioSource_obj::set_position( ::lime::math::Vector4 value){
	HX_STACK_FRAME("lime.audio.AudioSource","set_position",0xcc7f2a54,"lime.audio.AudioSource.set_position","lime/audio/AudioSource.hx",155,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(157)
	::lime::_backend::native::NativeAudioSource tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	::lime::math::Vector4 tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(157)
	::lime::math::Vector4 tmp2 = tmp->setPosition(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(157)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_position,return )


AudioSource_obj::AudioSource_obj()
{
}

void AudioSource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioSource);
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(backend,"backend");
	HX_MARK_END_CLASS();
}

void AudioSource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(backend,"backend");
}

Dynamic AudioSource_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"gain") ) { if (inCallProp == hx::paccAlways) return get_gain(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { if (inCallProp == hx::paccAlways) return get_loops(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"backend") ) { return backend; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return get_position(); }
		if (HX_FIELD_EQ(inName,"get_gain") ) { return get_gain_dyn(); }
		if (HX_FIELD_EQ(inName,"set_gain") ) { return set_gain_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_loops") ) { return get_loops_dyn(); }
		if (HX_FIELD_EQ(inName,"set_loops") ) { return set_loops_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete; }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return set_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { if (inCallProp == hx::paccAlways) return get_currentTime(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_currentTime") ) { return get_currentTime_dyn(); }
		if (HX_FIELD_EQ(inName,"set_currentTime") ) { return set_currentTime_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AudioSource_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"gain") ) { if (inCallProp == hx::paccAlways) return set_gain(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { if (inCallProp == hx::paccAlways) return set_loops(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::lime::audio::AudioBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return set_length(inValue); }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"backend") ) { backend=inValue.Cast< ::lime::_backend::native::NativeAudioSource >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return set_position(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast< ::lime::app::_Event_Void_Void >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { if (inCallProp == hx::paccAlways) return set_currentTime(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioSource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"));
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("currentTime","\xe6","\xa4","\x8e","\x85"));
	outFields->push(HX_HCSTRING("gain","\x7f","\xf0","\x5e","\x44"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("loops","\x8f","\xf1","\xf9","\x78"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::app::_Event_Void_Void*/ ,(int)offsetof(AudioSource_obj,onComplete),HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d")},
	{hx::fsObject /*::lime::audio::AudioBuffer*/ ,(int)offsetof(AudioSource_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsInt,(int)offsetof(AudioSource_obj,offset),HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{hx::fsObject /*::lime::_backend::native::NativeAudioSource*/ ,(int)offsetof(AudioSource_obj,backend),HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("get_currentTime","\x7d","\x5c","\x70","\x46"),
	HX_HCSTRING("set_currentTime","\x89","\xd9","\x3b","\x42"),
	HX_HCSTRING("get_gain","\x08","\xac","\x19","\xc4"),
	HX_HCSTRING("set_gain","\x7c","\x05","\x77","\x72"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	HX_HCSTRING("get_loops","\xe6","\x4d","\xa3","\xbc"),
	HX_HCSTRING("set_loops","\xf2","\x39","\xf4","\x9f"),
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("set_position","\x26","\x78","\x0d","\x95"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioSource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioSource_obj::__mClass,"__mClass");
};

#endif

hx::Class AudioSource_obj::__mClass;

void AudioSource_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.audio.AudioSource","\x00","\xfb","\x03","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AudioSource_obj >;
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
} // end namespace audio
