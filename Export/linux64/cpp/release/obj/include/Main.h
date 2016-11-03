#ifndef INCLUDED_Main
#define INCLUDED_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)
HX_DECLARE_CLASS2(openfl,geom,Point)


class HXCPP_CLASS_ATTRIBUTES  Main_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Main_obj OBJ_;
		Main_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Main")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Main_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Main_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"); }

		Array< ::Dynamic > map;
		::openfl::display::Sprite world;
		int tileSize;
		::openfl::display::Sprite player;
		Float acceleration;
		::openfl::geom::Point velocity;
		Array< bool > keys;
		bool isOnGround;
		virtual Void gameLoop( ::openfl::events::Event e);
		Dynamic gameLoop_dyn();

		virtual Void checkBottomCollision( ::openfl::geom::Point tileCoords,::openfl::geom::Point approximateCoords);
		Dynamic checkBottomCollision_dyn();

		virtual Void checkTopCollision( ::openfl::geom::Point tileCoords,::openfl::geom::Point approximateCoords);
		Dynamic checkTopCollision_dyn();

		virtual Void checkRightCollision( ::openfl::geom::Point tileCoords,::openfl::geom::Point approximateCoords);
		Dynamic checkRightCollision_dyn();

		virtual Void checkLeftCollision( ::openfl::geom::Point tileCoords,::openfl::geom::Point approximateCoords);
		Dynamic checkLeftCollision_dyn();

		virtual Void onKeyDown( ::openfl::events::KeyboardEvent evt);
		Dynamic onKeyDown_dyn();

		virtual Void onKeyUp( ::openfl::events::KeyboardEvent evt);
		Dynamic onKeyUp_dyn();

		virtual bool isBlock( ::openfl::geom::Point coords);
		Dynamic isBlock_dyn();

};


#endif /* INCLUDED_Main */ 
