#ifndef INCLUDED_lime_tools_helpers_PathHelper
#define INCLUDED_lime_tools_helpers_PathHelper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(lime,project,Haxelib)
HX_DECLARE_CLASS2(lime,project,NDLL)
HX_DECLARE_CLASS3(lime,tools,helpers,PathHelper)
namespace lime{
namespace tools{
namespace helpers{


class HXCPP_CLASS_ATTRIBUTES  PathHelper_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PathHelper_obj OBJ_;
		PathHelper_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.tools.helpers.PathHelper")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PathHelper_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PathHelper_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("PathHelper","\x13","\x25","\x35","\x0d"); }

		static void __boot();
		static ::haxe::ds::StringMap haxelibOverrides;
		static ::haxe::ds::StringMap haxelibPaths;
		static ::String combine( ::String firstPath,::String secondPath);
		static Dynamic combine_dyn();

		static ::String escape( ::String path);
		static Dynamic escape_dyn();

		static ::String expand( ::String path);
		static Dynamic expand_dyn();

		static ::String findTemplate( Array< ::String > templatePaths,::String path,hx::Null< bool >  warnIfNotFound);
		static Dynamic findTemplate_dyn();

		static Array< ::String > findTemplates( Array< ::String > templatePaths,::String path,hx::Null< bool >  warnIfNotFound);
		static Dynamic findTemplates_dyn();

		static ::String getHaxelib( ::lime::project::Haxelib haxelib,hx::Null< bool >  validate,hx::Null< bool >  clearCache);
		static Dynamic getHaxelib_dyn();

		static ::String getLibraryPath( ::lime::project::NDLL ndll,::String directoryName,::String namePrefix,::String nameSuffix,hx::Null< bool >  allowDebug);
		static Dynamic getLibraryPath_dyn();

		static ::String getTemporaryFile( ::String extension);
		static Dynamic getTemporaryFile_dyn();

		static ::String getTemporaryDirectory( );
		static Dynamic getTemporaryDirectory_dyn();

		static bool isAbsolute( ::String path);
		static Dynamic isAbsolute_dyn();

		static bool isRelative( ::String path);
		static Dynamic isRelative_dyn();

		static Void mkdir( ::String directory);
		static Dynamic mkdir_dyn();

		static Array< ::String > readDirectory( ::String directory,Array< ::String > ignore,Array< ::String > paths);
		static Dynamic readDirectory_dyn();

		static ::String relocatePath( ::String path,::String targetDirectory);
		static Dynamic relocatePath_dyn();

		static Array< ::String > relocatePaths( Array< ::String > paths,::String targetDirectory);
		static Dynamic relocatePaths_dyn();

		static Void removeDirectory( ::String directory);
		static Dynamic removeDirectory_dyn();

		static ::String safeFileName( ::String name);
		static Dynamic safeFileName_dyn();

		static ::String searchForLibrary( ::lime::project::NDLL ndll,::String directoryName,::String filename);
		static Dynamic searchForLibrary_dyn();

		static ::String standardize( ::String path,hx::Null< bool >  trailingSlash);
		static Dynamic standardize_dyn();

		static ::String tryFullPath( ::String path);
		static Dynamic tryFullPath_dyn();

};

} // end namespace lime
} // end namespace tools
} // end namespace helpers

#endif /* INCLUDED_lime_tools_helpers_PathHelper */ 
