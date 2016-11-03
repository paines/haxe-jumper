#ifndef INCLUDED_lime_audio_openal__ALSource_ALSource_Impl_
#define INCLUDED_lime_audio_openal__ALSource_ALSource_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,audio,openal,_ALSource,ALSource_Impl_)
namespace lime{
namespace audio{
namespace openal{
namespace _ALSource{


class HXCPP_CLASS_ATTRIBUTES  ALSource_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ALSource_Impl__obj OBJ_;
		ALSource_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.audio.openal._ALSource.ALSource_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ALSource_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ALSource_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ALSource_Impl_","\x46","\x3d","\x35","\xf9"); }

		static Dynamic _new( Dynamic handle);
		static Dynamic _new_dyn();

};

} // end namespace lime
} // end namespace audio
} // end namespace openal
} // end namespace _ALSource

#endif /* INCLUDED_lime_audio_openal__ALSource_ALSource_Impl_ */ 
