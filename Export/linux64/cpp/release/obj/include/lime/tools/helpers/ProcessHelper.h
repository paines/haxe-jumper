#ifndef INCLUDED_lime_tools_helpers_ProcessHelper
#define INCLUDED_lime_tools_helpers_ProcessHelper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,tools,helpers,ProcessHelper)
namespace lime{
namespace tools{
namespace helpers{


class HXCPP_CLASS_ATTRIBUTES  ProcessHelper_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ProcessHelper_obj OBJ_;
		ProcessHelper_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.tools.helpers.ProcessHelper")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ProcessHelper_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ProcessHelper_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ProcessHelper","\x1d","\xe1","\x91","\x22"); }

		static void __boot();
		static bool dryRun;
		static int processorCores;
		static int _processorCores;
		static Void openFile( ::String workingDirectory,::String targetPath,::String executable);
		static Dynamic openFile_dyn();

		static Void openURL( ::String url);
		static Dynamic openURL_dyn();

		static int runCommand( ::String path,::String command,Array< ::String > args,hx::Null< bool >  safeExecute,hx::Null< bool >  ignoreErrors,hx::Null< bool >  print);
		static Dynamic runCommand_dyn();

		static int _runCommand( ::String path,::String command,Array< ::String > args);
		static Dynamic _runCommand_dyn();

		static ::String runProcess( ::String path,::String command,Array< ::String > args,hx::Null< bool >  waitForOutput,hx::Null< bool >  safeExecute,hx::Null< bool >  ignoreErrors,hx::Null< bool >  print);
		static Dynamic runProcess_dyn();

		static ::String _runProcess( ::String path,::String command,Array< ::String > args,bool waitForOutput,bool ignoreErrors);
		static Dynamic _runProcess_dyn();

		static int get_processorCores( );
		static Dynamic get_processorCores_dyn();

};

} // end namespace lime
} // end namespace tools
} // end namespace helpers

#endif /* INCLUDED_lime_tools_helpers_ProcessHelper */ 
