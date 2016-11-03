#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_FPS_Mem
#include <FPS_Mem.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",26,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(28)
	super::__construct();
	HX_STACK_LINE(31)
	this->tileSize = (int)40;
	HX_STACK_LINE(32)
	this->acceleration = ((Float)0.9);
	HX_STACK_LINE(34)
	this->map = Array_obj< ::Dynamic >::__new().Add(Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1)).Add(Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)1)).Add(Array_obj< int >::__new().Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1)).Add(Array_obj< int >::__new().Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1)).Add(Array_obj< int >::__new().Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1)).Add(Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)1).Add((int)1)).Add(Array_obj< int >::__new().Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1)).Add(Array_obj< int >::__new().Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1)).Add(Array_obj< int >::__new().Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1)).Add(Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1));
	HX_STACK_LINE(47)
	::openfl::display::Sprite tmp = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	this->world = tmp;
	HX_STACK_LINE(48)
	::openfl::display::Sprite tmp1 = this->world;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	::openfl::display::Graphics tmp2 = tmp1->get_graphics();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(48)
	tmp2->beginFill((int)3447003,null());
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(49)
		int tmp3 = this->map->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		int _g = tmp3;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(49)
		while((true)){
			HX_STACK_LINE(49)
			bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(49)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(49)
			if ((tmp5)){
				HX_STACK_LINE(49)
				break;
			}
			HX_STACK_LINE(49)
			int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(49)
			int row = tmp6;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(50)
			{
				HX_STACK_LINE(50)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(50)
				int tmp7 = this->map->__get(row).StaticCast< Array< int > >()->length;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(50)
				int _g2 = tmp7;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(50)
				while((true)){
					HX_STACK_LINE(50)
					bool tmp8 = (_g3 < _g2);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(50)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(50)
					if ((tmp9)){
						HX_STACK_LINE(50)
						break;
					}
					HX_STACK_LINE(50)
					int tmp10 = (_g3)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(50)
					int cell = tmp10;		HX_STACK_VAR(cell,"cell");
					HX_STACK_LINE(51)
					int tmp11 = this->map->__get(row).StaticCast< Array< int > >()->__get(cell);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(51)
					bool tmp12 = (tmp11 == (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(51)
					if ((tmp12)){
						HX_STACK_LINE(52)
						::openfl::display::Sprite tmp13 = this->world;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(52)
						::openfl::display::Graphics tmp14 = tmp13->get_graphics();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(52)
						int tmp15 = cell;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(52)
						int tmp16 = this->tileSize;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(52)
						int tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(52)
						int tmp18 = row;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(52)
						int tmp19 = this->tileSize;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(52)
						int tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(52)
						int tmp21 = this->tileSize;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(52)
						int tmp22 = this->tileSize;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(52)
						tmp14->drawRect(tmp17,tmp20,tmp21,tmp22);
					}
				}
			}
		}
	}
	HX_STACK_LINE(57)
	::openfl::display::Sprite tmp3 = this->world;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(57)
	this->addChild(tmp3);
	HX_STACK_LINE(59)
	::openfl::display::Sprite tmp4 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(59)
	this->player = tmp4;
	HX_STACK_LINE(60)
	::openfl::display::Sprite tmp5 = this->player;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(60)
	::openfl::display::Graphics tmp6 = tmp5->get_graphics();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(60)
	tmp6->beginFill((int)15105570,null());
	HX_STACK_LINE(61)
	::openfl::display::Sprite tmp7 = this->player;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(61)
	::openfl::display::Graphics tmp8 = tmp7->get_graphics();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(61)
	int tmp9 = this->tileSize;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(61)
	int tmp10 = this->tileSize;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(61)
	tmp8->drawRect((int)0,(int)0,tmp9,tmp10);
	HX_STACK_LINE(62)
	::openfl::display::Sprite tmp11 = this->player;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(62)
	this->addChild(tmp11);
	HX_STACK_LINE(63)
	::openfl::display::Sprite tmp12 = this->player;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(63)
	int tmp13 = this->tileSize;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(63)
	Float tmp14 = (Float(tmp13) / Float((int)2));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(63)
	Float tmp15 = ((int)300 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(63)
	tmp12->set_x(tmp15);
	HX_STACK_LINE(64)
	::openfl::display::Sprite tmp16 = this->player;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(64)
	int tmp17 = this->tileSize;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(64)
	Float tmp18 = (Float(tmp17) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(64)
	Float tmp19 = ((int)200 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(64)
	tmp16->set_y(tmp19);
	HX_STACK_LINE(65)
	::openfl::geom::Point tmp20 = ::openfl::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(65)
	this->velocity = tmp20;
	HX_STACK_LINE(66)
	this->isOnGround = false;
	HX_STACK_LINE(69)
	Dynamic tmp21 = this->gameLoop_dyn();		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(69)
	this->addEventListener(HX_HCSTRING("enterFrame","\xf5","\x03","\x50","\x02"),tmp21,null(),null(),null());
	HX_STACK_LINE(72)
	this->keys = Array_obj< bool >::__new();
	HX_STACK_LINE(73)
	::openfl::display::Stage tmp22 = this->stage;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(73)
	Dynamic tmp23 = this->onKeyDown_dyn();		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(73)
	tmp22->addEventListener(HX_HCSTRING("keyDown","\xa1","\x69","\x47","\x9c"),tmp23,null(),null(),null());
	HX_STACK_LINE(74)
	::openfl::display::Stage tmp24 = this->stage;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(74)
	Dynamic tmp25 = this->onKeyUp_dyn();		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(74)
	tmp24->addEventListener(HX_HCSTRING("keyUp","\xda","\xb9","\xfe","\xde"),tmp25,null(),null(),null());
	HX_STACK_LINE(78)
	::openfl::text::TextField tmp26 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(78)
	::openfl::text::TextField instructions = tmp26;		HX_STACK_VAR(instructions,"instructions");
	HX_STACK_LINE(79)
	instructions->set_selectable(false);
	HX_STACK_LINE(80)
	instructions->set_text(HX_HCSTRING("SPACE to jump, ARROW KEYS to move","\xae","\xb0","\xd1","\x7e"));
	HX_STACK_LINE(81)
	instructions->set_textColor((int)16777215);
	HX_STACK_LINE(82)
	::openfl::text::TextFormat tmp27 = ::openfl::text::TextFormat_obj::__new(HX_HCSTRING("_sans","\x32","\xa0","\x5e","\xff"),(int)12,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(82)
	instructions->set_defaultTextFormat(tmp27);
	HX_STACK_LINE(83)
	instructions->set_x((int)15);
	HX_STACK_LINE(84)
	instructions->set_y((int)370);
	HX_STACK_LINE(85)
	instructions->set_width((int)300);
	HX_STACK_LINE(86)
	::openfl::text::TextField tmp28 = instructions;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(86)
	this->addChild(tmp28);
	HX_STACK_LINE(88)
	::FPS_Mem tmp29 = ::FPS_Mem_obj::__new((int)15,(int)15,(int)16777215);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(88)
	this->addChild(tmp29);
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Void Main_obj::gameLoop( ::openfl::events::Event e){
{
		HX_STACK_FRAME("Main","gameLoop",0xfae64e2b,"Main.gameLoop","Main.hx",91,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(93)
		Float tmp = this->acceleration;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		::openfl::geom::Point tmp1 = this->velocity;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		hx::AddEq(tmp1->y,tmp);
		HX_STACK_LINE(96)
		bool tmp2 = this->isOnGround;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(96)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(96)
		if ((tmp2)){
			HX_STACK_LINE(96)
			tmp3 = this->keys->__get((int)32);
		}
		else{
			HX_STACK_LINE(96)
			tmp3 = false;
		}
		HX_STACK_LINE(96)
		if ((tmp3)){
			HX_STACK_LINE(97)
			this->isOnGround = false;
			HX_STACK_LINE(98)
			::openfl::geom::Point tmp4 = this->velocity;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(98)
			tmp4->y = (int)-16;
		}
		HX_STACK_LINE(100)
		bool tmp4 = this->keys->__get((int)39);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(100)
		if ((tmp4)){
			HX_STACK_LINE(101)
			::openfl::geom::Point tmp5 = this->velocity;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(101)
			tmp5->x = (int)7;
		}
		else{
			HX_STACK_LINE(102)
			bool tmp5 = this->keys->__get((int)37);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(102)
			if ((tmp5)){
				HX_STACK_LINE(103)
				::openfl::geom::Point tmp6 = this->velocity;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(103)
				tmp6->x = (int)-7;
			}
			else{
				HX_STACK_LINE(105)
				::openfl::geom::Point tmp6 = this->velocity;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(105)
				tmp6->x = (int)0;
			}
		}
		HX_STACK_LINE(108)
		::openfl::geom::Point tmp5 = ::openfl::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(108)
		::openfl::geom::Point tileCoords = tmp5;		HX_STACK_VAR(tileCoords,"tileCoords");
		HX_STACK_LINE(109)
		::openfl::geom::Point tmp6 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(109)
		::openfl::geom::Point approximateCoords = tmp6;		HX_STACK_VAR(approximateCoords,"approximateCoords");
		HX_STACK_LINE(111)
		{
			HX_STACK_LINE(111)
			::openfl::display::Sprite tmp7 = this->player;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(111)
			::openfl::display::Sprite _g = tmp7;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(111)
			Float tmp8 = _g->get_y();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(111)
			::openfl::geom::Point tmp9 = this->velocity;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(111)
			Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(111)
			Float tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(111)
			_g->set_y(tmp11);
		}
		HX_STACK_LINE(112)
		::openfl::geom::Point tmp7 = tileCoords;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(112)
		::openfl::geom::Point tmp8 = approximateCoords;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(112)
		this->checkBottomCollision(tmp7,tmp8);
		HX_STACK_LINE(113)
		::openfl::geom::Point tmp9 = tileCoords;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(113)
		::openfl::geom::Point tmp10 = approximateCoords;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(113)
		this->checkTopCollision(tmp9,tmp10);
		HX_STACK_LINE(115)
		{
			HX_STACK_LINE(115)
			::openfl::display::Sprite tmp11 = this->player;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(115)
			::openfl::display::Sprite _g = tmp11;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(115)
			Float tmp12 = _g->get_x();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(115)
			::openfl::geom::Point tmp13 = this->velocity;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(115)
			Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(115)
			Float tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(115)
			_g->set_x(tmp15);
		}
		HX_STACK_LINE(116)
		::openfl::geom::Point tmp11 = tileCoords;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(116)
		::openfl::geom::Point tmp12 = approximateCoords;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(116)
		this->checkRightCollision(tmp11,tmp12);
		HX_STACK_LINE(117)
		::openfl::geom::Point tmp13 = tileCoords;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(117)
		::openfl::geom::Point tmp14 = approximateCoords;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(117)
		this->checkLeftCollision(tmp13,tmp14);
		HX_STACK_LINE(120)
		::openfl::geom::Point tmp15 = this->velocity;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(120)
		Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(120)
		bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(120)
		if ((tmp17)){
			HX_STACK_LINE(121)
			this->isOnGround = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,gameLoop,(void))

Void Main_obj::checkBottomCollision( ::openfl::geom::Point tileCoords,::openfl::geom::Point approximateCoords){
{
		HX_STACK_FRAME("Main","checkBottomCollision",0x17c6de54,"Main.checkBottomCollision","Main.hx",125,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tileCoords,"tileCoords")
		HX_STACK_ARG(approximateCoords,"approximateCoords")
		HX_STACK_LINE(127)
		::openfl::geom::Point tmp = this->velocity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		Float tmp1 = tmp->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(127)
		bool tmp2 = (tmp1 >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(127)
		if ((tmp2)){
			HX_STACK_LINE(128)
			::openfl::display::Sprite tmp3 = this->player;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(128)
			Float tmp4 = tmp3->get_x();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(128)
			int tmp5 = this->tileSize;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(128)
			Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(128)
			approximateCoords->x = tmp6;
			HX_STACK_LINE(129)
			::openfl::display::Sprite tmp7 = this->player;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(129)
			Float tmp8 = tmp7->get_y();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(129)
			int tmp9 = this->tileSize;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(129)
			Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(129)
			approximateCoords->y = tmp10;
			HX_STACK_LINE(130)
			Float tmp11 = approximateCoords->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(130)
			int tmp12 = ::Math_obj::ceil(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(130)
			tileCoords->y = tmp12;
			HX_STACK_LINE(132)
			Float tmp13 = approximateCoords->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(132)
			int tmp14 = ::Math_obj::floor(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(132)
			tileCoords->x = tmp14;
			HX_STACK_LINE(133)
			::openfl::geom::Point tmp15 = tileCoords;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(133)
			bool tmp16 = this->isBlock(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(133)
			if ((tmp16)){
				HX_STACK_LINE(134)
				::openfl::display::Sprite tmp17 = this->player;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(134)
				Float tmp18 = (tileCoords->y - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(134)
				int tmp19 = this->tileSize;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(134)
				Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(134)
				tmp17->set_y(tmp20);
				HX_STACK_LINE(135)
				::openfl::geom::Point tmp21 = this->velocity;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(135)
				tmp21->y = (int)0;
				HX_STACK_LINE(136)
				this->isOnGround = true;
			}
			HX_STACK_LINE(139)
			Float tmp17 = approximateCoords->x;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(139)
			int tmp18 = ::Math_obj::ceil(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(139)
			tileCoords->x = tmp18;
			HX_STACK_LINE(140)
			::openfl::geom::Point tmp19 = tileCoords;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(140)
			bool tmp20 = this->isBlock(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(140)
			if ((tmp20)){
				HX_STACK_LINE(141)
				::openfl::display::Sprite tmp21 = this->player;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(141)
				Float tmp22 = (tileCoords->y - (int)1);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(141)
				int tmp23 = this->tileSize;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(141)
				Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(141)
				tmp21->set_y(tmp24);
				HX_STACK_LINE(142)
				::openfl::geom::Point tmp25 = this->velocity;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(142)
				tmp25->y = (int)0;
				HX_STACK_LINE(143)
				this->isOnGround = true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Main_obj,checkBottomCollision,(void))

Void Main_obj::checkTopCollision( ::openfl::geom::Point tileCoords,::openfl::geom::Point approximateCoords){
{
		HX_STACK_FRAME("Main","checkTopCollision",0xaed872b0,"Main.checkTopCollision","Main.hx",148,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tileCoords,"tileCoords")
		HX_STACK_ARG(approximateCoords,"approximateCoords")
		HX_STACK_LINE(150)
		::openfl::geom::Point tmp = this->velocity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		Float tmp1 = tmp->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(150)
		bool tmp2 = (tmp1 < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(150)
		if ((tmp2)){
			HX_STACK_LINE(151)
			::openfl::display::Sprite tmp3 = this->player;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(151)
			Float tmp4 = tmp3->get_x();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(151)
			int tmp5 = this->tileSize;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(151)
			Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(151)
			approximateCoords->x = tmp6;
			HX_STACK_LINE(152)
			::openfl::display::Sprite tmp7 = this->player;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(152)
			Float tmp8 = tmp7->get_y();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(152)
			int tmp9 = this->tileSize;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(152)
			Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(152)
			approximateCoords->y = tmp10;
			HX_STACK_LINE(154)
			Float tmp11 = approximateCoords->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(154)
			int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(154)
			tileCoords->y = tmp12;
			HX_STACK_LINE(156)
			Float tmp13 = approximateCoords->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(156)
			int tmp14 = ::Math_obj::floor(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(156)
			tileCoords->x = tmp14;
			HX_STACK_LINE(158)
			::openfl::geom::Point tmp15 = tileCoords;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(158)
			bool tmp16 = this->isBlock(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(158)
			if ((tmp16)){
				HX_STACK_LINE(159)
				::openfl::display::Sprite tmp17 = this->player;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(159)
				Float tmp18 = (tileCoords->y + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(159)
				int tmp19 = this->tileSize;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(159)
				Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(159)
				tmp17->set_y(tmp20);
				HX_STACK_LINE(160)
				::openfl::geom::Point tmp21 = this->velocity;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(160)
				tmp21->y = (int)0;
			}
			HX_STACK_LINE(163)
			Float tmp17 = approximateCoords->x;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(163)
			int tmp18 = ::Math_obj::ceil(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(163)
			tileCoords->x = tmp18;
			HX_STACK_LINE(164)
			::openfl::geom::Point tmp19 = tileCoords;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(164)
			bool tmp20 = this->isBlock(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(164)
			if ((tmp20)){
				HX_STACK_LINE(165)
				::openfl::display::Sprite tmp21 = this->player;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(165)
				Float tmp22 = (tileCoords->y + (int)1);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(165)
				int tmp23 = this->tileSize;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(165)
				Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(165)
				tmp21->set_y(tmp24);
				HX_STACK_LINE(166)
				::openfl::geom::Point tmp25 = this->velocity;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(166)
				tmp25->y = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Main_obj,checkTopCollision,(void))

Void Main_obj::checkRightCollision( ::openfl::geom::Point tileCoords,::openfl::geom::Point approximateCoords){
{
		HX_STACK_FRAME("Main","checkRightCollision",0xebafb749,"Main.checkRightCollision","Main.hx",171,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tileCoords,"tileCoords")
		HX_STACK_ARG(approximateCoords,"approximateCoords")
		HX_STACK_LINE(173)
		::openfl::geom::Point tmp = this->velocity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(173)
		Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(173)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(173)
		if ((tmp2)){
			HX_STACK_LINE(174)
			::openfl::display::Sprite tmp3 = this->player;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(174)
			Float tmp4 = tmp3->get_x();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(174)
			int tmp5 = this->tileSize;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(174)
			Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(174)
			approximateCoords->x = tmp6;
			HX_STACK_LINE(175)
			::openfl::display::Sprite tmp7 = this->player;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(175)
			Float tmp8 = tmp7->get_y();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(175)
			int tmp9 = this->tileSize;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(175)
			Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(175)
			approximateCoords->y = tmp10;
			HX_STACK_LINE(177)
			Float tmp11 = approximateCoords->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(177)
			int tmp12 = ::Math_obj::ceil(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(177)
			tileCoords->x = tmp12;
			HX_STACK_LINE(179)
			Float tmp13 = approximateCoords->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(179)
			int tmp14 = ::Math_obj::floor(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(179)
			tileCoords->y = tmp14;
			HX_STACK_LINE(180)
			::openfl::geom::Point tmp15 = tileCoords;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(180)
			bool tmp16 = this->isBlock(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(180)
			if ((tmp16)){
				HX_STACK_LINE(181)
				::openfl::display::Sprite tmp17 = this->player;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(181)
				Float tmp18 = (tileCoords->x - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(181)
				int tmp19 = this->tileSize;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(181)
				Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(181)
				tmp17->set_x(tmp20);
				HX_STACK_LINE(182)
				::openfl::geom::Point tmp21 = this->velocity;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(182)
				tmp21->x = (int)0;
			}
			HX_STACK_LINE(185)
			Float tmp17 = approximateCoords->y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(185)
			int tmp18 = ::Math_obj::ceil(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(185)
			tileCoords->y = tmp18;
			HX_STACK_LINE(186)
			::openfl::geom::Point tmp19 = tileCoords;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(186)
			bool tmp20 = this->isBlock(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(186)
			if ((tmp20)){
				HX_STACK_LINE(187)
				::openfl::display::Sprite tmp21 = this->player;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(187)
				Float tmp22 = (tileCoords->x - (int)1);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(187)
				int tmp23 = this->tileSize;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(187)
				Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(187)
				tmp21->set_x(tmp24);
				HX_STACK_LINE(188)
				::openfl::geom::Point tmp25 = this->velocity;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(188)
				tmp25->x = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Main_obj,checkRightCollision,(void))

Void Main_obj::checkLeftCollision( ::openfl::geom::Point tileCoords,::openfl::geom::Point approximateCoords){
{
		HX_STACK_FRAME("Main","checkLeftCollision",0x365f9c78,"Main.checkLeftCollision","Main.hx",193,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tileCoords,"tileCoords")
		HX_STACK_ARG(approximateCoords,"approximateCoords")
		HX_STACK_LINE(195)
		::openfl::geom::Point tmp = this->velocity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(195)
		Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(195)
		bool tmp2 = (tmp1 <= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(195)
		if ((tmp2)){
			HX_STACK_LINE(196)
			::openfl::display::Sprite tmp3 = this->player;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(196)
			Float tmp4 = tmp3->get_x();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(196)
			int tmp5 = this->tileSize;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(196)
			Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(196)
			approximateCoords->x = tmp6;
			HX_STACK_LINE(197)
			::openfl::display::Sprite tmp7 = this->player;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(197)
			Float tmp8 = tmp7->get_y();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(197)
			int tmp9 = this->tileSize;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(197)
			Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(197)
			approximateCoords->y = tmp10;
			HX_STACK_LINE(199)
			Float tmp11 = approximateCoords->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(199)
			int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(199)
			tileCoords->x = tmp12;
			HX_STACK_LINE(201)
			Float tmp13 = approximateCoords->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(201)
			int tmp14 = ::Math_obj::floor(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(201)
			tileCoords->y = tmp14;
			HX_STACK_LINE(202)
			::openfl::geom::Point tmp15 = tileCoords;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(202)
			bool tmp16 = this->isBlock(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(202)
			if ((tmp16)){
				HX_STACK_LINE(203)
				::openfl::display::Sprite tmp17 = this->player;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(203)
				Float tmp18 = (tileCoords->x + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(203)
				int tmp19 = this->tileSize;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(203)
				Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(203)
				tmp17->set_x(tmp20);
				HX_STACK_LINE(204)
				::openfl::geom::Point tmp21 = this->velocity;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(204)
				tmp21->x = (int)0;
			}
			HX_STACK_LINE(207)
			Float tmp17 = approximateCoords->y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(207)
			int tmp18 = ::Math_obj::ceil(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(207)
			tileCoords->y = tmp18;
			HX_STACK_LINE(208)
			::openfl::geom::Point tmp19 = tileCoords;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(208)
			bool tmp20 = this->isBlock(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(208)
			if ((tmp20)){
				HX_STACK_LINE(209)
				::openfl::display::Sprite tmp21 = this->player;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(209)
				Float tmp22 = (tileCoords->x + (int)1);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(209)
				int tmp23 = this->tileSize;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(209)
				Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(209)
				tmp21->set_x(tmp24);
				HX_STACK_LINE(210)
				::openfl::geom::Point tmp25 = this->velocity;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(210)
				tmp25->x = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Main_obj,checkLeftCollision,(void))

Void Main_obj::onKeyDown( ::openfl::events::KeyboardEvent evt){
{
		HX_STACK_FRAME("Main","onKeyDown",0x547b59ed,"Main.onKeyDown","Main.hx",216,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(evt,"evt")
		HX_STACK_LINE(216)
		this->keys[evt->keyCode] = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,onKeyDown,(void))

Void Main_obj::onKeyUp( ::openfl::events::KeyboardEvent evt){
{
		HX_STACK_FRAME("Main","onKeyUp",0xd96dbf26,"Main.onKeyUp","Main.hx",220,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(evt,"evt")
		HX_STACK_LINE(220)
		this->keys[evt->keyCode] = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,onKeyUp,(void))

bool Main_obj::isBlock( ::openfl::geom::Point coords){
	HX_STACK_FRAME("Main","isBlock",0xb5b37fee,"Main.isBlock","Main.hx",224,0x087e5c05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(coords,"coords")
	HX_STACK_LINE(225)
	Float tmp = coords->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(225)
	int tmp1 = ::Math_obj::round(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(225)
	Float tmp2 = coords->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(225)
	int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(225)
	int tmp4 = this->map->__get(tmp1).StaticCast< Array< int > >()->__get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(225)
	bool tmp5 = (tmp4 == (int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(225)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,isBlock,return )


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(world,"world");
	HX_MARK_MEMBER_NAME(tileSize,"tileSize");
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(acceleration,"acceleration");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(keys,"keys");
	HX_MARK_MEMBER_NAME(isOnGround,"isOnGround");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(world,"world");
	HX_VISIT_MEMBER_NAME(tileSize,"tileSize");
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(acceleration,"acceleration");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(keys,"keys");
	HX_VISIT_MEMBER_NAME(isOnGround,"isOnGround");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return keys; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"world") ) { return world; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		if (HX_FIELD_EQ(inName,"isBlock") ) { return isBlock_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tileSize") ) { return tileSize; }
		if (HX_FIELD_EQ(inName,"velocity") ) { return velocity; }
		if (HX_FIELD_EQ(inName,"gameLoop") ) { return gameLoop_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isOnGround") ) { return isOnGround; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"acceleration") ) { return acceleration; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"checkTopCollision") ) { return checkTopCollision_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"checkLeftCollision") ) { return checkLeftCollision_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"checkRightCollision") ) { return checkRightCollision_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"checkBottomCollision") ) { return checkBottomCollision_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { keys=inValue.Cast< Array< bool > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"world") ) { world=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tileSize") ) { tileSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isOnGround") ) { isOnGround=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"acceleration") ) { acceleration=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("world","\x52","\x96","\x64","\xce"));
	outFields->push(HX_HCSTRING("tileSize","\x0f","\xc7","\x59","\x86"));
	outFields->push(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));
	outFields->push(HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"));
	outFields->push(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"));
	outFields->push(HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"));
	outFields->push(HX_HCSTRING("isOnGround","\x10","\x2b","\x84","\x76"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Main_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Main_obj,world),HX_HCSTRING("world","\x52","\x96","\x64","\xce")},
	{hx::fsInt,(int)offsetof(Main_obj,tileSize),HX_HCSTRING("tileSize","\x0f","\xc7","\x59","\x86")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Main_obj,player),HX_HCSTRING("player","\x61","\xeb","\xb8","\x37")},
	{hx::fsFloat,(int)offsetof(Main_obj,acceleration),HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(Main_obj,velocity),HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(Main_obj,keys),HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47")},
	{hx::fsBool,(int)offsetof(Main_obj,isOnGround),HX_HCSTRING("isOnGround","\x10","\x2b","\x84","\x76")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("world","\x52","\x96","\x64","\xce"),
	HX_HCSTRING("tileSize","\x0f","\xc7","\x59","\x86"),
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
	HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"),
	HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"),
	HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"),
	HX_HCSTRING("isOnGround","\x10","\x2b","\x84","\x76"),
	HX_HCSTRING("gameLoop","\x76","\xa7","\xdd","\xb3"),
	HX_HCSTRING("checkBottomCollision","\x1f","\x7c","\x44","\x42"),
	HX_HCSTRING("checkTopCollision","\x05","\x18","\x7f","\xd8"),
	HX_HCSTRING("checkRightCollision","\xde","\x1b","\x4a","\xc8"),
	HX_HCSTRING("checkLeftCollision","\x83","\xa1","\x89","\x7e"),
	HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73"),
	HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75"),
	HX_HCSTRING("isBlock","\x03","\x19","\x82","\x51"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

hx::Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Main","\x59","\x64","\x2f","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
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

