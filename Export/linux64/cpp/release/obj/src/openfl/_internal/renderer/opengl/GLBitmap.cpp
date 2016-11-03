#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractFilterManager
#include <openfl/_internal/renderer/AbstractFilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractShaderManager
#include <openfl/_internal/renderer/AbstractShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLBitmap
#include <openfl/_internal/renderer/opengl/GLBitmap.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_ShaderData
#include <openfl/display/ShaderData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
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
namespace opengl{

Void GLBitmap_obj::__construct()
{
	return null();
}

//GLBitmap_obj::~GLBitmap_obj() { }

Dynamic GLBitmap_obj::__CreateEmpty() { return  new GLBitmap_obj; }
hx::ObjectPtr< GLBitmap_obj > GLBitmap_obj::__new()
{  hx::ObjectPtr< GLBitmap_obj > _result_ = new GLBitmap_obj();
	_result_->__construct();
	return _result_;}

Dynamic GLBitmap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLBitmap_obj > _result_ = new GLBitmap_obj();
	_result_->__construct();
	return _result_;}

Void GLBitmap_obj::render( ::openfl::display::Bitmap bitmap,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLBitmap","render",0x8d0c282c,"openfl._internal.renderer.opengl.GLBitmap.render","openfl/_internal/renderer/opengl/GLBitmap.hx",17,0x02850ac4)
		HX_STACK_ARG(bitmap,"bitmap")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(19)
		bool tmp = bitmap->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(19)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(19)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(19)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(19)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(19)
		if ((tmp3)){
			HX_STACK_LINE(19)
			tmp4 = (bitmap->__worldAlpha <= (int)0);
		}
		else{
			HX_STACK_LINE(19)
			tmp4 = true;
		}
		HX_STACK_LINE(19)
		if ((tmp4)){
			HX_STACK_LINE(19)
			return null();
		}
		HX_STACK_LINE(21)
		bool tmp5 = (bitmap->bitmapData != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(21)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(21)
		if ((tmp5)){
			HX_STACK_LINE(21)
			tmp6 = bitmap->bitmapData->__isValid;
		}
		else{
			HX_STACK_LINE(21)
			tmp6 = false;
		}
		HX_STACK_LINE(21)
		if ((tmp6)){
			HX_STACK_LINE(23)
			::openfl::_internal::renderer::opengl::GLRenderer renderer = ((::openfl::_internal::renderer::opengl::GLRenderer)(renderSession->renderer));		HX_STACK_VAR(renderer,"renderer");
			HX_STACK_LINE(24)
			::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
			HX_STACK_LINE(26)
			Dynamic tmp7 = bitmap->get_blendMode();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(26)
			renderSession->blendModeManager->setBlendMode(tmp7);
			HX_STACK_LINE(27)
			::openfl::display::Bitmap tmp8 = bitmap;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(27)
			renderSession->maskManager->pushObject(tmp8,null());
			HX_STACK_LINE(29)
			::openfl::display::Bitmap tmp9 = bitmap;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(29)
			::openfl::display::Shader tmp10 = renderSession->filterManager->pushObject(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(29)
			::openfl::display::Shader shader = tmp10;		HX_STACK_VAR(shader,"shader");
			HX_STACK_LINE(31)
			::openfl::display::ShaderData tmp11 = shader->get_data();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(31)
			tmp11->uImage0->input = bitmap->bitmapData;
			HX_STACK_LINE(32)
			bool tmp12 = renderSession->allowSmoothing;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(32)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(32)
			if ((tmp12)){
				HX_STACK_LINE(32)
				bool tmp14 = bitmap->smoothing;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(32)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(32)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(32)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(32)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(32)
				if ((tmp18)){
					HX_STACK_LINE(32)
					tmp13 = renderSession->upscaled;
				}
				else{
					HX_STACK_LINE(32)
					tmp13 = true;
				}
			}
			else{
				HX_STACK_LINE(32)
				tmp13 = false;
			}
			HX_STACK_LINE(32)
			::openfl::display::ShaderData tmp14 = shader->get_data();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(32)
			tmp14->uImage0->smoothing = tmp13;
			HX_STACK_LINE(33)
			::openfl::geom::Matrix tmp15 = bitmap->__renderTransform;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(33)
			::openfl::display::ShaderData tmp16 = shader->get_data();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(33)
			tmp16->uMatrix->value = renderer->getMatrix(tmp15);
			HX_STACK_LINE(35)
			::openfl::display::Shader tmp17 = shader;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(35)
			renderSession->shaderManager->setShader(tmp17);
			HX_STACK_LINE(37)
			{
				HX_STACK_LINE(37)
				::lime::graphics::GLRenderContext tmp18 = gl;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(37)
				Float tmp19 = bitmap->__worldAlpha;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(37)
				::lime::graphics::opengl::GLBuffer tmp20 = bitmap->bitmapData->getBuffer(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(37)
				::lime::graphics::opengl::GLBuffer buffer = tmp20;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(37)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(gl->ARRAY_BUFFER,hx::DynamicPtr((  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) )));
			}
			HX_STACK_LINE(38)
			{
				HX_STACK_LINE(38)
				::openfl::display::ShaderData tmp18 = shader->get_data();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(38)
				int tmp19 = tmp18->aPosition->index;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(38)
				int indx = tmp19;		HX_STACK_VAR(indx,"indx");
				HX_STACK_LINE(38)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer.call(indx,(int)3,gl->FLOAT,false,(int)24,(int)0);
			}
			HX_STACK_LINE(39)
			{
				HX_STACK_LINE(39)
				::openfl::display::ShaderData tmp18 = shader->get_data();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(39)
				int tmp19 = tmp18->aTexCoord->index;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(39)
				int indx = tmp19;		HX_STACK_VAR(indx,"indx");
				HX_STACK_LINE(39)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer.call(indx,(int)2,gl->FLOAT,false,(int)24,(int)12);
			}
			HX_STACK_LINE(40)
			{
				HX_STACK_LINE(40)
				::openfl::display::ShaderData tmp18 = shader->get_data();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(40)
				int tmp19 = tmp18->aAlpha->index;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(40)
				int indx = tmp19;		HX_STACK_VAR(indx,"indx");
				HX_STACK_LINE(40)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer.call(indx,(int)1,gl->FLOAT,false,(int)24,(int)20);
			}
			HX_STACK_LINE(42)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_draw_arrays.call(gl->TRIANGLE_STRIP,(int)0,(int)4);
			HX_STACK_LINE(44)
			::openfl::display::Bitmap tmp18 = bitmap;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(44)
			renderSession->filterManager->popObject(tmp18);
			HX_STACK_LINE(45)
			::openfl::display::Bitmap tmp19 = bitmap;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(45)
			renderSession->maskManager->popObject(tmp19,null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLBitmap_obj,render,(void))


GLBitmap_obj::GLBitmap_obj()
{
}

bool GLBitmap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(GLBitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLBitmap_obj::__mClass,"__mClass");
};

#endif

hx::Class GLBitmap_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

void GLBitmap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLBitmap","\xd8","\x64","\xbd","\x49");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLBitmap_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLBitmap_obj >;
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
