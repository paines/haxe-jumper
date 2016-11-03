#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
namespace openfl{
namespace geom{

Void ColorTransform_obj::__construct(hx::Null< Float >  __o_redMultiplier,hx::Null< Float >  __o_greenMultiplier,hx::Null< Float >  __o_blueMultiplier,hx::Null< Float >  __o_alphaMultiplier,hx::Null< Float >  __o_redOffset,hx::Null< Float >  __o_greenOffset,hx::Null< Float >  __o_blueOffset,hx::Null< Float >  __o_alphaOffset)
{
HX_STACK_FRAME("openfl.geom.ColorTransform","new",0x35d8b8af,"openfl.geom.ColorTransform.new","openfl/geom/ColorTransform.hx",24,0x850de941)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_redMultiplier,"redMultiplier")
HX_STACK_ARG(__o_greenMultiplier,"greenMultiplier")
HX_STACK_ARG(__o_blueMultiplier,"blueMultiplier")
HX_STACK_ARG(__o_alphaMultiplier,"alphaMultiplier")
HX_STACK_ARG(__o_redOffset,"redOffset")
HX_STACK_ARG(__o_greenOffset,"greenOffset")
HX_STACK_ARG(__o_blueOffset,"blueOffset")
HX_STACK_ARG(__o_alphaOffset,"alphaOffset")
Float redMultiplier = __o_redMultiplier.Default(1);
Float greenMultiplier = __o_greenMultiplier.Default(1);
Float blueMultiplier = __o_blueMultiplier.Default(1);
Float alphaMultiplier = __o_alphaMultiplier.Default(1);
Float redOffset = __o_redOffset.Default(0);
Float greenOffset = __o_greenOffset.Default(0);
Float blueOffset = __o_blueOffset.Default(0);
Float alphaOffset = __o_alphaOffset.Default(0);
{
	HX_STACK_LINE(26)
	this->redMultiplier = redMultiplier;
	HX_STACK_LINE(27)
	this->greenMultiplier = greenMultiplier;
	HX_STACK_LINE(28)
	this->blueMultiplier = blueMultiplier;
	HX_STACK_LINE(29)
	this->alphaMultiplier = alphaMultiplier;
	HX_STACK_LINE(30)
	this->redOffset = redOffset;
	HX_STACK_LINE(31)
	this->greenOffset = greenOffset;
	HX_STACK_LINE(32)
	this->blueOffset = blueOffset;
	HX_STACK_LINE(33)
	this->alphaOffset = alphaOffset;
}
;
	return null();
}

//ColorTransform_obj::~ColorTransform_obj() { }

Dynamic ColorTransform_obj::__CreateEmpty() { return  new ColorTransform_obj; }
hx::ObjectPtr< ColorTransform_obj > ColorTransform_obj::__new(hx::Null< Float >  __o_redMultiplier,hx::Null< Float >  __o_greenMultiplier,hx::Null< Float >  __o_blueMultiplier,hx::Null< Float >  __o_alphaMultiplier,hx::Null< Float >  __o_redOffset,hx::Null< Float >  __o_greenOffset,hx::Null< Float >  __o_blueOffset,hx::Null< Float >  __o_alphaOffset)
{  hx::ObjectPtr< ColorTransform_obj > _result_ = new ColorTransform_obj();
	_result_->__construct(__o_redMultiplier,__o_greenMultiplier,__o_blueMultiplier,__o_alphaMultiplier,__o_redOffset,__o_greenOffset,__o_blueOffset,__o_alphaOffset);
	return _result_;}

Dynamic ColorTransform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColorTransform_obj > _result_ = new ColorTransform_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _result_;}

