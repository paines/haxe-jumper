#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_format_JPEG
#include <lime/graphics/format/JPEG.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
namespace lime{
namespace graphics{
namespace format{

Void JPEG_obj::__construct()
{
	return null();
}

//JPEG_obj::~JPEG_obj() { }

Dynamic JPEG_obj::__CreateEmpty() { return  new JPEG_obj; }
hx::ObjectPtr< JPEG_obj > JPEG_obj::__new()
{  hx::ObjectPtr< JPEG_obj > _result_ = new JPEG_obj();
	_result_->__construct();
	return _result_;}

Dynamic JPEG_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JPEG_obj > _result_ = new JPEG_obj();
	_result_->__construct();
	return _result_;}

::lime::graphics::Image JPEG_obj::decodeBytes( ::haxe::io::Bytes bytes,hx::Null< bool >  __o_decodeData){
bool decodeData = __o_decodeData.Default(true);
	HX_STACK_FRAME("lime.graphics.format.JPEG","decodeBytes",0x9c51a384,"lime.graphics.format.JPEG.decodeBytes","lime/graphics/format/JPEG.hx",25,0x0d45bec8)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(decodeData,"decodeData")
{
		HX_STACK_LINE(30)
		Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		{
			HX_STACK_LINE(30)
			::lime::utils::ArrayBufferView tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(30)
			{
				HX_STACK_LINE(30)
				::haxe::io::Bytes tmp2 = ::haxe::io::Bytes_obj::alloc((int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(30)
				::haxe::io::Bytes buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(30)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(30)
				bool tmp3 = (buffer != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(30)
				if ((tmp3)){
					HX_STACK_LINE(30)
					::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(30)
					{
						HX_STACK_LINE(30)
						::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(30)
						::lime::utils::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(30)
						int tmp6 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(30)
						bool tmp7 = (tmp6 != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(30)
						if ((tmp7)){
							HX_STACK_LINE(30)
							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
						}
						HX_STACK_LINE(30)
						int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
						HX_STACK_LINE(30)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(30)
						int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
						HX_STACK_LINE(30)
						{
							HX_STACK_LINE(30)
							newByteLength = bufferByteLength;
							HX_STACK_LINE(30)
							int tmp8 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(30)
							bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(30)
							if ((tmp9)){
								HX_STACK_LINE(30)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(30)
							bool tmp10 = (newByteLength < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(30)
							if ((tmp10)){
								HX_STACK_LINE(30)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
						}
						HX_STACK_LINE(30)
						_this->buffer = buffer;
						HX_STACK_LINE(30)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(30)
						_this->byteLength = newByteLength;
						HX_STACK_LINE(30)
						Float tmp8 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(30)
						int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(30)
						_this->length = tmp9;
						HX_STACK_LINE(30)
						tmp4 = _this;
					}
					HX_STACK_LINE(30)
					this1 = tmp4;
				}
				else{
					HX_STACK_LINE(30)
					HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
				}
				HX_STACK_LINE(30)
				tmp1 = this1;
			}
			HX_STACK_LINE(30)
			::lime::graphics::ImageBuffer tmp2 = ::lime::graphics::ImageBuffer_obj::__new(tmp1,null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(30)
			Dynamic buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(30)
			tmp = ::lime::graphics::format::JPEG_obj::cffi_lime_jpeg_decode_bytes.call(hx::DynamicPtr(bytes),decodeData,hx::DynamicPtr(buffer));
		}
		HX_STACK_LINE(30)
		return tmp;
		HX_STACK_LINE(45)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JPEG_obj,decodeBytes,return )

::lime::graphics::Image JPEG_obj::decodeFile( ::String path,hx::Null< bool >  __o_decodeData){
bool decodeData = __o_decodeData.Default(true);
	HX_STACK_FRAME("lime.graphics.format.JPEG","decodeFile",0xcb0bd983,"lime.graphics.format.JPEG.decodeFile","lime/graphics/format/JPEG.hx",50,0x0d45bec8)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(decodeData,"decodeData")
{
		HX_STACK_LINE(55)
		Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			::lime::utils::ArrayBufferView tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(55)
			{
				HX_STACK_LINE(55)
				::haxe::io::Bytes tmp2 = ::haxe::io::Bytes_obj::alloc((int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(55)
				::haxe::io::Bytes buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(55)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(55)
				bool tmp3 = (buffer != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(55)
				if ((tmp3)){
					HX_STACK_LINE(55)
					::lime::utils::ArrayBufferView tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(55)
					{
						HX_STACK_LINE(55)
						::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(55)
						::lime::utils::ArrayBufferView _this = tmp5;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(55)
						int tmp6 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(55)
						bool tmp7 = (tmp6 != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(55)
						if ((tmp7)){
							HX_STACK_LINE(55)
							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
						}
						HX_STACK_LINE(55)
						int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
						HX_STACK_LINE(55)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(55)
						int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
						HX_STACK_LINE(55)
						{
							HX_STACK_LINE(55)
							newByteLength = bufferByteLength;
							HX_STACK_LINE(55)
							int tmp8 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(55)
							bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(55)
							if ((tmp9)){
								HX_STACK_LINE(55)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(55)
							bool tmp10 = (newByteLength < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(55)
							if ((tmp10)){
								HX_STACK_LINE(55)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
						}
						HX_STACK_LINE(55)
						_this->buffer = buffer;
						HX_STACK_LINE(55)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(55)
						_this->byteLength = newByteLength;
						HX_STACK_LINE(55)
						Float tmp8 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(55)
						int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(55)
						_this->length = tmp9;
						HX_STACK_LINE(55)
						tmp4 = _this;
					}
					HX_STACK_LINE(55)
					this1 = tmp4;
				}
				else{
					HX_STACK_LINE(55)
					HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for UInt8Array","\x6b","\x44","\xd5","\x85"));
				}
				HX_STACK_LINE(55)
				tmp1 = this1;
			}
			HX_STACK_LINE(55)
			::lime::graphics::ImageBuffer tmp2 = ::lime::graphics::ImageBuffer_obj::__new(tmp1,null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(55)
			Dynamic buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(55)
			tmp = ::lime::graphics::format::JPEG_obj::cffi_lime_jpeg_decode_file.call(path,decodeData,hx::DynamicPtr(buffer));
		}
		HX_STACK_LINE(55)
		return tmp;
		HX_STACK_LINE(70)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JPEG_obj,decodeFile,return )

::haxe::io::Bytes JPEG_obj::encode( ::lime::graphics::Image image,int quality){
	HX_STACK_FRAME("lime.graphics.format.JPEG","encode",0xce6c344f,"lime.graphics.format.JPEG.encode","lime/graphics/format/JPEG.hx",75,0x0d45bec8)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(quality,"quality")
	HX_STACK_LINE(77)
	bool tmp = image->get_premultiplied();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(77)
	if ((tmp1)){
		HX_STACK_LINE(77)
		int tmp3 = image->get_format();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(77)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(77)
		tmp2 = (tmp4 != (int)0);
	}
	else{
		HX_STACK_LINE(77)
		tmp2 = true;
	}
	HX_STACK_LINE(77)
	if ((tmp2)){
		HX_STACK_LINE(81)
		::lime::graphics::Image tmp3 = image->clone();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(81)
		image = tmp3;
		HX_STACK_LINE(82)
		image->set_premultiplied(false);
		HX_STACK_LINE(83)
		image->set_format((int)0);
	}
	HX_STACK_LINE(92)
	Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(92)
	{
		HX_STACK_LINE(92)
		::haxe::io::Bytes tmp4 = ::haxe::io::Bytes_obj::alloc((int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(92)
		Dynamic bytes = tmp4;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(92)
		tmp3 = ::lime::graphics::format::JPEG_obj::cffi_lime_image_encode.call(hx::DynamicPtr(image->buffer),(int)1,quality,hx::DynamicPtr(bytes));
	}
	HX_STACK_LINE(92)
	return tmp3;
	HX_STACK_LINE(124)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JPEG_obj,encode,return )

Dynamic JPEG_obj::lime_jpeg_decode_bytes( Dynamic data,bool decodeData,Dynamic buffer){
	HX_STACK_FRAME("lime.graphics.format.JPEG","lime_jpeg_decode_bytes",0x320703e0,"lime.graphics.format.JPEG.lime_jpeg_decode_bytes","lime/graphics/format/JPEG.hx",137,0x0d45bec8)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(decodeData,"decodeData")
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(137)
	return ::lime::graphics::format::JPEG_obj::cffi_lime_jpeg_decode_bytes.call(hx::DynamicPtr(data),decodeData,hx::DynamicPtr(buffer));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JPEG_obj,lime_jpeg_decode_bytes,return )

Dynamic JPEG_obj::lime_jpeg_decode_file( ::String path,bool decodeData,Dynamic buffer){
	HX_STACK_FRAME("lime.graphics.format.JPEG","lime_jpeg_decode_file",0x5579b8a7,"lime.graphics.format.JPEG.lime_jpeg_decode_file","lime/graphics/format/JPEG.hx",138,0x0d45bec8)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(decodeData,"decodeData")
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(138)
	return ::lime::graphics::format::JPEG_obj::cffi_lime_jpeg_decode_file.call(path,decodeData,hx::DynamicPtr(buffer));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JPEG_obj,lime_jpeg_decode_file,return )

Dynamic JPEG_obj::lime_image_encode( Dynamic data,int type,int quality,Dynamic bytes){
	HX_STACK_FRAME("lime.graphics.format.JPEG","lime_image_encode",0x82bdaecb,"lime.graphics.format.JPEG.lime_image_encode","lime/graphics/format/JPEG.hx",139,0x0d45bec8)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(quality,"quality")
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(139)
	return ::lime::graphics::format::JPEG_obj::cffi_lime_image_encode.call(hx::DynamicPtr(data),type,quality,hx::DynamicPtr(bytes));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(JPEG_obj,lime_image_encode,return )

::cpp::Function< ::hx::Object * ( ::hx::Object * ,bool ,::hx::Object * ) > JPEG_obj::cffi_lime_jpeg_decode_bytes;

::cpp::Function< ::hx::Object * ( ::String ,bool ,::hx::Object * ) > JPEG_obj::cffi_lime_jpeg_decode_file;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ,::hx::Object * ) > JPEG_obj::cffi_lime_image_encode;


JPEG_obj::JPEG_obj()
{
}

bool JPEG_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"decodeFile") ) { outValue = decodeFile_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"decodeBytes") ) { outValue = decodeBytes_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_image_encode") ) { outValue = lime_image_encode_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_jpeg_decode_file") ) { outValue = lime_jpeg_decode_file_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_jpeg_decode_bytes") ) { outValue = lime_jpeg_decode_bytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_encode") ) { outValue = cffi_lime_image_encode; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"cffi_lime_jpeg_decode_file") ) { outValue = cffi_lime_jpeg_decode_file; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"cffi_lime_jpeg_decode_bytes") ) { outValue = cffi_lime_jpeg_decode_bytes; return true;  }
	}
	return false;
}

bool JPEG_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_encode") ) { cffi_lime_image_encode=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ,::hx::Object * ) > >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"cffi_lime_jpeg_decode_file") ) { cffi_lime_jpeg_decode_file=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::String ,bool ,::hx::Object * ) > >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"cffi_lime_jpeg_decode_bytes") ) { cffi_lime_jpeg_decode_bytes=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,bool ,::hx::Object * ) > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,bool ,::hx::Object * ) >*/ ,(void *) &JPEG_obj::cffi_lime_jpeg_decode_bytes,HX_HCSTRING("cffi_lime_jpeg_decode_bytes","\x60","\xb5","\xa0","\x2b")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::String ,bool ,::hx::Object * ) >*/ ,(void *) &JPEG_obj::cffi_lime_jpeg_decode_file,HX_HCSTRING("cffi_lime_jpeg_decode_file","\x27","\xb7","\x3e","\xc8")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ,::hx::Object * ) >*/ ,(void *) &JPEG_obj::cffi_lime_image_encode,HX_HCSTRING("cffi_lime_image_encode","\x4b","\x6d","\x81","\x82")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JPEG_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JPEG_obj::cffi_lime_jpeg_decode_bytes,"cffi_lime_jpeg_decode_bytes");
	HX_MARK_MEMBER_NAME(JPEG_obj::cffi_lime_jpeg_decode_file,"cffi_lime_jpeg_decode_file");
	HX_MARK_MEMBER_NAME(JPEG_obj::cffi_lime_image_encode,"cffi_lime_image_encode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JPEG_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JPEG_obj::cffi_lime_jpeg_decode_bytes,"cffi_lime_jpeg_decode_bytes");
	HX_VISIT_MEMBER_NAME(JPEG_obj::cffi_lime_jpeg_decode_file,"cffi_lime_jpeg_decode_file");
	HX_VISIT_MEMBER_NAME(JPEG_obj::cffi_lime_image_encode,"cffi_lime_image_encode");
};

#endif

hx::Class JPEG_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("decodeBytes","\x5d","\x94","\xb1","\x85"),
	HX_HCSTRING("decodeFile","\xca","\x86","\x63","\xce"),
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	HX_HCSTRING("lime_jpeg_decode_bytes","\xa7","\xff","\x10","\xc9"),
	HX_HCSTRING("lime_jpeg_decode_file","\xc0","\x92","\xae","\x0c"),
	HX_HCSTRING("lime_image_encode","\x64","\x48","\x63","\x9c"),
	HX_HCSTRING("cffi_lime_jpeg_decode_bytes","\x60","\xb5","\xa0","\x2b"),
	HX_HCSTRING("cffi_lime_jpeg_decode_file","\x27","\xb7","\x3e","\xc8"),
	HX_HCSTRING("cffi_lime_image_encode","\x4b","\x6d","\x81","\x82"),
	::String(null()) };

void JPEG_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.format.JPEG","\x15","\x91","\x5a","\xe7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &JPEG_obj::__GetStatic;
	__mClass->mSetStaticField = &JPEG_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< JPEG_obj >;
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

void JPEG_obj::__boot()
{
	cffi_lime_jpeg_decode_bytes= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,bool ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_jpeg_decode_bytes","\xa7","\xff","\x10","\xc9"),HX_HCSTRING("oboo","\xf3","\x6c","\xa9","\x49"),false));
	cffi_lime_jpeg_decode_file= ::cpp::Function< ::hx::Object * ( ::String ,bool ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_jpeg_decode_file","\xc0","\x92","\xae","\x0c"),HX_HCSTRING("sboo","\x6f","\x47","\x4e","\x4c"),false));
	cffi_lime_image_encode= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_encode","\x64","\x48","\x63","\x9c"),HX_HCSTRING("oiioo","\xef","\xd8","\x31","\x2f"),false));
}

} // end namespace lime
} // end namespace graphics
} // end namespace format
