#ifndef INCLUDED_FPS_Mem
#define INCLUDED_FPS_Mem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
HX_DECLARE_CLASS0(FPS_Mem)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)


class HXCPP_CLASS_ATTRIBUTES  FPS_Mem_obj : public ::openfl::text::TextField_obj{
	public:
		typedef ::openfl::text::TextField_obj super;
		typedef FPS_Mem_obj OBJ_;
		FPS_Mem_obj();
		Void __construct(hx::Null< Float >  __o_inX,hx::Null< Float >  __o_inY,hx::Null< int >  __o_inCol);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="FPS_Mem")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FPS_Mem_obj > __new(hx::Null< Float >  __o_inX,hx::Null< Float >  __o_inY,hx::Null< int >  __o_inCol);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FPS_Mem_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FPS_Mem","\x3f","\x87","\xb3","\x64"); }

		Array< Float > times;
		Float memPeak;
		virtual Void onEnter( Dynamic _);
		Dynamic onEnter_dyn();

};


#endif /* INCLUDED_FPS_Mem */ 
