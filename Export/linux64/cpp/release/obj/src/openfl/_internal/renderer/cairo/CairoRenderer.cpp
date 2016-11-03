#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoBlendModeManager
#include <openfl/_internal/renderer/cairo/CairoBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoMaskManager
#include <openfl/_internal/renderer/cairo/CairoMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoRenderer
#include <openfl/_internal/renderer/cairo/CairoRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

Void CairoRenderer_obj::__construct(::openfl::display::Stage stage,::lime::graphics::cairo::Cairo cairo)
{
HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoRenderer","new",0x7d599cdc,"openfl._internal.renderer.cairo.CairoRenderer.new","openfl/_internal/renderer/cairo/CairoRenderer.hx",21,0x849037d4)
HX_STACK_THIS(this)
HX_STACK_ARG(stage,"stage")
HX_STACK_ARG(cairo,"cairo")
{
	HX_STACK_LINE(23)
	::openfl::display::Stage tmp = stage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	super::__construct(tmp);
	HX_STACK_LINE(25)
	this->cairo = cairo;
	HX_STACK_LINE(27)
	::openfl::_internal::renderer::RenderSession tmp1 = ::openfl::_internal::renderer::RenderSession_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	this->renderSession = tmp1;
	HX_STACK_LINE(28)
	::openfl::_internal::renderer::RenderSession tmp2 = this->renderSession;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	tmp2->cairo = cairo;
	HX_STACK_LINE(29)
	::openfl::_internal::renderer::RenderSession tmp3 = this->renderSession;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(29)
	tmp3->roundPixels = true;
	HX_STACK_LINE(30)
	::openfl::_internal::renderer::RenderSession tmp4 = this->renderSession;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(30)
	tmp4->renderer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(31)
	::openfl::_internal::renderer::RenderSession tmp5 = this->renderSession;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(31)
	::openfl::_internal::renderer::cairo::CairoMaskManager tmp6 = ::openfl::_internal::renderer::cairo::CairoMaskManager_obj::__new(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(31)
	::openfl::_internal::renderer::RenderSession tmp7 = this->renderSession;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(31)
	tmp7->maskManager = tmp6;
	HX_STACK_LINE(32)
	::openfl::_internal::renderer::RenderSession tmp8 = this->renderSession;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(32)
	::openfl::_internal::renderer::cairo::CairoBlendModeManager tmp9 = ::openfl::_internal::renderer::cairo::CairoBlendModeManager_obj::__new(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(32)
	::openfl::_internal::renderer::RenderSession tmp10 = this->renderSession;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(32)
	tmp10->blendModeManager = tmp9;
}
;
	return null();
}

//CairoRenderer_obj::~CairoRenderer_obj() { }

Dynamic CairoRenderer_obj::__CreateEmpty() { return  new CairoRenderer_obj; }
hx::ObjectPtr< CairoRenderer_obj > CairoRenderer_obj::__new(::openfl::display::Stage stage,::lime::graphics::cairo::Cairo cairo)
{  hx::ObjectPtr< CairoRenderer_obj > _result_ = new CairoRenderer_obj();
	_result_->__construct(stage,cairo);
	return _result_;}

Dynamic CairoRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoRenderer_obj > _result_ = new CairoRenderer_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void CairoRenderer_obj::render( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoRenderer","render",0xe2c1945a,"openfl._internal.renderer.cairo.CairoRenderer.render","openfl/_internal/renderer/cairo/CairoRenderer.hx",37,0x849037d4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		Dynamic tmp1 = tmp->quality;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		bool tmp2 = (tmp1 != ((Dynamic)((int)2)));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		::openfl::_internal::renderer::RenderSession tmp3 = this->renderSession;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(39)
		tmp3->allowSmoothing = tmp2;
		HX_STACK_LINE(41)
		::lime::graphics::cairo::Cairo tmp4 = this->cairo;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		tmp4->identityMatrix();
		HX_STACK_LINE(43)
		::openfl::display::Stage tmp5 = this->stage;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(43)
		bool tmp6 = tmp5->__clearBeforeRender;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(43)
		if ((tmp6)){
			HX_STACK_LINE(45)
			::lime::graphics::cairo::Cairo tmp7 = this->cairo;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(45)
			::openfl::display::Stage tmp8 = this->stage;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(45)
			Float tmp9 = tmp8->__colorSplit->__get((int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(45)
			::openfl::display::Stage tmp10 = this->stage;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(45)
			Float tmp11 = tmp10->__colorSplit->__get((int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(45)
			::openfl::display::Stage tmp12 = this->stage;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(45)
			Float tmp13 = tmp12->__colorSplit->__get((int)2);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(45)
			tmp7->setSourceRGB(tmp9,tmp11,tmp13);
			HX_STACK_LINE(46)
			::lime::graphics::cairo::Cairo tmp14 = this->cairo;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(46)
			tmp14->paint();
		}
		HX_STACK_LINE(50)
		::openfl::display::Stage tmp7 = this->stage;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(50)
		::openfl::_internal::renderer::RenderSession tmp8 = this->renderSession;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(50)
		tmp7->__renderCairo(tmp8);
	}
return null();
}



CairoRenderer_obj::CairoRenderer_obj()
{
}

void CairoRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CairoRenderer);
	HX_MARK_MEMBER_NAME(cairo,"cairo");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CairoRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cairo,"cairo");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CairoRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { return cairo; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CairoRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { cairo=inValue.Cast< ::lime::graphics::cairo::Cairo >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(int)offsetof(CairoRenderer_obj,cairo),HX_HCSTRING("cairo","\x88","\x30","\x19","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class CairoRenderer_obj::__mClass;

void CairoRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoRenderer","\xea","\x3e","\x63","\xdd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CairoRenderer_obj >;
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
