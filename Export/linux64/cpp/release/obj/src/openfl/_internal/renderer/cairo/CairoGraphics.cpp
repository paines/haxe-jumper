#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandType
#include <openfl/_internal/renderer/DrawCommandType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

Void CairoGraphics_obj::__construct()
{
	return null();
}

//CairoGraphics_obj::~CairoGraphics_obj() { }

Dynamic CairoGraphics_obj::__CreateEmpty() { return  new CairoGraphics_obj; }
hx::ObjectPtr< CairoGraphics_obj > CairoGraphics_obj::__new()
{  hx::ObjectPtr< CairoGraphics_obj > _result_ = new CairoGraphics_obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoGraphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoGraphics_obj > _result_ = new CairoGraphics_obj();
	_result_->__construct();
	return _result_;}

Float CairoGraphics_obj::SIN45;

Float CairoGraphics_obj::TAN22;

bool CairoGraphics_obj::allowSmoothing;

::openfl::display::BitmapData CairoGraphics_obj::bitmapFill;

bool CairoGraphics_obj::bitmapRepeat;

::openfl::geom::Rectangle CairoGraphics_obj::bounds;

::lime::graphics::cairo::Cairo CairoGraphics_obj::cairo;

::openfl::_internal::renderer::DrawCommandBuffer CairoGraphics_obj::fillCommands;

Dynamic CairoGraphics_obj::fillPattern;

::openfl::geom::Matrix CairoGraphics_obj::fillPatternMatrix;

::openfl::display::Graphics CairoGraphics_obj::graphics;

bool CairoGraphics_obj::hasFill;

bool CairoGraphics_obj::hasStroke;

bool CairoGraphics_obj::hitTesting;

::openfl::geom::Matrix CairoGraphics_obj::inversePendingMatrix;

::openfl::geom::Matrix CairoGraphics_obj::pendingMatrix;

::openfl::_internal::renderer::DrawCommandBuffer CairoGraphics_obj::strokeCommands;

Dynamic CairoGraphics_obj::strokePattern;

