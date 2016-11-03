#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_AbstractFilterManager
#include <openfl/_internal/renderer/AbstractFilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
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

Void AbstractFilterManager_obj::__construct(::openfl::_internal::renderer::RenderSession renderSession)
{
HX_STACK_FRAME("openfl._internal.renderer.AbstractFilterManager","new",0x8d5ceeea,"openfl._internal.renderer.AbstractFilterManager.new","openfl/_internal/renderer/AbstractFilterManager.hx",19,0x8a413d45)
HX_STACK_THIS(this)
HX_STACK_ARG(renderSession,"renderSession")
{
	HX_STACK_LINE(19)
	this->renderSession = renderSession;
}
;
	return null();
}

//AbstractFilterManager_obj::~AbstractFilterManager_obj() { }

Dynamic AbstractFilterManager_obj::__CreateEmpty() { return  new AbstractFilterManager_obj; }
hx::ObjectPtr< AbstractFilterManager_obj > AbstractFilterManager_obj::__new(::openfl::_internal::renderer::RenderSession renderSession)
{  hx::ObjectPtr< AbstractFilterManager_obj > _result_ = new AbstractFilterManager_obj();
	_result_->__construct(renderSession);
	return _result_;}

Dynamic AbstractFilterManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AbstractFilterManager_obj > _result_ = new AbstractFilterManager_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::openfl::display::Shader AbstractFilterManager_obj::pushObject( ::openfl::display::DisplayObject object){
	HX_STACK_FRAME("openfl._internal.renderer.AbstractFilterManager","pushObject",0x3dc70aef,"openfl._internal.renderer.AbstractFilterManager.pushObject","openfl/_internal/renderer/AbstractFilterManager.hx",26,0x8a413d45)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_LINE(26)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractFilterManager_obj,pushObject,return )

Void AbstractFilterManager_obj::popObject( ::openfl::display::DisplayObject object){
{
		HX_STACK_FRAME("openfl._internal.renderer.AbstractFilterManager","popObject",0xf9faf53a,"openfl._internal.renderer.AbstractFilterManager.popObject","openfl/_internal/renderer/AbstractFilterManager.hx",31,0x8a413d45)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractFilterManager_obj,popObject,(void))


AbstractFilterManager_obj::AbstractFilterManager_obj()
{
}

void AbstractFilterManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AbstractFilterManager);
	HX_MARK_MEMBER_NAME(renderSession,"renderSession");
	HX_MARK_END_CLASS();
}

void AbstractFilterManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(renderSession,"renderSession");
}

Dynamic AbstractFilterManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"popObject") ) { return popObject_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pushObject") ) { return pushObject_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderSession") ) { return renderSession; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AbstractFilterManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"renderSession") ) { renderSession=inValue.Cast< ::openfl::_internal::renderer::RenderSession >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AbstractFilterManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_internal::renderer::RenderSession*/ ,(int)offsetof(AbstractFilterManager_obj,renderSession),HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f"),
	HX_HCSTRING("pushObject","\x39","\xe4","\x1e","\x69"),
	HX_HCSTRING("popObject","\x30","\x53","\xb5","\x91"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AbstractFilterManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AbstractFilterManager_obj::__mClass,"__mClass");
};

#endif

hx::Class AbstractFilterManager_obj::__mClass;

void AbstractFilterManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.AbstractFilterManager","\xf8","\xf1","\x74","\x47");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AbstractFilterManager_obj >;
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
