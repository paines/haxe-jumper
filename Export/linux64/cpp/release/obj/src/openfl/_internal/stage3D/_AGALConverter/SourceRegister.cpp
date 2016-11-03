#include <hxcpp.h>

#ifndef INCLUDED_haxe__Int64_Int64_Impl_
#include <haxe/_Int64/Int64_Impl_.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_AGALConverter
#include <openfl/_internal/stage3D/AGALConverter.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_ProgramType
#include <openfl/_internal/stage3D/_AGALConverter/ProgramType.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_SourceRegister
#include <openfl/_internal/stage3D/_AGALConverter/SourceRegister.h>
#endif
namespace openfl{
namespace _internal{
namespace stage3D{
namespace _AGALConverter{

Void SourceRegister_obj::__construct()
{
HX_STACK_FRAME("openfl._internal.stage3D._AGALConverter.SourceRegister","new",0xf72124df,"openfl._internal.stage3D._AGALConverter.SourceRegister.new","openfl/_internal/stage3D/AGALConverter.hx",977,0x0a35cc61)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//SourceRegister_obj::~SourceRegister_obj() { }

Dynamic SourceRegister_obj::__CreateEmpty() { return  new SourceRegister_obj; }
hx::ObjectPtr< SourceRegister_obj > SourceRegister_obj::__new()
{  hx::ObjectPtr< SourceRegister_obj > _result_ = new SourceRegister_obj();
	_result_->__construct();
	return _result_;}

Dynamic SourceRegister_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SourceRegister_obj > _result_ = new SourceRegister_obj();
	_result_->__construct();
	return _result_;}

::String SourceRegister_obj::toGLSL( hx::Null< bool >  __o_emitSwizzle,hx::Null< int >  __o_offset){
bool emitSwizzle = __o_emitSwizzle.Default(true);
int offset = __o_offset.Default(0);
	HX_STACK_FRAME("openfl._internal.stage3D._AGALConverter.SourceRegister","toGLSL",0xdb399dda,"openfl._internal.stage3D._AGALConverter.SourceRegister.toGLSL","openfl/_internal/stage3D/AGALConverter.hx",1001,0x0a35cc61)
	HX_STACK_THIS(this)
	HX_STACK_ARG(emitSwizzle,"emitSwizzle")
	HX_STACK_ARG(offset,"offset")
{
		HX_STACK_LINE(1003)
		int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1003)
		bool tmp1 = (tmp == (int)3);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1003)
		if ((tmp1)){
			HX_STACK_LINE(1005)
			::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp2 = this->programType;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1005)
			bool tmp3 = (tmp2 == ::openfl::_internal::stage3D::_AGALConverter::ProgramType_obj::VERTEX);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1005)
			::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1005)
			if ((tmp3)){
				HX_STACK_LINE(1005)
				tmp4 = HX_HCSTRING("gl_Position","\x63","\x0d","\x2a","\xe5");
			}
			else{
				HX_STACK_LINE(1005)
				tmp4 = HX_HCSTRING("gl_FragColor","\xd7","\x68","\xe4","\x21");
			}
			HX_STACK_LINE(1005)
			return tmp4;
		}
		HX_STACK_LINE(1009)
		int tmp2 = this->s;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1009)
		bool tmp3 = (tmp2 == (int)228);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1009)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1009)
		if ((tmp3)){
			HX_STACK_LINE(1009)
			int tmp5 = this->sourceMask;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1009)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1009)
			tmp4 = (tmp6 == (int)15);
		}
		else{
			HX_STACK_LINE(1009)
			tmp4 = false;
		}
		HX_STACK_LINE(1009)
		bool fullxyzw = tmp4;		HX_STACK_VAR(fullxyzw,"fullxyzw");
		HX_STACK_LINE(1010)
		::String swizzle = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(swizzle,"swizzle");
		HX_STACK_LINE(1012)
		int tmp5 = this->type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1012)
		bool tmp6 = (tmp5 != (int)5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1012)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1012)
		if ((tmp6)){
			HX_STACK_LINE(1012)
			bool tmp8 = fullxyzw;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1012)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1012)
			tmp7 = !(tmp9);
		}
		else{
			HX_STACK_LINE(1012)
			tmp7 = false;
		}
		HX_STACK_LINE(1012)
		if ((tmp7)){
			HX_STACK_LINE(1014)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1014)
			while((true)){
				HX_STACK_LINE(1014)
				bool tmp8 = (_g < (int)4);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1014)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1014)
				if ((tmp9)){
					HX_STACK_LINE(1014)
					break;
				}
				HX_STACK_LINE(1014)
				int tmp10 = (_g)++;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1014)
				int i = tmp10;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1017)
				int tmp11 = this->sourceMask;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1017)
				int tmp12 = (int((int)1) << int(i));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1017)
				int tmp13 = (int(tmp11) & int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1017)
				bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1017)
				if ((tmp14)){
					HX_STACK_LINE(1019)
					int tmp15 = this->s;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1019)
					int tmp16 = (i * (int)2);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1019)
					int tmp17 = (int(tmp15) >> int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1019)
					int tmp18 = (int(tmp17) & int((int)3));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1019)
					int _g1 = tmp18;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1019)
					int tmp19 = _g1;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1019)
					switch( (int)(tmp19)){
						case (int)0: {
							HX_STACK_LINE(1021)
							hx::AddEq(swizzle,HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(1022)
							hx::AddEq(swizzle,HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(1023)
							hx::AddEq(swizzle,HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(1024)
							hx::AddEq(swizzle,HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
						}
						;break;
					}
				}
			}
		}
		HX_STACK_LINE(1034)
		int tmp8 = this->type;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1034)
		::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp9 = this->programType;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1034)
		::String tmp10 = ::openfl::_internal::stage3D::AGALConverter_obj::prefixFromType(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1034)
		::String str = tmp10;		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(1036)
		int tmp11 = this->d;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1036)
		bool tmp12 = (tmp11 == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1036)
		if ((tmp12)){
			HX_STACK_LINE(1039)
			int tmp13 = this->n;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1039)
			int tmp14 = offset;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1039)
			int tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1039)
			hx::AddEq(str,tmp15);
		}
		else{
			HX_STACK_LINE(1044)
			int tmp13 = this->o;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1044)
			hx::AddEq(str,tmp13);
			HX_STACK_LINE(1045)
			Dynamic tmp14 = HX_HCSTRING("x","\x78","\x00","\x00","\x00").charCodeAt((int)0);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1045)
			int tmp15 = this->q;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1045)
			int tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1045)
			::String tmp17 = ::String::fromCharCode(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1045)
			::String indexComponent = tmp17;		HX_STACK_VAR(indexComponent,"indexComponent");
			HX_STACK_LINE(1046)
			int tmp18 = this->itype;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1046)
			::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp19 = this->programType;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1046)
			::String tmp20 = ::openfl::_internal::stage3D::AGALConverter_obj::prefixFromType(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1046)
			int tmp21 = this->n;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1046)
			::String tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1046)
			::String tmp23 = (tmp22 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1046)
			::String tmp24 = indexComponent;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1046)
			::String tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1046)
			::String indexRegister = tmp25;		HX_STACK_VAR(indexRegister,"indexRegister");
			HX_STACK_LINE(1047)
			::String tmp26 = (HX_HCSTRING("[ int(","\x3e","\xaa","\x07","\x15") + indexRegister);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1047)
			::String tmp27 = (tmp26 + HX_HCSTRING(") +","\x74","\x38","\x1f","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1047)
			int tmp28 = offset;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1047)
			::String tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1047)
			::String tmp30 = (tmp29 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1047)
			hx::AddEq(str,tmp30);
		}
		HX_STACK_LINE(1051)
		bool tmp13 = emitSwizzle;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1051)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1051)
		if ((tmp13)){
			HX_STACK_LINE(1051)
			tmp14 = (swizzle != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(1051)
			tmp14 = false;
		}
		HX_STACK_LINE(1051)
		if ((tmp14)){
			HX_STACK_LINE(1053)
			::String tmp15 = (HX_HCSTRING(".","\x2e","\x00","\x00","\x00") + swizzle);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1053)
			hx::AddEq(str,tmp15);
		}
		HX_STACK_LINE(1057)
		::String tmp15 = str;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1057)
		return tmp15;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(SourceRegister_obj,toGLSL,return )

