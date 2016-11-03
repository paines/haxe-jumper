#ifndef INCLUDED_openfl__internal_stage3D_RegisterMap
#define INCLUDED_openfl__internal_stage3D_RegisterMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,stage3D,RegisterMap)
HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,DestRegister)
HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,RegisterMapEntry)
HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,RegisterUsage)
HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,SamplerRegister)
HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,SourceRegister)
namespace openfl{
namespace _internal{
namespace stage3D{


class HXCPP_CLASS_ATTRIBUTES  RegisterMap_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RegisterMap_obj OBJ_;
		RegisterMap_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.stage3D.RegisterMap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< RegisterMap_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RegisterMap_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("RegisterMap","\xd9","\x93","\x09","\xfc"); }

		Array< ::Dynamic > mEntries;
		virtual Void add( int type,::String name,int number,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage usage);
		Dynamic add_dyn();

		virtual Void addDR( ::openfl::_internal::stage3D::_AGALConverter::DestRegister dr,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage usage);
		Dynamic addDR_dyn();

		virtual Void addSaR( ::openfl::_internal::stage3D::_AGALConverter::SamplerRegister sr,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage usage);
		Dynamic addSaR_dyn();

		virtual Void addSR( ::openfl::_internal::stage3D::_AGALConverter::SourceRegister sr,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage usage,hx::Null< int >  offset);
		Dynamic addSR_dyn();

		virtual ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage getRegisterUsage( ::openfl::_internal::stage3D::_AGALConverter::SourceRegister sr);
		Dynamic getRegisterUsage_dyn();

		virtual ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage getUsage( int type,::String name,int number);
		Dynamic getUsage_dyn();

		virtual ::String toGLSL( bool tempRegistersOnly);
		Dynamic toGLSL_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D

#endif /* INCLUDED_openfl__internal_stage3D_RegisterMap */ 
