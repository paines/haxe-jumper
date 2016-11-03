#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
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
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasMaskManager
#include <openfl/_internal/renderer/canvas/CanvasMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasRenderer
#include <openfl/_internal/renderer/canvas/CanvasRenderer.h>
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
namespace canvas{

Void CanvasRenderer_obj::__construct(::openfl::display::Stage stage,::lime::graphics::CanvasRenderContext context)
{
HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasRenderer","new",0x66327fe8,"openfl._internal.renderer.canvas.CanvasRenderer.new","openfl/_internal/renderer/canvas/CanvasRenderer.hx",18,0x1be544e6)
HX_STACK_THIS(this)
HX_STACK_ARG(stage,"stage")
HX_STACK_ARG(context,"context")
{
	HX_STACK_LINE(20)
	::openfl::display::Stage tmp = stage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	super::__construct(tmp);
	HX_STACK_LINE(22)
	this->context = context;
	HX_STACK_LINE(24)
	::openfl::_internal::renderer::RenderSession tmp1 = ::openfl::_internal::renderer::RenderSession_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	this->renderSession = tmp1;
	HX_STACK_LINE(25)
	::openfl::_internal::renderer::RenderSession tmp2 = this->renderSession;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	tmp2->context = context;
	HX_STACK_LINE(26)
	::openfl::_internal::renderer::RenderSession tmp3 = this->renderSession;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(26)
	tmp3->roundPixels = true;
	HX_STACK_LINE(27)
	::openfl::_internal::renderer::RenderSession tmp4 = this->renderSession;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(27)
	tmp4->renderer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(29)
	::openfl::_internal::renderer::RenderSession tmp5 = this->renderSession;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(29)
	::openfl::_internal::renderer::canvas::CanvasMaskManager tmp6 = ::openfl::_internal::renderer::canvas::CanvasMaskManager_obj::__new(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(29)
	::openfl::_internal::renderer::RenderSession tmp7 = this->renderSession;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(29)
	tmp7->maskManager = tmp6;
}
;
	return null();
}

//CanvasRenderer_obj::~CanvasRenderer_obj() { }

Dynamic CanvasRenderer_obj::__CreateEmpty() { return  new CanvasRenderer_obj; }
hx::ObjectPtr< CanvasRenderer_obj > CanvasRenderer_obj::__new(::openfl::display::Stage stage,::lime::graphics::CanvasRenderContext context)
{  hx::ObjectPtr< CanvasRenderer_obj > _result_ = new CanvasRenderer_obj();
	_result_->__construct(stage,context);
	return _result_;}

Dynamic CanvasRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CanvasRenderer_obj > _result_ = new CanvasRenderer_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void CanvasRenderer_obj::render( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasRenderer","render",0x244720ce,"openfl._internal.renderer.canvas.CanvasRenderer.render","openfl/_internal/renderer/canvas/CanvasRenderer.hx",35,0x1be544e6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(37)
		::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		Dynamic tmp1 = tmp->quality;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		bool tmp2 = (tmp1 != ((Dynamic)((int)2)));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		::openfl::_internal::renderer::RenderSession tmp3 = this->renderSession;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		tmp3->allowSmoothing = tmp2;
		HX_STACK_LINE(39)
		::lime::graphics::CanvasRenderContext tmp4 = this->context;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(39)
		tmp4->setTransform((int)1,(int)0,(int)0,(int)1,(int)0,(int)0);
		HX_STACK_LINE(40)
		::lime::graphics::CanvasRenderContext tmp5 = this->context;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(40)
		tmp5->globalAlpha = (int)1;
		HX_STACK_LINE(42)
		::openfl::display::Stage tmp6 = this->stage;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(42)
		bool tmp7 = tmp6->__transparent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(42)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(42)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(42)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(42)
		if ((tmp9)){
			HX_STACK_LINE(42)
			::openfl::display::Stage tmp11 = this->stage;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(42)
			::openfl::display::Stage tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(42)
			tmp10 = tmp12->__clearBeforeRender;
		}
		else{
			HX_STACK_LINE(42)
			tmp10 = false;
		}
		HX_STACK_LINE(42)
		if ((tmp10)){
			HX_STACK_LINE(44)
			::openfl::display::Stage tmp11 = this->stage;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(44)
			::lime::graphics::CanvasRenderContext tmp12 = this->context;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(44)
			tmp12->fillStyle = tmp11->__colorString;
			HX_STACK_LINE(45)
			::lime::graphics::CanvasRenderContext tmp13 = this->context;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(45)
			::openfl::display::Stage tmp14 = this->stage;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(45)
			int tmp15 = tmp14->stageWidth;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(45)
			::openfl::display::Stage tmp16 = this->stage;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(45)
			int tmp17 = tmp16->stageHeight;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(45)
			tmp13->fillRect((int)0,(int)0,tmp15,tmp17);
		}
		else{
			HX_STACK_LINE(47)
			::openfl::display::Stage tmp11 = this->stage;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(47)
			bool tmp12 = tmp11->__transparent;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(47)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(47)
			if ((tmp12)){
				HX_STACK_LINE(47)
				::openfl::display::Stage tmp14 = this->stage;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(47)
				::openfl::display::Stage tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(47)
				tmp13 = tmp15->__clearBeforeRender;
			}
			else{
				HX_STACK_LINE(47)
				tmp13 = false;
			}
			HX_STACK_LINE(47)
			if ((tmp13)){
				HX_STACK_LINE(49)
				::lime::graphics::CanvasRenderContext tmp14 = this->context;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(49)
				::openfl::display::Stage tmp15 = this->stage;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(49)
				int tmp16 = tmp15->stageWidth;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(49)
				::openfl::display::Stage tmp17 = this->stage;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(49)
				int tmp18 = tmp17->stageHeight;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(49)
				tmp14->clearRect((int)0,(int)0,tmp16,tmp18);
			}
		}
		HX_STACK_LINE(53)
		::openfl::display::Stage tmp11 = this->stage;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(53)
		::openfl::_internal::renderer::RenderSession tmp12 = this->renderSession;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(53)
		tmp11->__renderCanvas(tmp12);
	}
return null();
}



CanvasRenderer_obj::CanvasRenderer_obj()
{
}

void CanvasRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CanvasRenderer);
	HX_MARK_MEMBER_NAME(context,"context");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CanvasRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context,"context");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CanvasRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return context; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CanvasRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast< ::lime::graphics::CanvasRenderContext >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CanvasRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("context","\xef","\x95","\x77","\x19"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::CanvasRenderContext*/ ,(int)offsetof(CanvasRenderer_obj,context),HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CanvasRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CanvasRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class CanvasRenderer_obj::__mClass;

void CanvasRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.canvas.CanvasRenderer","\xf6","\xab","\xb2","\xdc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CanvasRenderer_obj >;
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
} // end namespace canvas
