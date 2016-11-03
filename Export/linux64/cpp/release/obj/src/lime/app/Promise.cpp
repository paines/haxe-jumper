#include <hxcpp.h>

#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise
#include <lime/app/Promise.h>
#endif
namespace lime{
namespace app{

Void Promise_obj::__construct()
{
HX_STACK_FRAME("lime.app.Promise","new",0x895fc147,"lime.app.Promise.new","lime/app/Promise.hx",16,0x10ba4f0b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	::lime::app::Future tmp = ::lime::app::Future_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	this->future = tmp;
}
;
	return null();
}

//Promise_obj::~Promise_obj() { }

Dynamic Promise_obj::__CreateEmpty() { return  new Promise_obj; }
hx::ObjectPtr< Promise_obj > Promise_obj::__new()
{  hx::ObjectPtr< Promise_obj > _result_ = new Promise_obj();
	_result_->__construct();
	return _result_;}

Dynamic Promise_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Promise_obj > _result_ = new Promise_obj();
	_result_->__construct();
	return _result_;}

::lime::app::Promise Promise_obj::complete( Dynamic data){
	HX_STACK_FRAME("lime.app.Promise","complete",0x51e66a72,"lime.app.Promise.complete","lime/app/Promise.hx",23,0x10ba4f0b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(25)
	::lime::app::Future tmp = this->future;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	bool tmp1 = tmp->isError;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	if ((tmp2)){
		HX_STACK_LINE(27)
		::lime::app::Future tmp3 = this->future;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		tmp3->isComplete = true;
		HX_STACK_LINE(28)
		::lime::app::Future tmp4 = this->future;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		tmp4->value = data;
		HX_STACK_LINE(30)
		::lime::app::Future tmp5 = this->future;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(30)
		bool tmp6 = (tmp5->__completeListeners != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(30)
		if ((tmp6)){
			HX_STACK_LINE(32)
			{
				HX_STACK_LINE(32)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(32)
				::lime::app::Future tmp7 = this->future;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(32)
				cpp::ArrayBase _g1 = tmp7->__completeListeners;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(32)
				while((true)){
					HX_STACK_LINE(32)
					bool tmp8 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(32)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(32)
					if ((tmp9)){
						HX_STACK_LINE(32)
						break;
					}
					HX_STACK_LINE(32)
					Dynamic tmp10 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(32)
					Dynamic listener = tmp10;		HX_STACK_VAR(listener,"listener");
					HX_STACK_LINE(32)
					++(_g);
					HX_STACK_LINE(34)
					Dynamic tmp11 = data;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(34)
					listener(tmp11).Cast< Void >();
				}
			}
			HX_STACK_LINE(38)
			::lime::app::Future tmp7 = this->future;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(38)
			tmp7->__completeListeners = null();
		}
	}
	HX_STACK_LINE(44)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,complete,return )

::lime::app::Promise Promise_obj::completeWith( ::lime::app::Future future){
	HX_STACK_FRAME("lime.app.Promise","completeWith",0x93e32d98,"lime.app.Promise.completeWith","lime/app/Promise.hx",49,0x10ba4f0b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(future,"future")
	HX_STACK_LINE(51)
	Dynamic tmp = this->complete_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	future->onComplete(tmp);
	HX_STACK_LINE(52)
	Dynamic tmp1 = this->error_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	future->onError(tmp1);
	HX_STACK_LINE(53)
	Dynamic tmp2 = this->progress_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(53)
	future->onProgress(tmp2);
	HX_STACK_LINE(55)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,completeWith,return )

::lime::app::Promise Promise_obj::error( Dynamic msg){
	HX_STACK_FRAME("lime.app.Promise","error",0x4bc1046f,"lime.app.Promise.error","lime/app/Promise.hx",61,0x10ba4f0b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(msg,"msg")
	HX_STACK_LINE(63)
	::lime::app::Future tmp = this->future;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	bool tmp1 = tmp->isComplete;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(63)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(63)
	if ((tmp2)){
		HX_STACK_LINE(65)
		::lime::app::Future tmp3 = this->future;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(65)
		tmp3->isError = true;
		HX_STACK_LINE(66)
		::lime::app::Future tmp4 = this->future;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(66)
		tmp4->error = msg;
		HX_STACK_LINE(68)
		::lime::app::Future tmp5 = this->future;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(68)
		bool tmp6 = (tmp5->__errorListeners != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(68)
		if ((tmp6)){
			HX_STACK_LINE(70)
			{
				HX_STACK_LINE(70)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(70)
				::lime::app::Future tmp7 = this->future;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(70)
				cpp::ArrayBase _g1 = tmp7->__errorListeners;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(70)
				while((true)){
					HX_STACK_LINE(70)
					bool tmp8 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(70)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(70)
					if ((tmp9)){
						HX_STACK_LINE(70)
						break;
					}
					HX_STACK_LINE(70)
					Dynamic tmp10 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(70)
					Dynamic listener = tmp10;		HX_STACK_VAR(listener,"listener");
					HX_STACK_LINE(70)
					++(_g);
					HX_STACK_LINE(72)
					Dynamic tmp11 = msg;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(72)
					listener(tmp11).Cast< Void >();
				}
			}
			HX_STACK_LINE(76)
			::lime::app::Future tmp7 = this->future;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(76)
			tmp7->__errorListeners = null();
		}
	}
	HX_STACK_LINE(82)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,error,return )

::lime::app::Promise Promise_obj::progress( Float progress){
	HX_STACK_FRAME("lime.app.Promise","progress",0x58496166,"lime.app.Promise.progress","lime/app/Promise.hx",87,0x10ba4f0b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(progress,"progress")
	HX_STACK_LINE(89)
	::lime::app::Future tmp = this->future;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	bool tmp1 = tmp->isError;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(89)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(89)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(89)
	if ((tmp3)){
		HX_STACK_LINE(89)
		::lime::app::Future tmp5 = this->future;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(89)
		::lime::app::Future tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(89)
		bool tmp7 = tmp6->isComplete;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(89)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(89)
		tmp4 = !(tmp8);
	}
	else{
		HX_STACK_LINE(89)
		tmp4 = false;
	}
	HX_STACK_LINE(89)
	if ((tmp4)){
		HX_STACK_LINE(91)
		::lime::app::Future tmp5 = this->future;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(91)
		bool tmp6 = (tmp5->__progressListeners != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(91)
		if ((tmp6)){
			HX_STACK_LINE(93)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(93)
			::lime::app::Future tmp7 = this->future;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(93)
			cpp::ArrayBase _g1 = tmp7->__progressListeners;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(93)
			while((true)){
				HX_STACK_LINE(93)
				bool tmp8 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(93)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(93)
				if ((tmp9)){
					HX_STACK_LINE(93)
					break;
				}
				HX_STACK_LINE(93)
				Dynamic tmp10 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(93)
				Dynamic listener = tmp10;		HX_STACK_VAR(listener,"listener");
				HX_STACK_LINE(93)
				++(_g);
				HX_STACK_LINE(95)
				Float tmp11 = progress;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(95)
				listener(tmp11).Cast< Void >();
			}
		}
	}
	HX_STACK_LINE(103)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,progress,return )

bool Promise_obj::get_isComplete( ){
	HX_STACK_FRAME("lime.app.Promise","get_isComplete",0x07c29585,"lime.app.Promise.get_isComplete","lime/app/Promise.hx",115,0x10ba4f0b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(117)
	::lime::app::Future tmp = this->future;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	bool tmp1 = tmp->isComplete;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(117)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,get_isComplete,return )

bool Promise_obj::get_isError( ){
	HX_STACK_FRAME("lime.app.Promise","get_isError",0x4bfb7f7c,"lime.app.Promise.get_isError","lime/app/Promise.hx",122,0x10ba4f0b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(124)
	::lime::app::Future tmp = this->future;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	bool tmp1 = tmp->isError;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(124)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,get_isError,return )


Promise_obj::Promise_obj()
{
}

void Promise_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Promise);
	HX_MARK_MEMBER_NAME(future,"future");
	HX_MARK_MEMBER_NAME(isComplete,"isComplete");
	HX_MARK_MEMBER_NAME(isError,"isError");
	HX_MARK_END_CLASS();
}

void Promise_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(future,"future");
	HX_VISIT_MEMBER_NAME(isComplete,"isComplete");
	HX_VISIT_MEMBER_NAME(isError,"isError");
}

Dynamic Promise_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return error_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"future") ) { return future; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isError") ) { return inCallProp == hx::paccAlways ? get_isError() : isError; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { return complete_dyn(); }
		if (HX_FIELD_EQ(inName,"progress") ) { return progress_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isComplete") ) { return inCallProp == hx::paccAlways ? get_isComplete() : isComplete; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_isError") ) { return get_isError_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"completeWith") ) { return completeWith_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_isComplete") ) { return get_isComplete_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Promise_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"future") ) { future=inValue.Cast< ::lime::app::Future >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isError") ) { isError=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isComplete") ) { isComplete=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Promise_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("future","\x43","\x98","\x4e","\x73"));
	outFields->push(HX_HCSTRING("isComplete","\xc3","\x12","\x77","\xfa"));
	outFields->push(HX_HCSTRING("isError","\x7e","\x6f","\xaf","\x0f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::app::Future*/ ,(int)offsetof(Promise_obj,future),HX_HCSTRING("future","\x43","\x98","\x4e","\x73")},
	{hx::fsBool,(int)offsetof(Promise_obj,isComplete),HX_HCSTRING("isComplete","\xc3","\x12","\x77","\xfa")},
	{hx::fsBool,(int)offsetof(Promise_obj,isError),HX_HCSTRING("isError","\x7e","\x6f","\xaf","\x0f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("future","\x43","\x98","\x4e","\x73"),
	HX_HCSTRING("isComplete","\xc3","\x12","\x77","\xfa"),
	HX_HCSTRING("isError","\x7e","\x6f","\xaf","\x0f"),
	HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),
	HX_HCSTRING("completeWith","\x5f","\xf3","\xba","\xc2"),
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"),
	HX_HCSTRING("get_isComplete","\x0c","\x9b","\x6c","\x70"),
	HX_HCSTRING("get_isError","\x95","\xcf","\xa9","\x95"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Promise_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Promise_obj::__mClass,"__mClass");
};

#endif

hx::Class Promise_obj::__mClass;

void Promise_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.app.Promise","\xd5","\x11","\x6e","\xa7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Promise_obj >;
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

} // end namespace lime
} // end namespace app
