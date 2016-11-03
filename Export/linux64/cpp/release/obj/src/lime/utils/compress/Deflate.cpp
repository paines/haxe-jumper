#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_compress_Deflate
#include <lime/utils/compress/Deflate.h>
#endif
namespace lime{
namespace utils{
namespace compress{

Void Deflate_obj::__construct()
{
	return null();
}

//Deflate_obj::~Deflate_obj() { }

Dynamic Deflate_obj::__CreateEmpty() { return  new Deflate_obj; }
hx::ObjectPtr< Deflate_obj > Deflate_obj::__new()
{  hx::ObjectPtr< Deflate_obj > _result_ = new Deflate_obj();
	_result_->__construct();
	return _result_;}

Dynamic Deflate_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Deflate_obj > _result_ = new Deflate_obj();
	_result_->__construct();
	return _result_;}

::haxe::io::Bytes Deflate_obj::compress( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.utils.compress.Deflate","compress",0x2979d39b,"lime.utils.compress.Deflate.compress","lime/utils/compress/Deflate.hx",18,0x7e6cac08)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(23)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	{
		HX_STACK_LINE(23)
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::alloc((int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		Dynamic bytes1 = tmp1;		HX_STACK_VAR(bytes1,"bytes1");
		HX_STACK_LINE(23)
		tmp = ::lime::utils::compress::Deflate_obj::cffi_lime_deflate_compress.call(hx::DynamicPtr(bytes),hx::DynamicPtr(bytes1));
	}
	HX_STACK_LINE(23)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Deflate_obj,compress,return )

::haxe::io::Bytes Deflate_obj::decompress( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.utils.compress.Deflate","decompress",0x4c84c45c,"lime.utils.compress.Deflate.decompress","lime/utils/compress/Deflate.hx",54,0x7e6cac08)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(59)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	{
		HX_STACK_LINE(59)
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::alloc((int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		Dynamic bytes1 = tmp1;		HX_STACK_VAR(bytes1,"bytes1");
		HX_STACK_LINE(59)
		tmp = ::lime::utils::compress::Deflate_obj::cffi_lime_deflate_decompress.call(hx::DynamicPtr(bytes),hx::DynamicPtr(bytes1));
	}
	HX_STACK_LINE(59)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Deflate_obj,decompress,return )

Dynamic Deflate_obj::lime_deflate_compress( Dynamic data,Dynamic bytes){
	HX_STACK_FRAME("lime.utils.compress.Deflate","lime_deflate_compress",0xc4532a47,"lime.utils.compress.Deflate.lime_deflate_compress","lime/utils/compress/Deflate.hx",98,0x7e6cac08)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(98)
	return ::lime::utils::compress::Deflate_obj::cffi_lime_deflate_compress.call(hx::DynamicPtr(data),hx::DynamicPtr(bytes));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Deflate_obj,lime_deflate_compress,return )

Dynamic Deflate_obj::lime_deflate_decompress( Dynamic data,Dynamic bytes){
	HX_STACK_FRAME("lime.utils.compress.Deflate","lime_deflate_decompress",0x51621e08,"lime.utils.compress.Deflate.lime_deflate_decompress","lime/utils/compress/Deflate.hx",99,0x7e6cac08)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(99)
	return ::lime::utils::compress::Deflate_obj::cffi_lime_deflate_decompress.call(hx::DynamicPtr(data),hx::DynamicPtr(bytes));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Deflate_obj,lime_deflate_decompress,return )

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > Deflate_obj::cffi_lime_deflate_compress;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > Deflate_obj::cffi_lime_deflate_decompress;


Deflate_obj::Deflate_obj()
{
}

bool Deflate_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"compress") ) { outValue = compress_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"decompress") ) { outValue = decompress_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_deflate_compress") ) { outValue = lime_deflate_compress_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_deflate_decompress") ) { outValue = lime_deflate_decompress_dyn(); return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"cffi_lime_deflate_compress") ) { outValue = cffi_lime_deflate_compress; return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"cffi_lime_deflate_decompress") ) { outValue = cffi_lime_deflate_decompress; return true;  }
	}
	return false;
}

bool Deflate_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 26:
		if (HX_FIELD_EQ(inName,"cffi_lime_deflate_compress") ) { cffi_lime_deflate_compress=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"cffi_lime_deflate_decompress") ) { cffi_lime_deflate_decompress=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &Deflate_obj::cffi_lime_deflate_compress,HX_HCSTRING("cffi_lime_deflate_compress","\x47","\xa2","\x02","\x3b")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &Deflate_obj::cffi_lime_deflate_decompress,HX_HCSTRING("cffi_lime_deflate_decompress","\x08","\x96","\xdf","\x6c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Deflate_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Deflate_obj::cffi_lime_deflate_compress,"cffi_lime_deflate_compress");
	HX_MARK_MEMBER_NAME(Deflate_obj::cffi_lime_deflate_decompress,"cffi_lime_deflate_decompress");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Deflate_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Deflate_obj::cffi_lime_deflate_compress,"cffi_lime_deflate_compress");
	HX_VISIT_MEMBER_NAME(Deflate_obj::cffi_lime_deflate_decompress,"cffi_lime_deflate_decompress");
};

#endif

hx::Class Deflate_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("compress","\xa2","\x47","\xbf","\x83"),
	HX_HCSTRING("decompress","\x23","\x88","\x14","\xda"),
	HX_HCSTRING("lime_deflate_compress","\xe0","\x7d","\x72","\x7f"),
	HX_HCSTRING("lime_deflate_decompress","\xe1","\x49","\xb0","\x91"),
	HX_HCSTRING("cffi_lime_deflate_compress","\x47","\xa2","\x02","\x3b"),
	HX_HCSTRING("cffi_lime_deflate_decompress","\x08","\x96","\xdf","\x6c"),
	::String(null()) };

void Deflate_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.compress.Deflate","\x95","\x37","\xdf","\x98");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Deflate_obj::__GetStatic;
	__mClass->mSetStaticField = &Deflate_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Deflate_obj >;
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

void Deflate_obj::__boot()
{
	cffi_lime_deflate_compress= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_deflate_compress","\xe0","\x7d","\x72","\x7f"),HX_HCSTRING("ooo","\x4f","\x9b","\x54","\x00"),false));
	cffi_lime_deflate_decompress= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_deflate_decompress","\xe1","\x49","\xb0","\x91"),HX_HCSTRING("ooo","\x4f","\x9b","\x54","\x00"),false));
}

} // end namespace lime
} // end namespace utils
} // end namespace compress
