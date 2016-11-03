#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandType
#include <openfl/_internal/renderer/DrawCommandType.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{

Void DrawCommandBuffer_obj::__construct()
{
HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","new",0xdc2c151e,"openfl._internal.renderer.DrawCommandBuffer.new","openfl/_internal/renderer/DrawCommandBuffer.hx",37,0xbc8e6e11)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(39)
	::openfl::_internal::renderer::DrawCommandBuffer tmp = ::openfl::_internal::renderer::DrawCommandBuffer_obj::empty;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	if ((tmp1)){
		HX_STACK_LINE(41)
		this->types = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(43)
		this->b = Array_obj< bool >::__new();
		HX_STACK_LINE(44)
		this->i = Array_obj< int >::__new();
		HX_STACK_LINE(45)
		this->f = Array_obj< Float >::__new();
		HX_STACK_LINE(46)
		this->o = cpp::ArrayBase_obj::__new();
		HX_STACK_LINE(47)
		this->ff = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(48)
		this->ii = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(50)
		this->copyOnWrite = true;
	}
	else{
		HX_STACK_LINE(54)
		this->clear();
	}
}
;
	return null();
}

//DrawCommandBuffer_obj::~DrawCommandBuffer_obj() { }

Dynamic DrawCommandBuffer_obj::__CreateEmpty() { return  new DrawCommandBuffer_obj; }
hx::ObjectPtr< DrawCommandBuffer_obj > DrawCommandBuffer_obj::__new()
{  hx::ObjectPtr< DrawCommandBuffer_obj > _result_ = new DrawCommandBuffer_obj();
	_result_->__construct();
	return _result_;}

Dynamic DrawCommandBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DrawCommandBuffer_obj > _result_ = new DrawCommandBuffer_obj();
	_result_->__construct();
	return _result_;}