Void CairoGraphics_obj::closePath( hx::Null< bool >  __o_strokeBefore){
bool strokeBefore = __o_strokeBefore.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","closePath",0x6dffa481,"openfl._internal.renderer.cairo.CairoGraphics.closePath","openfl/_internal/renderer/cairo/CairoGraphics.hx",59,0x744ae94c)
	HX_STACK_ARG(strokeBefore,"strokeBefore")
{
		HX_STACK_LINE(61)
		Dynamic tmp = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		if ((tmp1)){
			HX_STACK_LINE(63)
			return null();
		}
		HX_STACK_LINE(67)
		bool tmp2 = strokeBefore;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		if ((tmp3)){
			HX_STACK_LINE(69)
			::lime::graphics::cairo::Cairo tmp4 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(69)
			tmp4->closePath();
		}
		HX_STACK_LINE(73)
		::lime::graphics::cairo::Cairo tmp4 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(73)
		Dynamic tmp5 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(73)
		tmp4->set_source(tmp5);
		HX_STACK_LINE(74)
		bool tmp6 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(74)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(74)
		if ((tmp7)){
			HX_STACK_LINE(74)
			::lime::graphics::cairo::Cairo tmp8 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(74)
			tmp8->strokePreserve();
		}
		HX_STACK_LINE(76)
		bool tmp8 = strokeBefore;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(76)
		if ((tmp8)){
			HX_STACK_LINE(78)
			::lime::graphics::cairo::Cairo tmp9 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(78)
			tmp9->closePath();
		}
		HX_STACK_LINE(82)
		::lime::graphics::cairo::Cairo tmp9 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(82)
		tmp9->newPath();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoGraphics_obj,closePath,(void))

Dynamic CairoGraphics_obj::createGradientPattern( Dynamic type,cpp::ArrayBase colors,cpp::ArrayBase alphas,cpp::ArrayBase ratios,::openfl::geom::Matrix matrix,Dynamic spreadMethod,Dynamic interpolationMethod,Float focalPointRatio){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","createGradientPattern",0x9888a3a8,"openfl._internal.renderer.cairo.CairoGraphics.createGradientPattern","openfl/_internal/renderer/cairo/CairoGraphics.hx",87,0x744ae94c)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(alphas,"alphas")
	HX_STACK_ARG(ratios,"ratios")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(spreadMethod,"spreadMethod")
	HX_STACK_ARG(interpolationMethod,"interpolationMethod")
	HX_STACK_ARG(focalPointRatio,"focalPointRatio")
	HX_STACK_LINE(89)
	Dynamic pattern = null();		HX_STACK_VAR(pattern,"pattern");
	HX_STACK_LINE(91)
	Dynamic tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	switch( (int)(tmp)){
		case (int)1: {
			HX_STACK_LINE(95)
			bool tmp1 = (matrix == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(95)
			if ((tmp1)){
				HX_STACK_LINE(95)
				::openfl::geom::Matrix tmp2 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(95)
				matrix = tmp2;
			}
			HX_STACK_LINE(97)
			::openfl::geom::Point tmp2 = ::openfl::geom::Point_obj::__new(((Float)1638.4),(int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(97)
			::openfl::geom::Point tmp3 = matrix->transformPoint(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(97)
			::openfl::geom::Point point = tmp3;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(99)
			Float tmp4 = matrix->tx;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(99)
			::openfl::display::Graphics tmp5 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(99)
			Float tmp6 = tmp5->__bounds->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(99)
			Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(99)
			Float x = tmp7;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(100)
			Float tmp8 = matrix->ty;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(100)
			::openfl::display::Graphics tmp9 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(100)
			Float tmp10 = tmp9->__bounds->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(100)
			Float tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(100)
			Float y = tmp11;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(102)
			Float tmp12 = x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(102)
			Float tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(102)
			Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(102)
			Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(102)
			Float tmp16 = (point->x - matrix->tx);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(102)
			Float tmp17 = (Float(tmp16) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(102)
			Dynamic tmp18 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRadial(tmp12,tmp13,(int)0,tmp14,tmp15,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(102)
			pattern = tmp18;
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(106)
			bool tmp1 = (matrix == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(106)
			if ((tmp1)){
				HX_STACK_LINE(106)
				::openfl::geom::Matrix tmp2 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(106)
				matrix = tmp2;
			}
			HX_STACK_LINE(108)
			::openfl::geom::Point tmp2 = ::openfl::geom::Point_obj::__new(((Float)-819.2),(int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(108)
			::openfl::geom::Point tmp3 = matrix->transformPoint(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(108)
			::openfl::geom::Point point1 = tmp3;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(109)
			::openfl::geom::Point tmp4 = ::openfl::geom::Point_obj::__new(((Float)819.2),(int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(109)
			::openfl::geom::Point tmp5 = matrix->transformPoint(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(109)
			::openfl::geom::Point point2 = tmp5;		HX_STACK_VAR(point2,"point2");
			HX_STACK_LINE(111)
			::openfl::display::Graphics tmp6 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(111)
			Float tmp7 = tmp6->__bounds->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(111)
			hx::AddEq(point1->x,tmp7);
			HX_STACK_LINE(112)
			::openfl::display::Graphics tmp8 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(112)
			Float tmp9 = tmp8->__bounds->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(112)
			hx::AddEq(point2->x,tmp9);
			HX_STACK_LINE(113)
			::openfl::display::Graphics tmp10 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(113)
			Float tmp11 = tmp10->__bounds->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(113)
			hx::AddEq(point1->y,tmp11);
			HX_STACK_LINE(114)
			::openfl::display::Graphics tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(114)
			Float tmp13 = tmp12->__bounds->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(114)
			hx::AddEq(point2->y,tmp13);
			HX_STACK_LINE(116)
			Float tmp14 = point1->x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(116)
			Float tmp15 = point1->y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(116)
			Float tmp16 = point2->x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(116)
			Float tmp17 = point2->y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(116)
			Dynamic tmp18 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createLinear(tmp14,tmp15,tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(116)
			pattern = tmp18;
		}
		;break;
	}
	HX_STACK_LINE(120)
	{
		HX_STACK_LINE(120)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(120)
		int _g = colors->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(120)
		while((true)){
			HX_STACK_LINE(120)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(120)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(120)
			if ((tmp2)){
				HX_STACK_LINE(120)
				break;
			}
			HX_STACK_LINE(120)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(120)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(122)
			Dynamic tmp4 = colors->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(122)
			int rgb = tmp4;		HX_STACK_VAR(rgb,"rgb");
			HX_STACK_LINE(123)
			Dynamic tmp5 = alphas->__GetItem(i);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(123)
			Float alpha = tmp5;		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(124)
			int tmp6 = (int(rgb) & int((int)16711680));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(124)
			int tmp7 = hx::UShr(tmp6,(int)16);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(124)
			Float tmp8 = (Float(tmp7) / Float((int)255));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(124)
			Float r = tmp8;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(125)
			int tmp9 = (int(rgb) & int((int)65280));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(125)
			int tmp10 = hx::UShr(tmp9,(int)8);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(125)
			Float tmp11 = (Float(tmp10) / Float((int)255));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(125)
			Float g = tmp11;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(126)
			int tmp12 = (int(rgb) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(126)
			Float tmp13 = (Float(tmp12) / Float((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(126)
			Float b = tmp13;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(128)
			Dynamic tmp14 = ratios->__GetItem(i);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(128)
			Float tmp15 = (Float(tmp14) / Float((int)255));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(128)
			Float ratio = tmp15;		HX_STACK_VAR(ratio,"ratio");
			HX_STACK_LINE(129)
			bool tmp16 = (ratio < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(129)
			if ((tmp16)){
				HX_STACK_LINE(129)
				ratio = (int)0;
			}
			HX_STACK_LINE(130)
			bool tmp17 = (ratio > (int)1);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(130)
			if ((tmp17)){
				HX_STACK_LINE(130)
				ratio = (int)1;
			}
			HX_STACK_LINE(132)
			Dynamic tmp18 = pattern;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(132)
			Float tmp19 = ratio;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(132)
			Float tmp20 = r;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(132)
			Float tmp21 = g;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(132)
			Float tmp22 = b;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(132)
			Float tmp23 = alpha;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(132)
			::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::addColorStopRGBA(tmp18,tmp19,tmp20,tmp21,tmp22,tmp23);
		}
	}
	HX_STACK_LINE(136)
	Dynamic tmp1 = pattern;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(136)
	::lime::math::Matrix3 tmp2 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::get_matrix(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(136)
	::lime::math::Matrix3 mat = tmp2;		HX_STACK_VAR(mat,"mat");
	HX_STACK_LINE(138)
	::openfl::geom::Rectangle tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(138)
	mat->tx = tmp3->x;
	HX_STACK_LINE(139)
	::openfl::geom::Rectangle tmp4 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(139)
	mat->ty = tmp4->y;
	HX_STACK_LINE(141)
	Dynamic tmp5 = pattern;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(141)
	::lime::math::Matrix3 tmp6 = mat;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(141)
	::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_matrix(tmp5,tmp6);
	HX_STACK_LINE(143)
	Dynamic tmp7 = pattern;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(143)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(CairoGraphics_obj,createGradientPattern,return )

Dynamic CairoGraphics_obj::createImagePattern( ::openfl::display::BitmapData bitmapFill,::openfl::geom::Matrix matrix,bool bitmapRepeat){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","createImagePattern",0x42487dcd,"openfl._internal.renderer.cairo.CairoGraphics.createImagePattern","openfl/_internal/renderer/cairo/CairoGraphics.hx",148,0x744ae94c)
	HX_STACK_ARG(bitmapFill,"bitmapFill")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(bitmapRepeat,"bitmapRepeat")
	HX_STACK_LINE(150)
	Dynamic tmp = bitmapFill->getSurface();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(150)
	Dynamic tmp1 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(150)
	Dynamic pattern = tmp1;		HX_STACK_VAR(pattern,"pattern");
	HX_STACK_LINE(151)
	Dynamic tmp2 = pattern;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(151)
	bool tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::allowSmoothing;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(151)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(151)
	if ((tmp3)){
		HX_STACK_LINE(151)
		tmp4 = (int)1;
	}
	else{
		HX_STACK_LINE(151)
		tmp4 = (int)3;
	}
	HX_STACK_LINE(151)
	::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(tmp2,tmp4);
	HX_STACK_LINE(153)
	bool tmp5 = bitmapRepeat;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(153)
	if ((tmp5)){
		HX_STACK_LINE(155)
		Dynamic tmp6 = pattern;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(155)
		::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_extend(tmp6,(int)1);
	}
	HX_STACK_LINE(159)
	::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix = matrix;
	HX_STACK_LINE(161)
	Dynamic tmp6 = pattern;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(161)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoGraphics_obj,createImagePattern,return )

Void CairoGraphics_obj::drawRoundRect( Float x,Float y,Float width,Float height,Float ellipseWidth,Dynamic ellipseHeight){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","drawRoundRect",0xa42fd4f2,"openfl._internal.renderer.cairo.CairoGraphics.drawRoundRect","openfl/_internal/renderer/cairo/CairoGraphics.hx",166,0x744ae94c)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(ellipseWidth,"ellipseWidth")
		HX_STACK_ARG(ellipseHeight,"ellipseHeight")
		HX_STACK_LINE(168)
		bool tmp = (ellipseHeight == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(168)
		if ((tmp)){
			HX_STACK_LINE(168)
			ellipseHeight = ellipseWidth;
		}
		HX_STACK_LINE(170)
		hx::MultEq(ellipseWidth,((Float)0.5));
		HX_STACK_LINE(171)
		hx::MultEq(ellipseHeight,((Float)0.5));
		HX_STACK_LINE(173)
		Float tmp1 = ellipseWidth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(173)
		Float tmp2 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(173)
		bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(173)
		if ((tmp3)){
			HX_STACK_LINE(173)
			Float tmp4 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(173)
			ellipseWidth = tmp4;
		}
		HX_STACK_LINE(174)
		Dynamic tmp4 = ellipseHeight;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(174)
		Float tmp5 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(174)
		bool tmp6 = (tmp4 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(174)
		if ((tmp6)){
			HX_STACK_LINE(174)
			Float tmp7 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(174)
			ellipseHeight = tmp7;
		}
		HX_STACK_LINE(176)
		Float tmp7 = (x + width);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(176)
		Float xe = tmp7;		HX_STACK_VAR(xe,"xe");
		HX_STACK_LINE(177)
		Float tmp8 = (y + height);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(177)
		Float ye = tmp8;		HX_STACK_VAR(ye,"ye");
		HX_STACK_LINE(178)
		Float tmp9 = ellipseWidth;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(178)
		Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(178)
		Float tmp11 = ellipseWidth;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(178)
		Float tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::SIN45;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(178)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(178)
		Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(178)
		Float cx1 = tmp14;		HX_STACK_VAR(cx1,"cx1");
		HX_STACK_LINE(179)
		Float tmp15 = ellipseWidth;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(179)
		Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(179)
		Float tmp17 = ellipseWidth;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(179)
		Float tmp18 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::TAN22;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(179)
		Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(179)
		Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(179)
		Float cx2 = tmp20;		HX_STACK_VAR(cx2,"cx2");
		HX_STACK_LINE(180)
		Dynamic tmp21 = ellipseHeight;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(180)
		Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(180)
		Dynamic tmp23 = ellipseHeight;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(180)
		Float tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::SIN45;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(180)
		Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(180)
		Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(180)
		Float cy1 = tmp26;		HX_STACK_VAR(cy1,"cy1");
		HX_STACK_LINE(181)
		Dynamic tmp27 = ellipseHeight;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(181)
		Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(181)
		Dynamic tmp29 = ellipseHeight;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(181)
		Float tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::TAN22;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(181)
		Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(181)
		Float tmp32 = (tmp28 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(181)
		Float cy2 = tmp32;		HX_STACK_VAR(cy2,"cy2");
		HX_STACK_LINE(183)
		::lime::graphics::cairo::Cairo tmp33 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(183)
		Float tmp34 = xe;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(183)
		Float tmp35 = (ye - ellipseHeight);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(183)
		tmp33->moveTo(tmp34,tmp35);
		HX_STACK_LINE(184)
		Float tmp36 = xe;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(184)
		Float tmp37 = (ye + cy2);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(184)
		Float tmp38 = (xe + cx1);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(184)
		Float tmp39 = (ye + cy1);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(184)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp36,tmp37,tmp38,tmp39);
		HX_STACK_LINE(185)
		Float tmp40 = (xe + cx2);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(185)
		Float tmp41 = ye;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(185)
		Float tmp42 = (xe - ellipseWidth);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(185)
		Float tmp43 = ye;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(185)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp40,tmp41,tmp42,tmp43);
		HX_STACK_LINE(186)
		::lime::graphics::cairo::Cairo tmp44 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(186)
		Float tmp45 = (x + ellipseWidth);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(186)
		Float tmp46 = ye;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(186)
		tmp44->lineTo(tmp45,tmp46);
		HX_STACK_LINE(187)
		Float tmp47 = (x - cx2);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(187)
		Float tmp48 = ye;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(187)
		Float tmp49 = (x - cx1);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(187)
		Float tmp50 = (ye + cy1);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(187)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp47,tmp48,tmp49,tmp50);
		HX_STACK_LINE(188)
		Float tmp51 = x;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(188)
		Float tmp52 = (ye + cy2);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(188)
		Float tmp53 = x;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(188)
		Float tmp54 = (ye - ellipseHeight);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(188)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp51,tmp52,tmp53,tmp54);
		HX_STACK_LINE(189)
		::lime::graphics::cairo::Cairo tmp55 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(189)
		Float tmp56 = x;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(189)
		Float tmp57 = (y + ellipseHeight);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(189)
		tmp55->lineTo(tmp56,tmp57);
		HX_STACK_LINE(190)
		Float tmp58 = x;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(190)
		Float tmp59 = (y - cy2);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(190)
		Float tmp60 = (x - cx1);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(190)
		Float tmp61 = (y - cy1);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(190)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp58,tmp59,tmp60,tmp61);
		HX_STACK_LINE(191)
		Float tmp62 = (x - cx2);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(191)
		Float tmp63 = y;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(191)
		Float tmp64 = (x + ellipseWidth);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(191)
		Float tmp65 = y;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(191)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp62,tmp63,tmp64,tmp65);
		HX_STACK_LINE(192)
		::lime::graphics::cairo::Cairo tmp66 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(192)
		Float tmp67 = (xe - ellipseWidth);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(192)
		Float tmp68 = y;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(192)
		tmp66->lineTo(tmp67,tmp68);
		HX_STACK_LINE(193)
		Float tmp69 = (xe + cx2);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(193)
		Float tmp70 = y;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(193)
		Float tmp71 = (xe + cx1);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(193)
		Float tmp72 = (y - cy1);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(193)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp69,tmp70,tmp71,tmp72);
		HX_STACK_LINE(194)
		Float tmp73 = xe;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(194)
		Float tmp74 = (y - cy2);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(194)
		Float tmp75 = xe;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(194)
		Float tmp76 = (y + ellipseHeight);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(194)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp73,tmp74,tmp75,tmp76);
		HX_STACK_LINE(195)
		::lime::graphics::cairo::Cairo tmp77 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(195)
		Float tmp78 = xe;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(195)
		Float tmp79 = (ye - ellipseHeight);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(195)
		tmp77->lineTo(tmp78,tmp79);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoGraphics_obj,drawRoundRect,(void))

Void CairoGraphics_obj::endFill( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","endFill",0x21233e02,"openfl._internal.renderer.cairo.CairoGraphics.endFill","openfl/_internal/renderer/cairo/CairoGraphics.hx",200,0x744ae94c)
		HX_STACK_LINE(202)
		::lime::graphics::cairo::Cairo tmp = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(202)
		tmp->newPath();
		HX_STACK_LINE(203)
		::openfl::_internal::renderer::DrawCommandBuffer tmp1 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(203)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::playCommands(tmp1,false);
		HX_STACK_LINE(204)
		::openfl::_internal::renderer::DrawCommandBuffer tmp2 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(204)
		tmp2->clear();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoGraphics_obj,endFill,(void))

Void CairoGraphics_obj::endStroke( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","endStroke",0xaaf640f7,"openfl._internal.renderer.cairo.CairoGraphics.endStroke","openfl/_internal/renderer/cairo/CairoGraphics.hx",209,0x744ae94c)
		HX_STACK_LINE(211)
		::lime::graphics::cairo::Cairo tmp = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(211)
		tmp->newPath();
		HX_STACK_LINE(212)
		::openfl::_internal::renderer::DrawCommandBuffer tmp1 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(212)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::playCommands(tmp1,true);
		HX_STACK_LINE(213)
		::lime::graphics::cairo::Cairo tmp2 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(213)
		tmp2->closePath();
		HX_STACK_LINE(214)
		::openfl::_internal::renderer::DrawCommandBuffer tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(214)
		tmp3->clear();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoGraphics_obj,endStroke,(void))

bool CairoGraphics_obj::hitTest( ::openfl::display::Graphics graphics,Float x,Float y){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","hitTest",0xddc21649,"openfl._internal.renderer.cairo.CairoGraphics.hitTest","openfl/_internal/renderer/cairo/CairoGraphics.hx",219,0x744ae94c)
	HX_STACK_ARG(graphics,"graphics")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(222)
	::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics = graphics;
	HX_STACK_LINE(223)
	::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds = graphics->__bounds;
	HX_STACK_LINE(225)
	int tmp = graphics->__commands->get_length();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(225)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(225)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(225)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(225)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(225)
	if ((tmp3)){
		HX_STACK_LINE(225)
		::openfl::geom::Rectangle tmp5 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(225)
		::openfl::geom::Rectangle tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(225)
		::openfl::geom::Rectangle tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(225)
		tmp4 = (tmp7 == null());
	}
	else{
		HX_STACK_LINE(225)
		tmp4 = true;
	}
	HX_STACK_LINE(225)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(225)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(225)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(225)
	if ((tmp6)){
		HX_STACK_LINE(225)
		::openfl::geom::Rectangle tmp8 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(225)
		::openfl::geom::Rectangle tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(225)
		::openfl::geom::Rectangle tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(225)
		Float tmp11 = tmp10->width;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(225)
		tmp7 = (tmp11 == (int)0);
	}
	else{
		HX_STACK_LINE(225)
		tmp7 = true;
	}
	HX_STACK_LINE(225)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(225)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(225)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(225)
	if ((tmp9)){
		HX_STACK_LINE(225)
		::openfl::geom::Rectangle tmp11 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(225)
		::openfl::geom::Rectangle tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(225)
		::openfl::geom::Rectangle tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(225)
		Float tmp14 = tmp13->height;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(225)
		tmp10 = (tmp14 == (int)0);
	}
	else{
		HX_STACK_LINE(225)
		tmp10 = true;
	}
	HX_STACK_LINE(225)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(225)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(225)
	if ((tmp11)){
		HX_STACK_LINE(225)
		::openfl::geom::Rectangle tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(225)
		::openfl::geom::Rectangle tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(225)
		Float tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(225)
		Float tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(225)
		Float tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(225)
		Float tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(225)
		bool tmp19 = tmp14->contains(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(225)
		bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(225)
		bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(225)
		tmp12 = !(tmp21);
	}
	else{
		HX_STACK_LINE(225)
		tmp12 = true;
	}
	HX_STACK_LINE(225)
	if ((tmp12)){
		HX_STACK_LINE(227)
		return false;
	}
	else{
		HX_STACK_LINE(231)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting = true;
		HX_STACK_LINE(233)
		::openfl::geom::Rectangle tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(233)
		hx::SubEq(x,tmp13->x);
		HX_STACK_LINE(234)
		::openfl::geom::Rectangle tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(234)
		hx::SubEq(y,tmp14->y);
		HX_STACK_LINE(236)
		bool tmp15 = (graphics->__cairo == null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(236)
		if ((tmp15)){
			HX_STACK_LINE(238)
			::openfl::geom::Rectangle tmp16 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(238)
			Float tmp17 = tmp16->width;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(238)
			int tmp18 = ::Math_obj::floor(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(238)
			::openfl::geom::Rectangle tmp19 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(238)
			Float tmp20 = tmp19->height;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(238)
			int tmp21 = ::Math_obj::floor(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(238)
			::openfl::display::BitmapData tmp22 = ::openfl::display::BitmapData_obj::__new(tmp18,tmp21,true,(int)0);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(238)
			::openfl::display::BitmapData bitmap = tmp22;		HX_STACK_VAR(bitmap,"bitmap");
			HX_STACK_LINE(239)
			Dynamic tmp23 = bitmap->getSurface();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(239)
			Dynamic surface = tmp23;		HX_STACK_VAR(surface,"surface");
			HX_STACK_LINE(240)
			::lime::graphics::cairo::Cairo tmp24 = ::lime::graphics::cairo::Cairo_obj::__new(surface);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(240)
			graphics->__cairo = tmp24;
		}
		HX_STACK_LINE(245)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo = graphics->__cairo;
		HX_STACK_LINE(247)
		::openfl::_internal::renderer::DrawCommandBuffer tmp16 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(247)
		tmp16->clear();
		HX_STACK_LINE(248)
		::openfl::_internal::renderer::DrawCommandBuffer tmp17 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(248)
		tmp17->clear();
		HX_STACK_LINE(250)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
		HX_STACK_LINE(251)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = false;
		HX_STACK_LINE(253)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = null();
		HX_STACK_LINE(254)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = null();
		HX_STACK_LINE(256)
		::lime::graphics::cairo::Cairo tmp18 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(256)
		tmp18->newPath();
		HX_STACK_LINE(258)
		::openfl::_internal::renderer::DrawCommandReader tmp19 = ::openfl::_internal::renderer::DrawCommandReader_obj::__new(graphics->__commands);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(258)
		::openfl::_internal::renderer::DrawCommandReader data = tmp19;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(260)
		{
			HX_STACK_LINE(260)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(260)
			Array< ::Dynamic > _g1 = graphics->__commands->types;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(260)
			while((true)){
				HX_STACK_LINE(260)
				bool tmp20 = (_g < _g1->length);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(260)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(260)
				if ((tmp21)){
					HX_STACK_LINE(260)
					break;
				}
				HX_STACK_LINE(260)
				::openfl::_internal::renderer::DrawCommandType tmp22 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::DrawCommandType >();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(260)
				::openfl::_internal::renderer::DrawCommandType type = tmp22;		HX_STACK_VAR(type,"type");
				HX_STACK_LINE(260)
				++(_g);
				HX_STACK_LINE(262)
				switch( (int)(type->__Index())){
					case (int)3: {
						HX_STACK_LINE(266)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(266)
						{
							HX_STACK_LINE(266)
							{
								HX_STACK_LINE(266)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(266)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(266)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(266)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(266)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(266)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(266)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(266)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(266)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(266)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(266)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(266)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(266)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(266)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(266)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(266)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(266)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(266)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(266)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(266)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(266)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(266)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(266)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(266)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(266)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(266)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(266)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(266)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(266)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(266)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(266)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(266)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(266)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(266)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CUBIC_CURVE_TO;
							HX_STACK_LINE(266)
							tmp23 = data;
						}
						HX_STACK_LINE(266)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(267)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(267)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(267)
						int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(267)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(267)
						Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(267)
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(267)
						int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(267)
						int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(267)
						Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(267)
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(267)
						int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(267)
						int tmp35 = (tmp34 + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(267)
						Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(267)
						::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(267)
						int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(267)
						int tmp39 = (tmp38 + (int)3);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(267)
						Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(267)
						::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(267)
						int tmp42 = c->fPos;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(267)
						int tmp43 = (tmp42 + (int)4);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(267)
						Float tmp44 = tmp41->f->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(267)
						::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(267)
						int tmp46 = c->fPos;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(267)
						int tmp47 = (tmp46 + (int)5);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(267)
						Float tmp48 = tmp45->f->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(267)
						tmp24->cubicCurveTo(tmp28,tmp32,tmp36,tmp40,tmp44,tmp48);
						HX_STACK_LINE(268)
						::openfl::_internal::renderer::DrawCommandBuffer tmp49 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(268)
						::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(268)
						int tmp51 = c->fPos;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(268)
						int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(268)
						Float tmp53 = tmp50->f->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(268)
						::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(268)
						int tmp55 = c->fPos;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(268)
						int tmp56 = (tmp55 + (int)1);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(268)
						Float tmp57 = tmp54->f->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(268)
						::openfl::_internal::renderer::DrawCommandBuffer tmp58 = c->buffer;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(268)
						int tmp59 = c->fPos;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(268)
						int tmp60 = (tmp59 + (int)2);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(268)
						Float tmp61 = tmp58->f->__get(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(268)
						::openfl::_internal::renderer::DrawCommandBuffer tmp62 = c->buffer;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(268)
						int tmp63 = c->fPos;		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(268)
						int tmp64 = (tmp63 + (int)3);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(268)
						Float tmp65 = tmp62->f->__get(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(268)
						::openfl::_internal::renderer::DrawCommandBuffer tmp66 = c->buffer;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(268)
						int tmp67 = c->fPos;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(268)
						int tmp68 = (tmp67 + (int)4);		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(268)
						Float tmp69 = tmp66->f->__get(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(268)
						::openfl::_internal::renderer::DrawCommandBuffer tmp70 = c->buffer;		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(268)
						int tmp71 = c->fPos;		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(268)
						int tmp72 = (tmp71 + (int)5);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(268)
						Float tmp73 = tmp70->f->__get(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(268)
						tmp49->cubicCurveTo(tmp53,tmp57,tmp61,tmp65,tmp69,tmp73);
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(272)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(272)
						{
							HX_STACK_LINE(272)
							{
								HX_STACK_LINE(272)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(272)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(272)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(272)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(272)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(272)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(272)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(272)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(272)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(272)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(272)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(272)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(272)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(272)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(272)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(272)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(272)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(272)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(272)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(272)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(272)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(272)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(272)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(272)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(272)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(272)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(272)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(272)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(272)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(272)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(272)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(272)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(272)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(272)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CURVE_TO;
							HX_STACK_LINE(272)
							tmp23 = data;
						}
						HX_STACK_LINE(272)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(273)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(273)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(273)
						int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(273)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(273)
						Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(273)
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(273)
						int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(273)
						int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(273)
						Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(273)
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(273)
						int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(273)
						int tmp35 = (tmp34 + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(273)
						Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(273)
						::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(273)
						int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(273)
						int tmp39 = (tmp38 + (int)3);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(273)
						Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(273)
						tmp24->curveTo(tmp28,tmp32,tmp36,tmp40);
						HX_STACK_LINE(274)
						::openfl::_internal::renderer::DrawCommandBuffer tmp41 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(274)
						::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(274)
						int tmp43 = c->fPos;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(274)
						int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(274)
						Float tmp45 = tmp42->f->__get(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(274)
						::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(274)
						int tmp47 = c->fPos;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(274)
						int tmp48 = (tmp47 + (int)1);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(274)
						Float tmp49 = tmp46->f->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(274)
						::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(274)
						int tmp51 = c->fPos;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(274)
						int tmp52 = (tmp51 + (int)2);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(274)
						Float tmp53 = tmp50->f->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(274)
						::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(274)
						int tmp55 = c->fPos;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(274)
						int tmp56 = (tmp55 + (int)3);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(274)
						Float tmp57 = tmp54->f->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(274)
						tmp41->curveTo(tmp45,tmp49,tmp53,tmp57);
					}
					;break;
					case (int)15: {
						HX_STACK_LINE(278)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(278)
						{
							HX_STACK_LINE(278)
							{
								HX_STACK_LINE(278)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(278)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(278)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(278)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(278)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(278)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(278)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(278)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(278)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(278)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(278)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(278)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(278)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(278)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(278)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(278)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(278)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(278)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(278)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(278)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(278)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(278)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(278)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(278)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(278)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(278)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(278)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(278)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(278)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(278)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(278)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(278)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(278)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(278)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_TO;
							HX_STACK_LINE(278)
							tmp23 = data;
						}
						HX_STACK_LINE(278)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(279)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(279)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(279)
						int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(279)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(279)
						Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(279)
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(279)
						int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(279)
						int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(279)
						Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(279)
						tmp24->lineTo(tmp28,tmp32);
						HX_STACK_LINE(280)
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(280)
						::openfl::_internal::renderer::DrawCommandBuffer tmp34 = c->buffer;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(280)
						int tmp35 = c->fPos;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(280)
						int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(280)
						Float tmp37 = tmp34->f->__get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(280)
						::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(280)
						int tmp39 = c->fPos;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(280)
						int tmp40 = (tmp39 + (int)1);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(280)
						Float tmp41 = tmp38->f->__get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(280)
						tmp33->lineTo(tmp37,tmp41);
					}
					;break;
					case (int)16: {
						HX_STACK_LINE(284)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(284)
						{
							HX_STACK_LINE(284)
							{
								HX_STACK_LINE(284)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(284)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(284)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(284)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(284)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(284)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(284)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(284)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(284)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(284)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(284)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(284)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(284)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(284)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(284)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(284)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(284)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(284)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(284)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(284)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(284)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(284)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(284)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(284)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(284)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(284)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(284)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(284)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(284)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(284)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(284)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(284)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(284)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(284)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::MOVE_TO;
							HX_STACK_LINE(284)
							tmp23 = data;
						}
						HX_STACK_LINE(284)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(285)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(285)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(285)
						int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(285)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(285)
						Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(285)
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(285)
						int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(285)
						int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(285)
						Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(285)
						tmp24->moveTo(tmp28,tmp32);
						HX_STACK_LINE(286)
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(286)
						::openfl::_internal::renderer::DrawCommandBuffer tmp34 = c->buffer;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(286)
						int tmp35 = c->fPos;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(286)
						int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(286)
						Float tmp37 = tmp34->f->__get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(286)
						::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(286)
						int tmp39 = c->fPos;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(286)
						int tmp40 = (tmp39 + (int)1);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(286)
						Float tmp41 = tmp38->f->__get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(286)
						tmp33->moveTo(tmp37,tmp41);
					}
					;break;
					case (int)14: {
						HX_STACK_LINE(290)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(290)
						{
							HX_STACK_LINE(290)
							{
								HX_STACK_LINE(290)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(290)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(290)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(290)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(290)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(290)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(290)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(290)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(290)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(290)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(290)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(290)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(290)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(290)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(290)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(290)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(290)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(290)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(290)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(290)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(290)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(290)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(290)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(290)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(290)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(290)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(290)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(290)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(290)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(290)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(290)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(290)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(290)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(290)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_STYLE;
							HX_STACK_LINE(290)
							tmp23 = data;
						}
						HX_STACK_LINE(290)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(291)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(291)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(291)
						int tmp26 = c->oPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(291)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(291)
						Dynamic tmp28 = tmp25->o->__GetItem(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(291)
						Dynamic tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(291)
						::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(291)
						int tmp31 = c->iPos;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(291)
						int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(291)
						int tmp33 = tmp30->i->__get(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(291)
						int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(291)
						::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(291)
						int tmp36 = c->bPos;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(291)
						int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(291)
						bool tmp38 = tmp35->b->__get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(291)
						bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(291)
						::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(291)
						int tmp41 = c->oPos;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(291)
						int tmp42 = (tmp41 + (int)1);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(291)
						Dynamic tmp43 = tmp40->o->__GetItem(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(291)
						Dynamic tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(291)
						::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(291)
						int tmp46 = c->oPos;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(291)
						int tmp47 = (tmp46 + (int)2);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(291)
						Dynamic tmp48 = tmp45->o->__GetItem(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(291)
						Dynamic tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(291)
						::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(291)
						int tmp51 = c->oPos;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(291)
						int tmp52 = (tmp51 + (int)3);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(291)
						Dynamic tmp53 = tmp50->o->__GetItem(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(291)
						Dynamic tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(291)
						::openfl::_internal::renderer::DrawCommandBuffer tmp55 = c->buffer;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(291)
						int tmp56 = c->fPos;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(291)
						int tmp57 = (tmp56 + (int)1);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(291)
						Float tmp58 = tmp55->f->__get(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(291)
						Float tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(291)
						tmp24->lineStyle(tmp29,tmp34,(int)1,tmp39,tmp44,tmp49,tmp54,tmp59);
					}
					;break;
					case (int)13: {
						HX_STACK_LINE(295)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(295)
						{
							HX_STACK_LINE(295)
							{
								HX_STACK_LINE(295)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(295)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(295)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(295)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(295)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(295)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(295)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(295)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(295)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(295)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(295)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(295)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(295)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(295)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(295)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(295)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(295)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(295)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(295)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(295)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(295)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(295)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(295)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(295)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(295)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(295)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(295)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(295)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(295)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(295)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(295)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(295)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(295)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(295)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_GRADIENT_STYLE;
							HX_STACK_LINE(295)
							tmp23 = data;
						}
						HX_STACK_LINE(295)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(296)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(296)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(296)
						int tmp26 = c->oPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(296)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(296)
						Dynamic tmp28 = tmp25->o->__GetItem(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(296)
						Dynamic tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(296)
						::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(296)
						int tmp31 = c->iiPos;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(296)
						int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(296)
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(296)
						int tmp34 = c->ffPos;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(296)
						int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(296)
						::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(296)
						int tmp37 = c->iiPos;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(296)
						int tmp38 = (tmp37 + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(296)
						::openfl::_internal::renderer::DrawCommandBuffer tmp39 = c->buffer;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(296)
						int tmp40 = c->oPos;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(296)
						int tmp41 = (tmp40 + (int)1);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(296)
						Dynamic tmp42 = tmp39->o->__GetItem(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(296)
						::openfl::geom::Matrix tmp43 = ((::openfl::geom::Matrix)(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(296)
						::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(296)
						int tmp45 = c->oPos;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(296)
						int tmp46 = (tmp45 + (int)2);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(296)
						Dynamic tmp47 = tmp44->o->__GetItem(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(296)
						Dynamic tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(296)
						::openfl::_internal::renderer::DrawCommandBuffer tmp49 = c->buffer;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(296)
						int tmp50 = c->oPos;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(296)
						int tmp51 = (tmp50 + (int)3);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(296)
						Dynamic tmp52 = tmp49->o->__GetItem(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(296)
						Dynamic tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(296)
						::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(296)
						int tmp55 = c->fPos;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(296)
						int tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(296)
						Float tmp57 = tmp54->f->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(296)
						Float tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(296)
						tmp24->lineGradientStyle(tmp29,tmp30->ii->__get(tmp32).StaticCast< Array< int > >(),tmp33->ff->__get(tmp35).StaticCast< Array< Float > >(),tmp36->ii->__get(tmp38).StaticCast< Array< int > >(),tmp43,tmp48,tmp53,tmp58);
					}
					;break;
					case (int)12: {
						HX_STACK_LINE(300)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(300)
						{
							HX_STACK_LINE(300)
							{
								HX_STACK_LINE(300)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(300)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(300)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(300)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(300)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(300)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(300)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(300)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(300)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(300)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(300)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(300)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(300)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(300)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(300)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(300)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(300)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(300)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(300)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(300)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(300)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(300)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(300)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(300)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(300)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(300)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(300)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(300)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(300)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(300)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(300)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(300)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(300)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(300)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_BITMAP_STYLE;
							HX_STACK_LINE(300)
							tmp23 = data;
						}
						HX_STACK_LINE(300)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(301)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(301)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(301)
						int tmp26 = c->oPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(301)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(301)
						Dynamic tmp28 = tmp25->o->__GetItem(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(301)
						::openfl::display::BitmapData tmp29 = ((::openfl::display::BitmapData)(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(301)
						::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(301)
						int tmp31 = c->oPos;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(301)
						int tmp32 = (tmp31 + (int)1);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(301)
						Dynamic tmp33 = tmp30->o->__GetItem(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(301)
						::openfl::geom::Matrix tmp34 = ((::openfl::geom::Matrix)(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(301)
						::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(301)
						int tmp36 = c->bPos;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(301)
						int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(301)
						bool tmp38 = tmp35->b->__get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(301)
						bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(301)
						::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(301)
						int tmp41 = c->bPos;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(301)
						int tmp42 = (tmp41 + (int)1);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(301)
						bool tmp43 = tmp40->b->__get(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(301)
						bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(301)
						tmp24->lineBitmapStyle(tmp29,tmp34,tmp39,tmp44);
					}
					;break;
					case (int)11: {
						HX_STACK_LINE(305)
						{
							HX_STACK_LINE(305)
							{
								HX_STACK_LINE(305)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(305)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(305)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(305)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(305)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(305)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(305)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(305)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(305)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(305)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(305)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(305)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(305)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(305)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(305)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(305)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(305)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(305)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(305)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(305)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(305)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(305)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(305)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(305)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(305)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(305)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(305)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(305)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(305)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(305)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(305)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(305)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(305)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(305)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::END_FILL;
							HX_STACK_LINE(305)
							data;
						}
						HX_STACK_LINE(306)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
						HX_STACK_LINE(307)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
						HX_STACK_LINE(309)
						bool tmp23 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(309)
						bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(309)
						if ((tmp23)){
							HX_STACK_LINE(309)
							::lime::graphics::cairo::Cairo tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(309)
							::lime::graphics::cairo::Cairo tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(309)
							Float tmp27 = x;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(309)
							Float tmp28 = y;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(309)
							Float tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(309)
							Float tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(309)
							tmp24 = tmp26->inFill(tmp29,tmp30);
						}
						else{
							HX_STACK_LINE(309)
							tmp24 = false;
						}
						HX_STACK_LINE(309)
						if ((tmp24)){
							HX_STACK_LINE(311)
							data->destroy();
							HX_STACK_LINE(312)
							return true;
						}
						HX_STACK_LINE(316)
						bool tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(316)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(316)
						if ((tmp25)){
							HX_STACK_LINE(316)
							::lime::graphics::cairo::Cairo tmp27 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(316)
							::lime::graphics::cairo::Cairo tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(316)
							Float tmp29 = x;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(316)
							Float tmp30 = y;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(316)
							Float tmp31 = tmp29;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(316)
							Float tmp32 = tmp30;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(316)
							tmp26 = tmp28->inStroke(tmp31,tmp32);
						}
						else{
							HX_STACK_LINE(316)
							tmp26 = false;
						}
						HX_STACK_LINE(316)
						if ((tmp26)){
							HX_STACK_LINE(318)
							data->destroy();
							HX_STACK_LINE(319)
							return true;
						}
						HX_STACK_LINE(323)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
						HX_STACK_LINE(324)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = null();
					}
					;break;
					case (int)0: case (int)1: case (int)2: {
						HX_STACK_LINE(328)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
						HX_STACK_LINE(329)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
						HX_STACK_LINE(331)
						bool tmp23 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(331)
						bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(331)
						if ((tmp23)){
							HX_STACK_LINE(331)
							::lime::graphics::cairo::Cairo tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(331)
							::lime::graphics::cairo::Cairo tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(331)
							Float tmp27 = x;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(331)
							Float tmp28 = y;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(331)
							Float tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(331)
							Float tmp30 = tmp28;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(331)
							tmp24 = tmp26->inFill(tmp29,tmp30);
						}
						else{
							HX_STACK_LINE(331)
							tmp24 = false;
						}
						HX_STACK_LINE(331)
						if ((tmp24)){
							HX_STACK_LINE(333)
							data->destroy();
							HX_STACK_LINE(334)
							return true;
						}
						HX_STACK_LINE(338)
						bool tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(338)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(338)
						if ((tmp25)){
							HX_STACK_LINE(338)
							::lime::graphics::cairo::Cairo tmp27 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(338)
							::lime::graphics::cairo::Cairo tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(338)
							Float tmp29 = x;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(338)
							Float tmp30 = y;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(338)
							Float tmp31 = tmp29;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(338)
							Float tmp32 = tmp30;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(338)
							tmp26 = tmp28->inStroke(tmp31,tmp32);
						}
						else{
							HX_STACK_LINE(338)
							tmp26 = false;
						}
						HX_STACK_LINE(338)
						if ((tmp26)){
							HX_STACK_LINE(340)
							data->destroy();
							HX_STACK_LINE(341)
							return true;
						}
						HX_STACK_LINE(345)
						bool tmp27 = (type == ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_BITMAP_FILL);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(345)
						if ((tmp27)){
							HX_STACK_LINE(347)
							::openfl::_internal::renderer::DrawCommandReader tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(347)
							{
								HX_STACK_LINE(347)
								{
									HX_STACK_LINE(347)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(347)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(347)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(347)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(347)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(347)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(347)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(347)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(347)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(347)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(347)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(347)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(347)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(347)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(347)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(347)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(347)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(347)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(347)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(347)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(347)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(347)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(347)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(347)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(347)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(347)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(347)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(347)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(347)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(347)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(347)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(347)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(347)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(347)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_BITMAP_FILL;
								HX_STACK_LINE(347)
								tmp28 = data;
							}
							HX_STACK_LINE(347)
							::openfl::_internal::renderer::DrawCommandReader c = tmp28;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(348)
							::openfl::_internal::renderer::DrawCommandBuffer tmp29 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(348)
							::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(348)
							int tmp31 = c->oPos;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(348)
							int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(348)
							Dynamic tmp33 = tmp30->o->__GetItem(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(348)
							::openfl::display::BitmapData tmp34 = ((::openfl::display::BitmapData)(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(348)
							::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(348)
							int tmp36 = c->oPos;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(348)
							int tmp37 = (tmp36 + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(348)
							Dynamic tmp38 = tmp35->o->__GetItem(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(348)
							::openfl::geom::Matrix tmp39 = ((::openfl::geom::Matrix)(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(348)
							::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(348)
							int tmp41 = c->bPos;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(348)
							int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(348)
							bool tmp43 = tmp40->b->__get(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(348)
							::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(348)
							int tmp45 = c->bPos;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(348)
							int tmp46 = (tmp45 + (int)1);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(348)
							bool tmp47 = tmp44->b->__get(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(348)
							tmp29->beginBitmapFill(tmp34,tmp39,tmp43,tmp47);
							HX_STACK_LINE(349)
							::openfl::_internal::renderer::DrawCommandBuffer tmp48 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(349)
							::openfl::_internal::renderer::DrawCommandBuffer tmp49 = c->buffer;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(349)
							int tmp50 = c->oPos;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(349)
							int tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(349)
							Dynamic tmp52 = tmp49->o->__GetItem(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(349)
							::openfl::display::BitmapData tmp53 = ((::openfl::display::BitmapData)(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(349)
							::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(349)
							int tmp55 = c->oPos;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(349)
							int tmp56 = (tmp55 + (int)1);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(349)
							Dynamic tmp57 = tmp54->o->__GetItem(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(349)
							::openfl::geom::Matrix tmp58 = ((::openfl::geom::Matrix)(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(349)
							::openfl::_internal::renderer::DrawCommandBuffer tmp59 = c->buffer;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(349)
							int tmp60 = c->bPos;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(349)
							int tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(349)
							bool tmp62 = tmp59->b->__get(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(349)
							::openfl::_internal::renderer::DrawCommandBuffer tmp63 = c->buffer;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(349)
							int tmp64 = c->bPos;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(349)
							int tmp65 = (tmp64 + (int)1);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(349)
							bool tmp66 = tmp63->b->__get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(349)
							tmp48->beginBitmapFill(tmp53,tmp58,tmp62,tmp66);
						}
						else{
							HX_STACK_LINE(351)
							bool tmp28 = (type == ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_GRADIENT_FILL);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(351)
							if ((tmp28)){
								HX_STACK_LINE(353)
								::openfl::_internal::renderer::DrawCommandReader tmp29;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(353)
								{
									HX_STACK_LINE(353)
									{
										HX_STACK_LINE(353)
										::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(353)
										switch( (int)(_g2->__Index())){
											case (int)0: {
												HX_STACK_LINE(353)
												hx::AddEq(data->oPos,(int)2);
												HX_STACK_LINE(353)
												hx::AddEq(data->bPos,(int)2);
											}
											;break;
											case (int)1: {
												HX_STACK_LINE(353)
												hx::AddEq(data->iPos,(int)1);
												HX_STACK_LINE(353)
												hx::AddEq(data->fPos,(int)1);
											}
											;break;
											case (int)2: {
												HX_STACK_LINE(353)
												hx::AddEq(data->oPos,(int)4);
												HX_STACK_LINE(353)
												hx::AddEq(data->iiPos,(int)2);
												HX_STACK_LINE(353)
												hx::AddEq(data->ffPos,(int)1);
												HX_STACK_LINE(353)
												hx::AddEq(data->fPos,(int)1);
											}
											;break;
											case (int)3: {
												HX_STACK_LINE(353)
												hx::AddEq(data->fPos,(int)6);
											}
											;break;
											case (int)4: {
												HX_STACK_LINE(353)
												hx::AddEq(data->fPos,(int)4);
											}
											;break;
											case (int)5: {
												HX_STACK_LINE(353)
												hx::AddEq(data->fPos,(int)3);
											}
											;break;
											case (int)6: {
												HX_STACK_LINE(353)
												hx::AddEq(data->fPos,(int)4);
											}
											;break;
											case (int)7: {
												HX_STACK_LINE(353)
												hx::AddEq(data->fPos,(int)4);
											}
											;break;
											case (int)8: {
												HX_STACK_LINE(353)
												hx::AddEq(data->fPos,(int)5);
												HX_STACK_LINE(353)
												hx::AddEq(data->oPos,(int)1);
											}
											;break;
											case (int)10: {
												HX_STACK_LINE(353)
												hx::AddEq(data->oPos,(int)4);
											}
											;break;
											case (int)11: {
												HX_STACK_LINE(353)
												Dynamic();
											}
											;break;
											case (int)12: {
												HX_STACK_LINE(353)
												hx::AddEq(data->oPos,(int)2);
												HX_STACK_LINE(353)
												hx::AddEq(data->bPos,(int)2);
											}
											;break;
											case (int)13: {
												HX_STACK_LINE(353)
												hx::AddEq(data->oPos,(int)4);
												HX_STACK_LINE(353)
												hx::AddEq(data->iiPos,(int)2);
												HX_STACK_LINE(353)
												hx::AddEq(data->ffPos,(int)1);
												HX_STACK_LINE(353)
												hx::AddEq(data->fPos,(int)1);
											}
											;break;
											case (int)14: {
												HX_STACK_LINE(353)
												hx::AddEq(data->oPos,(int)4);
												HX_STACK_LINE(353)
												hx::AddEq(data->iPos,(int)1);
												HX_STACK_LINE(353)
												hx::AddEq(data->fPos,(int)2);
												HX_STACK_LINE(353)
												hx::AddEq(data->bPos,(int)1);
											}
											;break;
											case (int)15: {
												HX_STACK_LINE(353)
												hx::AddEq(data->fPos,(int)2);
											}
											;break;
											case (int)16: {
												HX_STACK_LINE(353)
												hx::AddEq(data->fPos,(int)2);
											}
											;break;
											case (int)17: {
												HX_STACK_LINE(353)
												hx::AddEq(data->oPos,(int)1);
											}
											;break;
											default: {
												HX_STACK_LINE(353)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(353)
									data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_GRADIENT_FILL;
									HX_STACK_LINE(353)
									tmp29 = data;
								}
								HX_STACK_LINE(353)
								::openfl::_internal::renderer::DrawCommandReader c = tmp29;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(354)
								::openfl::_internal::renderer::DrawCommandBuffer tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(354)
								::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(354)
								int tmp32 = c->oPos;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(354)
								int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(354)
								Dynamic tmp34 = tmp31->o->__GetItem(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(354)
								Dynamic tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(354)
								::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(354)
								int tmp37 = c->iiPos;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(354)
								int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(354)
								::openfl::_internal::renderer::DrawCommandBuffer tmp39 = c->buffer;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(354)
								int tmp40 = c->ffPos;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(354)
								int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(354)
								::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(354)
								int tmp43 = c->iiPos;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(354)
								int tmp44 = (tmp43 + (int)1);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(354)
								::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(354)
								int tmp46 = c->oPos;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(354)
								int tmp47 = (tmp46 + (int)1);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(354)
								Dynamic tmp48 = tmp45->o->__GetItem(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(354)
								::openfl::geom::Matrix tmp49 = ((::openfl::geom::Matrix)(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(354)
								::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(354)
								int tmp51 = c->oPos;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(354)
								int tmp52 = (tmp51 + (int)2);		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(354)
								Dynamic tmp53 = tmp50->o->__GetItem(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(354)
								Dynamic tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(354)
								::openfl::_internal::renderer::DrawCommandBuffer tmp55 = c->buffer;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(354)
								int tmp56 = c->oPos;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(354)
								int tmp57 = (tmp56 + (int)3);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(354)
								Dynamic tmp58 = tmp55->o->__GetItem(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(354)
								Dynamic tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(354)
								::openfl::_internal::renderer::DrawCommandBuffer tmp60 = c->buffer;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(354)
								int tmp61 = c->fPos;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(354)
								int tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(354)
								Float tmp63 = tmp60->f->__get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(354)
								Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(354)
								tmp30->beginGradientFill(tmp35,tmp36->ii->__get(tmp38).StaticCast< Array< int > >(),tmp39->ff->__get(tmp41).StaticCast< Array< Float > >(),tmp42->ii->__get(tmp44).StaticCast< Array< int > >(),tmp49,tmp54,tmp59,tmp64);
								HX_STACK_LINE(355)
								::openfl::_internal::renderer::DrawCommandBuffer tmp65 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(355)
								::openfl::_internal::renderer::DrawCommandBuffer tmp66 = c->buffer;		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(355)
								int tmp67 = c->oPos;		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(355)
								int tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(355)
								Dynamic tmp69 = tmp66->o->__GetItem(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(355)
								Dynamic tmp70 = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(355)
								::openfl::_internal::renderer::DrawCommandBuffer tmp71 = c->buffer;		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(355)
								int tmp72 = c->iiPos;		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(355)
								int tmp73 = tmp72;		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(355)
								::openfl::_internal::renderer::DrawCommandBuffer tmp74 = c->buffer;		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(355)
								int tmp75 = c->ffPos;		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(355)
								int tmp76 = tmp75;		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(355)
								::openfl::_internal::renderer::DrawCommandBuffer tmp77 = c->buffer;		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(355)
								int tmp78 = c->iiPos;		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(355)
								int tmp79 = (tmp78 + (int)1);		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(355)
								::openfl::_internal::renderer::DrawCommandBuffer tmp80 = c->buffer;		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(355)
								int tmp81 = c->oPos;		HX_STACK_VAR(tmp81,"tmp81");
								HX_STACK_LINE(355)
								int tmp82 = (tmp81 + (int)1);		HX_STACK_VAR(tmp82,"tmp82");
								HX_STACK_LINE(355)
								Dynamic tmp83 = tmp80->o->__GetItem(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(355)
								::openfl::geom::Matrix tmp84 = ((::openfl::geom::Matrix)(tmp83));		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(355)
								::openfl::_internal::renderer::DrawCommandBuffer tmp85 = c->buffer;		HX_STACK_VAR(tmp85,"tmp85");
								HX_STACK_LINE(355)
								int tmp86 = c->oPos;		HX_STACK_VAR(tmp86,"tmp86");
								HX_STACK_LINE(355)
								int tmp87 = (tmp86 + (int)2);		HX_STACK_VAR(tmp87,"tmp87");
								HX_STACK_LINE(355)
								Dynamic tmp88 = tmp85->o->__GetItem(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
								HX_STACK_LINE(355)
								Dynamic tmp89 = tmp88;		HX_STACK_VAR(tmp89,"tmp89");
								HX_STACK_LINE(355)
								::openfl::_internal::renderer::DrawCommandBuffer tmp90 = c->buffer;		HX_STACK_VAR(tmp90,"tmp90");
								HX_STACK_LINE(355)
								int tmp91 = c->oPos;		HX_STACK_VAR(tmp91,"tmp91");
								HX_STACK_LINE(355)
								int tmp92 = (tmp91 + (int)3);		HX_STACK_VAR(tmp92,"tmp92");
								HX_STACK_LINE(355)
								Dynamic tmp93 = tmp90->o->__GetItem(tmp92);		HX_STACK_VAR(tmp93,"tmp93");
								HX_STACK_LINE(355)
								Dynamic tmp94 = tmp93;		HX_STACK_VAR(tmp94,"tmp94");
								HX_STACK_LINE(355)
								::openfl::_internal::renderer::DrawCommandBuffer tmp95 = c->buffer;		HX_STACK_VAR(tmp95,"tmp95");
								HX_STACK_LINE(355)
								int tmp96 = c->fPos;		HX_STACK_VAR(tmp96,"tmp96");
								HX_STACK_LINE(355)
								int tmp97 = tmp96;		HX_STACK_VAR(tmp97,"tmp97");
								HX_STACK_LINE(355)
								Float tmp98 = tmp95->f->__get(tmp97);		HX_STACK_VAR(tmp98,"tmp98");
								HX_STACK_LINE(355)
								Float tmp99 = tmp98;		HX_STACK_VAR(tmp99,"tmp99");
								HX_STACK_LINE(355)
								tmp65->beginGradientFill(tmp70,tmp71->ii->__get(tmp73).StaticCast< Array< int > >(),tmp74->ff->__get(tmp76).StaticCast< Array< Float > >(),tmp77->ii->__get(tmp79).StaticCast< Array< int > >(),tmp84,tmp89,tmp94,tmp99);
							}
							else{
								HX_STACK_LINE(359)
								::openfl::_internal::renderer::DrawCommandReader tmp29;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(359)
								{
									HX_STACK_LINE(359)
									{
										HX_STACK_LINE(359)
										::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(359)
										switch( (int)(_g2->__Index())){
											case (int)0: {
												HX_STACK_LINE(359)
												hx::AddEq(data->oPos,(int)2);
												HX_STACK_LINE(359)
												hx::AddEq(data->bPos,(int)2);
											}
											;break;
											case (int)1: {
												HX_STACK_LINE(359)
												hx::AddEq(data->iPos,(int)1);
												HX_STACK_LINE(359)
												hx::AddEq(data->fPos,(int)1);
											}
											;break;
											case (int)2: {
												HX_STACK_LINE(359)
												hx::AddEq(data->oPos,(int)4);
												HX_STACK_LINE(359)
												hx::AddEq(data->iiPos,(int)2);
												HX_STACK_LINE(359)
												hx::AddEq(data->ffPos,(int)1);
												HX_STACK_LINE(359)
												hx::AddEq(data->fPos,(int)1);
											}
											;break;
											case (int)3: {
												HX_STACK_LINE(359)
												hx::AddEq(data->fPos,(int)6);
											}
											;break;
											case (int)4: {
												HX_STACK_LINE(359)
												hx::AddEq(data->fPos,(int)4);
											}
											;break;
											case (int)5: {
												HX_STACK_LINE(359)
												hx::AddEq(data->fPos,(int)3);
											}
											;break;
											case (int)6: {
												HX_STACK_LINE(359)
												hx::AddEq(data->fPos,(int)4);
											}
											;break;
											case (int)7: {
												HX_STACK_LINE(359)
												hx::AddEq(data->fPos,(int)4);
											}
											;break;
											case (int)8: {
												HX_STACK_LINE(359)
												hx::AddEq(data->fPos,(int)5);
												HX_STACK_LINE(359)
												hx::AddEq(data->oPos,(int)1);
											}
											;break;
											case (int)10: {
												HX_STACK_LINE(359)
												hx::AddEq(data->oPos,(int)4);
											}
											;break;
											case (int)11: {
												HX_STACK_LINE(359)
												Dynamic();
											}
											;break;
											case (int)12: {
												HX_STACK_LINE(359)
												hx::AddEq(data->oPos,(int)2);
												HX_STACK_LINE(359)
												hx::AddEq(data->bPos,(int)2);
											}
											;break;
											case (int)13: {
												HX_STACK_LINE(359)
												hx::AddEq(data->oPos,(int)4);
												HX_STACK_LINE(359)
												hx::AddEq(data->iiPos,(int)2);
												HX_STACK_LINE(359)
												hx::AddEq(data->ffPos,(int)1);
												HX_STACK_LINE(359)
												hx::AddEq(data->fPos,(int)1);
											}
											;break;
											case (int)14: {
												HX_STACK_LINE(359)
												hx::AddEq(data->oPos,(int)4);
												HX_STACK_LINE(359)
												hx::AddEq(data->iPos,(int)1);
												HX_STACK_LINE(359)
												hx::AddEq(data->fPos,(int)2);
												HX_STACK_LINE(359)
												hx::AddEq(data->bPos,(int)1);
											}
											;break;
											case (int)15: {
												HX_STACK_LINE(359)
												hx::AddEq(data->fPos,(int)2);
											}
											;break;
											case (int)16: {
												HX_STACK_LINE(359)
												hx::AddEq(data->fPos,(int)2);
											}
											;break;
											case (int)17: {
												HX_STACK_LINE(359)
												hx::AddEq(data->oPos,(int)1);
											}
											;break;
											default: {
												HX_STACK_LINE(359)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(359)
									data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_FILL;
									HX_STACK_LINE(359)
									tmp29 = data;
								}
								HX_STACK_LINE(359)
								::openfl::_internal::renderer::DrawCommandReader c = tmp29;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(360)
								::openfl::_internal::renderer::DrawCommandBuffer tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(360)
								::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(360)
								int tmp32 = c->iPos;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(360)
								int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(360)
								int tmp34 = tmp31->i->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(360)
								tmp30->beginFill(tmp34,(int)1);
								HX_STACK_LINE(361)
								::openfl::_internal::renderer::DrawCommandBuffer tmp35 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(361)
								::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(361)
								int tmp37 = c->iPos;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(361)
								int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(361)
								int tmp39 = tmp36->i->__get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(361)
								tmp35->beginFill(tmp39,(int)1);
							}
						}
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(367)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(367)
						{
							HX_STACK_LINE(367)
							{
								HX_STACK_LINE(367)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(367)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(367)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(367)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(367)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(367)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(367)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(367)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(367)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(367)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(367)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(367)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(367)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(367)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(367)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(367)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(367)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(367)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(367)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(367)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(367)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(367)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(367)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(367)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(367)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(367)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(367)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(367)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(367)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(367)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(367)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(367)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(367)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(367)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_CIRCLE;
							HX_STACK_LINE(367)
							tmp23 = data;
						}
						HX_STACK_LINE(367)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(368)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(368)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(368)
						int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(368)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(368)
						Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(368)
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(368)
						int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(368)
						int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(368)
						Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(368)
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(368)
						int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(368)
						int tmp35 = (tmp34 + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(368)
						Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(368)
						tmp24->drawCircle(tmp28,tmp32,tmp36);
						HX_STACK_LINE(369)
						::openfl::_internal::renderer::DrawCommandBuffer tmp37 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(369)
						::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(369)
						int tmp39 = c->fPos;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(369)
						int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(369)
						Float tmp41 = tmp38->f->__get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(369)
						::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(369)
						int tmp43 = c->fPos;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(369)
						int tmp44 = (tmp43 + (int)1);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(369)
						Float tmp45 = tmp42->f->__get(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(369)
						::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(369)
						int tmp47 = c->fPos;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(369)
						int tmp48 = (tmp47 + (int)2);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(369)
						Float tmp49 = tmp46->f->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(369)
						tmp37->drawCircle(tmp41,tmp45,tmp49);
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(373)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(373)
						{
							HX_STACK_LINE(373)
							{
								HX_STACK_LINE(373)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(373)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(373)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(373)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(373)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(373)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(373)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(373)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(373)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(373)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(373)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(373)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(373)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(373)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(373)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(373)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(373)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(373)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(373)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(373)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(373)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(373)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(373)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(373)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(373)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(373)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(373)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(373)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(373)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(373)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(373)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(373)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(373)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(373)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ELLIPSE;
							HX_STACK_LINE(373)
							tmp23 = data;
						}
						HX_STACK_LINE(373)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(374)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(374)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(374)
						int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(374)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(374)
						Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(374)
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(374)
						int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(374)
						int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(374)
						Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(374)
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(374)
						int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(374)
						int tmp35 = (tmp34 + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(374)
						Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(374)
						::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(374)
						int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(374)
						int tmp39 = (tmp38 + (int)3);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(374)
						Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(374)
						tmp24->drawEllipse(tmp28,tmp32,tmp36,tmp40);
						HX_STACK_LINE(375)
						::openfl::_internal::renderer::DrawCommandBuffer tmp41 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(375)
						::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(375)
						int tmp43 = c->fPos;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(375)
						int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(375)
						Float tmp45 = tmp42->f->__get(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(375)
						::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(375)
						int tmp47 = c->fPos;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(375)
						int tmp48 = (tmp47 + (int)1);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(375)
						Float tmp49 = tmp46->f->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(375)
						::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(375)
						int tmp51 = c->fPos;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(375)
						int tmp52 = (tmp51 + (int)2);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(375)
						Float tmp53 = tmp50->f->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(375)
						::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(375)
						int tmp55 = c->fPos;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(375)
						int tmp56 = (tmp55 + (int)3);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(375)
						Float tmp57 = tmp54->f->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(375)
						tmp41->drawEllipse(tmp45,tmp49,tmp53,tmp57);
					}
					;break;
					case (int)7: {
						HX_STACK_LINE(379)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(379)
						{
							HX_STACK_LINE(379)
							{
								HX_STACK_LINE(379)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(379)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(379)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(379)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(379)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(379)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(379)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(379)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(379)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(379)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(379)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(379)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(379)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(379)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(379)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(379)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(379)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(379)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(379)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(379)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(379)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(379)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(379)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(379)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(379)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(379)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(379)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(379)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(379)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(379)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(379)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(379)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(379)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(379)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_RECT;
							HX_STACK_LINE(379)
							tmp23 = data;
						}
						HX_STACK_LINE(379)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(380)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(380)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(380)
						int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(380)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(380)
						Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(380)
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(380)
						int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(380)
						int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(380)
						Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(380)
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(380)
						int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(380)
						int tmp35 = (tmp34 + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(380)
						Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(380)
						::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(380)
						int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(380)
						int tmp39 = (tmp38 + (int)3);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(380)
						Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(380)
						tmp24->drawRect(tmp28,tmp32,tmp36,tmp40);
						HX_STACK_LINE(381)
						::openfl::_internal::renderer::DrawCommandBuffer tmp41 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(381)
						::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(381)
						int tmp43 = c->fPos;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(381)
						int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(381)
						Float tmp45 = tmp42->f->__get(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(381)
						::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(381)
						int tmp47 = c->fPos;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(381)
						int tmp48 = (tmp47 + (int)1);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(381)
						Float tmp49 = tmp46->f->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(381)
						::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(381)
						int tmp51 = c->fPos;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(381)
						int tmp52 = (tmp51 + (int)2);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(381)
						Float tmp53 = tmp50->f->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(381)
						::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(381)
						int tmp55 = c->fPos;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(381)
						int tmp56 = (tmp55 + (int)3);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(381)
						Float tmp57 = tmp54->f->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(381)
						tmp41->drawRect(tmp45,tmp49,tmp53,tmp57);
					}
					;break;
					case (int)8: {
						HX_STACK_LINE(385)
						::openfl::_internal::renderer::DrawCommandReader tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(385)
						{
							HX_STACK_LINE(385)
							{
								HX_STACK_LINE(385)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(385)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(385)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(385)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(385)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(385)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(385)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(385)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(385)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(385)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(385)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(385)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(385)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(385)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(385)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(385)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(385)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(385)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(385)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(385)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(385)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(385)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(385)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(385)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(385)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(385)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(385)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(385)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(385)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(385)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(385)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(385)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(385)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(385)
							data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ROUND_RECT;
							HX_STACK_LINE(385)
							tmp23 = data;
						}
						HX_STACK_LINE(385)
						::openfl::_internal::renderer::DrawCommandReader c = tmp23;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(386)
						::openfl::_internal::renderer::DrawCommandBuffer tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(386)
						::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(386)
						int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(386)
						int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(386)
						Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(386)
						::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(386)
						int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(386)
						int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(386)
						Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(386)
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(386)
						int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(386)
						int tmp35 = (tmp34 + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(386)
						Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(386)
						::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(386)
						int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(386)
						int tmp39 = (tmp38 + (int)3);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(386)
						Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(386)
						::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(386)
						int tmp42 = c->fPos;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(386)
						int tmp43 = (tmp42 + (int)4);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(386)
						Float tmp44 = tmp41->f->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(386)
						::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(386)
						int tmp46 = c->oPos;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(386)
						int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(386)
						Dynamic tmp48 = tmp45->o->__GetItem(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(386)
						Dynamic tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(386)
						tmp24->drawRoundRect(tmp28,tmp32,tmp36,tmp40,tmp44,tmp49);
						HX_STACK_LINE(387)
						::openfl::_internal::renderer::DrawCommandBuffer tmp50 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(387)
						::openfl::_internal::renderer::DrawCommandBuffer tmp51 = c->buffer;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(387)
						int tmp52 = c->fPos;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(387)
						int tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(387)
						Float tmp54 = tmp51->f->__get(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(387)
						::openfl::_internal::renderer::DrawCommandBuffer tmp55 = c->buffer;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(387)
						int tmp56 = c->fPos;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(387)
						int tmp57 = (tmp56 + (int)1);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(387)
						Float tmp58 = tmp55->f->__get(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(387)
						::openfl::_internal::renderer::DrawCommandBuffer tmp59 = c->buffer;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(387)
						int tmp60 = c->fPos;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(387)
						int tmp61 = (tmp60 + (int)2);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(387)
						Float tmp62 = tmp59->f->__get(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(387)
						::openfl::_internal::renderer::DrawCommandBuffer tmp63 = c->buffer;		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(387)
						int tmp64 = c->fPos;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(387)
						int tmp65 = (tmp64 + (int)3);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(387)
						Float tmp66 = tmp63->f->__get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(387)
						::openfl::_internal::renderer::DrawCommandBuffer tmp67 = c->buffer;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(387)
						int tmp68 = c->fPos;		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(387)
						int tmp69 = (tmp68 + (int)4);		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(387)
						Float tmp70 = tmp67->f->__get(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(387)
						::openfl::_internal::renderer::DrawCommandBuffer tmp71 = c->buffer;		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(387)
						int tmp72 = c->oPos;		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(387)
						int tmp73 = tmp72;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(387)
						Dynamic tmp74 = tmp71->o->__GetItem(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(387)
						Dynamic tmp75 = tmp74;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(387)
						tmp50->drawRoundRect(tmp54,tmp58,tmp62,tmp66,tmp70,tmp75);
					}
					;break;
					default: {
						HX_STACK_LINE(391)
						{
							HX_STACK_LINE(391)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(391)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(391)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(391)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(391)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(391)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(391)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(391)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(391)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(391)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(391)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(391)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(391)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(391)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(391)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(391)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(391)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(391)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(391)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(391)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(391)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(391)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(391)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(391)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(391)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(391)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(391)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(391)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(391)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(391)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(391)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(391)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(391)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(391)
						data->prev = type;
					}
				}
			}
		}
		HX_STACK_LINE(397)
		::openfl::_internal::renderer::DrawCommandBuffer tmp20 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(397)
		int tmp21 = tmp20->get_length();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(397)
		bool tmp22 = (tmp21 > (int)0);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(397)
		if ((tmp22)){
			HX_STACK_LINE(399)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
		}
		HX_STACK_LINE(403)
		::openfl::_internal::renderer::DrawCommandBuffer tmp23 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(403)
		int tmp24 = tmp23->get_length();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(403)
		bool tmp25 = (tmp24 > (int)0);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(403)
		if ((tmp25)){
			HX_STACK_LINE(405)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
		}
		HX_STACK_LINE(409)
		data->destroy();
		HX_STACK_LINE(411)
		bool tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(411)
		bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(411)
		if ((tmp26)){
			HX_STACK_LINE(411)
			::lime::graphics::cairo::Cairo tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(411)
			::lime::graphics::cairo::Cairo tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(411)
			Float tmp30 = x;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(411)
			Float tmp31 = y;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(411)
			Float tmp32 = tmp30;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(411)
			Float tmp33 = tmp31;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(411)
			tmp27 = tmp29->inFill(tmp32,tmp33);
		}
		else{
			HX_STACK_LINE(411)
			tmp27 = false;
		}
		HX_STACK_LINE(411)
		if ((tmp27)){
			HX_STACK_LINE(413)
			return true;
		}
		HX_STACK_LINE(417)
		bool tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(417)
		bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(417)
		if ((tmp28)){
			HX_STACK_LINE(417)
			::lime::graphics::cairo::Cairo tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(417)
			::lime::graphics::cairo::Cairo tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(417)
			Float tmp32 = x;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(417)
			Float tmp33 = y;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(417)
			Float tmp34 = tmp32;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(417)
			Float tmp35 = tmp33;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(417)
			tmp29 = tmp31->inStroke(tmp34,tmp35);
		}
		else{
			HX_STACK_LINE(417)
			tmp29 = false;
		}
		HX_STACK_LINE(417)
		if ((tmp29)){
			HX_STACK_LINE(419)
			return true;
		}
	}
	HX_STACK_LINE(426)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoGraphics_obj,hitTest,return )

bool CairoGraphics_obj::isCCW( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","isCCW",0x5353f111,"openfl._internal.renderer.cairo.CairoGraphics.isCCW","openfl/_internal/renderer/cairo/CairoGraphics.hx",431,0x744ae94c)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(x3,"x3")
	HX_STACK_ARG(y3,"y3")
	HX_STACK_LINE(433)
	Float tmp = (x2 - x1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(433)
	Float tmp1 = (y3 - y1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(433)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(433)
	Float tmp3 = (y2 - y1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(433)
	Float tmp4 = (x3 - x1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(433)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(433)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(433)
	bool tmp7 = (tmp6 < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(433)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CairoGraphics_obj,isCCW,return )

Dynamic CairoGraphics_obj::normalizeUVT( ::openfl::_Vector::FloatVector uvt,hx::Null< bool >  __o_skipT){
bool skipT = __o_skipT.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","normalizeUVT",0xc9c604e2,"openfl._internal.renderer.cairo.CairoGraphics.normalizeUVT","openfl/_internal/renderer/cairo/CairoGraphics.hx",438,0x744ae94c)
	HX_STACK_ARG(uvt,"uvt")
	HX_STACK_ARG(skipT,"skipT")
{
		HX_STACK_LINE(440)
		Float tmp = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(440)
		Float max = tmp;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(441)
		Float tmp1 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(441)
		Float tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(442)
		int tmp3 = uvt->get_length();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(442)
		int len = tmp3;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(444)
		{
			HX_STACK_LINE(444)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(444)
			int tmp4 = (len + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(444)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(444)
			while((true)){
				HX_STACK_LINE(444)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(444)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(444)
				if ((tmp6)){
					HX_STACK_LINE(444)
					break;
				}
				HX_STACK_LINE(444)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(444)
				int t = tmp7;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(446)
				bool tmp8 = skipT;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(446)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(446)
				if ((tmp8)){
					HX_STACK_LINE(446)
					int tmp10 = hx::Mod(t,(int)3);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(446)
					int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(446)
					tmp9 = (tmp11 == (int)0);
				}
				else{
					HX_STACK_LINE(446)
					tmp9 = false;
				}
				HX_STACK_LINE(446)
				if ((tmp9)){
					HX_STACK_LINE(448)
					continue;
				}
				HX_STACK_LINE(452)
				int tmp10 = (t - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(452)
				Float tmp11 = uvt->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(452)
				tmp2 = tmp11;
				HX_STACK_LINE(454)
				bool tmp12 = (max < tmp2);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(454)
				if ((tmp12)){
					HX_STACK_LINE(456)
					max = tmp2;
				}
			}
		}
		HX_STACK_LINE(462)
		::openfl::_Vector::FloatVector tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(462)
		{
			HX_STACK_LINE(462)
			int length = null();		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(462)
			bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
			HX_STACK_LINE(462)
			::openfl::_Vector::FloatVector tmp5 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(462)
			::openfl::_Vector::FloatVector tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(462)
			tmp4 = tmp6;
		}
		HX_STACK_LINE(462)
		::openfl::_Vector::FloatVector result = tmp4;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(464)
		{
			HX_STACK_LINE(464)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(464)
			int tmp5 = (len + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(464)
			int _g = tmp5;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(464)
			while((true)){
				HX_STACK_LINE(464)
				bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(464)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(464)
				if ((tmp7)){
					HX_STACK_LINE(464)
					break;
				}
				HX_STACK_LINE(464)
				int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(464)
				int t = tmp8;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(466)
				bool tmp9 = skipT;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(466)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(466)
				if ((tmp9)){
					HX_STACK_LINE(466)
					int tmp11 = hx::Mod(t,(int)3);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(466)
					int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(466)
					tmp10 = (tmp12 == (int)0);
				}
				else{
					HX_STACK_LINE(466)
					tmp10 = false;
				}
				HX_STACK_LINE(466)
				if ((tmp10)){
					HX_STACK_LINE(468)
					continue;
				}
				HX_STACK_LINE(472)
				{
					HX_STACK_LINE(472)
					int tmp11 = (t - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(472)
					Float tmp12 = uvt->get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(472)
					Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(472)
					Float tmp14 = max;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(472)
					Float tmp15 = (Float(tmp13) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(472)
					Float x = tmp15;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(472)
					Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(472)
					result->push(tmp16);
				}
			}
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::openfl::_Vector::FloatVector &result,Float &max){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/cairo/CairoGraphics.hx",476,0x744ae94c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00") , max,false);
					__result->Add(HX_HCSTRING("uvt","\xf3","\x2e","\x59","\x00") , result,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(476)
		Dynamic tmp5 = _Function_1_1::Block(result,max);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(476)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,normalizeUVT,return )

Void CairoGraphics_obj::playCommands( ::openfl::_internal::renderer::DrawCommandBuffer commands,hx::Null< bool >  __o_stroke){
bool stroke = __o_stroke.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","playCommands",0xcc85aa58,"openfl._internal.renderer.cairo.CairoGraphics.playCommands","openfl/_internal/renderer/cairo/CairoGraphics.hx",481,0x744ae94c)
	HX_STACK_ARG(commands,"commands")
	HX_STACK_ARG(stroke,"stroke")
{
		HX_STACK_LINE(483)
		int tmp = commands->get_length();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(483)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(483)
		if ((tmp1)){
			HX_STACK_LINE(483)
			return null();
		}
		HX_STACK_LINE(485)
		::openfl::display::Graphics tmp2 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(485)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds = tmp2->__bounds;
		HX_STACK_LINE(487)
		::openfl::geom::Rectangle tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(487)
		Float offsetX = tmp3->x;		HX_STACK_VAR(offsetX,"offsetX");
		HX_STACK_LINE(488)
		::openfl::geom::Rectangle tmp4 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(488)
		Float offsetY = tmp4->y;		HX_STACK_VAR(offsetY,"offsetY");
		HX_STACK_LINE(490)
		Float positionX = ((Float)0.0);		HX_STACK_VAR(positionX,"positionX");
		HX_STACK_LINE(491)
		Float positionY = ((Float)0.0);		HX_STACK_VAR(positionY,"positionY");
		HX_STACK_LINE(493)
		bool closeGap = false;		HX_STACK_VAR(closeGap,"closeGap");
		HX_STACK_LINE(494)
		Float startX = ((Float)0.0);		HX_STACK_VAR(startX,"startX");
		HX_STACK_LINE(495)
		Float startY = ((Float)0.0);		HX_STACK_VAR(startY,"startY");
		HX_STACK_LINE(497)
		::lime::graphics::cairo::Cairo tmp5 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(497)
		tmp5->set_fillRule((int)1);
		HX_STACK_LINE(498)
		::lime::graphics::cairo::Cairo tmp6 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(498)
		tmp6->set_antialias((int)3);
		HX_STACK_LINE(500)
		bool hasPath = false;		HX_STACK_VAR(hasPath,"hasPath");
		HX_STACK_LINE(502)
		::openfl::_internal::renderer::DrawCommandReader tmp7 = ::openfl::_internal::renderer::DrawCommandReader_obj::__new(commands);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(502)
		::openfl::_internal::renderer::DrawCommandReader data = tmp7;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(504)
		{
			HX_STACK_LINE(504)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(504)
			Array< ::Dynamic > _g1 = commands->types;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(504)
			while((true)){
				HX_STACK_LINE(504)
				bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(504)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(504)
				if ((tmp9)){
					HX_STACK_LINE(504)
					break;
				}
				HX_STACK_LINE(504)
				::openfl::_internal::renderer::DrawCommandType tmp10 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::DrawCommandType >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(504)
				::openfl::_internal::renderer::DrawCommandType type = tmp10;		HX_STACK_VAR(type,"type");
				HX_STACK_LINE(504)
				++(_g);
				HX_STACK_LINE(506)
				int _switch_1 = (type->__Index());
				if (  ( _switch_1==(int)3)){
					HX_STACK_LINE(510)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(510)
					{
						HX_STACK_LINE(510)
						{
							HX_STACK_LINE(510)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(510)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(510)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(510)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(510)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(510)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(510)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(510)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(510)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(510)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(510)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(510)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(510)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(510)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(510)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(510)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(510)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(510)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(510)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(510)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(510)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(510)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(510)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(510)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(510)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(510)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(510)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(510)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(510)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(510)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(510)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(510)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(510)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(510)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CUBIC_CURVE_TO;
						HX_STACK_LINE(510)
						tmp11 = data;
					}
					HX_STACK_LINE(510)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(511)
					hasPath = true;
					HX_STACK_LINE(512)
					::lime::graphics::cairo::Cairo tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(512)
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(512)
					int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(512)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(512)
					Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(512)
					Float tmp17 = offsetX;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(512)
					Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(512)
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(512)
					int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(512)
					int tmp21 = (tmp20 + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(512)
					Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(512)
					Float tmp23 = offsetY;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(512)
					Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(512)
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(512)
					int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(512)
					int tmp27 = (tmp26 + (int)2);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(512)
					Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(512)
					Float tmp29 = offsetX;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(512)
					Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(512)
					::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(512)
					int tmp32 = c->fPos;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(512)
					int tmp33 = (tmp32 + (int)3);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(512)
					Float tmp34 = tmp31->f->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(512)
					Float tmp35 = offsetY;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(512)
					Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(512)
					::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(512)
					int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(512)
					int tmp39 = (tmp38 + (int)4);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(512)
					Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(512)
					Float tmp41 = offsetX;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(512)
					Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(512)
					::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(512)
					int tmp44 = c->fPos;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(512)
					int tmp45 = (tmp44 + (int)5);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(512)
					Float tmp46 = tmp43->f->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(512)
					Float tmp47 = offsetY;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(512)
					Float tmp48 = (tmp46 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(512)
					tmp12->curveTo(tmp18,tmp24,tmp30,tmp36,tmp42,tmp48);
				}
				else if (  ( _switch_1==(int)4)){
					HX_STACK_LINE(516)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(516)
					{
						HX_STACK_LINE(516)
						{
							HX_STACK_LINE(516)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(516)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(516)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(516)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(516)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(516)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(516)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(516)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(516)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(516)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(516)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(516)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(516)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(516)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(516)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(516)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(516)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(516)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(516)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(516)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(516)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(516)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(516)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(516)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(516)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(516)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(516)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(516)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(516)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(516)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(516)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(516)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(516)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(516)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CURVE_TO;
						HX_STACK_LINE(516)
						tmp11 = data;
					}
					HX_STACK_LINE(516)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(517)
					hasPath = true;
					HX_STACK_LINE(518)
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(518)
					int tmp13 = c->fPos;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(518)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(518)
					Float tmp15 = tmp12->f->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(518)
					Float tmp16 = offsetX;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(518)
					Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(518)
					::openfl::_internal::renderer::DrawCommandBuffer tmp18 = c->buffer;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(518)
					int tmp19 = c->fPos;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(518)
					int tmp20 = (tmp19 + (int)1);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(518)
					Float tmp21 = tmp18->f->__get(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(518)
					Float tmp22 = offsetY;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(518)
					Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(518)
					::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(518)
					int tmp25 = c->fPos;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(518)
					int tmp26 = (tmp25 + (int)2);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(518)
					Float tmp27 = tmp24->f->__get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(518)
					Float tmp28 = offsetX;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(518)
					Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(518)
					::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(518)
					int tmp31 = c->fPos;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(518)
					int tmp32 = (tmp31 + (int)3);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(518)
					Float tmp33 = tmp30->f->__get(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(518)
					Float tmp34 = offsetY;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(518)
					Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(518)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp17,tmp23,tmp29,tmp35);
				}
				else if (  ( _switch_1==(int)5)){
					HX_STACK_LINE(522)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(522)
					{
						HX_STACK_LINE(522)
						{
							HX_STACK_LINE(522)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(522)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(522)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(522)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(522)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(522)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(522)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(522)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(522)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(522)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(522)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(522)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(522)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(522)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(522)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(522)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(522)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(522)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(522)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(522)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(522)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(522)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(522)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(522)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(522)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(522)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(522)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(522)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(522)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(522)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(522)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(522)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(522)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(522)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_CIRCLE;
						HX_STACK_LINE(522)
						tmp11 = data;
					}
					HX_STACK_LINE(522)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(523)
					hasPath = true;
					HX_STACK_LINE(524)
					::lime::graphics::cairo::Cairo tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(524)
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(524)
					int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(524)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(524)
					Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(524)
					Float tmp17 = offsetX;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(524)
					Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(524)
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(524)
					int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(524)
					int tmp21 = (tmp20 + (int)2);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(524)
					Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(524)
					Float tmp23 = (tmp18 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(524)
					::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(524)
					int tmp25 = c->fPos;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(524)
					int tmp26 = (tmp25 + (int)1);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(524)
					Float tmp27 = tmp24->f->__get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(524)
					Float tmp28 = offsetY;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(524)
					Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(524)
					tmp12->moveTo(tmp23,tmp29);
					HX_STACK_LINE(525)
					::lime::graphics::cairo::Cairo tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(525)
					::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(525)
					int tmp32 = c->fPos;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(525)
					int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(525)
					Float tmp34 = tmp31->f->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(525)
					Float tmp35 = offsetX;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(525)
					Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(525)
					::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(525)
					int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(525)
					int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(525)
					Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(525)
					Float tmp41 = offsetY;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(525)
					Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(525)
					::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(525)
					int tmp44 = c->fPos;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(525)
					int tmp45 = (tmp44 + (int)2);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(525)
					Float tmp46 = tmp43->f->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(525)
					Float tmp47 = ::Math_obj::PI;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(525)
					Float tmp48 = (tmp47 * (int)2);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(525)
					tmp30->arc(tmp36,tmp42,tmp46,(int)0,tmp48);
				}
				else if (  ( _switch_1==(int)7)){
					HX_STACK_LINE(529)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(529)
					{
						HX_STACK_LINE(529)
						{
							HX_STACK_LINE(529)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(529)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(529)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(529)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(529)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(529)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(529)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(529)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(529)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(529)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(529)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(529)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(529)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(529)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(529)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(529)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(529)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(529)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(529)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(529)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(529)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(529)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(529)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(529)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(529)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(529)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(529)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(529)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(529)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(529)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(529)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(529)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(529)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(529)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_RECT;
						HX_STACK_LINE(529)
						tmp11 = data;
					}
					HX_STACK_LINE(529)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(530)
					hasPath = true;
					HX_STACK_LINE(531)
					::lime::graphics::cairo::Cairo tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(531)
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(531)
					int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(531)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(531)
					Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(531)
					Float tmp17 = offsetX;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(531)
					Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(531)
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(531)
					int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(531)
					int tmp21 = (tmp20 + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(531)
					Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(531)
					Float tmp23 = offsetY;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(531)
					Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(531)
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(531)
					int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(531)
					int tmp27 = (tmp26 + (int)2);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(531)
					Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(531)
					::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(531)
					int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(531)
					int tmp31 = (tmp30 + (int)3);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(531)
					Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(531)
					tmp12->rectangle(tmp18,tmp24,tmp28,tmp32);
				}
				else if (  ( _switch_1==(int)6)){
					HX_STACK_LINE(535)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(535)
					{
						HX_STACK_LINE(535)
						{
							HX_STACK_LINE(535)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(535)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(535)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(535)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(535)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(535)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(535)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(535)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(535)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(535)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(535)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(535)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(535)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(535)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(535)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(535)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(535)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(535)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(535)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(535)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(535)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(535)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(535)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(535)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(535)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(535)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(535)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(535)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(535)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(535)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(535)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(535)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(535)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(535)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ELLIPSE;
						HX_STACK_LINE(535)
						tmp11 = data;
					}
					HX_STACK_LINE(535)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(536)
					hasPath = true;
					HX_STACK_LINE(538)
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(538)
					int tmp13 = c->fPos;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(538)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(538)
					Float tmp15 = tmp12->f->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(538)
					Float x = tmp15;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(539)
					::openfl::_internal::renderer::DrawCommandBuffer tmp16 = c->buffer;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(539)
					int tmp17 = c->fPos;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(539)
					int tmp18 = (tmp17 + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(539)
					Float tmp19 = tmp16->f->__get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(539)
					Float y = tmp19;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(540)
					::openfl::_internal::renderer::DrawCommandBuffer tmp20 = c->buffer;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(540)
					int tmp21 = c->fPos;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(540)
					int tmp22 = (tmp21 + (int)2);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(540)
					Float tmp23 = tmp20->f->__get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(540)
					Float width = tmp23;		HX_STACK_VAR(width,"width");
					HX_STACK_LINE(541)
					::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(541)
					int tmp25 = c->fPos;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(541)
					int tmp26 = (tmp25 + (int)3);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(541)
					Float tmp27 = tmp24->f->__get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(541)
					Float height = tmp27;		HX_STACK_VAR(height,"height");
					HX_STACK_LINE(543)
					hx::SubEq(x,offsetX);
					HX_STACK_LINE(544)
					hx::SubEq(y,offsetY);
					HX_STACK_LINE(546)
					Float kappa = ((Float).5522848);		HX_STACK_VAR(kappa,"kappa");
					HX_STACK_LINE(547)
					Float tmp28 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(547)
					Float tmp29 = kappa;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(547)
					Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(547)
					Float ox = tmp30;		HX_STACK_VAR(ox,"ox");
					HX_STACK_LINE(548)
					Float tmp31 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(548)
					Float tmp32 = kappa;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(548)
					Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(548)
					Float oy = tmp33;		HX_STACK_VAR(oy,"oy");
					HX_STACK_LINE(549)
					Float tmp34 = (x + width);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(549)
					Float xe = tmp34;		HX_STACK_VAR(xe,"xe");
					HX_STACK_LINE(550)
					Float tmp35 = (y + height);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(550)
					Float ye = tmp35;		HX_STACK_VAR(ye,"ye");
					HX_STACK_LINE(551)
					Float tmp36 = x;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(551)
					Float tmp37 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(551)
					Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(551)
					Float xm = tmp38;		HX_STACK_VAR(xm,"xm");
					HX_STACK_LINE(552)
					Float tmp39 = y;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(552)
					Float tmp40 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(552)
					Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(552)
					Float ym = tmp41;		HX_STACK_VAR(ym,"ym");
					HX_STACK_LINE(554)
					::lime::graphics::cairo::Cairo tmp42 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(554)
					Float tmp43 = x;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(554)
					Float tmp44 = ym;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(554)
					tmp42->moveTo(tmp43,tmp44);
					HX_STACK_LINE(555)
					::lime::graphics::cairo::Cairo tmp45 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(555)
					Float tmp46 = x;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(555)
					Float tmp47 = (ym - oy);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(555)
					Float tmp48 = (xm - ox);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(555)
					Float tmp49 = y;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(555)
					Float tmp50 = xm;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(555)
					Float tmp51 = y;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(555)
					tmp45->curveTo(tmp46,tmp47,tmp48,tmp49,tmp50,tmp51);
					HX_STACK_LINE(556)
					::lime::graphics::cairo::Cairo tmp52 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(556)
					Float tmp53 = (xm + ox);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(556)
					Float tmp54 = y;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(556)
					Float tmp55 = xe;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(556)
					Float tmp56 = (ym - oy);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(556)
					Float tmp57 = xe;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(556)
					Float tmp58 = ym;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(556)
					tmp52->curveTo(tmp53,tmp54,tmp55,tmp56,tmp57,tmp58);
					HX_STACK_LINE(557)
					::lime::graphics::cairo::Cairo tmp59 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(557)
					Float tmp60 = xe;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(557)
					Float tmp61 = (ym + oy);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(557)
					Float tmp62 = (xm + ox);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(557)
					Float tmp63 = ye;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(557)
					Float tmp64 = xm;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(557)
					Float tmp65 = ye;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(557)
					tmp59->curveTo(tmp60,tmp61,tmp62,tmp63,tmp64,tmp65);
					HX_STACK_LINE(558)
					::lime::graphics::cairo::Cairo tmp66 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(558)
					Float tmp67 = (xm - ox);		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(558)
					Float tmp68 = ye;		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(558)
					Float tmp69 = x;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(558)
					Float tmp70 = (ym + oy);		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(558)
					Float tmp71 = x;		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(558)
					Float tmp72 = ym;		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(558)
					tmp66->curveTo(tmp67,tmp68,tmp69,tmp70,tmp71,tmp72);
				}
				else if (  ( _switch_1==(int)8)){
					HX_STACK_LINE(562)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(562)
					{
						HX_STACK_LINE(562)
						{
							HX_STACK_LINE(562)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(562)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(562)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(562)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(562)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(562)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(562)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(562)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(562)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(562)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(562)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(562)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(562)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(562)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(562)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(562)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(562)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(562)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(562)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(562)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(562)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(562)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(562)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(562)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(562)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(562)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(562)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(562)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(562)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(562)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(562)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(562)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(562)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(562)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ROUND_RECT;
						HX_STACK_LINE(562)
						tmp11 = data;
					}
					HX_STACK_LINE(562)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(563)
					hasPath = true;
					HX_STACK_LINE(564)
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(564)
					int tmp13 = c->fPos;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(564)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(564)
					Float tmp15 = tmp12->f->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(564)
					Float tmp16 = offsetX;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(564)
					Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(564)
					::openfl::_internal::renderer::DrawCommandBuffer tmp18 = c->buffer;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(564)
					int tmp19 = c->fPos;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(564)
					int tmp20 = (tmp19 + (int)1);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(564)
					Float tmp21 = tmp18->f->__get(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(564)
					Float tmp22 = offsetY;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(564)
					Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(564)
					::openfl::_internal::renderer::DrawCommandBuffer tmp24 = c->buffer;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(564)
					int tmp25 = c->fPos;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(564)
					int tmp26 = (tmp25 + (int)2);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(564)
					Float tmp27 = tmp24->f->__get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(564)
					::openfl::_internal::renderer::DrawCommandBuffer tmp28 = c->buffer;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(564)
					int tmp29 = c->fPos;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(564)
					int tmp30 = (tmp29 + (int)3);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(564)
					Float tmp31 = tmp28->f->__get(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(564)
					::openfl::_internal::renderer::DrawCommandBuffer tmp32 = c->buffer;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(564)
					int tmp33 = c->fPos;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(564)
					int tmp34 = (tmp33 + (int)4);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(564)
					Float tmp35 = tmp32->f->__get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(564)
					::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(564)
					int tmp37 = c->oPos;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(564)
					int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(564)
					Dynamic tmp39 = tmp36->o->__GetItem(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(564)
					Dynamic tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(564)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::drawRoundRect(tmp17,tmp23,tmp27,tmp31,tmp35,tmp40);
				}
				else if (  ( _switch_1==(int)15)){
					HX_STACK_LINE(568)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(568)
					{
						HX_STACK_LINE(568)
						{
							HX_STACK_LINE(568)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(568)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(568)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(568)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(568)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(568)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(568)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(568)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(568)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(568)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(568)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(568)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(568)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(568)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(568)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(568)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(568)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(568)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(568)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(568)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(568)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(568)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(568)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(568)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(568)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(568)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(568)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(568)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(568)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(568)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(568)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(568)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(568)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(568)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_TO;
						HX_STACK_LINE(568)
						tmp11 = data;
					}
					HX_STACK_LINE(568)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(569)
					hasPath = true;
					HX_STACK_LINE(570)
					::lime::graphics::cairo::Cairo tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(570)
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(570)
					int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(570)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(570)
					Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(570)
					Float tmp17 = offsetX;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(570)
					Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(570)
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(570)
					int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(570)
					int tmp21 = (tmp20 + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(570)
					Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(570)
					Float tmp23 = offsetY;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(570)
					Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(570)
					tmp12->lineTo(tmp18,tmp24);
					HX_STACK_LINE(572)
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(572)
					int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(572)
					int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(572)
					Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(572)
					positionX = tmp28;
					HX_STACK_LINE(573)
					::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(573)
					int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(573)
					int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(573)
					Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(573)
					positionY = tmp32;
				}
				else if (  ( _switch_1==(int)16)){
					HX_STACK_LINE(577)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(577)
					{
						HX_STACK_LINE(577)
						{
							HX_STACK_LINE(577)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(577)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(577)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(577)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(577)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(577)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(577)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(577)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(577)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(577)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(577)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(577)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(577)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(577)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(577)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(577)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(577)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(577)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(577)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(577)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(577)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(577)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(577)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(577)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(577)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(577)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(577)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(577)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(577)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(577)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(577)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(577)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(577)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(577)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::MOVE_TO;
						HX_STACK_LINE(577)
						tmp11 = data;
					}
					HX_STACK_LINE(577)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(578)
					::lime::graphics::cairo::Cairo tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(578)
					::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(578)
					int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(578)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(578)
					Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(578)
					Float tmp17 = offsetX;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(578)
					Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(578)
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(578)
					int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(578)
					int tmp21 = (tmp20 + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(578)
					Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(578)
					Float tmp23 = offsetY;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(578)
					Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(578)
					tmp12->moveTo(tmp18,tmp24);
					HX_STACK_LINE(580)
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(580)
					int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(580)
					int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(580)
					Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(580)
					positionX = tmp28;
					HX_STACK_LINE(581)
					::openfl::_internal::renderer::DrawCommandBuffer tmp29 = c->buffer;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(581)
					int tmp30 = c->fPos;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(581)
					int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(581)
					Float tmp32 = tmp29->f->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(581)
					positionY = tmp32;
					HX_STACK_LINE(583)
					closeGap = true;
					HX_STACK_LINE(584)
					::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(584)
					int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(584)
					int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(584)
					Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(584)
					startX = tmp36;
					HX_STACK_LINE(585)
					::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(585)
					int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(585)
					int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(585)
					Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(585)
					startY = tmp40;
				}
				else if (  ( _switch_1==(int)14)){
					HX_STACK_LINE(589)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(589)
					{
						HX_STACK_LINE(589)
						{
							HX_STACK_LINE(589)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(589)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(589)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(589)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(589)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(589)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(589)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(589)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(589)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(589)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(589)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(589)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(589)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(589)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(589)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(589)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(589)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(589)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(589)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(589)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(589)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(589)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(589)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(589)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(589)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(589)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(589)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(589)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(589)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(589)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(589)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(589)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(589)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(589)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_STYLE;
						HX_STACK_LINE(589)
						tmp11 = data;
					}
					HX_STACK_LINE(589)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(590)
					bool tmp12 = stroke;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(590)
					if ((tmp12)){
						HX_STACK_LINE(592)
						bool tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(592)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::closePath(tmp13);
					}
					HX_STACK_LINE(596)
					::lime::graphics::cairo::Cairo tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(596)
					Float tmp14 = (positionX - offsetX);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(596)
					Float tmp15 = (positionY - offsetY);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(596)
					tmp13->moveTo(tmp14,tmp15);
					HX_STACK_LINE(598)
					::openfl::_internal::renderer::DrawCommandBuffer tmp16 = c->buffer;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(598)
					int tmp17 = c->oPos;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(598)
					int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(598)
					Dynamic tmp19 = tmp16->o->__GetItem(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(598)
					Dynamic tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(598)
					bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(598)
					if ((tmp21)){
						HX_STACK_LINE(600)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = false;
					}
					else{
						HX_STACK_LINE(604)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = true;
						HX_STACK_LINE(606)
						::lime::graphics::cairo::Cairo tmp22 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(606)
						::openfl::_internal::renderer::DrawCommandBuffer tmp23 = c->buffer;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(606)
						int tmp24 = c->oPos;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(606)
						int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(606)
						Dynamic tmp26 = tmp23->o->__GetItem(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(606)
						Dynamic tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(606)
						bool tmp28 = (tmp27 > (int)0);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(606)
						Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(606)
						if ((tmp28)){
							HX_STACK_LINE(606)
							::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(606)
							int tmp31 = c->oPos;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(606)
							int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(606)
							Dynamic tmp33 = tmp30->o->__GetItem(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(606)
							tmp29 = tmp33;
						}
						else{
							HX_STACK_LINE(606)
							tmp29 = (int)1;
						}
						HX_STACK_LINE(606)
						tmp22->set_lineWidth(tmp29);
						HX_STACK_LINE(608)
						::openfl::_internal::renderer::DrawCommandBuffer tmp30 = c->buffer;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(608)
						int tmp31 = c->oPos;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(608)
						int tmp32 = (tmp31 + (int)3);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(608)
						Dynamic tmp33 = tmp30->o->__GetItem(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(608)
						Dynamic tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(608)
						bool tmp35 = (tmp34 == null());		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(608)
						if ((tmp35)){
							HX_STACK_LINE(610)
							::lime::graphics::cairo::Cairo tmp36 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(610)
							tmp36->set_lineJoin((int)1);
						}
						else{
							HX_STACK_LINE(614)
							::lime::graphics::cairo::Cairo tmp36 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(614)
							int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(614)
							{
								HX_STACK_LINE(614)
								::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(614)
								int tmp39 = c->oPos;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(614)
								int tmp40 = (tmp39 + (int)3);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(614)
								Dynamic tmp41 = tmp38->o->__GetItem(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(614)
								Dynamic _g2 = tmp41;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(614)
								Dynamic tmp42 = _g2;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(614)
								switch( (int)(tmp42)){
									case (int)1: {
										HX_STACK_LINE(616)
										tmp37 = (int)0;
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(617)
										tmp37 = (int)2;
									}
									;break;
									default: {
										HX_STACK_LINE(618)
										tmp37 = (int)1;
									}
								}
							}
							HX_STACK_LINE(614)
							tmp36->set_lineJoin(tmp37);
						}
						HX_STACK_LINE(624)
						::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(624)
						int tmp37 = c->oPos;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(624)
						int tmp38 = (tmp37 + (int)2);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(624)
						Dynamic tmp39 = tmp36->o->__GetItem(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(624)
						Dynamic tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(624)
						bool tmp41 = (tmp40 == null());		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(624)
						if ((tmp41)){
							HX_STACK_LINE(626)
							::lime::graphics::cairo::Cairo tmp42 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(626)
							tmp42->set_lineCap((int)1);
						}
						else{
							HX_STACK_LINE(630)
							::lime::graphics::cairo::Cairo tmp42 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(630)
							int tmp43;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(630)
							{
								HX_STACK_LINE(630)
								::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(630)
								int tmp45 = c->oPos;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(630)
								int tmp46 = (tmp45 + (int)2);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(630)
								Dynamic tmp47 = tmp44->o->__GetItem(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(630)
								Dynamic _g2 = tmp47;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(630)
								Dynamic tmp48 = _g2;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(630)
								switch( (int)(tmp48)){
									case (int)0: {
										HX_STACK_LINE(632)
										tmp43 = (int)0;
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(633)
										tmp43 = (int)2;
									}
									;break;
									default: {
										HX_STACK_LINE(634)
										tmp43 = (int)1;
									}
								}
							}
							HX_STACK_LINE(630)
							tmp42->set_lineCap(tmp43);
						}
						HX_STACK_LINE(640)
						::lime::graphics::cairo::Cairo tmp42 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(640)
						::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(640)
						int tmp44 = c->fPos;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(640)
						int tmp45 = (tmp44 + (int)1);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(640)
						Float tmp46 = tmp43->f->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(640)
						Float tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(640)
						tmp42->set_miterLimit(tmp47);
						HX_STACK_LINE(642)
						::openfl::_internal::renderer::DrawCommandBuffer tmp48 = c->buffer;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(642)
						int tmp49 = c->iPos;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(642)
						int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(642)
						int tmp51 = tmp48->i->__get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(642)
						int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(642)
						int tmp53 = (int(tmp52) & int((int)16711680));		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(642)
						int tmp54 = hx::UShr(tmp53,(int)16);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(642)
						Float tmp55 = (Float(tmp54) / Float((int)255));		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(642)
						Float r = tmp55;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(643)
						::openfl::_internal::renderer::DrawCommandBuffer tmp56 = c->buffer;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(643)
						int tmp57 = c->iPos;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(643)
						int tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(643)
						int tmp59 = tmp56->i->__get(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(643)
						int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(643)
						int tmp61 = (int(tmp60) & int((int)65280));		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(643)
						int tmp62 = hx::UShr(tmp61,(int)8);		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(643)
						Float tmp63 = (Float(tmp62) / Float((int)255));		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(643)
						Float g = tmp63;		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(644)
						::openfl::_internal::renderer::DrawCommandBuffer tmp64 = c->buffer;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(644)
						int tmp65 = c->iPos;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(644)
						int tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(644)
						int tmp67 = tmp64->i->__get(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(644)
						int tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(644)
						int tmp69 = (int(tmp68) & int((int)255));		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(644)
						Float tmp70 = (Float(tmp69) / Float((int)255));		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(644)
						Float b = tmp70;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(646)
						::openfl::_internal::renderer::DrawCommandBuffer tmp71 = c->buffer;		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(646)
						int tmp72 = c->fPos;		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(646)
						int tmp73 = tmp72;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(646)
						Float tmp74 = tmp71->f->__get(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(646)
						Float tmp75 = tmp74;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(646)
						bool tmp76 = (tmp75 == (int)1);		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(646)
						if ((tmp76)){
							HX_STACK_LINE(648)
							Float tmp77 = r;		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(648)
							Float tmp78 = g;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(648)
							Float tmp79 = b;		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(648)
							Dynamic tmp80 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGB(tmp77,tmp78,tmp79);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(648)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = tmp80;
						}
						else{
							HX_STACK_LINE(652)
							Float tmp77 = r;		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(652)
							Float tmp78 = g;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(652)
							Float tmp79 = b;		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(652)
							::openfl::_internal::renderer::DrawCommandBuffer tmp80 = c->buffer;		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(652)
							int tmp81 = c->fPos;		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(652)
							int tmp82 = tmp81;		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(652)
							Float tmp83 = tmp80->f->__get(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(652)
							Float tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(652)
							Dynamic tmp85 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGBA(tmp77,tmp78,tmp79,tmp84);		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(652)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = tmp85;
						}
					}
				}
				else if (  ( _switch_1==(int)13)){
					HX_STACK_LINE(660)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(660)
					{
						HX_STACK_LINE(660)
						{
							HX_STACK_LINE(660)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(660)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(660)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(660)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(660)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(660)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(660)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(660)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(660)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(660)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(660)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(660)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(660)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(660)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(660)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(660)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(660)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(660)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(660)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(660)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(660)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(660)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(660)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(660)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(660)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(660)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(660)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(660)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(660)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(660)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(660)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(660)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(660)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(660)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_GRADIENT_STYLE;
						HX_STACK_LINE(660)
						tmp11 = data;
					}
					HX_STACK_LINE(660)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(661)
					bool tmp12 = stroke;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(661)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(661)
					if ((tmp12)){
						HX_STACK_LINE(661)
						tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;
					}
					else{
						HX_STACK_LINE(661)
						tmp13 = false;
					}
					HX_STACK_LINE(661)
					if ((tmp13)){
						HX_STACK_LINE(663)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::closePath(null());
					}
					HX_STACK_LINE(667)
					::lime::graphics::cairo::Cairo tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(667)
					Float tmp15 = (positionX - offsetX);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(667)
					Float tmp16 = (positionY - offsetY);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(667)
					tmp14->moveTo(tmp15,tmp16);
					HX_STACK_LINE(668)
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(668)
					int tmp18 = c->oPos;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(668)
					int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(668)
					Dynamic tmp20 = tmp17->o->__GetItem(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(668)
					Dynamic tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(668)
					::openfl::_internal::renderer::DrawCommandBuffer tmp22 = c->buffer;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(668)
					int tmp23 = c->iiPos;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(668)
					int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(668)
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(668)
					int tmp26 = c->ffPos;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(668)
					int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(668)
					::openfl::_internal::renderer::DrawCommandBuffer tmp28 = c->buffer;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(668)
					int tmp29 = c->iiPos;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(668)
					int tmp30 = (tmp29 + (int)1);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(668)
					::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(668)
					int tmp32 = c->oPos;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(668)
					int tmp33 = (tmp32 + (int)1);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(668)
					Dynamic tmp34 = tmp31->o->__GetItem(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(668)
					::openfl::geom::Matrix tmp35 = ((::openfl::geom::Matrix)(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(668)
					::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(668)
					int tmp37 = c->oPos;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(668)
					int tmp38 = (tmp37 + (int)2);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(668)
					Dynamic tmp39 = tmp36->o->__GetItem(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(668)
					Dynamic tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(668)
					::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(668)
					int tmp42 = c->oPos;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(668)
					int tmp43 = (tmp42 + (int)3);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(668)
					Dynamic tmp44 = tmp41->o->__GetItem(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(668)
					Dynamic tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(668)
					::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(668)
					int tmp47 = c->fPos;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(668)
					int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(668)
					Float tmp49 = tmp46->f->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(668)
					Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(668)
					Dynamic tmp51 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::createGradientPattern(tmp21,tmp22->ii->__get(tmp24).StaticCast< Array< int > >(),tmp25->ff->__get(tmp27).StaticCast< Array< Float > >(),tmp28->ii->__get(tmp30).StaticCast< Array< int > >(),tmp35,tmp40,tmp45,tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(668)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = tmp51;
					HX_STACK_LINE(670)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = true;
				}
				else if (  ( _switch_1==(int)12)){
					HX_STACK_LINE(674)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(674)
					{
						HX_STACK_LINE(674)
						{
							HX_STACK_LINE(674)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(674)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(674)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(674)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(674)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(674)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(674)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(674)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(674)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(674)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(674)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(674)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(674)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(674)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(674)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(674)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(674)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(674)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(674)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(674)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(674)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(674)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(674)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(674)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(674)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(674)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(674)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(674)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(674)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(674)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(674)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(674)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(674)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(674)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_BITMAP_STYLE;
						HX_STACK_LINE(674)
						tmp11 = data;
					}
					HX_STACK_LINE(674)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(675)
					bool tmp12 = stroke;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(675)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(675)
					if ((tmp12)){
						HX_STACK_LINE(675)
						tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;
					}
					else{
						HX_STACK_LINE(675)
						tmp13 = false;
					}
					HX_STACK_LINE(675)
					if ((tmp13)){
						HX_STACK_LINE(677)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::closePath(null());
					}
					HX_STACK_LINE(681)
					::lime::graphics::cairo::Cairo tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(681)
					Float tmp15 = (positionX - offsetX);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(681)
					Float tmp16 = (positionY - offsetY);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(681)
					tmp14->moveTo(tmp15,tmp16);
					HX_STACK_LINE(682)
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(682)
					int tmp18 = c->oPos;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(682)
					int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(682)
					Dynamic tmp20 = tmp17->o->__GetItem(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(682)
					::openfl::display::BitmapData tmp21 = ((::openfl::display::BitmapData)(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(682)
					::openfl::_internal::renderer::DrawCommandBuffer tmp22 = c->buffer;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(682)
					int tmp23 = c->oPos;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(682)
					int tmp24 = (tmp23 + (int)1);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(682)
					Dynamic tmp25 = tmp22->o->__GetItem(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(682)
					::openfl::geom::Matrix tmp26 = ((::openfl::geom::Matrix)(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(682)
					::openfl::_internal::renderer::DrawCommandBuffer tmp27 = c->buffer;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(682)
					int tmp28 = c->bPos;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(682)
					int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(682)
					bool tmp30 = tmp27->b->__get(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(682)
					bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(682)
					Dynamic tmp32 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::createImagePattern(tmp21,tmp26,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(682)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = tmp32;
					HX_STACK_LINE(684)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = true;
				}
				else if (  ( _switch_1==(int)0)){
					HX_STACK_LINE(688)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(688)
					{
						HX_STACK_LINE(688)
						{
							HX_STACK_LINE(688)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(688)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(688)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(688)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(688)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(688)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(688)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(688)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(688)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(688)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(688)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(688)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(688)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(688)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(688)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(688)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(688)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(688)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(688)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(688)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(688)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(688)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(688)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(688)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(688)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(688)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(688)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(688)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(688)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(688)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(688)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(688)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(688)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(688)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_BITMAP_FILL;
						HX_STACK_LINE(688)
						tmp11 = data;
					}
					HX_STACK_LINE(688)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(689)
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(689)
					int tmp13 = c->oPos;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(689)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(689)
					Dynamic tmp15 = tmp12->o->__GetItem(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(689)
					::openfl::display::BitmapData tmp16 = ((::openfl::display::BitmapData)(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(689)
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(689)
					int tmp18 = c->oPos;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(689)
					int tmp19 = (tmp18 + (int)1);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(689)
					Dynamic tmp20 = tmp17->o->__GetItem(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(689)
					::openfl::geom::Matrix tmp21 = ((::openfl::geom::Matrix)(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(689)
					::openfl::_internal::renderer::DrawCommandBuffer tmp22 = c->buffer;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(689)
					int tmp23 = c->bPos;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(689)
					int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(689)
					bool tmp25 = tmp22->b->__get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(689)
					Dynamic tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::createImagePattern(tmp16,tmp21,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(689)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = tmp26;
					HX_STACK_LINE(691)
					::openfl::_internal::renderer::DrawCommandBuffer tmp27 = c->buffer;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(691)
					int tmp28 = c->oPos;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(691)
					int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(691)
					Dynamic tmp30 = tmp27->o->__GetItem(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(691)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = ((::openfl::display::BitmapData)(tmp30));
					HX_STACK_LINE(692)
					::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(692)
					int tmp32 = c->bPos;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(692)
					int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(692)
					bool tmp34 = tmp31->b->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(692)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapRepeat = tmp34;
					HX_STACK_LINE(694)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = true;
				}
				else if (  ( _switch_1==(int)1)){
					HX_STACK_LINE(698)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(698)
					{
						HX_STACK_LINE(698)
						{
							HX_STACK_LINE(698)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(698)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(698)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(698)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(698)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(698)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(698)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(698)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(698)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(698)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(698)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(698)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(698)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(698)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(698)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(698)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(698)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(698)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(698)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(698)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(698)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(698)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(698)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(698)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(698)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(698)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(698)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(698)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(698)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(698)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(698)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(698)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(698)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(698)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_FILL;
						HX_STACK_LINE(698)
						tmp11 = data;
					}
					HX_STACK_LINE(698)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(699)
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(699)
					int tmp13 = c->fPos;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(699)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(699)
					Float tmp15 = tmp12->f->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(699)
					bool tmp16 = (tmp15 < ((Float)0.005));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(699)
					if ((tmp16)){
						HX_STACK_LINE(701)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
					}
					else{
						HX_STACK_LINE(705)
						Dynamic tmp17 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(705)
						bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(705)
						if ((tmp18)){
							HX_STACK_LINE(707)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix = null();
						}
						HX_STACK_LINE(711)
						::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(711)
						int tmp20 = c->iPos;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(711)
						int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(711)
						int tmp22 = tmp19->i->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(711)
						int tmp23 = (int(tmp22) & int((int)16711680));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(711)
						int tmp24 = hx::UShr(tmp23,(int)16);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(711)
						Float tmp25 = (Float(tmp24) / Float((int)255));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(711)
						::openfl::_internal::renderer::DrawCommandBuffer tmp26 = c->buffer;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(711)
						int tmp27 = c->iPos;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(711)
						int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(711)
						int tmp29 = tmp26->i->__get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(711)
						int tmp30 = (int(tmp29) & int((int)65280));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(711)
						int tmp31 = hx::UShr(tmp30,(int)8);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(711)
						Float tmp32 = (Float(tmp31) / Float((int)255));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(711)
						::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(711)
						int tmp34 = c->iPos;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(711)
						int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(711)
						int tmp36 = tmp33->i->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(711)
						int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(711)
						Float tmp38 = (Float(tmp37) / Float((int)255));		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(711)
						::openfl::_internal::renderer::DrawCommandBuffer tmp39 = c->buffer;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(711)
						int tmp40 = c->fPos;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(711)
						int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(711)
						Float tmp42 = tmp39->f->__get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(711)
						Dynamic tmp43 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createRGBA(tmp25,tmp32,tmp38,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(711)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = tmp43;
						HX_STACK_LINE(712)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = true;
					}
					HX_STACK_LINE(716)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = null();
				}
				else if (  ( _switch_1==(int)2)){
					HX_STACK_LINE(720)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(720)
					{
						HX_STACK_LINE(720)
						{
							HX_STACK_LINE(720)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(720)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(720)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(720)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(720)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(720)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(720)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(720)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(720)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(720)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(720)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(720)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(720)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(720)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(720)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(720)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(720)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(720)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(720)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(720)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(720)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(720)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(720)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(720)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(720)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(720)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(720)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(720)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(720)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(720)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(720)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(720)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(720)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(720)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_GRADIENT_FILL;
						HX_STACK_LINE(720)
						tmp11 = data;
					}
					HX_STACK_LINE(720)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(721)
					Dynamic tmp12 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(721)
					bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(721)
					if ((tmp13)){
						HX_STACK_LINE(723)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix = null();
					}
					HX_STACK_LINE(727)
					::openfl::_internal::renderer::DrawCommandBuffer tmp14 = c->buffer;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(727)
					int tmp15 = c->oPos;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(727)
					int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(727)
					Dynamic tmp17 = tmp14->o->__GetItem(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(727)
					Dynamic tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(727)
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(727)
					int tmp20 = c->iiPos;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(727)
					int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(727)
					::openfl::_internal::renderer::DrawCommandBuffer tmp22 = c->buffer;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(727)
					int tmp23 = c->ffPos;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(727)
					int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(727)
					::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(727)
					int tmp26 = c->iiPos;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(727)
					int tmp27 = (tmp26 + (int)1);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(727)
					::openfl::_internal::renderer::DrawCommandBuffer tmp28 = c->buffer;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(727)
					int tmp29 = c->oPos;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(727)
					int tmp30 = (tmp29 + (int)1);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(727)
					Dynamic tmp31 = tmp28->o->__GetItem(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(727)
					::openfl::geom::Matrix tmp32 = ((::openfl::geom::Matrix)(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(727)
					::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(727)
					int tmp34 = c->oPos;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(727)
					int tmp35 = (tmp34 + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(727)
					Dynamic tmp36 = tmp33->o->__GetItem(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(727)
					Dynamic tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(727)
					::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(727)
					int tmp39 = c->oPos;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(727)
					int tmp40 = (tmp39 + (int)3);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(727)
					Dynamic tmp41 = tmp38->o->__GetItem(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(727)
					Dynamic tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(727)
					::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(727)
					int tmp44 = c->fPos;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(727)
					int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(727)
					Float tmp46 = tmp43->f->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(727)
					Float tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(727)
					Dynamic tmp48 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::createGradientPattern(tmp18,tmp19->ii->__get(tmp21).StaticCast< Array< int > >(),tmp22->ff->__get(tmp24).StaticCast< Array< Float > >(),tmp25->ii->__get(tmp27).StaticCast< Array< int > >(),tmp32,tmp37,tmp42,tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(727)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = tmp48;
					HX_STACK_LINE(729)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = true;
					HX_STACK_LINE(730)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = null();
				}
				else if (  ( _switch_1==(int)10)){
					HX_STACK_LINE(734)
					::openfl::_internal::renderer::DrawCommandReader tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(734)
					{
						HX_STACK_LINE(734)
						{
							HX_STACK_LINE(734)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(734)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(734)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(734)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(734)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(734)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(734)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(734)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(734)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(734)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(734)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(734)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(734)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(734)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(734)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(734)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(734)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(734)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(734)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(734)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(734)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(734)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(734)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(734)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(734)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(734)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(734)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(734)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(734)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(734)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(734)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(734)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(734)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(734)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_TRIANGLES;
						HX_STACK_LINE(734)
						tmp11 = data;
					}
					HX_STACK_LINE(734)
					::openfl::_internal::renderer::DrawCommandReader c = tmp11;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(735)
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(735)
					int tmp13 = c->oPos;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(735)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(735)
					Dynamic tmp15 = tmp12->o->__GetItem(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(735)
					::openfl::_Vector::FloatVector v = ((::openfl::_Vector::FloatVector)(tmp15));		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(736)
					::openfl::_internal::renderer::DrawCommandBuffer tmp16 = c->buffer;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(736)
					int tmp17 = c->oPos;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(736)
					int tmp18 = (tmp17 + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(736)
					Dynamic tmp19 = tmp16->o->__GetItem(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(736)
					::openfl::_Vector::IntVector ind = ((::openfl::_Vector::IntVector)(tmp19));		HX_STACK_VAR(ind,"ind");
					HX_STACK_LINE(737)
					::openfl::_internal::renderer::DrawCommandBuffer tmp20 = c->buffer;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(737)
					int tmp21 = c->oPos;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(737)
					int tmp22 = (tmp21 + (int)2);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(737)
					Dynamic tmp23 = tmp20->o->__GetItem(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(737)
					::openfl::_Vector::FloatVector uvt = ((::openfl::_Vector::FloatVector)(tmp23));		HX_STACK_VAR(uvt,"uvt");
					HX_STACK_LINE(738)
					::openfl::display::BitmapData tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(738)
					bool tmp25 = (tmp24 == null());		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(738)
					bool colorFill = tmp25;		HX_STACK_VAR(colorFill,"colorFill");
					HX_STACK_LINE(740)
					bool tmp26 = colorFill;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(740)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(740)
					if ((tmp26)){
						HX_STACK_LINE(740)
						tmp27 = (uvt != null());
					}
					else{
						HX_STACK_LINE(740)
						tmp27 = false;
					}
					HX_STACK_LINE(740)
					if ((tmp27)){
						HX_STACK_LINE(742)
						break;
					}
					HX_STACK_LINE(746)
					int width = (int)0;		HX_STACK_VAR(width,"width");
					HX_STACK_LINE(747)
					int height = (int)0;		HX_STACK_VAR(height,"height");
					HX_STACK_LINE(749)
					bool tmp28 = colorFill;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(749)
					bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(749)
					if ((tmp29)){
						HX_STACK_LINE(753)
						bool tmp30 = (uvt == null());		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(753)
						if ((tmp30)){
							HX_STACK_LINE(755)
							::openfl::_Vector::FloatVector tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(755)
							{
								HX_STACK_LINE(755)
								int length = null();		HX_STACK_VAR(length,"length");
								HX_STACK_LINE(755)
								bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
								HX_STACK_LINE(755)
								::openfl::_Vector::FloatVector tmp32 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(755)
								::openfl::_Vector::FloatVector tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(755)
								tmp31 = tmp33;
							}
							HX_STACK_LINE(755)
							uvt = tmp31;
							HX_STACK_LINE(757)
							{
								HX_STACK_LINE(757)
								int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(757)
								int tmp32 = v->get_length();		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(757)
								Float tmp33 = (Float(tmp32) / Float((int)2));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(757)
								int tmp34 = ::Std_obj::_int(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(757)
								int _g2 = tmp34;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(757)
								while((true)){
									HX_STACK_LINE(757)
									bool tmp35 = (_g3 < _g2);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(757)
									bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(757)
									if ((tmp36)){
										HX_STACK_LINE(757)
										break;
									}
									HX_STACK_LINE(757)
									int tmp37 = (_g3)++;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(757)
									int i = tmp37;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(759)
									{
										HX_STACK_LINE(759)
										int tmp38 = (i * (int)2);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(759)
										Float tmp39 = v->get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(759)
										Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(759)
										::openfl::display::BitmapData tmp41 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(759)
										int tmp42 = tmp41->width;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(759)
										Float tmp43 = (Float(tmp40) / Float(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(759)
										Float x = tmp43;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(759)
										Float tmp44 = x;		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(759)
										uvt->push(tmp44);
									}
									HX_STACK_LINE(760)
									{
										HX_STACK_LINE(760)
										int tmp38 = (i * (int)2);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(760)
										int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(760)
										Float tmp40 = v->get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(760)
										Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(760)
										::openfl::display::BitmapData tmp42 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(760)
										int tmp43 = tmp42->height;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(760)
										Float tmp44 = (Float(tmp41) / Float(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(760)
										Float x = tmp44;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(760)
										Float tmp45 = x;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(760)
										uvt->push(tmp45);
									}
								}
							}
						}
						HX_STACK_LINE(766)
						::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(766)
						int tmp32 = c->oPos;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(766)
						int tmp33 = (tmp32 + (int)2);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(766)
						Dynamic tmp34 = tmp31->o->__GetItem(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(766)
						int tmp35 = ((::openfl::_Vector::FloatVector)(tmp34))->get_length();		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(766)
						int tmp36 = v->get_length();		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(766)
						bool tmp37 = (tmp35 != tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(766)
						bool skipT = tmp37;		HX_STACK_VAR(skipT,"skipT");
						HX_STACK_LINE(767)
						::openfl::_Vector::FloatVector tmp38 = uvt;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(767)
						bool tmp39 = skipT;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(767)
						Dynamic tmp40 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::normalizeUVT(tmp38,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(767)
						Dynamic normalizedUVT = tmp40;		HX_STACK_VAR(normalizedUVT,"normalizedUVT");
						HX_STACK_LINE(768)
						Float maxUVT = normalizedUVT->__Field(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"), hx::paccDynamic );		HX_STACK_VAR(maxUVT,"maxUVT");
						HX_STACK_LINE(769)
						uvt = normalizedUVT->__Field(HX_HCSTRING("uvt","\xf3","\x2e","\x59","\x00"), hx::paccDynamic );
						HX_STACK_LINE(771)
						bool tmp41 = (maxUVT > (int)1);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(771)
						if ((tmp41)){
							HX_STACK_LINE(772)
							::openfl::geom::Rectangle tmp42 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(772)
							Float tmp43 = tmp42->width;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(772)
							int tmp44 = ::Std_obj::_int(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(772)
							width = tmp44;
							HX_STACK_LINE(773)
							::openfl::geom::Rectangle tmp45 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(773)
							Float tmp46 = tmp45->height;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(773)
							int tmp47 = ::Std_obj::_int(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(773)
							height = tmp47;
						}
						else{
							HX_STACK_LINE(778)
							::openfl::display::BitmapData tmp42 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(778)
							width = tmp42->width;
							HX_STACK_LINE(779)
							::openfl::display::BitmapData tmp43 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(779)
							height = tmp43->height;
						}
					}
					HX_STACK_LINE(785)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(786)
					int tmp30 = ind->get_length();		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(786)
					int l = tmp30;		HX_STACK_VAR(l,"l");
					HX_STACK_LINE(788)
					int a_;		HX_STACK_VAR(a_,"a_");
					HX_STACK_LINE(788)
					int b_;		HX_STACK_VAR(b_,"b_");
					HX_STACK_LINE(788)
					int c_;		HX_STACK_VAR(c_,"c_");
					HX_STACK_LINE(789)
					int iax;		HX_STACK_VAR(iax,"iax");
					HX_STACK_LINE(789)
					int iay;		HX_STACK_VAR(iay,"iay");
					HX_STACK_LINE(789)
					int ibx;		HX_STACK_VAR(ibx,"ibx");
					HX_STACK_LINE(789)
					int iby;		HX_STACK_VAR(iby,"iby");
					HX_STACK_LINE(789)
					int icx;		HX_STACK_VAR(icx,"icx");
					HX_STACK_LINE(789)
					int icy;		HX_STACK_VAR(icy,"icy");
					HX_STACK_LINE(790)
					Float x1;		HX_STACK_VAR(x1,"x1");
					HX_STACK_LINE(790)
					Float y1;		HX_STACK_VAR(y1,"y1");
					HX_STACK_LINE(790)
					Float x2;		HX_STACK_VAR(x2,"x2");
					HX_STACK_LINE(790)
					Float y2;		HX_STACK_VAR(y2,"y2");
					HX_STACK_LINE(790)
					Float x3;		HX_STACK_VAR(x3,"x3");
					HX_STACK_LINE(790)
					Float y3;		HX_STACK_VAR(y3,"y3");
					HX_STACK_LINE(791)
					Float uvx1;		HX_STACK_VAR(uvx1,"uvx1");
					HX_STACK_LINE(791)
					Float uvy1;		HX_STACK_VAR(uvy1,"uvy1");
					HX_STACK_LINE(791)
					Float uvx2;		HX_STACK_VAR(uvx2,"uvx2");
					HX_STACK_LINE(791)
					Float uvy2;		HX_STACK_VAR(uvy2,"uvy2");
					HX_STACK_LINE(791)
					Float uvx3;		HX_STACK_VAR(uvx3,"uvx3");
					HX_STACK_LINE(791)
					Float uvy3;		HX_STACK_VAR(uvy3,"uvy3");
					HX_STACK_LINE(792)
					Float denom;		HX_STACK_VAR(denom,"denom");
					HX_STACK_LINE(793)
					Float t1;		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(793)
					Float t2;		HX_STACK_VAR(t2,"t2");
					HX_STACK_LINE(793)
					Float t3;		HX_STACK_VAR(t3,"t3");
					HX_STACK_LINE(793)
					Float t4;		HX_STACK_VAR(t4,"t4");
					HX_STACK_LINE(794)
					Float dx;		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(794)
					Float dy;		HX_STACK_VAR(dy,"dy");
					HX_STACK_LINE(796)
					::lime::graphics::cairo::Cairo tmp31 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(796)
					tmp31->set_antialias((int)1);
					HX_STACK_LINE(798)
					while((true)){
						HX_STACK_LINE(798)
						bool tmp32 = (i < l);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(798)
						bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(798)
						if ((tmp33)){
							HX_STACK_LINE(798)
							break;
						}
						HX_STACK_LINE(800)
						a_ = i;
						HX_STACK_LINE(801)
						int tmp34 = (i + (int)1);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(801)
						b_ = tmp34;
						HX_STACK_LINE(802)
						int tmp35 = (i + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(802)
						c_ = tmp35;
						HX_STACK_LINE(804)
						int tmp36 = a_;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(804)
						int tmp37 = ind->get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(804)
						int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(804)
						int tmp39 = (tmp38 * (int)2);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(804)
						iax = tmp39;
						HX_STACK_LINE(805)
						int tmp40 = a_;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(805)
						int tmp41 = ind->get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(805)
						int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(805)
						int tmp43 = (tmp42 * (int)2);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(805)
						int tmp44 = (tmp43 + (int)1);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(805)
						iay = tmp44;
						HX_STACK_LINE(806)
						int tmp45 = b_;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(806)
						int tmp46 = ind->get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(806)
						int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(806)
						int tmp48 = (tmp47 * (int)2);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(806)
						ibx = tmp48;
						HX_STACK_LINE(807)
						int tmp49 = b_;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(807)
						int tmp50 = ind->get(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(807)
						int tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(807)
						int tmp52 = (tmp51 * (int)2);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(807)
						int tmp53 = (tmp52 + (int)1);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(807)
						iby = tmp53;
						HX_STACK_LINE(808)
						int tmp54 = c_;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(808)
						int tmp55 = ind->get(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(808)
						int tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(808)
						int tmp57 = (tmp56 * (int)2);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(808)
						icx = tmp57;
						HX_STACK_LINE(809)
						int tmp58 = c_;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(809)
						int tmp59 = ind->get(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(809)
						int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(809)
						int tmp61 = (tmp60 * (int)2);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(809)
						int tmp62 = (tmp61 + (int)1);		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(809)
						icy = tmp62;
						HX_STACK_LINE(811)
						int tmp63 = iax;		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(811)
						Float tmp64 = v->get(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(811)
						x1 = tmp64;
						HX_STACK_LINE(812)
						int tmp65 = iay;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(812)
						Float tmp66 = v->get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(812)
						y1 = tmp66;
						HX_STACK_LINE(813)
						int tmp67 = ibx;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(813)
						Float tmp68 = v->get(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(813)
						x2 = tmp68;
						HX_STACK_LINE(814)
						int tmp69 = iby;		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(814)
						Float tmp70 = v->get(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(814)
						y2 = tmp70;
						HX_STACK_LINE(815)
						int tmp71 = icx;		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(815)
						Float tmp72 = v->get(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(815)
						x3 = tmp72;
						HX_STACK_LINE(816)
						int tmp73 = icy;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(816)
						Float tmp74 = v->get(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(816)
						y3 = tmp74;
						HX_STACK_LINE(818)
						{
							HX_STACK_LINE(818)
							::openfl::_internal::renderer::DrawCommandBuffer tmp75 = c->buffer;		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(818)
							int tmp76 = c->oPos;		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(818)
							int tmp77 = (tmp76 + (int)3);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(818)
							Dynamic tmp78 = tmp75->o->__GetItem(tmp77);		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(818)
							Dynamic _g2 = tmp78;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(818)
							Dynamic tmp79 = _g2;		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(818)
							switch( (int)(tmp79)){
								case (int)2: {
									HX_STACK_LINE(822)
									Float tmp80 = (x2 - x1);		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(822)
									Float tmp81 = (y3 - y1);		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(822)
									Float tmp82 = (tmp80 * tmp81);		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(822)
									Float tmp83 = (y2 - y1);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(822)
									Float tmp84 = (x3 - x1);		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(822)
									Float tmp85 = (tmp83 * tmp84);		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(822)
									Float tmp86 = (tmp82 - tmp85);		HX_STACK_VAR(tmp86,"tmp86");
									HX_STACK_LINE(822)
									bool tmp87 = (tmp86 < (int)0);		HX_STACK_VAR(tmp87,"tmp87");
									HX_STACK_LINE(822)
									bool tmp88 = !(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
									HX_STACK_LINE(822)
									if ((tmp88)){
										HX_STACK_LINE(824)
										hx::AddEq(i,(int)3);
										HX_STACK_LINE(825)
										continue;
									}
								}
								;break;
								case (int)0: {
									HX_STACK_LINE(831)
									Float tmp80 = (x2 - x1);		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(831)
									Float tmp81 = (y3 - y1);		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(831)
									Float tmp82 = (tmp80 * tmp81);		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(831)
									Float tmp83 = (y2 - y1);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(831)
									Float tmp84 = (x3 - x1);		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(831)
									Float tmp85 = (tmp83 * tmp84);		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(831)
									Float tmp86 = (tmp82 - tmp85);		HX_STACK_VAR(tmp86,"tmp86");
									HX_STACK_LINE(831)
									bool tmp87 = (tmp86 < (int)0);		HX_STACK_VAR(tmp87,"tmp87");
									HX_STACK_LINE(831)
									if ((tmp87)){
										HX_STACK_LINE(833)
										hx::AddEq(i,(int)3);
										HX_STACK_LINE(834)
										continue;
									}
								}
								;break;
								default: {
								}
							}
						}
						HX_STACK_LINE(842)
						bool tmp75 = colorFill;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(842)
						if ((tmp75)){
							HX_STACK_LINE(844)
							::lime::graphics::cairo::Cairo tmp76 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(844)
							tmp76->newPath();
							HX_STACK_LINE(845)
							::lime::graphics::cairo::Cairo tmp77 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(845)
							Float tmp78 = x1;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(845)
							Float tmp79 = y1;		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(845)
							tmp77->moveTo(tmp78,tmp79);
							HX_STACK_LINE(846)
							::lime::graphics::cairo::Cairo tmp80 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(846)
							Float tmp81 = x2;		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(846)
							Float tmp82 = y2;		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(846)
							tmp80->lineTo(tmp81,tmp82);
							HX_STACK_LINE(847)
							::lime::graphics::cairo::Cairo tmp83 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(847)
							Float tmp84 = x3;		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(847)
							Float tmp85 = y3;		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(847)
							tmp83->lineTo(tmp84,tmp85);
							HX_STACK_LINE(848)
							::lime::graphics::cairo::Cairo tmp86 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(848)
							tmp86->closePath();
							HX_STACK_LINE(849)
							bool tmp87 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting;		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(849)
							bool tmp88 = !(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(849)
							if ((tmp88)){
								HX_STACK_LINE(849)
								::lime::graphics::cairo::Cairo tmp89 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp89,"tmp89");
								HX_STACK_LINE(849)
								tmp89->fillPreserve();
							}
							HX_STACK_LINE(850)
							hx::AddEq(i,(int)3);
							HX_STACK_LINE(851)
							continue;
						}
						HX_STACK_LINE(855)
						::lime::graphics::cairo::Cairo tmp76 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(855)
						::openfl::display::Graphics tmp77 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics;		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(855)
						::lime::math::Matrix3 tmp78 = tmp77->__renderTransform->__toMatrix3();		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(855)
						tmp76->set_matrix(tmp78);
						HX_STACK_LINE(859)
						::lime::graphics::cairo::Cairo tmp79 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(859)
						tmp79->newPath();
						HX_STACK_LINE(860)
						::lime::graphics::cairo::Cairo tmp80 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(860)
						Float tmp81 = x1;		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(860)
						Float tmp82 = y1;		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(860)
						tmp80->moveTo(tmp81,tmp82);
						HX_STACK_LINE(861)
						::lime::graphics::cairo::Cairo tmp83 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(861)
						Float tmp84 = x2;		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(861)
						Float tmp85 = y2;		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(861)
						tmp83->lineTo(tmp84,tmp85);
						HX_STACK_LINE(862)
						::lime::graphics::cairo::Cairo tmp86 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(862)
						Float tmp87 = x3;		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(862)
						Float tmp88 = y3;		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(862)
						tmp86->lineTo(tmp87,tmp88);
						HX_STACK_LINE(863)
						::lime::graphics::cairo::Cairo tmp89 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(863)
						tmp89->closePath();
						HX_STACK_LINE(866)
						int tmp90 = iax;		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(866)
						Float tmp91 = uvt->get(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
						HX_STACK_LINE(866)
						Float tmp92 = tmp91;		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(866)
						int tmp93 = width;		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(866)
						Float tmp94 = (tmp92 * tmp93);		HX_STACK_VAR(tmp94,"tmp94");
						HX_STACK_LINE(866)
						uvx1 = tmp94;
						HX_STACK_LINE(867)
						int tmp95 = ibx;		HX_STACK_VAR(tmp95,"tmp95");
						HX_STACK_LINE(867)
						Float tmp96 = uvt->get(tmp95);		HX_STACK_VAR(tmp96,"tmp96");
						HX_STACK_LINE(867)
						Float tmp97 = tmp96;		HX_STACK_VAR(tmp97,"tmp97");
						HX_STACK_LINE(867)
						int tmp98 = width;		HX_STACK_VAR(tmp98,"tmp98");
						HX_STACK_LINE(867)
						Float tmp99 = (tmp97 * tmp98);		HX_STACK_VAR(tmp99,"tmp99");
						HX_STACK_LINE(867)
						uvx2 = tmp99;
						HX_STACK_LINE(868)
						int tmp100 = icx;		HX_STACK_VAR(tmp100,"tmp100");
						HX_STACK_LINE(868)
						Float tmp101 = uvt->get(tmp100);		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(868)
						Float tmp102 = tmp101;		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(868)
						int tmp103 = width;		HX_STACK_VAR(tmp103,"tmp103");
						HX_STACK_LINE(868)
						Float tmp104 = (tmp102 * tmp103);		HX_STACK_VAR(tmp104,"tmp104");
						HX_STACK_LINE(868)
						uvx3 = tmp104;
						HX_STACK_LINE(869)
						int tmp105 = iay;		HX_STACK_VAR(tmp105,"tmp105");
						HX_STACK_LINE(869)
						Float tmp106 = uvt->get(tmp105);		HX_STACK_VAR(tmp106,"tmp106");
						HX_STACK_LINE(869)
						Float tmp107 = tmp106;		HX_STACK_VAR(tmp107,"tmp107");
						HX_STACK_LINE(869)
						int tmp108 = height;		HX_STACK_VAR(tmp108,"tmp108");
						HX_STACK_LINE(869)
						Float tmp109 = (tmp107 * tmp108);		HX_STACK_VAR(tmp109,"tmp109");
						HX_STACK_LINE(869)
						uvy1 = tmp109;
						HX_STACK_LINE(870)
						int tmp110 = iby;		HX_STACK_VAR(tmp110,"tmp110");
						HX_STACK_LINE(870)
						Float tmp111 = uvt->get(tmp110);		HX_STACK_VAR(tmp111,"tmp111");
						HX_STACK_LINE(870)
						Float tmp112 = tmp111;		HX_STACK_VAR(tmp112,"tmp112");
						HX_STACK_LINE(870)
						int tmp113 = height;		HX_STACK_VAR(tmp113,"tmp113");
						HX_STACK_LINE(870)
						Float tmp114 = (tmp112 * tmp113);		HX_STACK_VAR(tmp114,"tmp114");
						HX_STACK_LINE(870)
						uvy2 = tmp114;
						HX_STACK_LINE(871)
						int tmp115 = icy;		HX_STACK_VAR(tmp115,"tmp115");
						HX_STACK_LINE(871)
						Float tmp116 = uvt->get(tmp115);		HX_STACK_VAR(tmp116,"tmp116");
						HX_STACK_LINE(871)
						Float tmp117 = tmp116;		HX_STACK_VAR(tmp117,"tmp117");
						HX_STACK_LINE(871)
						int tmp118 = height;		HX_STACK_VAR(tmp118,"tmp118");
						HX_STACK_LINE(871)
						Float tmp119 = (tmp117 * tmp118);		HX_STACK_VAR(tmp119,"tmp119");
						HX_STACK_LINE(871)
						uvy3 = tmp119;
						HX_STACK_LINE(873)
						Float tmp120 = uvx1;		HX_STACK_VAR(tmp120,"tmp120");
						HX_STACK_LINE(873)
						Float tmp121 = (uvy3 - uvy2);		HX_STACK_VAR(tmp121,"tmp121");
						HX_STACK_LINE(873)
						Float tmp122 = (tmp120 * tmp121);		HX_STACK_VAR(tmp122,"tmp122");
						HX_STACK_LINE(873)
						Float tmp123 = (uvx2 * uvy3);		HX_STACK_VAR(tmp123,"tmp123");
						HX_STACK_LINE(873)
						Float tmp124 = (tmp122 - tmp123);		HX_STACK_VAR(tmp124,"tmp124");
						HX_STACK_LINE(873)
						Float tmp125 = (uvx3 * uvy2);		HX_STACK_VAR(tmp125,"tmp125");
						HX_STACK_LINE(873)
						Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
						HX_STACK_LINE(873)
						Float tmp127 = (uvx2 - uvx3);		HX_STACK_VAR(tmp127,"tmp127");
						HX_STACK_LINE(873)
						Float tmp128 = uvy1;		HX_STACK_VAR(tmp128,"tmp128");
						HX_STACK_LINE(873)
						Float tmp129 = (tmp127 * tmp128);		HX_STACK_VAR(tmp129,"tmp129");
						HX_STACK_LINE(873)
						Float tmp130 = (tmp126 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
						HX_STACK_LINE(873)
						denom = tmp130;
						HX_STACK_LINE(875)
						bool tmp131 = (denom == (int)0);		HX_STACK_VAR(tmp131,"tmp131");
						HX_STACK_LINE(875)
						if ((tmp131)){
							HX_STACK_LINE(877)
							hx::AddEq(i,(int)3);
							HX_STACK_LINE(878)
							continue;
						}
						HX_STACK_LINE(882)
						Float tmp132 = uvy1;		HX_STACK_VAR(tmp132,"tmp132");
						HX_STACK_LINE(882)
						Float tmp133 = (x3 - x2);		HX_STACK_VAR(tmp133,"tmp133");
						HX_STACK_LINE(882)
						Float tmp134 = (tmp132 * tmp133);		HX_STACK_VAR(tmp134,"tmp134");
						HX_STACK_LINE(882)
						Float tmp135 = (uvy2 * x3);		HX_STACK_VAR(tmp135,"tmp135");
						HX_STACK_LINE(882)
						Float tmp136 = (tmp134 - tmp135);		HX_STACK_VAR(tmp136,"tmp136");
						HX_STACK_LINE(882)
						Float tmp137 = (uvy3 * x2);		HX_STACK_VAR(tmp137,"tmp137");
						HX_STACK_LINE(882)
						Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
						HX_STACK_LINE(882)
						Float tmp139 = (uvy2 - uvy3);		HX_STACK_VAR(tmp139,"tmp139");
						HX_STACK_LINE(882)
						Float tmp140 = x1;		HX_STACK_VAR(tmp140,"tmp140");
						HX_STACK_LINE(882)
						Float tmp141 = (tmp139 * tmp140);		HX_STACK_VAR(tmp141,"tmp141");
						HX_STACK_LINE(882)
						Float tmp142 = (tmp138 + tmp141);		HX_STACK_VAR(tmp142,"tmp142");
						HX_STACK_LINE(882)
						Float tmp143 = -(tmp142);		HX_STACK_VAR(tmp143,"tmp143");
						HX_STACK_LINE(882)
						Float tmp144 = denom;		HX_STACK_VAR(tmp144,"tmp144");
						HX_STACK_LINE(882)
						Float tmp145 = (Float(tmp143) / Float(tmp144));		HX_STACK_VAR(tmp145,"tmp145");
						HX_STACK_LINE(882)
						t1 = tmp145;
						HX_STACK_LINE(883)
						Float tmp146 = (uvy2 * y3);		HX_STACK_VAR(tmp146,"tmp146");
						HX_STACK_LINE(883)
						Float tmp147 = uvy1;		HX_STACK_VAR(tmp147,"tmp147");
						HX_STACK_LINE(883)
						Float tmp148 = (y2 - y3);		HX_STACK_VAR(tmp148,"tmp148");
						HX_STACK_LINE(883)
						Float tmp149 = (tmp147 * tmp148);		HX_STACK_VAR(tmp149,"tmp149");
						HX_STACK_LINE(883)
						Float tmp150 = (tmp146 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
						HX_STACK_LINE(883)
						Float tmp151 = (uvy3 * y2);		HX_STACK_VAR(tmp151,"tmp151");
						HX_STACK_LINE(883)
						Float tmp152 = (tmp150 - tmp151);		HX_STACK_VAR(tmp152,"tmp152");
						HX_STACK_LINE(883)
						Float tmp153 = (uvy3 - uvy2);		HX_STACK_VAR(tmp153,"tmp153");
						HX_STACK_LINE(883)
						Float tmp154 = y1;		HX_STACK_VAR(tmp154,"tmp154");
						HX_STACK_LINE(883)
						Float tmp155 = (tmp153 * tmp154);		HX_STACK_VAR(tmp155,"tmp155");
						HX_STACK_LINE(883)
						Float tmp156 = (tmp152 + tmp155);		HX_STACK_VAR(tmp156,"tmp156");
						HX_STACK_LINE(883)
						Float tmp157 = denom;		HX_STACK_VAR(tmp157,"tmp157");
						HX_STACK_LINE(883)
						Float tmp158 = (Float(tmp156) / Float(tmp157));		HX_STACK_VAR(tmp158,"tmp158");
						HX_STACK_LINE(883)
						t2 = tmp158;
						HX_STACK_LINE(884)
						Float tmp159 = uvx1;		HX_STACK_VAR(tmp159,"tmp159");
						HX_STACK_LINE(884)
						Float tmp160 = (x3 - x2);		HX_STACK_VAR(tmp160,"tmp160");
						HX_STACK_LINE(884)
						Float tmp161 = (tmp159 * tmp160);		HX_STACK_VAR(tmp161,"tmp161");
						HX_STACK_LINE(884)
						Float tmp162 = (uvx2 * x3);		HX_STACK_VAR(tmp162,"tmp162");
						HX_STACK_LINE(884)
						Float tmp163 = (tmp161 - tmp162);		HX_STACK_VAR(tmp163,"tmp163");
						HX_STACK_LINE(884)
						Float tmp164 = (uvx3 * x2);		HX_STACK_VAR(tmp164,"tmp164");
						HX_STACK_LINE(884)
						Float tmp165 = (tmp163 + tmp164);		HX_STACK_VAR(tmp165,"tmp165");
						HX_STACK_LINE(884)
						Float tmp166 = (uvx2 - uvx3);		HX_STACK_VAR(tmp166,"tmp166");
						HX_STACK_LINE(884)
						Float tmp167 = x1;		HX_STACK_VAR(tmp167,"tmp167");
						HX_STACK_LINE(884)
						Float tmp168 = (tmp166 * tmp167);		HX_STACK_VAR(tmp168,"tmp168");
						HX_STACK_LINE(884)
						Float tmp169 = (tmp165 + tmp168);		HX_STACK_VAR(tmp169,"tmp169");
						HX_STACK_LINE(884)
						Float tmp170 = denom;		HX_STACK_VAR(tmp170,"tmp170");
						HX_STACK_LINE(884)
						Float tmp171 = (Float(tmp169) / Float(tmp170));		HX_STACK_VAR(tmp171,"tmp171");
						HX_STACK_LINE(884)
						t3 = tmp171;
						HX_STACK_LINE(885)
						Float tmp172 = (uvx2 * y3);		HX_STACK_VAR(tmp172,"tmp172");
						HX_STACK_LINE(885)
						Float tmp173 = uvx1;		HX_STACK_VAR(tmp173,"tmp173");
						HX_STACK_LINE(885)
						Float tmp174 = (y2 - y3);		HX_STACK_VAR(tmp174,"tmp174");
						HX_STACK_LINE(885)
						Float tmp175 = (tmp173 * tmp174);		HX_STACK_VAR(tmp175,"tmp175");
						HX_STACK_LINE(885)
						Float tmp176 = (tmp172 + tmp175);		HX_STACK_VAR(tmp176,"tmp176");
						HX_STACK_LINE(885)
						Float tmp177 = (uvx3 * y2);		HX_STACK_VAR(tmp177,"tmp177");
						HX_STACK_LINE(885)
						Float tmp178 = (tmp176 - tmp177);		HX_STACK_VAR(tmp178,"tmp178");
						HX_STACK_LINE(885)
						Float tmp179 = (uvx3 - uvx2);		HX_STACK_VAR(tmp179,"tmp179");
						HX_STACK_LINE(885)
						Float tmp180 = y1;		HX_STACK_VAR(tmp180,"tmp180");
						HX_STACK_LINE(885)
						Float tmp181 = (tmp179 * tmp180);		HX_STACK_VAR(tmp181,"tmp181");
						HX_STACK_LINE(885)
						Float tmp182 = (tmp178 + tmp181);		HX_STACK_VAR(tmp182,"tmp182");
						HX_STACK_LINE(885)
						Float tmp183 = -(tmp182);		HX_STACK_VAR(tmp183,"tmp183");
						HX_STACK_LINE(885)
						Float tmp184 = denom;		HX_STACK_VAR(tmp184,"tmp184");
						HX_STACK_LINE(885)
						Float tmp185 = (Float(tmp183) / Float(tmp184));		HX_STACK_VAR(tmp185,"tmp185");
						HX_STACK_LINE(885)
						t4 = tmp185;
						HX_STACK_LINE(886)
						Float tmp186 = uvx1;		HX_STACK_VAR(tmp186,"tmp186");
						HX_STACK_LINE(886)
						Float tmp187 = (uvy3 * x2);		HX_STACK_VAR(tmp187,"tmp187");
						HX_STACK_LINE(886)
						Float tmp188 = (uvy2 * x3);		HX_STACK_VAR(tmp188,"tmp188");
						HX_STACK_LINE(886)
						Float tmp189 = (tmp187 - tmp188);		HX_STACK_VAR(tmp189,"tmp189");
						HX_STACK_LINE(886)
						Float tmp190 = (tmp186 * tmp189);		HX_STACK_VAR(tmp190,"tmp190");
						HX_STACK_LINE(886)
						Float tmp191 = uvy1;		HX_STACK_VAR(tmp191,"tmp191");
						HX_STACK_LINE(886)
						Float tmp192 = (uvx2 * x3);		HX_STACK_VAR(tmp192,"tmp192");
						HX_STACK_LINE(886)
						Float tmp193 = (uvx3 * x2);		HX_STACK_VAR(tmp193,"tmp193");
						HX_STACK_LINE(886)
						Float tmp194 = (tmp192 - tmp193);		HX_STACK_VAR(tmp194,"tmp194");
						HX_STACK_LINE(886)
						Float tmp195 = (tmp191 * tmp194);		HX_STACK_VAR(tmp195,"tmp195");
						HX_STACK_LINE(886)
						Float tmp196 = (tmp190 + tmp195);		HX_STACK_VAR(tmp196,"tmp196");
						HX_STACK_LINE(886)
						Float tmp197 = (uvx3 * uvy2);		HX_STACK_VAR(tmp197,"tmp197");
						HX_STACK_LINE(886)
						Float tmp198 = (uvx2 * uvy3);		HX_STACK_VAR(tmp198,"tmp198");
						HX_STACK_LINE(886)
						Float tmp199 = (tmp197 - tmp198);		HX_STACK_VAR(tmp199,"tmp199");
						HX_STACK_LINE(886)
						Float tmp200 = x1;		HX_STACK_VAR(tmp200,"tmp200");
						HX_STACK_LINE(886)
						Float tmp201 = (tmp199 * tmp200);		HX_STACK_VAR(tmp201,"tmp201");
						HX_STACK_LINE(886)
						Float tmp202 = (tmp196 + tmp201);		HX_STACK_VAR(tmp202,"tmp202");
						HX_STACK_LINE(886)
						Float tmp203 = denom;		HX_STACK_VAR(tmp203,"tmp203");
						HX_STACK_LINE(886)
						Float tmp204 = (Float(tmp202) / Float(tmp203));		HX_STACK_VAR(tmp204,"tmp204");
						HX_STACK_LINE(886)
						dx = tmp204;
						HX_STACK_LINE(887)
						Float tmp205 = uvx1;		HX_STACK_VAR(tmp205,"tmp205");
						HX_STACK_LINE(887)
						Float tmp206 = (uvy3 * y2);		HX_STACK_VAR(tmp206,"tmp206");
						HX_STACK_LINE(887)
						Float tmp207 = (uvy2 * y3);		HX_STACK_VAR(tmp207,"tmp207");
						HX_STACK_LINE(887)
						Float tmp208 = (tmp206 - tmp207);		HX_STACK_VAR(tmp208,"tmp208");
						HX_STACK_LINE(887)
						Float tmp209 = (tmp205 * tmp208);		HX_STACK_VAR(tmp209,"tmp209");
						HX_STACK_LINE(887)
						Float tmp210 = uvy1;		HX_STACK_VAR(tmp210,"tmp210");
						HX_STACK_LINE(887)
						Float tmp211 = (uvx2 * y3);		HX_STACK_VAR(tmp211,"tmp211");
						HX_STACK_LINE(887)
						Float tmp212 = (uvx3 * y2);		HX_STACK_VAR(tmp212,"tmp212");
						HX_STACK_LINE(887)
						Float tmp213 = (tmp211 - tmp212);		HX_STACK_VAR(tmp213,"tmp213");
						HX_STACK_LINE(887)
						Float tmp214 = (tmp210 * tmp213);		HX_STACK_VAR(tmp214,"tmp214");
						HX_STACK_LINE(887)
						Float tmp215 = (tmp209 + tmp214);		HX_STACK_VAR(tmp215,"tmp215");
						HX_STACK_LINE(887)
						Float tmp216 = (uvx3 * uvy2);		HX_STACK_VAR(tmp216,"tmp216");
						HX_STACK_LINE(887)
						Float tmp217 = (uvx2 * uvy3);		HX_STACK_VAR(tmp217,"tmp217");
						HX_STACK_LINE(887)
						Float tmp218 = (tmp216 - tmp217);		HX_STACK_VAR(tmp218,"tmp218");
						HX_STACK_LINE(887)
						Float tmp219 = y1;		HX_STACK_VAR(tmp219,"tmp219");
						HX_STACK_LINE(887)
						Float tmp220 = (tmp218 * tmp219);		HX_STACK_VAR(tmp220,"tmp220");
						HX_STACK_LINE(887)
						Float tmp221 = (tmp215 + tmp220);		HX_STACK_VAR(tmp221,"tmp221");
						HX_STACK_LINE(887)
						Float tmp222 = denom;		HX_STACK_VAR(tmp222,"tmp222");
						HX_STACK_LINE(887)
						Float tmp223 = (Float(tmp221) / Float(tmp222));		HX_STACK_VAR(tmp223,"tmp223");
						HX_STACK_LINE(887)
						dy = tmp223;
						HX_STACK_LINE(889)
						::lime::math::Matrix3 tmp224 = ::lime::math::Matrix3_obj::__new(t1,t2,t3,t4,dx,dy);		HX_STACK_VAR(tmp224,"tmp224");
						HX_STACK_LINE(889)
						::lime::math::Matrix3 matrix = tmp224;		HX_STACK_VAR(matrix,"matrix");
						HX_STACK_LINE(890)
						::lime::graphics::cairo::Cairo tmp225 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp225,"tmp225");
						HX_STACK_LINE(890)
						::lime::math::Matrix3 tmp226 = matrix;		HX_STACK_VAR(tmp226,"tmp226");
						HX_STACK_LINE(890)
						tmp225->set_matrix(tmp226);
						HX_STACK_LINE(891)
						::lime::graphics::cairo::Cairo tmp227 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp227,"tmp227");
						HX_STACK_LINE(891)
						Dynamic tmp228 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp228,"tmp228");
						HX_STACK_LINE(891)
						tmp227->set_source(tmp228);
						HX_STACK_LINE(892)
						bool tmp229 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting;		HX_STACK_VAR(tmp229,"tmp229");
						HX_STACK_LINE(892)
						bool tmp230 = !(tmp229);		HX_STACK_VAR(tmp230,"tmp230");
						HX_STACK_LINE(892)
						if ((tmp230)){
							HX_STACK_LINE(892)
							::lime::graphics::cairo::Cairo tmp231 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp231,"tmp231");
							HX_STACK_LINE(892)
							tmp231->fill();
						}
						HX_STACK_LINE(894)
						hx::AddEq(i,(int)3);
					}
				}
				else  {
					HX_STACK_LINE(900)
					{
						HX_STACK_LINE(900)
						::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(900)
						switch( (int)(_g2->__Index())){
							case (int)0: {
								HX_STACK_LINE(900)
								hx::AddEq(data->oPos,(int)2);
								HX_STACK_LINE(900)
								hx::AddEq(data->bPos,(int)2);
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(900)
								hx::AddEq(data->iPos,(int)1);
								HX_STACK_LINE(900)
								hx::AddEq(data->fPos,(int)1);
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(900)
								hx::AddEq(data->oPos,(int)4);
								HX_STACK_LINE(900)
								hx::AddEq(data->iiPos,(int)2);
								HX_STACK_LINE(900)
								hx::AddEq(data->ffPos,(int)1);
								HX_STACK_LINE(900)
								hx::AddEq(data->fPos,(int)1);
							}
							;break;
							case (int)3: {
								HX_STACK_LINE(900)
								hx::AddEq(data->fPos,(int)6);
							}
							;break;
							case (int)4: {
								HX_STACK_LINE(900)
								hx::AddEq(data->fPos,(int)4);
							}
							;break;
							case (int)5: {
								HX_STACK_LINE(900)
								hx::AddEq(data->fPos,(int)3);
							}
							;break;
							case (int)6: {
								HX_STACK_LINE(900)
								hx::AddEq(data->fPos,(int)4);
							}
							;break;
							case (int)7: {
								HX_STACK_LINE(900)
								hx::AddEq(data->fPos,(int)4);
							}
							;break;
							case (int)8: {
								HX_STACK_LINE(900)
								hx::AddEq(data->fPos,(int)5);
								HX_STACK_LINE(900)
								hx::AddEq(data->oPos,(int)1);
							}
							;break;
							case (int)10: {
								HX_STACK_LINE(900)
								hx::AddEq(data->oPos,(int)4);
							}
							;break;
							case (int)11: {
								HX_STACK_LINE(900)
								Dynamic();
							}
							;break;
							case (int)12: {
								HX_STACK_LINE(900)
								hx::AddEq(data->oPos,(int)2);
								HX_STACK_LINE(900)
								hx::AddEq(data->bPos,(int)2);
							}
							;break;
							case (int)13: {
								HX_STACK_LINE(900)
								hx::AddEq(data->oPos,(int)4);
								HX_STACK_LINE(900)
								hx::AddEq(data->iiPos,(int)2);
								HX_STACK_LINE(900)
								hx::AddEq(data->ffPos,(int)1);
								HX_STACK_LINE(900)
								hx::AddEq(data->fPos,(int)1);
							}
							;break;
							case (int)14: {
								HX_STACK_LINE(900)
								hx::AddEq(data->oPos,(int)4);
								HX_STACK_LINE(900)
								hx::AddEq(data->iPos,(int)1);
								HX_STACK_LINE(900)
								hx::AddEq(data->fPos,(int)2);
								HX_STACK_LINE(900)
								hx::AddEq(data->bPos,(int)1);
							}
							;break;
							case (int)15: {
								HX_STACK_LINE(900)
								hx::AddEq(data->fPos,(int)2);
							}
							;break;
							case (int)16: {
								HX_STACK_LINE(900)
								hx::AddEq(data->fPos,(int)2);
							}
							;break;
							case (int)17: {
								HX_STACK_LINE(900)
								hx::AddEq(data->oPos,(int)1);
							}
							;break;
							default: {
								HX_STACK_LINE(900)
								Dynamic();
							}
						}
					}
					HX_STACK_LINE(900)
					data->prev = type;
				}
;
;
			}
		}
		HX_STACK_LINE(906)
		data->destroy();
		HX_STACK_LINE(908)
		bool tmp8 = hasPath;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(908)
		if ((tmp8)){
			HX_STACK_LINE(910)
			bool tmp9 = stroke;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(910)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(910)
			if ((tmp9)){
				HX_STACK_LINE(910)
				tmp10 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke;
			}
			else{
				HX_STACK_LINE(910)
				tmp10 = false;
			}
			HX_STACK_LINE(910)
			if ((tmp10)){
				HX_STACK_LINE(912)
				bool tmp11 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(912)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(912)
				if ((tmp11)){
					HX_STACK_LINE(912)
					tmp12 = closeGap;
				}
				else{
					HX_STACK_LINE(912)
					tmp12 = false;
				}
				HX_STACK_LINE(912)
				if ((tmp12)){
					HX_STACK_LINE(914)
					::lime::graphics::cairo::Cairo tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(914)
					Float tmp14 = (startX - offsetX);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(914)
					Float tmp15 = (startY - offsetY);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(914)
					tmp13->lineTo(tmp14,tmp15);
				}
				else{
					HX_STACK_LINE(916)
					bool tmp13 = closeGap;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(916)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(916)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(916)
					if ((tmp14)){
						HX_STACK_LINE(916)
						tmp15 = (positionX == startX);
					}
					else{
						HX_STACK_LINE(916)
						tmp15 = false;
					}
					HX_STACK_LINE(916)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(916)
					if ((tmp15)){
						HX_STACK_LINE(916)
						tmp16 = (positionY == startY);
					}
					else{
						HX_STACK_LINE(916)
						tmp16 = false;
					}
					HX_STACK_LINE(916)
					if ((tmp16)){
						HX_STACK_LINE(918)
						::openfl::_internal::renderer::cairo::CairoGraphics_obj::closePath(true);
					}
				}
				HX_STACK_LINE(922)
				::lime::graphics::cairo::Cairo tmp13 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(922)
				Dynamic tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(922)
				tmp13->set_source(tmp14);
				HX_STACK_LINE(923)
				bool tmp15 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(923)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(923)
				if ((tmp16)){
					HX_STACK_LINE(923)
					::lime::graphics::cairo::Cairo tmp17 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(923)
					tmp17->strokePreserve();
				}
			}
			HX_STACK_LINE(927)
			bool tmp11 = stroke;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(927)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(927)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(927)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(927)
			if ((tmp13)){
				HX_STACK_LINE(927)
				tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill;
			}
			else{
				HX_STACK_LINE(927)
				tmp14 = false;
			}
			HX_STACK_LINE(927)
			if ((tmp14)){
				HX_STACK_LINE(929)
				::lime::graphics::cairo::Cairo tmp15 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(929)
				::openfl::geom::Rectangle tmp16 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(929)
				Float tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(929)
				Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(929)
				::openfl::geom::Rectangle tmp19 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(929)
				Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(929)
				Float tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(929)
				tmp15->translate(tmp18,tmp21);
				HX_STACK_LINE(931)
				::openfl::geom::Matrix tmp22 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(931)
				bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(931)
				if ((tmp23)){
					HX_STACK_LINE(933)
					::openfl::geom::Matrix tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPatternMatrix;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(933)
					::openfl::geom::Matrix tmp25 = tmp24->clone();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(933)
					::openfl::geom::Matrix matrix = tmp25;		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(934)
					matrix->invert();
					HX_STACK_LINE(936)
					::openfl::geom::Matrix tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(936)
					bool tmp27 = (tmp26 != null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(936)
					if ((tmp27)){
						HX_STACK_LINE(938)
						::openfl::geom::Matrix tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(938)
						matrix->concat(tmp28);
					}
					HX_STACK_LINE(942)
					Dynamic tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(942)
					::lime::math::Matrix3 tmp29 = matrix->__toMatrix3();		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(942)
					::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_matrix(tmp28,tmp29);
				}
				HX_STACK_LINE(946)
				::lime::graphics::cairo::Cairo tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(946)
				Dynamic tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(946)
				tmp24->set_source(tmp25);
				HX_STACK_LINE(948)
				::openfl::geom::Matrix tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(948)
				bool tmp27 = (tmp26 != null());		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(948)
				if ((tmp27)){
					HX_STACK_LINE(950)
					::lime::graphics::cairo::Cairo tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(950)
					::openfl::geom::Matrix tmp29 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::pendingMatrix;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(950)
					::lime::math::Matrix3 tmp30 = tmp29->__toMatrix3();		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(950)
					tmp28->transform(tmp30);
					HX_STACK_LINE(951)
					bool tmp31 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(951)
					bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(951)
					if ((tmp32)){
						HX_STACK_LINE(951)
						::lime::graphics::cairo::Cairo tmp33 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(951)
						tmp33->fillPreserve();
					}
					HX_STACK_LINE(952)
					::lime::graphics::cairo::Cairo tmp33 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(952)
					::openfl::geom::Matrix tmp34 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::inversePendingMatrix;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(952)
					::lime::math::Matrix3 tmp35 = tmp34->__toMatrix3();		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(952)
					tmp33->transform(tmp35);
				}
				else{
					HX_STACK_LINE(956)
					bool tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(956)
					bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(956)
					if ((tmp29)){
						HX_STACK_LINE(956)
						::lime::graphics::cairo::Cairo tmp30 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(956)
						tmp30->fillPreserve();
					}
				}
				HX_STACK_LINE(960)
				::lime::graphics::cairo::Cairo tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(960)
				::openfl::geom::Rectangle tmp29 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(960)
				Float tmp30 = tmp29->x;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(960)
				::openfl::geom::Rectangle tmp31 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(960)
				Float tmp32 = tmp31->y;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(960)
				tmp28->translate(tmp30,tmp32);
				HX_STACK_LINE(961)
				::lime::graphics::cairo::Cairo tmp33 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(961)
				tmp33->closePath();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,playCommands,(void))

Void CairoGraphics_obj::quadraticCurveTo( Float cx,Float cy,Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","quadraticCurveTo",0x01a3b18e,"openfl._internal.renderer.cairo.CairoGraphics.quadraticCurveTo","openfl/_internal/renderer/cairo/CairoGraphics.hx",969,0x744ae94c)
		HX_STACK_ARG(cx,"cx")
		HX_STACK_ARG(cy,"cy")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(971)
		::lime::math::Vector2 current = null();		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(973)
		::lime::graphics::cairo::Cairo tmp = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(973)
		bool tmp1 = tmp->get_hasCurrentPoint();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(973)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(973)
		if ((tmp2)){
			HX_STACK_LINE(975)
			::lime::graphics::cairo::Cairo tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(975)
			Float tmp4 = cx;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(975)
			Float tmp5 = cy;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(975)
			tmp3->moveTo(tmp4,tmp5);
			HX_STACK_LINE(976)
			::lime::math::Vector2 tmp6 = ::lime::math::Vector2_obj::__new(cx,cy);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(976)
			current = tmp6;
		}
		else{
			HX_STACK_LINE(980)
			::lime::graphics::cairo::Cairo tmp3 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(980)
			::lime::math::Vector2 tmp4 = tmp3->get_currentPoint();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(980)
			current = tmp4;
		}
		HX_STACK_LINE(984)
		Float tmp3 = current->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(984)
		Float tmp4 = ((Float)0.66666666666666663);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(984)
		Float tmp5 = (cx - current->x);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(984)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(984)
		Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(984)
		Float cx1 = tmp7;		HX_STACK_VAR(cx1,"cx1");
		HX_STACK_LINE(985)
		Float tmp8 = current->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(985)
		Float tmp9 = ((Float)0.66666666666666663);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(985)
		Float tmp10 = (cy - current->y);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(985)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(985)
		Float tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(985)
		Float cy1 = tmp12;		HX_STACK_VAR(cy1,"cy1");
		HX_STACK_LINE(986)
		Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(986)
		Float tmp14 = ((Float)0.66666666666666663);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(986)
		Float tmp15 = (cx - x);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(986)
		Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(986)
		Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(986)
		Float cx2 = tmp17;		HX_STACK_VAR(cx2,"cx2");
		HX_STACK_LINE(987)
		Float tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(987)
		Float tmp19 = ((Float)0.66666666666666663);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(987)
		Float tmp20 = (cy - y);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(987)
		Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(987)
		Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(987)
		Float cy2 = tmp22;		HX_STACK_VAR(cy2,"cy2");
		HX_STACK_LINE(989)
		::lime::graphics::cairo::Cairo tmp23 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(989)
		Float tmp24 = cx1;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(989)
		Float tmp25 = cy1;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(989)
		Float tmp26 = cx2;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(989)
		Float tmp27 = cy2;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(989)
		Float tmp28 = x;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(989)
		Float tmp29 = y;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(989)
		tmp23->curveTo(tmp24,tmp25,tmp26,tmp27,tmp28,tmp29);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CairoGraphics_obj,quadraticCurveTo,(void))

Void CairoGraphics_obj::render( ::openfl::display::Graphics graphics,::openfl::_internal::renderer::RenderSession renderSession,::openfl::geom::Matrix parentTransform){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","render",0x3c3e61d2,"openfl._internal.renderer.cairo.CairoGraphics.render","openfl/_internal/renderer/cairo/CairoGraphics.hx",994,0x744ae94c)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_ARG(parentTransform,"parentTransform")
		HX_STACK_LINE(998)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::graphics = graphics;
		HX_STACK_LINE(999)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::allowSmoothing = renderSession->allowSmoothing;
		HX_STACK_LINE(1000)
		graphics->__update();
		HX_STACK_LINE(1002)
		bool tmp = graphics->__dirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1002)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1002)
		if ((tmp1)){
			HX_STACK_LINE(1002)
			return null();
		}
		HX_STACK_LINE(1004)
		::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds = graphics->__bounds;
		HX_STACK_LINE(1006)
		int width = graphics->__width;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(1007)
		int height = graphics->__height;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(1009)
		bool tmp2 = graphics->__visible;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1009)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1009)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1009)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1009)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1009)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1009)
		if ((tmp6)){
			HX_STACK_LINE(1009)
			int tmp8 = graphics->__commands->get_length();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1009)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1009)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1009)
			tmp7 = (tmp10 == (int)0);
		}
		else{
			HX_STACK_LINE(1009)
			tmp7 = true;
		}
		HX_STACK_LINE(1009)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1009)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1009)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1009)
		if ((tmp9)){
			HX_STACK_LINE(1009)
			::openfl::geom::Rectangle tmp11 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::bounds;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1009)
			::openfl::geom::Rectangle tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1009)
			::openfl::geom::Rectangle tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1009)
			tmp10 = (tmp13 == null());
		}
		else{
			HX_STACK_LINE(1009)
			tmp10 = true;
		}
		HX_STACK_LINE(1009)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1009)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1009)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1009)
		if ((tmp12)){
			HX_STACK_LINE(1009)
			tmp13 = (width < (int)1);
		}
		else{
			HX_STACK_LINE(1009)
			tmp13 = true;
		}
		HX_STACK_LINE(1009)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1009)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1009)
		if ((tmp14)){
			HX_STACK_LINE(1009)
			tmp15 = (height < (int)1);
		}
		else{
			HX_STACK_LINE(1009)
			tmp15 = true;
		}
		HX_STACK_LINE(1009)
		if ((tmp15)){
			HX_STACK_LINE(1011)
			graphics->__cairo = null();
			HX_STACK_LINE(1012)
			graphics->__bitmap = null();
		}
		else{
			HX_STACK_LINE(1016)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTesting = false;
			HX_STACK_LINE(1018)
			bool tmp16 = (graphics->__cairo != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1018)
			if ((tmp16)){
				HX_STACK_LINE(1020)
				Dynamic tmp17 = graphics->__cairo->get_target();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1020)
				Dynamic surface = tmp17;		HX_STACK_VAR(surface,"surface");
				HX_STACK_LINE(1022)
				int tmp18 = width;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1022)
				Dynamic tmp19 = surface;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1022)
				int tmp20 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_width(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1022)
				bool tmp21 = (tmp18 != tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1022)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1022)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1022)
				if ((tmp22)){
					HX_STACK_LINE(1022)
					int tmp24 = height;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1022)
					Dynamic tmp25 = surface;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1022)
					Dynamic tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1022)
					int tmp27 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_height(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1022)
					int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1022)
					tmp23 = (tmp24 != tmp28);
				}
				else{
					HX_STACK_LINE(1022)
					tmp23 = true;
				}
				HX_STACK_LINE(1022)
				if ((tmp23)){
					HX_STACK_LINE(1024)
					graphics->__cairo = null();
				}
			}
			HX_STACK_LINE(1030)
			bool tmp17 = (graphics->__cairo == null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1030)
			bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1030)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1030)
			if ((tmp18)){
				HX_STACK_LINE(1030)
				tmp19 = (graphics->__bitmap == null());
			}
			else{
				HX_STACK_LINE(1030)
				tmp19 = true;
			}
			HX_STACK_LINE(1030)
			if ((tmp19)){
				HX_STACK_LINE(1032)
				::openfl::display::BitmapData tmp20 = ::openfl::display::BitmapData_obj::__new(width,height,true,(int)0);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1032)
				::openfl::display::BitmapData bitmap = tmp20;		HX_STACK_VAR(bitmap,"bitmap");
				HX_STACK_LINE(1033)
				Dynamic tmp21 = bitmap->getSurface();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1033)
				Dynamic surface = tmp21;		HX_STACK_VAR(surface,"surface");
				HX_STACK_LINE(1034)
				::lime::graphics::cairo::Cairo tmp22 = ::lime::graphics::cairo::Cairo_obj::__new(surface);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1034)
				graphics->__cairo = tmp22;
				HX_STACK_LINE(1035)
				graphics->__bitmap = bitmap;
			}
			HX_STACK_LINE(1039)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo = graphics->__cairo;
			HX_STACK_LINE(1040)
			::lime::graphics::cairo::Cairo tmp20 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1040)
			::lime::math::Matrix3 tmp21 = graphics->__renderTransform->__toMatrix3();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1040)
			tmp20->set_matrix(tmp21);
			HX_STACK_LINE(1042)
			::lime::graphics::cairo::Cairo tmp22 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1042)
			tmp22->set_operator((int)0);
			HX_STACK_LINE(1043)
			::lime::graphics::cairo::Cairo tmp23 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1043)
			tmp23->paint();
			HX_STACK_LINE(1044)
			::lime::graphics::cairo::Cairo tmp24 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::cairo;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1044)
			tmp24->set_operator((int)2);
			HX_STACK_LINE(1046)
			::openfl::_internal::renderer::DrawCommandBuffer tmp25 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1046)
			tmp25->clear();
			HX_STACK_LINE(1047)
			::openfl::_internal::renderer::DrawCommandBuffer tmp26 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1047)
			tmp26->clear();
			HX_STACK_LINE(1049)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
			HX_STACK_LINE(1050)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasStroke = false;
			HX_STACK_LINE(1052)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillPattern = null();
			HX_STACK_LINE(1053)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokePattern = null();
			HX_STACK_LINE(1055)
			::openfl::_internal::renderer::DrawCommandReader tmp27 = ::openfl::_internal::renderer::DrawCommandReader_obj::__new(graphics->__commands);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1055)
			::openfl::_internal::renderer::DrawCommandReader data = tmp27;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1057)
			{
				HX_STACK_LINE(1057)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1057)
				Array< ::Dynamic > _g1 = graphics->__commands->types;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1057)
				while((true)){
					HX_STACK_LINE(1057)
					bool tmp28 = (_g < _g1->length);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1057)
					bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1057)
					if ((tmp29)){
						HX_STACK_LINE(1057)
						break;
					}
					HX_STACK_LINE(1057)
					::openfl::_internal::renderer::DrawCommandType tmp30 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::DrawCommandType >();		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1057)
					::openfl::_internal::renderer::DrawCommandType type = tmp30;		HX_STACK_VAR(type,"type");
					HX_STACK_LINE(1057)
					++(_g);
					HX_STACK_LINE(1059)
					switch( (int)(type->__Index())){
						case (int)3: {
							HX_STACK_LINE(1063)
							::openfl::_internal::renderer::DrawCommandReader tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1063)
							{
								HX_STACK_LINE(1063)
								{
									HX_STACK_LINE(1063)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1063)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1063)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1063)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1063)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1063)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1063)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1063)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1063)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1063)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1063)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1063)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1063)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1063)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1063)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1063)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1063)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1063)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1063)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1063)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1063)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1063)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1063)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1063)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1063)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1063)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1063)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1063)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1063)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1063)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1063)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1063)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1063)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1063)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CUBIC_CURVE_TO;
								HX_STACK_LINE(1063)
								tmp31 = data;
							}
							HX_STACK_LINE(1063)
							::openfl::_internal::renderer::DrawCommandReader c = tmp31;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1064)
							::openfl::_internal::renderer::DrawCommandBuffer tmp32 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1064)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1064)
							int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1064)
							int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1064)
							Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1064)
							::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1064)
							int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1064)
							int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1064)
							Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1064)
							::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1064)
							int tmp42 = c->fPos;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1064)
							int tmp43 = (tmp42 + (int)2);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1064)
							Float tmp44 = tmp41->f->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1064)
							::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1064)
							int tmp46 = c->fPos;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1064)
							int tmp47 = (tmp46 + (int)3);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1064)
							Float tmp48 = tmp45->f->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1064)
							::openfl::_internal::renderer::DrawCommandBuffer tmp49 = c->buffer;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1064)
							int tmp50 = c->fPos;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1064)
							int tmp51 = (tmp50 + (int)4);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1064)
							Float tmp52 = tmp49->f->__get(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1064)
							::openfl::_internal::renderer::DrawCommandBuffer tmp53 = c->buffer;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1064)
							int tmp54 = c->fPos;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1064)
							int tmp55 = (tmp54 + (int)5);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1064)
							Float tmp56 = tmp53->f->__get(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1064)
							tmp32->cubicCurveTo(tmp36,tmp40,tmp44,tmp48,tmp52,tmp56);
							HX_STACK_LINE(1065)
							::openfl::_internal::renderer::DrawCommandBuffer tmp57 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1065)
							::openfl::_internal::renderer::DrawCommandBuffer tmp58 = c->buffer;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1065)
							int tmp59 = c->fPos;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1065)
							int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1065)
							Float tmp61 = tmp58->f->__get(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1065)
							::openfl::_internal::renderer::DrawCommandBuffer tmp62 = c->buffer;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1065)
							int tmp63 = c->fPos;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(1065)
							int tmp64 = (tmp63 + (int)1);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(1065)
							Float tmp65 = tmp62->f->__get(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(1065)
							::openfl::_internal::renderer::DrawCommandBuffer tmp66 = c->buffer;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(1065)
							int tmp67 = c->fPos;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(1065)
							int tmp68 = (tmp67 + (int)2);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(1065)
							Float tmp69 = tmp66->f->__get(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(1065)
							::openfl::_internal::renderer::DrawCommandBuffer tmp70 = c->buffer;		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(1065)
							int tmp71 = c->fPos;		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(1065)
							int tmp72 = (tmp71 + (int)3);		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(1065)
							Float tmp73 = tmp70->f->__get(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(1065)
							::openfl::_internal::renderer::DrawCommandBuffer tmp74 = c->buffer;		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(1065)
							int tmp75 = c->fPos;		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(1065)
							int tmp76 = (tmp75 + (int)4);		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(1065)
							Float tmp77 = tmp74->f->__get(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(1065)
							::openfl::_internal::renderer::DrawCommandBuffer tmp78 = c->buffer;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(1065)
							int tmp79 = c->fPos;		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(1065)
							int tmp80 = (tmp79 + (int)5);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(1065)
							Float tmp81 = tmp78->f->__get(tmp80);		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(1065)
							tmp57->cubicCurveTo(tmp61,tmp65,tmp69,tmp73,tmp77,tmp81);
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(1069)
							::openfl::_internal::renderer::DrawCommandReader tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1069)
							{
								HX_STACK_LINE(1069)
								{
									HX_STACK_LINE(1069)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1069)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1069)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1069)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1069)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1069)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1069)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1069)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1069)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1069)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1069)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1069)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1069)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1069)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1069)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1069)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1069)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1069)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1069)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1069)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1069)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1069)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1069)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1069)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1069)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1069)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1069)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1069)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1069)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1069)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1069)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1069)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1069)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1069)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CURVE_TO;
								HX_STACK_LINE(1069)
								tmp31 = data;
							}
							HX_STACK_LINE(1069)
							::openfl::_internal::renderer::DrawCommandReader c = tmp31;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1070)
							::openfl::_internal::renderer::DrawCommandBuffer tmp32 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1070)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1070)
							int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1070)
							int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1070)
							Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1070)
							::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1070)
							int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1070)
							int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1070)
							Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1070)
							::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1070)
							int tmp42 = c->fPos;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1070)
							int tmp43 = (tmp42 + (int)2);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1070)
							Float tmp44 = tmp41->f->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1070)
							::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1070)
							int tmp46 = c->fPos;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1070)
							int tmp47 = (tmp46 + (int)3);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1070)
							Float tmp48 = tmp45->f->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1070)
							tmp32->curveTo(tmp36,tmp40,tmp44,tmp48);
							HX_STACK_LINE(1071)
							::openfl::_internal::renderer::DrawCommandBuffer tmp49 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1071)
							::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1071)
							int tmp51 = c->fPos;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1071)
							int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1071)
							Float tmp53 = tmp50->f->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1071)
							::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1071)
							int tmp55 = c->fPos;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1071)
							int tmp56 = (tmp55 + (int)1);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1071)
							Float tmp57 = tmp54->f->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1071)
							::openfl::_internal::renderer::DrawCommandBuffer tmp58 = c->buffer;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1071)
							int tmp59 = c->fPos;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1071)
							int tmp60 = (tmp59 + (int)2);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1071)
							Float tmp61 = tmp58->f->__get(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1071)
							::openfl::_internal::renderer::DrawCommandBuffer tmp62 = c->buffer;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1071)
							int tmp63 = c->fPos;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(1071)
							int tmp64 = (tmp63 + (int)3);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(1071)
							Float tmp65 = tmp62->f->__get(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(1071)
							tmp49->curveTo(tmp53,tmp57,tmp61,tmp65);
						}
						;break;
						case (int)15: {
							HX_STACK_LINE(1075)
							::openfl::_internal::renderer::DrawCommandReader tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1075)
							{
								HX_STACK_LINE(1075)
								{
									HX_STACK_LINE(1075)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1075)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1075)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1075)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1075)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1075)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1075)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1075)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1075)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1075)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1075)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1075)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1075)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1075)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1075)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1075)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1075)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1075)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1075)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1075)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1075)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1075)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1075)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1075)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1075)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1075)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1075)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1075)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1075)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1075)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1075)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1075)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1075)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1075)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_TO;
								HX_STACK_LINE(1075)
								tmp31 = data;
							}
							HX_STACK_LINE(1075)
							::openfl::_internal::renderer::DrawCommandReader c = tmp31;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1076)
							::openfl::_internal::renderer::DrawCommandBuffer tmp32 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1076)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1076)
							int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1076)
							int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1076)
							Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1076)
							::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1076)
							int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1076)
							int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1076)
							Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1076)
							tmp32->lineTo(tmp36,tmp40);
							HX_STACK_LINE(1077)
							::openfl::_internal::renderer::DrawCommandBuffer tmp41 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1077)
							::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1077)
							int tmp43 = c->fPos;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1077)
							int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1077)
							Float tmp45 = tmp42->f->__get(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1077)
							::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1077)
							int tmp47 = c->fPos;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1077)
							int tmp48 = (tmp47 + (int)1);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1077)
							Float tmp49 = tmp46->f->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1077)
							tmp41->lineTo(tmp45,tmp49);
						}
						;break;
						case (int)16: {
							HX_STACK_LINE(1081)
							::openfl::_internal::renderer::DrawCommandReader tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1081)
							{
								HX_STACK_LINE(1081)
								{
									HX_STACK_LINE(1081)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1081)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1081)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1081)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1081)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1081)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1081)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1081)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1081)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1081)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1081)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1081)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1081)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1081)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1081)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1081)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1081)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1081)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1081)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1081)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1081)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1081)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1081)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1081)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1081)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1081)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1081)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1081)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1081)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1081)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1081)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1081)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1081)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1081)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::MOVE_TO;
								HX_STACK_LINE(1081)
								tmp31 = data;
							}
							HX_STACK_LINE(1081)
							::openfl::_internal::renderer::DrawCommandReader c = tmp31;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1082)
							::openfl::_internal::renderer::DrawCommandBuffer tmp32 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1082)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1082)
							int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1082)
							int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1082)
							Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1082)
							::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1082)
							int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1082)
							int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1082)
							Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1082)
							tmp32->moveTo(tmp36,tmp40);
							HX_STACK_LINE(1083)
							::openfl::_internal::renderer::DrawCommandBuffer tmp41 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1083)
							::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1083)
							int tmp43 = c->fPos;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1083)
							int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1083)
							Float tmp45 = tmp42->f->__get(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1083)
							::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1083)
							int tmp47 = c->fPos;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1083)
							int tmp48 = (tmp47 + (int)1);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1083)
							Float tmp49 = tmp46->f->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1083)
							tmp41->moveTo(tmp45,tmp49);
						}
						;break;
						case (int)11: {
							HX_STACK_LINE(1087)
							{
								HX_STACK_LINE(1087)
								{
									HX_STACK_LINE(1087)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1087)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1087)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1087)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1087)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1087)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1087)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1087)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1087)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1087)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1087)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1087)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1087)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1087)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1087)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1087)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1087)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1087)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1087)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1087)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1087)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1087)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1087)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1087)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1087)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1087)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1087)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1087)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1087)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1087)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1087)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1087)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1087)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1087)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::END_FILL;
								HX_STACK_LINE(1087)
								data;
							}
							HX_STACK_LINE(1088)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
							HX_STACK_LINE(1089)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
							HX_STACK_LINE(1090)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::hasFill = false;
							HX_STACK_LINE(1091)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::bitmapFill = null();
						}
						;break;
						case (int)13: {
							HX_STACK_LINE(1095)
							::openfl::_internal::renderer::DrawCommandReader tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1095)
							{
								HX_STACK_LINE(1095)
								{
									HX_STACK_LINE(1095)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1095)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1095)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1095)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1095)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1095)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1095)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1095)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1095)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1095)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1095)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1095)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1095)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1095)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1095)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1095)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1095)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1095)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1095)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1095)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1095)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1095)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1095)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1095)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1095)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1095)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1095)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1095)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1095)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1095)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1095)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1095)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1095)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1095)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_GRADIENT_STYLE;
								HX_STACK_LINE(1095)
								tmp31 = data;
							}
							HX_STACK_LINE(1095)
							::openfl::_internal::renderer::DrawCommandReader c = tmp31;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1096)
							::openfl::_internal::renderer::DrawCommandBuffer tmp32 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1096)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1096)
							int tmp34 = c->oPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1096)
							int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1096)
							Dynamic tmp36 = tmp33->o->__GetItem(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1096)
							Dynamic tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1096)
							::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1096)
							int tmp39 = c->iiPos;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1096)
							int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1096)
							::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1096)
							int tmp42 = c->ffPos;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1096)
							int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1096)
							::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1096)
							int tmp45 = c->iiPos;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1096)
							int tmp46 = (tmp45 + (int)1);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1096)
							::openfl::_internal::renderer::DrawCommandBuffer tmp47 = c->buffer;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1096)
							int tmp48 = c->oPos;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1096)
							int tmp49 = (tmp48 + (int)1);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1096)
							Dynamic tmp50 = tmp47->o->__GetItem(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1096)
							::openfl::geom::Matrix tmp51 = ((::openfl::geom::Matrix)(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1096)
							::openfl::_internal::renderer::DrawCommandBuffer tmp52 = c->buffer;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1096)
							int tmp53 = c->oPos;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1096)
							int tmp54 = (tmp53 + (int)2);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1096)
							Dynamic tmp55 = tmp52->o->__GetItem(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1096)
							Dynamic tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1096)
							::openfl::_internal::renderer::DrawCommandBuffer tmp57 = c->buffer;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1096)
							int tmp58 = c->oPos;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1096)
							int tmp59 = (tmp58 + (int)3);		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1096)
							Dynamic tmp60 = tmp57->o->__GetItem(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1096)
							Dynamic tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1096)
							::openfl::_internal::renderer::DrawCommandBuffer tmp62 = c->buffer;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1096)
							int tmp63 = c->fPos;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(1096)
							int tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(1096)
							Float tmp65 = tmp62->f->__get(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(1096)
							Float tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(1096)
							tmp32->lineGradientStyle(tmp37,tmp38->ii->__get(tmp40).StaticCast< Array< int > >(),tmp41->ff->__get(tmp43).StaticCast< Array< Float > >(),tmp44->ii->__get(tmp46).StaticCast< Array< int > >(),tmp51,tmp56,tmp61,tmp66);
						}
						;break;
						case (int)12: {
							HX_STACK_LINE(1100)
							::openfl::_internal::renderer::DrawCommandReader tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1100)
							{
								HX_STACK_LINE(1100)
								{
									HX_STACK_LINE(1100)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1100)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1100)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1100)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1100)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1100)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1100)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1100)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1100)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1100)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1100)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1100)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1100)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1100)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1100)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1100)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1100)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1100)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1100)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1100)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1100)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1100)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1100)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1100)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1100)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1100)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1100)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1100)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1100)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1100)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1100)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1100)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1100)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1100)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_BITMAP_STYLE;
								HX_STACK_LINE(1100)
								tmp31 = data;
							}
							HX_STACK_LINE(1100)
							::openfl::_internal::renderer::DrawCommandReader c = tmp31;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1101)
							::openfl::_internal::renderer::DrawCommandBuffer tmp32 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1101)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1101)
							int tmp34 = c->oPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1101)
							int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1101)
							Dynamic tmp36 = tmp33->o->__GetItem(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1101)
							::openfl::display::BitmapData tmp37 = ((::openfl::display::BitmapData)(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1101)
							::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1101)
							int tmp39 = c->oPos;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1101)
							int tmp40 = (tmp39 + (int)1);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1101)
							Dynamic tmp41 = tmp38->o->__GetItem(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1101)
							::openfl::geom::Matrix tmp42 = ((::openfl::geom::Matrix)(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1101)
							::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1101)
							int tmp44 = c->bPos;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1101)
							int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1101)
							bool tmp46 = tmp43->b->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1101)
							bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1101)
							::openfl::_internal::renderer::DrawCommandBuffer tmp48 = c->buffer;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1101)
							int tmp49 = c->bPos;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1101)
							int tmp50 = (tmp49 + (int)1);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1101)
							bool tmp51 = tmp48->b->__get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1101)
							bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1101)
							tmp32->lineBitmapStyle(tmp37,tmp42,tmp47,tmp52);
						}
						;break;
						case (int)14: {
							HX_STACK_LINE(1105)
							::openfl::_internal::renderer::DrawCommandReader tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1105)
							{
								HX_STACK_LINE(1105)
								{
									HX_STACK_LINE(1105)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1105)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1105)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1105)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1105)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1105)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1105)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1105)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1105)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1105)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1105)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1105)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1105)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1105)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1105)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1105)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1105)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1105)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1105)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1105)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1105)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1105)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1105)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1105)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1105)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1105)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1105)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1105)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1105)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1105)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1105)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1105)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1105)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1105)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_STYLE;
								HX_STACK_LINE(1105)
								tmp31 = data;
							}
							HX_STACK_LINE(1105)
							::openfl::_internal::renderer::DrawCommandReader c = tmp31;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1106)
							::openfl::_internal::renderer::DrawCommandBuffer tmp32 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1106)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1106)
							int tmp34 = c->oPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1106)
							int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1106)
							Dynamic tmp36 = tmp33->o->__GetItem(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1106)
							Dynamic tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1106)
							::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1106)
							int tmp39 = c->iPos;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1106)
							int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1106)
							int tmp41 = tmp38->i->__get(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1106)
							int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1106)
							::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1106)
							int tmp44 = c->fPos;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1106)
							int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1106)
							Float tmp46 = tmp43->f->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1106)
							Float tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1106)
							::openfl::_internal::renderer::DrawCommandBuffer tmp48 = c->buffer;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1106)
							int tmp49 = c->bPos;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1106)
							int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1106)
							bool tmp51 = tmp48->b->__get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1106)
							bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1106)
							::openfl::_internal::renderer::DrawCommandBuffer tmp53 = c->buffer;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1106)
							int tmp54 = c->oPos;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1106)
							int tmp55 = (tmp54 + (int)1);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1106)
							Dynamic tmp56 = tmp53->o->__GetItem(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1106)
							Dynamic tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1106)
							::openfl::_internal::renderer::DrawCommandBuffer tmp58 = c->buffer;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1106)
							int tmp59 = c->oPos;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1106)
							int tmp60 = (tmp59 + (int)2);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1106)
							Dynamic tmp61 = tmp58->o->__GetItem(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1106)
							Dynamic tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1106)
							::openfl::_internal::renderer::DrawCommandBuffer tmp63 = c->buffer;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(1106)
							int tmp64 = c->oPos;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(1106)
							int tmp65 = (tmp64 + (int)3);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(1106)
							Dynamic tmp66 = tmp63->o->__GetItem(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(1106)
							Dynamic tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(1106)
							::openfl::_internal::renderer::DrawCommandBuffer tmp68 = c->buffer;		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(1106)
							int tmp69 = c->fPos;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(1106)
							int tmp70 = (tmp69 + (int)1);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(1106)
							Float tmp71 = tmp68->f->__get(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(1106)
							Float tmp72 = tmp71;		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(1106)
							tmp32->lineStyle(tmp37,tmp42,tmp47,tmp52,tmp57,tmp62,tmp67,tmp72);
						}
						;break;
						case (int)0: case (int)1: case (int)2: {
							HX_STACK_LINE(1110)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
							HX_STACK_LINE(1111)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
							HX_STACK_LINE(1113)
							bool tmp31 = (type == ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_BITMAP_FILL);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1113)
							if ((tmp31)){
								HX_STACK_LINE(1115)
								::openfl::_internal::renderer::DrawCommandReader tmp32;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1115)
								{
									HX_STACK_LINE(1115)
									{
										HX_STACK_LINE(1115)
										::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(1115)
										switch( (int)(_g2->__Index())){
											case (int)0: {
												HX_STACK_LINE(1115)
												hx::AddEq(data->oPos,(int)2);
												HX_STACK_LINE(1115)
												hx::AddEq(data->bPos,(int)2);
											}
											;break;
											case (int)1: {
												HX_STACK_LINE(1115)
												hx::AddEq(data->iPos,(int)1);
												HX_STACK_LINE(1115)
												hx::AddEq(data->fPos,(int)1);
											}
											;break;
											case (int)2: {
												HX_STACK_LINE(1115)
												hx::AddEq(data->oPos,(int)4);
												HX_STACK_LINE(1115)
												hx::AddEq(data->iiPos,(int)2);
												HX_STACK_LINE(1115)
												hx::AddEq(data->ffPos,(int)1);
												HX_STACK_LINE(1115)
												hx::AddEq(data->fPos,(int)1);
											}
											;break;
											case (int)3: {
												HX_STACK_LINE(1115)
												hx::AddEq(data->fPos,(int)6);
											}
											;break;
											case (int)4: {
												HX_STACK_LINE(1115)
												hx::AddEq(data->fPos,(int)4);
											}
											;break;
											case (int)5: {
												HX_STACK_LINE(1115)
												hx::AddEq(data->fPos,(int)3);
											}
											;break;
											case (int)6: {
												HX_STACK_LINE(1115)
												hx::AddEq(data->fPos,(int)4);
											}
											;break;
											case (int)7: {
												HX_STACK_LINE(1115)
												hx::AddEq(data->fPos,(int)4);
											}
											;break;
											case (int)8: {
												HX_STACK_LINE(1115)
												hx::AddEq(data->fPos,(int)5);
												HX_STACK_LINE(1115)
												hx::AddEq(data->oPos,(int)1);
											}
											;break;
											case (int)10: {
												HX_STACK_LINE(1115)
												hx::AddEq(data->oPos,(int)4);
											}
											;break;
											case (int)11: {
												HX_STACK_LINE(1115)
												Dynamic();
											}
											;break;
											case (int)12: {
												HX_STACK_LINE(1115)
												hx::AddEq(data->oPos,(int)2);
												HX_STACK_LINE(1115)
												hx::AddEq(data->bPos,(int)2);
											}
											;break;
											case (int)13: {
												HX_STACK_LINE(1115)
												hx::AddEq(data->oPos,(int)4);
												HX_STACK_LINE(1115)
												hx::AddEq(data->iiPos,(int)2);
												HX_STACK_LINE(1115)
												hx::AddEq(data->ffPos,(int)1);
												HX_STACK_LINE(1115)
												hx::AddEq(data->fPos,(int)1);
											}
											;break;
											case (int)14: {
												HX_STACK_LINE(1115)
												hx::AddEq(data->oPos,(int)4);
												HX_STACK_LINE(1115)
												hx::AddEq(data->iPos,(int)1);
												HX_STACK_LINE(1115)
												hx::AddEq(data->fPos,(int)2);
												HX_STACK_LINE(1115)
												hx::AddEq(data->bPos,(int)1);
											}
											;break;
											case (int)15: {
												HX_STACK_LINE(1115)
												hx::AddEq(data->fPos,(int)2);
											}
											;break;
											case (int)16: {
												HX_STACK_LINE(1115)
												hx::AddEq(data->fPos,(int)2);
											}
											;break;
											case (int)17: {
												HX_STACK_LINE(1115)
												hx::AddEq(data->oPos,(int)1);
											}
											;break;
											default: {
												HX_STACK_LINE(1115)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(1115)
									data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_BITMAP_FILL;
									HX_STACK_LINE(1115)
									tmp32 = data;
								}
								HX_STACK_LINE(1115)
								::openfl::_internal::renderer::DrawCommandReader c = tmp32;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(1116)
								::openfl::_internal::renderer::DrawCommandBuffer tmp33 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1116)
								::openfl::_internal::renderer::DrawCommandBuffer tmp34 = c->buffer;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1116)
								int tmp35 = c->oPos;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1116)
								int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1116)
								Dynamic tmp37 = tmp34->o->__GetItem(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1116)
								::openfl::display::BitmapData tmp38 = ((::openfl::display::BitmapData)(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(1116)
								::openfl::_internal::renderer::DrawCommandBuffer tmp39 = c->buffer;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(1116)
								int tmp40 = c->oPos;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(1116)
								int tmp41 = (tmp40 + (int)1);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(1116)
								Dynamic tmp42 = tmp39->o->__GetItem(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(1116)
								::openfl::geom::Matrix tmp43 = ((::openfl::geom::Matrix)(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(1116)
								::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(1116)
								int tmp45 = c->bPos;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(1116)
								int tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(1116)
								bool tmp47 = tmp44->b->__get(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(1116)
								::openfl::_internal::renderer::DrawCommandBuffer tmp48 = c->buffer;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(1116)
								int tmp49 = c->bPos;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(1116)
								int tmp50 = (tmp49 + (int)1);		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(1116)
								bool tmp51 = tmp48->b->__get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(1116)
								tmp33->beginBitmapFill(tmp38,tmp43,tmp47,tmp51);
								HX_STACK_LINE(1117)
								::openfl::_internal::renderer::DrawCommandBuffer tmp52 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(1117)
								::openfl::_internal::renderer::DrawCommandBuffer tmp53 = c->buffer;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(1117)
								int tmp54 = c->oPos;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(1117)
								int tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(1117)
								Dynamic tmp56 = tmp53->o->__GetItem(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(1117)
								::openfl::display::BitmapData tmp57 = ((::openfl::display::BitmapData)(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(1117)
								::openfl::_internal::renderer::DrawCommandBuffer tmp58 = c->buffer;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(1117)
								int tmp59 = c->oPos;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(1117)
								int tmp60 = (tmp59 + (int)1);		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(1117)
								Dynamic tmp61 = tmp58->o->__GetItem(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(1117)
								::openfl::geom::Matrix tmp62 = ((::openfl::geom::Matrix)(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(1117)
								::openfl::_internal::renderer::DrawCommandBuffer tmp63 = c->buffer;		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(1117)
								int tmp64 = c->bPos;		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(1117)
								int tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(1117)
								bool tmp66 = tmp63->b->__get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(1117)
								::openfl::_internal::renderer::DrawCommandBuffer tmp67 = c->buffer;		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(1117)
								int tmp68 = c->bPos;		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(1117)
								int tmp69 = (tmp68 + (int)1);		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(1117)
								bool tmp70 = tmp67->b->__get(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(1117)
								tmp52->beginBitmapFill(tmp57,tmp62,tmp66,tmp70);
							}
							else{
								HX_STACK_LINE(1119)
								bool tmp32 = (type == ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_GRADIENT_FILL);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1119)
								if ((tmp32)){
									HX_STACK_LINE(1121)
									::openfl::_internal::renderer::DrawCommandReader tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(1121)
									{
										HX_STACK_LINE(1121)
										{
											HX_STACK_LINE(1121)
											::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(1121)
											switch( (int)(_g2->__Index())){
												case (int)0: {
													HX_STACK_LINE(1121)
													hx::AddEq(data->oPos,(int)2);
													HX_STACK_LINE(1121)
													hx::AddEq(data->bPos,(int)2);
												}
												;break;
												case (int)1: {
													HX_STACK_LINE(1121)
													hx::AddEq(data->iPos,(int)1);
													HX_STACK_LINE(1121)
													hx::AddEq(data->fPos,(int)1);
												}
												;break;
												case (int)2: {
													HX_STACK_LINE(1121)
													hx::AddEq(data->oPos,(int)4);
													HX_STACK_LINE(1121)
													hx::AddEq(data->iiPos,(int)2);
													HX_STACK_LINE(1121)
													hx::AddEq(data->ffPos,(int)1);
													HX_STACK_LINE(1121)
													hx::AddEq(data->fPos,(int)1);
												}
												;break;
												case (int)3: {
													HX_STACK_LINE(1121)
													hx::AddEq(data->fPos,(int)6);
												}
												;break;
												case (int)4: {
													HX_STACK_LINE(1121)
													hx::AddEq(data->fPos,(int)4);
												}
												;break;
												case (int)5: {
													HX_STACK_LINE(1121)
													hx::AddEq(data->fPos,(int)3);
												}
												;break;
												case (int)6: {
													HX_STACK_LINE(1121)
													hx::AddEq(data->fPos,(int)4);
												}
												;break;
												case (int)7: {
													HX_STACK_LINE(1121)
													hx::AddEq(data->fPos,(int)4);
												}
												;break;
												case (int)8: {
													HX_STACK_LINE(1121)
													hx::AddEq(data->fPos,(int)5);
													HX_STACK_LINE(1121)
													hx::AddEq(data->oPos,(int)1);
												}
												;break;
												case (int)10: {
													HX_STACK_LINE(1121)
													hx::AddEq(data->oPos,(int)4);
												}
												;break;
												case (int)11: {
													HX_STACK_LINE(1121)
													Dynamic();
												}
												;break;
												case (int)12: {
													HX_STACK_LINE(1121)
													hx::AddEq(data->oPos,(int)2);
													HX_STACK_LINE(1121)
													hx::AddEq(data->bPos,(int)2);
												}
												;break;
												case (int)13: {
													HX_STACK_LINE(1121)
													hx::AddEq(data->oPos,(int)4);
													HX_STACK_LINE(1121)
													hx::AddEq(data->iiPos,(int)2);
													HX_STACK_LINE(1121)
													hx::AddEq(data->ffPos,(int)1);
													HX_STACK_LINE(1121)
													hx::AddEq(data->fPos,(int)1);
												}
												;break;
												case (int)14: {
													HX_STACK_LINE(1121)
													hx::AddEq(data->oPos,(int)4);
													HX_STACK_LINE(1121)
													hx::AddEq(data->iPos,(int)1);
													HX_STACK_LINE(1121)
													hx::AddEq(data->fPos,(int)2);
													HX_STACK_LINE(1121)
													hx::AddEq(data->bPos,(int)1);
												}
												;break;
												case (int)15: {
													HX_STACK_LINE(1121)
													hx::AddEq(data->fPos,(int)2);
												}
												;break;
												case (int)16: {
													HX_STACK_LINE(1121)
													hx::AddEq(data->fPos,(int)2);
												}
												;break;
												case (int)17: {
													HX_STACK_LINE(1121)
													hx::AddEq(data->oPos,(int)1);
												}
												;break;
												default: {
													HX_STACK_LINE(1121)
													Dynamic();
												}
											}
										}
										HX_STACK_LINE(1121)
										data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_GRADIENT_FILL;
										HX_STACK_LINE(1121)
										tmp33 = data;
									}
									HX_STACK_LINE(1121)
									::openfl::_internal::renderer::DrawCommandReader c = tmp33;		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(1122)
									::openfl::_internal::renderer::DrawCommandBuffer tmp34 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(1122)
									::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1122)
									int tmp36 = c->oPos;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1122)
									int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1122)
									Dynamic tmp38 = tmp35->o->__GetItem(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(1122)
									Dynamic tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(1122)
									::openfl::_internal::renderer::DrawCommandBuffer tmp40 = c->buffer;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(1122)
									int tmp41 = c->iiPos;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(1122)
									int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(1122)
									::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1122)
									int tmp44 = c->ffPos;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1122)
									int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(1122)
									::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(1122)
									int tmp47 = c->iiPos;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(1122)
									int tmp48 = (tmp47 + (int)1);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(1122)
									::openfl::_internal::renderer::DrawCommandBuffer tmp49 = c->buffer;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(1122)
									int tmp50 = c->oPos;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(1122)
									int tmp51 = (tmp50 + (int)1);		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(1122)
									Dynamic tmp52 = tmp49->o->__GetItem(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(1122)
									::openfl::geom::Matrix tmp53 = ((::openfl::geom::Matrix)(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(1122)
									::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(1122)
									int tmp55 = c->oPos;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(1122)
									int tmp56 = (tmp55 + (int)2);		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(1122)
									Dynamic tmp57 = tmp54->o->__GetItem(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(1122)
									Dynamic tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(1122)
									::openfl::_internal::renderer::DrawCommandBuffer tmp59 = c->buffer;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(1122)
									int tmp60 = c->oPos;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(1122)
									int tmp61 = (tmp60 + (int)3);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(1122)
									Dynamic tmp62 = tmp59->o->__GetItem(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(1122)
									Dynamic tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(1122)
									::openfl::_internal::renderer::DrawCommandBuffer tmp64 = c->buffer;		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(1122)
									int tmp65 = c->fPos;		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(1122)
									int tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(1122)
									Float tmp67 = tmp64->f->__get(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(1122)
									Float tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(1122)
									tmp34->beginGradientFill(tmp39,tmp40->ii->__get(tmp42).StaticCast< Array< int > >(),tmp43->ff->__get(tmp45).StaticCast< Array< Float > >(),tmp46->ii->__get(tmp48).StaticCast< Array< int > >(),tmp53,tmp58,tmp63,tmp68);
									HX_STACK_LINE(1123)
									::openfl::_internal::renderer::DrawCommandBuffer tmp69 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(1123)
									::openfl::_internal::renderer::DrawCommandBuffer tmp70 = c->buffer;		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(1123)
									int tmp71 = c->oPos;		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(1123)
									int tmp72 = tmp71;		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(1123)
									Dynamic tmp73 = tmp70->o->__GetItem(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(1123)
									Dynamic tmp74 = tmp73;		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(1123)
									::openfl::_internal::renderer::DrawCommandBuffer tmp75 = c->buffer;		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(1123)
									int tmp76 = c->iiPos;		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(1123)
									int tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(1123)
									::openfl::_internal::renderer::DrawCommandBuffer tmp78 = c->buffer;		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(1123)
									int tmp79 = c->ffPos;		HX_STACK_VAR(tmp79,"tmp79");
									HX_STACK_LINE(1123)
									int tmp80 = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(1123)
									::openfl::_internal::renderer::DrawCommandBuffer tmp81 = c->buffer;		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(1123)
									int tmp82 = c->iiPos;		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(1123)
									int tmp83 = (tmp82 + (int)1);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(1123)
									::openfl::_internal::renderer::DrawCommandBuffer tmp84 = c->buffer;		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(1123)
									int tmp85 = c->oPos;		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(1123)
									int tmp86 = (tmp85 + (int)1);		HX_STACK_VAR(tmp86,"tmp86");
									HX_STACK_LINE(1123)
									Dynamic tmp87 = tmp84->o->__GetItem(tmp86);		HX_STACK_VAR(tmp87,"tmp87");
									HX_STACK_LINE(1123)
									::openfl::geom::Matrix tmp88 = ((::openfl::geom::Matrix)(tmp87));		HX_STACK_VAR(tmp88,"tmp88");
									HX_STACK_LINE(1123)
									::openfl::_internal::renderer::DrawCommandBuffer tmp89 = c->buffer;		HX_STACK_VAR(tmp89,"tmp89");
									HX_STACK_LINE(1123)
									int tmp90 = c->oPos;		HX_STACK_VAR(tmp90,"tmp90");
									HX_STACK_LINE(1123)
									int tmp91 = (tmp90 + (int)2);		HX_STACK_VAR(tmp91,"tmp91");
									HX_STACK_LINE(1123)
									Dynamic tmp92 = tmp89->o->__GetItem(tmp91);		HX_STACK_VAR(tmp92,"tmp92");
									HX_STACK_LINE(1123)
									Dynamic tmp93 = tmp92;		HX_STACK_VAR(tmp93,"tmp93");
									HX_STACK_LINE(1123)
									::openfl::_internal::renderer::DrawCommandBuffer tmp94 = c->buffer;		HX_STACK_VAR(tmp94,"tmp94");
									HX_STACK_LINE(1123)
									int tmp95 = c->oPos;		HX_STACK_VAR(tmp95,"tmp95");
									HX_STACK_LINE(1123)
									int tmp96 = (tmp95 + (int)3);		HX_STACK_VAR(tmp96,"tmp96");
									HX_STACK_LINE(1123)
									Dynamic tmp97 = tmp94->o->__GetItem(tmp96);		HX_STACK_VAR(tmp97,"tmp97");
									HX_STACK_LINE(1123)
									Dynamic tmp98 = tmp97;		HX_STACK_VAR(tmp98,"tmp98");
									HX_STACK_LINE(1123)
									::openfl::_internal::renderer::DrawCommandBuffer tmp99 = c->buffer;		HX_STACK_VAR(tmp99,"tmp99");
									HX_STACK_LINE(1123)
									int tmp100 = c->fPos;		HX_STACK_VAR(tmp100,"tmp100");
									HX_STACK_LINE(1123)
									int tmp101 = tmp100;		HX_STACK_VAR(tmp101,"tmp101");
									HX_STACK_LINE(1123)
									Float tmp102 = tmp99->f->__get(tmp101);		HX_STACK_VAR(tmp102,"tmp102");
									HX_STACK_LINE(1123)
									Float tmp103 = tmp102;		HX_STACK_VAR(tmp103,"tmp103");
									HX_STACK_LINE(1123)
									tmp69->beginGradientFill(tmp74,tmp75->ii->__get(tmp77).StaticCast< Array< int > >(),tmp78->ff->__get(tmp80).StaticCast< Array< Float > >(),tmp81->ii->__get(tmp83).StaticCast< Array< int > >(),tmp88,tmp93,tmp98,tmp103);
								}
								else{
									HX_STACK_LINE(1127)
									::openfl::_internal::renderer::DrawCommandReader tmp33;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(1127)
									{
										HX_STACK_LINE(1127)
										{
											HX_STACK_LINE(1127)
											::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(1127)
											switch( (int)(_g2->__Index())){
												case (int)0: {
													HX_STACK_LINE(1127)
													hx::AddEq(data->oPos,(int)2);
													HX_STACK_LINE(1127)
													hx::AddEq(data->bPos,(int)2);
												}
												;break;
												case (int)1: {
													HX_STACK_LINE(1127)
													hx::AddEq(data->iPos,(int)1);
													HX_STACK_LINE(1127)
													hx::AddEq(data->fPos,(int)1);
												}
												;break;
												case (int)2: {
													HX_STACK_LINE(1127)
													hx::AddEq(data->oPos,(int)4);
													HX_STACK_LINE(1127)
													hx::AddEq(data->iiPos,(int)2);
													HX_STACK_LINE(1127)
													hx::AddEq(data->ffPos,(int)1);
													HX_STACK_LINE(1127)
													hx::AddEq(data->fPos,(int)1);
												}
												;break;
												case (int)3: {
													HX_STACK_LINE(1127)
													hx::AddEq(data->fPos,(int)6);
												}
												;break;
												case (int)4: {
													HX_STACK_LINE(1127)
													hx::AddEq(data->fPos,(int)4);
												}
												;break;
												case (int)5: {
													HX_STACK_LINE(1127)
													hx::AddEq(data->fPos,(int)3);
												}
												;break;
												case (int)6: {
													HX_STACK_LINE(1127)
													hx::AddEq(data->fPos,(int)4);
												}
												;break;
												case (int)7: {
													HX_STACK_LINE(1127)
													hx::AddEq(data->fPos,(int)4);
												}
												;break;
												case (int)8: {
													HX_STACK_LINE(1127)
													hx::AddEq(data->fPos,(int)5);
													HX_STACK_LINE(1127)
													hx::AddEq(data->oPos,(int)1);
												}
												;break;
												case (int)10: {
													HX_STACK_LINE(1127)
													hx::AddEq(data->oPos,(int)4);
												}
												;break;
												case (int)11: {
													HX_STACK_LINE(1127)
													Dynamic();
												}
												;break;
												case (int)12: {
													HX_STACK_LINE(1127)
													hx::AddEq(data->oPos,(int)2);
													HX_STACK_LINE(1127)
													hx::AddEq(data->bPos,(int)2);
												}
												;break;
												case (int)13: {
													HX_STACK_LINE(1127)
													hx::AddEq(data->oPos,(int)4);
													HX_STACK_LINE(1127)
													hx::AddEq(data->iiPos,(int)2);
													HX_STACK_LINE(1127)
													hx::AddEq(data->ffPos,(int)1);
													HX_STACK_LINE(1127)
													hx::AddEq(data->fPos,(int)1);
												}
												;break;
												case (int)14: {
													HX_STACK_LINE(1127)
													hx::AddEq(data->oPos,(int)4);
													HX_STACK_LINE(1127)
													hx::AddEq(data->iPos,(int)1);
													HX_STACK_LINE(1127)
													hx::AddEq(data->fPos,(int)2);
													HX_STACK_LINE(1127)
													hx::AddEq(data->bPos,(int)1);
												}
												;break;
												case (int)15: {
													HX_STACK_LINE(1127)
													hx::AddEq(data->fPos,(int)2);
												}
												;break;
												case (int)16: {
													HX_STACK_LINE(1127)
													hx::AddEq(data->fPos,(int)2);
												}
												;break;
												case (int)17: {
													HX_STACK_LINE(1127)
													hx::AddEq(data->oPos,(int)1);
												}
												;break;
												default: {
													HX_STACK_LINE(1127)
													Dynamic();
												}
											}
										}
										HX_STACK_LINE(1127)
										data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_FILL;
										HX_STACK_LINE(1127)
										tmp33 = data;
									}
									HX_STACK_LINE(1127)
									::openfl::_internal::renderer::DrawCommandReader c = tmp33;		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(1128)
									::openfl::_internal::renderer::DrawCommandBuffer tmp34 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(1128)
									::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1128)
									int tmp36 = c->iPos;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1128)
									int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1128)
									int tmp38 = tmp35->i->__get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(1128)
									::openfl::_internal::renderer::DrawCommandBuffer tmp39 = c->buffer;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(1128)
									int tmp40 = c->fPos;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(1128)
									int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(1128)
									Float tmp42 = tmp39->f->__get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(1128)
									tmp34->beginFill(tmp38,tmp42);
									HX_STACK_LINE(1129)
									::openfl::_internal::renderer::DrawCommandBuffer tmp43 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1129)
									::openfl::_internal::renderer::DrawCommandBuffer tmp44 = c->buffer;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1129)
									int tmp45 = c->iPos;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(1129)
									int tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(1129)
									int tmp47 = tmp44->i->__get(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(1129)
									::openfl::_internal::renderer::DrawCommandBuffer tmp48 = c->buffer;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(1129)
									int tmp49 = c->fPos;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(1129)
									int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(1129)
									Float tmp51 = tmp48->f->__get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(1129)
									tmp43->beginFill(tmp47,tmp51);
								}
							}
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(1135)
							::openfl::_internal::renderer::DrawCommandReader tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1135)
							{
								HX_STACK_LINE(1135)
								{
									HX_STACK_LINE(1135)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1135)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1135)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1135)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1135)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1135)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1135)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1135)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1135)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1135)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1135)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1135)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1135)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1135)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1135)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1135)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1135)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1135)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1135)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1135)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1135)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1135)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1135)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1135)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1135)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1135)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1135)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1135)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1135)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1135)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1135)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1135)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1135)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1135)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_CIRCLE;
								HX_STACK_LINE(1135)
								tmp31 = data;
							}
							HX_STACK_LINE(1135)
							::openfl::_internal::renderer::DrawCommandReader c = tmp31;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1136)
							::openfl::_internal::renderer::DrawCommandBuffer tmp32 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1136)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1136)
							int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1136)
							int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1136)
							Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1136)
							::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1136)
							int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1136)
							int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1136)
							Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1136)
							::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1136)
							int tmp42 = c->fPos;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1136)
							int tmp43 = (tmp42 + (int)2);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1136)
							Float tmp44 = tmp41->f->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1136)
							tmp32->drawCircle(tmp36,tmp40,tmp44);
							HX_STACK_LINE(1137)
							::openfl::_internal::renderer::DrawCommandBuffer tmp45 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1137)
							::openfl::_internal::renderer::DrawCommandBuffer tmp46 = c->buffer;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1137)
							int tmp47 = c->fPos;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1137)
							int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1137)
							Float tmp49 = tmp46->f->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1137)
							::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1137)
							int tmp51 = c->fPos;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1137)
							int tmp52 = (tmp51 + (int)1);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1137)
							Float tmp53 = tmp50->f->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1137)
							::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1137)
							int tmp55 = c->fPos;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1137)
							int tmp56 = (tmp55 + (int)2);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1137)
							Float tmp57 = tmp54->f->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1137)
							tmp45->drawCircle(tmp49,tmp53,tmp57);
						}
						;break;
						case (int)6: {
							HX_STACK_LINE(1141)
							::openfl::_internal::renderer::DrawCommandReader tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1141)
							{
								HX_STACK_LINE(1141)
								{
									HX_STACK_LINE(1141)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1141)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1141)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1141)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1141)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1141)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1141)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1141)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1141)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1141)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1141)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1141)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1141)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1141)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1141)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1141)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1141)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1141)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1141)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1141)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1141)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1141)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1141)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1141)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1141)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1141)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1141)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1141)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1141)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1141)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1141)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1141)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1141)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1141)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ELLIPSE;
								HX_STACK_LINE(1141)
								tmp31 = data;
							}
							HX_STACK_LINE(1141)
							::openfl::_internal::renderer::DrawCommandReader c = tmp31;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1142)
							::openfl::_internal::renderer::DrawCommandBuffer tmp32 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1142)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1142)
							int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1142)
							int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1142)
							Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1142)
							::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1142)
							int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1142)
							int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1142)
							Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1142)
							::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1142)
							int tmp42 = c->fPos;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1142)
							int tmp43 = (tmp42 + (int)2);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1142)
							Float tmp44 = tmp41->f->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1142)
							::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1142)
							int tmp46 = c->fPos;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1142)
							int tmp47 = (tmp46 + (int)3);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1142)
							Float tmp48 = tmp45->f->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1142)
							tmp32->drawEllipse(tmp36,tmp40,tmp44,tmp48);
							HX_STACK_LINE(1143)
							::openfl::_internal::renderer::DrawCommandBuffer tmp49 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1143)
							::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1143)
							int tmp51 = c->fPos;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1143)
							int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1143)
							Float tmp53 = tmp50->f->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1143)
							::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1143)
							int tmp55 = c->fPos;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1143)
							int tmp56 = (tmp55 + (int)1);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1143)
							Float tmp57 = tmp54->f->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1143)
							::openfl::_internal::renderer::DrawCommandBuffer tmp58 = c->buffer;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1143)
							int tmp59 = c->fPos;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1143)
							int tmp60 = (tmp59 + (int)2);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1143)
							Float tmp61 = tmp58->f->__get(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1143)
							::openfl::_internal::renderer::DrawCommandBuffer tmp62 = c->buffer;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1143)
							int tmp63 = c->fPos;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(1143)
							int tmp64 = (tmp63 + (int)3);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(1143)
							Float tmp65 = tmp62->f->__get(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(1143)
							tmp49->drawEllipse(tmp53,tmp57,tmp61,tmp65);
						}
						;break;
						case (int)7: {
							HX_STACK_LINE(1147)
							::openfl::_internal::renderer::DrawCommandReader tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1147)
							{
								HX_STACK_LINE(1147)
								{
									HX_STACK_LINE(1147)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1147)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1147)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1147)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1147)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1147)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1147)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1147)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1147)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1147)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1147)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1147)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1147)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1147)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1147)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1147)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1147)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1147)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1147)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1147)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1147)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1147)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1147)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1147)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1147)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1147)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1147)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1147)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1147)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1147)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1147)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1147)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1147)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1147)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_RECT;
								HX_STACK_LINE(1147)
								tmp31 = data;
							}
							HX_STACK_LINE(1147)
							::openfl::_internal::renderer::DrawCommandReader c = tmp31;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1148)
							::openfl::_internal::renderer::DrawCommandBuffer tmp32 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1148)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1148)
							int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1148)
							int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1148)
							Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1148)
							::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1148)
							int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1148)
							int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1148)
							Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1148)
							::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1148)
							int tmp42 = c->fPos;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1148)
							int tmp43 = (tmp42 + (int)2);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1148)
							Float tmp44 = tmp41->f->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1148)
							::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1148)
							int tmp46 = c->fPos;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1148)
							int tmp47 = (tmp46 + (int)3);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1148)
							Float tmp48 = tmp45->f->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1148)
							tmp32->drawRect(tmp36,tmp40,tmp44,tmp48);
							HX_STACK_LINE(1149)
							::openfl::_internal::renderer::DrawCommandBuffer tmp49 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1149)
							::openfl::_internal::renderer::DrawCommandBuffer tmp50 = c->buffer;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1149)
							int tmp51 = c->fPos;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1149)
							int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1149)
							Float tmp53 = tmp50->f->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1149)
							::openfl::_internal::renderer::DrawCommandBuffer tmp54 = c->buffer;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1149)
							int tmp55 = c->fPos;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1149)
							int tmp56 = (tmp55 + (int)1);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1149)
							Float tmp57 = tmp54->f->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1149)
							::openfl::_internal::renderer::DrawCommandBuffer tmp58 = c->buffer;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1149)
							int tmp59 = c->fPos;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1149)
							int tmp60 = (tmp59 + (int)2);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1149)
							Float tmp61 = tmp58->f->__get(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1149)
							::openfl::_internal::renderer::DrawCommandBuffer tmp62 = c->buffer;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1149)
							int tmp63 = c->fPos;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(1149)
							int tmp64 = (tmp63 + (int)3);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(1149)
							Float tmp65 = tmp62->f->__get(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(1149)
							tmp49->drawRect(tmp53,tmp57,tmp61,tmp65);
						}
						;break;
						case (int)8: {
							HX_STACK_LINE(1153)
							::openfl::_internal::renderer::DrawCommandReader tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1153)
							{
								HX_STACK_LINE(1153)
								{
									HX_STACK_LINE(1153)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1153)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1153)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1153)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1153)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1153)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1153)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1153)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1153)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1153)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1153)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1153)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1153)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1153)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1153)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1153)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1153)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1153)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1153)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1153)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1153)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1153)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1153)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1153)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1153)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1153)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1153)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1153)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1153)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1153)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1153)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1153)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1153)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1153)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ROUND_RECT;
								HX_STACK_LINE(1153)
								tmp31 = data;
							}
							HX_STACK_LINE(1153)
							::openfl::_internal::renderer::DrawCommandReader c = tmp31;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1154)
							::openfl::_internal::renderer::DrawCommandBuffer tmp32 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1154)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1154)
							int tmp34 = c->fPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1154)
							int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1154)
							Float tmp36 = tmp33->f->__get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1154)
							::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1154)
							int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1154)
							int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1154)
							Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1154)
							::openfl::_internal::renderer::DrawCommandBuffer tmp41 = c->buffer;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1154)
							int tmp42 = c->fPos;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1154)
							int tmp43 = (tmp42 + (int)2);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1154)
							Float tmp44 = tmp41->f->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1154)
							::openfl::_internal::renderer::DrawCommandBuffer tmp45 = c->buffer;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1154)
							int tmp46 = c->fPos;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1154)
							int tmp47 = (tmp46 + (int)3);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1154)
							Float tmp48 = tmp45->f->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1154)
							::openfl::_internal::renderer::DrawCommandBuffer tmp49 = c->buffer;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1154)
							int tmp50 = c->fPos;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1154)
							int tmp51 = (tmp50 + (int)4);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1154)
							Float tmp52 = tmp49->f->__get(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1154)
							::openfl::_internal::renderer::DrawCommandBuffer tmp53 = c->buffer;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1154)
							int tmp54 = c->oPos;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1154)
							int tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1154)
							Dynamic tmp56 = tmp53->o->__GetItem(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1154)
							Dynamic tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1154)
							tmp32->drawRoundRect(tmp36,tmp40,tmp44,tmp48,tmp52,tmp57);
							HX_STACK_LINE(1155)
							::openfl::_internal::renderer::DrawCommandBuffer tmp58 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1155)
							::openfl::_internal::renderer::DrawCommandBuffer tmp59 = c->buffer;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1155)
							int tmp60 = c->fPos;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1155)
							int tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1155)
							Float tmp62 = tmp59->f->__get(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1155)
							::openfl::_internal::renderer::DrawCommandBuffer tmp63 = c->buffer;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(1155)
							int tmp64 = c->fPos;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(1155)
							int tmp65 = (tmp64 + (int)1);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(1155)
							Float tmp66 = tmp63->f->__get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(1155)
							::openfl::_internal::renderer::DrawCommandBuffer tmp67 = c->buffer;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(1155)
							int tmp68 = c->fPos;		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(1155)
							int tmp69 = (tmp68 + (int)2);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(1155)
							Float tmp70 = tmp67->f->__get(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(1155)
							::openfl::_internal::renderer::DrawCommandBuffer tmp71 = c->buffer;		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(1155)
							int tmp72 = c->fPos;		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(1155)
							int tmp73 = (tmp72 + (int)3);		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(1155)
							Float tmp74 = tmp71->f->__get(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(1155)
							::openfl::_internal::renderer::DrawCommandBuffer tmp75 = c->buffer;		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(1155)
							int tmp76 = c->fPos;		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(1155)
							int tmp77 = (tmp76 + (int)4);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(1155)
							Float tmp78 = tmp75->f->__get(tmp77);		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(1155)
							::openfl::_internal::renderer::DrawCommandBuffer tmp79 = c->buffer;		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(1155)
							int tmp80 = c->oPos;		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(1155)
							int tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(1155)
							Dynamic tmp82 = tmp79->o->__GetItem(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(1155)
							Dynamic tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(1155)
							tmp58->drawRoundRect(tmp62,tmp66,tmp70,tmp74,tmp78,tmp83);
						}
						;break;
						case (int)10: {
							HX_STACK_LINE(1159)
							::openfl::_internal::renderer::DrawCommandReader tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1159)
							{
								HX_STACK_LINE(1159)
								{
									HX_STACK_LINE(1159)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1159)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1159)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1159)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1159)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1159)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1159)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1159)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1159)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1159)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1159)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1159)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1159)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1159)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1159)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1159)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1159)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1159)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1159)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1159)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1159)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1159)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1159)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1159)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1159)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1159)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1159)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1159)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1159)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1159)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1159)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1159)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1159)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1159)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_TRIANGLES;
								HX_STACK_LINE(1159)
								tmp31 = data;
							}
							HX_STACK_LINE(1159)
							::openfl::_internal::renderer::DrawCommandReader c = tmp31;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1160)
							::openfl::_internal::renderer::DrawCommandBuffer tmp32 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1160)
							::openfl::_internal::renderer::DrawCommandBuffer tmp33 = c->buffer;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1160)
							int tmp34 = c->oPos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1160)
							int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1160)
							Dynamic tmp36 = tmp33->o->__GetItem(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1160)
							::openfl::_Vector::FloatVector tmp37 = ((::openfl::_Vector::FloatVector)(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1160)
							::openfl::_internal::renderer::DrawCommandBuffer tmp38 = c->buffer;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1160)
							int tmp39 = c->oPos;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1160)
							int tmp40 = (tmp39 + (int)1);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1160)
							Dynamic tmp41 = tmp38->o->__GetItem(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1160)
							::openfl::_Vector::IntVector tmp42 = ((::openfl::_Vector::IntVector)(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1160)
							::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1160)
							int tmp44 = c->oPos;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1160)
							int tmp45 = (tmp44 + (int)2);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1160)
							Dynamic tmp46 = tmp43->o->__GetItem(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1160)
							::openfl::_Vector::FloatVector tmp47 = ((::openfl::_Vector::FloatVector)(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1160)
							::openfl::_internal::renderer::DrawCommandBuffer tmp48 = c->buffer;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1160)
							int tmp49 = c->oPos;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1160)
							int tmp50 = (tmp49 + (int)3);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1160)
							Dynamic tmp51 = tmp48->o->__GetItem(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1160)
							Dynamic tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1160)
							tmp32->drawTriangles(tmp37,tmp42,tmp47,tmp52);
						}
						;break;
						default: {
							HX_STACK_LINE(1164)
							{
								HX_STACK_LINE(1164)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(1164)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(1164)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(1164)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(1164)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(1164)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(1164)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(1164)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(1164)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(1164)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(1164)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(1164)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(1164)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(1164)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(1164)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(1164)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(1164)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(1164)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(1164)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(1164)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(1164)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(1164)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(1164)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(1164)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(1164)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(1164)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(1164)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(1164)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(1164)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(1164)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(1164)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(1164)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(1164)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(1164)
							data->prev = type;
						}
					}
				}
			}
			HX_STACK_LINE(1170)
			::openfl::_internal::renderer::DrawCommandBuffer tmp28 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::fillCommands;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1170)
			int tmp29 = tmp28->get_length();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1170)
			bool tmp30 = (tmp29 > (int)0);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1170)
			if ((tmp30)){
				HX_STACK_LINE(1172)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::endFill();
			}
			HX_STACK_LINE(1176)
			::openfl::_internal::renderer::DrawCommandBuffer tmp31 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::strokeCommands;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1176)
			int tmp32 = tmp31->get_length();		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1176)
			bool tmp33 = (tmp32 > (int)0);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1176)
			if ((tmp33)){
				HX_STACK_LINE(1178)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::endStroke();
			}
			HX_STACK_LINE(1182)
			data->destroy();
			HX_STACK_LINE(1184)
			::lime::graphics::Image tmp34 = graphics->__bitmap->image;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1184)
			tmp34->dirty = true;
			HX_STACK_LINE(1185)
			::lime::graphics::Image tmp35 = graphics->__bitmap->image;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1185)
			(tmp35->version)++;
		}
		HX_STACK_LINE(1189)
		graphics->set___dirty(false);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoGraphics_obj,render,(void))

