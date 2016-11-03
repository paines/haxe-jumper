#ifndef INCLUDED_openfl_display3D__Context3D_Context3DTelemetry_Impl_
#define INCLUDED_openfl_display3D__Context3D_Context3DTelemetry_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display3D,_Context3D,Context3DTelemetry_Impl_)
namespace openfl{
namespace display3D{
namespace _Context3D{


class HXCPP_CLASS_ATTRIBUTES  Context3DTelemetry_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Context3DTelemetry_Impl__obj OBJ_;
		Context3DTelemetry_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.display3D._Context3D.Context3DTelemetry_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Context3DTelemetry_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Context3DTelemetry_Impl__obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Context3DTelemetry_Impl_","\x79","\xc7","\x89","\x6a"); }

		static void __boot();
		static int DRAW_CALLS;
		static int COUNT_INDEX_BUFFER;
		static int COUNT_VERTEX_BUFFER;
		static int COUNT_TEXTURE;
		static int COUNT_TEXTURE_COMPRESSED;
		static int COUNT_PROGRAM;
		static int MEM_INDEX_BUFFER;
		static int MEM_VERTEX_BUFFER;
		static int MEM_TEXTURE;
		static int MEM_TEXTURE_COMPRESSED;
		static int MEM_PROGRAM;
		static int length;
};

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3D

#endif /* INCLUDED_openfl_display3D__Context3D_Context3DTelemetry_Impl_ */ 
