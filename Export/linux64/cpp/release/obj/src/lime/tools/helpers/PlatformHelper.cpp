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
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_lime_project_Architecture
#include <lime/project/Architecture.h>
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

Void PlatformHelper_obj::__construct()
{
	return null();
}

//PlatformHelper_obj::~PlatformHelper_obj() { }

Dynamic PlatformHelper_obj::__CreateEmpty() { return  new PlatformHelper_obj; }
hx::ObjectPtr< PlatformHelper_obj > PlatformHelper_obj::__new()
{  hx::ObjectPtr< PlatformHelper_obj > _result_ = new PlatformHelper_obj();
	_result_->__construct();
	return _result_;}

Dynamic PlatformHelper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlatformHelper_obj > _result_ = new PlatformHelper_obj();
	_result_->__construct();
	return _result_;}

::lime::project::Architecture PlatformHelper_obj::hostArchitecture;

::String PlatformHelper_obj::hostPlatform;

::lime::project::Architecture PlatformHelper_obj::_hostArchitecture;

::String PlatformHelper_obj::_hostPlatform;

::lime::project::Architecture PlatformHelper_obj::get_hostArchitecture( ){
	HX_STACK_FRAME("lime.tools.helpers.PlatformHelper","get_hostArchitecture",0x0d9a3a3c,"lime.tools.helpers.PlatformHelper.get_hostArchitecture","lime/tools/helpers/PlatformHelper.hx",19,0x80af35c5)
	HX_STACK_LINE(21)
	::lime::project::Architecture tmp = ::lime::tools::helpers::PlatformHelper_obj::_hostArchitecture;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	if ((tmp1)){
		HX_STACK_LINE(23)
		{
			HX_STACK_LINE(23)
			::String tmp2 = ::lime::tools::helpers::PlatformHelper_obj::get_hostPlatform();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(23)
			::String _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(23)
			::String tmp3 = _g;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(23)
			::String _switch_1 = (tmp3);
			if (  ( _switch_1==HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"))){
				HX_STACK_LINE(27)
				::String tmp4 = ::Sys_obj::getEnv(HX_HCSTRING("PROCESSOR_ARCHITEW6432","\x3d","\xad","\x0b","\xca"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(27)
				::String architecture = tmp4;		HX_STACK_VAR(architecture,"architecture");
				HX_STACK_LINE(29)
				bool tmp5 = (architecture != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(29)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(29)
				if ((tmp5)){
					HX_STACK_LINE(29)
					int tmp7 = architecture.indexOf(HX_HCSTRING("64","\x3e","\x2f","\x00","\x00"),null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(29)
					int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(29)
					tmp6 = (tmp8 > (int)-1);
				}
				else{
					HX_STACK_LINE(29)
					tmp6 = false;
				}
				HX_STACK_LINE(29)
				if ((tmp6)){
					HX_STACK_LINE(31)
					::lime::tools::helpers::PlatformHelper_obj::_hostArchitecture = ::lime::project::Architecture_obj::X64;
				}
				else{
					HX_STACK_LINE(35)
					::lime::tools::helpers::PlatformHelper_obj::_hostArchitecture = ::lime::project::Architecture_obj::X86;
				}
			}
			else if (  ( _switch_1==HX_HCSTRING("linux","\xf4","\xeb","\x01","\x75")) ||  ( _switch_1==HX_HCSTRING("mac","\x8f","\x0a","\x53","\x00"))){
				HX_STACK_LINE(41)
				::sys::io::Process tmp4 = ::sys::io::Process_obj::__new(HX_HCSTRING("uname","\x40","\x51","\xe1","\xa6"),Array_obj< ::String >::__new().Add(HX_HCSTRING("-m","\xa0","\x27","\x00","\x00")));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(41)
				::sys::io::Process process = tmp4;		HX_STACK_VAR(process,"process");
				HX_STACK_LINE(42)
				::haxe::io::Bytes tmp5 = process->_stdout->readAll(null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(42)
				::String tmp6 = tmp5->toString();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(42)
				::String output = tmp6;		HX_STACK_VAR(output,"output");
				HX_STACK_LINE(43)
				::haxe::io::Bytes tmp7 = process->_stderr->readAll(null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(43)
				::String tmp8 = tmp7->toString();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(43)
				::String error = tmp8;		HX_STACK_VAR(error,"error");
				HX_STACK_LINE(44)
				process->exitCode();
				HX_STACK_LINE(45)
				process->close();
				HX_STACK_LINE(47)
				int tmp9 = output.indexOf(HX_HCSTRING("armv6","\x5c","\xb4","\x8b","\x25"),null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(47)
				bool tmp10 = (tmp9 > (int)-1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(47)
				if ((tmp10)){
					HX_STACK_LINE(49)
					::lime::tools::helpers::PlatformHelper_obj::_hostArchitecture = ::lime::project::Architecture_obj::ARMV6;
				}
				else{
					HX_STACK_LINE(51)
					int tmp11 = output.indexOf(HX_HCSTRING("armv7","\x5d","\xb4","\x8b","\x25"),null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(51)
					bool tmp12 = (tmp11 > (int)-1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(51)
					if ((tmp12)){
						HX_STACK_LINE(53)
						::lime::tools::helpers::PlatformHelper_obj::_hostArchitecture = ::lime::project::Architecture_obj::ARMV7;
					}
					else{
						HX_STACK_LINE(55)
						int tmp13 = output.indexOf(HX_HCSTRING("64","\x3e","\x2f","\x00","\x00"),null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(55)
						bool tmp14 = (tmp13 > (int)-1);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(55)
						if ((tmp14)){
							HX_STACK_LINE(57)
							::lime::tools::helpers::PlatformHelper_obj::_hostArchitecture = ::lime::project::Architecture_obj::X64;
						}
						else{
							HX_STACK_LINE(60)
							::lime::tools::helpers::PlatformHelper_obj::_hostArchitecture = ::lime::project::Architecture_obj::X86;
						}
					}
				}
			}
			else  {
				HX_STACK_LINE(66)
				::lime::tools::helpers::PlatformHelper_obj::_hostArchitecture = ::lime::project::Architecture_obj::ARMV6;
			}
;
;
		}
		HX_STACK_LINE(70)
		::lime::project::Architecture tmp2 = ::lime::tools::helpers::PlatformHelper_obj::_hostArchitecture;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(70)
		::String tmp4 = tmp3.toUpperCase();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(70)
		::String tmp5 = (HX_HCSTRING(" - \x1b""[1mDetected host architecture:\x1b""[0m ","\x25","\x8f","\x85","\x29") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(70)
		::lime::tools::helpers::LogHelper_obj::info(HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp5);
	}
	HX_STACK_LINE(74)
	::lime::project::Architecture tmp2 = ::lime::tools::helpers::PlatformHelper_obj::_hostArchitecture;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(74)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PlatformHelper_obj,get_hostArchitecture,return )

::String PlatformHelper_obj::get_hostPlatform( ){
	HX_STACK_FRAME("lime.tools.helpers.PlatformHelper","get_hostPlatform",0xae900b9c,"lime.tools.helpers.PlatformHelper.get_hostPlatform","lime/tools/helpers/PlatformHelper.hx",79,0x80af35c5)
	HX_STACK_LINE(81)
	::String tmp = ::lime::tools::helpers::PlatformHelper_obj::_hostPlatform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(81)
	if ((tmp1)){
		HX_STACK_LINE(83)
		::EReg tmp2 = ::EReg_obj::__new(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		::String tmp3 = ::Sys_obj::systemName();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(83)
		bool tmp4 = tmp2->match(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(83)
		if ((tmp4)){
			HX_STACK_LINE(85)
			::lime::tools::helpers::PlatformHelper_obj::_hostPlatform = HX_HCSTRING("windows","\x83","\xde","\x74","\xe8");
		}
		else{
			HX_STACK_LINE(87)
			::EReg tmp5 = ::EReg_obj::__new(HX_HCSTRING("linux","\xf4","\xeb","\x01","\x75"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(87)
			::String tmp6 = ::Sys_obj::systemName();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(87)
			bool tmp7 = tmp5->match(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(87)
			if ((tmp7)){
				HX_STACK_LINE(89)
				::lime::tools::helpers::PlatformHelper_obj::_hostPlatform = HX_HCSTRING("linux","\xf4","\xeb","\x01","\x75");
			}
			else{
				HX_STACK_LINE(91)
				::EReg tmp8 = ::EReg_obj::__new(HX_HCSTRING("mac","\x8f","\x0a","\x53","\x00"),HX_HCSTRING("i","\x69","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(91)
				::String tmp9 = ::Sys_obj::systemName();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(91)
				bool tmp10 = tmp8->match(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(91)
				if ((tmp10)){
					HX_STACK_LINE(93)
					::lime::tools::helpers::PlatformHelper_obj::_hostPlatform = HX_HCSTRING("mac","\x8f","\x0a","\x53","\x00");
				}
			}
		}
		HX_STACK_LINE(97)
		::String tmp5 = ::lime::tools::helpers::PlatformHelper_obj::_hostPlatform;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(97)
		::String tmp6 = ::Std_obj::string(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(97)
		::String tmp7 = tmp6.toUpperCase();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(97)
		::String tmp8 = (HX_HCSTRING(" - \x1b""[1mDetected host platform:\x1b""[0m ","\x85","\x28","\x65","\x31") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(97)
		::lime::tools::helpers::LogHelper_obj::info(HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp8);
	}
	HX_STACK_LINE(101)
	::String tmp2 = ::lime::tools::helpers::PlatformHelper_obj::_hostPlatform;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(101)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PlatformHelper_obj,get_hostPlatform,return )


PlatformHelper_obj::PlatformHelper_obj()
{
}

bool PlatformHelper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"hostPlatform") ) { outValue = inCallProp == hx::paccAlways ? get_hostPlatform() : hostPlatform; return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_hostPlatform") ) { outValue = _hostPlatform; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hostArchitecture") ) { outValue = inCallProp == hx::paccAlways ? get_hostArchitecture() : hostArchitecture; return true; }
		if (HX_FIELD_EQ(inName,"get_hostPlatform") ) { outValue = get_hostPlatform_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_hostArchitecture") ) { outValue = _hostArchitecture; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_hostArchitecture") ) { outValue = get_hostArchitecture_dyn(); return true;  }
	}
	return false;
}

bool PlatformHelper_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"hostPlatform") ) { hostPlatform=ioValue.Cast< ::String >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_hostPlatform") ) { _hostPlatform=ioValue.Cast< ::String >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hostArchitecture") ) { hostArchitecture=ioValue.Cast< ::lime::project::Architecture >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_hostArchitecture") ) { _hostArchitecture=ioValue.Cast< ::lime::project::Architecture >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::project::Architecture*/ ,(void *) &PlatformHelper_obj::hostArchitecture,HX_HCSTRING("hostArchitecture","\x5b","\x50","\x6d","\xb4")},
	{hx::fsString,(void *) &PlatformHelper_obj::hostPlatform,HX_HCSTRING("hostPlatform","\x3b","\xe6","\xb7","\xce")},
	{hx::fsObject /*::lime::project::Architecture*/ ,(void *) &PlatformHelper_obj::_hostArchitecture,HX_HCSTRING("_hostArchitecture","\xba","\x3e","\xe8","\x4c")},
	{hx::fsString,(void *) &PlatformHelper_obj::_hostPlatform,HX_HCSTRING("_hostPlatform","\x1a","\x79","\x26","\xb1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlatformHelper_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PlatformHelper_obj::hostArchitecture,"hostArchitecture");
	HX_MARK_MEMBER_NAME(PlatformHelper_obj::hostPlatform,"hostPlatform");
	HX_MARK_MEMBER_NAME(PlatformHelper_obj::_hostArchitecture,"_hostArchitecture");
	HX_MARK_MEMBER_NAME(PlatformHelper_obj::_hostPlatform,"_hostPlatform");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlatformHelper_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PlatformHelper_obj::hostArchitecture,"hostArchitecture");
	HX_VISIT_MEMBER_NAME(PlatformHelper_obj::hostPlatform,"hostPlatform");
	HX_VISIT_MEMBER_NAME(PlatformHelper_obj::_hostArchitecture,"_hostArchitecture");
	HX_VISIT_MEMBER_NAME(PlatformHelper_obj::_hostPlatform,"_hostPlatform");
};

#endif

hx::Class PlatformHelper_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("hostArchitecture","\x5b","\x50","\x6d","\xb4"),
	HX_HCSTRING("hostPlatform","\x3b","\xe6","\xb7","\xce"),
	HX_HCSTRING("_hostArchitecture","\xba","\x3e","\xe8","\x4c"),
	HX_HCSTRING("_hostPlatform","\x1a","\x79","\x26","\xb1"),
	HX_HCSTRING("get_hostArchitecture","\x64","\xb5","\xd7","\xd2"),
	HX_HCSTRING("get_hostPlatform","\xc4","\xd2","\x56","\xd3"),
	::String(null()) };

void PlatformHelper_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.tools.helpers.PlatformHelper","\x96","\x3a","\xe3","\x07");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PlatformHelper_obj::__GetStatic;
	__mClass->mSetStaticField = &PlatformHelper_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< PlatformHelper_obj >;
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

} // end namespace lime
} // end namespace tools
} // end namespace helpers
