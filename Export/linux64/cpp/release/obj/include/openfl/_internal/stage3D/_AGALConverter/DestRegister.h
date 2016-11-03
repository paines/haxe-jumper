#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_DestRegister
#define INCLUDED_openfl__internal_stage3D__AGALConverter_DestRegister

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,DestRegister)
HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,ProgramType)
namespace openfl{
namespace _internal{
namespace stage3D{
namespace _AGALConverter{


class HXCPP_CLASS_ATTRIBUTES  DestRegister_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DestRegister_obj OBJ_;
		DestRegister_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.stage3D._AGALConverter.DestRegister")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DestRegister_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DestRegister_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DestRegister","\x05","\x3f","\xc2","\xef"); }

		static ::openfl::_internal::stage3D::_AGALConverter::DestRegister parse( int v,::openfl::_internal::stage3D::_AGALConverter::ProgramType programType);
		static Dynamic parse_dyn();

		int mask;
		int n;
		::openfl::_internal::stage3D::_AGALConverter::ProgramType programType;
		int type;
		virtual ::String getWriteMask( );
		Dynamic getWriteMask_dyn();

		virtual ::String toGLSL( hx::Null< bool >  useMask);
		Dynamic toGLSL_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace _AGALConverter

#endif /* INCLUDED_openfl__internal_stage3D__AGALConverter_DestRegister */ 
