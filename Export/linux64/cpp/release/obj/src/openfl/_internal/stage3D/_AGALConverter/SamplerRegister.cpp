#include <hxcpp.h>

#ifndef INCLUDED_haxe__Int64_Int64_Impl_
#include <haxe/_Int64/Int64_Impl_.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_AGALConverter
#include <openfl/_internal/stage3D/AGALConverter.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_SamplerState
#include <openfl/_internal/stage3D/SamplerState.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_ProgramType
#include <openfl/_internal/stage3D/_AGALConverter/ProgramType.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_SamplerRegister
#include <openfl/_internal/stage3D/_AGALConverter/SamplerRegister.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif
namespace openfl{
namespace _internal{
namespace stage3D{
namespace _AGALConverter{

Void SamplerRegister_obj::__construct()
{
HX_STACK_FRAME("openfl._internal.stage3D._AGALConverter.SamplerRegister","new",0xf340d88e,"openfl._internal.stage3D._AGALConverter.SamplerRegister.new","openfl/_internal/stage3D/AGALConverter.hx",859,0x0a35cc61)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//SamplerRegister_obj::~SamplerRegister_obj() { }

Dynamic SamplerRegister_obj::__CreateEmpty() { return  new SamplerRegister_obj; }
hx::ObjectPtr< SamplerRegister_obj > SamplerRegister_obj::__new()
{  hx::ObjectPtr< SamplerRegister_obj > _result_ = new SamplerRegister_obj();
	_result_->__construct();
	return _result_;}

Dynamic SamplerRegister_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SamplerRegister_obj > _result_ = new SamplerRegister_obj();
	_result_->__construct();
	return _result_;}

::String SamplerRegister_obj::toGLSL( ){
	HX_STACK_FRAME("openfl._internal.stage3D._AGALConverter.SamplerRegister","toGLSL",0xc158218b,"openfl._internal.stage3D._AGALConverter.SamplerRegister.toGLSL","openfl/_internal/stage3D/AGALConverter.hx",884,0x0a35cc61)
	HX_STACK_THIS(this)
	HX_STACK_LINE(886)
	int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(886)
	::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp1 = this->programType;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(886)
	::String tmp2 = ::openfl::_internal::stage3D::AGALConverter_obj::prefixFromType(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(886)
	int tmp3 = this->n;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(886)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(886)
	::String str = tmp4;		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(887)
	::String tmp5 = str;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(887)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(SamplerRegister_obj,toGLSL,return )

::openfl::_internal::stage3D::SamplerState SamplerRegister_obj::toSamplerState( ){
	HX_STACK_FRAME("openfl._internal.stage3D._AGALConverter.SamplerRegister","toSamplerState",0x8ed80c96,"openfl._internal.stage3D._AGALConverter.SamplerRegister.toSamplerState","openfl/_internal/stage3D/AGALConverter.hx",892,0x0a35cc61)
	HX_STACK_THIS(this)
	HX_STACK_LINE(894)
	int magFilter = (int)0;		HX_STACK_VAR(magFilter,"magFilter");
	HX_STACK_LINE(895)
	int minFilter = (int)0;		HX_STACK_VAR(minFilter,"minFilter");
	HX_STACK_LINE(896)
	int wrapModeS = (int)0;		HX_STACK_VAR(wrapModeS,"wrapModeS");
	HX_STACK_LINE(897)
	int wrapModeT = (int)0;		HX_STACK_VAR(wrapModeT,"wrapModeT");
	HX_STACK_LINE(900)
	{
		HX_STACK_LINE(900)
		int tmp = this->f;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(900)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(900)
		int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(900)
		switch( (int)(tmp1)){
			case (int)0: {
				HX_STACK_LINE(902)
				magFilter = (int)9728;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(903)
				magFilter = (int)9729;
			}
			;break;
			default: {
				HX_STACK_LINE(904)
				::openfl::errors::IllegalOperationError tmp2 = ::openfl::errors::IllegalOperationError_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(904)
				HX_STACK_DO_THROW(tmp2);
			}
		}
	}
	HX_STACK_LINE(909)
	{
		HX_STACK_LINE(909)
		int tmp = this->m;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(909)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(909)
		int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(909)
		switch( (int)(tmp1)){
			case (int)0: {
				HX_STACK_LINE(914)
				int tmp2 = this->f;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(914)
				bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(914)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(914)
				if ((tmp3)){
					HX_STACK_LINE(914)
					tmp4 = (int)9729;
				}
				else{
					HX_STACK_LINE(914)
					tmp4 = (int)9728;
				}
				HX_STACK_LINE(914)
				minFilter = tmp4;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(919)
				int tmp2 = this->f;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(919)
				bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(919)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(919)
				if ((tmp3)){
					HX_STACK_LINE(919)
					tmp4 = (int)9986;
				}
				else{
					HX_STACK_LINE(919)
					tmp4 = (int)9984;
				}
				HX_STACK_LINE(919)
				minFilter = tmp4;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(924)
				int tmp2 = this->f;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(924)
				bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(924)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(924)
				if ((tmp3)){
					HX_STACK_LINE(924)
					tmp4 = (int)9987;
				}
				else{
					HX_STACK_LINE(924)
					tmp4 = (int)9985;
				}
				HX_STACK_LINE(924)
				minFilter = tmp4;
			}
			;break;
			default: {
				HX_STACK_LINE(928)
				::openfl::errors::IllegalOperationError tmp2 = ::openfl::errors::IllegalOperationError_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(928)
				HX_STACK_DO_THROW(tmp2);
			}
		}
	}
	HX_STACK_LINE(933)
	{
		HX_STACK_LINE(933)
		int tmp = this->w;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(933)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(933)
		int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(933)
		switch( (int)(tmp1)){
			case (int)0: {
				HX_STACK_LINE(937)
				wrapModeS = (int)33071;
				HX_STACK_LINE(938)
				wrapModeT = (int)33071;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(942)
				wrapModeS = (int)10497;
				HX_STACK_LINE(943)
				wrapModeT = (int)10497;
			}
			;break;
			default: {
				HX_STACK_LINE(947)
				::openfl::errors::IllegalOperationError tmp2 = ::openfl::errors::IllegalOperationError_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(947)
				HX_STACK_DO_THROW(tmp2);
			}
		}
	}
	HX_STACK_LINE(952)
	int tmp = this->b;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(952)
	int tmp1 = (int(tmp) << int((int)24));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(952)
	int tmp2 = (int(tmp1) >> int((int)24));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(952)
	Float tmp3 = (Float(tmp2) / Float(((Float)8.0)));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(952)
	Float lodBias = tmp3;		HX_STACK_VAR(lodBias,"lodBias");
	HX_STACK_LINE(953)
	Float maxAniso = ((Float)0.0);		HX_STACK_VAR(maxAniso,"maxAniso");
	HX_STACK_LINE(955)
	::openfl::_internal::stage3D::SamplerState tmp4 = ::openfl::_internal::stage3D::SamplerState_obj::__new(minFilter,magFilter,wrapModeS,wrapModeT,lodBias,maxAniso);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(955)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(SamplerRegister_obj,toSamplerState,return )

::openfl::_internal::stage3D::_AGALConverter::SamplerRegister SamplerRegister_obj::parse( cpp::Int64Struct v,::openfl::_internal::stage3D::_AGALConverter::ProgramType programType){
	HX_STACK_FRAME("openfl._internal.stage3D._AGALConverter.SamplerRegister","parse",0x0bb77fe1,"openfl._internal.stage3D._AGALConverter.SamplerRegister.parse","openfl/_internal/stage3D/AGALConverter.hx",866,0x0a35cc61)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(programType,"programType")
	HX_STACK_LINE(868)
	::openfl::_internal::stage3D::_AGALConverter::SamplerRegister tmp = ::openfl::_internal::stage3D::_AGALConverter::SamplerRegister_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(868)
	::openfl::_internal::stage3D::_AGALConverter::SamplerRegister sr = tmp;		HX_STACK_VAR(sr,"sr");
	HX_STACK_LINE(869)
	sr->programType = programType;
	HX_STACK_LINE(870)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(870)
	{
		HX_STACK_LINE(870)
		cpp::Int64Struct tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(870)
		{
			HX_STACK_LINE(870)
			cpp::Int64Struct a = ((v) >> ((int)60));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(870)
			cpp::Int64Struct tmp3 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)15);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(870)
			cpp::Int64Struct b = tmp3;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(870)
			tmp2 = ((a) & (b));
		}
		HX_STACK_LINE(870)
		cpp::Int64Struct this1 = tmp2;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(870)
		tmp1 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(870)
	sr->f = tmp1;
	HX_STACK_LINE(871)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(871)
	{
		HX_STACK_LINE(871)
		cpp::Int64Struct tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(871)
		{
			HX_STACK_LINE(871)
			cpp::Int64Struct a = ((v) >> ((int)56));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(871)
			cpp::Int64Struct tmp4 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)15);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(871)
			cpp::Int64Struct b = tmp4;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(871)
			tmp3 = ((a) & (b));
		}
		HX_STACK_LINE(871)
		cpp::Int64Struct this1 = tmp3;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(871)
		tmp2 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(871)
	sr->m = tmp2;
	HX_STACK_LINE(872)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(872)
	{
		HX_STACK_LINE(872)
		cpp::Int64Struct tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(872)
		{
			HX_STACK_LINE(872)
			cpp::Int64Struct a = ((v) >> ((int)52));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(872)
			cpp::Int64Struct tmp5 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)15);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(872)
			cpp::Int64Struct b = tmp5;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(872)
			tmp4 = ((a) & (b));
		}
		HX_STACK_LINE(872)
		cpp::Int64Struct this1 = tmp4;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(872)
		tmp3 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(872)
	sr->w = tmp3;
	HX_STACK_LINE(873)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(873)
	{
		HX_STACK_LINE(873)
		cpp::Int64Struct tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(873)
		{
			HX_STACK_LINE(873)
			cpp::Int64Struct a = ((v) >> ((int)48));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(873)
			cpp::Int64Struct tmp6 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)15);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(873)
			cpp::Int64Struct b = tmp6;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(873)
			tmp5 = ((a) & (b));
		}
		HX_STACK_LINE(873)
		cpp::Int64Struct this1 = tmp5;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(873)
		tmp4 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(873)
	sr->s = tmp4;
	HX_STACK_LINE(874)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(874)
	{
		HX_STACK_LINE(874)
		cpp::Int64Struct tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(874)
		{
			HX_STACK_LINE(874)
			cpp::Int64Struct a = ((v) >> ((int)44));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(874)
			cpp::Int64Struct tmp7 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)15);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(874)
			cpp::Int64Struct b = tmp7;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(874)
			tmp6 = ((a) & (b));
		}
		HX_STACK_LINE(874)
		cpp::Int64Struct this1 = tmp6;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(874)
		tmp5 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(874)
	sr->d = tmp5;
	HX_STACK_LINE(875)
	int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(875)
	{
		HX_STACK_LINE(875)
		cpp::Int64Struct tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(875)
		{
			HX_STACK_LINE(875)
			cpp::Int64Struct a = ((v) >> ((int)40));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(875)
			cpp::Int64Struct tmp8 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)15);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(875)
			cpp::Int64Struct b = tmp8;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(875)
			tmp7 = ((a) & (b));
		}
		HX_STACK_LINE(875)
		cpp::Int64Struct this1 = tmp7;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(875)
		tmp6 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(875)
	sr->t = tmp6;
	HX_STACK_LINE(876)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(876)
	{
		HX_STACK_LINE(876)
		cpp::Int64Struct tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(876)
		{
			HX_STACK_LINE(876)
			cpp::Int64Struct a = ((v) >> ((int)32));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(876)
			cpp::Int64Struct tmp9 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)15);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(876)
			cpp::Int64Struct b = tmp9;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(876)
			tmp8 = ((a) & (b));
		}
		HX_STACK_LINE(876)
		cpp::Int64Struct this1 = tmp8;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(876)
		tmp7 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(876)
	sr->type = tmp7;
	HX_STACK_LINE(877)
	int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(877)
	{
		HX_STACK_LINE(877)
		cpp::Int64Struct tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(877)
		{
			HX_STACK_LINE(877)
			cpp::Int64Struct a = ((v) >> ((int)16));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(877)
			cpp::Int64Struct tmp10 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)255);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(877)
			cpp::Int64Struct b = tmp10;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(877)
			tmp9 = ((a) & (b));
		}
		HX_STACK_LINE(877)
		cpp::Int64Struct this1 = tmp9;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(877)
		tmp8 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(877)
	sr->b = tmp8;
	HX_STACK_LINE(878)
	int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(878)
	{
		HX_STACK_LINE(878)
		cpp::Int64Struct tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(878)
		{
			HX_STACK_LINE(878)
			cpp::Int64Struct tmp11 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)65535);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(878)
			cpp::Int64Struct b = tmp11;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(878)
			tmp10 = ((v) & (b));
		}
		HX_STACK_LINE(878)
		cpp::Int64Struct this1 = tmp10;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(878)
		tmp9 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(878)
	sr->n = tmp9;
	HX_STACK_LINE(879)
	::openfl::_internal::stage3D::_AGALConverter::SamplerRegister tmp10 = sr;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(879)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SamplerRegister_obj,parse,return )


