#include <hxcpp.h>

#ifndef INCLUDED_DefaultAssetLibrary
#include <DefaultAssetLibrary.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_AssetCache
#include <lime/AssetCache.h>
#endif
#ifndef INCLUDED_lime_AssetLibrary
#include <lime/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_Assets
#include <lime/Assets.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise_String
#include <lime/app/Promise_String.h>
#endif
#ifndef INCLUDED_lime_app_Promise_lime_AssetLibrary
#include <lime/app/Promise_lime_AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_app_Promise_lime_audio_AudioBuffer
#include <lime/app/Promise_lime_audio_AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_app_Promise_lime_graphics_Image
#include <lime/app/Promise_lime_graphics_Image.h>
#endif
#ifndef INCLUDED_lime_app_Promise_lime_text_Font
#include <lime/app/Promise_lime_text_Font.h>
#endif
#ifndef INCLUDED_lime_app_Promise_lime_utils_Bytes
#include <lime/app/Promise_lime_utils_Bytes.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_audio_AudioBuffer
#include <lime/audio/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_Bytes
#include <lime/utils/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
namespace lime{

Void Assets_obj::__construct()
{
	return null();
}

//Assets_obj::~Assets_obj() { }

Dynamic Assets_obj::__CreateEmpty() { return  new Assets_obj; }
hx::ObjectPtr< Assets_obj > Assets_obj::__new()
{  hx::ObjectPtr< Assets_obj > _result_ = new Assets_obj();
	_result_->__construct();
	return _result_;}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assets_obj > _result_ = new Assets_obj();
	_result_->__construct();
	return _result_;}

::lime::AssetCache Assets_obj::cache;

::haxe::ds::StringMap Assets_obj::libraries;

::lime::app::_Event_Void_Void Assets_obj::onChange;

bool Assets_obj::initialized;

