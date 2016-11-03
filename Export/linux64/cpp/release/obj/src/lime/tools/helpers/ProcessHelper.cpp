#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime_tools_helpers_LogHelper
#include <lime/tools/helpers/LogHelper.h>
#endif
#ifndef INCLUDED_lime_tools_helpers_PathHelper
#include <lime/tools/helpers/PathHelper.h>
#endif
#ifndef INCLUDED_lime_tools_helpers_PlatformHelper
#include <lime/tools/helpers/PlatformHelper.h>
#endif
#ifndef INCLUDED_lime_tools_helpers_ProcessHelper
#include <lime/tools/helpers/ProcessHelper.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif
namespace lime{
namespace tools{
namespace helpers{

Void ProcessHelper_obj::__construct()
{
	return null();
}

//ProcessHelper_obj::~ProcessHelper_obj() { }

Dynamic ProcessHelper_obj::__CreateEmpty() { return  new ProcessHelper_obj; }
hx::ObjectPtr< ProcessHelper_obj > ProcessHelper_obj::__new()
{  hx::ObjectPtr< ProcessHelper_obj > _result_ = new ProcessHelper_obj();
	_result_->__construct();
	return _result_;}

Dynamic ProcessHelper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ProcessHelper_obj > _result_ = new ProcessHelper_obj();
	_result_->__construct();
	return _result_;}

bool ProcessHelper_obj::dryRun;

int ProcessHelper_obj::processorCores;

int ProcessHelper_obj::_processorCores;

Void ProcessHelper_obj::openFile( ::String workingDirectory,::String targetPath,::String __o_executable){
::String executable = __o_executable.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("lime.tools.helpers.ProcessHelper","openFile",0x27fa13cc,"lime.tools.helpers.ProcessHelper.openFile","lime/tools/helpers/ProcessHelper.hx",21,0xd43cd1b9)
	HX_STACK_ARG(workingDirectory,"workingDirectory")
	HX_STACK_ARG(targetPath,"targetPath")
	HX_STACK_ARG(executable,"executable")
{
		HX_STACK_LINE(23)
		bool tmp = (executable == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		if ((tmp)){
			HX_STACK_LINE(25)
			executable = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		HX_STACK_LINE(29)
		::String tmp1 = ::lime::tools::helpers::PlatformHelper_obj::get_hostPlatform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		bool tmp2 = (tmp1 == HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(29)
		if ((tmp2)){
			HX_STACK_LINE(31)
			Array< ::String > args = Array_obj< ::String >::__new();		HX_STACK_VAR(args,"args");
			HX_STACK_LINE(33)
			bool tmp3 = (executable == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(33)
			if ((tmp3)){
				HX_STACK_LINE(35)
				executable = HX_HCSTRING("cmd","\x7a","\x7e","\x4b","\x00");
				HX_STACK_LINE(36)
				args = Array_obj< ::String >::__new().Add(HX_HCSTRING("/c","\x54","\x29","\x00","\x00"));
			}
			HX_STACK_LINE(40)
			int tmp4 = targetPath.indexOf(HX_HCSTRING(":\\","\xe2","\x32","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(40)
			bool tmp5 = (tmp4 == (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(40)
			if ((tmp5)){
				HX_STACK_LINE(42)
				::String tmp6 = workingDirectory;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(42)
				::String tmp7 = executable;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(42)
				::lime::tools::helpers::ProcessHelper_obj::runCommand(tmp6,tmp7,args->concat(Array_obj< ::String >::__new().Add(targetPath)),null(),null(),null());
			}
			else{
				HX_STACK_LINE(46)
				::String tmp6 = workingDirectory;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(46)
				::String tmp7 = executable;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(46)
				::String tmp8 = (HX_HCSTRING(".\\","\x6e","\x28","\x00","\x00") + targetPath);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(46)
				::lime::tools::helpers::ProcessHelper_obj::runCommand(tmp6,tmp7,args->concat(Array_obj< ::String >::__new().Add(tmp8)),null(),null(),null());
			}
		}
		else{
			HX_STACK_LINE(50)
			::String tmp3 = ::lime::tools::helpers::PlatformHelper_obj::get_hostPlatform();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(50)
			bool tmp4 = (tmp3 == HX_HCSTRING("mac","\x8f","\x0a","\x53","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(50)
			if ((tmp4)){
				HX_STACK_LINE(52)
				bool tmp5 = (executable == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(52)
				if ((tmp5)){
					HX_STACK_LINE(54)
					executable = HX_HCSTRING("/usr/bin/open","\x5c","\x58","\xa2","\x62");
				}
				HX_STACK_LINE(58)
				::String tmp6 = targetPath.substr((int)0,(int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(58)
				bool tmp7 = (tmp6 == HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(58)
				if ((tmp7)){
					HX_STACK_LINE(60)
					::String tmp8 = workingDirectory;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(60)
					::String tmp9 = executable;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(60)
					::lime::tools::helpers::ProcessHelper_obj::runCommand(tmp8,tmp9,Array_obj< ::String >::__new().Add(HX_HCSTRING("-W","\x8a","\x27","\x00","\x00")).Add(targetPath),null(),null(),null());
				}
				else{
					HX_STACK_LINE(64)
					::String tmp8 = workingDirectory;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(64)
					::String tmp9 = executable;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(64)
					::String tmp10 = (HX_HCSTRING("./","\x41","\x28","\x00","\x00") + targetPath);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(64)
					::lime::tools::helpers::ProcessHelper_obj::runCommand(tmp8,tmp9,Array_obj< ::String >::__new().Add(HX_HCSTRING("-W","\x8a","\x27","\x00","\x00")).Add(tmp10),null(),null(),null());
				}
			}
			else{
				HX_STACK_LINE(70)
				bool tmp5 = (executable == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(70)
				if ((tmp5)){
					HX_STACK_LINE(72)
					executable = HX_HCSTRING("/usr/bin/xdg-open","\x2e","\x30","\xaf","\x50");
				}
				HX_STACK_LINE(76)
				::String tmp6 = targetPath.substr((int)0,(int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(76)
				bool tmp7 = (tmp6 == HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(76)
				if ((tmp7)){
					HX_STACK_LINE(78)
					::String tmp8 = workingDirectory;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(78)
					::String tmp9 = executable;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(78)
					::lime::tools::helpers::ProcessHelper_obj::runCommand(tmp8,tmp9,Array_obj< ::String >::__new().Add(targetPath),null(),null(),null());
				}
				else{
					HX_STACK_LINE(82)
					::String tmp8 = workingDirectory;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(82)
					::String tmp9 = executable;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(82)
					::String tmp10 = (HX_HCSTRING("./","\x41","\x28","\x00","\x00") + targetPath);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(82)
					::lime::tools::helpers::ProcessHelper_obj::runCommand(tmp8,tmp9,Array_obj< ::String >::__new().Add(tmp10),null(),null(),null());
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ProcessHelper_obj,openFile,(void))

Void ProcessHelper_obj::openURL( ::String url){
{
		HX_STACK_FRAME("lime.tools.helpers.ProcessHelper","openURL",0xb474e41f,"lime.tools.helpers.ProcessHelper.openURL","lime/tools/helpers/ProcessHelper.hx",91,0xd43cd1b9)
		HX_STACK_ARG(url,"url")
		HX_STACK_LINE(93)
		::String tmp = ::lime::tools::helpers::PlatformHelper_obj::get_hostPlatform();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		bool tmp1 = (tmp == HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		if ((tmp1)){
			HX_STACK_LINE(95)
			::lime::tools::helpers::ProcessHelper_obj::runCommand(HX_HCSTRING("","\x00","\x00","\x00","\x00"),HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),Array_obj< ::String >::__new().Add(url),null(),null(),null());
		}
		else{
			HX_STACK_LINE(97)
			::String tmp2 = ::lime::tools::helpers::PlatformHelper_obj::get_hostPlatform();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(97)
			bool tmp3 = (tmp2 == HX_HCSTRING("mac","\x8f","\x0a","\x53","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(97)
			if ((tmp3)){
				HX_STACK_LINE(99)
				::lime::tools::helpers::ProcessHelper_obj::runCommand(HX_HCSTRING("","\x00","\x00","\x00","\x00"),HX_HCSTRING("/usr/bin/open","\x5c","\x58","\xa2","\x62"),Array_obj< ::String >::__new().Add(url),null(),null(),null());
			}
			else{
				HX_STACK_LINE(103)
				::lime::tools::helpers::ProcessHelper_obj::runCommand(HX_HCSTRING("","\x00","\x00","\x00","\x00"),HX_HCSTRING("/usr/bin/xdg-open","\x2e","\x30","\xaf","\x50"),Array_obj< ::String >::__new().Add(url).Add(HX_HCSTRING("&","\x26","\x00","\x00","\x00")),null(),null(),null());
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ProcessHelper_obj,openURL,(void))

int ProcessHelper_obj::runCommand( ::String path,::String command,Array< ::String > args,hx::Null< bool >  __o_safeExecute,hx::Null< bool >  __o_ignoreErrors,hx::Null< bool >  __o_print){
bool safeExecute = __o_safeExecute.Default(true);
bool ignoreErrors = __o_ignoreErrors.Default(false);
bool print = __o_print.Default(false);
	HX_STACK_FRAME("lime.tools.helpers.ProcessHelper","runCommand",0xc2a3cf26,"lime.tools.helpers.ProcessHelper.runCommand","lime/tools/helpers/ProcessHelper.hx",110,0xd43cd1b9)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(command,"command")
	HX_STACK_ARG(args,"args")
	HX_STACK_ARG(safeExecute,"safeExecute")
	HX_STACK_ARG(ignoreErrors,"ignoreErrors")
	HX_STACK_ARG(print,"print")
{
		HX_STACK_LINE(112)
		bool tmp = print;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(112)
		if ((tmp)){
			HX_STACK_LINE(114)
			::String message = command;		HX_STACK_VAR(message,"message");
			HX_STACK_LINE(116)
			bool tmp1 = (args != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(116)
			if ((tmp1)){
				HX_STACK_LINE(118)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(118)
				while((true)){
					HX_STACK_LINE(118)
					bool tmp2 = (_g < args->length);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(118)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(118)
					if ((tmp3)){
						HX_STACK_LINE(118)
						break;
					}
					HX_STACK_LINE(118)
					::String tmp4 = args->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(118)
					::String arg = tmp4;		HX_STACK_VAR(arg,"arg");
					HX_STACK_LINE(118)
					++(_g);
					HX_STACK_LINE(120)
					int tmp5 = arg.indexOf(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(120)
					bool tmp6 = (tmp5 > (int)-1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(120)
					if ((tmp6)){
						HX_STACK_LINE(122)
						::String tmp7 = (HX_HCSTRING(" \"","\x02","\x1c","\x00","\x00") + arg);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(122)
						::String tmp8 = (tmp7 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(122)
						hx::AddEq(message,tmp8);
					}
					else{
						HX_STACK_LINE(126)
						::String tmp7 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + arg);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(126)
						hx::AddEq(message,tmp7);
					}
				}
			}
			HX_STACK_LINE(134)
			::String tmp2 = message;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(134)
			::Sys_obj::println(tmp2);
		}
		HX_STACK_LINE(138)
		bool tmp1 = (args != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(138)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(138)
		if ((tmp1)){
			HX_STACK_LINE(138)
			::String tmp3 = ::lime::tools::helpers::PlatformHelper_obj::get_hostPlatform();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(138)
			::String tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(138)
			tmp2 = (tmp4 == HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"));
		}
		else{
			HX_STACK_LINE(138)
			tmp2 = false;
		}
		HX_STACK_LINE(138)
		if ((tmp2)){
			HX_STACK_LINE(140)
			::String tmp3 = command;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(140)
			::String tmp4 = ::lime::tools::helpers::PathHelper_obj::escape(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(140)
			command = tmp4;
		}
		HX_STACK_LINE(144)
		bool tmp3 = safeExecute;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(144)
		if ((tmp3)){
			HX_STACK_LINE(146)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(148)
				bool tmp4 = (path != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(148)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(148)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(148)
				if ((tmp5)){
					HX_STACK_LINE(148)
					tmp6 = (path != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
				}
				else{
					HX_STACK_LINE(148)
					tmp6 = false;
				}
				HX_STACK_LINE(148)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(148)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(148)
				if ((tmp7)){
					HX_STACK_LINE(148)
					::String tmp9 = path;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(148)
					::String tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(148)
					::String tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(148)
					::String tmp12 = ::sys::FileSystem_obj::fullPath(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(148)
					::String tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(148)
					::String tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(148)
					::String tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(148)
					::String tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(148)
					bool tmp17 = ::sys::FileSystem_obj::exists(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(148)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(148)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(148)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(148)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(148)
					tmp8 = !(tmp21);
				}
				else{
					HX_STACK_LINE(148)
					tmp8 = false;
				}
				HX_STACK_LINE(148)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(148)
				if ((tmp8)){
					HX_STACK_LINE(148)
					::haxe::io::Path tmp10 = ::haxe::io::Path_obj::__new(path);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(148)
					::haxe::io::Path tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(148)
					::String tmp12 = tmp11->dir;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(148)
					::String tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(148)
					::String tmp14 = ::sys::FileSystem_obj::fullPath(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(148)
					::String tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(148)
					::String tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(148)
					bool tmp17 = ::sys::FileSystem_obj::exists(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(148)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(148)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(148)
					tmp9 = !(tmp19);
				}
				else{
					HX_STACK_LINE(148)
					tmp9 = false;
				}
				HX_STACK_LINE(148)
				if ((tmp9)){
					HX_STACK_LINE(150)
					::String tmp10 = (HX_HCSTRING("The specified target path \"","\x17","\x1a","\xcd","\x40") + path);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(150)
					::String tmp11 = (tmp10 + HX_HCSTRING("\" does not exist","\x01","\x0c","\x9e","\xc6"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(150)
					::lime::tools::helpers::LogHelper_obj::error(tmp11,null(),null());
					HX_STACK_LINE(151)
					return (int)1;
				}
				HX_STACK_LINE(155)
				::String tmp10 = path;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(155)
				::String tmp11 = command;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(155)
				int tmp12 = ::lime::tools::helpers::ProcessHelper_obj::_runCommand(tmp10,tmp11,args);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(155)
				return tmp12;
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(159)
						bool tmp4 = ignoreErrors;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(159)
						bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(159)
						if ((tmp5)){
							HX_STACK_LINE(161)
							Dynamic tmp6 = e;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(161)
							::lime::tools::helpers::LogHelper_obj::error(HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp6,null());
							HX_STACK_LINE(162)
							return (int)1;
						}
						HX_STACK_LINE(166)
						return (int)0;
					}
				}
			}
		}
		else{
			HX_STACK_LINE(172)
			::String tmp4 = path;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(172)
			::String tmp5 = command;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(172)
			int tmp6 = ::lime::tools::helpers::ProcessHelper_obj::_runCommand(tmp4,tmp5,args);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(172)
			return tmp6;
		}
		HX_STACK_LINE(144)
		return (int)0;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ProcessHelper_obj,runCommand,return )

int ProcessHelper_obj::_runCommand( ::String path,::String command,Array< ::String > args){
	HX_STACK_FRAME("lime.tools.helpers.ProcessHelper","_runCommand",0xca4e29b9,"lime.tools.helpers.ProcessHelper._runCommand","lime/tools/helpers/ProcessHelper.hx",179,0xd43cd1b9)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(command,"command")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(181)
	::String oldPath = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(oldPath,"oldPath");
	HX_STACK_LINE(183)
	bool tmp = (path != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	if ((tmp)){
		HX_STACK_LINE(183)
		tmp1 = (path != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(183)
		tmp1 = false;
	}
	HX_STACK_LINE(183)
	if ((tmp1)){
		HX_STACK_LINE(185)
		::String tmp2 = (HX_HCSTRING(" - \x1b""[1mChanging directory:\x1b""[0m ","\xb2","\xc4","\xd8","\x6b") + path);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(185)
		::String tmp3 = (tmp2 + HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(185)
		::lime::tools::helpers::LogHelper_obj::info(HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp3);
		HX_STACK_LINE(187)
		bool tmp4 = ::lime::tools::helpers::ProcessHelper_obj::dryRun;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(187)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(187)
		if ((tmp5)){
			HX_STACK_LINE(189)
			::String tmp6 = ::Sys_obj::getCwd();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(189)
			oldPath = tmp6;
			HX_STACK_LINE(190)
			::String tmp7 = path;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(190)
			::Sys_obj::setCwd(tmp7);
		}
	}
	HX_STACK_LINE(196)
	::String argString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(argString,"argString");
	HX_STACK_LINE(198)
	bool tmp2 = (args != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(198)
	if ((tmp2)){
		HX_STACK_LINE(200)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(200)
		while((true)){
			HX_STACK_LINE(200)
			bool tmp3 = (_g < args->length);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(200)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(200)
			if ((tmp4)){
				HX_STACK_LINE(200)
				break;
			}
			HX_STACK_LINE(200)
			::String tmp5 = args->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(200)
			::String arg = tmp5;		HX_STACK_VAR(arg,"arg");
			HX_STACK_LINE(200)
			++(_g);
			HX_STACK_LINE(202)
			int tmp6 = arg.indexOf(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(202)
			bool tmp7 = (tmp6 > (int)-1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(202)
			if ((tmp7)){
				HX_STACK_LINE(204)
				::String tmp8 = (HX_HCSTRING(" \"","\x02","\x1c","\x00","\x00") + arg);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(204)
				::String tmp9 = (tmp8 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(204)
				hx::AddEq(argString,tmp9);
			}
			else{
				HX_STACK_LINE(208)
				::String tmp8 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + arg);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(208)
				hx::AddEq(argString,tmp8);
			}
		}
	}
	HX_STACK_LINE(216)
	::String tmp3 = (HX_HCSTRING(" - \x1b""[1mRunning command:\x1b""[0m ","\x24","\x22","\x1c","\x30") + command);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(216)
	::String tmp4 = argString;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(216)
	::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(216)
	::lime::tools::helpers::LogHelper_obj::info(HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp5);
	HX_STACK_LINE(218)
	int result = (int)0;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(220)
	bool tmp6 = ::lime::tools::helpers::ProcessHelper_obj::dryRun;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(220)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(220)
	if ((tmp7)){
		HX_STACK_LINE(222)
		bool tmp8 = (args != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(222)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(222)
		if ((tmp8)){
			HX_STACK_LINE(222)
			tmp9 = (args->length > (int)0);
		}
		else{
			HX_STACK_LINE(222)
			tmp9 = false;
		}
		HX_STACK_LINE(222)
		if ((tmp9)){
			HX_STACK_LINE(224)
			::String tmp10 = command;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(224)
			int tmp11 = ::Sys_obj::command(tmp10,args);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(224)
			result = tmp11;
		}
		else{
			HX_STACK_LINE(228)
			::String tmp10 = command;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(228)
			int tmp11 = ::Sys_obj::command(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(228)
			result = tmp11;
		}
		HX_STACK_LINE(232)
		bool tmp10 = (oldPath != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(232)
		if ((tmp10)){
			HX_STACK_LINE(234)
			::String tmp11 = oldPath;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(234)
			::Sys_obj::setCwd(tmp11);
		}
	}
	HX_STACK_LINE(240)
	bool tmp8 = (result != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(240)
	if ((tmp8)){
		HX_STACK_LINE(242)
		::String tmp9 = (HX_HCSTRING("Error running: ","\xed","\xb7","\x34","\x82") + command);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(242)
		::String tmp10 = (tmp9 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(242)
		::String tmp11 = args->join(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(242)
		::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(242)
		::String tmp13 = (tmp12 + HX_HCSTRING(" [","\x3b","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(242)
		::String tmp14 = path;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(242)
		::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(242)
		::String tmp16 = (tmp15 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(242)
		HX_STACK_DO_THROW(tmp16);
	}
	HX_STACK_LINE(246)
	int tmp9 = result;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(246)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ProcessHelper_obj,_runCommand,return )

::String ProcessHelper_obj::runProcess( ::String path,::String command,Array< ::String > args,hx::Null< bool >  __o_waitForOutput,hx::Null< bool >  __o_safeExecute,hx::Null< bool >  __o_ignoreErrors,hx::Null< bool >  __o_print){
bool waitForOutput = __o_waitForOutput.Default(true);
bool safeExecute = __o_safeExecute.Default(true);
bool ignoreErrors = __o_ignoreErrors.Default(false);
bool print = __o_print.Default(false);
	HX_STACK_FRAME("lime.tools.helpers.ProcessHelper","runProcess",0x3281004a,"lime.tools.helpers.ProcessHelper.runProcess","lime/tools/helpers/ProcessHelper.hx",251,0xd43cd1b9)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(command,"command")
	HX_STACK_ARG(args,"args")
	HX_STACK_ARG(waitForOutput,"waitForOutput")
	HX_STACK_ARG(safeExecute,"safeExecute")
	HX_STACK_ARG(ignoreErrors,"ignoreErrors")
	HX_STACK_ARG(print,"print")
{
		HX_STACK_LINE(253)
		bool tmp = print;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(253)
		if ((tmp)){
			HX_STACK_LINE(255)
			::String message = command;		HX_STACK_VAR(message,"message");
			HX_STACK_LINE(257)
			{
				HX_STACK_LINE(257)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(257)
				while((true)){
					HX_STACK_LINE(257)
					bool tmp1 = (_g < args->length);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(257)
					bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(257)
					if ((tmp2)){
						HX_STACK_LINE(257)
						break;
					}
					HX_STACK_LINE(257)
					::String tmp3 = args->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(257)
					::String arg = tmp3;		HX_STACK_VAR(arg,"arg");
					HX_STACK_LINE(257)
					++(_g);
					HX_STACK_LINE(259)
					int tmp4 = arg.indexOf(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(259)
					bool tmp5 = (tmp4 > (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(259)
					if ((tmp5)){
						HX_STACK_LINE(261)
						::String tmp6 = (HX_HCSTRING(" \"","\x02","\x1c","\x00","\x00") + arg);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(261)
						::String tmp7 = (tmp6 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(261)
						hx::AddEq(message,tmp7);
					}
					else{
						HX_STACK_LINE(265)
						::String tmp6 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + arg);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(265)
						hx::AddEq(message,tmp6);
					}
				}
			}
			HX_STACK_LINE(271)
			::String tmp1 = message;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(271)
			::Sys_obj::println(tmp1);
		}
		HX_STACK_LINE(275)
		::String tmp1 = command;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(275)
		::String tmp2 = ::lime::tools::helpers::PathHelper_obj::escape(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(275)
		command = tmp2;
		HX_STACK_LINE(277)
		bool tmp3 = safeExecute;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(277)
		if ((tmp3)){
			HX_STACK_LINE(279)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(281)
				bool tmp4 = (path != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(281)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(281)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(281)
				if ((tmp5)){
					HX_STACK_LINE(281)
					tmp6 = (path != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
				}
				else{
					HX_STACK_LINE(281)
					tmp6 = false;
				}
				HX_STACK_LINE(281)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(281)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(281)
				if ((tmp7)){
					HX_STACK_LINE(281)
					::String tmp9 = path;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(281)
					::String tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(281)
					::String tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(281)
					::String tmp12 = ::sys::FileSystem_obj::fullPath(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(281)
					::String tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(281)
					::String tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(281)
					::String tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(281)
					::String tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(281)
					bool tmp17 = ::sys::FileSystem_obj::exists(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(281)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(281)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(281)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(281)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(281)
					tmp8 = !(tmp21);
				}
				else{
					HX_STACK_LINE(281)
					tmp8 = false;
				}
				HX_STACK_LINE(281)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(281)
				if ((tmp8)){
					HX_STACK_LINE(281)
					::haxe::io::Path tmp10 = ::haxe::io::Path_obj::__new(path);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(281)
					::haxe::io::Path tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(281)
					::String tmp12 = tmp11->dir;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(281)
					::String tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(281)
					::String tmp14 = ::sys::FileSystem_obj::fullPath(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(281)
					::String tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(281)
					::String tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(281)
					bool tmp17 = ::sys::FileSystem_obj::exists(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(281)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(281)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(281)
					tmp9 = !(tmp19);
				}
				else{
					HX_STACK_LINE(281)
					tmp9 = false;
				}
				HX_STACK_LINE(281)
				if ((tmp9)){
					HX_STACK_LINE(283)
					::String tmp10 = (HX_HCSTRING("The specified target path \"","\x17","\x1a","\xcd","\x40") + path);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(283)
					::String tmp11 = (tmp10 + HX_HCSTRING("\" does not exist","\x01","\x0c","\x9e","\xc6"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(283)
					::lime::tools::helpers::LogHelper_obj::error(tmp11,null(),null());
				}
				HX_STACK_LINE(287)
				::String tmp10 = path;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(287)
				::String tmp11 = command;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(287)
				bool tmp12 = waitForOutput;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(287)
				bool tmp13 = ignoreErrors;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(287)
				::String tmp14 = ::lime::tools::helpers::ProcessHelper_obj::_runProcess(tmp10,tmp11,args,tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(287)
				return tmp14;
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(291)
						bool tmp4 = ignoreErrors;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(291)
						bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(291)
						if ((tmp5)){
							HX_STACK_LINE(293)
							Dynamic tmp6 = e;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(293)
							::lime::tools::helpers::LogHelper_obj::error(HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp6,null());
						}
						HX_STACK_LINE(297)
						return null();
					}
				}
			}
		}
		else{
			HX_STACK_LINE(303)
			::String tmp4 = path;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(303)
			::String tmp5 = command;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(303)
			bool tmp6 = waitForOutput;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(303)
			bool tmp7 = ignoreErrors;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(303)
			::String tmp8 = ::lime::tools::helpers::ProcessHelper_obj::_runProcess(tmp4,tmp5,args,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(303)
			return tmp8;
		}
		HX_STACK_LINE(277)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(ProcessHelper_obj,runProcess,return )

::String ProcessHelper_obj::_runProcess( ::String path,::String command,Array< ::String > args,bool waitForOutput,bool ignoreErrors){
	HX_STACK_FRAME("lime.tools.helpers.ProcessHelper","_runProcess",0x3a2b5add,"lime.tools.helpers.ProcessHelper._runProcess","lime/tools/helpers/ProcessHelper.hx",310,0xd43cd1b9)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(command,"command")
	HX_STACK_ARG(args,"args")
	HX_STACK_ARG(waitForOutput,"waitForOutput")
	HX_STACK_ARG(ignoreErrors,"ignoreErrors")
	HX_STACK_LINE(312)
	::String oldPath = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(oldPath,"oldPath");
	HX_STACK_LINE(314)
	bool tmp = (path != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(314)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(314)
	if ((tmp)){
		HX_STACK_LINE(314)
		tmp1 = (path != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(314)
		tmp1 = false;
	}
	HX_STACK_LINE(314)
	if ((tmp1)){
		HX_STACK_LINE(316)
		::String tmp2 = (HX_HCSTRING(" - \x1b""[1mChanging directory:\x1b""[0m ","\xb2","\xc4","\xd8","\x6b") + path);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(316)
		::String tmp3 = (tmp2 + HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(316)
		::lime::tools::helpers::LogHelper_obj::info(HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp3);
		HX_STACK_LINE(318)
		bool tmp4 = ::lime::tools::helpers::ProcessHelper_obj::dryRun;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(318)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(318)
		if ((tmp5)){
			HX_STACK_LINE(320)
			::String tmp6 = ::Sys_obj::getCwd();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(320)
			oldPath = tmp6;
			HX_STACK_LINE(321)
			::String tmp7 = path;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(321)
			::Sys_obj::setCwd(tmp7);
		}
	}
	HX_STACK_LINE(327)
	::String argString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(argString,"argString");
	HX_STACK_LINE(329)
	{
		HX_STACK_LINE(329)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(329)
		while((true)){
			HX_STACK_LINE(329)
			bool tmp2 = (_g < args->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(329)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(329)
			if ((tmp3)){
				HX_STACK_LINE(329)
				break;
			}
			HX_STACK_LINE(329)
			::String tmp4 = args->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(329)
			::String arg = tmp4;		HX_STACK_VAR(arg,"arg");
			HX_STACK_LINE(329)
			++(_g);
			HX_STACK_LINE(331)
			int tmp5 = arg.indexOf(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(331)
			bool tmp6 = (tmp5 > (int)-1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(331)
			if ((tmp6)){
				HX_STACK_LINE(333)
				::String tmp7 = (HX_HCSTRING(" \"","\x02","\x1c","\x00","\x00") + arg);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(333)
				::String tmp8 = (tmp7 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(333)
				hx::AddEq(argString,tmp8);
			}
			else{
				HX_STACK_LINE(337)
				::String tmp7 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + arg);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(337)
				hx::AddEq(argString,tmp7);
			}
		}
	}
	HX_STACK_LINE(343)
	::String tmp2 = (HX_HCSTRING(" - \x1b""[1mRunning process:\x1b""[0m ","\x48","\xc6","\x78","\xd8") + command);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(343)
	::String tmp3 = argString;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(343)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(343)
	::lime::tools::helpers::LogHelper_obj::info(HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp4);
	HX_STACK_LINE(345)
	::String output = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(346)
	int result = (int)0;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(348)
	bool tmp5 = ::lime::tools::helpers::ProcessHelper_obj::dryRun;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(348)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(348)
	if ((tmp6)){
		HX_STACK_LINE(350)
		::sys::io::Process tmp7 = ::sys::io::Process_obj::__new(command,args);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(350)
		::sys::io::Process process = tmp7;		HX_STACK_VAR(process,"process");
		HX_STACK_LINE(351)
		::haxe::io::BytesOutput tmp8 = ::haxe::io::BytesOutput_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(351)
		::haxe::io::BytesOutput buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(353)
		bool tmp9 = waitForOutput;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(353)
		if ((tmp9)){
			HX_STACK_LINE(355)
			bool waiting = true;		HX_STACK_VAR(waiting,"waiting");
			HX_STACK_LINE(357)
			while((true)){
				HX_STACK_LINE(357)
				bool tmp10 = waiting;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(357)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(357)
				if ((tmp11)){
					HX_STACK_LINE(357)
					break;
				}
				HX_STACK_LINE(359)
				try
				{
				HX_STACK_CATCHABLE(::haxe::io::Eof, 0);
				{
					HX_STACK_LINE(361)
					::haxe::io::Bytes tmp12 = process->_stdout->readAll((int)1024);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(361)
					::haxe::io::Bytes current = tmp12;		HX_STACK_VAR(current,"current");
					HX_STACK_LINE(362)
					::haxe::io::Bytes tmp13 = current;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(362)
					buffer->write(tmp13);
					HX_STACK_LINE(364)
					bool tmp14 = (current->length == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(364)
					if ((tmp14)){
						HX_STACK_LINE(366)
						waiting = false;
					}
				}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::haxe::io::Eof >() ){
						HX_STACK_BEGIN_CATCH
						::haxe::io::Eof e = __e;{
							HX_STACK_LINE(372)
							waiting = false;
						}
					}
					else {
					    HX_STACK_DO_THROW(__e);
					}
				}
			}
			HX_STACK_LINE(378)
			int tmp10 = process->exitCode();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(378)
			result = tmp10;
			HX_STACK_LINE(379)
			process->close();
			HX_STACK_LINE(383)
			::haxe::io::Bytes tmp11 = buffer->getBytes();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(383)
			::String tmp12 = tmp11->toString();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(383)
			output = tmp12;
			HX_STACK_LINE(385)
			bool tmp13 = (output == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(385)
			if ((tmp13)){
				HX_STACK_LINE(387)
				::haxe::io::Bytes tmp14 = process->_stderr->readAll(null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(387)
				::String tmp15 = tmp14->toString();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(387)
				::String error = tmp15;		HX_STACK_VAR(error,"error");
				HX_STACK_LINE(389)
				bool tmp16 = ignoreErrors;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(389)
				if ((tmp16)){
					HX_STACK_LINE(391)
					output = error;
				}
				else{
					HX_STACK_LINE(395)
					::String tmp17 = error;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(395)
					::lime::tools::helpers::LogHelper_obj::error(tmp17,null(),null());
				}
				HX_STACK_LINE(399)
				return null();
			}
		}
		HX_STACK_LINE(413)
		bool tmp10 = (oldPath != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(413)
		if ((tmp10)){
			HX_STACK_LINE(415)
			::String tmp11 = oldPath;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(415)
			::Sys_obj::setCwd(tmp11);
		}
	}
	HX_STACK_LINE(421)
	::String tmp7 = output;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(421)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ProcessHelper_obj,_runProcess,return )

int ProcessHelper_obj::get_processorCores( ){
	HX_STACK_FRAME("lime.tools.helpers.ProcessHelper","get_processorCores",0x88662431,"lime.tools.helpers.ProcessHelper.get_processorCores","lime/tools/helpers/ProcessHelper.hx",433,0xd43cd1b9)
	HX_STACK_LINE(435)
	bool tmp = ::lime::tools::helpers::ProcessHelper_obj::dryRun;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(435)
	bool cacheDryRun = tmp;		HX_STACK_VAR(cacheDryRun,"cacheDryRun");
	HX_STACK_LINE(436)
	::lime::tools::helpers::ProcessHelper_obj::dryRun = false;
	HX_STACK_LINE(438)
	int tmp1 = ::lime::tools::helpers::ProcessHelper_obj::_processorCores;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(438)
	bool tmp2 = (tmp1 < (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(438)
	if ((tmp2)){
		HX_STACK_LINE(440)
		::String result = null();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(442)
		::String tmp3 = ::lime::tools::helpers::PlatformHelper_obj::get_hostPlatform();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(442)
		bool tmp4 = (tmp3 == HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(442)
		if ((tmp4)){
			HX_STACK_LINE(444)
			::String tmp5 = ::Sys_obj::getEnv(HX_HCSTRING("NUMBER_OF_PROCESSORS","\x13","\xf1","\x5e","\xee"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(444)
			::String env = tmp5;		HX_STACK_VAR(env,"env");
			HX_STACK_LINE(446)
			bool tmp6 = (env != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(446)
			if ((tmp6)){
				HX_STACK_LINE(448)
				result = env;
			}
		}
		else{
			HX_STACK_LINE(452)
			::String tmp5 = ::lime::tools::helpers::PlatformHelper_obj::get_hostPlatform();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(452)
			bool tmp6 = (tmp5 == HX_HCSTRING("linux","\xf4","\xeb","\x01","\x75"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(452)
			if ((tmp6)){
				HX_STACK_LINE(454)
				::String tmp7 = ::lime::tools::helpers::ProcessHelper_obj::runProcess(HX_HCSTRING("","\x00","\x00","\x00","\x00"),HX_HCSTRING("nproc","\x04","\x97","\x72","\xa0"),Array_obj< ::String >::__new(),true,true,true,null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(454)
				result = tmp7;
				HX_STACK_LINE(456)
				bool tmp8 = (result == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(456)
				if ((tmp8)){
					HX_STACK_LINE(458)
					::String tmp9 = ::lime::tools::helpers::ProcessHelper_obj::runProcess(HX_HCSTRING("","\x00","\x00","\x00","\x00"),HX_HCSTRING("cat","\x16","\x74","\x4b","\x00"),Array_obj< ::String >::__new().Add(HX_HCSTRING("/proc/cpuinfo","\x8c","\xb9","\x6d","\xe9")),true,true,true,null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(458)
					::String cpuinfo = tmp9;		HX_STACK_VAR(cpuinfo,"cpuinfo");
					HX_STACK_LINE(460)
					bool tmp10 = (cpuinfo != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(460)
					if ((tmp10)){
						HX_STACK_LINE(462)
						Array< ::String > split = cpuinfo.split(HX_HCSTRING("processor","\x52","\xbd","\x0b","\xd3"));		HX_STACK_VAR(split,"split");
						HX_STACK_LINE(463)
						int tmp11 = (split->length - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(463)
						::String tmp12 = ::Std_obj::string(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(463)
						result = tmp12;
					}
				}
			}
			else{
				HX_STACK_LINE(469)
				::String tmp7 = ::lime::tools::helpers::PlatformHelper_obj::get_hostPlatform();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(469)
				bool tmp8 = (tmp7 == HX_HCSTRING("mac","\x8f","\x0a","\x53","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(469)
				if ((tmp8)){
					HX_STACK_LINE(471)
					::EReg tmp9 = ::EReg_obj::__new(HX_HCSTRING("Total Number of Cores: (\\d+)","\xc2","\x4a","\xe3","\xa3"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(471)
					::EReg cores = tmp9;		HX_STACK_VAR(cores,"cores");
					HX_STACK_LINE(472)
					::String tmp10 = ::lime::tools::helpers::ProcessHelper_obj::runProcess(HX_HCSTRING("","\x00","\x00","\x00","\x00"),HX_HCSTRING("/usr/sbin/system_profiler","\xa8","\x1e","\x29","\xcd"),Array_obj< ::String >::__new().Add(HX_HCSTRING("-detailLevel","\x26","\x7a","\xd3","\x46")).Add(HX_HCSTRING("full","\x8f","\xe9","\xc4","\x43")).Add(HX_HCSTRING("SPHardwareDataType","\x89","\x47","\xb4","\xf0")),null(),null(),null(),null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(472)
					::String output = tmp10;		HX_STACK_VAR(output,"output");
					HX_STACK_LINE(474)
					::String tmp11 = output;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(474)
					bool tmp12 = cores->match(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(474)
					if ((tmp12)){
						HX_STACK_LINE(476)
						::String tmp13 = cores->matched((int)1);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(476)
						result = tmp13;
					}
				}
			}
		}
		HX_STACK_LINE(482)
		bool tmp5 = (result == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(482)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(482)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(482)
		if ((tmp6)){
			HX_STACK_LINE(482)
			::String tmp8 = result;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(482)
			::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(482)
			Dynamic tmp10 = ::Std_obj::parseInt(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(482)
			Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(482)
			tmp7 = (tmp11 < (int)1);
		}
		else{
			HX_STACK_LINE(482)
			tmp7 = true;
		}
		HX_STACK_LINE(482)
		if ((tmp7)){
			HX_STACK_LINE(484)
			::lime::tools::helpers::ProcessHelper_obj::_processorCores = (int)1;
		}
		else{
			HX_STACK_LINE(488)
			::String tmp8 = result;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(488)
			Dynamic tmp9 = ::Std_obj::parseInt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(488)
			::lime::tools::helpers::ProcessHelper_obj::_processorCores = tmp9;
		}
	}
	HX_STACK_LINE(494)
	::lime::tools::helpers::ProcessHelper_obj::dryRun = cacheDryRun;
	HX_STACK_LINE(496)
	int tmp3 = ::lime::tools::helpers::ProcessHelper_obj::_processorCores;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(496)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ProcessHelper_obj,get_processorCores,return )


ProcessHelper_obj::ProcessHelper_obj()
{
}

bool ProcessHelper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"dryRun") ) { outValue = dryRun; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"openURL") ) { outValue = openURL_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"openFile") ) { outValue = openFile_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"runCommand") ) { outValue = runCommand_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"runProcess") ) { outValue = runProcess_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_runCommand") ) { outValue = _runCommand_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_runProcess") ) { outValue = _runProcess_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"processorCores") ) { outValue = inCallProp == hx::paccAlways ? get_processorCores() : processorCores; return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_processorCores") ) { outValue = _processorCores; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_processorCores") ) { outValue = get_processorCores_dyn(); return true;  }
	}
	return false;
}

bool ProcessHelper_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"dryRun") ) { dryRun=ioValue.Cast< bool >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"processorCores") ) { processorCores=ioValue.Cast< int >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_processorCores") ) { _processorCores=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &ProcessHelper_obj::dryRun,HX_HCSTRING("dryRun","\xe0","\xa6","\x97","\xef")},
	{hx::fsInt,(void *) &ProcessHelper_obj::processorCores,HX_HCSTRING("processorCores","\x82","\x1f","\x19","\x5f")},
	{hx::fsInt,(void *) &ProcessHelper_obj::_processorCores,HX_HCSTRING("_processorCores","\x21","\x68","\x79","\xa8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProcessHelper_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ProcessHelper_obj::dryRun,"dryRun");
	HX_MARK_MEMBER_NAME(ProcessHelper_obj::processorCores,"processorCores");
	HX_MARK_MEMBER_NAME(ProcessHelper_obj::_processorCores,"_processorCores");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProcessHelper_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ProcessHelper_obj::dryRun,"dryRun");
	HX_VISIT_MEMBER_NAME(ProcessHelper_obj::processorCores,"processorCores");
	HX_VISIT_MEMBER_NAME(ProcessHelper_obj::_processorCores,"_processorCores");
};

#endif

hx::Class ProcessHelper_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("dryRun","\xe0","\xa6","\x97","\xef"),
	HX_HCSTRING("processorCores","\x82","\x1f","\x19","\x5f"),
	HX_HCSTRING("_processorCores","\x21","\x68","\x79","\xa8"),
	HX_HCSTRING("openFile","\x66","\xab","\xf7","\xe4"),
	HX_HCSTRING("openURL","\xc5","\xbd","\x35","\x40"),
	HX_HCSTRING("runCommand","\x40","\x01","\xea","\xeb"),
	HX_HCSTRING("_runCommand","\x5f","\xce","\x73","\xbe"),
	HX_HCSTRING("runProcess","\x64","\x32","\xc7","\x5b"),
	HX_HCSTRING("_runProcess","\x83","\xff","\x50","\x2e"),
	HX_HCSTRING("get_processorCores","\x4b","\x00","\xb3","\xfa"),
	::String(null()) };

void ProcessHelper_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.tools.helpers.ProcessHelper","\xc8","\x9c","\x98","\xec");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ProcessHelper_obj::__GetStatic;
	__mClass->mSetStaticField = &ProcessHelper_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ProcessHelper_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void ProcessHelper_obj::__boot()
{
	dryRun= false;
	_processorCores= (int)0;
}

} // end namespace lime
} // end namespace tools
} // end namespace helpers