SamplerRegister_obj::SamplerRegister_obj()
{
}

void SamplerRegister_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SamplerRegister);
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(d,"d");
	HX_MARK_MEMBER_NAME(f,"f");
	HX_MARK_MEMBER_NAME(m,"m");
	HX_MARK_MEMBER_NAME(n,"n");
	HX_MARK_MEMBER_NAME(programType,"programType");
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_MEMBER_NAME(t,"t");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_END_CLASS();
}

void SamplerRegister_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(d,"d");
	HX_VISIT_MEMBER_NAME(f,"f");
	HX_VISIT_MEMBER_NAME(m,"m");
	HX_VISIT_MEMBER_NAME(n,"n");
	HX_VISIT_MEMBER_NAME(programType,"programType");
	HX_VISIT_MEMBER_NAME(s,"s");
	HX_VISIT_MEMBER_NAME(t,"t");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(w,"w");
}

Dynamic SamplerRegister_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"d") ) { return d; }
		if (HX_FIELD_EQ(inName,"f") ) { return f; }
		if (HX_FIELD_EQ(inName,"m") ) { return m; }
		if (HX_FIELD_EQ(inName,"n") ) { return n; }
		if (HX_FIELD_EQ(inName,"s") ) { return s; }
		if (HX_FIELD_EQ(inName,"t") ) { return t; }
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toGLSL") ) { return toGLSL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { return programType; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"toSamplerState") ) { return toSamplerState_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool SamplerRegister_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true;  }
	}
	return false;
}

