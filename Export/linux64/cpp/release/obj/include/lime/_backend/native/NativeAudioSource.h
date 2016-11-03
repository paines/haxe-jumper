#ifndef INCLUDED_lime__backend_native_NativeAudioSource
#define INCLUDED_lime__backend_native_NativeAudioSource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS3(lime,_backend,native,NativeAudioSource)
HX_DECLARE_CLASS2(lime,audio,AudioSource)
HX_DECLARE_CLASS2(lime,math,Vector4)
namespace lime{
namespace _backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES  NativeAudioSource_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NativeAudioSource_obj OBJ_;
		NativeAudioSource_obj();
		Void __construct(::lime::audio::AudioSource parent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime._backend.native.NativeAudioSource")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NativeAudioSource_obj > __new(::lime::audio::AudioSource parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NativeAudioSource_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("NativeAudioSource","\xda","\xb9","\xf9","\xb6"); }

		bool completed;
		Dynamic handle;
		Dynamic length;
		int loops;
		::lime::audio::AudioSource parent;
		bool playing;
		::lime::math::Vector4 position;
		::haxe::Timer timer;
		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		virtual Void play( );
		Dynamic play_dyn();

		virtual Void pause( );
		Dynamic pause_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Void timer_onRun( );
		Dynamic timer_onRun_dyn();

		virtual int getCurrentTime( );
		Dynamic getCurrentTime_dyn();

		virtual int setCurrentTime( int value);
		Dynamic setCurrentTime_dyn();

		virtual Float getGain( );
		Dynamic getGain_dyn();

		virtual Float setGain( Float value);
		Dynamic setGain_dyn();

		virtual int getLength( );
		Dynamic getLength_dyn();

		virtual int setLength( int value);
		Dynamic setLength_dyn();

		virtual int getLoops( );
		Dynamic getLoops_dyn();

		virtual int setLoops( int value);
		Dynamic setLoops_dyn();

		virtual ::lime::math::Vector4 getPosition( );
		Dynamic getPosition_dyn();

		virtual ::lime::math::Vector4 setPosition( ::lime::math::Vector4 value);
		Dynamic setPosition_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native

#endif /* INCLUDED_lime__backend_native_NativeAudioSource */ 
