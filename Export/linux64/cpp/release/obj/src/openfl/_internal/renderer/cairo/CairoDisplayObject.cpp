#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoDisplayObject
#include <openfl/_internal/renderer/cairo/CairoDisplayObject.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoShape
#include <openfl/_internal/renderer/cairo/CairoShape.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

Void CairoDisplayObject_obj::__construct()
{
	return null();
}

//CairoDisplayObject_obj::~CairoDisplayObject_obj() { }

Dynamic CairoDisplayObject_obj::__CreateEmpty() { return  new CairoDisplayObject_obj; }
hx::ObjectPtr< CairoDisplayObject_obj > CairoDisplayObject_obj::__new()
{  hx::ObjectPtr< CairoDisplayObject_obj > _result_ = new CairoDisplayObject_obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoDisplayObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoDisplayObject_obj > _result_ = new CairoDisplayObject_obj();
	_result_->__construct();
	return _result_;}

Void CairoDisplayObject_obj::render( ::openfl::display::DisplayObject displayObject,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoDisplayObject","render",0xdb2265aa,"openfl._internal.renderer.cairo.CairoDisplayObject.render","openfl/_internal/renderer/cairo/CairoDisplayObject.hx",14,0xea0a3da4)
		HX_STACK_ARG(displayObject,"displayObject")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(17)
		bool tmp = (displayObject->opaqueBackground == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(17)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(17)
		if ((tmp)){
			HX_STACK_LINE(17)
			tmp1 = (displayObject->__graphics == null());
		}
		else{
			HX_STACK_LINE(17)
			tmp1 = false;
		}
		HX_STACK_LINE(17)
		if ((tmp1)){
			HX_STACK_LINE(17)
			return null();
		}
		HX_STACK_LINE(19)
		bool tmp2 = displayObject->__renderable;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(19)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(19)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(19)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(19)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(19)
		if ((tmp5)){
			HX_STACK_LINE(19)
			tmp6 = (displayObject->__worldAlpha <= (int)0);
		}
		else{
			HX_STACK_LINE(19)
			tmp6 = true;
		}
		HX_STACK_LINE(19)
		if ((tmp6)){
			HX_STACK_LINE(19)
			return null();
		}
		HX_STACK_LINE(21)
		bool tmp7 = (displayObject->opaqueBackground != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(21)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(21)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(21)
		if ((tmp8)){
			HX_STACK_LINE(21)
			Float tmp10 = displayObject->get_width();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(21)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(21)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(21)
			tmp9 = (tmp12 > (int)0);
		}
		else{
			HX_STACK_LINE(21)
			tmp9 = false;
		}
		HX_STACK_LINE(21)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(21)
		if ((tmp9)){
			HX_STACK_LINE(21)
			Float tmp11 = displayObject->get_height();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(21)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(21)
			tmp10 = (tmp12 > (int)0);
		}
		else{
			HX_STACK_LINE(21)
			tmp10 = false;
		}
		HX_STACK_LINE(21)
		if ((tmp10)){
			HX_STACK_LINE(23)
			::openfl::display::DisplayObject tmp11 = displayObject;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(23)
			renderSession->maskManager->pushObject(tmp11,null());
			HX_STACK_LINE(25)
			::lime::graphics::cairo::Cairo cairo = renderSession->cairo;		HX_STACK_VAR(cairo,"cairo");
			HX_STACK_LINE(27)
			bool tmp12 = renderSession->roundPixels;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(27)
			if ((tmp12)){
				HX_STACK_LINE(29)
				::lime::math::Matrix3 tmp13 = displayObject->__renderTransform->__toMatrix3();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(29)
				::lime::math::Matrix3 matrix = tmp13;		HX_STACK_VAR(matrix,"matrix");
				HX_STACK_LINE(30)
				Float tmp14 = matrix->tx;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(30)
				int tmp15 = ::Math_obj::round(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(30)
				matrix->tx = tmp15;
				HX_STACK_LINE(31)
				Float tmp16 = matrix->ty;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(31)
				int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(31)
				matrix->ty = tmp17;
				HX_STACK_LINE(32)
				::lime::math::Matrix3 tmp18 = matrix;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(32)
				cairo->set_matrix(tmp18);
			}
			else{
				HX_STACK_LINE(36)
				::lime::math::Matrix3 tmp13 = displayObject->__renderTransform->__toMatrix3();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(36)
				cairo->set_matrix(tmp13);
			}
			HX_STACK_LINE(40)
			int color = ((int)(displayObject->opaqueBackground));		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(41)
			int tmp13 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(41)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(41)
			int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(41)
			int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(41)
			Float tmp17 = (Float(tmp16) / Float((int)255));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(41)
			int tmp18 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(41)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(41)
			int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(41)
			int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(41)
			Float tmp22 = (Float(tmp21) / Float((int)255));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(41)
			int tmp23 = (int(color) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(41)
			int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(41)
			Float tmp25 = (Float(tmp24) / Float((int)255));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(41)
			cairo->setSourceRGB(tmp17,tmp22,tmp25);
			HX_STACK_LINE(42)
			Float tmp26 = displayObject->get_width();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(42)
			Float tmp27 = displayObject->get_height();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(42)
			cairo->rectangle((int)0,(int)0,tmp26,tmp27);
			HX_STACK_LINE(43)
			cairo->fill();
			HX_STACK_LINE(45)
			::openfl::display::DisplayObject tmp28 = displayObject;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(45)
			renderSession->maskManager->popObject(tmp28,null());
		}
		HX_STACK_LINE(49)
		bool tmp11 = (displayObject->__graphics != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(49)
		if ((tmp11)){
			HX_STACK_LINE(51)
			::openfl::display::DisplayObject tmp12 = displayObject;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(51)
			::openfl::_internal::renderer::RenderSession tmp13 = renderSession;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(51)
			::openfl::_internal::renderer::cairo::CairoShape_obj::render(tmp12,tmp13);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoDisplayObject_obj,render,(void))


CairoDisplayObject_obj::CairoDisplayObject_obj()
{
}

bool CairoDisplayObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoDisplayObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoDisplayObject_obj::__mClass,"__mClass");
};

#endif

hx::Class CairoDisplayObject_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

void CairoDisplayObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoDisplayObject","\x9a","\x63","\xfd","\x16");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoDisplayObject_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoDisplayObject_obj >;
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
} // end namespace renderer
} // end namespace cairo
