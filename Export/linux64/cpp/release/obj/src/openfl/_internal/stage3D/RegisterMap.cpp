#include <hxcpp.h>

#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_AGALConverter
#include <openfl/_internal/stage3D/AGALConverter.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_RegisterMap
#include <openfl/_internal/stage3D/RegisterMap.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_DestRegister
#include <openfl/_internal/stage3D/_AGALConverter/DestRegister.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_ProgramType
#include <openfl/_internal/stage3D/_AGALConverter/ProgramType.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_RegisterMapEntry
#include <openfl/_internal/stage3D/_AGALConverter/RegisterMapEntry.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_RegisterUsage
#include <openfl/_internal/stage3D/_AGALConverter/RegisterUsage.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_SamplerRegister
#include <openfl/_internal/stage3D/_AGALConverter/SamplerRegister.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_SourceRegister
#include <openfl/_internal/stage3D/_AGALConverter/SourceRegister.h>
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

Void RegisterMap_obj::__construct()
{
HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","new",0xb81e399c,"openfl._internal.stage3D.RegisterMap.new","openfl/_internal/stage3D/AGALConverter.hx",557,0x0a35cc61)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(560)
	this->mEntries = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//RegisterMap_obj::~RegisterMap_obj() { }

Dynamic RegisterMap_obj::__CreateEmpty() { return  new RegisterMap_obj; }
hx::ObjectPtr< RegisterMap_obj > RegisterMap_obj::__new()
{  hx::ObjectPtr< RegisterMap_obj > _result_ = new RegisterMap_obj();
	_result_->__construct();
	return _result_;}

Dynamic RegisterMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RegisterMap_obj > _result_ = new RegisterMap_obj();
	_result_->__construct();
	return _result_;}