Void CairoGraphics_obj::renderMask( ::openfl::display::Graphics graphics,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoGraphics","renderMask",0x2ed81fde,"openfl._internal.renderer.cairo.CairoGraphics.renderMask","openfl/_internal/renderer/cairo/CairoGraphics.hx",1196,0x744ae94c)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1198)
		int tmp = graphics->__commands->get_length();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1198)
		bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1198)
		if ((tmp1)){
			HX_STACK_LINE(1200)
			::lime::graphics::cairo::Cairo cairo = renderSession->cairo;		HX_STACK_VAR(cairo,"cairo");
			HX_STACK_LINE(1202)
			Float positionX = ((Float)0.0);		HX_STACK_VAR(positionX,"positionX");
			HX_STACK_LINE(1203)
			Float positionY = ((Float)0.0);		HX_STACK_VAR(positionY,"positionY");
			HX_STACK_LINE(1205)
			int offsetX = (int)0;		HX_STACK_VAR(offsetX,"offsetX");
			HX_STACK_LINE(1206)
			int offsetY = (int)0;		HX_STACK_VAR(offsetY,"offsetY");
			HX_STACK_LINE(1208)
			::openfl::_internal::renderer::DrawCommandReader tmp2 = ::openfl::_internal::renderer::DrawCommandReader_obj::__new(graphics->__commands);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1208)
			::openfl::_internal::renderer::DrawCommandReader data = tmp2;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1210)
			{
				HX_STACK_LINE(1210)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1210)
				Array< ::Dynamic > _g1 = graphics->__commands->types;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1210)
				while((true)){
					HX_STACK_LINE(1210)
					bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1210)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1210)
					if ((tmp4)){
						HX_STACK_LINE(1210)
						break;
					}
					HX_STACK_LINE(1210)
					::openfl::_internal::renderer::DrawCommandType tmp5 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::DrawCommandType >();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1210)
					::openfl::_internal::renderer::DrawCommandType type = tmp5;		HX_STACK_VAR(type,"type");
					HX_STACK_LINE(1210)
					++(_g);
					HX_STACK_LINE(1212)
					switch( (int)(type->__Index())){
						case (int)3: {
							HX_STACK_LINE(1216)
							::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1216)
							{
								HX_STACK_LINE(1216)
								{
									HX_STACK_LINE(1216)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1216)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1216)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1216)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1216)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1216)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1216)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1216)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1216)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1216)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1216)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1216)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1216)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1216)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1216)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1216)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1216)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1216)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1216)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1216)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1216)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1216)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1216)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1216)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1216)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1216)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1216)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1216)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1216)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1216)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1216)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1216)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1216)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1216)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CUBIC_CURVE_TO;
								HX_STACK_LINE(1216)
								tmp6 = data;
							}
							HX_STACK_LINE(1216)
							::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1217)
							::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1217)
							int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1217)
							int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1217)
							Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1217)
							int tmp11 = offsetX;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1217)
							Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1217)
							::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1217)
							int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1217)
							int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1217)
							Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1217)
							int tmp17 = offsetY;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1217)
							Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1217)
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1217)
							int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1217)
							int tmp21 = (tmp20 + (int)2);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1217)
							Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1217)
							int tmp23 = offsetX;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1217)
							Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1217)
							::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1217)
							int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1217)
							int tmp27 = (tmp26 + (int)3);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1217)
							Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1217)
							int tmp29 = offsetY;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1217)
							Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1217)
							::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1217)
							int tmp32 = c->fPos;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1217)
							int tmp33 = (tmp32 + (int)4);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1217)
							Float tmp34 = tmp31->f->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1217)
							int tmp35 = offsetX;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1217)
							Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1217)
							::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1217)
							int tmp38 = c->fPos;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1217)
							int tmp39 = (tmp38 + (int)5);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1217)
							Float tmp40 = tmp37->f->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1217)
							int tmp41 = offsetY;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1217)
							Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1217)
							cairo->curveTo(tmp12,tmp18,tmp24,tmp30,tmp36,tmp42);
							HX_STACK_LINE(1218)
							::openfl::_internal::renderer::DrawCommandBuffer tmp43 = c->buffer;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1218)
							int tmp44 = c->fPos;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1218)
							int tmp45 = (tmp44 + (int)4);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1218)
							Float tmp46 = tmp43->f->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1218)
							positionX = tmp46;
							HX_STACK_LINE(1219)
							::openfl::_internal::renderer::DrawCommandBuffer tmp47 = c->buffer;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1219)
							int tmp48 = c->fPos;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1219)
							int tmp49 = (tmp48 + (int)4);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1219)
							Float tmp50 = tmp47->f->__get(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1219)
							positionY = tmp50;
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(1223)
							::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1223)
							{
								HX_STACK_LINE(1223)
								{
									HX_STACK_LINE(1223)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1223)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1223)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1223)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1223)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1223)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1223)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1223)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1223)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1223)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1223)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1223)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1223)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1223)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1223)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1223)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1223)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1223)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1223)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1223)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1223)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1223)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1223)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1223)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1223)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1223)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1223)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1223)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1223)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1223)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1223)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1223)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1223)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1223)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CURVE_TO;
								HX_STACK_LINE(1223)
								tmp6 = data;
							}
							HX_STACK_LINE(1223)
							::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1224)
							::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1224)
							int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1224)
							int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1224)
							Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1224)
							int tmp11 = offsetX;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1224)
							Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1224)
							::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1224)
							int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1224)
							int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1224)
							Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1224)
							int tmp17 = offsetY;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1224)
							Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1224)
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1224)
							int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1224)
							int tmp21 = (tmp20 + (int)2);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1224)
							Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1224)
							int tmp23 = offsetX;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1224)
							Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1224)
							::openfl::_internal::renderer::DrawCommandBuffer tmp25 = c->buffer;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1224)
							int tmp26 = c->fPos;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1224)
							int tmp27 = (tmp26 + (int)3);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1224)
							Float tmp28 = tmp25->f->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1224)
							int tmp29 = offsetY;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1224)
							Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1224)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::quadraticCurveTo(tmp12,tmp18,tmp24,tmp30);
							HX_STACK_LINE(1225)
							::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1225)
							int tmp32 = c->fPos;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1225)
							int tmp33 = (tmp32 + (int)2);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1225)
							Float tmp34 = tmp31->f->__get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1225)
							positionX = tmp34;
							HX_STACK_LINE(1226)
							::openfl::_internal::renderer::DrawCommandBuffer tmp35 = c->buffer;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1226)
							int tmp36 = c->fPos;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1226)
							int tmp37 = (tmp36 + (int)3);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1226)
							Float tmp38 = tmp35->f->__get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1226)
							positionY = tmp38;
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(1230)
							::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1230)
							{
								HX_STACK_LINE(1230)
								{
									HX_STACK_LINE(1230)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1230)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1230)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1230)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1230)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1230)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1230)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1230)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1230)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1230)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1230)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1230)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1230)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1230)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1230)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1230)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1230)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1230)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1230)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1230)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1230)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1230)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1230)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1230)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1230)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1230)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1230)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1230)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1230)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1230)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1230)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1230)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1230)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1230)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_CIRCLE;
								HX_STACK_LINE(1230)
								tmp6 = data;
							}
							HX_STACK_LINE(1230)
							::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1231)
							::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1231)
							int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1231)
							int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1231)
							Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1231)
							int tmp11 = offsetX;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1231)
							Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1231)
							::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1231)
							int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1231)
							int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1231)
							Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1231)
							int tmp17 = offsetY;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1231)
							Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1231)
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1231)
							int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1231)
							int tmp21 = (tmp20 + (int)2);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1231)
							Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1231)
							Float tmp23 = ::Math_obj::PI;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1231)
							Float tmp24 = (tmp23 * (int)2);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1231)
							cairo->arc(tmp12,tmp18,tmp22,(int)0,tmp24);
						}
						;break;
						case (int)6: {
							HX_STACK_LINE(1235)
							::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1235)
							{
								HX_STACK_LINE(1235)
								{
									HX_STACK_LINE(1235)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1235)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1235)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1235)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1235)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1235)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1235)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1235)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1235)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1235)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1235)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1235)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1235)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1235)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1235)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1235)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1235)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1235)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1235)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1235)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1235)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1235)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1235)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1235)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1235)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1235)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1235)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1235)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1235)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1235)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1235)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1235)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1235)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1235)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ELLIPSE;
								HX_STACK_LINE(1235)
								tmp6 = data;
							}
							HX_STACK_LINE(1235)
							::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1237)
							::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1237)
							int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1237)
							int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1237)
							Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1237)
							Float x = tmp10;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1238)
							::openfl::_internal::renderer::DrawCommandBuffer tmp11 = c->buffer;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1238)
							int tmp12 = c->fPos;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1238)
							int tmp13 = (tmp12 + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1238)
							Float tmp14 = tmp11->f->__get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1238)
							Float y = tmp14;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1239)
							::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1239)
							int tmp16 = c->fPos;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1239)
							int tmp17 = (tmp16 + (int)2);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1239)
							Float tmp18 = tmp15->f->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1239)
							Float width = tmp18;		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(1240)
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1240)
							int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1240)
							int tmp21 = (tmp20 + (int)3);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1240)
							Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1240)
							Float height = tmp22;		HX_STACK_VAR(height,"height");
							HX_STACK_LINE(1242)
							hx::SubEq(x,offsetX);
							HX_STACK_LINE(1243)
							hx::SubEq(y,offsetY);
							HX_STACK_LINE(1245)
							Float kappa = ((Float).5522848);		HX_STACK_VAR(kappa,"kappa");
							HX_STACK_LINE(1246)
							Float tmp23 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1246)
							Float tmp24 = kappa;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1246)
							Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1246)
							Float ox = tmp25;		HX_STACK_VAR(ox,"ox");
							HX_STACK_LINE(1247)
							Float tmp26 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1247)
							Float tmp27 = kappa;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1247)
							Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1247)
							Float oy = tmp28;		HX_STACK_VAR(oy,"oy");
							HX_STACK_LINE(1248)
							Float tmp29 = (x + width);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1248)
							Float xe = tmp29;		HX_STACK_VAR(xe,"xe");
							HX_STACK_LINE(1249)
							Float tmp30 = (y + height);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1249)
							Float ye = tmp30;		HX_STACK_VAR(ye,"ye");
							HX_STACK_LINE(1250)
							Float tmp31 = x;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1250)
							Float tmp32 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1250)
							Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1250)
							Float xm = tmp33;		HX_STACK_VAR(xm,"xm");
							HX_STACK_LINE(1251)
							Float tmp34 = y;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1251)
							Float tmp35 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1251)
							Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1251)
							Float ym = tmp36;		HX_STACK_VAR(ym,"ym");
							HX_STACK_LINE(1255)
							Float tmp37 = x;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1255)
							Float tmp38 = ym;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1255)
							cairo->moveTo(tmp37,tmp38);
							HX_STACK_LINE(1256)
							Float tmp39 = x;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1256)
							Float tmp40 = (ym - oy);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1256)
							Float tmp41 = (xm - ox);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1256)
							Float tmp42 = y;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1256)
							Float tmp43 = xm;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1256)
							Float tmp44 = y;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1256)
							cairo->curveTo(tmp39,tmp40,tmp41,tmp42,tmp43,tmp44);
							HX_STACK_LINE(1257)
							Float tmp45 = (xm + ox);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1257)
							Float tmp46 = y;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1257)
							Float tmp47 = xe;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1257)
							Float tmp48 = (ym - oy);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1257)
							Float tmp49 = xe;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1257)
							Float tmp50 = ym;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1257)
							cairo->curveTo(tmp45,tmp46,tmp47,tmp48,tmp49,tmp50);
							HX_STACK_LINE(1258)
							Float tmp51 = xe;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1258)
							Float tmp52 = (ym + oy);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1258)
							Float tmp53 = (xm + ox);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1258)
							Float tmp54 = ye;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1258)
							Float tmp55 = xm;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1258)
							Float tmp56 = ye;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1258)
							cairo->curveTo(tmp51,tmp52,tmp53,tmp54,tmp55,tmp56);
							HX_STACK_LINE(1259)
							Float tmp57 = (xm - ox);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1259)
							Float tmp58 = ye;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1259)
							Float tmp59 = x;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1259)
							Float tmp60 = (ym + oy);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1259)
							Float tmp61 = x;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1259)
							Float tmp62 = ym;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(1259)
							cairo->curveTo(tmp57,tmp58,tmp59,tmp60,tmp61,tmp62);
						}
						;break;
						case (int)7: {
							HX_STACK_LINE(1264)
							::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1264)
							{
								HX_STACK_LINE(1264)
								{
									HX_STACK_LINE(1264)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1264)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1264)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1264)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1264)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1264)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1264)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1264)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1264)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1264)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1264)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1264)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1264)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1264)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1264)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1264)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1264)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1264)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1264)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1264)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1264)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1264)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1264)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1264)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1264)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1264)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1264)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1264)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1264)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1264)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1264)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1264)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1264)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1264)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_RECT;
								HX_STACK_LINE(1264)
								tmp6 = data;
							}
							HX_STACK_LINE(1264)
							::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1265)
							::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1265)
							int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1265)
							int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1265)
							Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1265)
							int tmp11 = offsetX;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1265)
							Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1265)
							::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1265)
							int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1265)
							int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1265)
							Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1265)
							int tmp17 = offsetY;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1265)
							Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1265)
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1265)
							int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1265)
							int tmp21 = (tmp20 + (int)2);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1265)
							Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1265)
							::openfl::_internal::renderer::DrawCommandBuffer tmp23 = c->buffer;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1265)
							int tmp24 = c->fPos;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1265)
							int tmp25 = (tmp24 + (int)3);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1265)
							Float tmp26 = tmp23->f->__get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1265)
							cairo->rectangle(tmp12,tmp18,tmp22,tmp26);
						}
						;break;
						case (int)8: {
							HX_STACK_LINE(1269)
							::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1269)
							{
								HX_STACK_LINE(1269)
								{
									HX_STACK_LINE(1269)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1269)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1269)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1269)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1269)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1269)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1269)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1269)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1269)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1269)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1269)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1269)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1269)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1269)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1269)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1269)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1269)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1269)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1269)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1269)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1269)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1269)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1269)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1269)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1269)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1269)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1269)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1269)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1269)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1269)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1269)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1269)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1269)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1269)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ROUND_RECT;
								HX_STACK_LINE(1269)
								tmp6 = data;
							}
							HX_STACK_LINE(1269)
							::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1270)
							::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1270)
							int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1270)
							int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1270)
							Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1270)
							int tmp11 = offsetX;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1270)
							Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1270)
							::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1270)
							int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1270)
							int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1270)
							Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1270)
							int tmp17 = offsetY;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1270)
							Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1270)
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1270)
							int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1270)
							int tmp21 = (tmp20 + (int)2);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1270)
							Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1270)
							::openfl::_internal::renderer::DrawCommandBuffer tmp23 = c->buffer;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1270)
							int tmp24 = c->fPos;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1270)
							int tmp25 = (tmp24 + (int)3);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1270)
							Float tmp26 = tmp23->f->__get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1270)
							::openfl::_internal::renderer::DrawCommandBuffer tmp27 = c->buffer;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1270)
							int tmp28 = c->fPos;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1270)
							int tmp29 = (tmp28 + (int)4);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1270)
							Float tmp30 = tmp27->f->__get(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1270)
							::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1270)
							int tmp32 = c->oPos;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1270)
							int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1270)
							Dynamic tmp34 = tmp31->o->__GetItem(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1270)
							Dynamic tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1270)
							::openfl::_internal::renderer::cairo::CairoGraphics_obj::drawRoundRect(tmp12,tmp18,tmp22,tmp26,tmp30,tmp35);
						}
						;break;
						case (int)15: {
							HX_STACK_LINE(1274)
							::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1274)
							{
								HX_STACK_LINE(1274)
								{
									HX_STACK_LINE(1274)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1274)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1274)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1274)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1274)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1274)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1274)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1274)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1274)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1274)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1274)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1274)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1274)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1274)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1274)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1274)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1274)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1274)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1274)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1274)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1274)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1274)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1274)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1274)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1274)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1274)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1274)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1274)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1274)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1274)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1274)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1274)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1274)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1274)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_TO;
								HX_STACK_LINE(1274)
								tmp6 = data;
							}
							HX_STACK_LINE(1274)
							::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1275)
							::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1275)
							int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1275)
							int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1275)
							Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1275)
							int tmp11 = offsetX;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1275)
							Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1275)
							::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1275)
							int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1275)
							int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1275)
							Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1275)
							int tmp17 = offsetY;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1275)
							Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1275)
							cairo->lineTo(tmp12,tmp18);
							HX_STACK_LINE(1276)
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1276)
							int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1276)
							int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1276)
							Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1276)
							positionX = tmp22;
							HX_STACK_LINE(1277)
							::openfl::_internal::renderer::DrawCommandBuffer tmp23 = c->buffer;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1277)
							int tmp24 = c->fPos;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1277)
							int tmp25 = (tmp24 + (int)1);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1277)
							Float tmp26 = tmp23->f->__get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1277)
							positionY = tmp26;
						}
						;break;
						case (int)16: {
							HX_STACK_LINE(1281)
							::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1281)
							{
								HX_STACK_LINE(1281)
								{
									HX_STACK_LINE(1281)
									::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1281)
									switch( (int)(_g2->__Index())){
										case (int)0: {
											HX_STACK_LINE(1281)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1281)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1281)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1281)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1281)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1281)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1281)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1281)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1281)
											hx::AddEq(data->fPos,(int)6);
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1281)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1281)
											hx::AddEq(data->fPos,(int)3);
										}
										;break;
										case (int)6: {
											HX_STACK_LINE(1281)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)7: {
											HX_STACK_LINE(1281)
											hx::AddEq(data->fPos,(int)4);
										}
										;break;
										case (int)8: {
											HX_STACK_LINE(1281)
											hx::AddEq(data->fPos,(int)5);
											HX_STACK_LINE(1281)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										case (int)10: {
											HX_STACK_LINE(1281)
											hx::AddEq(data->oPos,(int)4);
										}
										;break;
										case (int)11: {
											HX_STACK_LINE(1281)
											Dynamic();
										}
										;break;
										case (int)12: {
											HX_STACK_LINE(1281)
											hx::AddEq(data->oPos,(int)2);
											HX_STACK_LINE(1281)
											hx::AddEq(data->bPos,(int)2);
										}
										;break;
										case (int)13: {
											HX_STACK_LINE(1281)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1281)
											hx::AddEq(data->iiPos,(int)2);
											HX_STACK_LINE(1281)
											hx::AddEq(data->ffPos,(int)1);
											HX_STACK_LINE(1281)
											hx::AddEq(data->fPos,(int)1);
										}
										;break;
										case (int)14: {
											HX_STACK_LINE(1281)
											hx::AddEq(data->oPos,(int)4);
											HX_STACK_LINE(1281)
											hx::AddEq(data->iPos,(int)1);
											HX_STACK_LINE(1281)
											hx::AddEq(data->fPos,(int)2);
											HX_STACK_LINE(1281)
											hx::AddEq(data->bPos,(int)1);
										}
										;break;
										case (int)15: {
											HX_STACK_LINE(1281)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)16: {
											HX_STACK_LINE(1281)
											hx::AddEq(data->fPos,(int)2);
										}
										;break;
										case (int)17: {
											HX_STACK_LINE(1281)
											hx::AddEq(data->oPos,(int)1);
										}
										;break;
										default: {
											HX_STACK_LINE(1281)
											Dynamic();
										}
									}
								}
								HX_STACK_LINE(1281)
								data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::MOVE_TO;
								HX_STACK_LINE(1281)
								tmp6 = data;
							}
							HX_STACK_LINE(1281)
							::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(1282)
							::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1282)
							int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1282)
							int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1282)
							Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1282)
							int tmp11 = offsetX;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1282)
							Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1282)
							::openfl::_internal::renderer::DrawCommandBuffer tmp13 = c->buffer;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1282)
							int tmp14 = c->fPos;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1282)
							int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1282)
							Float tmp16 = tmp13->f->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1282)
							int tmp17 = offsetY;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1282)
							Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1282)
							cairo->moveTo(tmp12,tmp18);
							HX_STACK_LINE(1283)
							::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1283)
							int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1283)
							int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1283)
							Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1283)
							positionX = tmp22;
							HX_STACK_LINE(1284)
							::openfl::_internal::renderer::DrawCommandBuffer tmp23 = c->buffer;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1284)
							int tmp24 = c->fPos;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1284)
							int tmp25 = (tmp24 + (int)1);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1284)
							Float tmp26 = tmp23->f->__get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1284)
							positionY = tmp26;
						}
						;break;
						default: {
							HX_STACK_LINE(1288)
							{
								HX_STACK_LINE(1288)
								::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(1288)
								switch( (int)(_g2->__Index())){
									case (int)0: {
										HX_STACK_LINE(1288)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(1288)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(1288)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(1288)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)2: {
										HX_STACK_LINE(1288)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(1288)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(1288)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(1288)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)3: {
										HX_STACK_LINE(1288)
										hx::AddEq(data->fPos,(int)6);
									}
									;break;
									case (int)4: {
										HX_STACK_LINE(1288)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)5: {
										HX_STACK_LINE(1288)
										hx::AddEq(data->fPos,(int)3);
									}
									;break;
									case (int)6: {
										HX_STACK_LINE(1288)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)7: {
										HX_STACK_LINE(1288)
										hx::AddEq(data->fPos,(int)4);
									}
									;break;
									case (int)8: {
										HX_STACK_LINE(1288)
										hx::AddEq(data->fPos,(int)5);
										HX_STACK_LINE(1288)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									case (int)10: {
										HX_STACK_LINE(1288)
										hx::AddEq(data->oPos,(int)4);
									}
									;break;
									case (int)11: {
										HX_STACK_LINE(1288)
										Dynamic();
									}
									;break;
									case (int)12: {
										HX_STACK_LINE(1288)
										hx::AddEq(data->oPos,(int)2);
										HX_STACK_LINE(1288)
										hx::AddEq(data->bPos,(int)2);
									}
									;break;
									case (int)13: {
										HX_STACK_LINE(1288)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(1288)
										hx::AddEq(data->iiPos,(int)2);
										HX_STACK_LINE(1288)
										hx::AddEq(data->ffPos,(int)1);
										HX_STACK_LINE(1288)
										hx::AddEq(data->fPos,(int)1);
									}
									;break;
									case (int)14: {
										HX_STACK_LINE(1288)
										hx::AddEq(data->oPos,(int)4);
										HX_STACK_LINE(1288)
										hx::AddEq(data->iPos,(int)1);
										HX_STACK_LINE(1288)
										hx::AddEq(data->fPos,(int)2);
										HX_STACK_LINE(1288)
										hx::AddEq(data->bPos,(int)1);
									}
									;break;
									case (int)15: {
										HX_STACK_LINE(1288)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)16: {
										HX_STACK_LINE(1288)
										hx::AddEq(data->fPos,(int)2);
									}
									;break;
									case (int)17: {
										HX_STACK_LINE(1288)
										hx::AddEq(data->oPos,(int)1);
									}
									;break;
									default: {
										HX_STACK_LINE(1288)
										Dynamic();
									}
								}
							}
							HX_STACK_LINE(1288)
							data->prev = type;
						}
					}
				}
			}
			HX_STACK_LINE(1294)
			data->destroy();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoGraphics_obj,renderMask,(void))