::openfl::_internal::stage3D::_AGALConverter::SourceRegister SourceRegister_obj::parse( cpp::Int64Struct v,::openfl::_internal::stage3D::_AGALConverter::ProgramType programType,int sourceMask){
	HX_STACK_FRAME("openfl._internal.stage3D._AGALConverter.SourceRegister","parse",0x01804272,"openfl._internal.stage3D._AGALConverter.SourceRegister.parse","openfl/_internal/stage3D/AGALConverter.hx",984,0x0a35cc61)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(programType,"programType")
	HX_STACK_ARG(sourceMask,"sourceMask")
	HX_STACK_LINE(986)
	::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp = ::openfl::_internal::stage3D::_AGALConverter::SourceRegister_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(986)
	::openfl::_internal::stage3D::_AGALConverter::SourceRegister sr = tmp;		HX_STACK_VAR(sr,"sr");
	HX_STACK_LINE(987)
	sr->programType = programType;
	HX_STACK_LINE(988)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(988)
	{
		HX_STACK_LINE(988)
		cpp::Int64Struct tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(988)
		{
			HX_STACK_LINE(988)
			cpp::Int64Struct a = ((v) >> ((int)63));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(988)
			cpp::Int64Struct tmp3 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(988)
			cpp::Int64Struct b = tmp3;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(988)
			tmp2 = ((a) & (b));
		}
		HX_STACK_LINE(988)
		cpp::Int64Struct this1 = tmp2;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(988)
		tmp1 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(988)
	sr->d = tmp1;
	HX_STACK_LINE(989)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(989)
	{
		HX_STACK_LINE(989)
		cpp::Int64Struct tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(989)
		{
			HX_STACK_LINE(989)
			cpp::Int64Struct a = ((v) >> ((int)48));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(989)
			cpp::Int64Struct tmp4 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(989)
			cpp::Int64Struct b = tmp4;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(989)
			tmp3 = ((a) & (b));
		}
		HX_STACK_LINE(989)
		cpp::Int64Struct this1 = tmp3;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(989)
		tmp2 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(989)
	sr->q = tmp2;
	HX_STACK_LINE(990)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(990)
	{
		HX_STACK_LINE(990)
		cpp::Int64Struct tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(990)
		{
			HX_STACK_LINE(990)
			cpp::Int64Struct a = ((v) >> ((int)40));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(990)
			cpp::Int64Struct tmp5 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)15);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(990)
			cpp::Int64Struct b = tmp5;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(990)
			tmp4 = ((a) & (b));
		}
		HX_STACK_LINE(990)
		cpp::Int64Struct this1 = tmp4;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(990)
		tmp3 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(990)
	sr->itype = tmp3;
	HX_STACK_LINE(991)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(991)
	{
		HX_STACK_LINE(991)
		cpp::Int64Struct tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(991)
		{
			HX_STACK_LINE(991)
			cpp::Int64Struct a = ((v) >> ((int)32));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(991)
			cpp::Int64Struct tmp6 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)15);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(991)
			cpp::Int64Struct b = tmp6;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(991)
			tmp5 = ((a) & (b));
		}
		HX_STACK_LINE(991)
		cpp::Int64Struct this1 = tmp5;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(991)
		tmp4 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(991)
	sr->type = tmp4;
	HX_STACK_LINE(992)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(992)
	{
		HX_STACK_LINE(992)
		cpp::Int64Struct tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(992)
		{
			HX_STACK_LINE(992)
			cpp::Int64Struct a = ((v) >> ((int)24));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(992)
			cpp::Int64Struct tmp7 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)255);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(992)
			cpp::Int64Struct b = tmp7;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(992)
			tmp6 = ((a) & (b));
		}
		HX_STACK_LINE(992)
		cpp::Int64Struct this1 = tmp6;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(992)
		tmp5 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(992)
	sr->s = tmp5;
	HX_STACK_LINE(993)
	int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(993)
	{
		HX_STACK_LINE(993)
		cpp::Int64Struct tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(993)
		{
			HX_STACK_LINE(993)
			cpp::Int64Struct a = ((v) >> ((int)16));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(993)
			cpp::Int64Struct tmp8 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)255);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(993)
			cpp::Int64Struct b = tmp8;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(993)
			tmp7 = ((a) & (b));
		}
		HX_STACK_LINE(993)
		cpp::Int64Struct this1 = tmp7;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(993)
		tmp6 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(993)
	sr->o = tmp6;
	HX_STACK_LINE(994)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(994)
	{
		HX_STACK_LINE(994)
		cpp::Int64Struct tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(994)
		{
			HX_STACK_LINE(994)
			cpp::Int64Struct tmp9 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)65535);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(994)
			cpp::Int64Struct b = tmp9;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(994)
			tmp8 = ((v) & (b));
		}
		HX_STACK_LINE(994)
		cpp::Int64Struct this1 = tmp8;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(994)
		tmp7 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(994)
	sr->n = tmp7;
	HX_STACK_LINE(995)
	sr->sourceMask = sourceMask;
	HX_STACK_LINE(996)
	::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp8 = sr;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(996)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SourceRegister_obj,parse,return )


