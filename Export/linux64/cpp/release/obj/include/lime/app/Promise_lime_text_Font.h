#ifndef INCLUDED_lime_app_Promise_lime_text_Font
#define INCLUDED_lime_app_Promise_lime_text_Font

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,app,Promise_lime_text_Font)
HX_DECLARE_CLASS2(lime,text,Font)
namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES  Promise_lime_text_Font_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Promise_lime_text_Font_obj OBJ_;
		Promise_lime_text_Font_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.app.Promise_lime_text_Font")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Promise_lime_text_Font_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Promise_lime_text_Font_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Promise_lime_text_Font","\x9b","\x9a","\x46","\x17"); }

		::lime::app::Future future;
		bool isComplete;
		bool isError;
		virtual ::lime::app::Promise_lime_text_Font complete( ::lime::text::Font data);
		Dynamic complete_dyn();

		virtual ::lime::app::Promise_lime_text_Font completeWith( ::lime::app::Future future);
		Dynamic completeWith_dyn();

		virtual ::lime::app::Promise_lime_text_Font error( Dynamic msg);
		Dynamic error_dyn();

		virtual ::lime::app::Promise_lime_text_Font progress( Float progress);
		Dynamic progress_dyn();

		virtual bool get_isComplete( );
		Dynamic get_isComplete_dyn();

		virtual bool get_isError( );
		Dynamic get_isError_dyn();

};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_Promise_lime_text_Font */ 
