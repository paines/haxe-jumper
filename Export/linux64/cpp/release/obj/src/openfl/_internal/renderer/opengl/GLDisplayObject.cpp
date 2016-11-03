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
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLDisplayObject
#include <openfl/_internal/renderer/opengl/GLDisplayObject.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
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

Void GLDisplayObject_obj::__construct()
{
	return null();
}

//GLDisplayObject_obj::~GLDisplayObject_obj() { }

Dynamic GLDisplayObject_obj::__CreateEmpty() { return  new GLDisplayObject_obj; }
hx::ObjectPtr< GLDisplayObject_obj > GLDisplayObject_obj::__new()
{  hx::ObjectPtr< GLDisplayObject_obj > _result_ = new GLDisplayObject_obj();
	_result_->__construct();
	return _result_;}

Dynamic GLDisplayObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLDisplayObject_obj > _result_ = new GLDisplayObject_obj();
	_result_->__construct();
	return _result_;}

Void GLDisplayObject_obj::render( ::openfl::display::DisplayObject displayObject,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLDisplayObject","render",0xfc18482c,"openfl._internal.renderer.opengl.GLDisplayObject.render","openfl/_internal/renderer/opengl/GLDisplayObject.hx",17,0xe7a796c8)
		HX_STACK_ARG(displayObject,"displayObject")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(19)
		bool tmp = (displayObject->opaqueBackground == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(19)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(19)
		if ((tmp)){
			HX_STACK_LINE(19)
			tmp1 = (displayObject->__graphics == null());
		}
		else{
			HX_STACK_LINE(19)
			tmp1 = false;
		}
		HX_STACK_LINE(19)
		if ((tmp1)){
			HX_STACK_LINE(19)
			return null();
		}
		HX_STACK_LINE(20)
		bool tmp2 = displayObject->__renderable;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(20)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(20)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(20)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(20)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(20)
		if ((tmp5)){
			HX_STACK_LINE(20)
			tmp6 = (displayObject->__worldAlpha <= (int)0);
		}
		else{
			HX_STACK_LINE(20)
			tmp6 = true;
		}
		HX_STACK_LINE(20)
		if ((tmp6)){
			HX_STACK_LINE(20)
			return null();
		}
		HX_STACK_LINE(22)
		bool tmp7 = (displayObject->opaqueBackground != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(22)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(22)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(22)
		if ((tmp8)){
			HX_STACK_LINE(22)
			Float tmp10 = displayObject->get_width();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(22)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(22)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(22)
			tmp9 = (tmp12 > (int)0);
		}
		else{
			HX_STACK_LINE(22)
			tmp9 = false;
		}
		HX_STACK_LINE(22)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(22)
		if ((tmp9)){
			HX_STACK_LINE(22)
			Float tmp11 = displayObject->get_height();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(22)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(22)
			tmp10 = (tmp12 > (int)0);
		}
		else{
			HX_STACK_LINE(22)
			tmp10 = false;
		}
		HX_STACK_LINE(22)
		if ((tmp10)){
			HX_STACK_LINE(24)
			::openfl::display::DisplayObject tmp11 = displayObject;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(24)
			renderSession->maskManager->pushObject(tmp11,null());
			HX_STACK_LINE(26)
			::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
			HX_STACK_LINE(28)
			::openfl::geom::Rectangle tmp12 = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(28)
			::openfl::geom::Rectangle rect = tmp12;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(29)
			Float tmp13 = displayObject->get_width();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(29)
			Float tmp14 = displayObject->get_height();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(29)
			rect->setTo((int)0,(int)0,tmp13,tmp14);
			HX_STACK_LINE(30)
			::openfl::geom::Rectangle tmp15 = rect;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(30)
			::openfl::geom::Matrix tmp16 = displayObject->__renderTransform;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(30)
			renderSession->maskManager->pushRect(tmp15,tmp16);
			HX_STACK_LINE(32)
			int color = ((int)(displayObject->opaqueBackground));		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(33)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear_color.call((Float(((int((int(color) >> int((int)16))) & int((int)255)))) / Float((int)255)),(Float(((int((int(color) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(color) & int((int)255)))) / Float((int)255)),(int)1);
			HX_STACK_LINE(34)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear.call(gl->COLOR_BUFFER_BIT);
			HX_STACK_LINE(36)
			renderSession->maskManager->popRect();
			HX_STACK_LINE(37)
			::openfl::display::DisplayObject tmp17 = displayObject;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(37)
			renderSession->maskManager->popObject(tmp17,null());
		}
		HX_STACK_LINE(41)
		bool tmp11 = (displayObject->__graphics != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(41)
		if ((tmp11)){
			HX_STACK_LINE(43)
			bool tmp12 = displayObject->__renderable;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(43)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(43)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(43)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(43)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(43)
			if ((tmp15)){
				HX_STACK_LINE(43)
				tmp16 = (displayObject->__worldAlpha <= (int)0);
			}
			else{
				HX_STACK_LINE(43)
				tmp16 = true;
			}
			HX_STACK_LINE(43)
			if ((tmp16)){
				HX_STACK_LINE(43)
				Dynamic();
			}
			else{
				HX_STACK_LINE(43)
				::openfl::display::Graphics graphics = displayObject->__graphics;		HX_STACK_VAR(graphics,"graphics");
				HX_STACK_LINE(43)
				bool tmp17 = (graphics != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(43)
				if ((tmp17)){
					HX_STACK_LINE(43)
					::openfl::display::Graphics tmp18 = graphics;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(43)
					::openfl::_internal::renderer::RenderSession tmp19 = renderSession;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(43)
					::openfl::geom::Matrix tmp20 = displayObject->__renderTransform;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(43)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::render(tmp18,tmp19,tmp20);
					HX_STACK_LINE(43)
					::openfl::geom::Rectangle bounds = graphics->__bounds;		HX_STACK_VAR(bounds,"bounds");
					HX_STACK_LINE(43)
					bool tmp21 = (graphics->__bitmap != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(43)
					bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(43)
					if ((tmp21)){
						HX_STACK_LINE(43)
						tmp22 = graphics->__visible;
					}
					else{
						HX_STACK_LINE(43)
						tmp22 = false;
					}
					HX_STACK_LINE(43)
					if ((tmp22)){
						HX_STACK_LINE(43)
						::openfl::_internal::renderer::opengl::GLRenderer renderer = ((::openfl::_internal::renderer::opengl::GLRenderer)(renderSession->renderer));		HX_STACK_VAR(renderer,"renderer");
						HX_STACK_LINE(43)
						::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
						HX_STACK_LINE(43)
						Dynamic tmp23 = displayObject->get_blendMode();		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(43)
						renderSession->blendModeManager->setBlendMode(tmp23);
						HX_STACK_LINE(43)
						::openfl::display::DisplayObject tmp24 = displayObject;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(43)
						renderSession->maskManager->pushObject(tmp24,null());
						HX_STACK_LINE(43)
						::openfl::display::DisplayObject tmp25 = displayObject;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(43)
						::openfl::display::Shader tmp26 = renderSession->filterManager->pushObject(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(43)
						::openfl::display::Shader shader = tmp26;		HX_STACK_VAR(shader,"shader");
						HX_STACK_LINE(43)
						::openfl::display::ShaderData tmp27 = shader->get_data();		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(43)
						tmp27->uImage0->input = graphics->__bitmap;
						HX_STACK_LINE(43)
						::openfl::display::ShaderData tmp28 = shader->get_data();		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(43)
						tmp28->uImage0->smoothing = renderSession->allowSmoothing;
						HX_STACK_LINE(43)
						::openfl::geom::Matrix tmp29 = graphics->__worldTransform;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(43)
						::openfl::display::ShaderData tmp30 = shader->get_data();		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(43)
						tmp30->uMatrix->value = renderer->getMatrix(tmp29);
						HX_STACK_LINE(43)
						::openfl::display::Shader tmp31 = shader;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(43)
						renderSession->shaderManager->setShader(tmp31);
						HX_STACK_LINE(43)
						{
							HX_STACK_LINE(43)
							::lime::graphics::GLRenderContext tmp32 = gl;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(43)
							Float tmp33 = displayObject->__worldAlpha;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(43)
							::lime::graphics::opengl::GLBuffer tmp34 = graphics->__bitmap->getBuffer(tmp32,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(43)
							::lime::graphics::opengl::GLBuffer buffer = tmp34;		HX_STACK_VAR(buffer,"buffer");
							HX_STACK_LINE(43)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(gl->ARRAY_BUFFER,hx::DynamicPtr((  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) )));
						}
						HX_STACK_LINE(43)
						{
							HX_STACK_LINE(43)
							::openfl::display::ShaderData tmp32 = shader->get_data();		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(43)
							int tmp33 = tmp32->aPosition->index;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(43)
							int indx = tmp33;		HX_STACK_VAR(indx,"indx");
							HX_STACK_LINE(43)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer.call(indx,(int)3,gl->FLOAT,false,(int)24,(int)0);
						}
						HX_STACK_LINE(43)
						{
							HX_STACK_LINE(43)
							::openfl::display::ShaderData tmp32 = shader->get_data();		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(43)
							int tmp33 = tmp32->aTexCoord->index;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(43)
							int indx = tmp33;		HX_STACK_VAR(indx,"indx");
							HX_STACK_LINE(43)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer.call(indx,(int)2,gl->FLOAT,false,(int)24,(int)12);
						}
						HX_STACK_LINE(43)
						{
							HX_STACK_LINE(43)
							::openfl::display::ShaderData tmp32 = shader->get_data();		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(43)
							int tmp33 = tmp32->aAlpha->index;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(43)
							int indx = tmp33;		HX_STACK_VAR(indx,"indx");
							HX_STACK_LINE(43)
							::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer.call(indx,(int)1,gl->FLOAT,false,(int)24,(int)20);
						}
						HX_STACK_LINE(43)
						::lime::graphics::opengl::GL_obj::cffi_lime_gl_draw_arrays.call(gl->TRIANGLE_STRIP,(int)0,(int)4);
						HX_STACK_LINE(43)
						::openfl::display::DisplayObject tmp32 = displayObject;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(43)
						renderSession->filterManager->popObject(tmp32);
						HX_STACK_LINE(43)
						::openfl::display::DisplayObject tmp33 = displayObject;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(43)
						renderSession->maskManager->popObject(tmp33,null());
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLDisplayObject_obj,render,(void))


GLDisplayObject_obj::GLDisplayObject_obj()
{
}

bool GLDisplayObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(GLDisplayObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLDisplayObject_obj::__mClass,"__mClass");
};

#endif

hx::Class GLDisplayObject_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

void GLDisplayObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLDisplayObject","\xd8","\x44","\x6d","\x02");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLDisplayObject_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLDisplayObject_obj >;
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
