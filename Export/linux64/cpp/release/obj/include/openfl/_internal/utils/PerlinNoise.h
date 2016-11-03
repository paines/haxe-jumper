#ifndef INCLUDED_openfl__internal_utils_PerlinNoise
#define INCLUDED_openfl__internal_utils_PerlinNoise

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,utils,PerlinNoise)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
namespace openfl{
namespace _internal{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  PerlinNoise_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PerlinNoise_obj OBJ_;
		PerlinNoise_obj();
		Void __construct(Dynamic seed,Dynamic octaves,Dynamic falloff);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.utils.PerlinNoise")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PerlinNoise_obj > __new(Dynamic seed,Dynamic octaves,Dynamic falloff);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PerlinNoise_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("PerlinNoise","\x46","\x1c","\x2b","\x70"); }

		static void __boot();
		static Array< int > P;
		int octaves;
		Array< Float > aOctFreq;
		Array< Float > aOctPers;
		Float fPersMax;
		Float iXoffset;
		Float iYoffset;
		Float iZoffset;
		Float baseFactor;
		virtual Void fill( ::openfl::display::BitmapData bitmap,Float _x,Float _y,Float _z,Dynamic _);
		Dynamic fill_dyn();

		virtual Void octFreqPers( Float fPersistence);
		Dynamic octFreqPers_dyn();

		virtual Void seedOffset( int iSeed);
		Dynamic seedOffset_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace utils

#endif /* INCLUDED_openfl__internal_utils_PerlinNoise */ 