CairoGraphics_obj::CairoGraphics_obj()
{
}

bool CairoGraphics_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { outValue = SIN45; return true;  }
		if (HX_FIELD_EQ(inName,"TAN22") ) { outValue = TAN22; return true;  }
		if (HX_FIELD_EQ(inName,"cairo") ) { outValue = cairo; return true;  }
		if (HX_FIELD_EQ(inName,"isCCW") ) { outValue = isCCW_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { outValue = bounds; return true;  }
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasFill") ) { outValue = hasFill; return true;  }
		if (HX_FIELD_EQ(inName,"endFill") ) { outValue = endFill_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"hitTest") ) { outValue = hitTest_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { outValue = graphics; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasStroke") ) { outValue = hasStroke; return true;  }
		if (HX_FIELD_EQ(inName,"closePath") ) { outValue = closePath_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"endStroke") ) { outValue = endStroke_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapFill") ) { outValue = bitmapFill; return true;  }
		if (HX_FIELD_EQ(inName,"hitTesting") ) { outValue = hitTesting; return true;  }
		if (HX_FIELD_EQ(inName,"renderMask") ) { outValue = renderMask_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fillPattern") ) { outValue = fillPattern; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitmapRepeat") ) { outValue = bitmapRepeat; return true;  }
		if (HX_FIELD_EQ(inName,"fillCommands") ) { outValue = fillCommands; return true;  }
		if (HX_FIELD_EQ(inName,"normalizeUVT") ) { outValue = normalizeUVT_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"playCommands") ) { outValue = playCommands_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingMatrix") ) { outValue = pendingMatrix; return true;  }
		if (HX_FIELD_EQ(inName,"strokePattern") ) { outValue = strokePattern; return true;  }
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { outValue = drawRoundRect_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowSmoothing") ) { outValue = allowSmoothing; return true;  }
		if (HX_FIELD_EQ(inName,"strokeCommands") ) { outValue = strokeCommands; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"quadraticCurveTo") ) { outValue = quadraticCurveTo_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fillPatternMatrix") ) { outValue = fillPatternMatrix; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createImagePattern") ) { outValue = createImagePattern_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inversePendingMatrix") ) { outValue = inversePendingMatrix; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createGradientPattern") ) { outValue = createGradientPattern_dyn(); return true;  }
	}
	return false;
}

