#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_math__Matrix4_Matrix4_Impl_
#include <lime/math/_Matrix4/Matrix4_Impl_.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
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
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLBlendModeManager
#include <openfl/_internal/renderer/opengl/GLBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLFilterManager
#include <openfl/_internal/renderer/opengl/GLFilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLMaskManager
#include <openfl/_internal/renderer/opengl/GLMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLShaderManager
#include <openfl/_internal/renderer/opengl/GLShaderManager.h>
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
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
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

Void GLRenderer_obj::__construct(::openfl::display::Stage stage,::lime::graphics::GLRenderContext gl)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","new",0xb6a82d5e,"openfl._internal.renderer.opengl.GLRenderer.new","openfl/_internal/renderer/opengl/GLRenderer.hx",32,0xb2b97130)
HX_STACK_THIS(this)
HX_STACK_ARG(stage,"stage")
HX_STACK_ARG(gl,"gl")
{
	HX_STACK_LINE(34)
	::openfl::display::Stage tmp = stage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	super::__construct(tmp);
	HX_STACK_LINE(36)
	this->gl = gl;
	HX_STACK_LINE(37)
	::lime::utils::ArrayBufferView tmp1 = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	this->matrix = tmp1;
	HX_STACK_LINE(38)
	this->values = Array_obj< Float >::__new();
	HX_STACK_LINE(40)
	::openfl::_internal::renderer::RenderSession tmp2 = ::openfl::_internal::renderer::RenderSession_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	this->renderSession = tmp2;
	HX_STACK_LINE(41)
	::openfl::_internal::renderer::RenderSession tmp3 = this->renderSession;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(41)
	tmp3->gl = gl;
	HX_STACK_LINE(42)
	::openfl::_internal::renderer::RenderSession tmp4 = this->renderSession;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(42)
	tmp4->roundPixels = true;
	HX_STACK_LINE(43)
	::openfl::_internal::renderer::RenderSession tmp5 = this->renderSession;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(43)
	tmp5->renderer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(44)
	::openfl::_internal::renderer::opengl::GLBlendModeManager tmp6 = ::openfl::_internal::renderer::opengl::GLBlendModeManager_obj::__new(gl);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(44)
	::openfl::_internal::renderer::RenderSession tmp7 = this->renderSession;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(44)
	tmp7->blendModeManager = tmp6;
	HX_STACK_LINE(45)
	::openfl::_internal::renderer::RenderSession tmp8 = this->renderSession;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(45)
	::openfl::_internal::renderer::opengl::GLFilterManager tmp9 = ::openfl::_internal::renderer::opengl::GLFilterManager_obj::__new(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(45)
	::openfl::_internal::renderer::RenderSession tmp10 = this->renderSession;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(45)
	tmp10->filterManager = tmp9;
	HX_STACK_LINE(46)
	::openfl::_internal::renderer::opengl::GLShaderManager tmp11 = ::openfl::_internal::renderer::opengl::GLShaderManager_obj::__new(gl);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(46)
	::openfl::_internal::renderer::RenderSession tmp12 = this->renderSession;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(46)
	tmp12->shaderManager = tmp11;
	HX_STACK_LINE(47)
	::openfl::_internal::renderer::RenderSession tmp13 = this->renderSession;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(47)
	::openfl::_internal::renderer::opengl::GLMaskManager tmp14 = ::openfl::_internal::renderer::opengl::GLMaskManager_obj::__new(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(47)
	::openfl::_internal::renderer::RenderSession tmp15 = this->renderSession;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(47)
	tmp15->maskManager = tmp14;
	HX_STACK_LINE(49)
	bool tmp16 = (stage->window != null());		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(49)
	if ((tmp16)){
		HX_STACK_LINE(51)
		int tmp17 = stage->window->__width;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(51)
		int tmp18 = stage->window->__height;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(51)
		this->resize(tmp17,tmp18);
	}
}
;
	return null();
}

//GLRenderer_obj::~GLRenderer_obj() { }

Dynamic GLRenderer_obj::__CreateEmpty() { return  new GLRenderer_obj; }
hx::ObjectPtr< GLRenderer_obj > GLRenderer_obj::__new(::openfl::display::Stage stage,::lime::graphics::GLRenderContext gl)
{  hx::ObjectPtr< GLRenderer_obj > _result_ = new GLRenderer_obj();
	_result_->__construct(stage,gl);
	return _result_;}

Dynamic GLRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLRenderer_obj > _result_ = new GLRenderer_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void GLRenderer_obj::clear( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","clear",0x823f8a0b,"openfl._internal.renderer.opengl.GLRenderer.clear","openfl/_internal/renderer/opengl/GLRenderer.hx",58,0xb2b97130)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		bool tmp1 = tmp->__transparent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(60)
		if ((tmp1)){
			HX_STACK_LINE(62)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear_color.call((int)0,(int)0,(int)0,(int)0);
		}
		else{
			HX_STACK_LINE(66)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear_color.call(this->stage->__colorSplit->__get((int)0),this->stage->__colorSplit->__get((int)1),this->stage->__colorSplit->__get((int)2),(int)1);
		}
		HX_STACK_LINE(70)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear.call(this->gl->COLOR_BUFFER_BIT);
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(72)
			::openfl::display::Stage tmp2 = this->stage;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(72)
			::openfl::_Vector::ObjectVector _g1 = tmp2->stage3Ds;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(72)
			while((true)){
				HX_STACK_LINE(72)
				int tmp3 = _g;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(72)
				int tmp4 = _g1->get_length();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(72)
				bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(72)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(72)
				if ((tmp6)){
					HX_STACK_LINE(72)
					break;
				}
				HX_STACK_LINE(72)
				int tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(72)
				::openfl::display::Stage3D tmp8 = _g1->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(72)
				::openfl::display::Stage3D stage3D = tmp8;		HX_STACK_VAR(stage3D,"stage3D");
				HX_STACK_LINE(72)
				++(_g);
				HX_STACK_LINE(74)
				bool tmp9 = (stage3D->context3D != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(74)
				if ((tmp9)){
					HX_STACK_LINE(76)
					::openfl::_internal::renderer::RenderSession tmp10 = this->renderSession;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(76)
					tmp10->blendModeManager->setBlendMode(null());
					HX_STACK_LINE(78)
					::openfl::_internal::renderer::RenderSession tmp11 = this->renderSession;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(78)
					::openfl::display::Shader tmp12 = tmp11->shaderManager->currentShader;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(78)
					bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(78)
					if ((tmp13)){
						HX_STACK_LINE(80)
						::openfl::_internal::renderer::RenderSession tmp14 = this->renderSession;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(80)
						tmp14->shaderManager->setShader(null());
						HX_STACK_LINE(82)
						::openfl::display3D::Program3D tmp15 = stage3D->context3D->__program;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(82)
						bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(82)
						if ((tmp16)){
							HX_STACK_LINE(84)
							::openfl::display3D::Program3D tmp17 = stage3D->context3D->__program;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(84)
							tmp17->__use();
						}
					}
				}
			}
		}
	}
return null();
}