bool Assets_obj::exists( ::String id,::String type){
	HX_STACK_FRAME("lime.Assets","exists",0x8a084f2e,"lime.Assets.exists","lime/Assets.hx",50,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(52)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(56)
	bool tmp = (type == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	if ((tmp)){
		HX_STACK_LINE(58)
		type = HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f");
	}
	HX_STACK_LINE(62)
	int tmp1 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	::String tmp2 = id.substring((int)0,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(62)
	::String libraryName = tmp2;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(63)
	int tmp3 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(63)
	int tmp4 = (tmp3 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(63)
	::String tmp5 = id.substr(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(63)
	::String symbolName = tmp5;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(64)
	::String tmp6 = libraryName;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(64)
	::lime::AssetLibrary tmp7 = ::lime::Assets_obj::getLibrary(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(64)
	::lime::AssetLibrary library = tmp7;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(66)
	bool tmp8 = (library != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(66)
	if ((tmp8)){
		HX_STACK_LINE(68)
		::String tmp9 = symbolName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(68)
		::String tmp10 = type;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(68)
		bool tmp11 = library->exists(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(68)
		return tmp11;
	}
	HX_STACK_LINE(74)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,exists,return )

::lime::audio::AudioBuffer Assets_obj::getAudioBuffer( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","getAudioBuffer",0x1f7814d2,"lime.Assets.getAudioBuffer","lime/Assets.hx",85,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(87)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(91)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		if ((tmp1)){
			HX_STACK_LINE(91)
			::lime::AssetCache tmp3 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(91)
			::lime::AssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(91)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(91)
			tmp2 = tmp5->enabled;
		}
		else{
			HX_STACK_LINE(91)
			tmp2 = false;
		}
		HX_STACK_LINE(91)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(91)
		if ((tmp2)){
			HX_STACK_LINE(91)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(91)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(91)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(91)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(91)
			tmp3 = tmp5->audio->exists(tmp7);
		}
		else{
			HX_STACK_LINE(91)
			tmp3 = false;
		}
		HX_STACK_LINE(91)
		if ((tmp3)){
			HX_STACK_LINE(93)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(93)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(93)
			::lime::audio::AudioBuffer tmp6 = tmp4->audio->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(93)
			::lime::audio::AudioBuffer audio = tmp6;		HX_STACK_VAR(audio,"audio");
			HX_STACK_LINE(95)
			::lime::audio::AudioBuffer tmp7 = audio;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(95)
			bool tmp8 = ::lime::Assets_obj::isValidAudio(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(95)
			if ((tmp8)){
				HX_STACK_LINE(97)
				::lime::audio::AudioBuffer tmp9 = audio;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(97)
				return tmp9;
			}
		}
		HX_STACK_LINE(103)
		int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(103)
		::String tmp5 = id.substring((int)0,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(103)
		::String libraryName = tmp5;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(104)
		int tmp6 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(104)
		int tmp7 = (tmp6 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(104)
		::String tmp8 = id.substr(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(104)
		::String symbolName = tmp8;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(105)
		::String tmp9 = libraryName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(105)
		::lime::AssetLibrary tmp10 = ::lime::Assets_obj::getLibrary(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(105)
		::lime::AssetLibrary library = tmp10;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(107)
		bool tmp11 = (library != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(107)
		if ((tmp11)){
			HX_STACK_LINE(109)
			::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(109)
			bool tmp13 = library->exists(tmp12,HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(109)
			if ((tmp13)){
				HX_STACK_LINE(111)
				::String tmp14 = symbolName;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(111)
				bool tmp15 = library->isLocal(tmp14,HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(111)
				if ((tmp15)){
					HX_STACK_LINE(113)
					::String tmp16 = symbolName;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(113)
					::lime::audio::AudioBuffer tmp17 = library->getAudioBuffer(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(113)
					::lime::audio::AudioBuffer audio = tmp17;		HX_STACK_VAR(audio,"audio");
					HX_STACK_LINE(115)
					bool tmp18 = useCache;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(115)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(115)
					if ((tmp18)){
						HX_STACK_LINE(115)
						::lime::AssetCache tmp20 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(115)
						::lime::AssetCache tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(115)
						tmp19 = tmp21->enabled;
					}
					else{
						HX_STACK_LINE(115)
						tmp19 = false;
					}
					HX_STACK_LINE(115)
					if ((tmp19)){
						HX_STACK_LINE(117)
						::lime::AssetCache tmp20 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(117)
						::String tmp21 = id;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(117)
						::lime::audio::AudioBuffer tmp22 = audio;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(117)
						tmp20->audio->set(tmp21,tmp22);
					}
					HX_STACK_LINE(121)
					::lime::audio::AudioBuffer tmp20 = audio;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(121)
					return tmp20;
				}
				else{
					HX_STACK_LINE(125)
					::String tmp16 = (HX_HCSTRING("Audio asset \"","\x88","\xb4","\xa0","\xcb") + id);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(125)
					::String tmp17 = (tmp16 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(125)
					Dynamic tmp18 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),125,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getAudioBuffer","\x80","\x41","\xe3","\x26"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(125)
					::lime::utils::Log_obj::info(tmp17,tmp18);
				}
			}
			else{
				HX_STACK_LINE(131)
				::String tmp14 = (HX_HCSTRING("There is no audio asset with an ID of \"","\x26","\xd6","\xa7","\xd5") + id);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(131)
				::String tmp15 = (tmp14 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(131)
				Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),131,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getAudioBuffer","\x80","\x41","\xe3","\x26"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(131)
				::lime::utils::Log_obj::info(tmp15,tmp16);
			}
		}
		else{
			HX_STACK_LINE(137)
			::String tmp12 = (HX_HCSTRING("There is no asset library named \"","\xa1","\x83","\x5f","\x51") + libraryName);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(137)
			::String tmp13 = (tmp12 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(137)
			Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),137,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getAudioBuffer","\x80","\x41","\xe3","\x26"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(137)
			::lime::utils::Log_obj::info(tmp13,tmp14);
		}
		HX_STACK_LINE(143)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getAudioBuffer,return )

::lime::utils::Bytes Assets_obj::getBytes( ::String id){
	HX_STACK_FRAME("lime.Assets","getBytes",0xe703c1c7,"lime.Assets.getBytes","lime/Assets.hx",154,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(156)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(160)
	int tmp = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(160)
	::String tmp1 = id.substring((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(160)
	::String libraryName = tmp1;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(161)
	int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(161)
	int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(161)
	::String tmp4 = id.substr(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(161)
	::String symbolName = tmp4;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(162)
	::String tmp5 = libraryName;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(162)
	::lime::AssetLibrary tmp6 = ::lime::Assets_obj::getLibrary(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(162)
	::lime::AssetLibrary library = tmp6;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(164)
	bool tmp7 = (library != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(164)
	if ((tmp7)){
		HX_STACK_LINE(166)
		::String tmp8 = symbolName;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(166)
		bool tmp9 = library->exists(tmp8,HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(166)
		if ((tmp9)){
			HX_STACK_LINE(168)
			::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(168)
			bool tmp11 = library->isLocal(tmp10,HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(168)
			if ((tmp11)){
				HX_STACK_LINE(170)
				::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(170)
				::lime::utils::Bytes tmp13 = library->getBytes(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(170)
				return tmp13;
			}
			else{
				HX_STACK_LINE(174)
				::String tmp12 = (HX_HCSTRING("String or Bytes asset \"","\x6f","\xc9","\x54","\x0e") + id);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(174)
				::String tmp13 = (tmp12 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(174)
				Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),174,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(174)
				::lime::utils::Log_obj::info(tmp13,tmp14);
			}
		}
		else{
			HX_STACK_LINE(180)
			::String tmp10 = (HX_HCSTRING("There is no String or Bytes asset with an ID of \"","\xed","\xa0","\x93","\x32") + id);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(180)
			::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(180)
			Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),180,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(180)
			::lime::utils::Log_obj::info(tmp11,tmp12);
		}
	}
	else{
		HX_STACK_LINE(186)
		::String tmp8 = (HX_HCSTRING("There is no asset library named \"","\xa1","\x83","\x5f","\x51") + libraryName);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(186)
		::String tmp9 = (tmp8 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(186)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),186,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(186)
		::lime::utils::Log_obj::info(tmp9,tmp10);
	}
	HX_STACK_LINE(192)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

::lime::text::Font Assets_obj::getFont( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","getFont",0x2f4603f3,"lime.Assets.getFont","lime/Assets.hx",203,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(205)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(209)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(209)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(209)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(209)
		if ((tmp1)){
			HX_STACK_LINE(209)
			::lime::AssetCache tmp3 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(209)
			::lime::AssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(209)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(209)
			tmp2 = tmp5->enabled;
		}
		else{
			HX_STACK_LINE(209)
			tmp2 = false;
		}
		HX_STACK_LINE(209)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(209)
		if ((tmp2)){
			HX_STACK_LINE(209)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(209)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(209)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(209)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(209)
			tmp3 = tmp5->font->exists(tmp7);
		}
		else{
			HX_STACK_LINE(209)
			tmp3 = false;
		}
		HX_STACK_LINE(209)
		if ((tmp3)){
			HX_STACK_LINE(211)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(211)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(211)
			Dynamic tmp6 = tmp4->font->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(211)
			Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(211)
			return tmp7;
		}
		HX_STACK_LINE(215)
		int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(215)
		::String tmp5 = id.substring((int)0,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(215)
		::String libraryName = tmp5;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(216)
		int tmp6 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(216)
		int tmp7 = (tmp6 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(216)
		::String tmp8 = id.substr(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(216)
		::String symbolName = tmp8;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(217)
		::String tmp9 = libraryName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(217)
		::lime::AssetLibrary tmp10 = ::lime::Assets_obj::getLibrary(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(217)
		::lime::AssetLibrary library = tmp10;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(219)
		bool tmp11 = (library != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(219)
		if ((tmp11)){
			HX_STACK_LINE(221)
			::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(221)
			bool tmp13 = library->exists(tmp12,HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(221)
			if ((tmp13)){
				HX_STACK_LINE(223)
				::String tmp14 = symbolName;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(223)
				bool tmp15 = library->isLocal(tmp14,HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(223)
				if ((tmp15)){
					HX_STACK_LINE(225)
					::String tmp16 = symbolName;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(225)
					::lime::text::Font tmp17 = library->getFont(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(225)
					::lime::text::Font font = tmp17;		HX_STACK_VAR(font,"font");
					HX_STACK_LINE(227)
					bool tmp18 = useCache;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(227)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(227)
					if ((tmp18)){
						HX_STACK_LINE(227)
						::lime::AssetCache tmp20 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(227)
						::lime::AssetCache tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(227)
						tmp19 = tmp21->enabled;
					}
					else{
						HX_STACK_LINE(227)
						tmp19 = false;
					}
					HX_STACK_LINE(227)
					if ((tmp19)){
						HX_STACK_LINE(229)
						::lime::AssetCache tmp20 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(229)
						::String tmp21 = id;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(229)
						::lime::text::Font tmp22 = font;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(229)
						tmp20->font->set(tmp21,tmp22);
					}
					HX_STACK_LINE(233)
					::lime::text::Font tmp20 = font;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(233)
					return tmp20;
				}
				else{
					HX_STACK_LINE(237)
					::String tmp16 = (HX_HCSTRING("Font asset \"","\xc1","\xb6","\x55","\x6d") + id);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(237)
					::String tmp17 = (tmp16 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(237)
					Dynamic tmp18 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),237,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(237)
					::lime::utils::Log_obj::info(tmp17,tmp18);
				}
			}
			else{
				HX_STACK_LINE(243)
				::String tmp14 = (HX_HCSTRING("There is no Font asset with an ID of \"","\xe9","\x6d","\xfb","\x87") + id);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(243)
				::String tmp15 = (tmp14 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(243)
				Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),243,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(243)
				::lime::utils::Log_obj::info(tmp15,tmp16);
			}
		}
		else{
			HX_STACK_LINE(249)
			::String tmp12 = (HX_HCSTRING("There is no asset library named \"","\xa1","\x83","\x5f","\x51") + libraryName);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(249)
			::String tmp13 = (tmp12 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(249)
			Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),249,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(249)
			::lime::utils::Log_obj::info(tmp13,tmp14);
		}
		HX_STACK_LINE(255)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getFont,return )

::lime::graphics::Image Assets_obj::getImage( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","getImage",0xe6d4d8b7,"lime.Assets.getImage","lime/Assets.hx",267,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(269)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(273)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(273)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(273)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(273)
		if ((tmp1)){
			HX_STACK_LINE(273)
			::lime::AssetCache tmp3 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(273)
			::lime::AssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(273)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(273)
			tmp2 = tmp5->enabled;
		}
		else{
			HX_STACK_LINE(273)
			tmp2 = false;
		}
		HX_STACK_LINE(273)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(273)
		if ((tmp2)){
			HX_STACK_LINE(273)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(273)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(273)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(273)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(273)
			tmp3 = tmp5->image->exists(tmp7);
		}
		else{
			HX_STACK_LINE(273)
			tmp3 = false;
		}
		HX_STACK_LINE(273)
		if ((tmp3)){
			HX_STACK_LINE(275)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(275)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(275)
			::lime::graphics::Image tmp6 = tmp4->image->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(275)
			::lime::graphics::Image image = tmp6;		HX_STACK_VAR(image,"image");
			HX_STACK_LINE(277)
			::lime::graphics::Image tmp7 = image;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(277)
			bool tmp8 = ::lime::Assets_obj::isValidImage(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(277)
			if ((tmp8)){
				HX_STACK_LINE(279)
				::lime::graphics::Image tmp9 = image;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(279)
				return tmp9;
			}
		}
		HX_STACK_LINE(285)
		int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(285)
		::String tmp5 = id.substring((int)0,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(285)
		::String libraryName = tmp5;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(286)
		int tmp6 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(286)
		int tmp7 = (tmp6 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(286)
		::String tmp8 = id.substr(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(286)
		::String symbolName = tmp8;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(287)
		::String tmp9 = libraryName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(287)
		::lime::AssetLibrary tmp10 = ::lime::Assets_obj::getLibrary(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(287)
		::lime::AssetLibrary library = tmp10;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(289)
		bool tmp11 = (library != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(289)
		if ((tmp11)){
			HX_STACK_LINE(291)
			::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(291)
			bool tmp13 = library->exists(tmp12,HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(291)
			if ((tmp13)){
				HX_STACK_LINE(293)
				::String tmp14 = symbolName;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(293)
				bool tmp15 = library->isLocal(tmp14,HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(293)
				if ((tmp15)){
					HX_STACK_LINE(295)
					::String tmp16 = symbolName;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(295)
					::lime::graphics::Image tmp17 = library->getImage(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(295)
					::lime::graphics::Image image = tmp17;		HX_STACK_VAR(image,"image");
					HX_STACK_LINE(297)
					bool tmp18 = useCache;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(297)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(297)
					if ((tmp18)){
						HX_STACK_LINE(297)
						::lime::AssetCache tmp20 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(297)
						::lime::AssetCache tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(297)
						tmp19 = tmp21->enabled;
					}
					else{
						HX_STACK_LINE(297)
						tmp19 = false;
					}
					HX_STACK_LINE(297)
					if ((tmp19)){
						HX_STACK_LINE(299)
						::lime::AssetCache tmp20 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(299)
						::String tmp21 = id;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(299)
						::lime::graphics::Image tmp22 = image;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(299)
						tmp20->image->set(tmp21,tmp22);
					}
					HX_STACK_LINE(303)
					::lime::graphics::Image tmp20 = image;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(303)
					return tmp20;
				}
				else{
					HX_STACK_LINE(307)
					::String tmp16 = (HX_HCSTRING("Image asset \"","\x0d","\xe8","\x0a","\xab") + id);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(307)
					::String tmp17 = (tmp16 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(307)
					Dynamic tmp18 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),307,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getImage","\xe5","\x2e","\x40","\x1d"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(307)
					::lime::utils::Log_obj::info(tmp17,tmp18);
				}
			}
			else{
				HX_STACK_LINE(313)
				::String tmp14 = (HX_HCSTRING("There is no Image asset with an ID of \"","\x4b","\xa0","\x87","\xf0") + id);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(313)
				::String tmp15 = (tmp14 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(313)
				Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),313,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getImage","\xe5","\x2e","\x40","\x1d"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(313)
				::lime::utils::Log_obj::info(tmp15,tmp16);
			}
		}
		else{
			HX_STACK_LINE(319)
			::String tmp12 = (HX_HCSTRING("There is no asset library named \"","\xa1","\x83","\x5f","\x51") + libraryName);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(319)
			::String tmp13 = (tmp12 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(319)
			Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),319,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getImage","\xe5","\x2e","\x40","\x1d"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(319)
			::lime::utils::Log_obj::info(tmp13,tmp14);
		}
		HX_STACK_LINE(325)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getImage,return )

::lime::AssetLibrary Assets_obj::getLibrary( ::String name){
	HX_STACK_FRAME("lime.Assets","getLibrary",0x6641ef57,"lime.Assets.getLibrary","lime/Assets.hx",330,0x48c77341)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(332)
	bool tmp = (name == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(332)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(332)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(332)
	if ((tmp1)){
		HX_STACK_LINE(332)
		tmp2 = (name == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(332)
		tmp2 = true;
	}
	HX_STACK_LINE(332)
	if ((tmp2)){
		HX_STACK_LINE(334)
		name = HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b");
	}
	HX_STACK_LINE(338)
	::haxe::ds::StringMap tmp3 = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(338)
	::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(338)
	::lime::AssetLibrary tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(338)
	::lime::AssetLibrary tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(338)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getLibrary,return )

::String Assets_obj::getPath( ::String id){
	HX_STACK_FRAME("lime.Assets","getPath",0x35d78bc9,"lime.Assets.getPath","lime/Assets.hx",349,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(351)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(355)
	int tmp = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(355)
	::String tmp1 = id.substring((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(355)
	::String libraryName = tmp1;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(356)
	int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(356)
	int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(356)
	::String tmp4 = id.substr(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(356)
	::String symbolName = tmp4;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(357)
	::String tmp5 = libraryName;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(357)
	::lime::AssetLibrary tmp6 = ::lime::Assets_obj::getLibrary(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(357)
	::lime::AssetLibrary library = tmp6;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(359)
	bool tmp7 = (library != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(359)
	if ((tmp7)){
		HX_STACK_LINE(361)
		::String tmp8 = symbolName;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(361)
		bool tmp9 = library->exists(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(361)
		if ((tmp9)){
			HX_STACK_LINE(363)
			::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(363)
			::String tmp11 = library->getPath(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(363)
			return tmp11;
		}
		else{
			HX_STACK_LINE(367)
			::String tmp10 = (HX_HCSTRING("There is no asset with an ID of \"","\xb0","\x92","\x42","\x96") + id);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(367)
			::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(367)
			Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),367,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getPath","\x5b","\x95","\xd4","\x1c"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(367)
			::lime::utils::Log_obj::info(tmp11,tmp12);
		}
	}
	else{
		HX_STACK_LINE(373)
		::String tmp8 = (HX_HCSTRING("There is no asset library named \"","\xa1","\x83","\x5f","\x51") + libraryName);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(373)
		::String tmp9 = (tmp8 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(373)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),373,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getPath","\x5b","\x95","\xd4","\x1c"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(373)
		::lime::utils::Log_obj::info(tmp9,tmp10);
	}
	HX_STACK_LINE(379)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getPath,return )

::String Assets_obj::getText( ::String id){
	HX_STACK_FRAME("lime.Assets","getText",0x387f72d1,"lime.Assets.getText","lime/Assets.hx",390,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(392)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(396)
	int tmp = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(396)
	::String tmp1 = id.substring((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(396)
	::String libraryName = tmp1;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(397)
	int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(397)
	int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(397)
	::String tmp4 = id.substr(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(397)
	::String symbolName = tmp4;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(398)
	::String tmp5 = libraryName;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(398)
	::lime::AssetLibrary tmp6 = ::lime::Assets_obj::getLibrary(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(398)
	::lime::AssetLibrary library = tmp6;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(400)
	bool tmp7 = (library != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(400)
	if ((tmp7)){
		HX_STACK_LINE(402)
		::String tmp8 = symbolName;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(402)
		bool tmp9 = library->exists(tmp8,HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(402)
		if ((tmp9)){
			HX_STACK_LINE(404)
			::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(404)
			bool tmp11 = library->isLocal(tmp10,HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(404)
			if ((tmp11)){
				HX_STACK_LINE(406)
				::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(406)
				::String tmp13 = library->getText(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(406)
				return tmp13;
			}
			else{
				HX_STACK_LINE(410)
				::String tmp12 = (HX_HCSTRING("String asset \"","\xc3","\x9b","\x2e","\xb8") + id);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(410)
				::String tmp13 = (tmp12 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(410)
				Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),410,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(410)
				::lime::utils::Log_obj::info(tmp13,tmp14);
			}
		}
		else{
			HX_STACK_LINE(416)
			::String tmp10 = (HX_HCSTRING("There is no String asset with an ID of \"","\xab","\xe5","\x8b","\xb2") + id);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(416)
			::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(416)
			Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),416,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(416)
			::lime::utils::Log_obj::info(tmp11,tmp12);
		}
	}
	else{
		HX_STACK_LINE(422)
		::String tmp8 = (HX_HCSTRING("There is no asset library named \"","\xa1","\x83","\x5f","\x51") + libraryName);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(422)
		::String tmp9 = (tmp8 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(422)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),422,HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97"),HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(422)
		::lime::utils::Log_obj::info(tmp9,tmp10);
	}
	HX_STACK_LINE(428)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getText,return )

Void Assets_obj::initialize( ){
{
		HX_STACK_FRAME("lime.Assets","initialize",0xc42b73a2,"lime.Assets.initialize","lime/Assets.hx",433,0x48c77341)
		HX_STACK_LINE(435)
		bool tmp = ::lime::Assets_obj::initialized;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(435)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(435)
		if ((tmp1)){
			HX_STACK_LINE(439)
			::DefaultAssetLibrary tmp2 = ::DefaultAssetLibrary_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(439)
			::lime::Assets_obj::registerLibrary(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"),tmp2);
			HX_STACK_LINE(443)
			::lime::Assets_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,initialize,(void))

bool Assets_obj::isLocal( ::String id,::String type,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","isLocal",0x2e79638f,"lime.Assets.isLocal","lime/Assets.hx",450,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(452)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(456)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(456)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(456)
		if ((tmp)){
			HX_STACK_LINE(456)
			::lime::AssetCache tmp2 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(456)
			::lime::AssetCache tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(456)
			tmp1 = tmp3->enabled;
		}
		else{
			HX_STACK_LINE(456)
			tmp1 = false;
		}
		HX_STACK_LINE(456)
		if ((tmp1)){
			HX_STACK_LINE(458)
			bool tmp2 = (type == HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(458)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(458)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(458)
			if ((tmp3)){
				HX_STACK_LINE(458)
				tmp4 = (type == null());
			}
			else{
				HX_STACK_LINE(458)
				tmp4 = true;
			}
			HX_STACK_LINE(458)
			if ((tmp4)){
				HX_STACK_LINE(460)
				::lime::AssetCache tmp5 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(460)
				::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(460)
				bool tmp7 = tmp5->image->exists(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(460)
				if ((tmp7)){
					HX_STACK_LINE(460)
					return true;
				}
			}
			HX_STACK_LINE(464)
			bool tmp5 = (type == HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(464)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(464)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(464)
			if ((tmp6)){
				HX_STACK_LINE(464)
				tmp7 = (type == null());
			}
			else{
				HX_STACK_LINE(464)
				tmp7 = true;
			}
			HX_STACK_LINE(464)
			if ((tmp7)){
				HX_STACK_LINE(466)
				::lime::AssetCache tmp8 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(466)
				::String tmp9 = id;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(466)
				bool tmp10 = tmp8->font->exists(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(466)
				if ((tmp10)){
					HX_STACK_LINE(466)
					return true;
				}
			}
			HX_STACK_LINE(470)
			bool tmp8 = (type == HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(470)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(470)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(470)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(470)
			if ((tmp10)){
				HX_STACK_LINE(470)
				tmp11 = (type == HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e"));
			}
			else{
				HX_STACK_LINE(470)
				tmp11 = true;
			}
			HX_STACK_LINE(470)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(470)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(470)
			if ((tmp12)){
				HX_STACK_LINE(470)
				tmp13 = (type == null());
			}
			else{
				HX_STACK_LINE(470)
				tmp13 = true;
			}
			HX_STACK_LINE(470)
			if ((tmp13)){
				HX_STACK_LINE(472)
				::lime::AssetCache tmp14 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(472)
				::String tmp15 = id;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(472)
				bool tmp16 = tmp14->audio->exists(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(472)
				if ((tmp16)){
					HX_STACK_LINE(472)
					return true;
				}
			}
		}
		HX_STACK_LINE(478)
		int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(478)
		::String tmp3 = id.substring((int)0,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(478)
		::String libraryName = tmp3;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(479)
		int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(479)
		int tmp5 = (tmp4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(479)
		::String tmp6 = id.substr(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(479)
		::String symbolName = tmp6;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(480)
		::String tmp7 = libraryName;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(480)
		::lime::AssetLibrary tmp8 = ::lime::Assets_obj::getLibrary(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(480)
		::lime::AssetLibrary library = tmp8;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(482)
		bool tmp9 = (library != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(482)
		if ((tmp9)){
			HX_STACK_LINE(484)
			::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(484)
			::String tmp11 = type;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(484)
			bool tmp12 = library->isLocal(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(484)
			return tmp12;
		}
		HX_STACK_LINE(490)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,isLocal,return )

bool Assets_obj::isValidAudio( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.Assets","isValidAudio",0x0da20596,"lime.Assets.isValidAudio","lime/Assets.hx",495,0x48c77341)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(499)
	bool tmp = (buffer != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(499)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidAudio,return )

bool Assets_obj::isValidImage( ::lime::graphics::Image buffer){
	HX_STACK_FRAME("lime.Assets","isValidImage",0xa38aac1b,"lime.Assets.isValidImage","lime/Assets.hx",511,0x48c77341)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(516)
	bool tmp = (buffer != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(516)
	return tmp;
	HX_STACK_LINE(535)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidImage,return )

Array< ::String > Assets_obj::list( ::String type){
	HX_STACK_FRAME("lime.Assets","list",0x60d5f530,"lime.Assets.list","lime/Assets.hx",540,0x48c77341)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(542)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(544)
	Array< ::String > items = Array_obj< ::String >::__new();		HX_STACK_VAR(items,"items");
	HX_STACK_LINE(546)
	::haxe::ds::StringMap tmp = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(546)
	Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(546)
	for(::cpp::FastIterator_obj< ::lime::AssetLibrary > *__it = ::cpp::CreateFastIterator< ::lime::AssetLibrary >(tmp1);  __it->hasNext(); ){
		::lime::AssetLibrary library = __it->next();
		{
			HX_STACK_LINE(548)
			::String tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(548)
			Array< ::String > libraryItems = library->list(tmp2);		HX_STACK_VAR(libraryItems,"libraryItems");
			HX_STACK_LINE(550)
			bool tmp3 = (libraryItems != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(550)
			if ((tmp3)){
				HX_STACK_LINE(552)
				items = items->concat(libraryItems);
			}
		}
;
	}
	HX_STACK_LINE(558)
	return items;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,list,return )

::lime::app::Future Assets_obj::loadAudioBuffer( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","loadAudioBuffer",0x6d20865e,"lime.Assets.loadAudioBuffer","lime/Assets.hx",563,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(565)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(567)
		::lime::app::Promise_lime_audio_AudioBuffer tmp = ::lime::app::Promise_lime_audio_AudioBuffer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(567)
		::lime::app::Promise_lime_audio_AudioBuffer promise = tmp;		HX_STACK_VAR(promise,"promise");
		HX_STACK_LINE(571)
		bool tmp1 = useCache;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(571)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(571)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(571)
		if ((tmp2)){
			HX_STACK_LINE(571)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(571)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(571)
			::lime::AssetCache tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(571)
			tmp3 = tmp6->enabled;
		}
		else{
			HX_STACK_LINE(571)
			tmp3 = false;
		}
		HX_STACK_LINE(571)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(571)
		if ((tmp3)){
			HX_STACK_LINE(571)
			::lime::AssetCache tmp5 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(571)
			::lime::AssetCache tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(571)
			::String tmp7 = id;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(571)
			::String tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(571)
			tmp4 = tmp6->audio->exists(tmp8);
		}
		else{
			HX_STACK_LINE(571)
			tmp4 = false;
		}
		HX_STACK_LINE(571)
		if ((tmp4)){
			HX_STACK_LINE(573)
			::lime::AssetCache tmp5 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(573)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(573)
			::lime::audio::AudioBuffer tmp7 = tmp5->audio->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(573)
			::lime::audio::AudioBuffer audio = tmp7;		HX_STACK_VAR(audio,"audio");
			HX_STACK_LINE(575)
			::lime::audio::AudioBuffer tmp8 = audio;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(575)
			bool tmp9 = ::lime::Assets_obj::isValidAudio(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(575)
			if ((tmp9)){
				HX_STACK_LINE(577)
				::lime::audio::AudioBuffer tmp10 = audio;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(577)
				promise->complete(tmp10);
				HX_STACK_LINE(578)
				::lime::app::Future tmp11 = promise->future;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(578)
				return tmp11;
			}
		}
		HX_STACK_LINE(584)
		int tmp5 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(584)
		::String tmp6 = id.substring((int)0,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(584)
		::String libraryName = tmp6;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(585)
		int tmp7 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(585)
		int tmp8 = (tmp7 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(585)
		::String tmp9 = id.substr(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(585)
		::String symbolName = tmp9;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(586)
		::String tmp10 = libraryName;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(586)
		::lime::AssetLibrary tmp11 = ::lime::Assets_obj::getLibrary(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(586)
		::lime::AssetLibrary library = tmp11;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(588)
		bool tmp12 = (library != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(588)
		if ((tmp12)){
			HX_STACK_LINE(590)
			::String tmp13 = symbolName;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(590)
			bool tmp14 = library->exists(tmp13,HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(590)
			if ((tmp14)){
				HX_STACK_LINE(592)
				::String tmp15 = symbolName;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(592)
				::lime::app::Future tmp16 = library->loadAudioBuffer(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(592)
				::lime::app::Future future = tmp16;		HX_STACK_VAR(future,"future");
				HX_STACK_LINE(594)
				bool tmp17 = useCache;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(594)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(594)
				if ((tmp17)){
					HX_STACK_LINE(594)
					::lime::AssetCache tmp19 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(594)
					::lime::AssetCache tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(594)
					tmp18 = tmp20->enabled;
				}
				else{
					HX_STACK_LINE(594)
					tmp18 = false;
				}
				HX_STACK_LINE(594)
				if ((tmp18)){

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,::String,id)
					int __ArgCount() const { return 1; }
					Void run(::lime::audio::AudioBuffer audio){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","lime/Assets.hx",596,0x48c77341)
						HX_STACK_ARG(audio,"audio")
						{
							HX_STACK_LINE(596)
							::lime::AssetCache tmp19 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(596)
							::String tmp20 = id;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(596)
							::lime::audio::AudioBuffer tmp21 = audio;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(596)
							tmp19->audio->set(tmp20,tmp21);
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(596)
					future->onComplete( Dynamic(new _Function_4_1(id)));
				}
				HX_STACK_LINE(600)
				::lime::app::Future tmp19 = future;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(600)
				promise->completeWith(tmp19);
			}
			else{
				HX_STACK_LINE(604)
				::String tmp15 = (HX_HCSTRING("[Assets] There is no audio asset with an ID of \"","\x65","\x50","\xb8","\x55") + id);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(604)
				::String tmp16 = (tmp15 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(604)
				promise->error(tmp16);
			}
		}
		else{
			HX_STACK_LINE(610)
			::String tmp13 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(610)
			::String tmp14 = (tmp13 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(610)
			promise->error(tmp14);
		}
		HX_STACK_LINE(616)
		::lime::app::Future tmp13 = promise->future;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(616)
		return tmp13;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadAudioBuffer,return )

::lime::app::Future Assets_obj::loadBytes( ::String id){
	HX_STACK_FRAME("lime.Assets","loadBytes",0x714f4253,"lime.Assets.loadBytes","lime/Assets.hx",621,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(623)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(625)
	::lime::app::Promise_lime_utils_Bytes tmp = ::lime::app::Promise_lime_utils_Bytes_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(625)
	::lime::app::Promise_lime_utils_Bytes promise = tmp;		HX_STACK_VAR(promise,"promise");
	HX_STACK_LINE(629)
	int tmp1 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(629)
	::String tmp2 = id.substring((int)0,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(629)
	::String libraryName = tmp2;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(630)
	int tmp3 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(630)
	int tmp4 = (tmp3 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(630)
	::String tmp5 = id.substr(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(630)
	::String symbolName = tmp5;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(631)
	::String tmp6 = libraryName;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(631)
	::lime::AssetLibrary tmp7 = ::lime::Assets_obj::getLibrary(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(631)
	::lime::AssetLibrary library = tmp7;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(633)
	bool tmp8 = (library != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(633)
	if ((tmp8)){
		HX_STACK_LINE(635)
		::String tmp9 = symbolName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(635)
		bool tmp10 = library->exists(tmp9,HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(635)
		if ((tmp10)){
			HX_STACK_LINE(637)
			::String tmp11 = symbolName;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(637)
			::lime::app::Future tmp12 = library->loadBytes(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(637)
			promise->completeWith(tmp12);
		}
		else{
			HX_STACK_LINE(641)
			::String tmp11 = (HX_HCSTRING("[Assets] There is no String or Bytes asset with an ID of \"","\xec","\xff","\x7c","\x1c") + id);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(641)
			::String tmp12 = (tmp11 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(641)
			promise->error(tmp12);
		}
	}
	else{
		HX_STACK_LINE(647)
		::String tmp9 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(647)
		::String tmp10 = (tmp9 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(647)
		promise->error(tmp10);
	}
	HX_STACK_LINE(653)
	::lime::app::Future tmp9 = promise->future;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(653)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadBytes,return )

::lime::app::Future Assets_obj::loadFont( ::String id){
	HX_STACK_FRAME("lime.Assets","loadFont",0x7df4d8e7,"lime.Assets.loadFont","lime/Assets.hx",658,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(660)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(662)
	::lime::app::Promise_lime_text_Font tmp = ::lime::app::Promise_lime_text_Font_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(662)
	::lime::app::Promise_lime_text_Font promise = tmp;		HX_STACK_VAR(promise,"promise");
	HX_STACK_LINE(666)
	int tmp1 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(666)
	::String tmp2 = id.substring((int)0,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(666)
	::String libraryName = tmp2;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(667)
	int tmp3 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(667)
	int tmp4 = (tmp3 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(667)
	::String tmp5 = id.substr(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(667)
	::String symbolName = tmp5;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(668)
	::String tmp6 = libraryName;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(668)
	::lime::AssetLibrary tmp7 = ::lime::Assets_obj::getLibrary(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(668)
	::lime::AssetLibrary library = tmp7;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(670)
	bool tmp8 = (library != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(670)
	if ((tmp8)){
		HX_STACK_LINE(672)
		::String tmp9 = symbolName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(672)
		bool tmp10 = library->exists(tmp9,HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(672)
		if ((tmp10)){
			HX_STACK_LINE(674)
			::String tmp11 = symbolName;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(674)
			::lime::app::Future tmp12 = library->loadFont(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(674)
			promise->completeWith(tmp12);
		}
		else{
			HX_STACK_LINE(678)
			::String tmp11 = (HX_HCSTRING("[Assets] There is no Font asset with an ID of \"","\x8a","\x40","\xc3","\xf6") + id);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(678)
			::String tmp12 = (tmp11 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(678)
			promise->error(tmp12);
		}
	}
	else{
		HX_STACK_LINE(684)
		::String tmp9 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(684)
		::String tmp10 = (tmp9 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(684)
		promise->error(tmp10);
	}
	HX_STACK_LINE(690)
	::lime::app::Future tmp9 = promise->future;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(690)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadFont,return )

::lime::app::Future Assets_obj::loadImage( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","loadImage",0x71205943,"lime.Assets.loadImage","lime/Assets.hx",695,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(697)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(699)
		::lime::app::Promise_lime_graphics_Image tmp = ::lime::app::Promise_lime_graphics_Image_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(699)
		::lime::app::Promise_lime_graphics_Image promise = tmp;		HX_STACK_VAR(promise,"promise");
		HX_STACK_LINE(703)
		bool tmp1 = useCache;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(703)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(703)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(703)
		if ((tmp2)){
			HX_STACK_LINE(703)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(703)
			::lime::AssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(703)
			::lime::AssetCache tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(703)
			tmp3 = tmp6->enabled;
		}
		else{
			HX_STACK_LINE(703)
			tmp3 = false;
		}
		HX_STACK_LINE(703)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(703)
		if ((tmp3)){
			HX_STACK_LINE(703)
			::lime::AssetCache tmp5 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(703)
			::lime::AssetCache tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(703)
			::String tmp7 = id;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(703)
			::String tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(703)
			tmp4 = tmp6->image->exists(tmp8);
		}
		else{
			HX_STACK_LINE(703)
			tmp4 = false;
		}
		HX_STACK_LINE(703)
		if ((tmp4)){
			HX_STACK_LINE(705)
			::lime::AssetCache tmp5 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(705)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(705)
			::lime::graphics::Image tmp7 = tmp5->image->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(705)
			::lime::graphics::Image image = tmp7;		HX_STACK_VAR(image,"image");
			HX_STACK_LINE(707)
			::lime::graphics::Image tmp8 = image;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(707)
			bool tmp9 = ::lime::Assets_obj::isValidImage(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(707)
			if ((tmp9)){
				HX_STACK_LINE(709)
				::lime::graphics::Image tmp10 = image;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(709)
				promise->complete(tmp10);
				HX_STACK_LINE(710)
				::lime::app::Future tmp11 = promise->future;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(710)
				return tmp11;
			}
		}
		HX_STACK_LINE(716)
		int tmp5 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(716)
		::String tmp6 = id.substring((int)0,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(716)
		::String libraryName = tmp6;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(717)
		int tmp7 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(717)
		int tmp8 = (tmp7 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(717)
		::String tmp9 = id.substr(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(717)
		::String symbolName = tmp9;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(718)
		::String tmp10 = libraryName;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(718)
		::lime::AssetLibrary tmp11 = ::lime::Assets_obj::getLibrary(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(718)
		::lime::AssetLibrary library = tmp11;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(720)
		bool tmp12 = (library != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(720)
		if ((tmp12)){
			HX_STACK_LINE(722)
			::String tmp13 = symbolName;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(722)
			bool tmp14 = library->exists(tmp13,HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(722)
			if ((tmp14)){
				HX_STACK_LINE(724)
				::String tmp15 = symbolName;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(724)
				::lime::app::Future tmp16 = library->loadImage(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(724)
				::lime::app::Future future = tmp16;		HX_STACK_VAR(future,"future");
				HX_STACK_LINE(726)
				bool tmp17 = useCache;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(726)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(726)
				if ((tmp17)){
					HX_STACK_LINE(726)
					::lime::AssetCache tmp19 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(726)
					::lime::AssetCache tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(726)
					tmp18 = tmp20->enabled;
				}
				else{
					HX_STACK_LINE(726)
					tmp18 = false;
				}
				HX_STACK_LINE(726)
				if ((tmp18)){

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,::String,id)
					int __ArgCount() const { return 1; }
					Void run(::lime::graphics::Image image){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","lime/Assets.hx",728,0x48c77341)
						HX_STACK_ARG(image,"image")
						{
							HX_STACK_LINE(728)
							::lime::AssetCache tmp19 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(728)
							::String tmp20 = id;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(728)
							::lime::graphics::Image tmp21 = image;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(728)
							tmp19->image->set(tmp20,tmp21);
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(728)
					future->onComplete( Dynamic(new _Function_4_1(id)));
				}
				HX_STACK_LINE(732)
				::lime::app::Future tmp19 = future;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(732)
				promise->completeWith(tmp19);
			}
			else{
				HX_STACK_LINE(736)
				::String tmp15 = (HX_HCSTRING("[Assets] There is no Image asset with an ID of \"","\x8a","\x1a","\x98","\x70") + id);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(736)
				::String tmp16 = (tmp15 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(736)
				promise->error(tmp16);
			}
		}
		else{
			HX_STACK_LINE(742)
			::String tmp13 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(742)
			::String tmp14 = (tmp13 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(742)
			promise->error(tmp14);
		}
		HX_STACK_LINE(748)
		::lime::app::Future tmp13 = promise->future;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(748)
		return tmp13;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadImage,return )

::lime::app::Future Assets_obj::loadLibrary( ::String name){
	HX_STACK_FRAME("lime.Assets","loadLibrary",0xbad7aae3,"lime.Assets.loadLibrary","lime/Assets.hx",753,0x48c77341)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(755)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(757)
	::lime::app::Promise_lime_AssetLibrary tmp = ::lime::app::Promise_lime_AssetLibrary_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(757)
	::lime::app::Promise_lime_AssetLibrary promise = tmp;		HX_STACK_VAR(promise,"promise");
	HX_STACK_LINE(761)
	::String tmp1 = (HX_HCSTRING("libraries/","\xf6","\xc5","\x4d","\xc0") + name);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(761)
	::String tmp2 = (tmp1 + HX_HCSTRING(".json","\x56","\xf1","\xd6","\xc2"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(761)
	::String tmp3 = ::lime::Assets_obj::getText(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(761)
	::String data = tmp3;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(763)
	bool tmp4 = (data != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(763)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(763)
	if ((tmp4)){
		HX_STACK_LINE(763)
		tmp5 = (data != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(763)
		tmp5 = false;
	}
	HX_STACK_LINE(763)
	if ((tmp5)){
		HX_STACK_LINE(765)
		::haxe::format::JsonParser tmp6 = ::haxe::format::JsonParser_obj::__new(data);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(765)
		Dynamic tmp7 = tmp6->parseRec();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(765)
		Dynamic info = tmp7;		HX_STACK_VAR(info,"info");
		HX_STACK_LINE(766)
		::String tmp8 = info->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(766)
		::hx::Class tmp9 = ::Type_obj::resolveClass(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(766)
		::lime::AssetLibrary tmp10 = ::Type_obj::createInstance(tmp9,info->__Field(HX_HCSTRING("args","\x5d","\x8d","\x74","\x40"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(766)
		::lime::AssetLibrary library = tmp10;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(767)
		::haxe::ds::StringMap tmp11 = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(767)
		::String tmp12 = name;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(767)
		::lime::AssetLibrary tmp13 = library;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(767)
		tmp11->set(tmp12,tmp13);
		HX_STACK_LINE(768)
		::lime::app::_Event_Void_Void tmp14 = ::lime::Assets_obj::onChange;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(768)
		Dynamic tmp15 = tmp14->dispatch_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(768)
		library->onChange->add(tmp15,null(),null());
		HX_STACK_LINE(769)
		::lime::app::Future tmp16 = library->load();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(769)
		promise->completeWith(tmp16);
	}
	else{
		HX_STACK_LINE(773)
		::String tmp6 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + name);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(773)
		::String tmp7 = (tmp6 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(773)
		promise->error(tmp7);
	}
	HX_STACK_LINE(779)
	::lime::app::Future tmp6 = promise->future;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(779)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadLibrary,return )

::lime::app::Future Assets_obj::loadText( ::String id){
	HX_STACK_FRAME("lime.Assets","loadText",0x872e47c5,"lime.Assets.loadText","lime/Assets.hx",784,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(786)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(788)
	::lime::app::Promise_String tmp = ::lime::app::Promise_String_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(788)
	::lime::app::Promise_String promise = tmp;		HX_STACK_VAR(promise,"promise");
	HX_STACK_LINE(792)
	int tmp1 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(792)
	::String tmp2 = id.substring((int)0,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(792)
	::String libraryName = tmp2;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(793)
	int tmp3 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(793)
	int tmp4 = (tmp3 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(793)
	::String tmp5 = id.substr(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(793)
	::String symbolName = tmp5;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(794)
	::String tmp6 = libraryName;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(794)
	::lime::AssetLibrary tmp7 = ::lime::Assets_obj::getLibrary(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(794)
	::lime::AssetLibrary library = tmp7;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(796)
	bool tmp8 = (library != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(796)
	if ((tmp8)){
		HX_STACK_LINE(798)
		::String tmp9 = symbolName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(798)
		bool tmp10 = library->exists(tmp9,HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(798)
		if ((tmp10)){
			HX_STACK_LINE(800)
			::String tmp11 = symbolName;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(800)
			::lime::app::Future tmp12 = library->loadText(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(800)
			promise->completeWith(tmp12);
		}
		else{
			HX_STACK_LINE(804)
			::String tmp11 = (HX_HCSTRING("[Assets] There is no String asset with an ID of \"","\x8c","\x62","\xe6","\x40") + id);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(804)
			::String tmp12 = (tmp11 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(804)
			promise->error(tmp12);
		}
	}
	else{
		HX_STACK_LINE(810)
		::String tmp9 = (HX_HCSTRING("[Assets] There is no asset library named \"","\xa0","\xb4","\x0a","\xcd") + libraryName);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(810)
		::String tmp10 = (tmp9 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(810)
		promise->error(tmp10);
	}
	HX_STACK_LINE(816)
	::lime::app::Future tmp9 = promise->future;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(816)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadText,return )

Void Assets_obj::registerLibrary( ::String name,::lime::AssetLibrary library){
{
		HX_STACK_FRAME("lime.Assets","registerLibrary",0x7c289f46,"lime.Assets.registerLibrary","lime/Assets.hx",821,0x48c77341)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(library,"library")
		HX_STACK_LINE(823)
		::haxe::ds::StringMap tmp = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(823)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(823)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(823)
		if ((tmp2)){
			HX_STACK_LINE(825)
			::haxe::ds::StringMap tmp3 = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(825)
			::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(825)
			::lime::AssetLibrary tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(825)
			::lime::AssetLibrary tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(825)
			::lime::AssetLibrary tmp7 = library;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(825)
			bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(825)
			if ((tmp8)){
				HX_STACK_LINE(827)
				return null();
			}
			else{
				HX_STACK_LINE(831)
				::String tmp9 = name;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(831)
				::lime::Assets_obj::unloadLibrary(tmp9);
			}
		}
		HX_STACK_LINE(837)
		bool tmp3 = (library != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(837)
		if ((tmp3)){
			HX_STACK_LINE(839)
			Dynamic tmp4 = ::lime::Assets_obj::library_onChange_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(839)
			library->onChange->add(tmp4,null(),null());
		}
		HX_STACK_LINE(843)
		::haxe::ds::StringMap tmp4 = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(843)
		::String tmp5 = name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(843)
		::lime::AssetLibrary tmp6 = library;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(843)
		tmp4->set(tmp5,tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,registerLibrary,(void))

Void Assets_obj::unloadLibrary( ::String name){
{
		HX_STACK_FRAME("lime.Assets","unloadLibrary",0x7620d8aa,"lime.Assets.unloadLibrary","lime/Assets.hx",848,0x48c77341)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(850)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(854)
		::haxe::ds::StringMap tmp = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(854)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(854)
		::lime::AssetLibrary tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(854)
		::lime::AssetLibrary library = tmp2;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(856)
		bool tmp3 = (library != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(856)
		if ((tmp3)){
			HX_STACK_LINE(858)
			::lime::AssetCache tmp4 = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(858)
			::String tmp5 = (name + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(858)
			tmp4->clear(tmp5);
			HX_STACK_LINE(859)
			Dynamic tmp6 = ::lime::Assets_obj::library_onChange_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(859)
			library->onChange->remove(tmp6);
			HX_STACK_LINE(860)
			library->unload();
		}
		HX_STACK_LINE(864)
		::haxe::ds::StringMap tmp4 = ::lime::Assets_obj::libraries;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(864)
		::String tmp5 = name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(864)
		tmp4->remove(tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,unloadLibrary,(void))

Void Assets_obj::library_onChange( ){
{
		HX_STACK_FRAME("lime.Assets","library_onChange",0xae01ecc5,"lime.Assets.library_onChange","lime/Assets.hx",878,0x48c77341)
		HX_STACK_LINE(880)
		::lime::AssetCache tmp = ::lime::Assets_obj::cache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(880)
		tmp->clear(null());
		HX_STACK_LINE(881)
		::lime::app::_Event_Void_Void tmp1 = ::lime::Assets_obj::onChange;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(881)
		tmp1->dispatch();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,library_onChange,(void))


Assets_obj::Assets_obj()
{
}

bool Assets_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { outValue = list_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { outValue = cache; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { outValue = getFont_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPath") ) { outValue = getPath_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getText") ) { outValue = getText_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isLocal") ) { outValue = isLocal_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { outValue = onChange; return true;  }
		if (HX_FIELD_EQ(inName,"getBytes") ) { outValue = getBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getImage") ) { outValue = getImage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadFont") ) { outValue = loadFont_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadText") ) { outValue = loadText_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { outValue = libraries; return true;  }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { outValue = loadBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadImage") ) { outValue = loadImage_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getLibrary") ) { outValue = getLibrary_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"initialize") ) { outValue = initialize_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { outValue = initialized; return true;  }
		if (HX_FIELD_EQ(inName,"loadLibrary") ) { outValue = loadLibrary_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isValidAudio") ) { outValue = isValidAudio_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isValidImage") ) { outValue = isValidImage_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"unloadLibrary") ) { outValue = unloadLibrary_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getAudioBuffer") ) { outValue = getAudioBuffer_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadAudioBuffer") ) { outValue = loadAudioBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"registerLibrary") ) { outValue = registerLibrary_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"library_onChange") ) { outValue = library_onChange_dyn(); return true;  }
	}
	return false;
}

bool Assets_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=ioValue.Cast< ::lime::AssetCache >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { onChange=ioValue.Cast< ::lime::app::_Event_Void_Void >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { libraries=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::AssetCache*/ ,(void *) &Assets_obj::cache,HX_HCSTRING("cache","\x42","\x9a","\x14","\x41")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Assets_obj::libraries,HX_HCSTRING("libraries","\x19","\x50","\xf8","\x18")},
	{hx::fsObject /*::lime::app::_Event_Void_Void*/ ,(void *) &Assets_obj::onChange,HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97")},
	{hx::fsBool,(void *) &Assets_obj::initialized,HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_MARK_MEMBER_NAME(Assets_obj::libraries,"libraries");
	HX_MARK_MEMBER_NAME(Assets_obj::onChange,"onChange");
	HX_MARK_MEMBER_NAME(Assets_obj::initialized,"initialized");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_VISIT_MEMBER_NAME(Assets_obj::libraries,"libraries");
	HX_VISIT_MEMBER_NAME(Assets_obj::onChange,"onChange");
	HX_VISIT_MEMBER_NAME(Assets_obj::initialized,"initialized");
};

#endif

hx::Class Assets_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"),
	HX_HCSTRING("libraries","\x19","\x50","\xf8","\x18"),
	HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97"),
	HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("getAudioBuffer","\x80","\x41","\xe3","\x26"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getImage","\xe5","\x2e","\x40","\x1d"),
	HX_HCSTRING("getLibrary","\x05","\xad","\xd1","\x8e"),
	HX_HCSTRING("getPath","\x5b","\x95","\xd4","\x1c"),
	HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("isLocal","\x21","\x6d","\x76","\x15"),
	HX_HCSTRING("isValidAudio","\xc4","\x0a","\xdf","\x47"),
	HX_HCSTRING("isValidImage","\x49","\xb1","\xc7","\xdd"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("loadAudioBuffer","\xf0","\x71","\x7c","\xe3"),
	HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"),
	HX_HCSTRING("loadFont","\x15","\x2f","\x60","\xb4"),
	HX_HCSTRING("loadImage","\x55","\x6b","\xa0","\xd8"),
	HX_HCSTRING("loadLibrary","\x75","\xe5","\x0d","\x10"),
	HX_HCSTRING("loadText","\xf3","\x9d","\x99","\xbd"),
	HX_HCSTRING("registerLibrary","\xd8","\x8a","\x84","\xf2"),
	HX_HCSTRING("unloadLibrary","\xbc","\x5b","\x48","\x31"),
	HX_HCSTRING("library_onChange","\xf3","\x20","\x14","\xc8"),
	::String(null()) };

void Assets_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.Assets","\xdc","\x38","\x84","\x97");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Assets_obj::__GetStatic;
	__mClass->mSetStaticField = &Assets_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Assets_obj >;
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

void Assets_obj::__boot()
{
	cache= ::lime::AssetCache_obj::__new();
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/Assets.hx",44,0x48c77341)
		{
			HX_STACK_LINE(44)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(44)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(44)
			return tmp1;
		}
		return null();
	}
};
	libraries= _Function_0_1::Block();
	onChange= ::lime::app::_Event_Void_Void_obj::__new();
	initialized= false;
}

} // end namespace lime