bool CairoGraphics_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { SIN45=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { TAN22=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"cairo") ) { cairo=ioValue.Cast< ::lime::graphics::cairo::Cairo >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=ioValue.Cast< ::openfl::geom::Rectangle >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasFill") ) { hasFill=ioValue.Cast< bool >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=ioValue.Cast< ::openfl::display::Graphics >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasStroke") ) { hasStroke=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapFill") ) { bitmapFill=ioValue.Cast< ::openfl::display::BitmapData >(); return true; }
		if (HX_FIELD_EQ(inName,"hitTesting") ) { hitTesting=ioValue.Cast< bool >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fillPattern") ) { fillPattern=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitmapRepeat") ) { bitmapRepeat=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"fillCommands") ) { fillCommands=ioValue.Cast< ::openfl::_internal::renderer::DrawCommandBuffer >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingMatrix") ) { pendingMatrix=ioValue.Cast< ::openfl::geom::Matrix >(); return true; }
		if (HX_FIELD_EQ(inName,"strokePattern") ) { strokePattern=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowSmoothing") ) { allowSmoothing=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"strokeCommands") ) { strokeCommands=ioValue.Cast< ::openfl::_internal::renderer::DrawCommandBuffer >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fillPatternMatrix") ) { fillPatternMatrix=ioValue.Cast< ::openfl::geom::Matrix >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inversePendingMatrix") ) { inversePendingMatrix=ioValue.Cast< ::openfl::geom::Matrix >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &CairoGraphics_obj::SIN45,HX_HCSTRING("SIN45","\x79","\x16","\xbe","\xfa")},
	{hx::fsFloat,(void *) &CairoGraphics_obj::TAN22,HX_HCSTRING("TAN22","\x41","\xf4","\xda","\x88")},
	{hx::fsBool,(void *) &CairoGraphics_obj::allowSmoothing,HX_HCSTRING("allowSmoothing","\xab","\xb7","\x66","\x68")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(void *) &CairoGraphics_obj::bitmapFill,HX_HCSTRING("bitmapFill","\x12","\x2e","\x19","\x35")},
	{hx::fsBool,(void *) &CairoGraphics_obj::bitmapRepeat,HX_HCSTRING("bitmapRepeat","\xaa","\x38","\x9c","\x11")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(void *) &CairoGraphics_obj::bounds,HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(void *) &CairoGraphics_obj::cairo,HX_HCSTRING("cairo","\x88","\x30","\x19","\x41")},
	{hx::fsObject /*::openfl::_internal::renderer::DrawCommandBuffer*/ ,(void *) &CairoGraphics_obj::fillCommands,HX_HCSTRING("fillCommands","\x6b","\xf6","\xc9","\xc2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoGraphics_obj::fillPattern,HX_HCSTRING("fillPattern","\x0d","\x86","\x12","\x35")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(void *) &CairoGraphics_obj::fillPatternMatrix,HX_HCSTRING("fillPatternMatrix","\x2e","\xb8","\xae","\x97")},
	{hx::fsObject /*::openfl::display::Graphics*/ ,(void *) &CairoGraphics_obj::graphics,HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12")},
	{hx::fsBool,(void *) &CairoGraphics_obj::hasFill,HX_HCSTRING("hasFill","\xfd","\xee","\xff","\x12")},
	{hx::fsBool,(void *) &CairoGraphics_obj::hasStroke,HX_HCSTRING("hasStroke","\xb2","\x66","\x1d","\x52")},
	{hx::fsBool,(void *) &CairoGraphics_obj::hitTesting,HX_HCSTRING("hitTesting","\xbd","\x65","\x48","\x19")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(void *) &CairoGraphics_obj::inversePendingMatrix,HX_HCSTRING("inversePendingMatrix","\x28","\x14","\x8c","\xbb")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(void *) &CairoGraphics_obj::pendingMatrix,HX_HCSTRING("pendingMatrix","\xf8","\x9d","\x96","\xb5")},
	{hx::fsObject /*::openfl::_internal::renderer::DrawCommandBuffer*/ ,(void *) &CairoGraphics_obj::strokeCommands,HX_HCSTRING("strokeCommands","\xa0","\x98","\x2a","\x67")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoGraphics_obj::strokePattern,HX_HCSTRING("strokePattern","\x78","\xe1","\x21","\x7e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::SIN45,"SIN45");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::TAN22,"TAN22");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::allowSmoothing,"allowSmoothing");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bitmapFill,"bitmapFill");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bitmapRepeat,"bitmapRepeat");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::bounds,"bounds");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::cairo,"cairo");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillCommands,"fillCommands");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillPattern,"fillPattern");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::fillPatternMatrix,"fillPatternMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::graphics,"graphics");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hasFill,"hasFill");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hasStroke,"hasStroke");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::hitTesting,"hitTesting");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::strokeCommands,"strokeCommands");
	HX_MARK_MEMBER_NAME(CairoGraphics_obj::strokePattern,"strokePattern");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::SIN45,"SIN45");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::TAN22,"TAN22");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::allowSmoothing,"allowSmoothing");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bitmapFill,"bitmapFill");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bitmapRepeat,"bitmapRepeat");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::bounds,"bounds");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::cairo,"cairo");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillCommands,"fillCommands");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillPattern,"fillPattern");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::fillPatternMatrix,"fillPatternMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::graphics,"graphics");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hasFill,"hasFill");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hasStroke,"hasStroke");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::hitTesting,"hitTesting");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::strokeCommands,"strokeCommands");
	HX_VISIT_MEMBER_NAME(CairoGraphics_obj::strokePattern,"strokePattern");
};