Array< Float > GLRenderer_obj::getMatrix( ::openfl::geom::Matrix transform){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","getMatrix",0x5e6beef5,"openfl._internal.renderer.opengl.GLRenderer.getMatrix","openfl/_internal/renderer/opengl/GLRenderer.hx",97,0xb2b97130)
	HX_STACK_THIS(this)
	HX_STACK_ARG(transform,"transform")
	HX_STACK_LINE(99)
	::openfl::geom::Matrix tmp = ::openfl::geom::Matrix_obj::__temp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	::openfl::geom::Matrix _matrix = tmp;		HX_STACK_VAR(_matrix,"_matrix");
	HX_STACK_LINE(100)
	::openfl::geom::Matrix tmp1 = transform;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	_matrix->copyFrom(tmp1);
	HX_STACK_LINE(101)
	::openfl::geom::Matrix tmp2 = this->displayMatrix;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(101)
	_matrix->concat(tmp2);
	HX_STACK_LINE(103)
	::openfl::_internal::renderer::RenderSession tmp3 = this->renderSession;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(103)
	bool tmp4 = tmp3->roundPixels;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(103)
	if ((tmp4)){
		HX_STACK_LINE(105)
		Float tmp5 = _matrix->tx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(105)
		int tmp6 = ::Math_obj::round(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(105)
		_matrix->tx = tmp6;
		HX_STACK_LINE(106)
		Float tmp7 = _matrix->ty;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(106)
		int tmp8 = ::Math_obj::round(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(106)
		_matrix->ty = tmp8;
	}
	HX_STACK_LINE(110)
	::lime::utils::ArrayBufferView tmp5 = this->matrix;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(110)
	::lime::math::_Matrix4::Matrix4_Impl__obj::identity(tmp5);
	HX_STACK_LINE(111)
	::lime::utils::ArrayBufferView tmp6 = this->matrix;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(111)
	Float tmp7 = _matrix->a;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(111)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp6,(int)0,tmp7);
	HX_STACK_LINE(112)
	::lime::utils::ArrayBufferView tmp8 = this->matrix;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(112)
	Float tmp9 = _matrix->b;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(112)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp8,(int)1,tmp9);
	HX_STACK_LINE(113)
	::lime::utils::ArrayBufferView tmp10 = this->matrix;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(113)
	Float tmp11 = _matrix->c;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(113)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp10,(int)4,tmp11);
	HX_STACK_LINE(114)
	::lime::utils::ArrayBufferView tmp12 = this->matrix;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(114)
	Float tmp13 = _matrix->d;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(114)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp12,(int)5,tmp13);
	HX_STACK_LINE(115)
	::lime::utils::ArrayBufferView tmp14 = this->matrix;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(115)
	Float tmp15 = _matrix->tx;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(115)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp14,(int)12,tmp15);
	HX_STACK_LINE(116)
	::lime::utils::ArrayBufferView tmp16 = this->matrix;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(116)
	Float tmp17 = _matrix->ty;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(116)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp16,(int)13,tmp17);
	HX_STACK_LINE(117)
	::lime::utils::ArrayBufferView tmp18 = this->matrix;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(117)
	::lime::utils::ArrayBufferView tmp19 = this->projection;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(117)
	::lime::math::_Matrix4::Matrix4_Impl__obj::append(tmp18,tmp19);
	HX_STACK_LINE(119)
	{
		HX_STACK_LINE(119)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(119)
		while((true)){
			HX_STACK_LINE(119)
			bool tmp20 = (_g < (int)16);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(119)
			bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(119)
			if ((tmp21)){
				HX_STACK_LINE(119)
				break;
			}
			HX_STACK_LINE(119)
			int tmp22 = (_g)++;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(119)
			int i = tmp22;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(121)
			::lime::utils::ArrayBufferView tmp23 = this->matrix;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(121)
			int tmp24 = i;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(121)
			Float tmp25 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(121)
			this->values[i] = tmp25;
		}
	}
	HX_STACK_LINE(125)
	return this->values;
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderer_obj,getMatrix,return )