Void ColorTransform_obj::concat( ::openfl::geom::ColorTransform second){
{
		HX_STACK_FRAME("openfl.geom.ColorTransform","concat",0x6a83fc25,"openfl.geom.ColorTransform.concat","openfl/geom/ColorTransform.hx",38,0x850de941)
		HX_STACK_THIS(this)
		HX_STACK_ARG(second,"second")
		HX_STACK_LINE(40)
		hx::MultEq(this->redMultiplier,second->redMultiplier);
		HX_STACK_LINE(41)
		hx::MultEq(this->greenMultiplier,second->greenMultiplier);
		HX_STACK_LINE(42)
		hx::MultEq(this->blueMultiplier,second->blueMultiplier);
		HX_STACK_LINE(43)
		hx::MultEq(this->alphaMultiplier,second->alphaMultiplier);
		HX_STACK_LINE(45)
		Float tmp = second->redMultiplier;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		Float tmp1 = this->redOffset;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		Float tmp3 = second->redOffset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(45)
		this->redOffset = tmp4;
		HX_STACK_LINE(46)
		Float tmp5 = second->greenMultiplier;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(46)
		Float tmp6 = this->greenOffset;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(46)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(46)
		Float tmp8 = second->greenOffset;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(46)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(46)
		this->greenOffset = tmp9;
		HX_STACK_LINE(47)
		Float tmp10 = second->blueMultiplier;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(47)
		Float tmp11 = this->blueOffset;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(47)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(47)
		Float tmp13 = second->blueOffset;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(47)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(47)
		this->blueOffset = tmp14;
		HX_STACK_LINE(48)
		Float tmp15 = second->alphaMultiplier;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(48)
		Float tmp16 = this->alphaOffset;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(48)
		Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(48)
		Float tmp18 = second->alphaOffset;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(48)
		Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(48)
		this->alphaOffset = tmp19;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,concat,(void))

::String ColorTransform_obj::toString( ){
	HX_STACK_FRAME("openfl.geom.ColorTransform","toString",0xe65269fd,"openfl.geom.ColorTransform.toString","openfl/geom/ColorTransform.hx",53,0x850de941)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	Float tmp = this->redMultiplier;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	::String tmp1 = (HX_HCSTRING("(redMultiplier=","\xf3","\xad","\x1c","\x05") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	::String tmp2 = (tmp1 + HX_HCSTRING(", greenMultiplier=","\x0d","\xc2","\x8d","\x70"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	Float tmp3 = this->greenMultiplier;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(55)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(55)
	::String tmp5 = (tmp4 + HX_HCSTRING(", blueMultiplier=","\x2e","\x6d","\xc3","\x3b"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(55)
	Float tmp6 = this->blueMultiplier;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(55)
	::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(55)
	::String tmp8 = (tmp7 + HX_HCSTRING(", alphaMultiplier=","\x52","\x89","\x82","\x1f"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(55)
	Float tmp9 = this->alphaMultiplier;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(55)
	::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(55)
	::String tmp11 = (tmp10 + HX_HCSTRING(", redOffset=","\x6d","\xd3","\x86","\x3f"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(55)
	Float tmp12 = this->redOffset;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(55)
	::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(55)
	::String tmp14 = (tmp13 + HX_HCSTRING(", greenOffset=","\x3b","\xd5","\xed","\x53"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(55)
	Float tmp15 = this->greenOffset;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(55)
	::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(55)
	::String tmp17 = (tmp16 + HX_HCSTRING(", blueOffset=","\xdc","\x1b","\x85","\x47"));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(55)
	Float tmp18 = this->blueOffset;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(55)
	::String tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(55)
	::String tmp20 = (tmp19 + HX_HCSTRING(", alphaOffset=","\x00","\x56","\xb2","\x98"));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(55)
	Float tmp21 = this->alphaOffset;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(55)
	::String tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(55)
	::String tmp23 = (tmp22 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(55)
	return tmp23;
}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,toString,return )

::openfl::geom::ColorTransform ColorTransform_obj::__clone( ){
	HX_STACK_FRAME("openfl.geom.ColorTransform","__clone",0x6d82280c,"openfl.geom.ColorTransform.__clone","openfl/geom/ColorTransform.hx",60,0x850de941)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	Float tmp = this->redMultiplier;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	Float tmp1 = this->greenMultiplier;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	Float tmp2 = this->blueMultiplier;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(62)
	Float tmp3 = this->alphaMultiplier;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(62)
	Float tmp4 = this->redOffset;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(62)
	Float tmp5 = this->greenOffset;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(62)
	Float tmp6 = this->blueOffset;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(62)
	Float tmp7 = this->alphaOffset;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(62)
	::openfl::geom::ColorTransform tmp8 = ::openfl::geom::ColorTransform_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(62)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,__clone,return )

Void ColorTransform_obj::__combine( ::openfl::geom::ColorTransform ct){
{
		HX_STACK_FRAME("openfl.geom.ColorTransform","__combine",0x74bf08ee,"openfl.geom.ColorTransform.__combine","openfl/geom/ColorTransform.hx",67,0x850de941)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ct,"ct")
		HX_STACK_LINE(69)
		hx::MultEq(this->redMultiplier,ct->redMultiplier);
		HX_STACK_LINE(70)
		hx::MultEq(this->greenMultiplier,ct->greenMultiplier);
		HX_STACK_LINE(71)
		hx::MultEq(this->blueMultiplier,ct->blueMultiplier);
		HX_STACK_LINE(72)
		hx::MultEq(this->alphaMultiplier,ct->alphaMultiplier);
		HX_STACK_LINE(74)
		hx::AddEq(this->redOffset,ct->redOffset);
		HX_STACK_LINE(75)
		hx::AddEq(this->greenOffset,ct->greenOffset);
		HX_STACK_LINE(76)
		hx::AddEq(this->blueOffset,ct->blueOffset);
		HX_STACK_LINE(77)
		hx::AddEq(this->alphaOffset,ct->alphaOffset);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,__combine,(void))

bool ColorTransform_obj::__equals( ::openfl::geom::ColorTransform ct,Dynamic __o_skipAlphaMultiplier){
Dynamic skipAlphaMultiplier = __o_skipAlphaMultiplier.Default(false);
	HX_STACK_FRAME("openfl.geom.ColorTransform","__equals",0x1605f2b0,"openfl.geom.ColorTransform.__equals","openfl/geom/ColorTransform.hx",82,0x850de941)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ct,"ct")
	HX_STACK_ARG(skipAlphaMultiplier,"skipAlphaMultiplier")
{
		HX_STACK_LINE(84)
		bool tmp = (ct != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(84)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		if ((tmp1)){
			HX_STACK_LINE(84)
			Float tmp3 = this->redMultiplier;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(84)
			Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(84)
			Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(84)
			Float tmp6 = ct->redMultiplier;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(84)
			tmp2 = (tmp5 == tmp6);
		}
		else{
			HX_STACK_LINE(84)
			tmp2 = false;
		}
		HX_STACK_LINE(84)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(84)
		if ((tmp3)){
			HX_STACK_LINE(84)
			Float tmp5 = this->greenMultiplier;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(84)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(84)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(84)
			Float tmp8 = ct->greenMultiplier;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(84)
			tmp4 = (tmp7 == tmp8);
		}
		else{
			HX_STACK_LINE(84)
			tmp4 = false;
		}
		HX_STACK_LINE(84)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(84)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(84)
		if ((tmp5)){
			HX_STACK_LINE(84)
			Float tmp7 = this->blueMultiplier;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(84)
			Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(84)
			Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(84)
			Float tmp10 = ct->blueMultiplier;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(84)
			tmp6 = (tmp9 == tmp10);
		}
		else{
			HX_STACK_LINE(84)
			tmp6 = false;
		}
		HX_STACK_LINE(84)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(84)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(84)
		if ((tmp7)){
			HX_STACK_LINE(84)
			Dynamic tmp9 = skipAlphaMultiplier;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(84)
			Dynamic tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(84)
			Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(84)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(84)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(84)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(84)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(84)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(84)
			if ((tmp16)){
				HX_STACK_LINE(84)
				Float tmp17 = this->alphaMultiplier;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(84)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(84)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(84)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(84)
				Float tmp21 = ct->alphaMultiplier;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(84)
				tmp8 = (tmp20 == tmp21);
			}
			else{
				HX_STACK_LINE(84)
				tmp8 = true;
			}
		}
		else{
			HX_STACK_LINE(84)
			tmp8 = false;
		}
		HX_STACK_LINE(84)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(84)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(84)
		if ((tmp9)){
			HX_STACK_LINE(84)
			Float tmp11 = this->redOffset;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(84)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(84)
			Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(84)
			Float tmp14 = ct->redOffset;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(84)
			tmp10 = (tmp13 == tmp14);
		}
		else{
			HX_STACK_LINE(84)
			tmp10 = false;
		}
		HX_STACK_LINE(84)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(84)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(84)
		if ((tmp11)){
			HX_STACK_LINE(84)
			Float tmp13 = this->greenOffset;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(84)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(84)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(84)
			Float tmp16 = ct->greenOffset;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(84)
			tmp12 = (tmp15 == tmp16);
		}
		else{
			HX_STACK_LINE(84)
			tmp12 = false;
		}
		HX_STACK_LINE(84)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(84)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(84)
		if ((tmp13)){
			HX_STACK_LINE(84)
			Float tmp15 = this->blueOffset;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(84)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(84)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(84)
			Float tmp18 = ct->blueOffset;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(84)
			tmp14 = (tmp17 == tmp18);
		}
		else{
			HX_STACK_LINE(84)
			tmp14 = false;
		}
		HX_STACK_LINE(84)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(84)
		if ((tmp14)){
			HX_STACK_LINE(84)
			Float tmp16 = this->alphaOffset;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(84)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(84)
			Float tmp18 = ct->alphaOffset;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(84)
			tmp15 = (tmp17 == tmp18);
		}
		else{
			HX_STACK_LINE(84)
			tmp15 = false;
		}
		HX_STACK_LINE(84)
		return tmp15;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ColorTransform_obj,__equals,return )

bool ColorTransform_obj::__isDefault( ){
	HX_STACK_FRAME("openfl.geom.ColorTransform","__isDefault",0x071aee26,"openfl.geom.ColorTransform.__isDefault","openfl/geom/ColorTransform.hx",89,0x850de941)
	HX_STACK_THIS(this)
	HX_STACK_LINE(91)
	Float tmp = this->redMultiplier;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	bool tmp1 = (tmp == (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(91)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(91)
	if ((tmp2)){
		HX_STACK_LINE(91)
		Float tmp4 = this->greenMultiplier;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(91)
		Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(91)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(91)
		tmp3 = (tmp6 == (int)1);
	}
	else{
		HX_STACK_LINE(91)
		tmp3 = false;
	}
	HX_STACK_LINE(91)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(91)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(91)
	if ((tmp4)){
		HX_STACK_LINE(91)
		Float tmp6 = this->blueMultiplier;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(91)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(91)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(91)
		tmp5 = (tmp8 == (int)1);
	}
	else{
		HX_STACK_LINE(91)
		tmp5 = false;
	}
	HX_STACK_LINE(91)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(91)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(91)
	if ((tmp6)){
		HX_STACK_LINE(91)
		Float tmp8 = this->alphaMultiplier;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(91)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(91)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(91)
		tmp7 = (tmp10 == (int)1);
	}
	else{
		HX_STACK_LINE(91)
		tmp7 = false;
	}
	HX_STACK_LINE(91)
	bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(91)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(91)
	if ((tmp8)){
		HX_STACK_LINE(91)
		Float tmp10 = this->redOffset;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(91)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(91)
		Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(91)
		tmp9 = (tmp12 == (int)0);
	}
	else{
		HX_STACK_LINE(91)
		tmp9 = false;
	}
	HX_STACK_LINE(91)
	bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(91)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(91)
	if ((tmp10)){
		HX_STACK_LINE(91)
		Float tmp12 = this->greenOffset;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(91)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(91)
		Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(91)
		tmp11 = (tmp14 == (int)0);
	}
	else{
		HX_STACK_LINE(91)
		tmp11 = false;
	}
	HX_STACK_LINE(91)
	bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(91)
	bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(91)
	if ((tmp12)){
		HX_STACK_LINE(91)
		Float tmp14 = this->blueOffset;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(91)
		Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(91)
		Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(91)
		tmp13 = (tmp16 == (int)0);
	}
	else{
		HX_STACK_LINE(91)
		tmp13 = false;
	}
	HX_STACK_LINE(91)
	bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(91)
	if ((tmp13)){
		HX_STACK_LINE(91)
		Float tmp15 = this->alphaOffset;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(91)
		Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(91)
		tmp14 = (tmp16 == (int)0);
	}
	else{
		HX_STACK_LINE(91)
		tmp14 = false;
	}
	HX_STACK_LINE(91)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,__isDefault,return )

int ColorTransform_obj::get_color( ){
	HX_STACK_FRAME("openfl.geom.ColorTransform","get_color",0x07485b49,"openfl.geom.ColorTransform.get_color","openfl/geom/ColorTransform.hx",103,0x850de941)
	HX_STACK_THIS(this)
	HX_STACK_LINE(105)
	Float tmp = this->redOffset;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(105)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(105)
	int tmp2 = (int(tmp1) << int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(105)
	Float tmp3 = this->greenOffset;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(105)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(105)
	int tmp5 = (int(tmp4) << int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(105)
	int tmp6 = (int(tmp2) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(105)
	Float tmp7 = this->blueOffset;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(105)
	int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(105)
	int tmp9 = (int(tmp6) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(105)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,get_color,return )

int ColorTransform_obj::set_color( int value){
	HX_STACK_FRAME("openfl.geom.ColorTransform","set_color",0xea994755,"openfl.geom.ColorTransform.set_color","openfl/geom/ColorTransform.hx",110,0x850de941)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(112)
	int tmp = (int(value) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(112)
	this->redOffset = tmp1;
	HX_STACK_LINE(113)
	int tmp2 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(113)
	int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(113)
	this->greenOffset = tmp3;
	HX_STACK_LINE(114)
	int tmp4 = (int(value) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(114)
	this->blueOffset = tmp4;
	HX_STACK_LINE(116)
	this->redMultiplier = (int)0;
	HX_STACK_LINE(117)
	this->greenMultiplier = (int)0;
	HX_STACK_LINE(118)
	this->blueMultiplier = (int)0;
	HX_STACK_LINE(120)
	int tmp5 = this->get_color();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(120)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,set_color,return )

::lime::utils::ArrayBufferView ColorTransform_obj::__toLimeColorMatrix( ){
	HX_STACK_FRAME("openfl.geom.ColorTransform","__toLimeColorMatrix",0x55c98ae3,"openfl.geom.ColorTransform.__toLimeColorMatrix","openfl/geom/ColorTransform.hx",125,0x850de941)
	HX_STACK_THIS(this)
	HX_STACK_LINE(127)
	::lime::utils::ArrayBufferView tmp = ::openfl::geom::ColorTransform_obj::__limeColorMatrix;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(127)
	if ((tmp1)){
		HX_STACK_LINE(129)
		::lime::utils::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(129)
			bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(129)
			if ((tmp3)){
				HX_STACK_LINE(129)
				::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new((int)20,(int)8);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(129)
				this1 = tmp4;
			}
			else{
				HX_STACK_LINE(129)
				bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(129)
				if ((tmp4)){
					HX_STACK_LINE(129)
					::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(129)
					{
						HX_STACK_LINE(129)
						::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(129)
						::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(129)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(129)
						int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(129)
						_this->length = tmp7;
						HX_STACK_LINE(129)
						int tmp8 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(129)
						_this->byteLength = tmp8;
						HX_STACK_LINE(129)
						::haxe::io::Bytes tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(129)
						{
							HX_STACK_LINE(129)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(129)
							int tmp10 = _this->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(129)
							::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(129)
							this2 = tmp11;
							HX_STACK_LINE(129)
							tmp9 = this2;
						}
						HX_STACK_LINE(129)
						_this->buffer = tmp9;
						HX_STACK_LINE(129)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(129)
						tmp5 = _this;
					}
					HX_STACK_LINE(129)
					this1 = tmp5;
				}
				else{
					HX_STACK_LINE(129)
					bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(129)
					if ((tmp5)){
						HX_STACK_LINE(129)
						::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(129)
						{
							HX_STACK_LINE(129)
							::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(129)
							::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(129)
							cpp::ArrayBase array = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(array,"array");
							HX_STACK_LINE(129)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(129)
							_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
							HX_STACK_LINE(129)
							int tmp8 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(129)
							_this->byteLength = tmp8;
							HX_STACK_LINE(129)
							::haxe::io::Bytes tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(129)
							{
								HX_STACK_LINE(129)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(129)
								int tmp10 = _this->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(129)
								::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(129)
								this2 = tmp11;
								HX_STACK_LINE(129)
								tmp9 = this2;
							}
							HX_STACK_LINE(129)
							_this->buffer = tmp9;
							HX_STACK_LINE(129)
							_this->copyFromArray(((Array< Float >)(array)),null());
							HX_STACK_LINE(129)
							tmp6 = _this;
						}
						HX_STACK_LINE(129)
						this1 = tmp6;
					}
					else{
						HX_STACK_LINE(129)
						bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(129)
						if ((tmp6)){
							HX_STACK_LINE(129)
							::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(129)
							{
								HX_STACK_LINE(129)
								::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(129)
								::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(129)
								::haxe::io::Bytes tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(129)
								::haxe::io::Bytes srcData = tmp9;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(129)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(129)
								int srcLength = tmp10;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(129)
								int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(129)
								int srcByteOffset = tmp11;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(129)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(129)
								int srcElementSize = tmp12;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(129)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(129)
								int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(129)
								int tmp14 = _this->type;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(129)
								bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(129)
								if ((tmp15)){
									HX_STACK_LINE(129)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(129)
									int tmp16 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(129)
									int cloneLength = tmp16;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(129)
									::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(129)
									{
										HX_STACK_LINE(129)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(129)
										int tmp18 = cloneLength;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(129)
										::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(129)
										this2 = tmp19;
										HX_STACK_LINE(129)
										tmp17 = this2;
									}
									HX_STACK_LINE(129)
									_this->buffer = tmp17;
									HX_STACK_LINE(129)
									::haxe::io::Bytes tmp18 = srcData;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(129)
									int tmp19 = srcByteOffset;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(129)
									int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(129)
									_this->buffer->blit((int)0,tmp18,tmp19,tmp20);
								}
								else{
									HX_STACK_LINE(129)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(129)
								int tmp16 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(129)
								_this->byteLength = tmp16;
								HX_STACK_LINE(129)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(129)
								_this->length = srcLength;
								HX_STACK_LINE(129)
								tmp7 = _this;
							}
							HX_STACK_LINE(129)
							this1 = tmp7;
						}
						else{
							HX_STACK_LINE(129)
							bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(129)
							if ((tmp7)){
								HX_STACK_LINE(129)
								::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(129)
								{
									HX_STACK_LINE(129)
									::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(129)
									::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(129)
									bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(129)
									if ((tmp10)){
										HX_STACK_LINE(129)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(129)
									int tmp11 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(129)
									bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(129)
									if ((tmp12)){
										HX_STACK_LINE(129)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(129)
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(129)
									int bufferByteLength = tmp13;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(129)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(129)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(129)
									bool tmp14 = true;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(129)
									if ((tmp14)){
										HX_STACK_LINE(129)
										int tmp15 = bufferByteLength;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(129)
										newByteLength = tmp15;
										HX_STACK_LINE(129)
										int tmp16 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(129)
										bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(129)
										if ((tmp17)){
											HX_STACK_LINE(129)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(129)
										bool tmp18 = (newByteLength < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(129)
										if ((tmp18)){
											HX_STACK_LINE(129)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(129)
										int tmp15 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(129)
										newByteLength = tmp15;
										HX_STACK_LINE(129)
										int tmp16 = newByteLength;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(129)
										int newRange = tmp16;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(129)
										bool tmp17 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(129)
										if ((tmp17)){
											HX_STACK_LINE(129)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(129)
									_this->buffer = null();
									HX_STACK_LINE(129)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(129)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(129)
									Float tmp15 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(129)
									int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(129)
									_this->length = tmp16;
									HX_STACK_LINE(129)
									tmp8 = _this;
								}
								HX_STACK_LINE(129)
								this1 = tmp8;
							}
							else{
								HX_STACK_LINE(129)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
							}
						}
					}
				}
			}
			HX_STACK_LINE(129)
			tmp2 = this1;
		}
		HX_STACK_LINE(129)
		::openfl::geom::ColorTransform_obj::__limeColorMatrix = tmp2;
	}
	HX_STACK_LINE(133)
	{
		HX_STACK_LINE(133)
		::lime::utils::ArrayBufferView tmp2 = ::openfl::geom::ColorTransform_obj::__limeColorMatrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(133)
		::lime::utils::ArrayBufferView this1 = tmp2;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(133)
		Float tmp3 = this->redMultiplier;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(133)
		Float val = tmp3;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(133)
		::__hxcpp_memory_set_float(this1->buffer->b,this1->byteOffset,val);
		HX_STACK_LINE(133)
		val;
	}
	HX_STACK_LINE(134)
	{
		HX_STACK_LINE(134)
		::lime::utils::ArrayBufferView tmp2 = ::openfl::geom::ColorTransform_obj::__limeColorMatrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(134)
		::lime::utils::ArrayBufferView this1 = tmp2;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(134)
		Float tmp3 = this->redOffset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(134)
		Float tmp4 = (Float(tmp3) / Float((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(134)
		Float val = tmp4;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(134)
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)16),val);
		HX_STACK_LINE(134)
		val;
	}
	HX_STACK_LINE(135)
	{
		HX_STACK_LINE(135)
		::lime::utils::ArrayBufferView tmp2 = ::openfl::geom::ColorTransform_obj::__limeColorMatrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(135)
		::lime::utils::ArrayBufferView this1 = tmp2;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(135)
		Float tmp3 = this->greenMultiplier;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(135)
		Float val = tmp3;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(135)
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)24),val);
		HX_STACK_LINE(135)
		val;
	}
	HX_STACK_LINE(136)
	{
		HX_STACK_LINE(136)
		::lime::utils::ArrayBufferView tmp2 = ::openfl::geom::ColorTransform_obj::__limeColorMatrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(136)
		::lime::utils::ArrayBufferView this1 = tmp2;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(136)
		Float tmp3 = this->greenOffset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(136)
		Float tmp4 = (Float(tmp3) / Float((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(136)
		Float val = tmp4;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(136)
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)36),val);
		HX_STACK_LINE(136)
		val;
	}
	HX_STACK_LINE(137)
	{
		HX_STACK_LINE(137)
		::lime::utils::ArrayBufferView tmp2 = ::openfl::geom::ColorTransform_obj::__limeColorMatrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(137)
		::lime::utils::ArrayBufferView this1 = tmp2;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(137)
		Float tmp3 = this->blueMultiplier;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(137)
		Float val = tmp3;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(137)
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)48),val);
		HX_STACK_LINE(137)
		val;
	}
	HX_STACK_LINE(138)
	{
		HX_STACK_LINE(138)
		::lime::utils::ArrayBufferView tmp2 = ::openfl::geom::ColorTransform_obj::__limeColorMatrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(138)
		::lime::utils::ArrayBufferView this1 = tmp2;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(138)
		Float tmp3 = this->blueOffset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(138)
		Float tmp4 = (Float(tmp3) / Float((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(138)
		Float val = tmp4;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(138)
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)56),val);
		HX_STACK_LINE(138)
		val;
	}
	HX_STACK_LINE(139)
	{
		HX_STACK_LINE(139)
		::lime::utils::ArrayBufferView tmp2 = ::openfl::geom::ColorTransform_obj::__limeColorMatrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(139)
		::lime::utils::ArrayBufferView this1 = tmp2;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(139)
		Float tmp3 = this->alphaMultiplier;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(139)
		Float val = tmp3;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(139)
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)72),val);
		HX_STACK_LINE(139)
		val;
	}
	HX_STACK_LINE(140)
	{
		HX_STACK_LINE(140)
		::lime::utils::ArrayBufferView tmp2 = ::openfl::geom::ColorTransform_obj::__limeColorMatrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(140)
		::lime::utils::ArrayBufferView this1 = tmp2;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(140)
		Float tmp3 = this->alphaOffset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(140)
		Float tmp4 = (Float(tmp3) / Float((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(140)
		Float val = tmp4;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(140)
		::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (int)76),val);
		HX_STACK_LINE(140)
		val;
	}
	HX_STACK_LINE(142)
	::lime::utils::ArrayBufferView tmp2 = ::openfl::geom::ColorTransform_obj::__limeColorMatrix;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(142)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,__toLimeColorMatrix,return )

::lime::utils::ArrayBufferView ColorTransform_obj::__limeColorMatrix;


ColorTransform_obj::ColorTransform_obj()
{
}

Dynamic ColorTransform_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return get_color(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return concat_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__clone") ) { return __clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"__equals") ) { return __equals_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"redOffset") ) { return redOffset; }
		if (HX_FIELD_EQ(inName,"__combine") ) { return __combine_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blueOffset") ) { return blueOffset; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alphaOffset") ) { return alphaOffset; }
		if (HX_FIELD_EQ(inName,"greenOffset") ) { return greenOffset; }
		if (HX_FIELD_EQ(inName,"__isDefault") ) { return __isDefault_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"redMultiplier") ) { return redMultiplier; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"blueMultiplier") ) { return blueMultiplier; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"alphaMultiplier") ) { return alphaMultiplier; }
		if (HX_FIELD_EQ(inName,"greenMultiplier") ) { return greenMultiplier; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__toLimeColorMatrix") ) { return __toLimeColorMatrix_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ColorTransform_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"__limeColorMatrix") ) { outValue = __limeColorMatrix; return true;  }
	}
	return false;
}

Dynamic ColorTransform_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return set_color(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"redOffset") ) { redOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blueOffset") ) { blueOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alphaOffset") ) { alphaOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"greenOffset") ) { greenOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"redMultiplier") ) { redMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"blueMultiplier") ) { blueMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"alphaMultiplier") ) { alphaMultiplier=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"greenMultiplier") ) { greenMultiplier=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ColorTransform_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"__limeColorMatrix") ) { __limeColorMatrix=ioValue.Cast< ::lime::utils::ArrayBufferView >(); return true; }
	}
	return false;
}

void ColorTransform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alphaMultiplier","\x7f","\xb4","\x82","\x9a"));
	outFields->push(HX_HCSTRING("alphaOffset","\x91","\x8d","\x43","\xd0"));
	outFields->push(HX_HCSTRING("blueMultiplier","\xbb","\x32","\x96","\xcf"));
	outFields->push(HX_HCSTRING("blueOffset","\xcd","\x3d","\x34","\xbb"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("greenMultiplier","\x24","\x2c","\x40","\x6f"));
	outFields->push(HX_HCSTRING("greenOffset","\xb6","\x0e","\xd9","\xb7"));
	outFields->push(HX_HCSTRING("redMultiplier","\x32","\xf4","\xe9","\x4e"));
	outFields->push(HX_HCSTRING("redOffset","\xc4","\x37","\x9e","\x53"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,alphaMultiplier),HX_HCSTRING("alphaMultiplier","\x7f","\xb4","\x82","\x9a")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,alphaOffset),HX_HCSTRING("alphaOffset","\x91","\x8d","\x43","\xd0")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,blueMultiplier),HX_HCSTRING("blueMultiplier","\xbb","\x32","\x96","\xcf")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,blueOffset),HX_HCSTRING("blueOffset","\xcd","\x3d","\x34","\xbb")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,greenMultiplier),HX_HCSTRING("greenMultiplier","\x24","\x2c","\x40","\x6f")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,greenOffset),HX_HCSTRING("greenOffset","\xb6","\x0e","\xd9","\xb7")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,redMultiplier),HX_HCSTRING("redMultiplier","\x32","\xf4","\xe9","\x4e")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,redOffset),HX_HCSTRING("redOffset","\xc4","\x37","\x9e","\x53")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(void *) &ColorTransform_obj::__limeColorMatrix,HX_HCSTRING("__limeColorMatrix","\xcf","\xd7","\x37","\x34")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("alphaMultiplier","\x7f","\xb4","\x82","\x9a"),
	HX_HCSTRING("alphaOffset","\x91","\x8d","\x43","\xd0"),
	HX_HCSTRING("blueMultiplier","\xbb","\x32","\x96","\xcf"),
	HX_HCSTRING("blueOffset","\xcd","\x3d","\x34","\xbb"),
	HX_HCSTRING("greenMultiplier","\x24","\x2c","\x40","\x6f"),
	HX_HCSTRING("greenOffset","\xb6","\x0e","\xd9","\xb7"),
	HX_HCSTRING("redMultiplier","\x32","\xf4","\xe9","\x4e"),
	HX_HCSTRING("redOffset","\xc4","\x37","\x9e","\x53"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("__clone","\x3d","\x6c","\xc1","\xb2"),
	HX_HCSTRING("__combine","\x5f","\x7b","\x7c","\xfb"),
	HX_HCSTRING("__equals","\x5f","\x59","\x22","\x68"),
	HX_HCSTRING("__isDefault","\xd7","\x9e","\xee","\xcd"),
	HX_HCSTRING("get_color","\xba","\xcd","\x05","\x8e"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("__toLimeColorMatrix","\x94","\xd4","\xb6","\x78"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorTransform_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ColorTransform_obj::__limeColorMatrix,"__limeColorMatrix");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorTransform_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ColorTransform_obj::__limeColorMatrix,"__limeColorMatrix");
};

#endif

hx::Class ColorTransform_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__limeColorMatrix","\xcf","\xd7","\x37","\x34"),
	::String(null()) };

void ColorTransform_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.geom.ColorTransform","\x3d","\x35","\x6d","\x80");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ColorTransform_obj::__GetStatic;
	__mClass->mSetStaticField = &ColorTransform_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColorTransform_obj >;
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
} // end namespace geom
