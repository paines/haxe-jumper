#include <hxcpp.h>

#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
namespace haxe{
namespace io{

Void Input_obj::__construct()
{
	return null();
}

//Input_obj::~Input_obj() { }

Dynamic Input_obj::__CreateEmpty() { return  new Input_obj; }
hx::ObjectPtr< Input_obj > Input_obj::__new()
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct();
	return _result_;}

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct();
	return _result_;}

int Input_obj::readByte( ){
	HX_STACK_FRAME("haxe.io.Input","readByte",0x4de8a3c2,"haxe.io.Input.readByte","/usr/share/haxe/std/haxe/io/Input.hx",48,0x1cc3d0af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	HX_STACK_DO_THROW(HX_HCSTRING("Not implemented","\x15","\x1e","\x32","\x34"));
	HX_STACK_LINE(48)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readByte,return )

int Input_obj::readBytes( ::haxe::io::Bytes s,int pos,int len){
	HX_STACK_FRAME("haxe.io.Input","readBytes",0xdda6a671,"haxe.io.Input.readBytes","/usr/share/haxe/std/haxe/io/Input.hx",61,0x1cc3d0af)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(62)
	int k = len;		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(63)
	Array< unsigned char > b = s->b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(64)
	bool tmp = (pos < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(64)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(64)
	if ((tmp2)){
		HX_STACK_LINE(64)
		tmp3 = (len < (int)0);
	}
	else{
		HX_STACK_LINE(64)
		tmp3 = true;
	}
	HX_STACK_LINE(64)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(64)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(64)
	if ((tmp4)){
		HX_STACK_LINE(64)
		int tmp6 = (pos + len);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(64)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(64)
		int tmp8 = s->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(64)
		tmp5 = (tmp7 > tmp8);
	}
	else{
		HX_STACK_LINE(64)
		tmp5 = true;
	}
	HX_STACK_LINE(64)
	if ((tmp5)){
		HX_STACK_LINE(65)
		HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
	}
	HX_STACK_LINE(66)
	while((true)){
		HX_STACK_LINE(66)
		bool tmp6 = (k > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(66)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(66)
		if ((tmp7)){
			HX_STACK_LINE(66)
			break;
		}
		HX_STACK_LINE(72)
		unsigned char tmp8 = this->readByte();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(72)
		b[pos] = tmp8;
		HX_STACK_LINE(76)
		(pos)++;
		HX_STACK_LINE(77)
		(k)--;
	}
	HX_STACK_LINE(79)
	int tmp6 = len;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(79)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC3(Input_obj,readBytes,return )

Void Input_obj::close( ){
{
		HX_STACK_FRAME("haxe.io.Input","close",0xfc421af4,"haxe.io.Input.close","/usr/share/haxe/std/haxe/io/Input.hx",87,0x1cc3d0af)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,close,(void))

::haxe::io::Bytes Input_obj::readAll( Dynamic bufsize){
	HX_STACK_FRAME("haxe.io.Input","readAll",0xaed6e9a7,"haxe.io.Input.readAll","/usr/share/haxe/std/haxe/io/Input.hx",103,0x1cc3d0af)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bufsize,"bufsize")
	HX_STACK_LINE(104)
	bool tmp = (bufsize == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	if ((tmp)){
		HX_STACK_LINE(108)
		int tmp1 = (int)16384;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(108)
		bufsize = tmp1;
	}
	HX_STACK_LINE(111)
	Dynamic tmp1 = bufsize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(111)
	::haxe::io::Bytes tmp2 = ::haxe::io::Bytes_obj::alloc(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(111)
	::haxe::io::Bytes buf = tmp2;		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(112)
	::haxe::io::BytesBuffer tmp3 = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(112)
	::haxe::io::BytesBuffer total = tmp3;		HX_STACK_VAR(total,"total");
	HX_STACK_LINE(113)
	try
	{
	HX_STACK_CATCHABLE(::haxe::io::Eof, 0);
	{
		HX_STACK_LINE(114)
		while((true)){
			HX_STACK_LINE(115)
			::haxe::io::Bytes tmp4 = buf;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(115)
			Dynamic tmp5 = bufsize;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(115)
			int tmp6 = this->readBytes(tmp4,(int)0,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(115)
			int len = tmp6;		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(116)
			bool tmp7 = (len == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(116)
			if ((tmp7)){
				HX_STACK_LINE(117)
				HX_STACK_DO_THROW(::haxe::io::Error_obj::Blocked);
			}
			HX_STACK_LINE(118)
			{
				HX_STACK_LINE(118)
				bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(118)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(118)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(118)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(118)
				if ((tmp10)){
					HX_STACK_LINE(118)
					tmp11 = (len < (int)0);
				}
				else{
					HX_STACK_LINE(118)
					tmp11 = true;
				}
				HX_STACK_LINE(118)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(118)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(118)
				if ((tmp12)){
					HX_STACK_LINE(118)
					int tmp14 = len;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(118)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(118)
					int tmp16 = buf->length;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(118)
					tmp13 = (tmp15 > tmp16);
				}
				else{
					HX_STACK_LINE(118)
					tmp13 = true;
				}
				HX_STACK_LINE(118)
				if ((tmp13)){
					HX_STACK_LINE(118)
					HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
				}
				HX_STACK_LINE(118)
				Array< unsigned char > b1 = total->b;		HX_STACK_VAR(b1,"b1");
				HX_STACK_LINE(118)
				Array< unsigned char > b2 = buf->b;		HX_STACK_VAR(b2,"b2");
				HX_STACK_LINE(118)
				{
					HX_STACK_LINE(118)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(118)
					int tmp14 = len;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(118)
					int _g = tmp14;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(118)
					while((true)){
						HX_STACK_LINE(118)
						bool tmp15 = (_g1 < _g);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(118)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(118)
						if ((tmp16)){
							HX_STACK_LINE(118)
							break;
						}
						HX_STACK_LINE(118)
						int tmp17 = (_g1)++;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(118)
						int i = tmp17;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(118)
						unsigned char tmp18 = b2->__get(i);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(118)
						total->b->push(tmp18);
					}
				}
			}
		}
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::haxe::io::Eof >() ){
			HX_STACK_BEGIN_CATCH
			::haxe::io::Eof e = __e;{
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(122)
	::haxe::io::Bytes tmp4 = total->getBytes();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(122)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,readAll,return )

::String Input_obj::readLine( ){
	HX_STACK_FRAME("haxe.io.Input","readLine",0x54789cae,"haxe.io.Input.readLine","/usr/share/haxe/std/haxe/io/Input.hx",171,0x1cc3d0af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(172)
	::StringBuf tmp = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	::StringBuf buf = tmp;		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(173)
	int last;		HX_STACK_VAR(last,"last");
	HX_STACK_LINE(174)
	::String s;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(175)
	try
	{
	HX_STACK_CATCHABLE(::haxe::io::Eof, 0);
	{
		HX_STACK_LINE(176)
		while((true)){
			HX_STACK_LINE(176)
			int tmp1 = this->readByte();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(176)
			int tmp2 = last = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(176)
			bool tmp3 = (tmp2 != (int)10);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(176)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(176)
			if ((tmp4)){
				HX_STACK_LINE(176)
				break;
			}
			HX_STACK_LINE(177)
			int tmp5 = last;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(177)
			::String tmp6 = ::String::fromCharCode(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(177)
			buf->b->push(tmp6);
		}
		HX_STACK_LINE(178)
		::String tmp1 = buf->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(178)
		s = tmp1;
		HX_STACK_LINE(179)
		int tmp2 = (s.length - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(179)
		Dynamic tmp3 = s.charCodeAt(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(179)
		bool tmp4 = (tmp3 == (int)13);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(179)
		if ((tmp4)){
			HX_STACK_LINE(179)
			::String tmp5 = s.substr((int)0,(int)-1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(179)
			s = tmp5;
		}
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::haxe::io::Eof >() ){
			HX_STACK_BEGIN_CATCH
			::haxe::io::Eof e = __e;{
				HX_STACK_LINE(181)
				::String tmp1 = buf->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(181)
				s = tmp1;
				HX_STACK_LINE(182)
				bool tmp2 = (s.length == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(182)
				if ((tmp2)){
					HX_STACK_LINE(183)
					::haxe::io::Eof tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(183)
					HX_STACK_DO_THROW(tmp3);
				}
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(185)
	::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(185)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readLine,return )


Input_obj::Input_obj()
{
}

Dynamic Input_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"readAll") ) { return readAll_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		if (HX_FIELD_EQ(inName,"readLine") ) { return readLine_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("readByte","\x7e","\xf9","\x1a","\x69"),
	HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("readAll","\x6b","\x9f","\xc3","\x02"),
	HX_HCSTRING("readLine","\x6a","\xf2","\xaa","\x6f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#endif

hx::Class Input_obj::__mClass;

void Input_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.Input","\xaa","\x0e","\xf5","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Input_obj >;
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

} // end namespace haxe
} // end namespace io