SourceRegister_obj::SourceRegister_obj()
{
}

void SourceRegister_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SourceRegister);
	HX_MARK_MEMBER_NAME(d,"d");
	HX_MARK_MEMBER_NAME(itype,"itype");
	HX_MARK_MEMBER_NAME(n,"n");
	HX_MARK_MEMBER_NAME(o,"o");
	HX_MARK_MEMBER_NAME(programType,"programType");
	HX_MARK_MEMBER_NAME(q,"q");
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_MEMBER_NAME(sourceMask,"sourceMask");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void SourceRegister_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(d,"d");
	HX_VISIT_MEMBER_NAME(itype,"itype");
	HX_VISIT_MEMBER_NAME(n,"n");
	HX_VISIT_MEMBER_NAME(o,"o");
	HX_VISIT_MEMBER_NAME(programType,"programType");
	HX_VISIT_MEMBER_NAME(q,"q");
	HX_VISIT_MEMBER_NAME(s,"s");
	HX_VISIT_MEMBER_NAME(sourceMask,"sourceMask");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic SourceRegister_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"d") ) { return d; }
		if (HX_FIELD_EQ(inName,"n") ) { return n; }
		if (HX_FIELD_EQ(inName,"o") ) { return o; }
		if (HX_FIELD_EQ(inName,"q") ) { return q; }
		if (HX_FIELD_EQ(inName,"s") ) { return s; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"itype") ) { return itype; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toGLSL") ) { return toGLSL_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceMask") ) { return sourceMask; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { return programType; }
	}
	return super::__Field(inName,inCallProp);
}

