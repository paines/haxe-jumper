#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_audio_AudioSource
#include <lime/audio/AudioSource.h>
#endif
#ifndef INCLUDED_lime_math_Vector4
#include <lime/math/Vector4.h>
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
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_media_SoundMixer
#include <openfl/media/SoundMixer.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
namespace openfl{
namespace media{

Void SoundChannel_obj::__construct(::lime::audio::AudioSource source,::openfl::media::SoundTransform soundTransform)
{
HX_STACK_FRAME("openfl.media.SoundChannel","new",0xfc94e2ae,"openfl.media.SoundChannel.new","openfl/media/SoundChannel.hx",25,0xa4290000)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
HX_STACK_ARG(soundTransform,"soundTransform")
{
	HX_STACK_LINE(27)
	super::__construct(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(29)
	this->leftPeak = (int)1;
	HX_STACK_LINE(30)
	this->rightPeak = (int)1;
	HX_STACK_LINE(32)
	bool tmp = (soundTransform != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	if ((tmp)){
		HX_STACK_LINE(34)
		this->__soundTransform = soundTransform;
	}
	else{
		HX_STACK_LINE(38)
		::openfl::media::SoundTransform tmp1 = ::openfl::media::SoundTransform_obj::__new(null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		this->__soundTransform = tmp1;
	}
	HX_STACK_LINE(42)
	bool tmp1 = (source != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	if ((tmp1)){
		HX_STACK_LINE(44)
		this->__source = source;
		HX_STACK_LINE(45)
		::lime::audio::AudioSource tmp2 = this->__source;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		Dynamic tmp3 = this->source_onComplete_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		tmp2->onComplete->add(tmp3,null(),null());
		HX_STACK_LINE(46)
		this->__isValid = true;
		HX_STACK_LINE(48)
		::lime::audio::AudioSource tmp4 = this->__source;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(48)
		tmp4->play();
	}
	HX_STACK_LINE(52)
	::openfl::media::SoundMixer_obj::__registerSoundChannel(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//SoundChannel_obj::~SoundChannel_obj() { }

Dynamic SoundChannel_obj::__CreateEmpty() { return  new SoundChannel_obj; }
hx::ObjectPtr< SoundChannel_obj > SoundChannel_obj::__new(::lime::audio::AudioSource source,::openfl::media::SoundTransform soundTransform)
{  hx::ObjectPtr< SoundChannel_obj > _result_ = new SoundChannel_obj();
	_result_->__construct(source,soundTransform);
	return _result_;}

Dynamic SoundChannel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundChannel_obj > _result_ = new SoundChannel_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void SoundChannel_obj::stop( ){
{
		HX_STACK_FRAME("openfl.media.SoundChannel","stop",0x090ae1f4,"openfl.media.SoundChannel.stop","openfl/media/SoundChannel.hx",57,0xa4290000)
		HX_STACK_THIS(this)
		HX_STACK_LINE(59)
		::openfl::media::SoundMixer_obj::__unregisterSoundChannel(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(61)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		if ((tmp1)){
			HX_STACK_LINE(61)
			return null();
		}
		HX_STACK_LINE(63)
		::lime::audio::AudioSource tmp2 = this->__source;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(63)
		tmp2->stop();
		HX_STACK_LINE(64)
		this->__dispose();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,stop,(void))

Void SoundChannel_obj::__dispose( ){
{
		HX_STACK_FRAME("openfl.media.SoundChannel","__dispose",0x8d7f924d,"openfl.media.SoundChannel.__dispose","openfl/media/SoundChannel.hx",69,0xa4290000)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		if ((tmp1)){
			HX_STACK_LINE(71)
			return null();
		}
		HX_STACK_LINE(73)
		::lime::audio::AudioSource tmp2 = this->__source;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		tmp2->dispose();
		HX_STACK_LINE(74)
		this->__isValid = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,__dispose,(void))

Void SoundChannel_obj::__updateTransform( ){
{
		HX_STACK_FRAME("openfl.media.SoundChannel","__updateTransform",0xba5f6dd1,"openfl.media.SoundChannel.__updateTransform","openfl/media/SoundChannel.hx",79,0xa4290000)
		HX_STACK_THIS(this)
		HX_STACK_LINE(81)
		::openfl::media::SoundTransform tmp = this->get_soundTransform();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		this->set_soundTransform(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,__updateTransform,(void))

Float SoundChannel_obj::get_position( ){
	HX_STACK_FRAME("openfl.media.SoundChannel","get_position",0x46d188a4,"openfl.media.SoundChannel.get_position","openfl/media/SoundChannel.hx",93,0xa4290000)
	HX_STACK_THIS(this)
	HX_STACK_LINE(95)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	if ((tmp1)){
		HX_STACK_LINE(95)
		return (int)0;
	}
	HX_STACK_LINE(97)
	::lime::audio::AudioSource tmp2 = this->__source;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(97)
	int tmp3 = tmp2->get_currentTime();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(97)
	::lime::audio::AudioSource tmp4 = this->__source;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(97)
	int tmp5 = tmp4->offset;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(97)
	int tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(97)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_position,return )

Float SoundChannel_obj::set_position( Float value){
	HX_STACK_FRAME("openfl.media.SoundChannel","set_position",0x5bcaac18,"openfl.media.SoundChannel.set_position","openfl/media/SoundChannel.hx",102,0xa4290000)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(104)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(104)
	if ((tmp1)){
		HX_STACK_LINE(104)
		return (int)0;
	}
	HX_STACK_LINE(106)
	::lime::audio::AudioSource tmp2 = this->__source;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(106)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(106)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(106)
	::lime::audio::AudioSource tmp5 = this->__source;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(106)
	int tmp6 = tmp5->offset;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(106)
	int tmp7 = (tmp4 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(106)
	tmp2->set_currentTime(tmp7);
	HX_STACK_LINE(107)
	Float tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(107)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,set_position,return )

::openfl::media::SoundTransform SoundChannel_obj::get_soundTransform( ){
	HX_STACK_FRAME("openfl.media.SoundChannel","get_soundTransform",0xc6e884d8,"openfl.media.SoundChannel.get_soundTransform","openfl/media/SoundChannel.hx",112,0xa4290000)
	HX_STACK_THIS(this)
	HX_STACK_LINE(114)
	::openfl::media::SoundTransform tmp = this->__soundTransform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	::openfl::media::SoundTransform tmp1 = tmp->clone();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(114)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_soundTransform,return )

::openfl::media::SoundTransform SoundChannel_obj::set_soundTransform( ::openfl::media::SoundTransform value){
	HX_STACK_FRAME("openfl.media.SoundChannel","set_soundTransform",0xa397b74c,"openfl.media.SoundChannel.set_soundTransform","openfl/media/SoundChannel.hx",119,0xa4290000)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(121)
	bool tmp = (value != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(121)
	if ((tmp)){
		HX_STACK_LINE(123)
		::openfl::media::SoundTransform tmp1 = this->__soundTransform;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		tmp1->pan = value->pan;
		HX_STACK_LINE(124)
		::openfl::media::SoundTransform tmp2 = this->__soundTransform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(124)
		tmp2->volume = value->volume;
		HX_STACK_LINE(126)
		::openfl::media::SoundTransform tmp3 = ::openfl::media::SoundMixer_obj::__soundTransform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(126)
		Float tmp4 = tmp3->pan;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(126)
		::openfl::media::SoundTransform tmp5 = this->__soundTransform;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(126)
		Float tmp6 = tmp5->pan;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(126)
		Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(126)
		Float pan = tmp7;		HX_STACK_VAR(pan,"pan");
		HX_STACK_LINE(128)
		bool tmp8 = (pan < (int)-1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(128)
		if ((tmp8)){
			HX_STACK_LINE(128)
			pan = (int)-1;
		}
		HX_STACK_LINE(129)
		bool tmp9 = (pan > (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(129)
		if ((tmp9)){
			HX_STACK_LINE(129)
			pan = (int)1;
		}
		HX_STACK_LINE(131)
		::openfl::media::SoundTransform tmp10 = ::openfl::media::SoundMixer_obj::__soundTransform;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(131)
		Float tmp11 = tmp10->volume;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(131)
		::openfl::media::SoundTransform tmp12 = this->__soundTransform;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(131)
		Float tmp13 = tmp12->volume;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(131)
		Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(131)
		Float volume = tmp14;		HX_STACK_VAR(volume,"volume");
		HX_STACK_LINE(133)
		bool tmp15 = this->__isValid;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(133)
		if ((tmp15)){
			HX_STACK_LINE(135)
			::lime::audio::AudioSource tmp16 = this->__source;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(135)
			Float tmp17 = volume;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(135)
			tmp16->set_gain(tmp17);
			HX_STACK_LINE(137)
			::lime::audio::AudioSource tmp18 = this->__source;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(137)
			::lime::math::Vector4 tmp19 = tmp18->get_position();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(137)
			::lime::math::Vector4 position = tmp19;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(138)
			position->x = pan;
			HX_STACK_LINE(139)
			int tmp20 = (int)-1;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(139)
			Float tmp21 = pan;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(139)
			Float tmp22 = ::Math_obj::pow(tmp21,(int)2);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(139)
			Float tmp23 = ((int)1 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(139)
			Float tmp24 = ::Math_obj::sqrt(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(139)
			Float tmp25 = (tmp20 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(139)
			position->z = tmp25;
			HX_STACK_LINE(140)
			::lime::audio::AudioSource tmp26 = this->__source;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(140)
			::lime::math::Vector4 tmp27 = position;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(140)
			tmp26->set_position(tmp27);
			HX_STACK_LINE(142)
			::openfl::media::SoundTransform tmp28 = value;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(142)
			return tmp28;
		}
	}
	HX_STACK_LINE(148)
	::openfl::media::SoundTransform tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(148)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,set_soundTransform,return )

Void SoundChannel_obj::source_onComplete( ){
{
		HX_STACK_FRAME("openfl.media.SoundChannel","source_onComplete",0xb57ef7ea,"openfl.media.SoundChannel.source_onComplete","openfl/media/SoundChannel.hx",160,0xa4290000)
		HX_STACK_THIS(this)
		HX_STACK_LINE(162)
		::openfl::media::SoundMixer_obj::__unregisterSoundChannel(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(164)
		this->__dispose();
		HX_STACK_LINE(165)
		::openfl::events::Event tmp = ::openfl::events::Event_obj::__new(HX_HCSTRING("soundComplete","\xa8","\x30","\xe6","\x1c"),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(165)
		this->dispatchEvent(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,source_onComplete,(void))


SoundChannel_obj::SoundChannel_obj()
{
}

void SoundChannel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundChannel);
	HX_MARK_MEMBER_NAME(leftPeak,"leftPeak");
	HX_MARK_MEMBER_NAME(rightPeak,"rightPeak");
	HX_MARK_MEMBER_NAME(__isValid,"__isValid");
	HX_MARK_MEMBER_NAME(__soundTransform,"__soundTransform");
	HX_MARK_MEMBER_NAME(__source,"__source");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SoundChannel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(leftPeak,"leftPeak");
	HX_VISIT_MEMBER_NAME(rightPeak,"rightPeak");
	HX_VISIT_MEMBER_NAME(__isValid,"__isValid");
	HX_VISIT_MEMBER_NAME(__soundTransform,"__soundTransform");
	HX_VISIT_MEMBER_NAME(__source,"__source");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SoundChannel_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"leftPeak") ) { return leftPeak; }
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return get_position(); }
		if (HX_FIELD_EQ(inName,"__source") ) { return __source; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rightPeak") ) { return rightPeak; }
		if (HX_FIELD_EQ(inName,"__isValid") ) { return __isValid; }
		if (HX_FIELD_EQ(inName,"__dispose") ) { return __dispose_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { if (inCallProp == hx::paccAlways) return get_soundTransform(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__soundTransform") ) { return __soundTransform; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__updateTransform") ) { return __updateTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"source_onComplete") ) { return source_onComplete_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_soundTransform") ) { return get_soundTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_soundTransform") ) { return set_soundTransform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SoundChannel_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"leftPeak") ) { leftPeak=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return set_position(inValue); }
		if (HX_FIELD_EQ(inName,"__source") ) { __source=inValue.Cast< ::lime::audio::AudioSource >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rightPeak") ) { rightPeak=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isValid") ) { __isValid=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { if (inCallProp == hx::paccAlways) return set_soundTransform(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__soundTransform") ) { __soundTransform=inValue.Cast< ::openfl::media::SoundTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundChannel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("leftPeak","\xc6","\x21","\x50","\x51"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("rightPeak","\x1b","\x34","\x1b","\xb5"));
	outFields->push(HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22"));
	outFields->push(HX_HCSTRING("__isValid","\x92","\x69","\x8c","\x4f"));
	outFields->push(HX_HCSTRING("__soundTransform","\xbd","\x79","\x1e","\x57"));
	outFields->push(HX_HCSTRING("__source","\xfb","\x1b","\x61","\xda"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(SoundChannel_obj,leftPeak),HX_HCSTRING("leftPeak","\xc6","\x21","\x50","\x51")},
	{hx::fsFloat,(int)offsetof(SoundChannel_obj,rightPeak),HX_HCSTRING("rightPeak","\x1b","\x34","\x1b","\xb5")},
	{hx::fsBool,(int)offsetof(SoundChannel_obj,__isValid),HX_HCSTRING("__isValid","\x92","\x69","\x8c","\x4f")},
	{hx::fsObject /*::openfl::media::SoundTransform*/ ,(int)offsetof(SoundChannel_obj,__soundTransform),HX_HCSTRING("__soundTransform","\xbd","\x79","\x1e","\x57")},
	{hx::fsObject /*::lime::audio::AudioSource*/ ,(int)offsetof(SoundChannel_obj,__source),HX_HCSTRING("__source","\xfb","\x1b","\x61","\xda")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("leftPeak","\xc6","\x21","\x50","\x51"),
	HX_HCSTRING("rightPeak","\x1b","\x34","\x1b","\xb5"),
	HX_HCSTRING("__isValid","\x92","\x69","\x8c","\x4f"),
	HX_HCSTRING("__soundTransform","\xbd","\x79","\x1e","\x57"),
	HX_HCSTRING("__source","\xfb","\x1b","\x61","\xda"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("__dispose","\x7f","\xd1","\x9a","\x3c"),
	HX_HCSTRING("__updateTransform","\x03","\x2f","\x78","\x18"),
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("set_position","\x26","\x78","\x0d","\x95"),
	HX_HCSTRING("get_soundTransform","\x66","\xcf","\x78","\xbe"),
	HX_HCSTRING("set_soundTransform","\xda","\x01","\x28","\x9b"),
	HX_HCSTRING("source_onComplete","\x1c","\xb9","\x97","\x13"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundChannel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::__mClass,"__mClass");
};

#endif

hx::Class SoundChannel_obj::__mClass;

void SoundChannel_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.media.SoundChannel","\xbc","\xb3","\xae","\x75");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SoundChannel_obj >;
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
} // end namespace media
