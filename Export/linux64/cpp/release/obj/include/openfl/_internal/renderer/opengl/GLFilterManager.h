#ifndef INCLUDED_openfl__internal_renderer_opengl_GLFilterManager
#define INCLUDED_openfl__internal_renderer_opengl_GLFilterManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__internal_renderer_AbstractFilterManager
#include <openfl/_internal/renderer/AbstractFilterManager.h>
#endif
HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS3(openfl,_internal,renderer,AbstractFilterManager)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS4(openfl,_internal,renderer,opengl,GLFilterManager)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{


class HXCPP_CLASS_ATTRIBUTES  GLFilterManager_obj : public ::openfl::_internal::renderer::AbstractFilterManager_obj{
	public:
		typedef ::openfl::_internal::renderer::AbstractFilterManager_obj super;
		typedef GLFilterManager_obj OBJ_;
		GLFilterManager_obj();
		Void __construct(::openfl::_internal::renderer::RenderSession renderSession);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.opengl.GLFilterManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GLFilterManager_obj > __new(::openfl::_internal::renderer::RenderSession renderSession);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLFilterManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("GLFilterManager","\x30","\xe0","\xbf","\x39"); }

		::lime::graphics::GLRenderContext gl;
		virtual ::openfl::display::Shader pushObject( ::openfl::display::DisplayObject object);

		virtual Void popObject( ::openfl::display::DisplayObject object);

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl

#endif /* INCLUDED_openfl__internal_renderer_opengl_GLFilterManager */ 
