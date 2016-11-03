#ifndef INCLUDED_lime_app_Promise_lime_audio_AudioBuffer
#define INCLUDED_lime_app_Promise_lime_audio_AudioBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,app,Promise_lime_audio_AudioBuffer)
HX_DECLARE_CLASS2(lime,audio,AudioBuffer)
namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES  Promise_lime_audio_AudioBuffer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Promise_lime_audio_AudioBuffer_obj OBJ_;
		Promise_lime_audio_AudioBuffer_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.app.Promise_lime_audio_AudioBuffer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Promise_lime_audio_AudioBuffer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Promise_lime_audio_AudioBuffer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Promise_lime_audio_AudioBuffer","\xc7","\x94","\xc7","\xad"); }

		::lime::app::Future future;
		bool isComplete;
		bool isError;
		virtual ::lime::app::Promise_lime_audio_AudioBuffer complete( ::lime::audio::AudioBuffer data);
		Dynamic complete_dyn();

		virtual ::lime::app::Promise_lime_audio_AudioBuffer completeWith( ::lime::app::Future future);
		Dynamic completeWith_dyn();

		virtual ::lime::app::Promise_lime_audio_AudioBuffer error( Dynamic msg);
		Dynamic error_dyn();

		virtual ::lime::app::Promise_lime_audio_AudioBuffer progress( Float progress);
		Dynamic progress_dyn();

		virtual bool get_isComplete( );
		Dynamic get_isComplete_dyn();

		virtual bool get_isError( );
		Dynamic get_isError_dyn();

};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_Promise_lime_audio_AudioBuffer */ 
