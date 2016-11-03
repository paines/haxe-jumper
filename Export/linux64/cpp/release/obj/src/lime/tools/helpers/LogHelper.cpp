#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_lime_tools_helpers_LogHelper
#include <lime/tools/helpers/LogHelper.h>
#endif
#ifndef INCLUDED_lime_tools_helpers_PlatformHelper
#include <lime/tools/helpers/PlatformHelper.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif
namespace lime{
namespace tools{
namespace helpers{

Void LogHelper_obj::__construct()
{
	return null();
}

//LogHelper_obj::~LogHelper_obj() { }

Dynamic LogHelper_obj::__CreateEmpty() { return  new LogHelper_obj; }
hx::ObjectPtr< LogHelper_obj > LogHelper_obj::__new()
{  hx::ObjectPtr< LogHelper_obj > _result_ = new LogHelper_obj();
	_result_->__construct();
	return _result_;}

Dynamic LogHelper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LogHelper_obj > _result_ = new LogHelper_obj();
	_result_->__construct();
	return _result_;}

::String LogHelper_obj::accentColor;

bool LogHelper_obj::enableColor;

bool LogHelper_obj::mute;

::String LogHelper_obj::resetColor;

bool LogHelper_obj::verbose;

::EReg LogHelper_obj::colorCodes;

Dynamic LogHelper_obj::colorSupported;

::haxe::ds::StringMap LogHelper_obj::sentWarnings;

Void LogHelper_obj::error( ::String message,::String __o_verboseMessage,Dynamic e){
::String verboseMessage = __o_verboseMessage.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("lime.tools.helpers.LogHelper","error",0xc5e443b7,"lime.tools.helpers.LogHelper.error","lime/tools/helpers/LogHelper.hx",32,0x73a4c904)
	HX_STACK_ARG(message,"message")
	HX_STACK_ARG(verboseMessage,"verboseMessage")
	HX_STACK_ARG(e,"e")
{
		HX_STACK_LINE(34)
		bool tmp = (message != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		if ((tmp)){
			HX_STACK_LINE(34)
			bool tmp2 = ::lime::tools::helpers::LogHelper_obj::mute;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(34)
			bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(34)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(34)
			tmp1 = !(tmp4);
		}
		else{
			HX_STACK_LINE(34)
			tmp1 = false;
		}
		HX_STACK_LINE(34)
		if ((tmp1)){
			HX_STACK_LINE(36)
			::String output;		HX_STACK_VAR(output,"output");
			HX_STACK_LINE(38)
			bool tmp2 = ::lime::tools::helpers::LogHelper_obj::verbose;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(38)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(38)
			if ((tmp2)){
				HX_STACK_LINE(38)
				tmp3 = (verboseMessage != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(38)
				tmp3 = false;
			}
			HX_STACK_LINE(38)
			if ((tmp3)){
				HX_STACK_LINE(40)
				::String tmp4 = (HX_HCSTRING("\x1b""[31;1mError:\x1b""[0m\x1b""[1m ","\x5c","\x1a","\x05","\x73") + verboseMessage);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(40)
				::String tmp5 = (tmp4 + HX_HCSTRING("\x1b""[0m\n","\x4d","\xdf","\x1c","\xc8"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(40)
				output = tmp5;
			}
			else{
				HX_STACK_LINE(44)
				::String tmp4 = (HX_HCSTRING("\x1b""[31;1mError:\x1b""[0m \x1b""[1m","\xd4","\x03","\xd8","\x29") + message);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(44)
				::String tmp5 = (tmp4 + HX_HCSTRING("\x1b""[0m\n","\x4d","\xdf","\x1c","\xc8"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(44)
				output = tmp5;
			}
			HX_STACK_LINE(48)
			::haxe::io::Output tmp4 = ::Sys_obj::_stderr();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(48)
			::String tmp5 = output;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(48)
			::String tmp6 = ::lime::tools::helpers::LogHelper_obj::stripColor(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(48)
			::haxe::io::Bytes tmp7 = ::haxe::io::Bytes_obj::ofString(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(48)
			tmp4->write(tmp7);
		}
		HX_STACK_LINE(52)
		bool tmp2 = ::lime::tools::helpers::LogHelper_obj::verbose;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		if ((tmp2)){
			HX_STACK_LINE(52)
			tmp3 = (e != null());
		}
		else{
			HX_STACK_LINE(52)
			tmp3 = false;
		}
		HX_STACK_LINE(52)
		if ((tmp3)){
			HX_STACK_LINE(55)
			Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(55)
			::cpp::Lib_obj::rethrow(tmp4);
		}
		HX_STACK_LINE(60)
		::Sys_obj::exit((int)1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(LogHelper_obj,error,(void))

Void LogHelper_obj::info( ::String message,::String __o_verboseMessage){
::String verboseMessage = __o_verboseMessage.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("lime.tools.helpers.LogHelper","info",0x5878535f,"lime.tools.helpers.LogHelper.info","lime/tools/helpers/LogHelper.hx",65,0x73a4c904)
	HX_STACK_ARG(message,"message")
	HX_STACK_ARG(verboseMessage,"verboseMessage")
{
		HX_STACK_LINE(67)
		bool tmp = ::lime::tools::helpers::LogHelper_obj::mute;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(67)
		if ((tmp1)){
			HX_STACK_LINE(69)
			bool tmp2 = ::lime::tools::helpers::LogHelper_obj::verbose;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(69)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(69)
			if ((tmp2)){
				HX_STACK_LINE(69)
				tmp3 = (verboseMessage != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(69)
				tmp3 = false;
			}
			HX_STACK_LINE(69)
			if ((tmp3)){
				HX_STACK_LINE(71)
				::String tmp4 = verboseMessage;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(71)
				::lime::tools::helpers::LogHelper_obj::println(tmp4);
			}
			else{
				HX_STACK_LINE(73)
				bool tmp4 = (message != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(73)
				if ((tmp4)){
					HX_STACK_LINE(75)
					::String tmp5 = message;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(75)
					::lime::tools::helpers::LogHelper_obj::println(tmp5);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LogHelper_obj,info,(void))

Void LogHelper_obj::print( ::String message){
{
		HX_STACK_FRAME("lime.tools.helpers.LogHelper","print",0x1b45d01c,"lime.tools.helpers.LogHelper.print","lime/tools/helpers/LogHelper.hx",84,0x73a4c904)
		HX_STACK_ARG(message,"message")
		HX_STACK_LINE(86)
		::String tmp = message;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(86)
		::String tmp1 = ::lime::tools::helpers::LogHelper_obj::stripColor(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		::Sys_obj::print(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LogHelper_obj,print,(void))

Void LogHelper_obj::println( ::String message){
{
		HX_STACK_FRAME("lime.tools.helpers.LogHelper","println",0xd46f6d9e,"lime.tools.helpers.LogHelper.println","lime/tools/helpers/LogHelper.hx",91,0x73a4c904)
		HX_STACK_ARG(message,"message")
		HX_STACK_LINE(93)
		::String tmp = message;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		::String tmp1 = ::lime::tools::helpers::LogHelper_obj::stripColor(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		::Sys_obj::println(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LogHelper_obj,println,(void))

::String LogHelper_obj::stripColor( ::String output){
	HX_STACK_FRAME("lime.tools.helpers.LogHelper","stripColor",0xb55fa51c,"lime.tools.helpers.LogHelper.stripColor","lime/tools/helpers/LogHelper.hx",98,0x73a4c904)
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(100)
	Dynamic tmp = ::lime::tools::helpers::LogHelper_obj::colorSupported;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	if ((tmp1)){
		HX_STACK_LINE(102)
		::String tmp2 = ::lime::tools::helpers::PlatformHelper_obj::get_hostPlatform();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(102)
		bool tmp3 = (tmp2 != HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(102)
		if ((tmp3)){
			HX_STACK_LINE(104)
			int result = (int)-1;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(106)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(108)
				::sys::io::Process tmp4 = ::sys::io::Process_obj::__new(HX_HCSTRING("tput","\xdb","\x22","\x02","\x4d"),Array_obj< ::String >::__new().Add(HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6")));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(108)
				::sys::io::Process process = tmp4;		HX_STACK_VAR(process,"process");
				HX_STACK_LINE(109)
				int tmp5 = process->exitCode();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(109)
				result = tmp5;
				HX_STACK_LINE(110)
				process->close();
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
					}
				}
			}
			HX_STACK_LINE(114)
			bool tmp4 = (result == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(114)
			::lime::tools::helpers::LogHelper_obj::colorSupported = tmp4;
		}
		else{
			HX_STACK_LINE(118)
			::lime::tools::helpers::LogHelper_obj::colorSupported = false;
			HX_STACK_LINE(120)
			::String tmp4 = ::Sys_obj::getEnv(HX_HCSTRING("TERM","\x6c","\x8f","\xba","\x37"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(120)
			bool tmp5 = (tmp4 == HX_HCSTRING("xterm","\xe4","\x63","\x0f","\x65"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(120)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(120)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(120)
			if ((tmp6)){
				HX_STACK_LINE(120)
				::String tmp8 = ::Sys_obj::getEnv(HX_HCSTRING("ANSICON","\x3f","\x21","\x7f","\xb9"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(120)
				::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(120)
				tmp7 = (tmp9 != null());
			}
			else{
				HX_STACK_LINE(120)
				tmp7 = true;
			}
			HX_STACK_LINE(120)
			if ((tmp7)){
				HX_STACK_LINE(122)
				::lime::tools::helpers::LogHelper_obj::colorSupported = true;
			}
		}
	}
	HX_STACK_LINE(130)
	bool tmp2 = ::lime::tools::helpers::LogHelper_obj::enableColor;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(130)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(130)
	if ((tmp2)){
		HX_STACK_LINE(130)
		tmp3 = ::lime::tools::helpers::LogHelper_obj::colorSupported;
	}
	else{
		HX_STACK_LINE(130)
		tmp3 = false;
	}
	HX_STACK_LINE(130)
	if ((tmp3)){
		HX_STACK_LINE(132)
		::String tmp4 = output;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(132)
		return tmp4;
	}
	else{
		HX_STACK_LINE(136)
		::EReg tmp4 = ::lime::tools::helpers::LogHelper_obj::colorCodes;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(136)
		::String tmp5 = output;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(136)
		::String tmp6 = tmp4->replace(tmp5,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(136)
		return tmp6;
	}
	HX_STACK_LINE(130)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LogHelper_obj,stripColor,return )

Void LogHelper_obj::warn( ::String message,::String __o_verboseMessage,hx::Null< bool >  __o_allowRepeat){
::String verboseMessage = __o_verboseMessage.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
bool allowRepeat = __o_allowRepeat.Default(false);
	HX_STACK_FRAME("lime.tools.helpers.LogHelper","warn",0x61af7d37,"lime.tools.helpers.LogHelper.warn","lime/tools/helpers/LogHelper.hx",143,0x73a4c904)
	HX_STACK_ARG(message,"message")
	HX_STACK_ARG(verboseMessage,"verboseMessage")
	HX_STACK_ARG(allowRepeat,"allowRepeat")
{
		HX_STACK_LINE(145)
		bool tmp = ::lime::tools::helpers::LogHelper_obj::mute;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(145)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(145)
		if ((tmp1)){
			HX_STACK_LINE(147)
			::String output = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(output,"output");
			HX_STACK_LINE(149)
			bool tmp2 = ::lime::tools::helpers::LogHelper_obj::verbose;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(149)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(149)
			if ((tmp2)){
				HX_STACK_LINE(149)
				tmp3 = (verboseMessage != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(149)
				tmp3 = false;
			}
			HX_STACK_LINE(149)
			if ((tmp3)){
				HX_STACK_LINE(151)
				::String tmp4 = (HX_HCSTRING("\x1b""[33;1mWarning:\x1b""[0m \x1b""[1m","\x2a","\x58","\xec","\x55") + verboseMessage);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(151)
				::String tmp5 = (tmp4 + HX_HCSTRING("\x1b""[0m","\x1d","\xfa","\x1d","\x12"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(151)
				output = tmp5;
			}
			else{
				HX_STACK_LINE(153)
				bool tmp4 = (message != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(153)
				if ((tmp4)){
					HX_STACK_LINE(155)
					::String tmp5 = (HX_HCSTRING("\x1b""[33;1mWarning:\x1b""[0m \x1b""[1m","\x2a","\x58","\xec","\x55") + message);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(155)
					::String tmp6 = (tmp5 + HX_HCSTRING("\x1b""[0m","\x1d","\xfa","\x1d","\x12"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(155)
					output = tmp6;
				}
			}
			HX_STACK_LINE(159)
			bool tmp4 = allowRepeat;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(159)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(159)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(159)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(159)
			if ((tmp6)){
				HX_STACK_LINE(159)
				::haxe::ds::StringMap tmp8 = ::lime::tools::helpers::LogHelper_obj::sentWarnings;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(159)
				::haxe::ds::StringMap tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(159)
				::String tmp10 = output;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(159)
				::String tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(159)
				tmp7 = tmp9->exists(tmp11);
			}
			else{
				HX_STACK_LINE(159)
				tmp7 = false;
			}
			HX_STACK_LINE(159)
			if ((tmp7)){
				HX_STACK_LINE(161)
				return null();
			}
			HX_STACK_LINE(165)
			::haxe::ds::StringMap tmp8 = ::lime::tools::helpers::LogHelper_obj::sentWarnings;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(165)
			::String tmp9 = output;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(165)
			tmp8->set(tmp9,true);
			HX_STACK_LINE(166)
			::String tmp10 = output;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(166)
			::lime::tools::helpers::LogHelper_obj::println(tmp10);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(LogHelper_obj,warn,(void))


LogHelper_obj::LogHelper_obj()
{
}

bool LogHelper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mute") ) { outValue = mute; return true;  }
		if (HX_FIELD_EQ(inName,"info") ) { outValue = info_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"warn") ) { outValue = warn_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { outValue = error_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"print") ) { outValue = print_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"verbose") ) { outValue = verbose; return true;  }
		if (HX_FIELD_EQ(inName,"println") ) { outValue = println_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"resetColor") ) { outValue = resetColor; return true;  }
		if (HX_FIELD_EQ(inName,"colorCodes") ) { outValue = colorCodes; return true;  }
		if (HX_FIELD_EQ(inName,"stripColor") ) { outValue = stripColor_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"accentColor") ) { outValue = accentColor; return true;  }
		if (HX_FIELD_EQ(inName,"enableColor") ) { outValue = enableColor; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sentWarnings") ) { outValue = sentWarnings; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorSupported") ) { outValue = colorSupported; return true;  }
	}
	return false;
}

bool LogHelper_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mute") ) { mute=ioValue.Cast< bool >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"verbose") ) { verbose=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"resetColor") ) { resetColor=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"colorCodes") ) { colorCodes=ioValue.Cast< ::EReg >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"accentColor") ) { accentColor=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"enableColor") ) { enableColor=ioValue.Cast< bool >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sentWarnings") ) { sentWarnings=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorSupported") ) { colorSupported=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &LogHelper_obj::accentColor,HX_HCSTRING("accentColor","\xb9","\x63","\x7e","\x72")},
	{hx::fsBool,(void *) &LogHelper_obj::enableColor,HX_HCSTRING("enableColor","\xe0","\xb7","\x2b","\x15")},
	{hx::fsBool,(void *) &LogHelper_obj::mute,HX_HCSTRING("mute","\xd9","\x6e","\x65","\x48")},
	{hx::fsString,(void *) &LogHelper_obj::resetColor,HX_HCSTRING("resetColor","\x14","\xa9","\xf8","\x32")},
	{hx::fsBool,(void *) &LogHelper_obj::verbose,HX_HCSTRING("verbose","\x82","\xd7","\xb9","\x71")},
	{hx::fsObject /*::EReg*/ ,(void *) &LogHelper_obj::colorCodes,HX_HCSTRING("colorCodes","\x43","\x6e","\xc2","\x6e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &LogHelper_obj::colorSupported,HX_HCSTRING("colorSupported","\x4b","\x70","\xb6","\x7c")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &LogHelper_obj::sentWarnings,HX_HCSTRING("sentWarnings","\x0f","\x98","\x66","\xf8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LogHelper_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LogHelper_obj::accentColor,"accentColor");
	HX_MARK_MEMBER_NAME(LogHelper_obj::enableColor,"enableColor");
	HX_MARK_MEMBER_NAME(LogHelper_obj::mute,"mute");
	HX_MARK_MEMBER_NAME(LogHelper_obj::resetColor,"resetColor");
	HX_MARK_MEMBER_NAME(LogHelper_obj::verbose,"verbose");
	HX_MARK_MEMBER_NAME(LogHelper_obj::colorCodes,"colorCodes");
	HX_MARK_MEMBER_NAME(LogHelper_obj::colorSupported,"colorSupported");
	HX_MARK_MEMBER_NAME(LogHelper_obj::sentWarnings,"sentWarnings");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LogHelper_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LogHelper_obj::accentColor,"accentColor");
	HX_VISIT_MEMBER_NAME(LogHelper_obj::enableColor,"enableColor");
	HX_VISIT_MEMBER_NAME(LogHelper_obj::mute,"mute");
	HX_VISIT_MEMBER_NAME(LogHelper_obj::resetColor,"resetColor");
	HX_VISIT_MEMBER_NAME(LogHelper_obj::verbose,"verbose");
	HX_VISIT_MEMBER_NAME(LogHelper_obj::colorCodes,"colorCodes");
	HX_VISIT_MEMBER_NAME(LogHelper_obj::colorSupported,"colorSupported");
	HX_VISIT_MEMBER_NAME(LogHelper_obj::sentWarnings,"sentWarnings");
};

#endif

hx::Class LogHelper_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("accentColor","\xb9","\x63","\x7e","\x72"),
	HX_HCSTRING("enableColor","\xe0","\xb7","\x2b","\x15"),
	HX_HCSTRING("mute","\xd9","\x6e","\x65","\x48"),
	HX_HCSTRING("resetColor","\x14","\xa9","\xf8","\x32"),
	HX_HCSTRING("verbose","\x82","\xd7","\xb9","\x71"),
	HX_HCSTRING("colorCodes","\x43","\x6e","\xc2","\x6e"),
	HX_HCSTRING("colorSupported","\x4b","\x70","\xb6","\x7c"),
	HX_HCSTRING("sentWarnings","\x0f","\x98","\x66","\xf8"),
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("info","\x6e","\x38","\xbb","\x45"),
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	HX_HCSTRING("println","\xef","\xdb","\x33","\x84"),
	HX_HCSTRING("stripColor","\x6b","\x3f","\x1e","\x23"),
	HX_HCSTRING("warn","\x46","\x62","\xf2","\x4e"),
	::String(null()) };

void LogHelper_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.tools.helpers.LogHelper","\x1d","\x2b","\x2f","\x50");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LogHelper_obj::__GetStatic;
	__mClass->mSetStaticField = &LogHelper_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< LogHelper_obj >;
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

void LogHelper_obj::__boot()
{
	accentColor= HX_HCSTRING("\x1b""[32;1m","\xf8","\x8c","\xe6","\x43");
	enableColor= true;
	mute= false;
	resetColor= HX_HCSTRING("\x1b""[0m","\x1d","\xfa","\x1d","\x12");
	verbose= false;
	colorCodes= ::EReg_obj::__new(HX_HCSTRING("\\x1b\\[[^m]+m","\xc1","\x5f","\x72","\xb8"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/tools/helpers/LogHelper.hx",29,0x73a4c904)
		{
			HX_STACK_LINE(29)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(29)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(29)
			return tmp1;
		}
		return null();
	}
};
	sentWarnings= _Function_0_1::Block();
}

} // end namespace lime
} // end namespace tools
} // end namespace helpers