bool SourceRegister_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true;  }
	}
	return false;
}

Dynamic SourceRegister_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n") ) { n=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"o") ) { o=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"q") ) { q=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"itype") ) { itype=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceMask") ) { sourceMask=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { programType=inValue.Cast< ::openfl::_internal::stage3D::_AGALConverter::ProgramType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SourceRegister_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("d","\x64","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("itype","\xa3","\xdb","\x1b","\xc2"));
	outFields->push(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("o","\x6f","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4"));
	outFields->push(HX_HCSTRING("q","\x71","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("s","\x73","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("sourceMask","\x67","\x27","\xba","\x70"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(SourceRegister_obj,d),HX_HCSTRING("d","\x64","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SourceRegister_obj,itype),HX_HCSTRING("itype","\xa3","\xdb","\x1b","\xc2")},
	{hx::fsInt,(int)offsetof(SourceRegister_obj,n),HX_HCSTRING("n","\x6e","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SourceRegister_obj,o),HX_HCSTRING("o","\x6f","\x00","\x00","\x00")},
	{hx::fsObject /*::openfl::_internal::stage3D::_AGALConverter::ProgramType*/ ,(int)offsetof(SourceRegister_obj,programType),HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4")},
	{hx::fsInt,(int)offsetof(SourceRegister_obj,q),HX_HCSTRING("q","\x71","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SourceRegister_obj,s),HX_HCSTRING("s","\x73","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SourceRegister_obj,sourceMask),HX_HCSTRING("sourceMask","\x67","\x27","\xba","\x70")},
	{hx::fsInt,(int)offsetof(SourceRegister_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("d","\x64","\x00","\x00","\x00"),
	HX_HCSTRING("itype","\xa3","\xdb","\x1b","\xc2"),
	HX_HCSTRING("n","\x6e","\x00","\x00","\x00"),
	HX_HCSTRING("o","\x6f","\x00","\x00","\x00"),
	HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4"),
	HX_HCSTRING("q","\x71","\x00","\x00","\x00"),
	HX_HCSTRING("s","\x73","\x00","\x00","\x00"),
	HX_HCSTRING("sourceMask","\x67","\x27","\xba","\x70"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("toGLSL","\xf9","\x58","\x08","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SourceRegister_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SourceRegister_obj::__mClass,"__mClass");
};

#endif

hx::Class SourceRegister_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	::String(null()) };

void SourceRegister_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D._AGALConverter.SourceRegister","\x6d","\xc9","\x9f","\xcf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SourceRegister_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SourceRegister_obj >;
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
