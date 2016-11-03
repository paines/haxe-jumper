#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Gc
#include <cpp/vm/Gc.h>
#endif
#ifndef INCLUDED_lime_system_Clipboard
#include <lime/system/Clipboard.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_system_System
#include <openfl/system/System.h>
#endif
namespace openfl{
namespace _system{

Void System_obj::__construct()
{
	return null();
}

//System_obj::~System_obj() { }

Dynamic System_obj::__CreateEmpty() { return  new System_obj; }
hx::ObjectPtr< System_obj > System_obj::__new()
{  hx::ObjectPtr< System_obj > _result_ = new System_obj();
	_result_->__construct();
	return _result_;}

Dynamic System_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< System_obj > _result_ = new System_obj();
	_result_->__construct();
	return _result_;}

bool System_obj::useCodePage;

Void System_obj::exit( int code){
{
		HX_STACK_FRAME("openfl.system.System","exit",0xa31a52fc,"openfl.system.System.exit","openfl/system/System.hx",22,0xde21ad4e)
		HX_STACK_ARG(code,"code")
		HX_STACK_LINE(24)
		int tmp = code;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		::lime::_system::System_obj::exit(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,exit,(void))

Void System_obj::gc( ){
{
		HX_STACK_FRAME("openfl.system.System","gc",0x9ae3627a,"openfl.system.System.gc","openfl/system/System.hx",32,0xde21ad4e)
		HX_STACK_LINE(32)
		::cpp::vm::Gc_obj::run(true);
		HX_STACK_LINE(32)
		return null();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,gc,(void))

Void System_obj::pause( ){
{
		HX_STACK_FRAME("openfl.system.System","pause",0x5a2bdd58,"openfl.system.System.pause","openfl/system/System.hx",38,0xde21ad4e)
		HX_STACK_LINE(40)
		Dynamic tmp = hx::SourceInfo(HX_HCSTRING("System.hx","\x0f","\x4b","\x4f","\xec"),40,HX_HCSTRING("openfl.system.System","\x50","\x91","\xb1","\xf6"),HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		::openfl::Lib_obj::notImplemented(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,pause,(void))

Void System_obj::resume( ){
{
		HX_STACK_FRAME("openfl.system.System","resume",0xa535f90b,"openfl.system.System.resume","openfl/system/System.hx",45,0xde21ad4e)
		HX_STACK_LINE(47)
		Dynamic tmp = hx::SourceInfo(HX_HCSTRING("System.hx","\x0f","\x4b","\x4f","\xec"),47,HX_HCSTRING("openfl.system.System","\x50","\x91","\xb1","\xf6"),HX_HCSTRING("resume","\xad","\x69","\x84","\x08"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		::openfl::Lib_obj::notImplemented(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,resume,(void))

Void System_obj::setClipboard( ::String string){
{
		HX_STACK_FRAME("openfl.system.System","setClipboard",0xdfcf8fb2,"openfl.system.System.setClipboard","openfl/system/System.hx",52,0xde21ad4e)
		HX_STACK_ARG(string,"string")
		HX_STACK_LINE(54)
		::String tmp = string;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		::lime::_system::Clipboard_obj::set_text(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,setClipboard,(void))

int System_obj::get_totalMemory( ){
	HX_STACK_FRAME("openfl.system.System","get_totalMemory",0x85540a5e,"openfl.system.System.get_totalMemory","openfl/system/System.hx",66,0xde21ad4e)
	HX_STACK_LINE(71)
	int tmp = ::__hxcpp_gc_used_bytes();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_totalMemory,return )

::String System_obj::get_vmVersion( ){
	HX_STACK_FRAME("openfl.system.System","get_vmVersion",0x9b1c18da,"openfl.system.System.get_vmVersion","openfl/system/System.hx",83,0xde21ad4e)
	HX_STACK_LINE(83)
	return HX_HCSTRING("1.0.0","\xb5","\xd1","\x2e","\x55");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_vmVersion,return )


System_obj::System_obj()
{
}

bool System_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gc") ) { outValue = gc_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"exit") ) { outValue = exit_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { outValue = pause_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resume") ) { outValue = resume_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"vmVersion") ) { if (inCallProp == hx::paccAlways) { outValue = get_vmVersion(); return true; } }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalMemory") ) { if (inCallProp == hx::paccAlways) { outValue = get_totalMemory(); return true; } }
		if (HX_FIELD_EQ(inName,"useCodePage") ) { outValue = useCodePage; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setClipboard") ) { outValue = setClipboard_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_vmVersion") ) { outValue = get_vmVersion_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_totalMemory") ) { outValue = get_totalMemory_dyn(); return true;  }
	}
	return false;
}

bool System_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"useCodePage") ) { useCodePage=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &System_obj::useCodePage,HX_HCSTRING("useCodePage","\x83","\x59","\xaf","\xd8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(System_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(System_obj::useCodePage,"useCodePage");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(System_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(System_obj::useCodePage,"useCodePage");
};

#endif

hx::Class System_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("useCodePage","\x83","\x59","\xaf","\xd8"),
	HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"),
	HX_HCSTRING("gc","\x1c","\x5a","\x00","\x00"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("setClipboard","\xd4","\x25","\x27","\x66"),
	HX_HCSTRING("get_totalMemory","\x7c","\x75","\xd7","\x8b"),
	HX_HCSTRING("get_vmVersion","\x78","\xe0","\x67","\xa1"),
	::String(null()) };

void System_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.system.System","\x50","\x91","\xb1","\xf6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &System_obj::__GetStatic;
	__mClass->mSetStaticField = &System_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< System_obj >;
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

void System_obj::__boot()
{
	useCodePage= false;
}

} // end namespace openfl
} // end namespace system
