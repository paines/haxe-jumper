#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_Context3DStateCache
#include <openfl/_internal/stage3D/Context3DStateCache.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
namespace openfl{
namespace _internal{
namespace stage3D{

Void Context3DStateCache_obj::__construct()
{
HX_STACK_FRAME("openfl._internal.stage3D.Context3DStateCache","new",0xfc35c194,"openfl._internal.stage3D.Context3DStateCache.new","openfl/_internal/stage3D/Context3DStateCache.hx",11,0xc7f853df)
HX_STACK_THIS(this)
{
	struct _Function_1_1{
		inline static ::openfl::_Vector::FloatVector Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/stage3D/Context3DStateCache.hx",27,0xc7f853df)
			{
				HX_STACK_LINE(27)
				bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
				HX_STACK_LINE(27)
				::openfl::_Vector::FloatVector tmp = ::openfl::_Vector::FloatVector_obj::__new((int)4096,fixed,null());		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(27)
				::openfl::_Vector::FloatVector tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(27)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(27)
	this->_registers = _Function_1_1::Block();
	HX_STACK_LINE(37)
	this->clearSettings();
}
;
	return null();
}

//Context3DStateCache_obj::~Context3DStateCache_obj() { }

Dynamic Context3DStateCache_obj::__CreateEmpty() { return  new Context3DStateCache_obj; }
hx::ObjectPtr< Context3DStateCache_obj > Context3DStateCache_obj::__new()
{  hx::ObjectPtr< Context3DStateCache_obj > _result_ = new Context3DStateCache_obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3DStateCache_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3DStateCache_obj > _result_ = new Context3DStateCache_obj();
	_result_->__construct();
	return _result_;}

Void Context3DStateCache_obj::clearRegisters( ){
{
		HX_STACK_FRAME("openfl._internal.stage3D.Context3DStateCache","clearRegisters",0x47eb38af,"openfl._internal.stage3D.Context3DStateCache.clearRegisters","openfl/_internal/stage3D/Context3DStateCache.hx",42,0xc7f853df)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		int tmp = (int)4096;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		int numFloats = tmp;		HX_STACK_VAR(numFloats,"numFloats");
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(46)
			while((true)){
				HX_STACK_LINE(46)
				bool tmp1 = (_g < numFloats);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(46)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(46)
				if ((tmp2)){
					HX_STACK_LINE(46)
					break;
				}
				HX_STACK_LINE(46)
				int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(46)
				int c = tmp3;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(48)
				::openfl::_Vector::FloatVector tmp4 = this->_registers;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(48)
				int tmp5 = c;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(48)
				Float tmp6 = tmp4->set(tmp5,((Float)-999999999.0));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(48)
				tmp6;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3DStateCache_obj,clearRegisters,(void))

Void Context3DStateCache_obj::clearSettings( ){
{
		HX_STACK_FRAME("openfl._internal.stage3D.Context3DStateCache","clearSettings",0x4de179c4,"openfl._internal.stage3D.Context3DStateCache.clearSettings","openfl/_internal/stage3D/Context3DStateCache.hx",55,0xc7f853df)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		this->_srcBlendFactor = null();
		HX_STACK_LINE(58)
		this->_destBlendFactor = null();
		HX_STACK_LINE(59)
		this->_depthTestEnabled = false;
		HX_STACK_LINE(60)
		this->_depthTestMask = false;
		HX_STACK_LINE(61)
		this->_depthTestCompareMode = null();
		HX_STACK_LINE(62)
		this->_program = null();
		HX_STACK_LINE(63)
		this->_cullingMode = null();
		HX_STACK_LINE(64)
		this->_activeTexture = (int)-1;
		HX_STACK_LINE(65)
		this->_activeVertexArray = (int)-1;
		HX_STACK_LINE(66)
		this->_viewportOriginX = (int)-1;
		HX_STACK_LINE(67)
		this->_viewportOriginY = (int)-1;
		HX_STACK_LINE(68)
		this->_viewportWidth = (int)-1;
		HX_STACK_LINE(69)
		this->_viewportHeight = (int)-1;
		HX_STACK_LINE(71)
		this->clearRegisters();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3DStateCache_obj,clearSettings,(void))

bool Context3DStateCache_obj::updateActiveTextureSample( int texture){
	HX_STACK_FRAME("openfl._internal.stage3D.Context3DStateCache","updateActiveTextureSample",0xbea3116a,"openfl._internal.stage3D.Context3DStateCache.updateActiveTextureSample","openfl/_internal/stage3D/Context3DStateCache.hx",76,0xc7f853df)
	HX_STACK_THIS(this)
	HX_STACK_ARG(texture,"texture")
	HX_STACK_LINE(78)
	bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	if ((tmp)){
		HX_STACK_LINE(78)
		int tmp2 = texture;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(78)
		int tmp3 = this->_activeTexture;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(78)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(78)
		tmp1 = (tmp2 == tmp4);
	}
	else{
		HX_STACK_LINE(78)
		tmp1 = false;
	}
	HX_STACK_LINE(78)
	if ((tmp1)){
		HX_STACK_LINE(80)
		return false;
	}
	HX_STACK_LINE(84)
	this->_activeTexture = texture;
	HX_STACK_LINE(85)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateActiveTextureSample,return )

bool Context3DStateCache_obj::updateActiveVertexArray( int vertexArray){
	HX_STACK_FRAME("openfl._internal.stage3D.Context3DStateCache","updateActiveVertexArray",0x147a1a5a,"openfl._internal.stage3D.Context3DStateCache.updateActiveVertexArray","openfl/_internal/stage3D/Context3DStateCache.hx",90,0xc7f853df)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vertexArray,"vertexArray")
	HX_STACK_LINE(92)
	bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(92)
	if ((tmp)){
		HX_STACK_LINE(92)
		int tmp2 = vertexArray;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(92)
		int tmp3 = this->_activeVertexArray;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(92)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(92)
		tmp1 = (tmp2 == tmp4);
	}
	else{
		HX_STACK_LINE(92)
		tmp1 = false;
	}
	HX_STACK_LINE(92)
	if ((tmp1)){
		HX_STACK_LINE(94)
		return false;
	}
	HX_STACK_LINE(98)
	this->_activeVertexArray = vertexArray;
	HX_STACK_LINE(99)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateActiveVertexArray,return )

bool Context3DStateCache_obj::updateBlendDestFactor( Dynamic factor){
	HX_STACK_FRAME("openfl._internal.stage3D.Context3DStateCache","updateBlendDestFactor",0xd0cb3ead,"openfl._internal.stage3D.Context3DStateCache.updateBlendDestFactor","openfl/_internal/stage3D/Context3DStateCache.hx",104,0xc7f853df)
	HX_STACK_THIS(this)
	HX_STACK_ARG(factor,"factor")
	HX_STACK_LINE(106)
	bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(106)
	if ((tmp)){
		HX_STACK_LINE(106)
		Dynamic tmp2 = factor;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		Dynamic tmp3 = this->_destBlendFactor;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(106)
		Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(106)
		tmp1 = (tmp2 == tmp4);
	}
	else{
		HX_STACK_LINE(106)
		tmp1 = false;
	}
	HX_STACK_LINE(106)
	if ((tmp1)){
		HX_STACK_LINE(108)
		return false;
	}
	HX_STACK_LINE(112)
	this->_destBlendFactor = factor;
	HX_STACK_LINE(113)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateBlendDestFactor,return )

bool Context3DStateCache_obj::updateBlendSrcFactor( Dynamic factor){
	HX_STACK_FRAME("openfl._internal.stage3D.Context3DStateCache","updateBlendSrcFactor",0x54a68877,"openfl._internal.stage3D.Context3DStateCache.updateBlendSrcFactor","openfl/_internal/stage3D/Context3DStateCache.hx",118,0xc7f853df)
	HX_STACK_THIS(this)
	HX_STACK_ARG(factor,"factor")
	HX_STACK_LINE(120)
	bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(120)
	if ((tmp)){
		HX_STACK_LINE(120)
		Dynamic tmp2 = factor;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(120)
		Dynamic tmp3 = this->_srcBlendFactor;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(120)
		Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(120)
		tmp1 = (tmp2 == tmp4);
	}
	else{
		HX_STACK_LINE(120)
		tmp1 = false;
	}
	HX_STACK_LINE(120)
	if ((tmp1)){
		HX_STACK_LINE(122)
		return false;
	}
	HX_STACK_LINE(126)
	this->_srcBlendFactor = factor;
	HX_STACK_LINE(127)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateBlendSrcFactor,return )

bool Context3DStateCache_obj::updateCullingMode( Dynamic cullMode){
	HX_STACK_FRAME("openfl._internal.stage3D.Context3DStateCache","updateCullingMode",0x8ec7aa9e,"openfl._internal.stage3D.Context3DStateCache.updateCullingMode","openfl/_internal/stage3D/Context3DStateCache.hx",132,0xc7f853df)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cullMode,"cullMode")
	HX_STACK_LINE(134)
	bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(134)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(134)
	if ((tmp)){
		HX_STACK_LINE(134)
		Dynamic tmp2 = cullMode;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(134)
		Dynamic tmp3 = this->_cullingMode;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(134)
		Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(134)
		tmp1 = (tmp2 == tmp4);
	}
	else{
		HX_STACK_LINE(134)
		tmp1 = false;
	}
	HX_STACK_LINE(134)
	if ((tmp1)){
		HX_STACK_LINE(136)
		return false;
	}
	HX_STACK_LINE(140)
	this->_cullingMode = cullMode;
	HX_STACK_LINE(141)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateCullingMode,return )

bool Context3DStateCache_obj::updateDepthCompareMode( Dynamic mode){
	HX_STACK_FRAME("openfl._internal.stage3D.Context3DStateCache","updateDepthCompareMode",0xcaf041da,"openfl._internal.stage3D.Context3DStateCache.updateDepthCompareMode","openfl/_internal/stage3D/Context3DStateCache.hx",146,0xc7f853df)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mode,"mode")
	HX_STACK_LINE(148)
	bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(148)
	if ((tmp)){
		HX_STACK_LINE(148)
		Dynamic tmp2 = mode;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(148)
		Dynamic tmp3 = this->_depthTestCompareMode;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(148)
		Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(148)
		tmp1 = (tmp2 == tmp4);
	}
	else{
		HX_STACK_LINE(148)
		tmp1 = false;
	}
	HX_STACK_LINE(148)
	if ((tmp1)){
		HX_STACK_LINE(150)
		return false;
	}
	HX_STACK_LINE(154)
	this->_depthTestCompareMode = mode;
	HX_STACK_LINE(155)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateDepthCompareMode,return )

bool Context3DStateCache_obj::updateDepthTestEnabled( bool test){
	HX_STACK_FRAME("openfl._internal.stage3D.Context3DStateCache","updateDepthTestEnabled",0x47bd6581,"openfl._internal.stage3D.Context3DStateCache.updateDepthTestEnabled","openfl/_internal/stage3D/Context3DStateCache.hx",160,0xc7f853df)
	HX_STACK_THIS(this)
	HX_STACK_ARG(test,"test")
	HX_STACK_LINE(162)
	bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(162)
	if ((tmp)){
		HX_STACK_LINE(162)
		bool tmp2 = test;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		bool tmp3 = this->_depthTestEnabled;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(162)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(162)
		tmp1 = (tmp2 == tmp4);
	}
	else{
		HX_STACK_LINE(162)
		tmp1 = false;
	}
	HX_STACK_LINE(162)
	if ((tmp1)){
		HX_STACK_LINE(164)
		return false;
	}
	HX_STACK_LINE(168)
	this->_depthTestEnabled = test;
	HX_STACK_LINE(169)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateDepthTestEnabled,return )

bool Context3DStateCache_obj::updateDepthTestMask( bool mask){
	HX_STACK_FRAME("openfl._internal.stage3D.Context3DStateCache","updateDepthTestMask",0xcdb33fec,"openfl._internal.stage3D.Context3DStateCache.updateDepthTestMask","openfl/_internal/stage3D/Context3DStateCache.hx",174,0xc7f853df)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_LINE(176)
	bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(176)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(176)
	if ((tmp)){
		HX_STACK_LINE(176)
		bool tmp2 = mask;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(176)
		bool tmp3 = this->_depthTestMask;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(176)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(176)
		tmp1 = (tmp2 == tmp4);
	}
	else{
		HX_STACK_LINE(176)
		tmp1 = false;
	}
	HX_STACK_LINE(176)
	if ((tmp1)){
		HX_STACK_LINE(178)
		return false;
	}
	HX_STACK_LINE(182)
	this->_depthTestMask = mask;
	HX_STACK_LINE(183)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateDepthTestMask,return )

bool Context3DStateCache_obj::updateProgram3D( ::openfl::display3D::Program3D program3d){
	HX_STACK_FRAME("openfl._internal.stage3D.Context3DStateCache","updateProgram3D",0x56efe020,"openfl._internal.stage3D.Context3DStateCache.updateProgram3D","openfl/_internal/stage3D/Context3DStateCache.hx",188,0xc7f853df)
	HX_STACK_THIS(this)
	HX_STACK_ARG(program3d,"program3d")
	HX_STACK_LINE(190)
	bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(190)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(190)
	if ((tmp)){
		HX_STACK_LINE(190)
		::openfl::display3D::Program3D tmp2 = program3d;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(190)
		::openfl::display3D::Program3D tmp3 = this->_program;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(190)
		::openfl::display3D::Program3D tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(190)
		tmp1 = (tmp2 == tmp4);
	}
	else{
		HX_STACK_LINE(190)
		tmp1 = false;
	}
	HX_STACK_LINE(190)
	if ((tmp1)){
		HX_STACK_LINE(192)
		return false;
	}
	HX_STACK_LINE(196)
	this->_program = program3d;
	HX_STACK_LINE(197)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateProgram3D,return )

bool Context3DStateCache_obj::updateRegisters( ::openfl::_Vector::FloatVector mTemp,int startRegister,int numRegisters){
	HX_STACK_FRAME("openfl._internal.stage3D.Context3DStateCache","updateRegisters",0x353db09b,"openfl._internal.stage3D.Context3DStateCache.updateRegisters","openfl/_internal/stage3D/Context3DStateCache.hx",204,0xc7f853df)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mTemp,"mTemp")
	HX_STACK_ARG(startRegister,"startRegister")
	HX_STACK_ARG(numRegisters,"numRegisters")
	HX_STACK_LINE(204)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC3(Context3DStateCache_obj,updateRegisters,return )

bool Context3DStateCache_obj::updateViewport( int originX,int originY,int width,int height){
	HX_STACK_FRAME("openfl._internal.stage3D.Context3DStateCache","updateViewport",0xa0a332db,"openfl._internal.stage3D.Context3DStateCache.updateViewport","openfl/_internal/stage3D/Context3DStateCache.hx",229,0xc7f853df)
	HX_STACK_THIS(this)
	HX_STACK_ARG(originX,"originX")
	HX_STACK_ARG(originY,"originY")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(231)
	bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(231)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(231)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(231)
	if ((tmp1)){
		HX_STACK_LINE(231)
		int tmp3 = this->_viewportOriginX;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(231)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(231)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(231)
		int tmp6 = originX;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(231)
		tmp2 = (tmp5 == tmp6);
	}
	else{
		HX_STACK_LINE(231)
		tmp2 = false;
	}
	HX_STACK_LINE(231)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(231)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(231)
	if ((tmp3)){
		HX_STACK_LINE(231)
		int tmp5 = this->_viewportOriginY;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(231)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(231)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(231)
		int tmp8 = originY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(231)
		tmp4 = (tmp7 == tmp8);
	}
	else{
		HX_STACK_LINE(231)
		tmp4 = false;
	}
	HX_STACK_LINE(231)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(231)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(231)
	if ((tmp5)){
		HX_STACK_LINE(231)
		int tmp7 = this->_viewportWidth;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(231)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(231)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(231)
		int tmp10 = width;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(231)
		tmp6 = (tmp9 == tmp10);
	}
	else{
		HX_STACK_LINE(231)
		tmp6 = false;
	}
	HX_STACK_LINE(231)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(231)
	if ((tmp6)){
		HX_STACK_LINE(231)
		int tmp8 = this->_viewportHeight;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(231)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(231)
		int tmp10 = height;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(231)
		tmp7 = (tmp9 == tmp10);
	}
	else{
		HX_STACK_LINE(231)
		tmp7 = false;
	}
	HX_STACK_LINE(231)
	if ((tmp7)){
		HX_STACK_LINE(233)
		return false;
	}
	HX_STACK_LINE(237)
	this->_viewportOriginX = originX;
	HX_STACK_LINE(238)
	this->_viewportOriginY = originY;
	HX_STACK_LINE(239)
	this->_viewportWidth = width;
	HX_STACK_LINE(240)
	this->_viewportHeight = height;
	HX_STACK_LINE(242)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC4(Context3DStateCache_obj,updateViewport,return )

int Context3DStateCache_obj::FLOATS_PER_REGISTER;

int Context3DStateCache_obj::MAX_NUM_REGISTERS;

bool Context3DStateCache_obj::disableCache;


Context3DStateCache_obj::Context3DStateCache_obj()
{
}

void Context3DStateCache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Context3DStateCache);
	HX_MARK_MEMBER_NAME(_activeTexture,"_activeTexture");
	HX_MARK_MEMBER_NAME(_activeVertexArray,"_activeVertexArray");
	HX_MARK_MEMBER_NAME(_cullingMode,"_cullingMode");
	HX_MARK_MEMBER_NAME(_depthTestCompareMode,"_depthTestCompareMode");
	HX_MARK_MEMBER_NAME(_depthTestEnabled,"_depthTestEnabled");
	HX_MARK_MEMBER_NAME(_depthTestMask,"_depthTestMask");
	HX_MARK_MEMBER_NAME(_destBlendFactor,"_destBlendFactor");
	HX_MARK_MEMBER_NAME(_program,"_program");
	HX_MARK_MEMBER_NAME(_registers,"_registers");
	HX_MARK_MEMBER_NAME(_srcBlendFactor,"_srcBlendFactor");
	HX_MARK_MEMBER_NAME(_viewportHeight,"_viewportHeight");
	HX_MARK_MEMBER_NAME(_viewportOriginX,"_viewportOriginX");
	HX_MARK_MEMBER_NAME(_viewportOriginY,"_viewportOriginY");
	HX_MARK_MEMBER_NAME(_viewportWidth,"_viewportWidth");
	HX_MARK_END_CLASS();
}

void Context3DStateCache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_activeTexture,"_activeTexture");
	HX_VISIT_MEMBER_NAME(_activeVertexArray,"_activeVertexArray");
	HX_VISIT_MEMBER_NAME(_cullingMode,"_cullingMode");
	HX_VISIT_MEMBER_NAME(_depthTestCompareMode,"_depthTestCompareMode");
	HX_VISIT_MEMBER_NAME(_depthTestEnabled,"_depthTestEnabled");
	HX_VISIT_MEMBER_NAME(_depthTestMask,"_depthTestMask");
	HX_VISIT_MEMBER_NAME(_destBlendFactor,"_destBlendFactor");
	HX_VISIT_MEMBER_NAME(_program,"_program");
	HX_VISIT_MEMBER_NAME(_registers,"_registers");
	HX_VISIT_MEMBER_NAME(_srcBlendFactor,"_srcBlendFactor");
	HX_VISIT_MEMBER_NAME(_viewportHeight,"_viewportHeight");
	HX_VISIT_MEMBER_NAME(_viewportOriginX,"_viewportOriginX");
	HX_VISIT_MEMBER_NAME(_viewportOriginY,"_viewportOriginY");
	HX_VISIT_MEMBER_NAME(_viewportWidth,"_viewportWidth");
}

Dynamic Context3DStateCache_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_program") ) { return _program; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_registers") ) { return _registers; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_cullingMode") ) { return _cullingMode; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"clearSettings") ) { return clearSettings_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_activeTexture") ) { return _activeTexture; }
		if (HX_FIELD_EQ(inName,"_depthTestMask") ) { return _depthTestMask; }
		if (HX_FIELD_EQ(inName,"_viewportWidth") ) { return _viewportWidth; }
		if (HX_FIELD_EQ(inName,"clearRegisters") ) { return clearRegisters_dyn(); }
		if (HX_FIELD_EQ(inName,"updateViewport") ) { return updateViewport_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_srcBlendFactor") ) { return _srcBlendFactor; }
		if (HX_FIELD_EQ(inName,"_viewportHeight") ) { return _viewportHeight; }
		if (HX_FIELD_EQ(inName,"updateProgram3D") ) { return updateProgram3D_dyn(); }
		if (HX_FIELD_EQ(inName,"updateRegisters") ) { return updateRegisters_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_destBlendFactor") ) { return _destBlendFactor; }
		if (HX_FIELD_EQ(inName,"_viewportOriginX") ) { return _viewportOriginX; }
		if (HX_FIELD_EQ(inName,"_viewportOriginY") ) { return _viewportOriginY; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_depthTestEnabled") ) { return _depthTestEnabled; }
		if (HX_FIELD_EQ(inName,"updateCullingMode") ) { return updateCullingMode_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_activeVertexArray") ) { return _activeVertexArray; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateDepthTestMask") ) { return updateDepthTestMask_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateBlendSrcFactor") ) { return updateBlendSrcFactor_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_depthTestCompareMode") ) { return _depthTestCompareMode; }
		if (HX_FIELD_EQ(inName,"updateBlendDestFactor") ) { return updateBlendDestFactor_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"updateDepthCompareMode") ) { return updateDepthCompareMode_dyn(); }
		if (HX_FIELD_EQ(inName,"updateDepthTestEnabled") ) { return updateDepthTestEnabled_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"updateActiveVertexArray") ) { return updateActiveVertexArray_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"updateActiveTextureSample") ) { return updateActiveTextureSample_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Context3DStateCache_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_program") ) { _program=inValue.Cast< ::openfl::display3D::Program3D >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_registers") ) { _registers=inValue.Cast< ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_cullingMode") ) { _cullingMode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_activeTexture") ) { _activeTexture=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_depthTestMask") ) { _depthTestMask=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_viewportWidth") ) { _viewportWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_srcBlendFactor") ) { _srcBlendFactor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_viewportHeight") ) { _viewportHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_destBlendFactor") ) { _destBlendFactor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_viewportOriginX") ) { _viewportOriginX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_viewportOriginY") ) { _viewportOriginY=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_depthTestEnabled") ) { _depthTestEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_activeVertexArray") ) { _activeVertexArray=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_depthTestCompareMode") ) { _depthTestCompareMode=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Context3DStateCache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_activeTexture","\xf6","\x03","\xfc","\x94"));
	outFields->push(HX_HCSTRING("_activeVertexArray","\x30","\x9c","\x71","\x09"));
	outFields->push(HX_HCSTRING("_cullingMode","\xf4","\x87","\x45","\xc8"));
	outFields->push(HX_HCSTRING("_depthTestCompareMode","\x92","\x77","\x60","\x2d"));
	outFields->push(HX_HCSTRING("_depthTestEnabled","\x6b","\x70","\x8f","\xca"));
	outFields->push(HX_HCSTRING("_depthTestMask","\xc2","\x9e","\x63","\xc8"));
	outFields->push(HX_HCSTRING("_destBlendFactor","\x3f","\xbb","\x73","\x88"));
	outFields->push(HX_HCSTRING("_program","\x05","\xa4","\xb1","\x2d"));
	outFields->push(HX_HCSTRING("_registers","\x71","\x6c","\xb4","\x16"));
	outFields->push(HX_HCSTRING("_srcBlendFactor","\x1b","\x24","\xae","\xb6"));
	outFields->push(HX_HCSTRING("_viewportHeight","\x8c","\x61","\x74","\x97"));
	outFields->push(HX_HCSTRING("_viewportOriginX","\x6d","\xa6","\x1b","\x44"));
	outFields->push(HX_HCSTRING("_viewportOriginY","\x6e","\xa6","\x1b","\x44"));
	outFields->push(HX_HCSTRING("_viewportWidth","\x01","\x18","\xf0","\xf0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Context3DStateCache_obj,_activeTexture),HX_HCSTRING("_activeTexture","\xf6","\x03","\xfc","\x94")},
	{hx::fsInt,(int)offsetof(Context3DStateCache_obj,_activeVertexArray),HX_HCSTRING("_activeVertexArray","\x30","\x9c","\x71","\x09")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Context3DStateCache_obj,_cullingMode),HX_HCSTRING("_cullingMode","\xf4","\x87","\x45","\xc8")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Context3DStateCache_obj,_depthTestCompareMode),HX_HCSTRING("_depthTestCompareMode","\x92","\x77","\x60","\x2d")},
	{hx::fsBool,(int)offsetof(Context3DStateCache_obj,_depthTestEnabled),HX_HCSTRING("_depthTestEnabled","\x6b","\x70","\x8f","\xca")},
	{hx::fsBool,(int)offsetof(Context3DStateCache_obj,_depthTestMask),HX_HCSTRING("_depthTestMask","\xc2","\x9e","\x63","\xc8")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Context3DStateCache_obj,_destBlendFactor),HX_HCSTRING("_destBlendFactor","\x3f","\xbb","\x73","\x88")},
	{hx::fsObject /*::openfl::display3D::Program3D*/ ,(int)offsetof(Context3DStateCache_obj,_program),HX_HCSTRING("_program","\x05","\xa4","\xb1","\x2d")},
	{hx::fsObject /*::openfl::_Vector::FloatVector*/ ,(int)offsetof(Context3DStateCache_obj,_registers),HX_HCSTRING("_registers","\x71","\x6c","\xb4","\x16")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Context3DStateCache_obj,_srcBlendFactor),HX_HCSTRING("_srcBlendFactor","\x1b","\x24","\xae","\xb6")},
	{hx::fsInt,(int)offsetof(Context3DStateCache_obj,_viewportHeight),HX_HCSTRING("_viewportHeight","\x8c","\x61","\x74","\x97")},
	{hx::fsInt,(int)offsetof(Context3DStateCache_obj,_viewportOriginX),HX_HCSTRING("_viewportOriginX","\x6d","\xa6","\x1b","\x44")},
	{hx::fsInt,(int)offsetof(Context3DStateCache_obj,_viewportOriginY),HX_HCSTRING("_viewportOriginY","\x6e","\xa6","\x1b","\x44")},
	{hx::fsInt,(int)offsetof(Context3DStateCache_obj,_viewportWidth),HX_HCSTRING("_viewportWidth","\x01","\x18","\xf0","\xf0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Context3DStateCache_obj::FLOATS_PER_REGISTER,HX_HCSTRING("FLOATS_PER_REGISTER","\x8d","\x76","\x42","\x08")},
	{hx::fsInt,(void *) &Context3DStateCache_obj::MAX_NUM_REGISTERS,HX_HCSTRING("MAX_NUM_REGISTERS","\xbc","\x37","\x8a","\x55")},
	{hx::fsBool,(void *) &Context3DStateCache_obj::disableCache,HX_HCSTRING("disableCache","\x3a","\xb7","\x98","\x7f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_activeTexture","\xf6","\x03","\xfc","\x94"),
	HX_HCSTRING("_activeVertexArray","\x30","\x9c","\x71","\x09"),
	HX_HCSTRING("_cullingMode","\xf4","\x87","\x45","\xc8"),
	HX_HCSTRING("_depthTestCompareMode","\x92","\x77","\x60","\x2d"),
	HX_HCSTRING("_depthTestEnabled","\x6b","\x70","\x8f","\xca"),
	HX_HCSTRING("_depthTestMask","\xc2","\x9e","\x63","\xc8"),
	HX_HCSTRING("_destBlendFactor","\x3f","\xbb","\x73","\x88"),
	HX_HCSTRING("_program","\x05","\xa4","\xb1","\x2d"),
	HX_HCSTRING("_registers","\x71","\x6c","\xb4","\x16"),
	HX_HCSTRING("_srcBlendFactor","\x1b","\x24","\xae","\xb6"),
	HX_HCSTRING("_viewportHeight","\x8c","\x61","\x74","\x97"),
	HX_HCSTRING("_viewportOriginX","\x6d","\xa6","\x1b","\x44"),
	HX_HCSTRING("_viewportOriginY","\x6e","\xa6","\x1b","\x44"),
	HX_HCSTRING("_viewportWidth","\x01","\x18","\xf0","\xf0"),
	HX_HCSTRING("clearRegisters","\x63","\x45","\x17","\x79"),
	HX_HCSTRING("clearSettings","\x90","\x7f","\x9a","\xbe"),
	HX_HCSTRING("updateActiveTextureSample","\x36","\x99","\xb3","\x38"),
	HX_HCSTRING("updateActiveVertexArray","\x26","\xd7","\xc8","\x0f"),
	HX_HCSTRING("updateBlendDestFactor","\x79","\xf0","\xf0","\xf1"),
	HX_HCSTRING("updateBlendSrcFactor","\x2b","\x14","\x7b","\xed"),
	HX_HCSTRING("updateCullingMode","\x6a","\x86","\xa5","\xc6"),
	HX_HCSTRING("updateDepthCompareMode","\x8e","\x22","\xc6","\xaa"),
	HX_HCSTRING("updateDepthTestEnabled","\x35","\x46","\x93","\x27"),
	HX_HCSTRING("updateDepthTestMask","\xb8","\xa6","\x98","\x1d"),
	HX_HCSTRING("updateProgram3D","\xec","\xf0","\x4e","\x2c"),
	HX_HCSTRING("updateRegisters","\x67","\xc1","\x9c","\x0a"),
	HX_HCSTRING("updateViewport","\x8f","\x3f","\xcf","\xd1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DStateCache_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DStateCache_obj::FLOATS_PER_REGISTER,"FLOATS_PER_REGISTER");
	HX_MARK_MEMBER_NAME(Context3DStateCache_obj::MAX_NUM_REGISTERS,"MAX_NUM_REGISTERS");
	HX_MARK_MEMBER_NAME(Context3DStateCache_obj::disableCache,"disableCache");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DStateCache_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DStateCache_obj::FLOATS_PER_REGISTER,"FLOATS_PER_REGISTER");
	HX_VISIT_MEMBER_NAME(Context3DStateCache_obj::MAX_NUM_REGISTERS,"MAX_NUM_REGISTERS");
	HX_VISIT_MEMBER_NAME(Context3DStateCache_obj::disableCache,"disableCache");
};

#endif

hx::Class Context3DStateCache_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("FLOATS_PER_REGISTER","\x8d","\x76","\x42","\x08"),
	HX_HCSTRING("MAX_NUM_REGISTERS","\xbc","\x37","\x8a","\x55"),
	HX_HCSTRING("disableCache","\x3a","\xb7","\x98","\x7f"),
	::String(null()) };

void Context3DStateCache_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D.Context3DStateCache","\xa2","\xa7","\xb0","\x13");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Context3DStateCache_obj >;
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

void Context3DStateCache_obj::__boot()
{
	FLOATS_PER_REGISTER= (int)4;
	MAX_NUM_REGISTERS= (int)1024;
	disableCache= true;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
