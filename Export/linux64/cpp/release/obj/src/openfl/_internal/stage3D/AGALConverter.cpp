#include <hxcpp.h>

#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_AGALConverter
#include <openfl/_internal/stage3D/AGALConverter.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_RegisterMap
#include <openfl/_internal/stage3D/RegisterMap.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_SamplerState
#include <openfl/_internal/stage3D/SamplerState.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_DestRegister
#include <openfl/_internal/stage3D/_AGALConverter/DestRegister.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_ProgramType
#include <openfl/_internal/stage3D/_AGALConverter/ProgramType.h>
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
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif
namespace openfl{
namespace _internal{
namespace stage3D{

Void AGALConverter_obj::__construct()
{
	return null();
}

//AGALConverter_obj::~AGALConverter_obj() { }

Dynamic AGALConverter_obj::__CreateEmpty() { return  new AGALConverter_obj; }
hx::ObjectPtr< AGALConverter_obj > AGALConverter_obj::__new()
{  hx::ObjectPtr< AGALConverter_obj > _result_ = new AGALConverter_obj();
	_result_->__construct();
	return _result_;}

Dynamic AGALConverter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AGALConverter_obj > _result_ = new AGALConverter_obj();
	_result_->__construct();
	return _result_;}

::String AGALConverter_obj::prefixFromType( int regType,::openfl::_internal::stage3D::_AGALConverter::ProgramType programType){
	HX_STACK_FRAME("openfl._internal.stage3D.AGALConverter","prefixFromType",0xf2d51404,"openfl._internal.stage3D.AGALConverter.prefixFromType","openfl/_internal/stage3D/AGALConverter.hx",15,0x0a35cc61)
	HX_STACK_ARG(regType,"regType")
	HX_STACK_ARG(programType,"programType")
	HX_STACK_LINE(17)
	int tmp = regType;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(19)
			return HX_HCSTRING("va","\x2b","\x67","\x00","\x00");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(20)
			bool tmp1 = (programType == ::openfl::_internal::stage3D::_AGALConverter::ProgramType_obj::VERTEX);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(20)
			::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(20)
			if ((tmp1)){
				HX_STACK_LINE(20)
				tmp2 = HX_HCSTRING("vc","\x2d","\x67","\x00","\x00");
			}
			else{
				HX_STACK_LINE(20)
				tmp2 = HX_HCSTRING("fc","\x3d","\x59","\x00","\x00");
			}
			HX_STACK_LINE(20)
			return tmp2;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(21)
			bool tmp1 = (programType == ::openfl::_internal::stage3D::_AGALConverter::ProgramType_obj::VERTEX);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(21)
			::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(21)
			if ((tmp1)){
				HX_STACK_LINE(21)
				tmp2 = HX_HCSTRING("vt","\x3e","\x67","\x00","\x00");
			}
			else{
				HX_STACK_LINE(21)
				tmp2 = HX_HCSTRING("ft","\x4e","\x59","\x00","\x00");
			}
			HX_STACK_LINE(21)
			return tmp2;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(22)
			return HX_HCSTRING("output_","\x3e","\x12","\x6c","\xe4");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(23)
			return HX_HCSTRING("v","\x76","\x00","\x00","\x00");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(24)
			return HX_HCSTRING("sampler","\x08","\xc5","\xc9","\x83");
		}
		;break;
		default: {
			HX_STACK_LINE(25)
			::openfl::errors::IllegalOperationError tmp1 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("Invalid data!","\xae","\xd8","\xc0","\xb8"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(25)
			HX_STACK_DO_THROW(tmp1);
		}
	}
	HX_STACK_LINE(17)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AGALConverter_obj,prefixFromType,return )

cpp::Int64Struct AGALConverter_obj::readUInt64( ::openfl::utils::ByteArrayData byteArray){
	HX_STACK_FRAME("openfl._internal.stage3D.AGALConverter","readUInt64",0xe0c9dd3c,"openfl._internal.stage3D.AGALConverter.readUInt64","openfl/_internal/stage3D/AGALConverter.hx",32,0x0a35cc61)
	HX_STACK_ARG(byteArray,"byteArray")
	HX_STACK_LINE(34)
	int tmp = byteArray->readInt();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	int low = tmp;		HX_STACK_VAR(low,"low");
	HX_STACK_LINE(35)
	int tmp1 = byteArray->readInt();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	int high = tmp1;		HX_STACK_VAR(high,"high");
	HX_STACK_LINE(36)
	return cpp::Int64Struct(( ( (cpp::Int64)((unsigned int)high) ) << 32 ) | ((unsigned int)low));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AGALConverter_obj,readUInt64,return )

::String AGALConverter_obj::convertToGLSL( ::openfl::utils::ByteArrayData agal,Array< ::Dynamic > samplerState){
	HX_STACK_FRAME("openfl._internal.stage3D.AGALConverter","convertToGLSL",0x2f4203fe,"openfl._internal.stage3D.AGALConverter.convertToGLSL","openfl/_internal/stage3D/AGALConverter.hx",41,0x0a35cc61)
	HX_STACK_ARG(agal,"agal")
	HX_STACK_ARG(samplerState,"samplerState")
	HX_STACK_LINE(43)
	agal->position = (int)0;
	HX_STACK_LINE(44)
	agal->__endian = ((Dynamic)((int)1));
	HX_STACK_LINE(46)
	int tmp = agal->readByte();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	int magic = tmp1;		HX_STACK_VAR(magic,"magic");
	HX_STACK_LINE(48)
	bool tmp2 = (magic == (int)176);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(48)
	if ((tmp2)){
		HX_STACK_LINE(51)
		::String tmp3 = agal->readUTF();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		return tmp3;
	}
	HX_STACK_LINE(55)
	bool tmp3 = (magic != (int)160);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(55)
	if ((tmp3)){
		HX_STACK_LINE(57)
		::openfl::errors::IllegalOperationError tmp4 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("Magic value must be 0xA0, may not be AGAL","\x33","\xcd","\xd9","\x2e"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(57)
		HX_STACK_DO_THROW(tmp4);
	}
	HX_STACK_LINE(61)
	int tmp4 = agal->readInt();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(61)
	int version = tmp4;		HX_STACK_VAR(version,"version");
	HX_STACK_LINE(63)
	bool tmp5 = (version != (int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(63)
	if ((tmp5)){
		HX_STACK_LINE(65)
		::openfl::errors::IllegalOperationError tmp6 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("Version must be 1","\xe3","\xba","\xef","\x98"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(65)
		HX_STACK_DO_THROW(tmp6);
	}
	HX_STACK_LINE(69)
	int tmp6 = agal->readByte();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(69)
	int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(69)
	int shaderTypeID = tmp7;		HX_STACK_VAR(shaderTypeID,"shaderTypeID");
	HX_STACK_LINE(71)
	bool tmp8 = (shaderTypeID != (int)161);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(71)
	if ((tmp8)){
		HX_STACK_LINE(73)
		::openfl::errors::IllegalOperationError tmp9 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("Shader type ID must be 0xA1","\x38","\x36","\x8f","\x05"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(73)
		HX_STACK_DO_THROW(tmp9);
	}
	HX_STACK_LINE(77)
	int tmp9 = agal->readByte();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(77)
	int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(77)
	bool tmp11 = (tmp10 == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(77)
	::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(77)
	if ((tmp11)){
		HX_STACK_LINE(77)
		tmp12 = ::openfl::_internal::stage3D::_AGALConverter::ProgramType_obj::VERTEX;
	}
	else{
		HX_STACK_LINE(77)
		tmp12 = ::openfl::_internal::stage3D::_AGALConverter::ProgramType_obj::FRAGMENT;
	}
	HX_STACK_LINE(77)
	::openfl::_internal::stage3D::_AGALConverter::ProgramType programType = tmp12;		HX_STACK_VAR(programType,"programType");
	HX_STACK_LINE(79)
	::openfl::_internal::stage3D::RegisterMap tmp13 = ::openfl::_internal::stage3D::RegisterMap_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(79)
	::openfl::_internal::stage3D::RegisterMap map = tmp13;		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(80)
	::StringBuf tmp14 = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(80)
	::StringBuf sb = tmp14;		HX_STACK_VAR(sb,"sb");
	HX_STACK_LINE(82)
	while((true)){
		HX_STACK_LINE(82)
		int tmp15 = agal->position;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(82)
		::openfl::utils::ByteArrayData tmp16 = agal;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(82)
		int tmp17 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(82)
		bool tmp18 = (tmp15 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(82)
		bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(82)
		if ((tmp19)){
			HX_STACK_LINE(82)
			break;
		}
		HX_STACK_LINE(85)
		int tmp20 = agal->readInt();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(85)
		int opcode = tmp20;		HX_STACK_VAR(opcode,"opcode");
		HX_STACK_LINE(86)
		int tmp21 = agal->readUnsignedInt();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(86)
		int dest = tmp21;		HX_STACK_VAR(dest,"dest");
		HX_STACK_LINE(87)
		::openfl::utils::ByteArrayData tmp22 = agal;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(87)
		cpp::Int64Struct tmp23 = ::openfl::_internal::stage3D::AGALConverter_obj::readUInt64(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(87)
		cpp::Int64Struct source1 = tmp23;		HX_STACK_VAR(source1,"source1");
		HX_STACK_LINE(88)
		::openfl::utils::ByteArrayData tmp24 = agal;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(88)
		cpp::Int64Struct tmp25 = ::openfl::_internal::stage3D::AGALConverter_obj::readUInt64(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(88)
		cpp::Int64Struct source2 = tmp25;		HX_STACK_VAR(source2,"source2");
		HX_STACK_LINE(91)
		int tmp26 = dest;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(91)
		::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp27 = programType;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(91)
		::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp28 = ::openfl::_internal::stage3D::_AGALConverter::DestRegister_obj::parse(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(91)
		::openfl::_internal::stage3D::_AGALConverter::DestRegister dr = tmp28;		HX_STACK_VAR(dr,"dr");
		HX_STACK_LINE(92)
		cpp::Int64Struct tmp29 = source1;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(92)
		::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp30 = programType;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(92)
		int tmp31 = dr->mask;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(92)
		::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp32 = ::openfl::_internal::stage3D::_AGALConverter::SourceRegister_obj::parse(tmp29,tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(92)
		::openfl::_internal::stage3D::_AGALConverter::SourceRegister sr1 = tmp32;		HX_STACK_VAR(sr1,"sr1");
		HX_STACK_LINE(93)
		cpp::Int64Struct tmp33 = source2;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(93)
		::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp34 = programType;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(93)
		int tmp35 = dr->mask;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(93)
		::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp36 = ::openfl::_internal::stage3D::_AGALConverter::SourceRegister_obj::parse(tmp33,tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(93)
		::openfl::_internal::stage3D::_AGALConverter::SourceRegister sr2 = tmp36;		HX_STACK_VAR(sr2,"sr2");
		HX_STACK_LINE(96)
		sb->add(HX_HCSTRING("\t","\x09","\x00","\x00","\x00"));
		HX_STACK_LINE(98)
		int tmp37 = opcode;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(98)
		switch( (int)(tmp37)){
			case (int)0: {
				HX_STACK_LINE(102)
				::String tmp38 = dr->toGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(102)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(102)
				::String tmp40 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(102)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(102)
				::String tmp42 = (tmp41 + HX_HCSTRING("; // mov","\x19","\x49","\x64","\x51"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(102)
				sb->add(tmp42);
				HX_STACK_LINE(103)
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp43 = dr;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(103)
				map->addDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				HX_STACK_LINE(104)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp44 = sr1;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(104)
				map->addSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(108)
				::String tmp38 = dr->toGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(108)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(108)
				::String tmp40 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(108)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(108)
				::String tmp42 = (tmp41 + HX_HCSTRING(" + ","\xb5","\x6d","\x18","\x00"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(108)
				::String tmp43 = sr2->toGLSL(null(),null());		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(108)
				::String tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(108)
				::String tmp45 = (tmp44 + HX_HCSTRING("; // add","\x66","\x24","\x5b","\x51"));		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(108)
				sb->add(tmp45);
				HX_STACK_LINE(109)
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp46 = dr;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(109)
				map->addDR(tmp46,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				HX_STACK_LINE(110)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp47 = sr1;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(110)
				map->addSR(tmp47,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
				HX_STACK_LINE(111)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp48 = sr2;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(111)
				map->addSR(tmp48,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(115)
				::String tmp38 = dr->toGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(115)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(115)
				::String tmp40 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(115)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(115)
				::String tmp42 = (tmp41 + HX_HCSTRING(" - ","\x73","\x6f","\x18","\x00"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(115)
				::String tmp43 = sr2->toGLSL(null(),null());		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(115)
				::String tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(115)
				::String tmp45 = (tmp44 + HX_HCSTRING("; // sub","\xc5","\xdb","\x68","\x51"));		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(115)
				sb->add(tmp45);
				HX_STACK_LINE(116)
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp46 = dr;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(116)
				map->addDR(tmp46,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				HX_STACK_LINE(117)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp47 = sr1;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(117)
				map->addSR(tmp47,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
				HX_STACK_LINE(118)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp48 = sr2;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(118)
				map->addSR(tmp48,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(122)
				::String tmp38 = dr->toGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(122)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(122)
				::String tmp40 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(122)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(122)
				::String tmp42 = (tmp41 + HX_HCSTRING(" * ","\xd6","\x6c","\x18","\x00"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(122)
				::String tmp43 = sr2->toGLSL(null(),null());		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(122)
				::String tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(122)
				::String tmp45 = (tmp44 + HX_HCSTRING("; // mul","\x49","\x4e","\x64","\x51"));		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(122)
				sb->add(tmp45);
				HX_STACK_LINE(123)
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp46 = dr;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(123)
				map->addDR(tmp46,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				HX_STACK_LINE(124)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp47 = sr1;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(124)
				map->addSR(tmp47,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
				HX_STACK_LINE(125)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp48 = sr2;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(125)
				map->addSR(tmp48,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(129)
				::String tmp38 = dr->toGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(129)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(129)
				::String tmp40 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(129)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(129)
				::String tmp42 = (tmp41 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(129)
				::String tmp43 = sr2->toGLSL(null(),null());		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(129)
				::String tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(129)
				::String tmp45 = (tmp44 + HX_HCSTRING("; // div","\x96","\x6f","\x5d","\x51"));		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(129)
				sb->add(tmp45);
				HX_STACK_LINE(130)
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp46 = dr;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(130)
				map->addDR(tmp46,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				HX_STACK_LINE(131)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp47 = sr1;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(131)
				map->addSR(tmp47,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
				HX_STACK_LINE(132)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp48 = sr2;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(132)
				map->addSR(tmp48,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(136)
				::String tmp38 = dr->toGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(136)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = vec4(1) / ","\xb4","\x32","\x05","\x3b"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(136)
				::String tmp40 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(136)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(136)
				::String tmp42 = (tmp41 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(136)
				::String tmp43 = sr2->toGLSL(null(),null());		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(136)
				::String tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(136)
				::String tmp45 = (tmp44 + HX_HCSTRING("; // rcp (untested)","\x33","\x14","\x36","\x02"));		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(136)
				sb->add(tmp45);
				HX_STACK_LINE(137)
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp46 = dr;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(137)
				map->addDR(tmp46,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				HX_STACK_LINE(138)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp47 = sr1;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(138)
				map->addSR(tmp47,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(142)
				::String tmp38 = dr->toGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(142)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = min(","\x39","\xb9","\xa2","\x4b"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(142)
				::String tmp40 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(142)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(142)
				::String tmp42 = (tmp41 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(142)
				::String tmp43 = sr2->toGLSL(null(),null());		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(142)
				::String tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(142)
				::String tmp45 = (tmp44 + HX_HCSTRING("); // min","\x00","\x15","\x0e","\x1a"));		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(142)
				sb->add(tmp45);
				HX_STACK_LINE(143)
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp46 = dr;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(143)
				map->addDR(tmp46,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				HX_STACK_LINE(144)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp47 = sr1;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(144)
				map->addSR(tmp47,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
				HX_STACK_LINE(145)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp48 = sr2;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(145)
				map->addSR(tmp48,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(149)
				::String tmp38 = dr->toGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(149)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = max(","\xe7","\xaf","\x9c","\x4b"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(149)
				::String tmp40 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(149)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(149)
				::String tmp42 = (tmp41 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(149)
				::String tmp43 = sr2->toGLSL(null(),null());		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(149)
				::String tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(149)
				::String tmp45 = (tmp44 + HX_HCSTRING("); // max","\x12","\x0e","\x0e","\x1a"));		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(149)
				sb->add(tmp45);
				HX_STACK_LINE(150)
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp46 = dr;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(150)
				map->addDR(tmp46,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				HX_STACK_LINE(151)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp47 = sr1;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(151)
				map->addSR(tmp47,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
				HX_STACK_LINE(152)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp48 = sr2;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(152)
				map->addSR(tmp48,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(156)
				::String tmp38 = dr->toGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(156)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = fract(","\x85","\x4f","\x5f","\xde"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(156)
				::String tmp40 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(156)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(156)
				::String tmp42 = (tmp41 + HX_HCSTRING("); // frc","\x05","\xcd","\x08","\x1a"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(156)
				sb->add(tmp42);
				HX_STACK_LINE(157)
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp43 = dr;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(157)
				map->addDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				HX_STACK_LINE(158)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp44 = sr1;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(158)
				map->addSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(162)
				::String tmp38 = dr->toGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(162)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = sqrt(","\x05","\xd4","\x73","\x5c"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(162)
				::String tmp40 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(162)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(162)
				::String tmp42 = (tmp41 + HX_HCSTRING("); // sqrt","\xb2","\xa8","\x41","\xb6"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(162)
				sb->add(tmp42);
				HX_STACK_LINE(163)
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp43 = dr;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(163)
				map->addDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				HX_STACK_LINE(164)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp44 = sr1;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(164)
				map->addSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(168)
				::String tmp38 = dr->toGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(168)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = inversesqrt(","\x7b","\x94","\x3b","\xf8"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(168)
				::String tmp40 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(168)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(168)
				::String tmp42 = (tmp41 + HX_HCSTRING("); // rsq","\xfe","\xe8","\x11","\x1a"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(168)
				sb->add(tmp42);
				HX_STACK_LINE(169)
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp43 = dr;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(169)
				map->addDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				HX_STACK_LINE(170)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp44 = sr1;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(170)
				map->addSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(174)
				::String tmp38 = dr->toGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(174)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = pow(","\x73","\xf2","\xa2","\x4d"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(174)
				::String tmp40 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(174)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(174)
				::String tmp42 = (tmp41 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(174)
				::String tmp43 = sr2->toGLSL(null(),null());		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(174)
				::String tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(174)
				::String tmp45 = (tmp44 + HX_HCSTRING("); // pow","\x06","\x61","\x10","\x1a"));		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(174)
				sb->add(tmp45);
				HX_STACK_LINE(175)
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp46 = dr;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(175)
				map->addDR(tmp46,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				HX_STACK_LINE(176)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp47 = sr1;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(176)
				map->addSR(tmp47,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
				HX_STACK_LINE(177)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp48 = sr2;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(177)
				map->addSR(tmp48,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(181)
				::String tmp38 = dr->toGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(181)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = log2(","\xf7","\xc4","\x4a","\x53"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(181)
				::String tmp40 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(181)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(181)
				::String tmp42 = (tmp41 + HX_HCSTRING("); // log","\xf2","\x57","\x0d","\x1a"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(181)
				sb->add(tmp42);
				HX_STACK_LINE(182)
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp43 = dr;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(182)
				map->addDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				HX_STACK_LINE(183)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp44 = sr1;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(183)
				map->addSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(187)
				::String tmp38 = dr->toGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(187)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = exp2(","\x50","\x75","\x76","\x51"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(187)
				::String tmp40 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(187)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(187)
				::String tmp42 = (tmp41 + HX_HCSTRING("); // exp","\x0b","\x10","\x08","\x1a"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(187)
				sb->add(tmp42);
				HX_STACK_LINE(188)
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp43 = dr;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(188)
				map->addDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				HX_STACK_LINE(189)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp44 = sr1;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(189)
				map->addSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(193)
				::String tmp38 = dr->toGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(193)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = normalize(","\x1e","\x9b","\xe9","\xff"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(193)
				::String tmp40 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(193)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(193)
				::String tmp42 = (tmp41 + HX_HCSTRING("); // normalize","\x7b","\x81","\x39","\xe2"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(193)
				sb->add(tmp42);
				HX_STACK_LINE(194)
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp43 = dr;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(194)
				map->addDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				HX_STACK_LINE(195)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp44 = sr1;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(195)
				map->addSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(199)
				::String tmp38 = dr->toGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(199)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = sin(","\xf3","\x00","\x9a","\x4f"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(199)
				::String tmp40 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(199)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(199)
				::String tmp42 = (tmp41 + HX_HCSTRING("); // sin","\x86","\xa2","\x12","\x1a"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(199)
				sb->add(tmp42);
				HX_STACK_LINE(200)
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp43 = dr;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(200)
				map->addDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				HX_STACK_LINE(201)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp44 = sr1;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(201)
				map->addSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(205)
				::String tmp38 = dr->toGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(205)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = cos(","\xe4","\x28","\x0b","\x45"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(205)
				::String tmp40 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(205)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(205)
				::String tmp42 = (tmp41 + HX_HCSTRING("); // cos","\xb5","\x83","\x06","\x1a"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(205)
				sb->add(tmp42);
				HX_STACK_LINE(206)
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp43 = dr;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(206)
				map->addDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				HX_STACK_LINE(207)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp44 = sr1;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(207)
				map->addSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(211)
				int tmp38 = sr2->sourceMask = (int)7;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(211)
				sr1->sourceMask = tmp38;
				HX_STACK_LINE(212)
				::String tmp39 = dr->toGLSL(null());		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(212)
				::String tmp40 = (tmp39 + HX_HCSTRING(" = cross(vec3(","\xbe","\xc1","\xb9","\xac"));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(212)
				::String tmp41 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(212)
				::String tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(212)
				::String tmp43 = (tmp42 + HX_HCSTRING("), vec3(","\xec","\x87","\x86","\x4e"));		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(212)
				::String tmp44 = sr2->toGLSL(null(),null());		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(212)
				::String tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(212)
				::String tmp46 = (tmp45 + HX_HCSTRING(")); // crs","\x09","\xb9","\xf3","\xe5"));		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(212)
				sb->add(tmp46);
				HX_STACK_LINE(213)
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp47 = dr;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(213)
				map->addDR(tmp47,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				HX_STACK_LINE(214)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp48 = sr1;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(214)
				map->addSR(tmp48,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
				HX_STACK_LINE(215)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp49 = sr2;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(215)
				map->addSR(tmp49,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)18: {
				HX_STACK_LINE(219)
				int tmp38 = sr2->sourceMask = (int)7;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(219)
				sr1->sourceMask = tmp38;
				HX_STACK_LINE(220)
				::String tmp39 = dr->toGLSL(null());		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(220)
				::String tmp40 = (tmp39 + HX_HCSTRING(" = vec4(dot(vec3(","\xe5","\xe8","\x98","\x98"));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(220)
				::String tmp41 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(220)
				::String tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(220)
				::String tmp43 = (tmp42 + HX_HCSTRING("), vec3(","\xec","\x87","\x86","\x4e"));		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(220)
				::String tmp44 = sr2->toGLSL(null(),null());		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(220)
				::String tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(220)
				::String tmp46 = (tmp45 + HX_HCSTRING(")))","\x49","\x40","\x1f","\x00"));		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(220)
				::String tmp47 = dr->getWriteMask();		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(220)
				::String tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(220)
				::String tmp49 = (tmp48 + HX_HCSTRING("; // dp3","\x6c","\x75","\x5d","\x51"));		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(220)
				sb->add(tmp49);
				HX_STACK_LINE(221)
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp50 = dr;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(221)
				map->addDR(tmp50,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				HX_STACK_LINE(222)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp51 = sr1;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(222)
				map->addSR(tmp51,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
				HX_STACK_LINE(223)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp52 = sr2;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(223)
				map->addSR(tmp52,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)19: {
				HX_STACK_LINE(227)
				int tmp38 = sr2->sourceMask = (int)15;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(227)
				sr1->sourceMask = tmp38;
				HX_STACK_LINE(228)
				::String tmp39 = dr->toGLSL(null());		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(228)
				::String tmp40 = (tmp39 + HX_HCSTRING(" = vec4(dot(vec4(","\xc4","\xe9","\x98","\x98"));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(228)
				::String tmp41 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(228)
				::String tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(228)
				::String tmp43 = (tmp42 + HX_HCSTRING("), vec4(","\xcb","\x88","\x86","\x4e"));		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(228)
				::String tmp44 = sr2->toGLSL(null(),null());		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(228)
				::String tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(228)
				::String tmp46 = (tmp45 + HX_HCSTRING(")))","\x49","\x40","\x1f","\x00"));		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(228)
				::String tmp47 = dr->getWriteMask();		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(228)
				::String tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(228)
				::String tmp49 = (tmp48 + HX_HCSTRING("; // dp4","\x6d","\x75","\x5d","\x51"));		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(228)
				sb->add(tmp49);
				HX_STACK_LINE(229)
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp50 = dr;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(229)
				map->addDR(tmp50,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				HX_STACK_LINE(230)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp51 = sr1;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(230)
				map->addSR(tmp51,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
				HX_STACK_LINE(231)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp52 = sr2;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(231)
				map->addSR(tmp52,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)20: {
				HX_STACK_LINE(235)
				::String tmp38 = dr->toGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(235)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = abs(","\x59","\xde","\xae","\x43"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(235)
				::String tmp40 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(235)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(235)
				::String tmp42 = (tmp41 + HX_HCSTRING("); // abs","\xe0","\xf3","\x04","\x1a"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(235)
				sb->add(tmp42);
				HX_STACK_LINE(236)
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp43 = dr;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(236)
				map->addDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				HX_STACK_LINE(237)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp44 = sr1;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(237)
				map->addSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)21: {
				HX_STACK_LINE(241)
				::String tmp38 = dr->toGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(241)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = -","\x6a","\x39","\x55","\x15"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(241)
				::String tmp40 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(241)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(241)
				::String tmp42 = (tmp41 + HX_HCSTRING("; // neg","\x95","\x02","\x65","\x51"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(241)
				sb->add(tmp42);
				HX_STACK_LINE(242)
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp43 = dr;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(242)
				map->addDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				HX_STACK_LINE(243)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp44 = sr1;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(243)
				map->addSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)22: {
				HX_STACK_LINE(247)
				::String tmp38 = dr->toGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(247)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = clamp(","\x70","\x52","\xed","\x36"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(247)
				::String tmp40 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(247)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(247)
				::String tmp42 = (tmp41 + HX_HCSTRING(", 0.0, 1.0); // saturate","\x02","\xd7","\x59","\xd0"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(247)
				sb->add(tmp42);
				HX_STACK_LINE(248)
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp43 = dr;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(248)
				map->addDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				HX_STACK_LINE(249)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp44 = sr1;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(249)
				map->addSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)23: {
				HX_STACK_LINE(257)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp38 = sr2;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(257)
				::openfl::_internal::stage3D::_AGALConverter::RegisterUsage tmp39 = map->getRegisterUsage(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(257)
				::openfl::_internal::stage3D::_AGALConverter::RegisterUsage existingUsage = tmp39;		HX_STACK_VAR(existingUsage,"existingUsage");
				HX_STACK_LINE(259)
				bool tmp40 = (existingUsage != ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(259)
				bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(259)
				if ((tmp40)){
					HX_STACK_LINE(259)
					tmp41 = (existingUsage != ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4_ARRAY);
				}
				else{
					HX_STACK_LINE(259)
					tmp41 = false;
				}
				HX_STACK_LINE(259)
				if ((tmp41)){
					HX_STACK_LINE(261)
					::String tmp42 = dr->toGLSL(null());		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(261)
					::String tmp43 = (tmp42 + HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(261)
					::String tmp44 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(261)
					::String tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(261)
					::String tmp46 = (tmp45 + HX_HCSTRING(" * mat3(","\x9f","\x6a","\x62","\xc7"));		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(261)
					::String tmp47 = sr2->toGLSL(false,null());		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(261)
					::String tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(261)
					::String tmp49 = (tmp48 + HX_HCSTRING("); // m33","\xbb","\xe5","\x0d","\x1a"));		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(261)
					sb->add(tmp49);
					HX_STACK_LINE(262)
					::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp50 = dr;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(262)
					map->addDR(tmp50,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
					HX_STACK_LINE(263)
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp51 = sr1;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(263)
					map->addSR(tmp51,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
					HX_STACK_LINE(264)
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp52 = sr2;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(264)
					map->addSR(tmp52,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::MATRIX_4_4,null());
				}
				else{
					HX_STACK_LINE(269)
					int tmp42 = sr2->sourceMask = (int)7;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(269)
					sr1->sourceMask = tmp42;
					HX_STACK_LINE(270)
					::String tmp43 = dr->toGLSL(null());		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(270)
					::String tmp44 = (tmp43 + HX_HCSTRING(" = vec3(","\xa6","\x67","\xad","\x0e"));		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(270)
					::String tmp45 = (tmp44 + HX_HCSTRING("dot(","\x7f","\xf5","\x6d","\x42"));		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(271)
					::String tmp46 = sr1->toGLSL(true,null());		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(270)
					::String tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(270)
					::String tmp48 = (tmp47 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(271)
					::String tmp49 = sr2->toGLSL(true,(int)0);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(270)
					::String tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(270)
					::String tmp51 = (tmp50 + HX_HCSTRING("), ","\xdd","\x42","\x1f","\x00"));		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(270)
					::String tmp52 = (tmp51 + HX_HCSTRING("dot(","\x7f","\xf5","\x6d","\x42"));		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(272)
					::String tmp53 = sr1->toGLSL(true,null());		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(270)
					::String tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(270)
					::String tmp55 = (tmp54 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(272)
					::String tmp56 = sr2->toGLSL(true,(int)1);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(270)
					::String tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(270)
					::String tmp58 = (tmp57 + HX_HCSTRING("),","\xe3","\x23","\x00","\x00"));		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(270)
					::String tmp59 = (tmp58 + HX_HCSTRING("dot(","\x7f","\xf5","\x6d","\x42"));		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(273)
					::String tmp60 = sr1->toGLSL(true,null());		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(270)
					::String tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(270)
					::String tmp62 = (tmp61 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(273)
					::String tmp63 = sr2->toGLSL(true,(int)2);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(270)
					::String tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(270)
					::String tmp65 = (tmp64 + HX_HCSTRING(")); // m33","\x72","\x18","\xfb","\xe5"));		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(270)
					sb->add(tmp65);
					HX_STACK_LINE(275)
					::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp66 = dr;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(275)
					map->addDR(tmp66,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
					HX_STACK_LINE(276)
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp67 = sr1;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(276)
					map->addSR(tmp67,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
					HX_STACK_LINE(277)
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp68 = sr2;		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(277)
					map->addSR(tmp68,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,(int)0);
					HX_STACK_LINE(278)
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp69 = sr2;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(278)
					map->addSR(tmp69,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,(int)1);
					HX_STACK_LINE(279)
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp70 = sr2;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(279)
					map->addSR(tmp70,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,(int)2);
				}
			}
			;break;
			case (int)24: {
				HX_STACK_LINE(291)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp38 = sr2;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(291)
				::openfl::_internal::stage3D::_AGALConverter::RegisterUsage tmp39 = map->getRegisterUsage(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(291)
				::openfl::_internal::stage3D::_AGALConverter::RegisterUsage existingUsage = tmp39;		HX_STACK_VAR(existingUsage,"existingUsage");
				HX_STACK_LINE(293)
				bool tmp40 = (existingUsage != ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(293)
				bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(293)
				if ((tmp40)){
					HX_STACK_LINE(293)
					tmp41 = (existingUsage != ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4_ARRAY);
				}
				else{
					HX_STACK_LINE(293)
					tmp41 = false;
				}
				HX_STACK_LINE(293)
				if ((tmp41)){
					HX_STACK_LINE(295)
					::String tmp42 = dr->toGLSL(null());		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(295)
					::String tmp43 = (tmp42 + HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(295)
					::String tmp44 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(295)
					::String tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(295)
					::String tmp46 = (tmp45 + HX_HCSTRING(" * ","\xd6","\x6c","\x18","\x00"));		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(295)
					::String tmp47 = sr2->toGLSL(false,null());		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(295)
					::String tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(295)
					::String tmp49 = (tmp48 + HX_HCSTRING("; // m44","\x72","\x15","\x64","\x51"));		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(295)
					sb->add(tmp49);
					HX_STACK_LINE(296)
					::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp50 = dr;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(296)
					map->addDR(tmp50,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
					HX_STACK_LINE(297)
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp51 = sr1;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(297)
					map->addSR(tmp51,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
					HX_STACK_LINE(298)
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp52 = sr2;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(298)
					map->addSR(tmp52,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::MATRIX_4_4,null());
				}
				else{
					HX_STACK_LINE(303)
					int tmp42 = sr2->sourceMask = (int)15;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(303)
					sr1->sourceMask = tmp42;
					HX_STACK_LINE(304)
					::String tmp43 = dr->toGLSL(null());		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(304)
					::String tmp44 = (tmp43 + HX_HCSTRING(" = vec4(","\x85","\x68","\xad","\x0e"));		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(304)
					::String tmp45 = (tmp44 + HX_HCSTRING("dot(","\x7f","\xf5","\x6d","\x42"));		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(305)
					::String tmp46 = sr1->toGLSL(true,null());		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(304)
					::String tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(304)
					::String tmp48 = (tmp47 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(305)
					::String tmp49 = sr2->toGLSL(true,(int)0);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(304)
					::String tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(304)
					::String tmp51 = (tmp50 + HX_HCSTRING("), ","\xdd","\x42","\x1f","\x00"));		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(304)
					::String tmp52 = (tmp51 + HX_HCSTRING("dot(","\x7f","\xf5","\x6d","\x42"));		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(306)
					::String tmp53 = sr1->toGLSL(true,null());		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(304)
					::String tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(304)
					::String tmp55 = (tmp54 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(306)
					::String tmp56 = sr2->toGLSL(true,(int)1);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(304)
					::String tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(304)
					::String tmp58 = (tmp57 + HX_HCSTRING("), ","\xdd","\x42","\x1f","\x00"));		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(304)
					::String tmp59 = (tmp58 + HX_HCSTRING("dot(","\x7f","\xf5","\x6d","\x42"));		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(307)
					::String tmp60 = sr1->toGLSL(true,null());		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(304)
					::String tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(304)
					::String tmp62 = (tmp61 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(307)
					::String tmp63 = sr2->toGLSL(true,(int)2);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(304)
					::String tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(304)
					::String tmp65 = (tmp64 + HX_HCSTRING("), ","\xdd","\x42","\x1f","\x00"));		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(304)
					::String tmp66 = (tmp65 + HX_HCSTRING("dot(","\x7f","\xf5","\x6d","\x42"));		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(308)
					::String tmp67 = sr1->toGLSL(true,null());		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(304)
					::String tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(304)
					::String tmp69 = (tmp68 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(308)
					::String tmp70 = sr2->toGLSL(true,(int)3);		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(304)
					::String tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(304)
					::String tmp72 = (tmp71 + HX_HCSTRING(")); // m44","\x52","\x19","\xfb","\xe5"));		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(304)
					sb->add(tmp72);
					HX_STACK_LINE(310)
					::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp73 = dr;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(310)
					map->addDR(tmp73,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
					HX_STACK_LINE(311)
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp74 = sr1;		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(311)
					map->addSR(tmp74,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
					HX_STACK_LINE(312)
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp75 = sr2;		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(312)
					map->addSR(tmp75,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,(int)0);
					HX_STACK_LINE(313)
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp76 = sr2;		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(313)
					map->addSR(tmp76,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,(int)1);
					HX_STACK_LINE(314)
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp77 = sr2;		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(314)
					map->addSR(tmp77,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,(int)2);
					HX_STACK_LINE(315)
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp78 = sr2;		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(315)
					map->addSR(tmp78,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,(int)3);
				}
			}
			;break;
			case (int)25: {
				HX_STACK_LINE(327)
				hx::AndEq(dr->mask,(int)7);
				HX_STACK_LINE(329)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp38 = sr2;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(329)
				::openfl::_internal::stage3D::_AGALConverter::RegisterUsage tmp39 = map->getRegisterUsage(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(329)
				::openfl::_internal::stage3D::_AGALConverter::RegisterUsage existingUsage = tmp39;		HX_STACK_VAR(existingUsage,"existingUsage");
				HX_STACK_LINE(331)
				bool tmp40 = (existingUsage != ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(331)
				bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(331)
				if ((tmp40)){
					HX_STACK_LINE(331)
					tmp41 = (existingUsage != ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4_ARRAY);
				}
				else{
					HX_STACK_LINE(331)
					tmp41 = false;
				}
				HX_STACK_LINE(331)
				if ((tmp41)){
					HX_STACK_LINE(333)
					::String tmp42 = dr->toGLSL(null());		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(333)
					::String tmp43 = (tmp42 + HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(333)
					::String tmp44 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(333)
					::String tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(333)
					::String tmp46 = (tmp45 + HX_HCSTRING(" * ","\xd6","\x6c","\x18","\x00"));		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(333)
					::String tmp47 = sr2->toGLSL(false,null());		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(333)
					::String tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(333)
					::String tmp49 = (tmp48 + HX_HCSTRING("; // m34","\x93","\x14","\x64","\x51"));		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(333)
					sb->add(tmp49);
					HX_STACK_LINE(334)
					::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp50 = dr;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(334)
					map->addDR(tmp50,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
					HX_STACK_LINE(335)
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp51 = sr1;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(335)
					map->addSR(tmp51,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
					HX_STACK_LINE(336)
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp52 = sr2;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(336)
					map->addSR(tmp52,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::MATRIX_4_4,null());
				}
				else{
					HX_STACK_LINE(341)
					int tmp42 = sr2->sourceMask = (int)15;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(341)
					sr1->sourceMask = tmp42;
					HX_STACK_LINE(342)
					::String tmp43 = dr->toGLSL(null());		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(342)
					::String tmp44 = (tmp43 + HX_HCSTRING(" = vec3(","\xa6","\x67","\xad","\x0e"));		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(342)
					::String tmp45 = (tmp44 + HX_HCSTRING("dot(","\x7f","\xf5","\x6d","\x42"));		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(343)
					::String tmp46 = sr1->toGLSL(true,null());		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(342)
					::String tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(342)
					::String tmp48 = (tmp47 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(343)
					::String tmp49 = sr2->toGLSL(true,(int)0);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(342)
					::String tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(342)
					::String tmp51 = (tmp50 + HX_HCSTRING("), ","\xdd","\x42","\x1f","\x00"));		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(342)
					::String tmp52 = (tmp51 + HX_HCSTRING("dot(","\x7f","\xf5","\x6d","\x42"));		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(344)
					::String tmp53 = sr1->toGLSL(true,null());		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(342)
					::String tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(342)
					::String tmp55 = (tmp54 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(344)
					::String tmp56 = sr2->toGLSL(true,(int)1);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(342)
					::String tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(342)
					::String tmp58 = (tmp57 + HX_HCSTRING("),","\xe3","\x23","\x00","\x00"));		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(342)
					::String tmp59 = (tmp58 + HX_HCSTRING("dot(","\x7f","\xf5","\x6d","\x42"));		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(345)
					::String tmp60 = sr1->toGLSL(true,null());		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(342)
					::String tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(342)
					::String tmp62 = (tmp61 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(345)
					::String tmp63 = sr2->toGLSL(true,(int)2);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(342)
					::String tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(342)
					::String tmp65 = (tmp64 + HX_HCSTRING(")); // m34","\x73","\x18","\xfb","\xe5"));		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(342)
					sb->add(tmp65);
					HX_STACK_LINE(347)
					::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp66 = dr;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(347)
					map->addDR(tmp66,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
					HX_STACK_LINE(348)
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp67 = sr1;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(348)
					map->addSR(tmp67,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
					HX_STACK_LINE(349)
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp68 = sr2;		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(349)
					map->addSR(tmp68,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,(int)0);
					HX_STACK_LINE(350)
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp69 = sr2;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(350)
					map->addSR(tmp69,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,(int)1);
					HX_STACK_LINE(351)
					::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp70 = sr2;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(351)
					map->addSR(tmp70,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,(int)2);
				}
			}
			;break;
			case (int)39: {
				HX_STACK_LINE(360)
				sr1->sourceMask = (int)15;
				HX_STACK_LINE(361)
				::String tmp38 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(361)
				::String tmp39 = (HX_HCSTRING("if (any(lessThan(","\x0d","\xa8","\x4d","\x9b") + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(361)
				::String tmp40 = (tmp39 + HX_HCSTRING(", vec4(0)))) discard;","\x61","\xd7","\xc4","\xf0"));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(361)
				sb->add(tmp40);
				HX_STACK_LINE(362)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp41 = sr1;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(362)
				map->addSR(tmp41,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)40: {
				HX_STACK_LINE(368)
				cpp::Int64Struct tmp38 = source2;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(368)
				::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp39 = programType;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(368)
				::openfl::_internal::stage3D::_AGALConverter::SamplerRegister tmp40 = ::openfl::_internal::stage3D::_AGALConverter::SamplerRegister_obj::parse(tmp38,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(368)
				::openfl::_internal::stage3D::_AGALConverter::SamplerRegister sampler = tmp40;		HX_STACK_VAR(sampler,"sampler");
				HX_STACK_LINE(370)
				{
					HX_STACK_LINE(370)
					int _g = sampler->d;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(370)
					int tmp41 = _g;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(370)
					switch( (int)(tmp41)){
						case (int)0: {
							HX_STACK_LINE(374)
							sr1->sourceMask = (int)3;
							HX_STACK_LINE(375)
							::openfl::_internal::stage3D::_AGALConverter::SamplerRegister tmp42 = sampler;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(375)
							map->addSaR(tmp42,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::SAMPLER_2D);
							HX_STACK_LINE(376)
							::String tmp43 = dr->toGLSL(null());		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(376)
							::String tmp44 = (tmp43 + HX_HCSTRING(" = texture2D(","\x3e","\x55","\x2e","\x2f"));		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(376)
							::String tmp45 = sampler->toGLSL();		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(376)
							::String tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(376)
							::String tmp47 = (tmp46 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(376)
							::String tmp48 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(376)
							::String tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(376)
							::String tmp50 = (tmp49 + HX_HCSTRING("); // tex","\x55","\x61","\x13","\x1a"));		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(376)
							sb->add(tmp50);
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(380)
							sr1->sourceMask = (int)7;
							HX_STACK_LINE(381)
							::String tmp42 = dr->toGLSL(null());		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(381)
							::String tmp43 = (tmp42 + HX_HCSTRING(" = textureCube(","\x9b","\x4c","\xbc","\x01"));		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(381)
							::String tmp44 = sampler->toGLSL();		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(381)
							::String tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(381)
							::String tmp46 = (tmp45 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(381)
							::String tmp47 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(381)
							::String tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(381)
							::String tmp49 = (tmp48 + HX_HCSTRING("); // tex","\x55","\x61","\x13","\x1a"));		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(381)
							sb->add(tmp49);
							HX_STACK_LINE(382)
							::openfl::_internal::stage3D::_AGALConverter::SamplerRegister tmp50 = sampler;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(382)
							map->addSaR(tmp50,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::SAMPLER_CUBE);
						}
						;break;
					}
				}
				HX_STACK_LINE(387)
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp41 = dr;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(387)
				map->addDR(tmp41,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				HX_STACK_LINE(388)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp42 = sr1;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(388)
				map->addSR(tmp42,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
				HX_STACK_LINE(390)
				bool tmp43 = (samplerState != null());		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(390)
				if ((tmp43)){
					HX_STACK_LINE(393)
					::openfl::_internal::stage3D::SamplerState tmp44 = sampler->toSamplerState();		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(393)
					samplerState[sampler->n] = tmp44;
				}
			}
			;break;
			case (int)41: {
				HX_STACK_LINE(399)
				int tmp38 = sr2->sourceMask = (int)15;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(399)
				sr1->sourceMask = tmp38;
				HX_STACK_LINE(400)
				::String tmp39 = dr->toGLSL(null());		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(400)
				::String tmp40 = (tmp39 + HX_HCSTRING(" = vec4(greaterThanEqual(","\xaa","\xa3","\x51","\xec"));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(400)
				::String tmp41 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(400)
				::String tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(400)
				::String tmp43 = (tmp42 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(400)
				::String tmp44 = sr2->toGLSL(null(),null());		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(400)
				::String tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(400)
				::String tmp46 = (tmp45 + HX_HCSTRING("))","\xe0","\x23","\x00","\x00"));		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(400)
				::String tmp47 = dr->getWriteMask();		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(400)
				::String tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(400)
				::String tmp49 = (tmp48 + HX_HCSTRING("; // ste","\xe9","\xda","\x68","\x51"));		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(400)
				sb->add(tmp49);
				HX_STACK_LINE(401)
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp50 = dr;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(401)
				map->addDR(tmp50,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				HX_STACK_LINE(402)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp51 = sr1;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(402)
				map->addSR(tmp51,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
				HX_STACK_LINE(403)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp52 = sr2;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(403)
				map->addSR(tmp52,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)42: {
				HX_STACK_LINE(407)
				int tmp38 = sr2->sourceMask = (int)15;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(407)
				sr1->sourceMask = tmp38;
				HX_STACK_LINE(408)
				::String tmp39 = dr->toGLSL(null());		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(408)
				::String tmp40 = (tmp39 + HX_HCSTRING(" = vec4(lessThan(","\x69","\xee","\xb4","\x35"));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(408)
				::String tmp41 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(408)
				::String tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(408)
				::String tmp43 = (tmp42 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(408)
				::String tmp44 = sr2->toGLSL(null(),null());		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(408)
				::String tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(408)
				::String tmp46 = (tmp45 + HX_HCSTRING("))","\xe0","\x23","\x00","\x00"));		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(408)
				::String tmp47 = dr->getWriteMask();		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(408)
				::String tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(408)
				::String tmp49 = (tmp48 + HX_HCSTRING("; // slt","\x00","\xd4","\x68","\x51"));		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(408)
				sb->add(tmp49);
				HX_STACK_LINE(409)
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp50 = dr;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(409)
				map->addDR(tmp50,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				HX_STACK_LINE(410)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp51 = sr1;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(410)
				map->addSR(tmp51,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
				HX_STACK_LINE(411)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp52 = sr2;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(411)
				map->addSR(tmp52,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)44: {
				HX_STACK_LINE(415)
				int tmp38 = sr2->sourceMask = (int)15;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(415)
				sr1->sourceMask = tmp38;
				HX_STACK_LINE(416)
				::String tmp39 = dr->toGLSL(null());		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(416)
				::String tmp40 = (tmp39 + HX_HCSTRING(" = vec4(equal(","\x39","\x08","\x45","\xe1"));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(416)
				::String tmp41 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(416)
				::String tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(416)
				::String tmp43 = (tmp42 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(416)
				::String tmp44 = sr2->toGLSL(null(),null());		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(416)
				::String tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(416)
				::String tmp46 = (tmp45 + HX_HCSTRING("))","\xe0","\x23","\x00","\x00"));		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(416)
				::String tmp47 = dr->getWriteMask();		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(416)
				::String tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(416)
				::String tmp49 = (tmp48 + HX_HCSTRING("; // seq","\xe4","\xcd","\x68","\x51"));		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(416)
				sb->add(tmp49);
				HX_STACK_LINE(417)
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp50 = dr;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(417)
				map->addDR(tmp50,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				HX_STACK_LINE(418)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp51 = sr1;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(418)
				map->addSR(tmp51,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
				HX_STACK_LINE(419)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp52 = sr2;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(419)
				map->addSR(tmp52,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			case (int)45: {
				HX_STACK_LINE(423)
				int tmp38 = sr2->sourceMask = (int)15;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(423)
				sr1->sourceMask = tmp38;
				HX_STACK_LINE(424)
				::String tmp39 = dr->toGLSL(null());		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(424)
				::String tmp40 = (tmp39 + HX_HCSTRING(" = vec4(notEqual(","\x42","\xaa","\xf1","\x97"));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(424)
				::String tmp41 = sr1->toGLSL(null(),null());		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(424)
				::String tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(424)
				::String tmp43 = (tmp42 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(424)
				::String tmp44 = sr2->toGLSL(null(),null());		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(424)
				::String tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(424)
				::String tmp46 = (tmp45 + HX_HCSTRING("))","\xe0","\x23","\x00","\x00"));		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(424)
				::String tmp47 = dr->getWriteMask();		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(424)
				::String tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(424)
				::String tmp49 = (tmp48 + HX_HCSTRING("; // sne","\xaf","\xd5","\x68","\x51"));		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(424)
				sb->add(tmp49);
				HX_STACK_LINE(425)
				::openfl::_internal::stage3D::_AGALConverter::DestRegister tmp50 = dr;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(425)
				map->addDR(tmp50,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4);
				HX_STACK_LINE(426)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp51 = sr1;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(426)
				map->addSR(tmp51,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
				HX_STACK_LINE(427)
				::openfl::_internal::stage3D::_AGALConverter::SourceRegister tmp52 = sr2;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(427)
				map->addSR(tmp52,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4,null());
			}
			;break;
			default: {
				HX_STACK_LINE(432)
				::String tmp38 = (HX_HCSTRING("Opcode ","\x72","\x65","\x6e","\xe7") + opcode);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(432)
				::openfl::errors::IllegalOperationError tmp39 = ::openfl::errors::IllegalOperationError_obj::__new(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(432)
				HX_STACK_DO_THROW(tmp39);
			}
		}
		HX_STACK_LINE(436)
		sb->add(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
	}
	HX_STACK_LINE(440)
	int glslVersion = (int)100;		HX_STACK_VAR(glslVersion,"glslVersion");
	HX_STACK_LINE(443)
	::StringBuf tmp15 = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(443)
	::StringBuf glsl = tmp15;		HX_STACK_VAR(glsl,"glsl");
	HX_STACK_LINE(444)
	bool tmp16 = (programType == ::openfl::_internal::stage3D::_AGALConverter::ProgramType_obj::VERTEX);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(444)
	::String tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(444)
	if ((tmp16)){
		HX_STACK_LINE(444)
		tmp17 = HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1");
	}
	else{
		HX_STACK_LINE(444)
		tmp17 = HX_HCSTRING("fragment","\xd0","\x5f","\xe5","\xad");
	}
	HX_STACK_LINE(444)
	::String tmp18 = (HX_HCSTRING("// AGAL ","\xaf","\xbc","\x4a","\x8a") + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(444)
	::String tmp19 = (tmp18 + HX_HCSTRING(" shader\n","\x25","\xc5","\xd4","\x85"));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(444)
	glsl->add(tmp19);
	HX_STACK_LINE(445)
	::String tmp20 = (HX_HCSTRING("#version ","\x2b","\xa9","\xb9","\xad") + glslVersion);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(445)
	::String tmp21 = (tmp20 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(445)
	glsl->add(tmp21);
	HX_STACK_LINE(448)
	glsl->add(HX_HCSTRING("precision highp float;\n","\x57","\x4a","\xf7","\x14"));
	HX_STACK_LINE(450)
	::String tmp22 = map->toGLSL(false);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(450)
	glsl->add(tmp22);
	HX_STACK_LINE(452)
	bool tmp23 = (programType == ::openfl::_internal::stage3D::_AGALConverter::ProgramType_obj::VERTEX);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(452)
	if ((tmp23)){
		HX_STACK_LINE(455)
		glsl->add(HX_HCSTRING("uniform vec4 vcPositionScale;\n","\xcf","\xaa","\x4f","\x18"));
	}
	HX_STACK_LINE(459)
	glsl->add(HX_HCSTRING("void main() {\n","\x49","\xb0","\xbf","\xfb"));
	HX_STACK_LINE(460)
	::String tmp24 = map->toGLSL(true);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(460)
	glsl->add(tmp24);
	HX_STACK_LINE(461)
	::String tmp25 = sb->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(461)
	glsl->add(tmp25);
	HX_STACK_LINE(463)
	bool tmp26 = (programType == ::openfl::_internal::stage3D::_AGALConverter::ProgramType_obj::VERTEX);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(463)
	if ((tmp26)){
		HX_STACK_LINE(466)
		glsl->add(HX_HCSTRING("\tgl_Position *= vcPositionScale;\n","\x7c","\xad","\x85","\x8d"));
	}
	HX_STACK_LINE(470)
	glsl->add(HX_HCSTRING("}\n","\xed","\x6c","\x00","\x00"));
	HX_STACK_LINE(473)
	::String tmp27 = glsl->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(473)
	return tmp27;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AGALConverter_obj,convertToGLSL,return )


AGALConverter_obj::AGALConverter_obj()
{
}

bool AGALConverter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"readUInt64") ) { outValue = readUInt64_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"convertToGLSL") ) { outValue = convertToGLSL_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"prefixFromType") ) { outValue = prefixFromType_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AGALConverter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AGALConverter_obj::__mClass,"__mClass");
};

#endif

hx::Class AGALConverter_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("prefixFromType","\xf6","\x38","\xec","\xc8"),
	HX_HCSTRING("readUInt64","\x2e","\x21","\x8b","\x12"),
	HX_HCSTRING("convertToGLSL","\x4c","\x43","\x62","\xb5"),
	::String(null()) };

void AGALConverter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D.AGALConverter","\xa0","\x2d","\xe2","\x9e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AGALConverter_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AGALConverter_obj >;
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