Dynamic SamplerRegister_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f") ) { f=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m") ) { m=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n") ) { n=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"t") ) { t=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { programType=inValue.Cast< ::openfl::_internal::stage3D::_AGALConverter::ProgramType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SamplerRegister_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("d","\x64","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("f","\x66","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("m","\x6d","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4"));
	outFields->push(HX_HCSTRING("s","\x73","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("t","\x74","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,d),HX_HCSTRING("d","\x64","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,f),HX_HCSTRING("f","\x66","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,m),HX_HCSTRING("m","\x6d","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,n),HX_HCSTRING("n","\x6e","\x00","\x00","\x00")},
	{hx::fsObject /*::openfl::_internal::stage3D::_AGALConverter::ProgramType*/ ,(int)offsetof(SamplerRegister_obj,programType),HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4")},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,s),HX_HCSTRING("s","\x73","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,t),HX_HCSTRING("t","\x74","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,w),HX_HCSTRING("w","\x77","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("d","\x64","\x00","\x00","\x00"),
	HX_HCSTRING("f","\x66","\x00","\x00","\x00"),
	HX_HCSTRING("m","\x6d","\x00","\x00","\x00"),
	HX_HCSTRING("n","\x6e","\x00","\x00","\x00"),
	HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4"),
	HX_HCSTRING("s","\x73","\x00","\x00","\x00"),
	HX_HCSTRING("t","\x74","\x00","\x00","\x00"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("w","\x77","\x00","\x00","\x00"),
	HX_HCSTRING("toGLSL","\xf9","\x58","\x08","\x7a"),
	HX_HCSTRING("toSamplerState","\x04","\x62","\xd2","\xf8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SamplerRegister_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SamplerRegister_obj::__mClass,"__mClass");
};

#endif

hx::Class SamplerRegister_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	::String(null()) };

void SamplerRegister_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D._AGALConverter.SamplerRegister","\x9c","\x39","\xf2","\x49");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SamplerRegister_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SamplerRegister_obj >;
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
