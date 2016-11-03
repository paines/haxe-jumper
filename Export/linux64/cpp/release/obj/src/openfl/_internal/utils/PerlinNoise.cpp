#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl__internal_utils_PerlinNoise
#include <openfl/_internal/utils/PerlinNoise.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
namespace openfl{
namespace _internal{
namespace utils{

Void PerlinNoise_obj::__construct(Dynamic seed,Dynamic octaves,Dynamic falloff)
{
HX_STACK_FRAME("openfl._internal.utils.PerlinNoise","new",0x0294f3cb,"openfl._internal.utils.PerlinNoise.new","openfl/_internal/utils/PerlinNoise.hx",85,0x13a5c608)
HX_STACK_THIS(this)
HX_STACK_ARG(seed,"seed")
HX_STACK_ARG(octaves,"octaves")
HX_STACK_ARG(falloff,"falloff")
{
	HX_STACK_LINE(86)
	bool tmp = (seed == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	if ((tmp)){
		HX_STACK_LINE(86)
		seed = (int)123;
	}
	HX_STACK_LINE(87)
	bool tmp1 = (falloff == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(87)
	if ((tmp1)){
		HX_STACK_LINE(87)
		falloff = ((Float).5);
	}
	HX_STACK_LINE(88)
	bool tmp2 = (octaves == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(88)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(88)
	if ((tmp2)){
		HX_STACK_LINE(88)
		tmp3 = (int)4;
	}
	else{
		HX_STACK_LINE(88)
		tmp3 = octaves;
	}
	HX_STACK_LINE(88)
	this->octaves = tmp3;
	HX_STACK_LINE(89)
	Float tmp4 = ((Float)0.015625);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(89)
	this->baseFactor = tmp4;
	HX_STACK_LINE(90)
	Dynamic tmp5 = seed;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(90)
	this->seedOffset(tmp5);
	HX_STACK_LINE(91)
	Dynamic tmp6 = falloff;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(91)
	this->octFreqPers(tmp6);
}
;
	return null();
}

//PerlinNoise_obj::~PerlinNoise_obj() { }

Dynamic PerlinNoise_obj::__CreateEmpty() { return  new PerlinNoise_obj; }
hx::ObjectPtr< PerlinNoise_obj > PerlinNoise_obj::__new(Dynamic seed,Dynamic octaves,Dynamic falloff)
{  hx::ObjectPtr< PerlinNoise_obj > _result_ = new PerlinNoise_obj();
	_result_->__construct(seed,octaves,falloff);
	return _result_;}

Dynamic PerlinNoise_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PerlinNoise_obj > _result_ = new PerlinNoise_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void PerlinNoise_obj::fill( ::openfl::display::BitmapData bitmap,Float _x,Float _y,Float _z,Dynamic _){
{
		HX_STACK_FRAME("openfl._internal.utils.PerlinNoise","fill",0x3a79a8b8,"openfl._internal.utils.PerlinNoise.fill","openfl/_internal/utils/PerlinNoise.hx",94,0x13a5c608)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bitmap,"bitmap")
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_z,"_z")
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(96)
		Float baseX;		HX_STACK_VAR(baseX,"baseX");
		HX_STACK_LINE(98)
		Float tmp = _x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		Float tmp1 = this->baseFactor;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(98)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(98)
		Float tmp3 = this->iXoffset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(98)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(98)
		baseX = tmp4;
		HX_STACK_LINE(99)
		Float tmp5 = _y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(99)
		Float tmp6 = this->baseFactor;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(99)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(99)
		Float tmp8 = this->iYoffset;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(99)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(99)
		_y = tmp9;
		HX_STACK_LINE(100)
		Float tmp10 = _z;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(100)
		Float tmp11 = this->baseFactor;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(100)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(100)
		Float tmp13 = this->iZoffset;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(100)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(100)
		_z = tmp14;
		HX_STACK_LINE(102)
		int width = bitmap->width;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(103)
		int height = bitmap->height;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(105)
		Array< int > p = ::openfl::_internal::utils::PerlinNoise_obj::P;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(106)
		int tmp15 = this->octaves;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(106)
		int octaves = tmp15;		HX_STACK_VAR(octaves,"octaves");
		HX_STACK_LINE(107)
		Array< Float > aOctFreq = this->aOctFreq;		HX_STACK_VAR(aOctFreq,"aOctFreq");
		HX_STACK_LINE(108)
		Array< Float > aOctPers = this->aOctPers;		HX_STACK_VAR(aOctPers,"aOctPers");
		HX_STACK_LINE(110)
		{
			HX_STACK_LINE(110)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(110)
			while((true)){
				HX_STACK_LINE(110)
				bool tmp16 = (_g < height);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(110)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(110)
				if ((tmp17)){
					HX_STACK_LINE(110)
					break;
				}
				HX_STACK_LINE(110)
				int tmp18 = (_g)++;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(110)
				int py = tmp18;		HX_STACK_VAR(py,"py");
				HX_STACK_LINE(112)
				_x = baseX;
				HX_STACK_LINE(114)
				{
					HX_STACK_LINE(114)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(114)
					while((true)){
						HX_STACK_LINE(114)
						bool tmp19 = (_g1 < width);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(114)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(114)
						if ((tmp20)){
							HX_STACK_LINE(114)
							break;
						}
						HX_STACK_LINE(114)
						int tmp21 = (_g1)++;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(114)
						int px = tmp21;		HX_STACK_VAR(px,"px");
						HX_STACK_LINE(116)
						Float s = ((Float)0.);		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(118)
						{
							HX_STACK_LINE(118)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(118)
							while((true)){
								HX_STACK_LINE(118)
								bool tmp22 = (_g2 < octaves);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(118)
								bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(118)
								if ((tmp23)){
									HX_STACK_LINE(118)
									break;
								}
								HX_STACK_LINE(118)
								int tmp24 = (_g2)++;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(118)
								int i = tmp24;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(120)
								Float tmp25 = aOctFreq->__get(i);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(120)
								Float fFreq = tmp25;		HX_STACK_VAR(fFreq,"fFreq");
								HX_STACK_LINE(121)
								Float tmp26 = aOctPers->__get(i);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(121)
								Float fPers = tmp26;		HX_STACK_VAR(fPers,"fPers");
								HX_STACK_LINE(123)
								Float tmp27 = (_x * fFreq);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(123)
								Float x = tmp27;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(124)
								Float tmp28 = (_y * fFreq);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(124)
								Float y = tmp28;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(125)
								Float tmp29 = (_z * fFreq);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(125)
								Float z = tmp29;		HX_STACK_VAR(z,"z");
								HX_STACK_LINE(127)
								Float tmp30 = x;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(127)
								Float tmp31 = hx::Mod(x,(int)1);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(127)
								Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(127)
								Float xf = tmp32;		HX_STACK_VAR(xf,"xf");
								HX_STACK_LINE(128)
								Float tmp33 = y;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(128)
								Float tmp34 = hx::Mod(y,(int)1);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(128)
								Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(128)
								Float yf = tmp35;		HX_STACK_VAR(yf,"yf");
								HX_STACK_LINE(129)
								Float tmp36 = z;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(129)
								Float tmp37 = hx::Mod(z,(int)1);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(129)
								Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(129)
								Float zf = tmp38;		HX_STACK_VAR(zf,"zf");
								HX_STACK_LINE(131)
								Float tmp39 = xf;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(131)
								int tmp40 = ::Std_obj::_int(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(131)
								int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(131)
								int X = tmp41;		HX_STACK_VAR(X,"X");
								HX_STACK_LINE(132)
								Float tmp42 = yf;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(132)
								int tmp43 = ::Std_obj::_int(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(132)
								int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(132)
								int Y = tmp44;		HX_STACK_VAR(Y,"Y");
								HX_STACK_LINE(133)
								Float tmp45 = zf;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(133)
								int tmp46 = ::Std_obj::_int(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(133)
								int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(133)
								int Z = tmp47;		HX_STACK_VAR(Z,"Z");
								HX_STACK_LINE(135)
								hx::SubEq(x,xf);
								HX_STACK_LINE(136)
								hx::SubEq(y,yf);
								HX_STACK_LINE(137)
								hx::SubEq(z,zf);
								HX_STACK_LINE(139)
								Float tmp48 = (x * x);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(139)
								Float tmp49 = x;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(139)
								Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(139)
								Float tmp51 = x;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(139)
								Float tmp52 = (x * (int)6);		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(139)
								Float tmp53 = (tmp52 - (int)15);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(139)
								Float tmp54 = (tmp51 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(139)
								Float tmp55 = (tmp54 + (int)10);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(139)
								Float tmp56 = (tmp50 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(139)
								Float u = tmp56;		HX_STACK_VAR(u,"u");
								HX_STACK_LINE(140)
								Float tmp57 = (y * y);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(140)
								Float tmp58 = y;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(140)
								Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(140)
								Float tmp60 = y;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(140)
								Float tmp61 = (y * (int)6);		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(140)
								Float tmp62 = (tmp61 - (int)15);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(140)
								Float tmp63 = (tmp60 * tmp62);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(140)
								Float tmp64 = (tmp63 + (int)10);		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(140)
								Float tmp65 = (tmp59 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(140)
								Float v = tmp65;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(141)
								Float tmp66 = (z * z);		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(141)
								Float tmp67 = z;		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(141)
								Float tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(141)
								Float tmp69 = z;		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(141)
								Float tmp70 = (z * (int)6);		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(141)
								Float tmp71 = (tmp70 - (int)15);		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(141)
								Float tmp72 = (tmp69 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(141)
								Float tmp73 = (tmp72 + (int)10);		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(141)
								Float tmp74 = (tmp68 * tmp73);		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(141)
								Float w = tmp74;		HX_STACK_VAR(w,"w");
								HX_STACK_LINE(143)
								int tmp75 = p->__get(X);		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(143)
								int tmp76 = Y;		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(143)
								int tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(143)
								int A = tmp77;		HX_STACK_VAR(A,"A");
								HX_STACK_LINE(144)
								int tmp78 = p->__get(A);		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(144)
								int tmp79 = Z;		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(144)
								int tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(144)
								int AA = tmp80;		HX_STACK_VAR(AA,"AA");
								HX_STACK_LINE(145)
								int tmp81 = (A + (int)1);		HX_STACK_VAR(tmp81,"tmp81");
								HX_STACK_LINE(145)
								int tmp82 = p->__get(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
								HX_STACK_LINE(145)
								int tmp83 = Z;		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(145)
								int tmp84 = (tmp82 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(145)
								int AB = tmp84;		HX_STACK_VAR(AB,"AB");
								HX_STACK_LINE(146)
								int tmp85 = (X + (int)1);		HX_STACK_VAR(tmp85,"tmp85");
								HX_STACK_LINE(146)
								int tmp86 = p->__get(tmp85);		HX_STACK_VAR(tmp86,"tmp86");
								HX_STACK_LINE(146)
								int tmp87 = Y;		HX_STACK_VAR(tmp87,"tmp87");
								HX_STACK_LINE(146)
								int tmp88 = (tmp86 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
								HX_STACK_LINE(146)
								int B = tmp88;		HX_STACK_VAR(B,"B");
								HX_STACK_LINE(147)
								int tmp89 = p->__get(B);		HX_STACK_VAR(tmp89,"tmp89");
								HX_STACK_LINE(147)
								int tmp90 = Z;		HX_STACK_VAR(tmp90,"tmp90");
								HX_STACK_LINE(147)
								int tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
								HX_STACK_LINE(147)
								int BA = tmp91;		HX_STACK_VAR(BA,"BA");
								HX_STACK_LINE(148)
								int tmp92 = (B + (int)1);		HX_STACK_VAR(tmp92,"tmp92");
								HX_STACK_LINE(148)
								int tmp93 = p->__get(tmp92);		HX_STACK_VAR(tmp93,"tmp93");
								HX_STACK_LINE(148)
								int tmp94 = Z;		HX_STACK_VAR(tmp94,"tmp94");
								HX_STACK_LINE(148)
								int tmp95 = (tmp93 + tmp94);		HX_STACK_VAR(tmp95,"tmp95");
								HX_STACK_LINE(148)
								int BB = tmp95;		HX_STACK_VAR(BB,"BB");
								HX_STACK_LINE(150)
								Float tmp96 = (x - (int)1);		HX_STACK_VAR(tmp96,"tmp96");
								HX_STACK_LINE(150)
								Float x1 = tmp96;		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(151)
								Float tmp97 = (y - (int)1);		HX_STACK_VAR(tmp97,"tmp97");
								HX_STACK_LINE(151)
								Float y1 = tmp97;		HX_STACK_VAR(y1,"y1");
								HX_STACK_LINE(152)
								Float tmp98 = (z - (int)1);		HX_STACK_VAR(tmp98,"tmp98");
								HX_STACK_LINE(152)
								Float z1 = tmp98;		HX_STACK_VAR(z1,"z1");
								HX_STACK_LINE(154)
								int tmp99 = (BB + (int)1);		HX_STACK_VAR(tmp99,"tmp99");
								HX_STACK_LINE(154)
								int tmp100 = p->__get(tmp99);		HX_STACK_VAR(tmp100,"tmp100");
								HX_STACK_LINE(154)
								int tmp101 = (int(tmp100) & int((int)15));		HX_STACK_VAR(tmp101,"tmp101");
								HX_STACK_LINE(154)
								int hash = tmp101;		HX_STACK_VAR(hash,"hash");
								HX_STACK_LINE(155)
								int tmp102 = (int(hash) & int((int)1));		HX_STACK_VAR(tmp102,"tmp102");
								HX_STACK_LINE(155)
								bool tmp103 = (tmp102 == (int)0);		HX_STACK_VAR(tmp103,"tmp103");
								HX_STACK_LINE(155)
								Float tmp104;		HX_STACK_VAR(tmp104,"tmp104");
								HX_STACK_LINE(155)
								if ((tmp103)){
									HX_STACK_LINE(155)
									bool tmp105 = (hash < (int)8);		HX_STACK_VAR(tmp105,"tmp105");
									HX_STACK_LINE(155)
									if ((tmp105)){
										HX_STACK_LINE(155)
										tmp104 = x1;
									}
									else{
										HX_STACK_LINE(155)
										tmp104 = y1;
									}
								}
								else{
									HX_STACK_LINE(155)
									bool tmp105 = (hash < (int)8);		HX_STACK_VAR(tmp105,"tmp105");
									HX_STACK_LINE(155)
									if ((tmp105)){
										HX_STACK_LINE(155)
										Float tmp106 = x1;		HX_STACK_VAR(tmp106,"tmp106");
										HX_STACK_LINE(155)
										tmp104 = -(tmp106);
									}
									else{
										HX_STACK_LINE(155)
										Float tmp106 = y1;		HX_STACK_VAR(tmp106,"tmp106");
										HX_STACK_LINE(155)
										tmp104 = -(tmp106);
									}
								}
								HX_STACK_LINE(155)
								int tmp105 = (int(hash) & int((int)2));		HX_STACK_VAR(tmp105,"tmp105");
								HX_STACK_LINE(155)
								bool tmp106 = (tmp105 == (int)0);		HX_STACK_VAR(tmp106,"tmp106");
								HX_STACK_LINE(155)
								Float tmp107;		HX_STACK_VAR(tmp107,"tmp107");
								HX_STACK_LINE(155)
								if ((tmp106)){
									HX_STACK_LINE(155)
									bool tmp108 = (hash < (int)4);		HX_STACK_VAR(tmp108,"tmp108");
									HX_STACK_LINE(155)
									if ((tmp108)){
										HX_STACK_LINE(155)
										tmp107 = y1;
									}
									else{
										HX_STACK_LINE(155)
										bool tmp109 = (hash == (int)12);		HX_STACK_VAR(tmp109,"tmp109");
										HX_STACK_LINE(155)
										if ((tmp109)){
											HX_STACK_LINE(155)
											tmp107 = x1;
										}
										else{
											HX_STACK_LINE(155)
											tmp107 = z1;
										}
									}
								}
								else{
									HX_STACK_LINE(155)
									bool tmp108 = (hash < (int)4);		HX_STACK_VAR(tmp108,"tmp108");
									HX_STACK_LINE(155)
									if ((tmp108)){
										HX_STACK_LINE(155)
										Float tmp109 = y1;		HX_STACK_VAR(tmp109,"tmp109");
										HX_STACK_LINE(155)
										tmp107 = -(tmp109);
									}
									else{
										HX_STACK_LINE(155)
										bool tmp109 = (hash == (int)14);		HX_STACK_VAR(tmp109,"tmp109");
										HX_STACK_LINE(155)
										if ((tmp109)){
											HX_STACK_LINE(155)
											Float tmp110 = x1;		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(155)
											tmp107 = -(tmp110);
										}
										else{
											HX_STACK_LINE(155)
											Float tmp110 = z1;		HX_STACK_VAR(tmp110,"tmp110");
											HX_STACK_LINE(155)
											tmp107 = -(tmp110);
										}
									}
								}
								HX_STACK_LINE(155)
								Float tmp108 = (tmp104 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
								HX_STACK_LINE(155)
								Float g1 = tmp108;		HX_STACK_VAR(g1,"g1");
								HX_STACK_LINE(157)
								int tmp109 = (AB + (int)1);		HX_STACK_VAR(tmp109,"tmp109");
								HX_STACK_LINE(157)
								int tmp110 = p->__get(tmp109);		HX_STACK_VAR(tmp110,"tmp110");
								HX_STACK_LINE(157)
								int tmp111 = (int(tmp110) & int((int)15));		HX_STACK_VAR(tmp111,"tmp111");
								HX_STACK_LINE(157)
								hash = tmp111;
								HX_STACK_LINE(158)
								int tmp112 = (int(hash) & int((int)1));		HX_STACK_VAR(tmp112,"tmp112");
								HX_STACK_LINE(158)
								bool tmp113 = (tmp112 == (int)0);		HX_STACK_VAR(tmp113,"tmp113");
								HX_STACK_LINE(158)
								Float tmp114;		HX_STACK_VAR(tmp114,"tmp114");
								HX_STACK_LINE(158)
								if ((tmp113)){
									HX_STACK_LINE(158)
									bool tmp115 = (hash < (int)8);		HX_STACK_VAR(tmp115,"tmp115");
									HX_STACK_LINE(158)
									if ((tmp115)){
										HX_STACK_LINE(158)
										tmp114 = x;
									}
									else{
										HX_STACK_LINE(158)
										tmp114 = y1;
									}
								}
								else{
									HX_STACK_LINE(158)
									bool tmp115 = (hash < (int)8);		HX_STACK_VAR(tmp115,"tmp115");
									HX_STACK_LINE(158)
									if ((tmp115)){
										HX_STACK_LINE(158)
										Float tmp116 = x;		HX_STACK_VAR(tmp116,"tmp116");
										HX_STACK_LINE(158)
										tmp114 = -(tmp116);
									}
									else{
										HX_STACK_LINE(158)
										Float tmp116 = y1;		HX_STACK_VAR(tmp116,"tmp116");
										HX_STACK_LINE(158)
										tmp114 = -(tmp116);
									}
								}
								HX_STACK_LINE(158)
								int tmp115 = (int(hash) & int((int)2));		HX_STACK_VAR(tmp115,"tmp115");
								HX_STACK_LINE(158)
								bool tmp116 = (tmp115 == (int)0);		HX_STACK_VAR(tmp116,"tmp116");
								HX_STACK_LINE(158)
								Float tmp117;		HX_STACK_VAR(tmp117,"tmp117");
								HX_STACK_LINE(158)
								if ((tmp116)){
									HX_STACK_LINE(158)
									bool tmp118 = (hash < (int)4);		HX_STACK_VAR(tmp118,"tmp118");
									HX_STACK_LINE(158)
									if ((tmp118)){
										HX_STACK_LINE(158)
										tmp117 = y1;
									}
									else{
										HX_STACK_LINE(158)
										bool tmp119 = (hash == (int)12);		HX_STACK_VAR(tmp119,"tmp119");
										HX_STACK_LINE(158)
										if ((tmp119)){
											HX_STACK_LINE(158)
											tmp117 = x;
										}
										else{
											HX_STACK_LINE(158)
											tmp117 = z1;
										}
									}
								}
								else{
									HX_STACK_LINE(158)
									bool tmp118 = (hash < (int)4);		HX_STACK_VAR(tmp118,"tmp118");
									HX_STACK_LINE(158)
									if ((tmp118)){
										HX_STACK_LINE(158)
										Float tmp119 = y1;		HX_STACK_VAR(tmp119,"tmp119");
										HX_STACK_LINE(158)
										tmp117 = -(tmp119);
									}
									else{
										HX_STACK_LINE(158)
										bool tmp119 = (hash == (int)14);		HX_STACK_VAR(tmp119,"tmp119");
										HX_STACK_LINE(158)
										if ((tmp119)){
											HX_STACK_LINE(158)
											Float tmp120 = x;		HX_STACK_VAR(tmp120,"tmp120");
											HX_STACK_LINE(158)
											tmp117 = -(tmp120);
										}
										else{
											HX_STACK_LINE(158)
											Float tmp120 = z1;		HX_STACK_VAR(tmp120,"tmp120");
											HX_STACK_LINE(158)
											tmp117 = -(tmp120);
										}
									}
								}
								HX_STACK_LINE(158)
								Float tmp118 = (tmp114 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
								HX_STACK_LINE(158)
								Float g2 = tmp118;		HX_STACK_VAR(g2,"g2");
								HX_STACK_LINE(160)
								int tmp119 = (BA + (int)1);		HX_STACK_VAR(tmp119,"tmp119");
								HX_STACK_LINE(160)
								int tmp120 = p->__get(tmp119);		HX_STACK_VAR(tmp120,"tmp120");
								HX_STACK_LINE(160)
								int tmp121 = (int(tmp120) & int((int)15));		HX_STACK_VAR(tmp121,"tmp121");
								HX_STACK_LINE(160)
								hash = tmp121;
								HX_STACK_LINE(161)
								int tmp122 = (int(hash) & int((int)1));		HX_STACK_VAR(tmp122,"tmp122");
								HX_STACK_LINE(161)
								bool tmp123 = (tmp122 == (int)0);		HX_STACK_VAR(tmp123,"tmp123");
								HX_STACK_LINE(161)
								Float tmp124;		HX_STACK_VAR(tmp124,"tmp124");
								HX_STACK_LINE(161)
								if ((tmp123)){
									HX_STACK_LINE(161)
									bool tmp125 = (hash < (int)8);		HX_STACK_VAR(tmp125,"tmp125");
									HX_STACK_LINE(161)
									if ((tmp125)){
										HX_STACK_LINE(161)
										tmp124 = x1;
									}
									else{
										HX_STACK_LINE(161)
										tmp124 = y;
									}
								}
								else{
									HX_STACK_LINE(161)
									bool tmp125 = (hash < (int)8);		HX_STACK_VAR(tmp125,"tmp125");
									HX_STACK_LINE(161)
									if ((tmp125)){
										HX_STACK_LINE(161)
										Float tmp126 = x1;		HX_STACK_VAR(tmp126,"tmp126");
										HX_STACK_LINE(161)
										tmp124 = -(tmp126);
									}
									else{
										HX_STACK_LINE(161)
										Float tmp126 = y;		HX_STACK_VAR(tmp126,"tmp126");
										HX_STACK_LINE(161)
										tmp124 = -(tmp126);
									}
								}
								HX_STACK_LINE(161)
								int tmp125 = (int(hash) & int((int)2));		HX_STACK_VAR(tmp125,"tmp125");
								HX_STACK_LINE(161)
								bool tmp126 = (tmp125 == (int)0);		HX_STACK_VAR(tmp126,"tmp126");
								HX_STACK_LINE(161)
								Float tmp127;		HX_STACK_VAR(tmp127,"tmp127");
								HX_STACK_LINE(161)
								if ((tmp126)){
									HX_STACK_LINE(161)
									bool tmp128 = (hash < (int)4);		HX_STACK_VAR(tmp128,"tmp128");
									HX_STACK_LINE(161)
									if ((tmp128)){
										HX_STACK_LINE(161)
										tmp127 = y;
									}
									else{
										HX_STACK_LINE(161)
										bool tmp129 = (hash == (int)12);		HX_STACK_VAR(tmp129,"tmp129");
										HX_STACK_LINE(161)
										if ((tmp129)){
											HX_STACK_LINE(161)
											tmp127 = x1;
										}
										else{
											HX_STACK_LINE(161)
											tmp127 = z1;
										}
									}
								}
								else{
									HX_STACK_LINE(161)
									bool tmp128 = (hash < (int)4);		HX_STACK_VAR(tmp128,"tmp128");
									HX_STACK_LINE(161)
									if ((tmp128)){
										HX_STACK_LINE(161)
										Float tmp129 = y;		HX_STACK_VAR(tmp129,"tmp129");
										HX_STACK_LINE(161)
										tmp127 = -(tmp129);
									}
									else{
										HX_STACK_LINE(161)
										bool tmp129 = (hash == (int)14);		HX_STACK_VAR(tmp129,"tmp129");
										HX_STACK_LINE(161)
										if ((tmp129)){
											HX_STACK_LINE(161)
											Float tmp130 = x1;		HX_STACK_VAR(tmp130,"tmp130");
											HX_STACK_LINE(161)
											tmp127 = -(tmp130);
										}
										else{
											HX_STACK_LINE(161)
											Float tmp130 = z1;		HX_STACK_VAR(tmp130,"tmp130");
											HX_STACK_LINE(161)
											tmp127 = -(tmp130);
										}
									}
								}
								HX_STACK_LINE(161)
								Float tmp128 = (tmp124 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
								HX_STACK_LINE(161)
								Float g3 = tmp128;		HX_STACK_VAR(g3,"g3");
								HX_STACK_LINE(163)
								int tmp129 = (AA + (int)1);		HX_STACK_VAR(tmp129,"tmp129");
								HX_STACK_LINE(163)
								int tmp130 = p->__get(tmp129);		HX_STACK_VAR(tmp130,"tmp130");
								HX_STACK_LINE(163)
								int tmp131 = (int(tmp130) & int((int)15));		HX_STACK_VAR(tmp131,"tmp131");
								HX_STACK_LINE(163)
								hash = tmp131;
								HX_STACK_LINE(164)
								int tmp132 = (int(hash) & int((int)1));		HX_STACK_VAR(tmp132,"tmp132");
								HX_STACK_LINE(164)
								bool tmp133 = (tmp132 == (int)0);		HX_STACK_VAR(tmp133,"tmp133");
								HX_STACK_LINE(164)
								Float tmp134;		HX_STACK_VAR(tmp134,"tmp134");
								HX_STACK_LINE(164)
								if ((tmp133)){
									HX_STACK_LINE(164)
									bool tmp135 = (hash < (int)8);		HX_STACK_VAR(tmp135,"tmp135");
									HX_STACK_LINE(164)
									if ((tmp135)){
										HX_STACK_LINE(164)
										tmp134 = x;
									}
									else{
										HX_STACK_LINE(164)
										tmp134 = y;
									}
								}
								else{
									HX_STACK_LINE(164)
									bool tmp135 = (hash < (int)8);		HX_STACK_VAR(tmp135,"tmp135");
									HX_STACK_LINE(164)
									if ((tmp135)){
										HX_STACK_LINE(164)
										Float tmp136 = x;		HX_STACK_VAR(tmp136,"tmp136");
										HX_STACK_LINE(164)
										tmp134 = -(tmp136);
									}
									else{
										HX_STACK_LINE(164)
										Float tmp136 = y;		HX_STACK_VAR(tmp136,"tmp136");
										HX_STACK_LINE(164)
										tmp134 = -(tmp136);
									}
								}
								HX_STACK_LINE(164)
								int tmp135 = (int(hash) & int((int)2));		HX_STACK_VAR(tmp135,"tmp135");
								HX_STACK_LINE(164)
								bool tmp136 = (tmp135 == (int)0);		HX_STACK_VAR(tmp136,"tmp136");
								HX_STACK_LINE(164)
								Float tmp137;		HX_STACK_VAR(tmp137,"tmp137");
								HX_STACK_LINE(164)
								if ((tmp136)){
									HX_STACK_LINE(164)
									bool tmp138 = (hash < (int)4);		HX_STACK_VAR(tmp138,"tmp138");
									HX_STACK_LINE(164)
									if ((tmp138)){
										HX_STACK_LINE(164)
										tmp137 = y;
									}
									else{
										HX_STACK_LINE(164)
										bool tmp139 = (hash == (int)12);		HX_STACK_VAR(tmp139,"tmp139");
										HX_STACK_LINE(164)
										if ((tmp139)){
											HX_STACK_LINE(164)
											tmp137 = x;
										}
										else{
											HX_STACK_LINE(164)
											tmp137 = z1;
										}
									}
								}
								else{
									HX_STACK_LINE(164)
									bool tmp138 = (hash < (int)4);		HX_STACK_VAR(tmp138,"tmp138");
									HX_STACK_LINE(164)
									if ((tmp138)){
										HX_STACK_LINE(164)
										Float tmp139 = y;		HX_STACK_VAR(tmp139,"tmp139");
										HX_STACK_LINE(164)
										tmp137 = -(tmp139);
									}
									else{
										HX_STACK_LINE(164)
										bool tmp139 = (hash == (int)14);		HX_STACK_VAR(tmp139,"tmp139");
										HX_STACK_LINE(164)
										if ((tmp139)){
											HX_STACK_LINE(164)
											Float tmp140 = x;		HX_STACK_VAR(tmp140,"tmp140");
											HX_STACK_LINE(164)
											tmp137 = -(tmp140);
										}
										else{
											HX_STACK_LINE(164)
											Float tmp140 = z1;		HX_STACK_VAR(tmp140,"tmp140");
											HX_STACK_LINE(164)
											tmp137 = -(tmp140);
										}
									}
								}
								HX_STACK_LINE(164)
								Float tmp138 = (tmp134 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
								HX_STACK_LINE(164)
								Float g4 = tmp138;		HX_STACK_VAR(g4,"g4");
								HX_STACK_LINE(166)
								int tmp139 = p->__get(BB);		HX_STACK_VAR(tmp139,"tmp139");
								HX_STACK_LINE(166)
								int tmp140 = (int(tmp139) & int((int)15));		HX_STACK_VAR(tmp140,"tmp140");
								HX_STACK_LINE(166)
								hash = tmp140;
								HX_STACK_LINE(167)
								int tmp141 = (int(hash) & int((int)1));		HX_STACK_VAR(tmp141,"tmp141");
								HX_STACK_LINE(167)
								bool tmp142 = (tmp141 == (int)0);		HX_STACK_VAR(tmp142,"tmp142");
								HX_STACK_LINE(167)
								Float tmp143;		HX_STACK_VAR(tmp143,"tmp143");
								HX_STACK_LINE(167)
								if ((tmp142)){
									HX_STACK_LINE(167)
									bool tmp144 = (hash < (int)8);		HX_STACK_VAR(tmp144,"tmp144");
									HX_STACK_LINE(167)
									if ((tmp144)){
										HX_STACK_LINE(167)
										tmp143 = x1;
									}
									else{
										HX_STACK_LINE(167)
										tmp143 = y1;
									}
								}
								else{
									HX_STACK_LINE(167)
									bool tmp144 = (hash < (int)8);		HX_STACK_VAR(tmp144,"tmp144");
									HX_STACK_LINE(167)
									if ((tmp144)){
										HX_STACK_LINE(167)
										Float tmp145 = x1;		HX_STACK_VAR(tmp145,"tmp145");
										HX_STACK_LINE(167)
										tmp143 = -(tmp145);
									}
									else{
										HX_STACK_LINE(167)
										Float tmp145 = y1;		HX_STACK_VAR(tmp145,"tmp145");
										HX_STACK_LINE(167)
										tmp143 = -(tmp145);
									}
								}
								HX_STACK_LINE(167)
								int tmp144 = (int(hash) & int((int)2));		HX_STACK_VAR(tmp144,"tmp144");
								HX_STACK_LINE(167)
								bool tmp145 = (tmp144 == (int)0);		HX_STACK_VAR(tmp145,"tmp145");
								HX_STACK_LINE(167)
								Float tmp146;		HX_STACK_VAR(tmp146,"tmp146");
								HX_STACK_LINE(167)
								if ((tmp145)){
									HX_STACK_LINE(167)
									bool tmp147 = (hash < (int)4);		HX_STACK_VAR(tmp147,"tmp147");
									HX_STACK_LINE(167)
									if ((tmp147)){
										HX_STACK_LINE(167)
										tmp146 = y1;
									}
									else{
										HX_STACK_LINE(167)
										bool tmp148 = (hash == (int)12);		HX_STACK_VAR(tmp148,"tmp148");
										HX_STACK_LINE(167)
										if ((tmp148)){
											HX_STACK_LINE(167)
											tmp146 = x1;
										}
										else{
											HX_STACK_LINE(167)
											tmp146 = z;
										}
									}
								}
								else{
									HX_STACK_LINE(167)
									bool tmp147 = (hash < (int)4);		HX_STACK_VAR(tmp147,"tmp147");
									HX_STACK_LINE(167)
									if ((tmp147)){
										HX_STACK_LINE(167)
										Float tmp148 = y1;		HX_STACK_VAR(tmp148,"tmp148");
										HX_STACK_LINE(167)
										tmp146 = -(tmp148);
									}
									else{
										HX_STACK_LINE(167)
										bool tmp148 = (hash == (int)14);		HX_STACK_VAR(tmp148,"tmp148");
										HX_STACK_LINE(167)
										if ((tmp148)){
											HX_STACK_LINE(167)
											Float tmp149 = x1;		HX_STACK_VAR(tmp149,"tmp149");
											HX_STACK_LINE(167)
											tmp146 = -(tmp149);
										}
										else{
											HX_STACK_LINE(167)
											Float tmp149 = z;		HX_STACK_VAR(tmp149,"tmp149");
											HX_STACK_LINE(167)
											tmp146 = -(tmp149);
										}
									}
								}
								HX_STACK_LINE(167)
								Float tmp147 = (tmp143 + tmp146);		HX_STACK_VAR(tmp147,"tmp147");
								HX_STACK_LINE(167)
								Float g5 = tmp147;		HX_STACK_VAR(g5,"g5");
								HX_STACK_LINE(169)
								int tmp148 = p->__get(AB);		HX_STACK_VAR(tmp148,"tmp148");
								HX_STACK_LINE(169)
								int tmp149 = (int(tmp148) & int((int)15));		HX_STACK_VAR(tmp149,"tmp149");
								HX_STACK_LINE(169)
								hash = tmp149;
								HX_STACK_LINE(170)
								int tmp150 = (int(hash) & int((int)1));		HX_STACK_VAR(tmp150,"tmp150");
								HX_STACK_LINE(170)
								bool tmp151 = (tmp150 == (int)0);		HX_STACK_VAR(tmp151,"tmp151");
								HX_STACK_LINE(170)
								Float tmp152;		HX_STACK_VAR(tmp152,"tmp152");
								HX_STACK_LINE(170)
								if ((tmp151)){
									HX_STACK_LINE(170)
									bool tmp153 = (hash < (int)8);		HX_STACK_VAR(tmp153,"tmp153");
									HX_STACK_LINE(170)
									if ((tmp153)){
										HX_STACK_LINE(170)
										tmp152 = x;
									}
									else{
										HX_STACK_LINE(170)
										tmp152 = y1;
									}
								}
								else{
									HX_STACK_LINE(170)
									bool tmp153 = (hash < (int)8);		HX_STACK_VAR(tmp153,"tmp153");
									HX_STACK_LINE(170)
									if ((tmp153)){
										HX_STACK_LINE(170)
										Float tmp154 = x;		HX_STACK_VAR(tmp154,"tmp154");
										HX_STACK_LINE(170)
										tmp152 = -(tmp154);
									}
									else{
										HX_STACK_LINE(170)
										Float tmp154 = y1;		HX_STACK_VAR(tmp154,"tmp154");
										HX_STACK_LINE(170)
										tmp152 = -(tmp154);
									}
								}
								HX_STACK_LINE(170)
								int tmp153 = (int(hash) & int((int)2));		HX_STACK_VAR(tmp153,"tmp153");
								HX_STACK_LINE(170)
								bool tmp154 = (tmp153 == (int)0);		HX_STACK_VAR(tmp154,"tmp154");
								HX_STACK_LINE(170)
								Float tmp155;		HX_STACK_VAR(tmp155,"tmp155");
								HX_STACK_LINE(170)
								if ((tmp154)){
									HX_STACK_LINE(170)
									bool tmp156 = (hash < (int)4);		HX_STACK_VAR(tmp156,"tmp156");
									HX_STACK_LINE(170)
									if ((tmp156)){
										HX_STACK_LINE(170)
										tmp155 = y1;
									}
									else{
										HX_STACK_LINE(170)
										bool tmp157 = (hash == (int)12);		HX_STACK_VAR(tmp157,"tmp157");
										HX_STACK_LINE(170)
										if ((tmp157)){
											HX_STACK_LINE(170)
											tmp155 = x;
										}
										else{
											HX_STACK_LINE(170)
											tmp155 = z;
										}
									}
								}
								else{
									HX_STACK_LINE(170)
									bool tmp156 = (hash < (int)4);		HX_STACK_VAR(tmp156,"tmp156");
									HX_STACK_LINE(170)
									if ((tmp156)){
										HX_STACK_LINE(170)
										Float tmp157 = y1;		HX_STACK_VAR(tmp157,"tmp157");
										HX_STACK_LINE(170)
										tmp155 = -(tmp157);
									}
									else{
										HX_STACK_LINE(170)
										bool tmp157 = (hash == (int)14);		HX_STACK_VAR(tmp157,"tmp157");
										HX_STACK_LINE(170)
										if ((tmp157)){
											HX_STACK_LINE(170)
											Float tmp158 = x;		HX_STACK_VAR(tmp158,"tmp158");
											HX_STACK_LINE(170)
											tmp155 = -(tmp158);
										}
										else{
											HX_STACK_LINE(170)
											Float tmp158 = z;		HX_STACK_VAR(tmp158,"tmp158");
											HX_STACK_LINE(170)
											tmp155 = -(tmp158);
										}
									}
								}
								HX_STACK_LINE(170)
								Float tmp156 = (tmp152 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
								HX_STACK_LINE(170)
								Float g6 = tmp156;		HX_STACK_VAR(g6,"g6");
								HX_STACK_LINE(172)
								int tmp157 = p->__get(BA);		HX_STACK_VAR(tmp157,"tmp157");
								HX_STACK_LINE(172)
								int tmp158 = (int(tmp157) & int((int)15));		HX_STACK_VAR(tmp158,"tmp158");
								HX_STACK_LINE(172)
								hash = tmp158;
								HX_STACK_LINE(173)
								int tmp159 = (int(hash) & int((int)1));		HX_STACK_VAR(tmp159,"tmp159");
								HX_STACK_LINE(173)
								bool tmp160 = (tmp159 == (int)0);		HX_STACK_VAR(tmp160,"tmp160");
								HX_STACK_LINE(173)
								Float tmp161;		HX_STACK_VAR(tmp161,"tmp161");
								HX_STACK_LINE(173)
								if ((tmp160)){
									HX_STACK_LINE(173)
									bool tmp162 = (hash < (int)8);		HX_STACK_VAR(tmp162,"tmp162");
									HX_STACK_LINE(173)
									if ((tmp162)){
										HX_STACK_LINE(173)
										tmp161 = x1;
									}
									else{
										HX_STACK_LINE(173)
										tmp161 = y;
									}
								}
								else{
									HX_STACK_LINE(173)
									bool tmp162 = (hash < (int)8);		HX_STACK_VAR(tmp162,"tmp162");
									HX_STACK_LINE(173)
									if ((tmp162)){
										HX_STACK_LINE(173)
										Float tmp163 = x1;		HX_STACK_VAR(tmp163,"tmp163");
										HX_STACK_LINE(173)
										tmp161 = -(tmp163);
									}
									else{
										HX_STACK_LINE(173)
										Float tmp163 = y;		HX_STACK_VAR(tmp163,"tmp163");
										HX_STACK_LINE(173)
										tmp161 = -(tmp163);
									}
								}
								HX_STACK_LINE(173)
								int tmp162 = (int(hash) & int((int)2));		HX_STACK_VAR(tmp162,"tmp162");
								HX_STACK_LINE(173)
								bool tmp163 = (tmp162 == (int)0);		HX_STACK_VAR(tmp163,"tmp163");
								HX_STACK_LINE(173)
								Float tmp164;		HX_STACK_VAR(tmp164,"tmp164");
								HX_STACK_LINE(173)
								if ((tmp163)){
									HX_STACK_LINE(173)
									bool tmp165 = (hash < (int)4);		HX_STACK_VAR(tmp165,"tmp165");
									HX_STACK_LINE(173)
									if ((tmp165)){
										HX_STACK_LINE(173)
										tmp164 = y;
									}
									else{
										HX_STACK_LINE(173)
										bool tmp166 = (hash == (int)12);		HX_STACK_VAR(tmp166,"tmp166");
										HX_STACK_LINE(173)
										if ((tmp166)){
											HX_STACK_LINE(173)
											tmp164 = x1;
										}
										else{
											HX_STACK_LINE(173)
											tmp164 = z;
										}
									}
								}
								else{
									HX_STACK_LINE(173)
									bool tmp165 = (hash < (int)4);		HX_STACK_VAR(tmp165,"tmp165");
									HX_STACK_LINE(173)
									if ((tmp165)){
										HX_STACK_LINE(173)
										Float tmp166 = y;		HX_STACK_VAR(tmp166,"tmp166");
										HX_STACK_LINE(173)
										tmp164 = -(tmp166);
									}
									else{
										HX_STACK_LINE(173)
										bool tmp166 = (hash == (int)14);		HX_STACK_VAR(tmp166,"tmp166");
										HX_STACK_LINE(173)
										if ((tmp166)){
											HX_STACK_LINE(173)
											Float tmp167 = x1;		HX_STACK_VAR(tmp167,"tmp167");
											HX_STACK_LINE(173)
											tmp164 = -(tmp167);
										}
										else{
											HX_STACK_LINE(173)
											Float tmp167 = z;		HX_STACK_VAR(tmp167,"tmp167");
											HX_STACK_LINE(173)
											tmp164 = -(tmp167);
										}
									}
								}
								HX_STACK_LINE(173)
								Float tmp165 = (tmp161 + tmp164);		HX_STACK_VAR(tmp165,"tmp165");
								HX_STACK_LINE(173)
								Float g7 = tmp165;		HX_STACK_VAR(g7,"g7");
								HX_STACK_LINE(175)
								int tmp166 = p->__get(AA);		HX_STACK_VAR(tmp166,"tmp166");
								HX_STACK_LINE(175)
								int tmp167 = (int(tmp166) & int((int)15));		HX_STACK_VAR(tmp167,"tmp167");
								HX_STACK_LINE(175)
								hash = tmp167;
								HX_STACK_LINE(176)
								int tmp168 = (int(hash) & int((int)1));		HX_STACK_VAR(tmp168,"tmp168");
								HX_STACK_LINE(176)
								bool tmp169 = (tmp168 == (int)0);		HX_STACK_VAR(tmp169,"tmp169");
								HX_STACK_LINE(176)
								Float tmp170;		HX_STACK_VAR(tmp170,"tmp170");
								HX_STACK_LINE(176)
								if ((tmp169)){
									HX_STACK_LINE(176)
									bool tmp171 = (hash < (int)8);		HX_STACK_VAR(tmp171,"tmp171");
									HX_STACK_LINE(176)
									if ((tmp171)){
										HX_STACK_LINE(176)
										tmp170 = x;
									}
									else{
										HX_STACK_LINE(176)
										tmp170 = y;
									}
								}
								else{
									HX_STACK_LINE(176)
									bool tmp171 = (hash < (int)8);		HX_STACK_VAR(tmp171,"tmp171");
									HX_STACK_LINE(176)
									if ((tmp171)){
										HX_STACK_LINE(176)
										Float tmp172 = x;		HX_STACK_VAR(tmp172,"tmp172");
										HX_STACK_LINE(176)
										tmp170 = -(tmp172);
									}
									else{
										HX_STACK_LINE(176)
										Float tmp172 = y;		HX_STACK_VAR(tmp172,"tmp172");
										HX_STACK_LINE(176)
										tmp170 = -(tmp172);
									}
								}
								HX_STACK_LINE(176)
								int tmp171 = (int(hash) & int((int)2));		HX_STACK_VAR(tmp171,"tmp171");
								HX_STACK_LINE(176)
								bool tmp172 = (tmp171 == (int)0);		HX_STACK_VAR(tmp172,"tmp172");
								HX_STACK_LINE(176)
								Float tmp173;		HX_STACK_VAR(tmp173,"tmp173");
								HX_STACK_LINE(176)
								if ((tmp172)){
									HX_STACK_LINE(176)
									bool tmp174 = (hash < (int)4);		HX_STACK_VAR(tmp174,"tmp174");
									HX_STACK_LINE(176)
									if ((tmp174)){
										HX_STACK_LINE(176)
										tmp173 = y;
									}
									else{
										HX_STACK_LINE(176)
										bool tmp175 = (hash == (int)12);		HX_STACK_VAR(tmp175,"tmp175");
										HX_STACK_LINE(176)
										if ((tmp175)){
											HX_STACK_LINE(176)
											tmp173 = x;
										}
										else{
											HX_STACK_LINE(176)
											tmp173 = z;
										}
									}
								}
								else{
									HX_STACK_LINE(176)
									bool tmp174 = (hash < (int)4);		HX_STACK_VAR(tmp174,"tmp174");
									HX_STACK_LINE(176)
									if ((tmp174)){
										HX_STACK_LINE(176)
										Float tmp175 = y;		HX_STACK_VAR(tmp175,"tmp175");
										HX_STACK_LINE(176)
										tmp173 = -(tmp175);
									}
									else{
										HX_STACK_LINE(176)
										bool tmp175 = (hash == (int)14);		HX_STACK_VAR(tmp175,"tmp175");
										HX_STACK_LINE(176)
										if ((tmp175)){
											HX_STACK_LINE(176)
											Float tmp176 = x;		HX_STACK_VAR(tmp176,"tmp176");
											HX_STACK_LINE(176)
											tmp173 = -(tmp176);
										}
										else{
											HX_STACK_LINE(176)
											Float tmp176 = z;		HX_STACK_VAR(tmp176,"tmp176");
											HX_STACK_LINE(176)
											tmp173 = -(tmp176);
										}
									}
								}
								HX_STACK_LINE(176)
								Float tmp174 = (tmp170 + tmp173);		HX_STACK_VAR(tmp174,"tmp174");
								HX_STACK_LINE(176)
								Float g8 = tmp174;		HX_STACK_VAR(g8,"g8");
								HX_STACK_LINE(178)
								Float tmp175 = u;		HX_STACK_VAR(tmp175,"tmp175");
								HX_STACK_LINE(178)
								Float tmp176 = (g1 - g2);		HX_STACK_VAR(tmp176,"tmp176");
								HX_STACK_LINE(178)
								Float tmp177 = (tmp175 * tmp176);		HX_STACK_VAR(tmp177,"tmp177");
								HX_STACK_LINE(178)
								hx::AddEq(g2,tmp177);
								HX_STACK_LINE(179)
								Float tmp178 = u;		HX_STACK_VAR(tmp178,"tmp178");
								HX_STACK_LINE(179)
								Float tmp179 = (g3 - g4);		HX_STACK_VAR(tmp179,"tmp179");
								HX_STACK_LINE(179)
								Float tmp180 = (tmp178 * tmp179);		HX_STACK_VAR(tmp180,"tmp180");
								HX_STACK_LINE(179)
								hx::AddEq(g4,tmp180);
								HX_STACK_LINE(180)
								Float tmp181 = u;		HX_STACK_VAR(tmp181,"tmp181");
								HX_STACK_LINE(180)
								Float tmp182 = (g5 - g6);		HX_STACK_VAR(tmp182,"tmp182");
								HX_STACK_LINE(180)
								Float tmp183 = (tmp181 * tmp182);		HX_STACK_VAR(tmp183,"tmp183");
								HX_STACK_LINE(180)
								hx::AddEq(g6,tmp183);
								HX_STACK_LINE(181)
								Float tmp184 = u;		HX_STACK_VAR(tmp184,"tmp184");
								HX_STACK_LINE(181)
								Float tmp185 = (g7 - g8);		HX_STACK_VAR(tmp185,"tmp185");
								HX_STACK_LINE(181)
								Float tmp186 = (tmp184 * tmp185);		HX_STACK_VAR(tmp186,"tmp186");
								HX_STACK_LINE(181)
								hx::AddEq(g8,tmp186);
								HX_STACK_LINE(183)
								Float tmp187 = v;		HX_STACK_VAR(tmp187,"tmp187");
								HX_STACK_LINE(183)
								Float tmp188 = (g2 - g4);		HX_STACK_VAR(tmp188,"tmp188");
								HX_STACK_LINE(183)
								Float tmp189 = (tmp187 * tmp188);		HX_STACK_VAR(tmp189,"tmp189");
								HX_STACK_LINE(183)
								hx::AddEq(g4,tmp189);
								HX_STACK_LINE(184)
								Float tmp190 = v;		HX_STACK_VAR(tmp190,"tmp190");
								HX_STACK_LINE(184)
								Float tmp191 = (g6 - g8);		HX_STACK_VAR(tmp191,"tmp191");
								HX_STACK_LINE(184)
								Float tmp192 = (tmp190 * tmp191);		HX_STACK_VAR(tmp192,"tmp192");
								HX_STACK_LINE(184)
								hx::AddEq(g8,tmp192);
								HX_STACK_LINE(186)
								Float tmp193 = g8;		HX_STACK_VAR(tmp193,"tmp193");
								HX_STACK_LINE(186)
								Float tmp194 = w;		HX_STACK_VAR(tmp194,"tmp194");
								HX_STACK_LINE(186)
								Float tmp195 = (g4 - g8);		HX_STACK_VAR(tmp195,"tmp195");
								HX_STACK_LINE(186)
								Float tmp196 = (tmp194 * tmp195);		HX_STACK_VAR(tmp196,"tmp196");
								HX_STACK_LINE(186)
								Float tmp197 = (tmp193 + tmp196);		HX_STACK_VAR(tmp197,"tmp197");
								HX_STACK_LINE(186)
								Float tmp198 = fPers;		HX_STACK_VAR(tmp198,"tmp198");
								HX_STACK_LINE(186)
								Float tmp199 = (tmp197 * tmp198);		HX_STACK_VAR(tmp199,"tmp199");
								HX_STACK_LINE(186)
								hx::AddEq(s,tmp199);
							}
						}
						HX_STACK_LINE(189)
						Float tmp22 = s;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(189)
						Float tmp23 = this->fPersMax;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(189)
						Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(189)
						Float tmp25 = (tmp24 + (int)1);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(189)
						Float tmp26 = (tmp25 * (int)128);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(189)
						int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(189)
						int color = tmp27;		HX_STACK_VAR(color,"color");
						HX_STACK_LINE(191)
						int tmp28 = px;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(191)
						int tmp29 = py;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(191)
						int tmp30 = (int(color) << int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(191)
						int tmp31 = (int((int)-16777216) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(191)
						int tmp32 = (int(color) << int((int)8));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(191)
						int tmp33 = (int(tmp31) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(191)
						int tmp34 = color;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(191)
						int tmp35 = (int(tmp33) | int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(191)
						bitmap->setPixel32(tmp28,tmp29,tmp35);
						HX_STACK_LINE(193)
						Float tmp36 = this->baseFactor;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(193)
						hx::AddEq(_x,tmp36);
					}
				}
				HX_STACK_LINE(196)
				Float tmp19 = this->baseFactor;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(196)
				hx::AddEq(_y,tmp19);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(PerlinNoise_obj,fill,(void))

Void PerlinNoise_obj::octFreqPers( Float fPersistence){
{
		HX_STACK_FRAME("openfl._internal.utils.PerlinNoise","octFreqPers",0x79fea539,"openfl._internal.utils.PerlinNoise.octFreqPers","openfl/_internal/utils/PerlinNoise.hx",200,0x13a5c608)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fPersistence,"fPersistence")
		HX_STACK_LINE(202)
		Float fFreq;		HX_STACK_VAR(fFreq,"fFreq");
		HX_STACK_LINE(202)
		Float fPers;		HX_STACK_VAR(fPers,"fPers");
		HX_STACK_LINE(204)
		this->aOctFreq = Array_obj< Float >::__new();
		HX_STACK_LINE(205)
		this->aOctPers = Array_obj< Float >::__new();
		HX_STACK_LINE(206)
		this->fPersMax = (int)0;
		HX_STACK_LINE(208)
		{
			HX_STACK_LINE(208)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(208)
			int tmp = this->octaves;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(208)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(208)
			while((true)){
				HX_STACK_LINE(208)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(208)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(208)
				if ((tmp2)){
					HX_STACK_LINE(208)
					break;
				}
				HX_STACK_LINE(208)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(208)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(209)
				int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(209)
				Float tmp5 = ::Math_obj::pow((int)2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(209)
				fFreq = tmp5;
				HX_STACK_LINE(210)
				Float tmp6 = fPersistence;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(210)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(210)
				Float tmp8 = ::Math_obj::pow(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(210)
				fPers = tmp8;
				HX_STACK_LINE(211)
				hx::AddEq(this->fPersMax,fPers);
				HX_STACK_LINE(212)
				Float tmp9 = fFreq;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(212)
				this->aOctFreq->push(tmp9);
				HX_STACK_LINE(213)
				Float tmp10 = fPers;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(213)
				this->aOctPers->push(tmp10);
			}
		}
		HX_STACK_LINE(216)
		Float tmp = this->fPersMax;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(216)
		Float tmp1 = (Float((int)1) / Float(tmp));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(216)
		this->fPersMax = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PerlinNoise_obj,octFreqPers,(void))

Void PerlinNoise_obj::seedOffset( int iSeed){
{
		HX_STACK_FRAME("openfl._internal.utils.PerlinNoise","seedOffset",0x045eabd9,"openfl._internal.utils.PerlinNoise.seedOffset","openfl/_internal/utils/PerlinNoise.hx",219,0x13a5c608)
		HX_STACK_THIS(this)
		HX_STACK_ARG(iSeed,"iSeed")
		HX_STACK_LINE(220)
		Float tmp = (iSeed * ((Float)16807.));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(220)
		Float tmp1 = hx::Mod(tmp,(int)2147483647);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(220)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(220)
		int tmp3 = iSeed = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(220)
		this->iXoffset = tmp3;
		HX_STACK_LINE(221)
		Float tmp4 = (iSeed * ((Float)16807.));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(221)
		Float tmp5 = hx::Mod(tmp4,(int)2147483647);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(221)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(221)
		int tmp7 = iSeed = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(221)
		this->iYoffset = tmp7;
		HX_STACK_LINE(222)
		Float tmp8 = (iSeed * ((Float)16807.));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(222)
		Float tmp9 = hx::Mod(tmp8,(int)2147483647);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(222)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(222)
		int tmp11 = iSeed = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(222)
		this->iZoffset = tmp11;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PerlinNoise_obj,seedOffset,(void))

Array< int > PerlinNoise_obj::P;


PerlinNoise_obj::PerlinNoise_obj()
{
}

void PerlinNoise_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PerlinNoise);
	HX_MARK_MEMBER_NAME(octaves,"octaves");
	HX_MARK_MEMBER_NAME(aOctFreq,"aOctFreq");
	HX_MARK_MEMBER_NAME(aOctPers,"aOctPers");
	HX_MARK_MEMBER_NAME(fPersMax,"fPersMax");
	HX_MARK_MEMBER_NAME(iXoffset,"iXoffset");
	HX_MARK_MEMBER_NAME(iYoffset,"iYoffset");
	HX_MARK_MEMBER_NAME(iZoffset,"iZoffset");
	HX_MARK_MEMBER_NAME(baseFactor,"baseFactor");
	HX_MARK_END_CLASS();
}

void PerlinNoise_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(octaves,"octaves");
	HX_VISIT_MEMBER_NAME(aOctFreq,"aOctFreq");
	HX_VISIT_MEMBER_NAME(aOctPers,"aOctPers");
	HX_VISIT_MEMBER_NAME(fPersMax,"fPersMax");
	HX_VISIT_MEMBER_NAME(iXoffset,"iXoffset");
	HX_VISIT_MEMBER_NAME(iYoffset,"iYoffset");
	HX_VISIT_MEMBER_NAME(iZoffset,"iZoffset");
	HX_VISIT_MEMBER_NAME(baseFactor,"baseFactor");
}

Dynamic PerlinNoise_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"octaves") ) { return octaves; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"aOctFreq") ) { return aOctFreq; }
		if (HX_FIELD_EQ(inName,"aOctPers") ) { return aOctPers; }
		if (HX_FIELD_EQ(inName,"fPersMax") ) { return fPersMax; }
		if (HX_FIELD_EQ(inName,"iXoffset") ) { return iXoffset; }
		if (HX_FIELD_EQ(inName,"iYoffset") ) { return iYoffset; }
		if (HX_FIELD_EQ(inName,"iZoffset") ) { return iZoffset; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"baseFactor") ) { return baseFactor; }
		if (HX_FIELD_EQ(inName,"seedOffset") ) { return seedOffset_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"octFreqPers") ) { return octFreqPers_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool PerlinNoise_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"P") ) { outValue = P; return true;  }
	}
	return false;
}

Dynamic PerlinNoise_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"octaves") ) { octaves=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"aOctFreq") ) { aOctFreq=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"aOctPers") ) { aOctPers=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fPersMax") ) { fPersMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iXoffset") ) { iXoffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iYoffset") ) { iYoffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iZoffset") ) { iZoffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"baseFactor") ) { baseFactor=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PerlinNoise_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"P") ) { P=ioValue.Cast< Array< int > >(); return true; }
	}
	return false;
}

void PerlinNoise_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("octaves","\x83","\x15","\x16","\xa8"));
	outFields->push(HX_HCSTRING("aOctFreq","\x57","\xaf","\xa8","\x0f"));
	outFields->push(HX_HCSTRING("aOctPers","\x95","\xff","\x3a","\x16"));
	outFields->push(HX_HCSTRING("fPersMax","\x88","\x73","\xc6","\x1a"));
	outFields->push(HX_HCSTRING("iXoffset","\xa2","\x38","\x51","\x21"));
	outFields->push(HX_HCSTRING("iYoffset","\x63","\xaf","\xe6","\x4a"));
	outFields->push(HX_HCSTRING("iZoffset","\x24","\x26","\x7c","\x74"));
	outFields->push(HX_HCSTRING("baseFactor","\xc0","\xd7","\x3d","\xbc"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(PerlinNoise_obj,octaves),HX_HCSTRING("octaves","\x83","\x15","\x16","\xa8")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(PerlinNoise_obj,aOctFreq),HX_HCSTRING("aOctFreq","\x57","\xaf","\xa8","\x0f")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(PerlinNoise_obj,aOctPers),HX_HCSTRING("aOctPers","\x95","\xff","\x3a","\x16")},
	{hx::fsFloat,(int)offsetof(PerlinNoise_obj,fPersMax),HX_HCSTRING("fPersMax","\x88","\x73","\xc6","\x1a")},
	{hx::fsFloat,(int)offsetof(PerlinNoise_obj,iXoffset),HX_HCSTRING("iXoffset","\xa2","\x38","\x51","\x21")},
	{hx::fsFloat,(int)offsetof(PerlinNoise_obj,iYoffset),HX_HCSTRING("iYoffset","\x63","\xaf","\xe6","\x4a")},
	{hx::fsFloat,(int)offsetof(PerlinNoise_obj,iZoffset),HX_HCSTRING("iZoffset","\x24","\x26","\x7c","\x74")},
	{hx::fsFloat,(int)offsetof(PerlinNoise_obj,baseFactor),HX_HCSTRING("baseFactor","\xc0","\xd7","\x3d","\xbc")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(void *) &PerlinNoise_obj::P,HX_HCSTRING("P","\x50","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("octaves","\x83","\x15","\x16","\xa8"),
	HX_HCSTRING("aOctFreq","\x57","\xaf","\xa8","\x0f"),
	HX_HCSTRING("aOctPers","\x95","\xff","\x3a","\x16"),
	HX_HCSTRING("fPersMax","\x88","\x73","\xc6","\x1a"),
	HX_HCSTRING("iXoffset","\xa2","\x38","\x51","\x21"),
	HX_HCSTRING("iYoffset","\x63","\xaf","\xe6","\x4a"),
	HX_HCSTRING("iZoffset","\x24","\x26","\x7c","\x74"),
	HX_HCSTRING("baseFactor","\xc0","\xd7","\x3d","\xbc"),
	HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"),
	HX_HCSTRING("octFreqPers","\xce","\x9e","\x7b","\xa2"),
	HX_HCSTRING("seedOffset","\xe4","\xbb","\xcf","\xfe"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PerlinNoise_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PerlinNoise_obj::P,"P");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PerlinNoise_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PerlinNoise_obj::P,"P");
};

#endif

hx::Class PerlinNoise_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("P","\x50","\x00","\x00","\x00"),
	::String(null()) };

void PerlinNoise_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.utils.PerlinNoise","\x59","\xb2","\xee","\x42");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PerlinNoise_obj::__GetStatic;
	__mClass->mSetStaticField = &PerlinNoise_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PerlinNoise_obj >;
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

void PerlinNoise_obj::__boot()
{
	P= Array_obj< int >::__new().Add((int)151).Add((int)160).Add((int)137).Add((int)91).Add((int)90).Add((int)15).Add((int)131).Add((int)13).Add((int)201).Add((int)95).Add((int)96).Add((int)53).Add((int)194).Add((int)233).Add((int)7).Add((int)225).Add((int)140).Add((int)36).Add((int)103).Add((int)30).Add((int)69).Add((int)142).Add((int)8).Add((int)99).Add((int)37).Add((int)240).Add((int)21).Add((int)10).Add((int)23).Add((int)190).Add((int)6).Add((int)148).Add((int)247).Add((int)120).Add((int)234).Add((int)75).Add((int)0).Add((int)26).Add((int)197).Add((int)62).Add((int)94).Add((int)252).Add((int)219).Add((int)203).Add((int)117).Add((int)35).Add((int)11).Add((int)32).Add((int)57).Add((int)177).Add((int)33).Add((int)88).Add((int)237).Add((int)149).Add((int)56).Add((int)87).Add((int)174).Add((int)20).Add((int)125).Add((int)136).Add((int)171).Add((int)168).Add((int)68).Add((int)175).Add((int)74).Add((int)165).Add((int)71).Add((int)134).Add((int)139).Add((int)48).Add((int)27).Add((int)166).Add((int)77).Add((int)146).Add((int)158).Add((int)231).Add((int)83).Add((int)111).Add((int)229).Add((int)122).Add((int)60).Add((int)211).Add((int)133).Add((int)230).Add((int)220).Add((int)105).Add((int)92).Add((int)41).Add((int)55).Add((int)46).Add((int)245).Add((int)40).Add((int)244).Add((int)102).Add((int)143).Add((int)54).Add((int)65).Add((int)25).Add((int)63).Add((int)161).Add((int)1).Add((int)216).Add((int)80).Add((int)73).Add((int)209).Add((int)76).Add((int)132).Add((int)187).Add((int)208).Add((int)89).Add((int)18).Add((int)169).Add((int)200).Add((int)196).Add((int)135).Add((int)130).Add((int)116).Add((int)188).Add((int)159).Add((int)86).Add((int)164).Add((int)100).Add((int)109).Add((int)198).Add((int)173).Add((int)186).Add((int)3).Add((int)64).Add((int)52).Add((int)217).Add((int)226).Add((int)250).Add((int)124).Add((int)123).Add((int)5).Add((int)202).Add((int)38).Add((int)147).Add((int)118).Add((int)126).Add((int)255).Add((int)82).Add((int)85).Add((int)212).Add((int)207).Add((int)206).Add((int)59).Add((int)227).Add((int)47).Add((int)16).Add((int)58).Add((int)17).Add((int)182).Add((int)189).Add((int)28).Add((int)42).Add((int)223).Add((int)183).Add((int)170).Add((int)213).Add((int)119).Add((int)248).Add((int)152).Add((int)2).Add((int)44).Add((int)154).Add((int)163).Add((int)70).Add((int)221).Add((int)153).Add((int)101).Add((int)155).Add((int)167).Add((int)43).Add((int)172).Add((int)9).Add((int)129).Add((int)22).Add((int)39).Add((int)253).Add((int)19).Add((int)98).Add((int)108).Add((int)110).Add((int)79).Add((int)113).Add((int)224).Add((int)232).Add((int)178).Add((int)185).Add((int)112).Add((int)104).Add((int)218).Add((int)246).Add((int)97).Add((int)228).Add((int)251).Add((int)34).Add((int)242).Add((int)193).Add((int)238).Add((int)210).Add((int)144).Add((int)12).Add((int)191).Add((int)179).Add((int)162).Add((int)241).Add((int)81).Add((int)51).Add((int)145).Add((int)235).Add((int)249).Add((int)14).Add((int)239).Add((int)107).Add((int)49).Add((int)192).Add((int)214).Add((int)31).Add((int)181).Add((int)199).Add((int)106).Add((int)157).Add((int)184).Add((int)84).Add((int)204).Add((int)176).Add((int)115).Add((int)121).Add((int)50).Add((int)45).Add((int)127).Add((int)4).Add((int)150).Add((int)254).Add((int)138).Add((int)236).Add((int)205).Add((int)93).Add((int)222).Add((int)114).Add((int)67).Add((int)29).Add((int)24).Add((int)72).Add((int)243).Add((int)141).Add((int)128).Add((int)195).Add((int)78).Add((int)66).Add((int)215).Add((int)61).Add((int)156).Add((int)180).Add((int)151).Add((int)160).Add((int)137).Add((int)91).Add((int)90).Add((int)15).Add((int)131).Add((int)13).Add((int)201).Add((int)95).Add((int)96).Add((int)53).Add((int)194).Add((int)233).Add((int)7).Add((int)225).Add((int)140).Add((int)36).Add((int)103).Add((int)30).Add((int)69).Add((int)142).Add((int)8).Add((int)99).Add((int)37).Add((int)240).Add((int)21).Add((int)10).Add((int)23).Add((int)190).Add((int)6).Add((int)148).Add((int)247).Add((int)120).Add((int)234).Add((int)75).Add((int)0).Add((int)26).Add((int)197).Add((int)62).Add((int)94).Add((int)252).Add((int)219).Add((int)203).Add((int)117).Add((int)35).Add((int)11).Add((int)32).Add((int)57).Add((int)177).Add((int)33).Add((int)88).Add((int)237).Add((int)149).Add((int)56).Add((int)87).Add((int)174).Add((int)20).Add((int)125).Add((int)136).Add((int)171).Add((int)168).Add((int)68).Add((int)175).Add((int)74).Add((int)165).Add((int)71).Add((int)134).Add((int)139).Add((int)48).Add((int)27).Add((int)166).Add((int)77).Add((int)146).Add((int)158).Add((int)231).Add((int)83).Add((int)111).Add((int)229).Add((int)122).Add((int)60).Add((int)211).Add((int)133).Add((int)230).Add((int)220).Add((int)105).Add((int)92).Add((int)41).Add((int)55).Add((int)46).Add((int)245).Add((int)40).Add((int)244).Add((int)102).Add((int)143).Add((int)54).Add((int)65).Add((int)25).Add((int)63).Add((int)161).Add((int)1).Add((int)216).Add((int)80).Add((int)73).Add((int)209).Add((int)76).Add((int)132).Add((int)187).Add((int)208).Add((int)89).Add((int)18).Add((int)169).Add((int)200).Add((int)196).Add((int)135).Add((int)130).Add((int)116).Add((int)188).Add((int)159).Add((int)86).Add((int)164).Add((int)100).Add((int)109).Add((int)198).Add((int)173).Add((int)186).Add((int)3).Add((int)64).Add((int)52).Add((int)217).Add((int)226).Add((int)250).Add((int)124).Add((int)123).Add((int)5).Add((int)202).Add((int)38).Add((int)147).Add((int)118).Add((int)126).Add((int)255).Add((int)82).Add((int)85).Add((int)212).Add((int)207).Add((int)206).Add((int)59).Add((int)227).Add((int)47).Add((int)16).Add((int)58).Add((int)17).Add((int)182).Add((int)189).Add((int)28).Add((int)42).Add((int)223).Add((int)183).Add((int)170).Add((int)213).Add((int)119).Add((int)248).Add((int)152).Add((int)2).Add((int)44).Add((int)154).Add((int)163).Add((int)70).Add((int)221).Add((int)153).Add((int)101).Add((int)155).Add((int)167).Add((int)43).Add((int)172).Add((int)9).Add((int)129).Add((int)22).Add((int)39).Add((int)253).Add((int)19).Add((int)98).Add((int)108).Add((int)110).Add((int)79).Add((int)113).Add((int)224).Add((int)232).Add((int)178).Add((int)185).Add((int)112).Add((int)104).Add((int)218).Add((int)246).Add((int)97).Add((int)228).Add((int)251).Add((int)34).Add((int)242).Add((int)193).Add((int)238).Add((int)210).Add((int)144).Add((int)12).Add((int)191).Add((int)179).Add((int)162).Add((int)241).Add((int)81).Add((int)51).Add((int)145).Add((int)235).Add((int)249).Add((int)14).Add((int)239).Add((int)107).Add((int)49).Add((int)192).Add((int)214).Add((int)31).Add((int)181).Add((int)199).Add((int)106).Add((int)157).Add((int)184).Add((int)84).Add((int)204).Add((int)176).Add((int)115).Add((int)121).Add((int)50).Add((int)45).Add((int)127).Add((int)4).Add((int)150).Add((int)254).Add((int)138).Add((int)236).Add((int)205).Add((int)93).Add((int)222).Add((int)114).Add((int)67).Add((int)29).Add((int)24).Add((int)72).Add((int)243).Add((int)141).Add((int)128).Add((int)195).Add((int)78).Add((int)66).Add((int)215).Add((int)61).Add((int)156).Add((int)180);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace utils