::openfl::_internal::renderer::DrawCommandBuffer DrawCommandBuffer_obj::append( ::openfl::_internal::renderer::DrawCommandBuffer other){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","append",0x1b14a7dc,"openfl._internal.renderer.DrawCommandBuffer.append","openfl/_internal/renderer/DrawCommandBuffer.hx",61,0xbc8e6e11)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(63)
	int tmp = this->get_length();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(63)
	if ((tmp1)){
		HX_STACK_LINE(65)
		this->types = other->types;
		HX_STACK_LINE(66)
		this->b = other->b;
		HX_STACK_LINE(67)
		this->i = other->i;
		HX_STACK_LINE(68)
		this->f = other->f;
		HX_STACK_LINE(69)
		this->o = other->o;
		HX_STACK_LINE(70)
		this->ff = other->ff;
		HX_STACK_LINE(71)
		this->ii = other->ii;
		HX_STACK_LINE(72)
		bool tmp2 = other->copyOnWrite = true;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		this->copyOnWrite = tmp2;
		HX_STACK_LINE(74)
		::openfl::_internal::renderer::DrawCommandBuffer tmp3 = other;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(74)
		return tmp3;
	}
	HX_STACK_LINE(78)
	::openfl::_internal::renderer::DrawCommandReader tmp2 = ::openfl::_internal::renderer::DrawCommandReader_obj::__new(other);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(78)
	::openfl::_internal::renderer::DrawCommandReader data = tmp2;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(80)
	{
		HX_STACK_LINE(80)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(80)
		Array< ::Dynamic > _g1 = other->types;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(80)
		while((true)){
			HX_STACK_LINE(80)
			bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(80)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(80)
			if ((tmp4)){
				HX_STACK_LINE(80)
				break;
			}
			HX_STACK_LINE(80)
			::openfl::_internal::renderer::DrawCommandType tmp5 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::DrawCommandType >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(80)
			::openfl::_internal::renderer::DrawCommandType type = tmp5;		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(80)
			++(_g);
			HX_STACK_LINE(82)
			switch( (int)(type->__Index())){
				case (int)0: {
					HX_STACK_LINE(84)
					::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(84)
					{
						HX_STACK_LINE(84)
						{
							HX_STACK_LINE(84)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(84)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(84)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(84)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(84)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(84)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(84)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(84)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(84)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(84)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(84)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(84)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(84)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(84)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(84)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(84)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(84)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(84)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(84)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(84)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(84)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(84)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(84)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(84)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(84)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(84)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(84)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(84)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(84)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(84)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(84)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(84)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(84)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(84)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_BITMAP_FILL;
						HX_STACK_LINE(84)
						tmp6 = data;
					}
					HX_STACK_LINE(84)
					::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(84)
					::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(84)
					int tmp8 = c->oPos;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(84)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(84)
					Dynamic tmp10 = tmp7->o->__GetItem(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(84)
					::openfl::display::BitmapData tmp11 = ((::openfl::display::BitmapData)(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(84)
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(84)
					int tmp13 = c->oPos;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(84)
					int tmp14 = (tmp13 + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(84)
					Dynamic tmp15 = tmp12->o->__GetItem(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(84)
					::openfl::geom::Matrix tmp16 = ((::openfl::geom::Matrix)(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(84)
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(84)
					int tmp18 = c->bPos;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(84)
					int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(84)
					bool tmp20 = tmp17->b->__get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(84)
					::openfl::_internal::renderer::DrawCommandBuffer tmp21 = c->buffer;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(84)
					int tmp22 = c->bPos;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(84)
					int tmp23 = (tmp22 + (int)1);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(84)
					bool tmp24 = tmp21->b->__get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(84)
					this->beginBitmapFill(tmp11,tmp16,tmp20,tmp24);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(85)
					::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(85)
					{
						HX_STACK_LINE(85)
						{
							HX_STACK_LINE(85)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(85)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(85)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(85)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(85)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(85)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(85)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(85)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(85)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(85)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(85)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(85)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(85)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(85)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(85)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(85)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(85)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(85)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(85)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(85)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(85)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(85)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(85)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(85)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(85)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(85)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(85)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(85)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(85)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(85)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(85)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(85)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(85)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(85)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_FILL;
						HX_STACK_LINE(85)
						tmp6 = data;
					}
					HX_STACK_LINE(85)
					::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(85)
					::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(85)
					int tmp8 = c->iPos;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(85)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(85)
					int tmp10 = tmp7->i->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(85)
					::openfl::_internal::renderer::DrawCommandBuffer tmp11 = c->buffer;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(85)
					int tmp12 = c->fPos;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(85)
					int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(85)
					Float tmp14 = tmp11->f->__get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(85)
					this->beginFill(tmp10,tmp14);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(86)
					::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(86)
					{
						HX_STACK_LINE(86)
						{
							HX_STACK_LINE(86)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(86)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(86)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(86)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(86)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(86)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(86)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(86)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(86)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(86)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(86)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(86)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(86)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(86)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(86)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(86)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(86)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(86)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(86)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(86)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(86)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(86)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(86)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(86)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(86)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(86)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(86)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(86)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(86)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(86)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(86)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(86)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(86)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(86)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_GRADIENT_FILL;
						HX_STACK_LINE(86)
						tmp6 = data;
					}
					HX_STACK_LINE(86)
					::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(86)
					::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(86)
					int tmp8 = c->oPos;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(86)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(86)
					Dynamic tmp10 = tmp7->o->__GetItem(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(86)
					Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(86)
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(86)
					int tmp13 = c->iiPos;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(86)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(86)
					::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(86)
					int tmp16 = c->ffPos;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(86)
					int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(86)
					::openfl::_internal::renderer::DrawCommandBuffer tmp18 = c->buffer;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(86)
					int tmp19 = c->iiPos;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(86)
					int tmp20 = (tmp19 + (int)1);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(86)
					::openfl::_internal::renderer::DrawCommandBuffer tmp21 = c->buffer;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(86)
					int tmp22 = c->oPos;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(86)
					int tmp23 = (tmp22 + (int)1);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(86)
					Dynamic tmp24 = tmp21->o->__GetItem(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(86)
					::openfl::geom::Matrix tmp25 = ((::openfl::geom::Matrix)(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(86)
					::openfl::_internal::renderer::DrawCommandBuffer tmp26 = c->buffer;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(86)
					int tmp27 = c->oPos;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(86)
					int tmp28 = (tmp27 + (int)2);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(86)
					Dynamic tmp29 = tmp26->o->__GetItem(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(86)
					Dynamic tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(86)
					::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(86)
					int tmp32 = c->oPos;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(86)
					int tmp33 = (tmp32 + (int)3);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(86)
					Dynamic tmp34 = tmp31->o->__GetItem(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(86)
					Dynamic tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(86)
					::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(86)
					int tmp37 = c->fPos;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(86)
					int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(86)
					Float tmp39 = tmp36->f->__get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(86)
					Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(86)
					this->beginGradientFill(tmp11,tmp12->ii->__get(tmp14).StaticCast< Array< int > >(),tmp15->ff->__get(tmp17).StaticCast< Array< Float > >(),tmp18->ii->__get(tmp20).StaticCast< Array< int > >(),tmp25,tmp30,tmp35,tmp40);
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(87)
					::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(87)
					{
						HX_STACK_LINE(87)
						{
							HX_STACK_LINE(87)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(87)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(87)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(87)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(87)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(87)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(87)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(87)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(87)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(87)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(87)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(87)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(87)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(87)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(87)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(87)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(87)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(87)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(87)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(87)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(87)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(87)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(87)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(87)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(87)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(87)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(87)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(87)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(87)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(87)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(87)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(87)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(87)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(87)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CUBIC_CURVE_TO;
						HX_STACK_LINE(87)
						tmp6 = data;
					}
					HX_STACK_LINE(87)
					::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(87)
					::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(87)
					int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(87)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(87)
					Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(87)
					::openfl::_internal::renderer::DrawCommandBuffer tmp11 = c->buffer;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(87)
					int tmp12 = c->fPos;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(87)
					int tmp13 = (tmp12 + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(87)
					Float tmp14 = tmp11->f->__get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(87)
					::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(87)
					int tmp16 = c->fPos;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(87)
					int tmp17 = (tmp16 + (int)2);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(87)
					Float tmp18 = tmp15->f->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(87)
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(87)
					int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(87)
					int tmp21 = (tmp20 + (int)3);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(87)
					Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(87)
					::openfl::_internal::renderer::DrawCommandBuffer tmp23 = c->buffer;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(87)
					int tmp24 = c->fPos;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(87)
					int tmp25 = (tmp24 + (int)4);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(87)
					Float tmp26 = tmp23->f->__get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(87)
					::openfl::_internal::renderer::DrawCommandBuffer tmp27 = c->buffer;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(87)
					int tmp28 = c->fPos;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(87)
					int tmp29 = (tmp28 + (int)5);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(87)
					Float tmp30 = tmp27->f->__get(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(87)
					this->cubicCurveTo(tmp10,tmp14,tmp18,tmp22,tmp26,tmp30);
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(88)
					::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(88)
					{
						HX_STACK_LINE(88)
						{
							HX_STACK_LINE(88)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(88)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(88)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(88)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(88)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(88)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(88)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(88)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(88)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(88)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(88)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(88)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(88)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(88)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(88)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(88)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(88)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(88)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(88)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(88)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(88)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(88)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(88)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(88)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(88)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(88)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(88)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(88)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(88)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(88)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(88)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(88)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(88)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(88)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::CURVE_TO;
						HX_STACK_LINE(88)
						tmp6 = data;
					}
					HX_STACK_LINE(88)
					::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(88)
					::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(88)
					int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(88)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(88)
					Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(88)
					::openfl::_internal::renderer::DrawCommandBuffer tmp11 = c->buffer;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(88)
					int tmp12 = c->fPos;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(88)
					int tmp13 = (tmp12 + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(88)
					Float tmp14 = tmp11->f->__get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(88)
					::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(88)
					int tmp16 = c->fPos;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(88)
					int tmp17 = (tmp16 + (int)2);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(88)
					Float tmp18 = tmp15->f->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(88)
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(88)
					int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(88)
					int tmp21 = (tmp20 + (int)3);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(88)
					Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(88)
					this->curveTo(tmp10,tmp14,tmp18,tmp22);
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(89)
					::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(89)
					{
						HX_STACK_LINE(89)
						{
							HX_STACK_LINE(89)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(89)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(89)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(89)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(89)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(89)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(89)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(89)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(89)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(89)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(89)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(89)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(89)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(89)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(89)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(89)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(89)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(89)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(89)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(89)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(89)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(89)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(89)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(89)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(89)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(89)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(89)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(89)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(89)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(89)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(89)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(89)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(89)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(89)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_CIRCLE;
						HX_STACK_LINE(89)
						tmp6 = data;
					}
					HX_STACK_LINE(89)
					::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(89)
					::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(89)
					int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(89)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(89)
					Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(89)
					::openfl::_internal::renderer::DrawCommandBuffer tmp11 = c->buffer;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(89)
					int tmp12 = c->fPos;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(89)
					int tmp13 = (tmp12 + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(89)
					Float tmp14 = tmp11->f->__get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(89)
					::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(89)
					int tmp16 = c->fPos;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(89)
					int tmp17 = (tmp16 + (int)2);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(89)
					Float tmp18 = tmp15->f->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(89)
					this->drawCircle(tmp10,tmp14,tmp18);
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(90)
					::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(90)
					{
						HX_STACK_LINE(90)
						{
							HX_STACK_LINE(90)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(90)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(90)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(90)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(90)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(90)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(90)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(90)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(90)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(90)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(90)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(90)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(90)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(90)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(90)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(90)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(90)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(90)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(90)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(90)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(90)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(90)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(90)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(90)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(90)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(90)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(90)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(90)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(90)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(90)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(90)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(90)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(90)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(90)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ELLIPSE;
						HX_STACK_LINE(90)
						tmp6 = data;
					}
					HX_STACK_LINE(90)
					::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(90)
					::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(90)
					int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(90)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(90)
					Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(90)
					::openfl::_internal::renderer::DrawCommandBuffer tmp11 = c->buffer;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(90)
					int tmp12 = c->fPos;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(90)
					int tmp13 = (tmp12 + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(90)
					Float tmp14 = tmp11->f->__get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(90)
					::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(90)
					int tmp16 = c->fPos;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(90)
					int tmp17 = (tmp16 + (int)2);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(90)
					Float tmp18 = tmp15->f->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(90)
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(90)
					int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(90)
					int tmp21 = (tmp20 + (int)3);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(90)
					Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(90)
					this->drawEllipse(tmp10,tmp14,tmp18,tmp22);
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(91)
					::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(91)
					{
						HX_STACK_LINE(91)
						{
							HX_STACK_LINE(91)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(91)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(91)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(91)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(91)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(91)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(91)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(91)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(91)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(91)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(91)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(91)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(91)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(91)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(91)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(91)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(91)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(91)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(91)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(91)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(91)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(91)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(91)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(91)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(91)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(91)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(91)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(91)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(91)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(91)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(91)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(91)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(91)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(91)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_RECT;
						HX_STACK_LINE(91)
						tmp6 = data;
					}
					HX_STACK_LINE(91)
					::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(91)
					::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(91)
					int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(91)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(91)
					Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(91)
					::openfl::_internal::renderer::DrawCommandBuffer tmp11 = c->buffer;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(91)
					int tmp12 = c->fPos;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(91)
					int tmp13 = (tmp12 + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(91)
					Float tmp14 = tmp11->f->__get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(91)
					::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(91)
					int tmp16 = c->fPos;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(91)
					int tmp17 = (tmp16 + (int)2);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(91)
					Float tmp18 = tmp15->f->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(91)
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(91)
					int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(91)
					int tmp21 = (tmp20 + (int)3);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(91)
					Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(91)
					this->drawRect(tmp10,tmp14,tmp18,tmp22);
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(92)
					::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(92)
					{
						HX_STACK_LINE(92)
						{
							HX_STACK_LINE(92)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(92)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(92)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(92)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(92)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(92)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(92)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(92)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(92)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(92)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(92)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(92)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(92)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(92)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(92)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(92)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(92)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(92)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(92)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(92)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(92)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(92)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(92)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(92)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(92)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(92)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(92)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(92)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(92)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(92)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(92)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(92)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(92)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(92)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ROUND_RECT;
						HX_STACK_LINE(92)
						tmp6 = data;
					}
					HX_STACK_LINE(92)
					::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(92)
					::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(92)
					int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(92)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(92)
					Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(92)
					::openfl::_internal::renderer::DrawCommandBuffer tmp11 = c->buffer;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(92)
					int tmp12 = c->fPos;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(92)
					int tmp13 = (tmp12 + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(92)
					Float tmp14 = tmp11->f->__get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(92)
					::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(92)
					int tmp16 = c->fPos;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(92)
					int tmp17 = (tmp16 + (int)2);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(92)
					Float tmp18 = tmp15->f->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(92)
					::openfl::_internal::renderer::DrawCommandBuffer tmp19 = c->buffer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(92)
					int tmp20 = c->fPos;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(92)
					int tmp21 = (tmp20 + (int)3);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(92)
					Float tmp22 = tmp19->f->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(92)
					::openfl::_internal::renderer::DrawCommandBuffer tmp23 = c->buffer;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(92)
					int tmp24 = c->fPos;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(92)
					int tmp25 = (tmp24 + (int)4);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(92)
					Float tmp26 = tmp23->f->__get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(92)
					::openfl::_internal::renderer::DrawCommandBuffer tmp27 = c->buffer;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(92)
					int tmp28 = c->oPos;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(92)
					int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(92)
					Dynamic tmp30 = tmp27->o->__GetItem(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(92)
					Dynamic tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(92)
					this->drawRoundRect(tmp10,tmp14,tmp18,tmp22,tmp26,tmp31);
				}
				;break;
				case (int)10: {
					HX_STACK_LINE(93)
					::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(93)
					{
						HX_STACK_LINE(93)
						{
							HX_STACK_LINE(93)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(93)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(93)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(93)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(93)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(93)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(93)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(93)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(93)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(93)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(93)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(93)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(93)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(93)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(93)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(93)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(93)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(93)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(93)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(93)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(93)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(93)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(93)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(93)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(93)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(93)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(93)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(93)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(93)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(93)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(93)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(93)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(93)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(93)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::DRAW_TRIANGLES;
						HX_STACK_LINE(93)
						tmp6 = data;
					}
					HX_STACK_LINE(93)
					::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(93)
					::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(93)
					int tmp8 = c->oPos;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(93)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(93)
					Dynamic tmp10 = tmp7->o->__GetItem(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(93)
					::openfl::_Vector::FloatVector tmp11 = ((::openfl::_Vector::FloatVector)(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(93)
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(93)
					int tmp13 = c->oPos;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(93)
					int tmp14 = (tmp13 + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(93)
					Dynamic tmp15 = tmp12->o->__GetItem(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(93)
					::openfl::_Vector::IntVector tmp16 = ((::openfl::_Vector::IntVector)(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(93)
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(93)
					int tmp18 = c->oPos;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(93)
					int tmp19 = (tmp18 + (int)2);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(93)
					Dynamic tmp20 = tmp17->o->__GetItem(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(93)
					::openfl::_Vector::FloatVector tmp21 = ((::openfl::_Vector::FloatVector)(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(93)
					::openfl::_internal::renderer::DrawCommandBuffer tmp22 = c->buffer;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(93)
					int tmp23 = c->oPos;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(93)
					int tmp24 = (tmp23 + (int)3);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(93)
					Dynamic tmp25 = tmp22->o->__GetItem(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(93)
					Dynamic tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(93)
					this->drawTriangles(tmp11,tmp16,tmp21,tmp26);
				}
				;break;
				case (int)11: {
					HX_STACK_LINE(94)
					::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(94)
					{
						HX_STACK_LINE(94)
						{
							HX_STACK_LINE(94)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(94)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(94)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(94)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(94)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(94)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(94)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(94)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(94)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(94)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(94)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(94)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(94)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(94)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(94)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(94)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(94)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(94)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(94)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(94)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(94)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(94)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(94)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(94)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(94)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(94)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(94)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(94)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(94)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(94)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(94)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(94)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(94)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(94)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::END_FILL;
						HX_STACK_LINE(94)
						tmp6 = data;
					}
					HX_STACK_LINE(94)
					::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(94)
					this->endFill();
				}
				;break;
				case (int)12: {
					HX_STACK_LINE(95)
					::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(95)
					{
						HX_STACK_LINE(95)
						{
							HX_STACK_LINE(95)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(95)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(95)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(95)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(95)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(95)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(95)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(95)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(95)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(95)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(95)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(95)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(95)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(95)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(95)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(95)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(95)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(95)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(95)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(95)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(95)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(95)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(95)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(95)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(95)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(95)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(95)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(95)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(95)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(95)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(95)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(95)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(95)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(95)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_BITMAP_STYLE;
						HX_STACK_LINE(95)
						tmp6 = data;
					}
					HX_STACK_LINE(95)
					::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(95)
					::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(95)
					int tmp8 = c->oPos;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(95)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(95)
					Dynamic tmp10 = tmp7->o->__GetItem(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(95)
					::openfl::display::BitmapData tmp11 = ((::openfl::display::BitmapData)(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(95)
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(95)
					int tmp13 = c->oPos;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(95)
					int tmp14 = (tmp13 + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(95)
					Dynamic tmp15 = tmp12->o->__GetItem(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(95)
					::openfl::geom::Matrix tmp16 = ((::openfl::geom::Matrix)(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(95)
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(95)
					int tmp18 = c->bPos;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(95)
					int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(95)
					bool tmp20 = tmp17->b->__get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(95)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(95)
					::openfl::_internal::renderer::DrawCommandBuffer tmp22 = c->buffer;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(95)
					int tmp23 = c->bPos;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(95)
					int tmp24 = (tmp23 + (int)1);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(95)
					bool tmp25 = tmp22->b->__get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(95)
					bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(95)
					this->lineBitmapStyle(tmp11,tmp16,tmp21,tmp26);
				}
				;break;
				case (int)13: {
					HX_STACK_LINE(96)
					::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(96)
					{
						HX_STACK_LINE(96)
						{
							HX_STACK_LINE(96)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(96)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(96)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(96)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(96)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(96)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(96)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(96)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(96)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(96)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(96)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(96)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(96)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(96)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(96)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(96)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(96)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(96)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(96)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(96)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(96)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(96)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(96)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(96)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(96)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(96)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(96)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(96)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(96)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(96)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(96)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(96)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(96)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(96)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_GRADIENT_STYLE;
						HX_STACK_LINE(96)
						tmp6 = data;
					}
					HX_STACK_LINE(96)
					::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(96)
					::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(96)
					int tmp8 = c->oPos;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(96)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(96)
					Dynamic tmp10 = tmp7->o->__GetItem(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(96)
					Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(96)
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(96)
					int tmp13 = c->iiPos;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(96)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(96)
					::openfl::_internal::renderer::DrawCommandBuffer tmp15 = c->buffer;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(96)
					int tmp16 = c->ffPos;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(96)
					int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(96)
					::openfl::_internal::renderer::DrawCommandBuffer tmp18 = c->buffer;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(96)
					int tmp19 = c->iiPos;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(96)
					int tmp20 = (tmp19 + (int)1);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(96)
					::openfl::_internal::renderer::DrawCommandBuffer tmp21 = c->buffer;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(96)
					int tmp22 = c->oPos;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(96)
					int tmp23 = (tmp22 + (int)1);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(96)
					Dynamic tmp24 = tmp21->o->__GetItem(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(96)
					::openfl::geom::Matrix tmp25 = ((::openfl::geom::Matrix)(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(96)
					::openfl::_internal::renderer::DrawCommandBuffer tmp26 = c->buffer;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(96)
					int tmp27 = c->oPos;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(96)
					int tmp28 = (tmp27 + (int)2);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(96)
					Dynamic tmp29 = tmp26->o->__GetItem(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(96)
					Dynamic tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(96)
					::openfl::_internal::renderer::DrawCommandBuffer tmp31 = c->buffer;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(96)
					int tmp32 = c->oPos;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(96)
					int tmp33 = (tmp32 + (int)3);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(96)
					Dynamic tmp34 = tmp31->o->__GetItem(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(96)
					Dynamic tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(96)
					::openfl::_internal::renderer::DrawCommandBuffer tmp36 = c->buffer;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(96)
					int tmp37 = c->fPos;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(96)
					int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(96)
					Float tmp39 = tmp36->f->__get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(96)
					Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(96)
					this->lineGradientStyle(tmp11,tmp12->ii->__get(tmp14).StaticCast< Array< int > >(),tmp15->ff->__get(tmp17).StaticCast< Array< Float > >(),tmp18->ii->__get(tmp20).StaticCast< Array< int > >(),tmp25,tmp30,tmp35,tmp40);
				}
				;break;
				case (int)14: {
					HX_STACK_LINE(97)
					::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(97)
					{
						HX_STACK_LINE(97)
						{
							HX_STACK_LINE(97)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(97)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(97)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(97)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(97)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(97)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(97)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(97)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(97)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(97)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(97)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(97)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(97)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(97)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(97)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(97)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(97)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(97)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(97)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(97)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(97)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(97)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(97)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(97)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(97)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(97)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(97)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(97)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(97)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(97)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(97)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(97)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(97)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(97)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_STYLE;
						HX_STACK_LINE(97)
						tmp6 = data;
					}
					HX_STACK_LINE(97)
					::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(97)
					::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(97)
					int tmp8 = c->oPos;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(97)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(97)
					Dynamic tmp10 = tmp7->o->__GetItem(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(97)
					Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(97)
					::openfl::_internal::renderer::DrawCommandBuffer tmp12 = c->buffer;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(97)
					int tmp13 = c->iPos;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(97)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(97)
					int tmp15 = tmp12->i->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(97)
					int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(97)
					::openfl::_internal::renderer::DrawCommandBuffer tmp17 = c->buffer;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(97)
					int tmp18 = c->fPos;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(97)
					int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(97)
					Float tmp20 = tmp17->f->__get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(97)
					Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(97)
					::openfl::_internal::renderer::DrawCommandBuffer tmp22 = c->buffer;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(97)
					int tmp23 = c->bPos;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(97)
					int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(97)
					bool tmp25 = tmp22->b->__get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(97)
					bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(97)
					::openfl::_internal::renderer::DrawCommandBuffer tmp27 = c->buffer;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(97)
					int tmp28 = c->oPos;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(97)
					int tmp29 = (tmp28 + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(97)
					Dynamic tmp30 = tmp27->o->__GetItem(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(97)
					Dynamic tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(97)
					::openfl::_internal::renderer::DrawCommandBuffer tmp32 = c->buffer;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(97)
					int tmp33 = c->oPos;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(97)
					int tmp34 = (tmp33 + (int)2);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(97)
					Dynamic tmp35 = tmp32->o->__GetItem(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(97)
					Dynamic tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(97)
					::openfl::_internal::renderer::DrawCommandBuffer tmp37 = c->buffer;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(97)
					int tmp38 = c->oPos;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(97)
					int tmp39 = (tmp38 + (int)3);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(97)
					Dynamic tmp40 = tmp37->o->__GetItem(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(97)
					Dynamic tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(97)
					::openfl::_internal::renderer::DrawCommandBuffer tmp42 = c->buffer;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(97)
					int tmp43 = c->fPos;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(97)
					int tmp44 = (tmp43 + (int)1);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(97)
					Float tmp45 = tmp42->f->__get(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(97)
					Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(97)
					this->lineStyle(tmp11,tmp16,tmp21,tmp26,tmp31,tmp36,tmp41,tmp46);
				}
				;break;
				case (int)15: {
					HX_STACK_LINE(98)
					::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(98)
					{
						HX_STACK_LINE(98)
						{
							HX_STACK_LINE(98)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(98)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(98)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(98)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(98)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(98)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(98)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(98)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(98)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(98)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(98)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(98)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(98)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(98)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(98)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(98)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(98)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(98)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(98)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(98)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(98)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(98)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(98)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(98)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(98)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(98)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(98)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(98)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(98)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(98)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(98)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(98)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(98)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(98)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::LINE_TO;
						HX_STACK_LINE(98)
						tmp6 = data;
					}
					HX_STACK_LINE(98)
					::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(98)
					::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(98)
					int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(98)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(98)
					Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(98)
					::openfl::_internal::renderer::DrawCommandBuffer tmp11 = c->buffer;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(98)
					int tmp12 = c->fPos;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(98)
					int tmp13 = (tmp12 + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(98)
					Float tmp14 = tmp11->f->__get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(98)
					this->lineTo(tmp10,tmp14);
				}
				;break;
				case (int)16: {
					HX_STACK_LINE(99)
					::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(99)
					{
						HX_STACK_LINE(99)
						{
							HX_STACK_LINE(99)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(99)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(99)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(99)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(99)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(99)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(99)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(99)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(99)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(99)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(99)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(99)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(99)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(99)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(99)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(99)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(99)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(99)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(99)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(99)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(99)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(99)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(99)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(99)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(99)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(99)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(99)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(99)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(99)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(99)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(99)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(99)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(99)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(99)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::MOVE_TO;
						HX_STACK_LINE(99)
						tmp6 = data;
					}
					HX_STACK_LINE(99)
					::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(99)
					::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(99)
					int tmp8 = c->fPos;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(99)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(99)
					Float tmp10 = tmp7->f->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(99)
					::openfl::_internal::renderer::DrawCommandBuffer tmp11 = c->buffer;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(99)
					int tmp12 = c->fPos;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(99)
					int tmp13 = (tmp12 + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(99)
					Float tmp14 = tmp11->f->__get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(99)
					this->moveTo(tmp10,tmp14);
				}
				;break;
				case (int)17: {
					HX_STACK_LINE(100)
					::openfl::_internal::renderer::DrawCommandReader tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(100)
					{
						HX_STACK_LINE(100)
						{
							HX_STACK_LINE(100)
							::openfl::_internal::renderer::DrawCommandType _g2 = data->prev;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(100)
							switch( (int)(_g2->__Index())){
								case (int)0: {
									HX_STACK_LINE(100)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(100)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(100)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(100)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(100)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(100)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(100)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(100)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(100)
									hx::AddEq(data->fPos,(int)6);
								}
								;break;
								case (int)4: {
									HX_STACK_LINE(100)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)5: {
									HX_STACK_LINE(100)
									hx::AddEq(data->fPos,(int)3);
								}
								;break;
								case (int)6: {
									HX_STACK_LINE(100)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)7: {
									HX_STACK_LINE(100)
									hx::AddEq(data->fPos,(int)4);
								}
								;break;
								case (int)8: {
									HX_STACK_LINE(100)
									hx::AddEq(data->fPos,(int)5);
									HX_STACK_LINE(100)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								case (int)10: {
									HX_STACK_LINE(100)
									hx::AddEq(data->oPos,(int)4);
								}
								;break;
								case (int)11: {
									HX_STACK_LINE(100)
									Dynamic();
								}
								;break;
								case (int)12: {
									HX_STACK_LINE(100)
									hx::AddEq(data->oPos,(int)2);
									HX_STACK_LINE(100)
									hx::AddEq(data->bPos,(int)2);
								}
								;break;
								case (int)13: {
									HX_STACK_LINE(100)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(100)
									hx::AddEq(data->iiPos,(int)2);
									HX_STACK_LINE(100)
									hx::AddEq(data->ffPos,(int)1);
									HX_STACK_LINE(100)
									hx::AddEq(data->fPos,(int)1);
								}
								;break;
								case (int)14: {
									HX_STACK_LINE(100)
									hx::AddEq(data->oPos,(int)4);
									HX_STACK_LINE(100)
									hx::AddEq(data->iPos,(int)1);
									HX_STACK_LINE(100)
									hx::AddEq(data->fPos,(int)2);
									HX_STACK_LINE(100)
									hx::AddEq(data->bPos,(int)1);
								}
								;break;
								case (int)15: {
									HX_STACK_LINE(100)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)16: {
									HX_STACK_LINE(100)
									hx::AddEq(data->fPos,(int)2);
								}
								;break;
								case (int)17: {
									HX_STACK_LINE(100)
									hx::AddEq(data->oPos,(int)1);
								}
								;break;
								default: {
									HX_STACK_LINE(100)
									Dynamic();
								}
							}
						}
						HX_STACK_LINE(100)
						data->prev = ::openfl::_internal::renderer::DrawCommandType_obj::OVERRIDE_MATRIX;
						HX_STACK_LINE(100)
						tmp6 = data;
					}
					HX_STACK_LINE(100)
					::openfl::_internal::renderer::DrawCommandReader c = tmp6;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(100)
					::openfl::_internal::renderer::DrawCommandBuffer tmp7 = c->buffer;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(100)
					int tmp8 = c->oPos;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(100)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(100)
					Dynamic tmp10 = tmp7->o->__GetItem(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(100)
					::openfl::geom::Matrix tmp11 = ((::openfl::geom::Matrix)(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(100)
					this->overrideMatrix(tmp11);
				}
				;break;
				default: {
				}
			}
		}
	}
	HX_STACK_LINE(107)
	data->destroy();
	HX_STACK_LINE(108)
	::openfl::_internal::renderer::DrawCommandBuffer tmp3 = other;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(108)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandBuffer_obj,append,return )

Void DrawCommandBuffer_obj::beginBitmapFill( ::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,bool repeat,bool smooth){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","beginBitmapFill",0x90133359,"openfl._internal.renderer.DrawCommandBuffer.beginBitmapFill","openfl/_internal/renderer/DrawCommandBuffer.hx",113,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bitmap,"bitmap")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_ARG(repeat,"repeat")
		HX_STACK_ARG(smooth,"smooth")
		HX_STACK_LINE(115)
		this->prepareWrite();
		HX_STACK_LINE(117)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_BITMAP_FILL);
		HX_STACK_LINE(118)
		::openfl::display::BitmapData tmp = bitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(119)
		::openfl::geom::Matrix tmp1 = matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(120)
		bool tmp2 = repeat;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(120)
		this->b->push(tmp2);
		HX_STACK_LINE(121)
		bool tmp3 = smooth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(121)
		this->b->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,beginBitmapFill,(void))

Void DrawCommandBuffer_obj::beginFill( int color,Float alpha){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","beginFill",0x6ae7148a,"openfl._internal.renderer.DrawCommandBuffer.beginFill","openfl/_internal/renderer/DrawCommandBuffer.hx",125,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(127)
		this->prepareWrite();
		HX_STACK_LINE(129)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_FILL);
		HX_STACK_LINE(130)
		int tmp = color;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(130)
		this->i->push(tmp);
		HX_STACK_LINE(131)
		Float tmp1 = alpha;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(131)
		this->f->push(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DrawCommandBuffer_obj,beginFill,(void))

Void DrawCommandBuffer_obj::beginGradientFill( Dynamic type,Array< int > colors,Array< Float > alphas,Array< int > ratios,::openfl::geom::Matrix matrix,Dynamic spreadMethod,Dynamic interpolationMethod,Float focalPointRatio){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","beginGradientFill",0x7d0b119a,"openfl._internal.renderer.DrawCommandBuffer.beginGradientFill","openfl/_internal/renderer/DrawCommandBuffer.hx",136,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(colors,"colors")
		HX_STACK_ARG(alphas,"alphas")
		HX_STACK_ARG(ratios,"ratios")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_ARG(spreadMethod,"spreadMethod")
		HX_STACK_ARG(interpolationMethod,"interpolationMethod")
		HX_STACK_ARG(focalPointRatio,"focalPointRatio")
		HX_STACK_LINE(138)
		this->prepareWrite();
		HX_STACK_LINE(140)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::BEGIN_GRADIENT_FILL);
		HX_STACK_LINE(141)
		Dynamic tmp = type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(141)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(142)
		this->ii->push(colors);
		HX_STACK_LINE(143)
		this->ff->push(alphas);
		HX_STACK_LINE(144)
		this->ii->push(ratios);
		HX_STACK_LINE(145)
		::openfl::geom::Matrix tmp1 = matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(145)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(146)
		Dynamic tmp2 = spreadMethod;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(146)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
		HX_STACK_LINE(147)
		Dynamic tmp3 = interpolationMethod;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(147)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		HX_STACK_LINE(148)
		Float tmp4 = focalPointRatio;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(148)
		this->f->push(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(DrawCommandBuffer_obj,beginGradientFill,(void))

Void DrawCommandBuffer_obj::clear( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","clear",0xfe5ce1cb,"openfl._internal.renderer.DrawCommandBuffer.clear","openfl/_internal/renderer/DrawCommandBuffer.hx",153,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_LINE(155)
		::openfl::_internal::renderer::DrawCommandBuffer tmp = ::openfl::_internal::renderer::DrawCommandBuffer_obj::empty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(155)
		this->types = tmp->types;
		HX_STACK_LINE(157)
		::openfl::_internal::renderer::DrawCommandBuffer tmp1 = ::openfl::_internal::renderer::DrawCommandBuffer_obj::empty;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(157)
		this->b = tmp1->b;
		HX_STACK_LINE(158)
		::openfl::_internal::renderer::DrawCommandBuffer tmp2 = ::openfl::_internal::renderer::DrawCommandBuffer_obj::empty;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(158)
		this->i = tmp2->i;
		HX_STACK_LINE(159)
		::openfl::_internal::renderer::DrawCommandBuffer tmp3 = ::openfl::_internal::renderer::DrawCommandBuffer_obj::empty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(159)
		this->f = tmp3->f;
		HX_STACK_LINE(160)
		::openfl::_internal::renderer::DrawCommandBuffer tmp4 = ::openfl::_internal::renderer::DrawCommandBuffer_obj::empty;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(160)
		this->o = tmp4->o;
		HX_STACK_LINE(161)
		::openfl::_internal::renderer::DrawCommandBuffer tmp5 = ::openfl::_internal::renderer::DrawCommandBuffer_obj::empty;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(161)
		this->ff = tmp5->ff;
		HX_STACK_LINE(162)
		::openfl::_internal::renderer::DrawCommandBuffer tmp6 = ::openfl::_internal::renderer::DrawCommandBuffer_obj::empty;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(162)
		this->ii = tmp6->ii;
		HX_STACK_LINE(164)
		this->copyOnWrite = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,clear,(void))

::openfl::_internal::renderer::DrawCommandBuffer DrawCommandBuffer_obj::copy( ){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","copy",0xc3289d37,"openfl._internal.renderer.DrawCommandBuffer.copy","openfl/_internal/renderer/DrawCommandBuffer.hx",169,0xbc8e6e11)
	HX_STACK_THIS(this)
	HX_STACK_LINE(171)
	::openfl::_internal::renderer::DrawCommandBuffer tmp = ::openfl::_internal::renderer::DrawCommandBuffer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(171)
	::openfl::_internal::renderer::DrawCommandBuffer copy = tmp;		HX_STACK_VAR(copy,"copy");
	HX_STACK_LINE(172)
	copy->append(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(173)
	::openfl::_internal::renderer::DrawCommandBuffer tmp1 = copy;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(173)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,copy,return )

Void DrawCommandBuffer_obj::cubicCurveTo( Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","cubicCurveTo",0x96d43b62,"openfl._internal.renderer.DrawCommandBuffer.cubicCurveTo","openfl/_internal/renderer/DrawCommandBuffer.hx",178,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(controlX1,"controlX1")
		HX_STACK_ARG(controlY1,"controlY1")
		HX_STACK_ARG(controlX2,"controlX2")
		HX_STACK_ARG(controlY2,"controlY2")
		HX_STACK_ARG(anchorX,"anchorX")
		HX_STACK_ARG(anchorY,"anchorY")
		HX_STACK_LINE(180)
		this->prepareWrite();
		HX_STACK_LINE(182)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::CUBIC_CURVE_TO);
		HX_STACK_LINE(183)
		Float tmp = controlX1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(183)
		this->f->push(tmp);
		HX_STACK_LINE(184)
		Float tmp1 = controlY1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(184)
		this->f->push(tmp1);
		HX_STACK_LINE(185)
		Float tmp2 = controlX2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(185)
		this->f->push(tmp2);
		HX_STACK_LINE(186)
		Float tmp3 = controlY2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(186)
		this->f->push(tmp3);
		HX_STACK_LINE(187)
		Float tmp4 = anchorX;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(187)
		this->f->push(tmp4);
		HX_STACK_LINE(188)
		Float tmp5 = anchorY;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(188)
		this->f->push(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(DrawCommandBuffer_obj,cubicCurveTo,(void))

Void DrawCommandBuffer_obj::curveTo( Float controlX,Float controlY,Float anchorX,Float anchorY){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","curveTo",0x1bf4dbc8,"openfl._internal.renderer.DrawCommandBuffer.curveTo","openfl/_internal/renderer/DrawCommandBuffer.hx",192,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(controlX,"controlX")
		HX_STACK_ARG(controlY,"controlY")
		HX_STACK_ARG(anchorX,"anchorX")
		HX_STACK_ARG(anchorY,"anchorY")
		HX_STACK_LINE(194)
		this->prepareWrite();
		HX_STACK_LINE(196)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::CURVE_TO);
		HX_STACK_LINE(197)
		Float tmp = controlX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(197)
		this->f->push(tmp);
		HX_STACK_LINE(198)
		Float tmp1 = controlY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		this->f->push(tmp1);
		HX_STACK_LINE(199)
		Float tmp2 = anchorX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(199)
		this->f->push(tmp2);
		HX_STACK_LINE(200)
		Float tmp3 = anchorY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(200)
		this->f->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,curveTo,(void))

Void DrawCommandBuffer_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","destroy",0x71f2a8b8,"openfl._internal.renderer.DrawCommandBuffer.destroy","openfl/_internal/renderer/DrawCommandBuffer.hx",205,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_LINE(207)
		this->clear();
		HX_STACK_LINE(209)
		this->types = null();
		HX_STACK_LINE(211)
		this->b = null();
		HX_STACK_LINE(212)
		this->i = null();
		HX_STACK_LINE(213)
		this->f = null();
		HX_STACK_LINE(214)
		this->o = null();
		HX_STACK_LINE(215)
		this->ff = null();
		HX_STACK_LINE(216)
		this->ii = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,destroy,(void))

Void DrawCommandBuffer_obj::drawCircle( Float x,Float y,Float radius){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","drawCircle",0x40b9dc36,"openfl._internal.renderer.DrawCommandBuffer.drawCircle","openfl/_internal/renderer/DrawCommandBuffer.hx",221,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_LINE(223)
		this->prepareWrite();
		HX_STACK_LINE(225)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::DRAW_CIRCLE);
		HX_STACK_LINE(226)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(226)
		this->f->push(tmp);
		HX_STACK_LINE(227)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(227)
		this->f->push(tmp1);
		HX_STACK_LINE(228)
		Float tmp2 = radius;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(228)
		this->f->push(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DrawCommandBuffer_obj,drawCircle,(void))

Void DrawCommandBuffer_obj::drawEllipse( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","drawEllipse",0x77b6b7f8,"openfl._internal.renderer.DrawCommandBuffer.drawEllipse","openfl/_internal/renderer/DrawCommandBuffer.hx",233,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(235)
		this->prepareWrite();
		HX_STACK_LINE(237)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ELLIPSE);
		HX_STACK_LINE(238)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(238)
		this->f->push(tmp);
		HX_STACK_LINE(239)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(239)
		this->f->push(tmp1);
		HX_STACK_LINE(240)
		Float tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(240)
		this->f->push(tmp2);
		HX_STACK_LINE(241)
		Float tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(241)
		this->f->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,drawEllipse,(void))

Void DrawCommandBuffer_obj::drawRect( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","drawRect",0xd190c1ca,"openfl._internal.renderer.DrawCommandBuffer.drawRect","openfl/_internal/renderer/DrawCommandBuffer.hx",246,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(248)
		this->prepareWrite();
		HX_STACK_LINE(250)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::DRAW_RECT);
		HX_STACK_LINE(251)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(251)
		this->f->push(tmp);
		HX_STACK_LINE(252)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(252)
		this->f->push(tmp1);
		HX_STACK_LINE(253)
		Float tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(253)
		this->f->push(tmp2);
		HX_STACK_LINE(254)
		Float tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(254)
		this->f->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,drawRect,(void))

Void DrawCommandBuffer_obj::drawRoundRect( Float x,Float y,Float width,Float height,Float ellipseWidth,Dynamic ellipseHeight){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","drawRoundRect",0xb613a22c,"openfl._internal.renderer.DrawCommandBuffer.drawRoundRect","openfl/_internal/renderer/DrawCommandBuffer.hx",258,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(ellipseWidth,"ellipseWidth")
		HX_STACK_ARG(ellipseHeight,"ellipseHeight")
		HX_STACK_LINE(260)
		this->prepareWrite();
		HX_STACK_LINE(262)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::DRAW_ROUND_RECT);
		HX_STACK_LINE(263)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(263)
		this->f->push(tmp);
		HX_STACK_LINE(264)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(264)
		this->f->push(tmp1);
		HX_STACK_LINE(265)
		Float tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(265)
		this->f->push(tmp2);
		HX_STACK_LINE(266)
		Float tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(266)
		this->f->push(tmp3);
		HX_STACK_LINE(267)
		Float tmp4 = ellipseWidth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(267)
		this->f->push(tmp4);
		HX_STACK_LINE(268)
		Dynamic tmp5 = ellipseHeight;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(268)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(DrawCommandBuffer_obj,drawRoundRect,(void))

Void DrawCommandBuffer_obj::drawTriangles( ::openfl::_Vector::FloatVector vertices,::openfl::_Vector::IntVector indices,::openfl::_Vector::FloatVector uvtData,Dynamic culling){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","drawTriangles",0xb1d12245,"openfl._internal.renderer.DrawCommandBuffer.drawTriangles","openfl/_internal/renderer/DrawCommandBuffer.hx",273,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vertices,"vertices")
		HX_STACK_ARG(indices,"indices")
		HX_STACK_ARG(uvtData,"uvtData")
		HX_STACK_ARG(culling,"culling")
		HX_STACK_LINE(275)
		this->prepareWrite();
		HX_STACK_LINE(277)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::DRAW_TRIANGLES);
		HX_STACK_LINE(278)
		::openfl::_Vector::FloatVector tmp = vertices;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(278)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(279)
		::openfl::_Vector::IntVector tmp1 = indices;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(279)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(280)
		::openfl::_Vector::FloatVector tmp2 = uvtData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(280)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
		HX_STACK_LINE(281)
		Dynamic tmp3 = culling;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(281)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,drawTriangles,(void))

Void DrawCommandBuffer_obj::endFill( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","endFill",0x734d03bc,"openfl._internal.renderer.DrawCommandBuffer.endFill","openfl/_internal/renderer/DrawCommandBuffer.hx",286,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_LINE(288)
		this->prepareWrite();
		HX_STACK_LINE(290)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::END_FILL);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,endFill,(void))

Void DrawCommandBuffer_obj::lineBitmapStyle( ::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,bool repeat,bool smooth){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","lineBitmapStyle",0x6b2ca8ec,"openfl._internal.renderer.DrawCommandBuffer.lineBitmapStyle","openfl/_internal/renderer/DrawCommandBuffer.hx",295,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bitmap,"bitmap")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_ARG(repeat,"repeat")
		HX_STACK_ARG(smooth,"smooth")
		HX_STACK_LINE(297)
		this->prepareWrite();
		HX_STACK_LINE(299)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::LINE_BITMAP_STYLE);
		HX_STACK_LINE(300)
		::openfl::display::BitmapData tmp = bitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(300)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(301)
		::openfl::geom::Matrix tmp1 = matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(301)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(302)
		bool tmp2 = repeat;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(302)
		this->b->push(tmp2);
		HX_STACK_LINE(303)
		bool tmp3 = smooth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(303)
		this->b->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,lineBitmapStyle,(void))

Void DrawCommandBuffer_obj::lineGradientStyle( Dynamic type,Array< int > colors,Array< Float > alphas,Array< int > ratios,::openfl::geom::Matrix matrix,Dynamic spreadMethod,Dynamic interpolationMethod,Float focalPointRatio){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","lineGradientStyle",0x10f9f9cb,"openfl._internal.renderer.DrawCommandBuffer.lineGradientStyle","openfl/_internal/renderer/DrawCommandBuffer.hx",308,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(colors,"colors")
		HX_STACK_ARG(alphas,"alphas")
		HX_STACK_ARG(ratios,"ratios")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_ARG(spreadMethod,"spreadMethod")
		HX_STACK_ARG(interpolationMethod,"interpolationMethod")
		HX_STACK_ARG(focalPointRatio,"focalPointRatio")
		HX_STACK_LINE(310)
		this->prepareWrite();
		HX_STACK_LINE(312)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::LINE_GRADIENT_STYLE);
		HX_STACK_LINE(313)
		Dynamic tmp = type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(313)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(314)
		this->ii->push(colors);
		HX_STACK_LINE(315)
		this->ff->push(alphas);
		HX_STACK_LINE(316)
		this->ii->push(ratios);
		HX_STACK_LINE(317)
		::openfl::geom::Matrix tmp1 = matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(317)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(318)
		Dynamic tmp2 = spreadMethod;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(318)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
		HX_STACK_LINE(319)
		Dynamic tmp3 = interpolationMethod;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(319)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		HX_STACK_LINE(320)
		Float tmp4 = focalPointRatio;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(320)
		this->f->push(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(DrawCommandBuffer_obj,lineGradientStyle,(void))

Void DrawCommandBuffer_obj::lineStyle( Dynamic thickness,int color,Float alpha,bool pixelHinting,Dynamic scaleMode,Dynamic caps,Dynamic joints,Float miterLimit){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","lineStyle",0xa96a0fdb,"openfl._internal.renderer.DrawCommandBuffer.lineStyle","openfl/_internal/renderer/DrawCommandBuffer.hx",325,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(thickness,"thickness")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_ARG(pixelHinting,"pixelHinting")
		HX_STACK_ARG(scaleMode,"scaleMode")
		HX_STACK_ARG(caps,"caps")
		HX_STACK_ARG(joints,"joints")
		HX_STACK_ARG(miterLimit,"miterLimit")
		HX_STACK_LINE(327)
		this->prepareWrite();
		HX_STACK_LINE(329)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::LINE_STYLE);
		HX_STACK_LINE(330)
		Dynamic tmp = thickness;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(330)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(331)
		int tmp1 = color;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(331)
		this->i->push(tmp1);
		HX_STACK_LINE(332)
		Float tmp2 = alpha;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(332)
		this->f->push(tmp2);
		HX_STACK_LINE(333)
		bool tmp3 = pixelHinting;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(333)
		this->b->push(tmp3);
		HX_STACK_LINE(334)
		Dynamic tmp4 = scaleMode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(334)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
		HX_STACK_LINE(335)
		Dynamic tmp5 = caps;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(335)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
		HX_STACK_LINE(336)
		Dynamic tmp6 = joints;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(336)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp6);
		HX_STACK_LINE(337)
		Float tmp7 = miterLimit;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(337)
		this->f->push(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(DrawCommandBuffer_obj,lineStyle,(void))

Void DrawCommandBuffer_obj::lineTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","lineTo",0x77e10c91,"openfl._internal.renderer.DrawCommandBuffer.lineTo","openfl/_internal/renderer/DrawCommandBuffer.hx",342,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(344)
		this->prepareWrite();
		HX_STACK_LINE(346)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::LINE_TO);
		HX_STACK_LINE(347)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(347)
		this->f->push(tmp);
		HX_STACK_LINE(348)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(348)
		this->f->push(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DrawCommandBuffer_obj,lineTo,(void))

Void DrawCommandBuffer_obj::moveTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","moveTo",0x57ed98ee,"openfl._internal.renderer.DrawCommandBuffer.moveTo","openfl/_internal/renderer/DrawCommandBuffer.hx",353,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(355)
		this->prepareWrite();
		HX_STACK_LINE(357)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::MOVE_TO);
		HX_STACK_LINE(358)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(358)
		this->f->push(tmp);
		HX_STACK_LINE(359)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(359)
		this->f->push(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DrawCommandBuffer_obj,moveTo,(void))

Void DrawCommandBuffer_obj::prepareWrite( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","prepareWrite",0xac4d955a,"openfl._internal.renderer.DrawCommandBuffer.prepareWrite","openfl/_internal/renderer/DrawCommandBuffer.hx",364,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_LINE(366)
		bool tmp = this->copyOnWrite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(366)
		if ((tmp)){
			HX_STACK_LINE(368)
			this->types = this->types->copy();
			HX_STACK_LINE(369)
			this->b = this->b->copy();
			HX_STACK_LINE(370)
			this->i = this->i->copy();
			HX_STACK_LINE(371)
			this->f = this->f->copy();
			HX_STACK_LINE(372)
			this->o = this->o->__Field(HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"), hx::paccDynamic )();
			HX_STACK_LINE(373)
			this->ff = this->ff->copy();
			HX_STACK_LINE(374)
			this->ii = this->ii->copy();
			HX_STACK_LINE(376)
			this->copyOnWrite = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,prepareWrite,(void))

Void DrawCommandBuffer_obj::overrideMatrix( ::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","overrideMatrix",0xe20325af,"openfl._internal.renderer.DrawCommandBuffer.overrideMatrix","openfl/_internal/renderer/DrawCommandBuffer.hx",383,0xbc8e6e11)
		HX_STACK_THIS(this)
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(385)
		this->prepareWrite();
		HX_STACK_LINE(387)
		this->types->push(::openfl::_internal::renderer::DrawCommandType_obj::OVERRIDE_MATRIX);
		HX_STACK_LINE(388)
		::openfl::geom::Matrix tmp = matrix;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(388)
		this->o->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandBuffer_obj,overrideMatrix,(void))

int DrawCommandBuffer_obj::get_length( ){
	HX_STACK_FRAME("openfl._internal.renderer.DrawCommandBuffer","get_length",0x3877f3b1,"openfl._internal.renderer.DrawCommandBuffer.get_length","openfl/_internal/renderer/DrawCommandBuffer.hx",400,0xbc8e6e11)
	HX_STACK_THIS(this)
	HX_STACK_LINE(402)
	int tmp = this->types->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(402)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,get_length,return )

::openfl::_internal::renderer::DrawCommandBuffer DrawCommandBuffer_obj::empty;


DrawCommandBuffer_obj::DrawCommandBuffer_obj()
{
}

void DrawCommandBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DrawCommandBuffer);
	HX_MARK_MEMBER_NAME(types,"types");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(copyOnWrite,"copyOnWrite");
	HX_MARK_MEMBER_NAME(f,"f");
	HX_MARK_MEMBER_NAME(ff,"ff");
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_MEMBER_NAME(ii,"ii");
	HX_MARK_MEMBER_NAME(o,"o");
	HX_MARK_END_CLASS();
}

void DrawCommandBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(types,"types");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(copyOnWrite,"copyOnWrite");
	HX_VISIT_MEMBER_NAME(f,"f");
	HX_VISIT_MEMBER_NAME(ff,"ff");
	HX_VISIT_MEMBER_NAME(i,"i");
	HX_VISIT_MEMBER_NAME(ii,"ii");
	HX_VISIT_MEMBER_NAME(o,"o");
}

Dynamic DrawCommandBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"f") ) { return f; }
		if (HX_FIELD_EQ(inName,"i") ) { return i; }
		if (HX_FIELD_EQ(inName,"o") ) { return o; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"ff") ) { return ff; }
		if (HX_FIELD_EQ(inName,"ii") ) { return ii; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { return types; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"append") ) { return append_dyn(); }
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"endFill") ) { return endFill_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawRect") ) { return drawRect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"beginFill") ) { return beginFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineStyle") ) { return lineStyle_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return drawCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyOnWrite") ) { return copyOnWrite; }
		if (HX_FIELD_EQ(inName,"drawEllipse") ) { return drawEllipse_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cubicCurveTo") ) { return cubicCurveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"prepareWrite") ) { return prepareWrite_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { return drawRoundRect_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return drawTriangles_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"overrideMatrix") ) { return overrideMatrix_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"beginBitmapFill") ) { return beginBitmapFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineBitmapStyle") ) { return lineBitmapStyle_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"beginGradientFill") ) { return beginGradientFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineGradientStyle") ) { return lineGradientStyle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool DrawCommandBuffer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { outValue = empty; return true;  }
	}
	return false;
}

Dynamic DrawCommandBuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f") ) { f=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"o") ) { o=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"ff") ) { ff=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ii") ) { ii=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { types=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyOnWrite") ) { copyOnWrite=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DrawCommandBuffer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { empty=ioValue.Cast< ::openfl::_internal::renderer::DrawCommandBuffer >(); return true; }
	}
	return false;
}

void DrawCommandBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("types","\x79","\x70","\xcb","\x1a"));
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("copyOnWrite","\x0b","\x88","\xab","\xbc"));
	outFields->push(HX_HCSTRING("f","\x66","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("ff","\x40","\x59","\x00","\x00"));
	outFields->push(HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("ii","\xe0","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("o","\x6f","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DrawCommandBuffer_obj,types),HX_HCSTRING("types","\x79","\x70","\xcb","\x1a")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(DrawCommandBuffer_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{hx::fsBool,(int)offsetof(DrawCommandBuffer_obj,copyOnWrite),HX_HCSTRING("copyOnWrite","\x0b","\x88","\xab","\xbc")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(DrawCommandBuffer_obj,f),HX_HCSTRING("f","\x66","\x00","\x00","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DrawCommandBuffer_obj,ff),HX_HCSTRING("ff","\x40","\x59","\x00","\x00")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(DrawCommandBuffer_obj,i),HX_HCSTRING("i","\x69","\x00","\x00","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DrawCommandBuffer_obj,ii),HX_HCSTRING("ii","\xe0","\x5b","\x00","\x00")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(DrawCommandBuffer_obj,o),HX_HCSTRING("o","\x6f","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::_internal::renderer::DrawCommandBuffer*/ ,(void *) &DrawCommandBuffer_obj::empty,HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("types","\x79","\x70","\xcb","\x1a"),
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("copyOnWrite","\x0b","\x88","\xab","\xbc"),
	HX_HCSTRING("f","\x66","\x00","\x00","\x00"),
	HX_HCSTRING("ff","\x40","\x59","\x00","\x00"),
	HX_HCSTRING("i","\x69","\x00","\x00","\x00"),
	HX_HCSTRING("ii","\xe0","\x5b","\x00","\x00"),
	HX_HCSTRING("o","\x6f","\x00","\x00","\x00"),
	HX_HCSTRING("append","\xda","\xe1","\xd3","\x8f"),
	HX_HCSTRING("beginBitmapFill","\x9b","\xc9","\x07","\x6a"),
	HX_HCSTRING("beginFill","\x4c","\xad","\x95","\x8c"),
	HX_HCSTRING("beginGradientFill","\x5c","\x3c","\x03","\x2e"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("cubicCurveTo","\xe0","\x07","\x90","\x2e"),
	HX_HCSTRING("curveTo","\x0a","\x60","\x88","\xce"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("drawCircle","\x34","\xed","\xd0","\x97"),
	HX_HCSTRING("drawEllipse","\x3a","\x85","\xce","\x54"),
	HX_HCSTRING("drawRect","\x48","\xf7","\x10","\x60"),
	HX_HCSTRING("drawRoundRect","\xee","\xc3","\xaa","\xe2"),
	HX_HCSTRING("drawTriangles","\x07","\x44","\x68","\xde"),
	HX_HCSTRING("endFill","\xfe","\x87","\xe0","\x25"),
	HX_HCSTRING("lineBitmapStyle","\x2e","\x3f","\x21","\x45"),
	HX_HCSTRING("lineGradientStyle","\x8d","\x24","\xf2","\xc1"),
	HX_HCSTRING("lineStyle","\x9d","\xa8","\x18","\xcb"),
	HX_HCSTRING("lineTo","\x8f","\x46","\xa0","\xec"),
	HX_HCSTRING("moveTo","\xec","\xd2","\xac","\xcc"),
	HX_HCSTRING("prepareWrite","\xd8","\x61","\x09","\x44"),
	HX_HCSTRING("overrideMatrix","\xad","\x8d","\xa9","\xb9"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawCommandBuffer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DrawCommandBuffer_obj::empty,"empty");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawCommandBuffer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DrawCommandBuffer_obj::empty,"empty");
};

#endif

hx::Class DrawCommandBuffer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f"),
	::String(null()) };

void DrawCommandBuffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.DrawCommandBuffer","\x2c","\xee","\x3f","\x7e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DrawCommandBuffer_obj::__GetStatic;
	__mClass->mSetStaticField = &DrawCommandBuffer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DrawCommandBuffer_obj >;
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

void DrawCommandBuffer_obj::__boot()
{
	empty= ::openfl::_internal::renderer::DrawCommandBuffer_obj::__new();
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
