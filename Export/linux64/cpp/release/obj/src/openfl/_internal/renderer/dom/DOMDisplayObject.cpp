#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_dom_DOMDisplayObject
#include <openfl/_internal/renderer/dom/DOMDisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
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
namespace openfl{
namespace _internal{
namespace renderer{
namespace dom{

Void DOMDisplayObject_obj::__construct()
{
	return null();
}

//DOMDisplayObject_obj::~DOMDisplayObject_obj() { }

Dynamic DOMDisplayObject_obj::__CreateEmpty() { return  new DOMDisplayObject_obj; }
hx::ObjectPtr< DOMDisplayObject_obj > DOMDisplayObject_obj::__new()
{  hx::ObjectPtr< DOMDisplayObject_obj > _result_ = new DOMDisplayObject_obj();
	_result_->__construct();
	return _result_;}

Dynamic DOMDisplayObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DOMDisplayObject_obj > _result_ = new DOMDisplayObject_obj();
	_result_->__construct();
	return _result_;}

Void DOMDisplayObject_obj::render( ::openfl::display::DisplayObject displayObject,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.dom.DOMDisplayObject","render",0x02818b9e,"openfl._internal.renderer.dom.DOMDisplayObject.render","openfl/_internal/renderer/dom/DOMDisplayObject.hx",14,0xeb6cef58)
		HX_STACK_ARG(displayObject,"displayObject")
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMDisplayObject_obj,render,(void))


DOMDisplayObject_obj::DOMDisplayObject_obj()
{
}

bool DOMDisplayObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(DOMDisplayObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DOMDisplayObject_obj::__mClass,"__mClass");
};

#endif

hx::Class DOMDisplayObject_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

void DOMDisplayObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.dom.DOMDisplayObject","\x26","\x07","\xff","\xe7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DOMDisplayObject_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DOMDisplayObject_obj >;
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
} // end namespace dom
