#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_stage3D_AGALConverter
#include <openfl/_internal/stage3D/AGALConverter.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_DestRegister
#include <openfl/_internal/stage3D/_AGALConverter/DestRegister.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_ProgramType
#include <openfl/_internal/stage3D/_AGALConverter/ProgramType.h>
#endif
namespace openfl{
namespace _internal{
namespace stage3D{
namespace _AGALConverter{

Void DestRegister_obj::__construct()
{
HX_STACK_FRAME("openfl._internal.stage3D._AGALConverter.DestRegister","new",0x9e816f26,"openfl._internal.stage3D._AGALConverter.DestRegister.new","openfl/_internal/stage3D/AGALConverter.hx",490,0x0a35cc61)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//DestRegister_obj::~DestRegister_obj() { }

Dynamic DestRegister_obj::__CreateEmpty() { return  new DestRegister_obj; }
hx::ObjectPtr< DestRegister_obj > DestRegister_obj::__new()
{  hx::ObjectPtr< DestRegister_obj > _result_ = new DestRegister_obj();
	_result_->__construct();
	return _result_;}

Dynamic DestRegister_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DestRegister_obj > _result_ = new DestRegister_obj();
	_result_->__construct();
	return _result_;}

::String DestRegister_obj::getWriteMask( ){
	HX_STACK_FRAME("openfl._internal.stage3D._AGALConverter.DestRegister","getWriteMask",0xc4282a6f,"openfl._internal.stage3D._AGALConverter.DestRegister.getWriteMask","openfl/_internal/stage3D/AGALConverter.hx",497,0x0a35cc61)
	HX_STACK_THIS(this)
	HX_STACK_LINE(499)
	::String str = HX_HCSTRING(".","\x2e","\x00","\x00","\x00");		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(500)
	int tmp = this->mask;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(500)
	int tmp1 = (int(tmp) & int((int)1));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(500)
	bool tmp2 = (tmp1 != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(500)
	if ((tmp2)){
		HX_STACK_LINE(500)
		hx::AddEq(str,HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	}
	HX_STACK_LINE(501)
	int tmp3 = this->mask;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(501)
	int tmp4 = (int(tmp3) & int((int)2));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(501)
	bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(501)
	if ((tmp5)){
		HX_STACK_LINE(501)
		hx::AddEq(str,HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	}
	HX_STACK_LINE(502)
	int tmp6 = this->mask;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(502)
	int tmp7 = (int(tmp6) & int((int)4));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(502)
	bool tmp8 = (tmp7 != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(502)
	if ((tmp8)){
		HX_STACK_LINE(502)
		hx::AddEq(str,HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	}
	HX_STACK_LINE(503)
	int tmp9 = this->mask;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(503)
	int tmp10 = (int(tmp9) & int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(503)
	bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(503)
	if ((tmp11)){
		HX_STACK_LINE(503)
		hx::AddEq(str,HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
	}
	HX_STACK_LINE(504)
	::String tmp12 = str;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(504)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC0(DestRegister_obj,getWriteMask,return )

::String DestRegister_obj::toGLSL( hx::Null< bool >  __o_useMask){
bool useMask = __o_useMask.Default(true);
	HX_STACK_FRAME("openfl._internal.stage3D._AGALConverter.DestRegister","toGLSL",0x2891b9f3,"openfl._internal.stage3D._AGALConverter.DestRegister.toGLSL","openfl/_internal/stage3D/AGALConverter.hx",521,0x0a35cc61)
	HX_STACK_THIS(this)
	HX_STACK_ARG(useMask,"useMask")
{
		HX_STACK_LINE(523)
		::String str;		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(525)
		int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(525)
		bool tmp1 = (tmp == (int)3);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(525)
		if ((tmp1)){
			HX_STACK_LINE(527)
			::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp2 = this->programType;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(527)
			bool tmp3 = (tmp2 == ::openfl::_internal::stage3D::_AGALConverter::ProgramType_obj::VERTEX);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(527)
			::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(527)
			if ((tmp3)){
				HX_STACK_LINE(527)
				tmp4 = HX_HCSTRING("gl_Position","\x63","\x0d","\x2a","\xe5");
			}
			else{
				HX_STACK_LINE(527)
				tmp4 = HX_HCSTRING("gl_FragColor","\xd7","\x68","\xe4","\x21");
			}
			HX_STACK_LINE(527)
			str = tmp4;
		}
		else{
			HX_STACK_LINE(531)
			int tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(531)
			::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp3 = this->programType;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(531)
			::String tmp4 = ::openfl::_internal::stage3D::AGALConverter_obj::prefixFromType(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(531)
			int tmp5 = this->n;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(531)
			::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(531)
			str = tmp6;
		}
		HX_STACK_LINE(535)
		bool tmp2 = useMask;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(535)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(535)
		if ((tmp2)){
			HX_STACK_LINE(535)
			int tmp4 = this->mask;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(535)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(535)
			tmp3 = (tmp5 != (int)15);
		}
		else{
			HX_STACK_LINE(535)
			tmp3 = false;
		}
		HX_STACK_LINE(535)
		if ((tmp3)){
			HX_STACK_LINE(537)
			::String tmp4 = this->getWriteMask();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(537)
			hx::AddEq(str,tmp4);
		}
		HX_STACK_LINE(541)
		::String tmp4 = str;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(541)
		return tmp4;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(DestRegister_obj,toGLSL,return )

::openfl::_internal::stage3D::_AGALConverter::DestRegister DestRegister_obj::parse( int v,::openfl::_internal::stage3D::_AGALConverter::ProgramType programType){
	HX_STACK_FRAME("openfl._internal.stage3D._AGALConverter.DestRegister","parse",0x793cec79,"openfl._internal.stage3D._AGALConverter.DestRegister.parse","openfl/_internal/stage3D/AGALConverter.hx",509,0x0a35cc61)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(programType,"programType")
	HX_STACK_LINE(511)
	::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp = ::openfl::_internal::stage3D::_AGALConverter::DestRegister_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(511)
	::openfl::_internal::stage3D::_AGALConverter::DestRegister dr = tmp;		HX_STACK_VAR(dr,"dr");
	HX_STACK_LINE(512)
	dr->programType = programType;
	HX_STACK_LINE(513)
	int tmp1 = (int(v) >> int((int)24));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(513)
	int tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(513)
	int tmp3 = (int(tmp2) & int((int)15));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(513)
	dr->type = tmp3;
	HX_STACK_LINE(514)
	int tmp4 = (int(v) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(514)
	int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(514)
	int tmp6 = (int(tmp5) & int((int)15));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(514)
	dr->mask = tmp6;
	HX_STACK_LINE(515)
	int tmp7 = (int(v) & int((int)65535));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(515)
	dr->n = tmp7;
	HX_STACK_LINE(516)
	::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp8 = dr;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(516)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DestRegister_obj,parse,return )


DestRegister_obj::DestRegister_obj()
{
}

void DestRegister_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DestRegister);
	HX_MARK_MEMBER_NAME(mask,"mask");
	HX_MARK_MEMBER_NAME(n,"n");
	HX_MARK_MEMBER_NAME(programType,"programType");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void DestRegister_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mask,"mask");
	HX_VISIT_MEMBER_NAME(n,"n");
	HX_VISIT_MEMBER_NAME(programType,"programType");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic DestRegister_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"n") ) { return n; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { return mask; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toGLSL") ) { return toGLSL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { return programType; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getWriteMask") ) { return getWriteMask_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool DestRegister_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true;  }
	}
	return false;
}

Dynamic DestRegister_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"n") ) { n=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { mask=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { programType=inValue.Cast< ::openfl::_internal::stage3D::_AGALConverter::ProgramType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DestRegister_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mask","\xec","\x40","\x56","\x48"));
	outFields->push(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(DestRegister_obj,mask),HX_HCSTRING("mask","\xec","\x40","\x56","\x48")},
	{hx::fsInt,(int)offsetof(DestRegister_obj,n),HX_HCSTRING("n","\x6e","\x00","\x00","\x00")},
	{hx::fsObject /*::openfl::_internal::stage3D::_AGALConverter::ProgramType*/ ,(int)offsetof(DestRegister_obj,programType),HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4")},
	{hx::fsInt,(int)offsetof(DestRegister_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mask","\xec","\x40","\x56","\x48"),
	HX_HCSTRING("n","\x6e","\x00","\x00","\x00"),
	HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("getWriteMask","\xf5","\xd1","\x60","\x60"),
	HX_HCSTRING("toGLSL","\xf9","\x58","\x08","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DestRegister_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DestRegister_obj::__mClass,"__mClass");
};

#endif

hx::Class DestRegister_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	::String(null()) };

void DestRegister_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D._AGALConverter.DestRegister","\x34","\xa4","\x4d","\xad");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DestRegister_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DestRegister_obj >;
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

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace _AGALConverter