Void GLRenderer_obj::render( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","render",0x72dac118,"openfl._internal.renderer.opengl.GLRenderer.render","openfl/_internal/renderer/opengl/GLRenderer.hx",130,0xb2b97130)
		HX_STACK_THIS(this)
		HX_STACK_LINE(132)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_viewport.call(this->offsetX,this->offsetY,this->displayWidth,this->displayHeight);
		HX_STACK_LINE(134)
		::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(134)
		Dynamic tmp1 = tmp->quality;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(134)
		bool tmp2 = (tmp1 != ((Dynamic)((int)2)));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(134)
		::openfl::_internal::renderer::RenderSession tmp3 = this->renderSession;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(134)
		tmp3->allowSmoothing = tmp2;
		HX_STACK_LINE(135)
		::openfl::geom::Matrix tmp4 = this->displayMatrix;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(135)
		Float tmp5 = tmp4->a;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(135)
		bool tmp6 = (tmp5 != (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(135)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(135)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(135)
		if ((tmp7)){
			HX_STACK_LINE(135)
			::openfl::geom::Matrix tmp9 = this->displayMatrix;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(135)
			::openfl::geom::Matrix tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(135)
			Float tmp11 = tmp10->d;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(135)
			tmp8 = (tmp11 != (int)1);
		}
		else{
			HX_STACK_LINE(135)
			tmp8 = true;
		}
		HX_STACK_LINE(135)
		::openfl::_internal::renderer::RenderSession tmp9 = this->renderSession;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(135)
		tmp9->upscaled = tmp8;
		HX_STACK_LINE(137)
		::openfl::display::Stage tmp10 = this->stage;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(137)
		::openfl::_internal::renderer::RenderSession tmp11 = this->renderSession;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(137)
		tmp10->__renderGL(tmp11);
		HX_STACK_LINE(139)
		int tmp12 = this->offsetX;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(139)
		bool tmp13 = (tmp12 > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(139)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(139)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(139)
		if ((tmp14)){
			HX_STACK_LINE(139)
			int tmp16 = this->offsetY;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(139)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(139)
			tmp15 = (tmp17 > (int)0);
		}
		else{
			HX_STACK_LINE(139)
			tmp15 = true;
		}
		HX_STACK_LINE(139)
		if ((tmp15)){
			HX_STACK_LINE(141)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear_color.call((int)0,(int)0,(int)0,(int)1);
			HX_STACK_LINE(142)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable.call(this->gl->SCISSOR_TEST);
			HX_STACK_LINE(144)
			int tmp16 = this->offsetX;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(144)
			bool tmp17 = (tmp16 > (int)0);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(144)
			if ((tmp17)){
				HX_STACK_LINE(146)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_scissor.call((int)0,(int)0,this->offsetX,this->height);
				HX_STACK_LINE(147)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear.call(this->gl->COLOR_BUFFER_BIT);
				HX_STACK_LINE(149)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_scissor.call((this->offsetX + this->displayWidth),(int)0,this->width,this->height);
				HX_STACK_LINE(150)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear.call(this->gl->COLOR_BUFFER_BIT);
			}
			HX_STACK_LINE(154)
			int tmp18 = this->offsetY;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(154)
			bool tmp19 = (tmp18 > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(154)
			if ((tmp19)){
				HX_STACK_LINE(156)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_scissor.call((int)0,(int)0,this->width,this->offsetY);
				HX_STACK_LINE(157)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear.call(this->gl->COLOR_BUFFER_BIT);
				HX_STACK_LINE(159)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_scissor.call((int)0,(this->offsetY + this->displayHeight),this->width,this->height);
				HX_STACK_LINE(160)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear.call(this->gl->COLOR_BUFFER_BIT);
			}
			HX_STACK_LINE(164)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable.call(this->gl->SCISSOR_TEST);
		}
	}
return null();
}


Void GLRenderer_obj::resize( int width,int height){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","resize",0x762cafb6,"openfl._internal.renderer.opengl.GLRenderer.resize","openfl/_internal/renderer/opengl/GLRenderer.hx",171,0xb2b97130)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(173)
		int tmp = width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(173)
		int tmp1 = height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(173)
		this->super::resize(tmp,tmp1);
		HX_STACK_LINE(175)
		::openfl::display::Stage tmp2 = this->stage;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(175)
		this->displayMatrix = tmp2->__displayMatrix;
		HX_STACK_LINE(177)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(177)
		{
			HX_STACK_LINE(177)
			::openfl::geom::Matrix tmp4 = this->displayMatrix;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(177)
			::openfl::geom::Matrix _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(177)
			Float tmp5 = ((int)0 * _this->a);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(177)
			Float tmp6 = ((int)0 * _this->c);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(177)
			Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(177)
			Float tmp8 = _this->tx;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(177)
			tmp3 = (tmp7 + tmp8);
		}
		HX_STACK_LINE(177)
		int tmp4 = ::Math_obj::round(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(177)
		this->offsetX = tmp4;
		HX_STACK_LINE(178)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(178)
		{
			HX_STACK_LINE(178)
			::openfl::geom::Matrix tmp6 = this->displayMatrix;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(178)
			::openfl::geom::Matrix _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(178)
			Float tmp7 = ((int)0 * _this->b);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(178)
			Float tmp8 = ((int)0 * _this->d);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(178)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(178)
			Float tmp10 = _this->ty;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(178)
			tmp5 = (tmp9 + tmp10);
		}
		HX_STACK_LINE(178)
		int tmp6 = ::Math_obj::round(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(178)
		this->offsetY = tmp6;
		HX_STACK_LINE(179)
		Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(179)
		{
			HX_STACK_LINE(179)
			::openfl::geom::Matrix tmp8 = this->displayMatrix;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(179)
			::openfl::geom::Matrix _this = tmp8;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(179)
			::openfl::display::Stage tmp9 = this->stage;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(179)
			int tmp10 = tmp9->stageWidth;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(179)
			Float tmp11 = _this->a;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(179)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(179)
			Float tmp13 = ((int)0 * _this->c);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(179)
			Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(179)
			Float tmp15 = _this->tx;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(179)
			tmp7 = (tmp14 + tmp15);
		}
		HX_STACK_LINE(179)
		int tmp8 = this->offsetX;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(179)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(179)
		int tmp10 = ::Math_obj::round(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(179)
		this->displayWidth = tmp10;
		HX_STACK_LINE(180)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(180)
		{
			HX_STACK_LINE(180)
			::openfl::geom::Matrix tmp12 = this->displayMatrix;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(180)
			::openfl::geom::Matrix _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(180)
			Float tmp13 = ((int)0 * _this->b);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(180)
			::openfl::display::Stage tmp14 = this->stage;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(180)
			int tmp15 = tmp14->stageHeight;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(180)
			Float tmp16 = _this->d;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(180)
			Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(180)
			Float tmp18 = (tmp13 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(180)
			Float tmp19 = _this->ty;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(180)
			tmp11 = (tmp18 + tmp19);
		}
		HX_STACK_LINE(180)
		int tmp12 = this->offsetY;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(180)
		Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(180)
		int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(180)
		this->displayHeight = tmp14;
		HX_STACK_LINE(182)
		int tmp15 = this->offsetX;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(182)
		int tmp16 = this->displayWidth;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(182)
		int tmp17 = this->offsetX;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(182)
		int tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(182)
		int tmp19 = this->displayHeight;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(182)
		int tmp20 = this->offsetY;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(182)
		int tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(182)
		int tmp22 = this->offsetY;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(182)
		::lime::utils::ArrayBufferView tmp23 = ::lime::math::_Matrix4::Matrix4_Impl__obj::createOrtho(tmp15,tmp18,tmp21,tmp22,(int)-1000,(int)1000);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(182)
		this->projection = tmp23;
	}
return null();
}



GLRenderer_obj::GLRenderer_obj()
{
}

void GLRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLRenderer);
	HX_MARK_MEMBER_NAME(projection,"projection");
	HX_MARK_MEMBER_NAME(displayHeight,"displayHeight");
	HX_MARK_MEMBER_NAME(displayMatrix,"displayMatrix");
	HX_MARK_MEMBER_NAME(displayWidth,"displayWidth");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(values,"values");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GLRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(projection,"projection");
	HX_VISIT_MEMBER_NAME(displayHeight,"displayHeight");
	HX_VISIT_MEMBER_NAME(displayMatrix,"displayMatrix");
	HX_VISIT_MEMBER_NAME(displayWidth,"displayWidth");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(values,"values");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GLRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
		if (HX_FIELD_EQ(inName,"values") ) { return values; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { return offsetX; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return offsetY; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getMatrix") ) { return getMatrix_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"projection") ) { return projection; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"displayWidth") ) { return displayWidth; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"displayHeight") ) { return displayHeight; }
		if (HX_FIELD_EQ(inName,"displayMatrix") ) { return displayMatrix; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"values") ) { values=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"projection") ) { projection=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"displayWidth") ) { displayWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"displayHeight") ) { displayHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"displayMatrix") ) { displayMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("projection","\x8f","\x88","\x8b","\xc4"));
	outFields->push(HX_HCSTRING("displayHeight","\xc9","\xc3","\xae","\xc3"));
	outFields->push(HX_HCSTRING("displayMatrix","\x23","\xf2","\x2a","\x7d"));
	outFields->push(HX_HCSTRING("displayWidth","\x64","\x8c","\xbb","\xd6"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(GLRenderer_obj,projection),HX_HCSTRING("projection","\x8f","\x88","\x8b","\xc4")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,displayHeight),HX_HCSTRING("displayHeight","\xc9","\xc3","\xae","\xc3")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(GLRenderer_obj,displayMatrix),HX_HCSTRING("displayMatrix","\x23","\xf2","\x2a","\x7d")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,displayWidth),HX_HCSTRING("displayWidth","\x64","\x8c","\xbb","\xd6")},
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(GLRenderer_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(GLRenderer_obj,matrix),HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,offsetX),HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,offsetY),HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(GLRenderer_obj,values),HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("projection","\x8f","\x88","\x8b","\xc4"),
	HX_HCSTRING("displayHeight","\xc9","\xc3","\xae","\xc3"),
	HX_HCSTRING("displayMatrix","\x23","\xf2","\x2a","\x7d"),
	HX_HCSTRING("displayWidth","\x64","\x8c","\xbb","\xd6"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"),
	HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"),
	HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("getMatrix","\x77","\xbf","\x1e","\x38"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class GLRenderer_obj::__mClass;

void GLRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLRenderer","\x6c","\xe6","\x3a","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLRenderer_obj >;
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
