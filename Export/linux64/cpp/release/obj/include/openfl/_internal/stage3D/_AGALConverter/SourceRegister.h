#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_SourceRegister
#define INCLUDED_openfl__internal_stage3D__AGALConverter_SourceRegister

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,ProgramType)
HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,SourceRegister)
namespace openfl{
namespace _internal{
namespace stage3D{
namespace _AGALConverter{


class HXCPP_CLASS_ATTRIBUTES  SourceRegister_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SourceRegister_obj OBJ_;
		SourceRegister_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.stage3D._AGALConverter.SourceRegister")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SourceRegister_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SourceRegister_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SourceRegister","\x7e","\x7a","\x8d","\x0c"); }

		static ::openfl::_internal::stage3D::_AGALConverter::SourceRegister parse( cpp::Int64Struct v,::openfl::_internal::stage3D::_AGALConverter::ProgramType programType,int sourceMask);
		static Dynamic parse_dyn();

		int d;
		int itype;
		int n;
		int o;
		::openfl::_internal::stage3D::_AGALConverter::ProgramType programType;
		int q;
		int s;
		int sourceMask;
		int type;
		virtual ::String toGLSL( hx::Null< bool >  emitSwizzle,hx::Null< int >  offset);
		Dynamic toGLSL_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace _AGALConverter

#endif /* INCLUDED_openfl__internal_stage3D__AGALConverter_SourceRegister */ 