Void RegisterMap_obj::add( int type,::String name,int number,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage usage){
{
		HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","add",0xb8145b5d,"openfl._internal.stage3D.RegisterMap.add","openfl/_internal/stage3D/AGALConverter.hx",570,0x0a35cc61)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(number,"number")
		HX_STACK_ARG(usage,"usage")
		HX_STACK_LINE(572)
		{
			HX_STACK_LINE(572)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(572)
			Array< ::Dynamic > _g1 = this->mEntries;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(572)
			while((true)){
				HX_STACK_LINE(572)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(572)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(572)
				if ((tmp1)){
					HX_STACK_LINE(572)
					break;
				}
				HX_STACK_LINE(572)
				::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry tmp2 = _g1->__get(_g).StaticCast< ::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(572)
				::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry entry = tmp2;		HX_STACK_VAR(entry,"entry");
				HX_STACK_LINE(572)
				++(_g);
				HX_STACK_LINE(574)
				bool tmp3 = (entry->type == type);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(574)
				bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(574)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(574)
				if ((tmp4)){
					HX_STACK_LINE(574)
					tmp5 = (entry->name == name);
				}
				else{
					HX_STACK_LINE(574)
					tmp5 = false;
				}
				HX_STACK_LINE(574)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(574)
				if ((tmp5)){
					HX_STACK_LINE(574)
					tmp6 = (entry->number == number);
				}
				else{
					HX_STACK_LINE(574)
					tmp6 = false;
				}
				HX_STACK_LINE(574)
				if ((tmp6)){
					HX_STACK_LINE(576)
					bool tmp7 = (entry->usage != usage);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(576)
					if ((tmp7)){
						HX_STACK_LINE(578)
						::openfl::errors::IllegalOperationError tmp8 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("Cannot use register in multiple ways yet (mat4/vec4)","\x5e","\x30","\xe0","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(578)
						HX_STACK_DO_THROW(tmp8);
					}
					HX_STACK_LINE(582)
					return null();
				}
			}
		}
		HX_STACK_LINE(588)
		::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry tmp = ::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(588)
		::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry entry = tmp;		HX_STACK_VAR(entry,"entry");
		HX_STACK_LINE(589)
		entry->type = type;
		HX_STACK_LINE(590)
		entry->name = name;
		HX_STACK_LINE(591)
		entry->number = number;
		HX_STACK_LINE(592)
		entry->usage = usage;
		HX_STACK_LINE(593)
		::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry tmp1 = entry;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(593)
		this->mEntries->push(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(RegisterMap_obj,add,(void))

Void RegisterMap_obj::addDR( ::openfl::_internal::stage3D::_AGALConverter::DestRegister dr,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage usage){
{
		HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","addDR",0x2a67e82b,"openfl._internal.stage3D.RegisterMap.addDR","openfl/_internal/stage3D/AGALConverter.hx",598,0x0a35cc61)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dr,"dr")
		HX_STACK_ARG(usage,"usage")
		HX_STACK_LINE(600)
		int tmp = dr->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(600)
		::String tmp1 = dr->toGLSL(false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(600)
		int tmp2 = dr->n;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(600)
		::openfl::_internal::stage3D::_AGALConverter::RegisterUsage tmp3 = usage;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(600)
		this->add(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RegisterMap_obj,addDR,(void))

Void RegisterMap_obj::addSaR( ::openfl::_internal::stage3D::_AGALConverter::SamplerRegister sr,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage usage){
{
		HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","addSaR",0xf08eaca7,"openfl._internal.stage3D.RegisterMap.addSaR","openfl/_internal/stage3D/AGALConverter.hx",605,0x0a35cc61)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sr,"sr")
		HX_STACK_ARG(usage,"usage")
		HX_STACK_LINE(607)
		int tmp = sr->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(607)
		::String tmp1 = sr->toGLSL();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(607)
		int tmp2 = sr->n;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(607)
		::openfl::_internal::stage3D::_AGALConverter::RegisterUsage tmp3 = usage;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(607)
		this->add(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RegisterMap_obj,addSaR,(void))

Void RegisterMap_obj::addSR( ::openfl::_internal::stage3D::_AGALConverter::SourceRegister sr,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage usage,hx::Null< int >  __o_offset){
int offset = __o_offset.Default(0);
	HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","addSR",0x2a67f53c,"openfl._internal.stage3D.RegisterMap.addSR","openfl/_internal/stage3D/AGALConverter.hx",612,0x0a35cc61)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sr,"sr")
	HX_STACK_ARG(usage,"usage")
	HX_STACK_ARG(offset,"offset")
{
		HX_STACK_LINE(614)
		bool tmp = (sr->d != (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(614)
		if ((tmp)){
			HX_STACK_LINE(616)
			int tmp1 = sr->itype;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(616)
			int tmp2 = sr->itype;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(616)
			::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp3 = sr->programType;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(616)
			::String tmp4 = ::openfl::_internal::stage3D::AGALConverter_obj::prefixFromType(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(616)
			int tmp5 = sr->n;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(616)
			::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(616)
			int tmp7 = sr->n;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(616)
			this->add(tmp1,tmp6,tmp7,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
			HX_STACK_LINE(617)
			int tmp8 = sr->type;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(617)
			int tmp9 = sr->type;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(617)
			::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp10 = sr->programType;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(617)
			::String tmp11 = ::openfl::_internal::stage3D::AGALConverter_obj::prefixFromType(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(617)
			int tmp12 = sr->o;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(617)
			::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(617)
			int tmp14 = sr->o;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(617)
			this->add(tmp8,tmp13,tmp14,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4_ARRAY);
			HX_STACK_LINE(618)
			return null();
		}
		HX_STACK_LINE(622)
		int tmp1 = sr->type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(622)
		int tmp2 = offset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(622)
		::String tmp3 = sr->toGLSL(false,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(622)
		int tmp4 = (sr->n + offset);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(622)
		::openfl::_internal::stage3D::_AGALConverter::RegisterUsage tmp5 = usage;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(622)
		this->add(tmp1,tmp3,tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(RegisterMap_obj,addSR,(void))

::openfl::_internal::stage3D::_AGALConverter::RegisterUsage RegisterMap_obj::getRegisterUsage( ::openfl::_internal::stage3D::_AGALConverter::SourceRegister sr){
	HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","getRegisterUsage",0x73804a8c,"openfl._internal.stage3D.RegisterMap.getRegisterUsage","openfl/_internal/stage3D/AGALConverter.hx",627,0x0a35cc61)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sr,"sr")
	HX_STACK_LINE(629)
	bool tmp = (sr->d != (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(629)
	if ((tmp)){
		HX_STACK_LINE(631)
		return ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4_ARRAY;
	}
	HX_STACK_LINE(635)
	int tmp1 = sr->type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(635)
	::String tmp2 = sr->toGLSL(false,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(635)
	int tmp3 = sr->n;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(635)
	::openfl::_internal::stage3D::_AGALConverter::RegisterUsage tmp4 = this->getUsage(tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(635)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(RegisterMap_obj,getRegisterUsage,return )

::openfl::_internal::stage3D::_AGALConverter::RegisterUsage RegisterMap_obj::getUsage( int type,::String name,int number){
	HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","getUsage",0x4c4909ef,"openfl._internal.stage3D.RegisterMap.getUsage","openfl/_internal/stage3D/AGALConverter.hx",640,0x0a35cc61)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(number,"number")
	HX_STACK_LINE(642)
	{
		HX_STACK_LINE(642)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(642)
		Array< ::Dynamic > _g1 = this->mEntries;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(642)
		while((true)){
			HX_STACK_LINE(642)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(642)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(642)
			if ((tmp1)){
				HX_STACK_LINE(642)
				break;
			}
			HX_STACK_LINE(642)
			::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry tmp2 = _g1->__get(_g).StaticCast< ::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(642)
			::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry entry = tmp2;		HX_STACK_VAR(entry,"entry");
			HX_STACK_LINE(642)
			++(_g);
			HX_STACK_LINE(644)
			bool tmp3 = (entry->type == type);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(644)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(644)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(644)
			if ((tmp4)){
				HX_STACK_LINE(644)
				tmp5 = (entry->name == name);
			}
			else{
				HX_STACK_LINE(644)
				tmp5 = false;
			}
			HX_STACK_LINE(644)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(644)
			if ((tmp5)){
				HX_STACK_LINE(644)
				tmp6 = (entry->number == number);
			}
			else{
				HX_STACK_LINE(644)
				tmp6 = false;
			}
			HX_STACK_LINE(644)
			if ((tmp6)){
				HX_STACK_LINE(646)
				::openfl::_internal::stage3D::_AGALConverter::RegisterUsage tmp7 = entry->usage;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(646)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(652)
	return ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::UNUSED;
}


HX_DEFINE_DYNAMIC_FUNC3(RegisterMap_obj,getUsage,return )

::String RegisterMap_obj::toGLSL( bool tempRegistersOnly){
	HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","toGLSL",0xcb8e5d3d,"openfl._internal.stage3D.RegisterMap.toGLSL","openfl/_internal/stage3D/AGALConverter.hx",657,0x0a35cc61)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tempRegistersOnly,"tempRegistersOnly")

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 2; }
	int run(::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry a,::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry b){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/_internal/stage3D/AGALConverter.hx",659,0x0a35cc61)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		{
			HX_STACK_LINE(661)
			bool tmp = (a->type != b->type);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(661)
			if ((tmp)){
				HX_STACK_LINE(663)
				int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(663)
				tmp1 = hx::TCast< ::Int >::cast(a->type);
				HX_STACK_LINE(663)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(663)
				tmp2 = hx::TCast< ::Int >::cast(b->type);
				HX_STACK_LINE(663)
				int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(663)
				return tmp3;
			}
			else{
				HX_STACK_LINE(667)
				int tmp1 = (a->number - b->number);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(667)
				return tmp1;
			}
			HX_STACK_LINE(661)
			return (int)0;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(659)
	this->mEntries->sort( Dynamic(new _Function_1_1()));
	HX_STACK_LINE(673)
	::StringBuf tmp = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(673)
	::StringBuf sb = tmp;		HX_STACK_VAR(sb,"sb");
	HX_STACK_LINE(675)
	{
		HX_STACK_LINE(675)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(675)
		int tmp1 = this->mEntries->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(675)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(675)
		while((true)){
			HX_STACK_LINE(675)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(675)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(675)
			if ((tmp3)){
				HX_STACK_LINE(675)
				break;
			}
			HX_STACK_LINE(675)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(675)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(677)
			::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry tmp5 = this->mEntries->__get(i).StaticCast< ::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(677)
			::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry entry = tmp5;		HX_STACK_VAR(entry,"entry");
			HX_STACK_LINE(681)
			bool tmp6 = tempRegistersOnly;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(681)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(681)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(681)
			if ((tmp7)){
				HX_STACK_LINE(681)
				tmp8 = (entry->type != (int)2);
			}
			else{
				HX_STACK_LINE(681)
				tmp8 = false;
			}
			HX_STACK_LINE(681)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(681)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(681)
			if ((tmp9)){
				HX_STACK_LINE(681)
				bool tmp11 = tempRegistersOnly;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(681)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(681)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(681)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(681)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(681)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(681)
				if ((tmp16)){
					HX_STACK_LINE(681)
					tmp10 = (entry->type == (int)2);
				}
				else{
					HX_STACK_LINE(681)
					tmp10 = false;
				}
			}
			else{
				HX_STACK_LINE(681)
				tmp10 = true;
			}
			HX_STACK_LINE(681)
			if ((tmp10)){
				HX_STACK_LINE(683)
				continue;
			}
			HX_STACK_LINE(688)
			bool tmp11 = (entry->type == (int)3);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(688)
			if ((tmp11)){
				HX_STACK_LINE(690)
				continue;
			}
			HX_STACK_LINE(694)
			{
				HX_STACK_LINE(694)
				int _g2 = entry->type;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(694)
				int tmp12 = _g2;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(694)
				switch( (int)(tmp12)){
					case (int)0: {
						HX_STACK_LINE(699)
						sb->add(HX_HCSTRING("attribute ","\x84","\xa8","\x71","\x97"));
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(704)
						sb->add(HX_HCSTRING("uniform ","\x6c","\xcc","\x54","\x02"));
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(708)
						sb->add(HX_HCSTRING("\t","\x09","\x00","\x00","\x00"));
					}
					;break;
					case (int)3: {
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(714)
						sb->add(HX_HCSTRING("varying ","\xb0","\x25","\xc9","\xa4"));
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(718)
						sb->add(HX_HCSTRING("uniform ","\x6c","\xcc","\x54","\x02"));
					}
					;break;
					default: {
						HX_STACK_LINE(722)
						::openfl::errors::IllegalOperationError tmp13 = ::openfl::errors::IllegalOperationError_obj::__new(null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(722)
						HX_STACK_DO_THROW(tmp13);
					}
				}
			}
			HX_STACK_LINE(726)
			{
				HX_STACK_LINE(726)
				::openfl::_internal::stage3D::_AGALConverter::RegisterUsage _g2 = entry->usage;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(726)
				switch( (int)(_g2->__Index())){
					case (int)1: {
						HX_STACK_LINE(730)
						sb->add(HX_HCSTRING("vec4 ","\xc0","\x4c","\x56","\x34"));
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(734)
						sb->add(HX_HCSTRING("vec4 ","\xc0","\x4c","\x56","\x34"));
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(738)
						sb->add(HX_HCSTRING("mat4 ","\x0c","\x20","\x23","\x03"));
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(742)
						sb->add(HX_HCSTRING("sampler2D ","\x06","\x3c","\x4f","\x7c"));
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(746)
						sb->add(HX_HCSTRING("samplerCube ","\x63","\x87","\x00","\x86"));
					}
					;break;
					case (int)0: {
						HX_STACK_LINE(750)
						Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("AGALConverter.hx","\x8f","\x36","\xcd","\xe2"),750,HX_HCSTRING("openfl._internal.stage3D.RegisterMap","\xaa","\x7b","\xea","\xb0"),HX_HCSTRING("toGLSL","\xf9","\x58","\x08","\x7a"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(750)
						::haxe::Log_obj::trace(HX_HCSTRING("Missing switch patten: RegisterUsage.UNUSED","\x38","\x09","\xf6","\x02"),tmp12);
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(754)
						Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("AGALConverter.hx","\x8f","\x36","\xcd","\xe2"),754,HX_HCSTRING("openfl._internal.stage3D.RegisterMap","\xaa","\x7b","\xea","\xb0"),HX_HCSTRING("toGLSL","\xf9","\x58","\x08","\x7a"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(754)
						::haxe::Log_obj::trace(HX_HCSTRING("Missing switch patten: RegisterUsage.SAMPLER_2D_ALPHA","\xea","\xff","\x93","\x8e"),tmp12);
					}
					;break;
				}
			}
			HX_STACK_LINE(758)
			bool tmp12 = (entry->usage == ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::SAMPLER_2D_ALPHA);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(758)
			if ((tmp12)){
				HX_STACK_LINE(760)
				sb->add(HX_HCSTRING("sampler2D ","\x06","\x3c","\x4f","\x7c"));
				HX_STACK_LINE(761)
				::String tmp13 = entry->name;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(761)
				sb->add(tmp13);
				HX_STACK_LINE(762)
				sb->add(HX_HCSTRING(";\n","\x6f","\x33","\x00","\x00"));
				HX_STACK_LINE(764)
				sb->add(HX_HCSTRING("uniform ","\x6c","\xcc","\x54","\x02"));
				HX_STACK_LINE(765)
				sb->add(HX_HCSTRING("sampler2D ","\x06","\x3c","\x4f","\x7c"));
				HX_STACK_LINE(766)
				::String tmp14 = (entry->name + HX_HCSTRING("_alpha","\x9f","\xee","\x7d","\x1d"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(766)
				sb->add(tmp14);
				HX_STACK_LINE(767)
				sb->add(HX_HCSTRING(";\n","\x6f","\x33","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(769)
				bool tmp13 = (entry->usage == ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4_ARRAY);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(769)
				if ((tmp13)){
					HX_STACK_LINE(771)
					int count = (int)128;		HX_STACK_VAR(count,"count");
					HX_STACK_LINE(774)
					int tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(774)
					int tmp15 = this->mEntries->length;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(774)
					int tmp16 = (tmp15 - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(774)
					bool tmp17 = (tmp14 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(774)
					if ((tmp17)){
						HX_STACK_LINE(776)
						int tmp18 = (i + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(776)
						::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry tmp19 = this->mEntries->__get(tmp18).StaticCast< ::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry >();		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(776)
						int tmp20 = tmp19->number;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(776)
						int tmp21 = entry->number;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(776)
						int tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(776)
						count = tmp22;
					}
					HX_STACK_LINE(780)
					::String tmp18 = (entry->name + HX_HCSTRING("[","\x5b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(780)
					int tmp19 = count;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(780)
					::String tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(780)
					::String tmp21 = (tmp20 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(780)
					sb->add(tmp21);
					HX_STACK_LINE(781)
					sb->add(HX_HCSTRING(";\n","\x6f","\x33","\x00","\x00"));
				}
				else{
					HX_STACK_LINE(785)
					::String tmp14 = entry->name;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(785)
					sb->add(tmp14);
					HX_STACK_LINE(786)
					sb->add(HX_HCSTRING(";\n","\x6f","\x33","\x00","\x00"));
				}
			}
		}
	}
	HX_STACK_LINE(792)
	::String tmp1 = sb->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(792)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(RegisterMap_obj,toGLSL,return )


RegisterMap_obj::RegisterMap_obj()
{
}

void RegisterMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RegisterMap);
	HX_MARK_MEMBER_NAME(mEntries,"mEntries");
	HX_MARK_END_CLASS();
}

void RegisterMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mEntries,"mEntries");
}

Dynamic RegisterMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"addDR") ) { return addDR_dyn(); }
		if (HX_FIELD_EQ(inName,"addSR") ) { return addSR_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"addSaR") ) { return addSaR_dyn(); }
		if (HX_FIELD_EQ(inName,"toGLSL") ) { return toGLSL_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mEntries") ) { return mEntries; }
		if (HX_FIELD_EQ(inName,"getUsage") ) { return getUsage_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getRegisterUsage") ) { return getRegisterUsage_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RegisterMap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"mEntries") ) { mEntries=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RegisterMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mEntries","\x63","\xec","\x2a","\xa1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(RegisterMap_obj,mEntries),HX_HCSTRING("mEntries","\x63","\xec","\x2a","\xa1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mEntries","\x63","\xec","\x2a","\xa1"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("addDR","\xef","\xb7","\x43","\x1c"),
	HX_HCSTRING("addSaR","\x63","\xa8","\x08","\x9f"),
	HX_HCSTRING("addSR","\x00","\xc5","\x43","\x1c"),
	HX_HCSTRING("getRegisterUsage","\x48","\xc9","\xb8","\x09"),
	HX_HCSTRING("getUsage","\xab","\x6c","\x06","\x0a"),
	HX_HCSTRING("toGLSL","\xf9","\x58","\x08","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RegisterMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RegisterMap_obj::__mClass,"__mClass");
};

#endif

hx::Class RegisterMap_obj::__mClass;

void RegisterMap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D.RegisterMap","\xaa","\x7b","\xea","\xb0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RegisterMap_obj >;
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
