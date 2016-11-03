#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractFilterManager
#include <openfl/_internal/renderer/AbstractFilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractShaderManager
#include <openfl/_internal/renderer/AbstractShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLFilterManager
#include <openfl/_internal/renderer/opengl/GLFilterManager.h>
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
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

Void GLFilterManager_obj::__construct(::openfl::_internal::renderer::RenderSession renderSession)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.GLFilterManager","new",0xa57802be,"openfl._internal.renderer.opengl.GLFilterManager.new","openfl/_internal/renderer/opengl/GLFilterManager.hx",21,0xef502054)
HX_STACK_THIS(this)
HX_STACK_ARG(renderSession,"renderSession")
{
	HX_STACK_LINE(23)
	::openfl::_internal::renderer::RenderSession tmp = renderSession;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	super::__construct(tmp);
	HX_STACK_LINE(25)
	this->gl = renderSession->gl;
}
;
	return null();
}

//GLFilterManager_obj::~GLFilterManager_obj() { }

Dynamic GLFilterManager_obj::__CreateEmpty() { return  new GLFilterManager_obj; }
hx::ObjectPtr< GLFilterManager_obj > GLFilterManager_obj::__new(::openfl::_internal::renderer::RenderSession renderSession)
{  hx::ObjectPtr< GLFilterManager_obj > _result_ = new GLFilterManager_obj();
	_result_->__construct(renderSession);
	return _result_;}

Dynamic GLFilterManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLFilterManager_obj > _result_ = new GLFilterManager_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::openfl::display::Shader GLFilterManager_obj::pushObject( ::openfl::display::DisplayObject object){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLFilterManager","pushObject",0x4b4ad99b,"openfl._internal.renderer.opengl.GLFilterManager.pushObject","openfl/_internal/renderer/opengl/GLFilterManager.hx",30,0xef502054)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_LINE(32)
	bool tmp = (object->__filters != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	if ((tmp)){
		HX_STACK_LINE(32)
		int tmp2 = object->__filters->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(32)
		int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(32)
		tmp1 = (tmp3 > (int)0);
	}
	else{
		HX_STACK_LINE(32)
		tmp1 = false;
	}
	HX_STACK_LINE(32)
	if ((tmp1)){
		HX_STACK_LINE(34)
		::openfl::filters::BitmapFilter tmp2 = object->__filters->__get((int)0).StaticCast< ::openfl::filters::BitmapFilter >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		::openfl::_internal::renderer::RenderSession tmp3 = this->renderSession;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		::openfl::display::Shader tmp4 = tmp2->__initShader(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(34)
		return tmp4;
	}
	else{
		HX_STACK_LINE(38)
		::openfl::_internal::renderer::RenderSession tmp2 = this->renderSession;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		::openfl::display::Shader tmp3 = tmp2->shaderManager->defaultShader;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		return tmp3;
	}
	HX_STACK_LINE(32)
	return null();
}


Void GLFilterManager_obj::popObject( ::openfl::display::DisplayObject object){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLFilterManager","popObject",0x1feca00e,"openfl._internal.renderer.opengl.GLFilterManager.popObject","openfl/_internal/renderer/opengl/GLFilterManager.hx",45,0xef502054)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
	}
return null();
}



GLFilterManager_obj::GLFilterManager_obj()
{
}

void GLFilterManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLFilterManager);
	HX_MARK_MEMBER_NAME(gl,"gl");
	::openfl::_internal::renderer::AbstractFilterManager_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GLFilterManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gl,"gl");
	::openfl::_internal::renderer::AbstractFilterManager_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GLFilterManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"popObject") ) { return popObject_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pushObject") ) { return pushObject_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLFilterManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLFilterManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(GLFilterManager_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("pushObject","\x39","\xe4","\x1e","\x69"),
	HX_HCSTRING("popObject","\x30","\x53","\xb5","\x91"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLFilterManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLFilterManager_obj::__mClass,"__mClass");
};

#endif

hx::Class GLFilterManager_obj::__mClass;

void GLFilterManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLFilterManager","\xcc","\x8b","\x5c","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLFilterManager_obj >;
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
} // end namespace opengl
