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
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLShape
#include <openfl/_internal/renderer/opengl/GLShape.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

Void GLShape_obj::__construct()
{
	return null();
}

//GLShape_obj::~GLShape_obj() { }

Dynamic GLShape_obj::__CreateEmpty() { return  new GLShape_obj; }
hx::ObjectPtr< GLShape_obj > GLShape_obj::__new()
{  hx::ObjectPtr< GLShape_obj > _result_ = new GLShape_obj();
	_result_->__construct();
	return _result_;}

Dynamic GLShape_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLShape_obj > _result_ = new GLShape_obj();
	_result_->__construct();
	return _result_;}

Void GLShape_obj::render( ::openfl::display::DisplayObject shape,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLShape","render",0x6f8c5eac,"openfl._internal.renderer.opengl.GLShape.render","openfl/_internal/renderer/opengl/GLShape.hx",21,0xf928bb48)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(23)
		bool tmp = shape->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(23)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(23)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(23)
		if ((tmp3)){
			HX_STACK_LINE(23)
			tmp4 = (shape->__worldAlpha <= (int)0);
		}
		else{
			HX_STACK_LINE(23)
			tmp4 = true;
		}
		HX_STACK_LINE(23)
		if ((tmp4)){
			HX_STACK_LINE(23)
			return null();
		}
		HX_STACK_LINE(25)
		::openfl::display::Graphics graphics = shape->__graphics;		HX_STACK_VAR(graphics,"graphics");
		HX_STACK_LINE(27)
		bool tmp5 = (graphics != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(27)
		if ((tmp5)){
			HX_STACK_LINE(32)
			::openfl::display::Graphics tmp6 = graphics;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(32)
			::openfl::_internal::renderer::RenderSession tmp7 = renderSession;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(32)
			::openfl::geom::Matrix tmp8 = shape->__renderTransform;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(32)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::render(tmp6,tmp7,tmp8);
			HX_STACK_LINE(35)
			::openfl::geom::Rectangle bounds = graphics->__bounds;		HX_STACK_VAR(bounds,"bounds");
			HX_STACK_LINE(37)
			bool tmp9 = (graphics->__bitmap != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(37)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(37)
			if ((tmp9)){
				HX_STACK_LINE(37)
				tmp10 = graphics->__visible;
			}
			else{
				HX_STACK_LINE(37)
				tmp10 = false;
			}
			HX_STACK_LINE(37)
			if ((tmp10)){
				HX_STACK_LINE(39)
				::openfl::_internal::renderer::opengl::GLRenderer renderer = ((::openfl::_internal::renderer::opengl::GLRenderer)(renderSession->renderer));		HX_STACK_VAR(renderer,"renderer");
				HX_STACK_LINE(40)
				::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
				HX_STACK_LINE(42)
				Dynamic tmp11 = shape->get_blendMode();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(42)
				renderSession->blendModeManager->setBlendMode(tmp11);
				HX_STACK_LINE(43)
				::openfl::display::DisplayObject tmp12 = shape;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(43)
				renderSession->maskManager->pushObject(tmp12,null());
				HX_STACK_LINE(45)
				::openfl::display::DisplayObject tmp13 = shape;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(45)
				::openfl::display::Shader tmp14 = renderSession->filterManager->pushObject(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(45)
				::openfl::display::Shader shader = tmp14;		HX_STACK_VAR(shader,"shader");
				HX_STACK_LINE(47)
				::openfl::display::ShaderData tmp15 = shader->get_data();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(47)
				tmp15->uImage0->input = graphics->__bitmap;
				HX_STACK_LINE(48)
				::openfl::display::ShaderData tmp16 = shader->get_data();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(48)
				tmp16->uImage0->smoothing = renderSession->allowSmoothing;
				HX_STACK_LINE(49)
				::openfl::geom::Matrix tmp17 = graphics->__worldTransform;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(49)
				::openfl::display::ShaderData tmp18 = shader->get_data();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(49)
				tmp18->uMatrix->value = renderer->getMatrix(tmp17);
				HX_STACK_LINE(51)
				::openfl::display::Shader tmp19 = shader;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(51)
				renderSession->shaderManager->setShader(tmp19);
				HX_STACK_LINE(53)
				{
					HX_STACK_LINE(53)
					::lime::graphics::GLRenderContext tmp20 = gl;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(53)
					Float tmp21 = shape->__worldAlpha;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(53)
					::lime::graphics::opengl::GLBuffer tmp22 = graphics->__bitmap->getBuffer(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(53)
					::lime::graphics::opengl::GLBuffer buffer = tmp22;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(53)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(gl->ARRAY_BUFFER,hx::DynamicPtr((  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) )));
				}
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					::openfl::display::ShaderData tmp20 = shader->get_data();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(54)
					int tmp21 = tmp20->aPosition->index;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(54)
					int indx = tmp21;		HX_STACK_VAR(indx,"indx");
					HX_STACK_LINE(54)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer.call(indx,(int)3,gl->FLOAT,false,(int)24,(int)0);
				}
				HX_STACK_LINE(55)
				{
					HX_STACK_LINE(55)
					::openfl::display::ShaderData tmp20 = shader->get_data();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(55)
					int tmp21 = tmp20->aTexCoord->index;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(55)
					int indx = tmp21;		HX_STACK_VAR(indx,"indx");
					HX_STACK_LINE(55)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer.call(indx,(int)2,gl->FLOAT,false,(int)24,(int)12);
				}
				HX_STACK_LINE(56)
				{
					HX_STACK_LINE(56)
					::openfl::display::ShaderData tmp20 = shader->get_data();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(56)
					int tmp21 = tmp20->aAlpha->index;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(56)
					int indx = tmp21;		HX_STACK_VAR(indx,"indx");
					HX_STACK_LINE(56)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer.call(indx,(int)1,gl->FLOAT,false,(int)24,(int)20);
				}
				HX_STACK_LINE(58)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_draw_arrays.call(gl->TRIANGLE_STRIP,(int)0,(int)4);
				HX_STACK_LINE(60)
				::openfl::display::DisplayObject tmp20 = shape;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(60)
				renderSession->filterManager->popObject(tmp20);
				HX_STACK_LINE(61)
				::openfl::display::DisplayObject tmp21 = shape;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(61)
				renderSession->maskManager->popObject(tmp21,null());
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLShape_obj,render,(void))


GLShape_obj::GLShape_obj()
{
}

bool GLShape_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(GLShape_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLShape_obj::__mClass,"__mClass");
};

#endif

hx::Class GLShape_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

void GLShape_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLShape","\x58","\x5e","\x97","\x4e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLShape_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLShape_obj >;
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