#endif

hx::Class CairoGraphics_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("SIN45","\x79","\x16","\xbe","\xfa"),
	HX_HCSTRING("TAN22","\x41","\xf4","\xda","\x88"),
	HX_HCSTRING("allowSmoothing","\xab","\xb7","\x66","\x68"),
	HX_HCSTRING("bitmapFill","\x12","\x2e","\x19","\x35"),
	HX_HCSTRING("bitmapRepeat","\xaa","\x38","\x9c","\x11"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"),
	HX_HCSTRING("fillCommands","\x6b","\xf6","\xc9","\xc2"),
	HX_HCSTRING("fillPattern","\x0d","\x86","\x12","\x35"),
	HX_HCSTRING("fillPatternMatrix","\x2e","\xb8","\xae","\x97"),
	HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"),
	HX_HCSTRING("hasFill","\xfd","\xee","\xff","\x12"),
	HX_HCSTRING("hasStroke","\xb2","\x66","\x1d","\x52"),
	HX_HCSTRING("hitTesting","\xbd","\x65","\x48","\x19"),
	HX_HCSTRING("inversePendingMatrix","\x28","\x14","\x8c","\xbb"),
	HX_HCSTRING("pendingMatrix","\xf8","\x9d","\x96","\xb5"),
	HX_HCSTRING("strokeCommands","\xa0","\x98","\x2a","\x67"),
	HX_HCSTRING("strokePattern","\x78","\xe1","\x21","\x7e"),
	HX_HCSTRING("closePath","\x7d","\x65","\x20","\x14"),
	HX_HCSTRING("createGradientPattern","\xa4","\xee","\x44","\xf6"),
	HX_HCSTRING("createImagePattern","\x51","\xbd","\x5d","\xfb"),
	HX_HCSTRING("drawRoundRect","\xee","\xc3","\xaa","\xe2"),
	HX_HCSTRING("endFill","\xfe","\x87","\xe0","\x25"),
	HX_HCSTRING("endStroke","\xf3","\x01","\x17","\x51"),
	HX_HCSTRING("hitTest","\x45","\x60","\x7f","\xe2"),
	HX_HCSTRING("isCCW","\x0d","\x84","\x49","\xc1"),
	HX_HCSTRING("normalizeUVT","\x66","\x09","\x2f","\x47"),
	HX_HCSTRING("playCommands","\xdc","\xae","\xee","\x49"),
	HX_HCSTRING("quadraticCurveTo","\x12","\x48","\xc3","\x82"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderMask","\x62","\x3b","\x60","\xe5"),
	::String(null()) };

void CairoGraphics_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoGraphics","\x72","\x72","\xef","\x3c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoGraphics_obj::__GetStatic;
	__mClass->mSetStaticField = &CairoGraphics_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoGraphics_obj >;
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

void CairoGraphics_obj::__boot()
{
	SIN45= ((Float)0.70710678118654752440084436210485);
	TAN22= ((Float)0.4142135623730950488016887242097);
	fillCommands= ::openfl::_internal::renderer::DrawCommandBuffer_obj::__new();
	strokeCommands= ::openfl::_internal::renderer::DrawCommandBuffer_obj::__new();
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo
