#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise
#include <lime/app/Promise.h>
#endif
#ifndef INCLUDED_lime_app__Future_FutureWork
#include <lime/app/_Future/FutureWork.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
namespace lime{
namespace app{

Void Future_obj::__construct(Dynamic work)
{
HX_STACK_FRAME("lime.app.Future","new",0xc0e3b2bb,"lime.app.Future.new","lime/app/Future.hx",24,0x058e0853)
HX_STACK_THIS(this)
HX_STACK_ARG(work,"work")
{
	HX_STACK_LINE(26)
	bool tmp = (work != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	if ((tmp)){
		HX_STACK_LINE(28)
		::lime::app::Promise tmp1 = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		::lime::app::Promise promise = tmp1;		HX_STACK_VAR(promise,"promise");
		HX_STACK_LINE(29)
		promise->future = hx::ObjectPtr<OBJ_>(this);
		struct _Function_2_1{
			inline static Dynamic Block( ::lime::app::Promise &promise,Dynamic &work){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/app/Future.hx",31,0x058e0853)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("promise","\x9b","\xcd","\xe9","\xf7") , promise,false);
					__result->Add(HX_HCSTRING("work","\xd1","\x01","\xfd","\x4e") , work,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(31)
		Dynamic tmp2 = _Function_2_1::Block(promise,work);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(31)
		::lime::app::_Future::FutureWork_obj::queue(tmp2);
	}
}
;
	return null();
}

//Future_obj::~Future_obj() { }

Dynamic Future_obj::__CreateEmpty() { return  new Future_obj; }
hx::ObjectPtr< Future_obj > Future_obj::__new(Dynamic work)
{  hx::ObjectPtr< Future_obj > _result_ = new Future_obj();
	_result_->__construct(work);
	return _result_;}

Dynamic Future_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Future_obj > _result_ = new Future_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::lime::app::Future Future_obj::onComplete( Dynamic listener){
	HX_STACK_FRAME("lime.app.Future","onComplete",0x3a7dc3fd,"lime.app.Future.onComplete","lime/app/Future.hx",38,0x058e0853)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(40)
	bool tmp = (listener != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	if ((tmp)){
		HX_STACK_LINE(42)
		bool tmp1 = this->isComplete;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		if ((tmp1)){
			HX_STACK_LINE(44)
			Dynamic tmp2 = this->value;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(44)
			listener(tmp2).Cast< Void >();
		}
		else{
			HX_STACK_LINE(46)
			bool tmp2 = this->isError;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(46)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(46)
			if ((tmp3)){
				HX_STACK_LINE(48)
				bool tmp4 = (this->__completeListeners == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(48)
				if ((tmp4)){
					HX_STACK_LINE(50)
					this->__completeListeners = Dynamic( Array_obj<Dynamic>::__new() );
				}
				HX_STACK_LINE(54)
				Dynamic tmp5 = listener;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(54)
				this->__completeListeners->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
			}
		}
	}
	HX_STACK_LINE(60)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,onComplete,return )

::lime::app::Future Future_obj::onError( Dynamic listener){
	HX_STACK_FRAME("lime.app.Future","onError",0xb2071604,"lime.app.Future.onError","lime/app/Future.hx",65,0x058e0853)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(67)
	bool tmp = (listener != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	if ((tmp)){
		HX_STACK_LINE(69)
		bool tmp1 = this->isError;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		if ((tmp1)){
			HX_STACK_LINE(71)
			Dynamic tmp2 = this->error;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(71)
			listener(tmp2).Cast< Void >();
		}
		else{
			HX_STACK_LINE(73)
			bool tmp2 = this->isComplete;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(73)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(73)
			if ((tmp3)){
				HX_STACK_LINE(75)
				bool tmp4 = (this->__errorListeners == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(75)
				if ((tmp4)){
					HX_STACK_LINE(77)
					this->__errorListeners = Dynamic( Array_obj<Dynamic>::__new() );
				}
				HX_STACK_LINE(81)
				Dynamic tmp5 = listener;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(81)
				this->__errorListeners->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
			}
		}
	}
	HX_STACK_LINE(87)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,onError,return )

::lime::app::Future Future_obj::onProgress( Dynamic listener){
	HX_STACK_FRAME("lime.app.Future","onProgress",0x40e0baf1,"lime.app.Future.onProgress","lime/app/Future.hx",92,0x058e0853)
	HX_STACK_THIS(this)
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(94)
	bool tmp = (listener != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	if ((tmp)){
		HX_STACK_LINE(96)
		bool tmp1 = (this->__progressListeners == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		if ((tmp1)){
			HX_STACK_LINE(98)
			this->__progressListeners = Dynamic( Array_obj<Dynamic>::__new() );
		}
		HX_STACK_LINE(102)
		Dynamic tmp2 = listener;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(102)
		this->__progressListeners->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
	}
	HX_STACK_LINE(106)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,onProgress,return )

::lime::app::Future Future_obj::ready( hx::Null< int >  __o_waitTime){
int waitTime = __o_waitTime.Default(-1);
	HX_STACK_FRAME("lime.app.Future","ready",0xd4cc0f7e,"lime.app.Future.ready","lime/app/Future.hx",111,0x058e0853)
	HX_STACK_THIS(this)
	HX_STACK_ARG(waitTime,"waitTime")
{
		HX_STACK_LINE(128)
		bool tmp = this->isComplete;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(128)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(128)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(128)
		if ((tmp1)){
			HX_STACK_LINE(128)
			tmp2 = this->isError;
		}
		else{
			HX_STACK_LINE(128)
			tmp2 = true;
		}
		HX_STACK_LINE(128)
		if ((tmp2)){
			HX_STACK_LINE(130)
			return hx::ObjectPtr<OBJ_>(this);
		}
		else{
			HX_STACK_LINE(134)
			int tmp3 = ::lime::_system::System_obj::getTimer();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(134)
			int time = tmp3;		HX_STACK_VAR(time,"time");
			HX_STACK_LINE(135)
			bool tmp4 = (waitTime > (int)-1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(135)
			int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(135)
			if ((tmp4)){
				HX_STACK_LINE(135)
				tmp5 = (time + waitTime);
			}
			else{
				HX_STACK_LINE(135)
				tmp5 = time;
			}
			HX_STACK_LINE(135)
			int end = tmp5;		HX_STACK_VAR(end,"end");
			HX_STACK_LINE(137)
			while((true)){
				HX_STACK_LINE(137)
				bool tmp6 = this->isComplete;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(137)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(137)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(137)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(137)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(137)
				if ((tmp9)){
					HX_STACK_LINE(137)
					bool tmp11 = this->isError;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(137)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(137)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(137)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(137)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(137)
					tmp10 = !(tmp15);
				}
				else{
					HX_STACK_LINE(137)
					tmp10 = false;
				}
				HX_STACK_LINE(137)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(137)
				if ((tmp10)){
					HX_STACK_LINE(137)
					tmp11 = (time <= end);
				}
				else{
					HX_STACK_LINE(137)
					tmp11 = false;
				}
				HX_STACK_LINE(137)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(137)
				if ((tmp12)){
					HX_STACK_LINE(137)
					break;
				}
				HX_STACK_LINE(140)
				::Sys_obj::sleep(((Float)0.01));
				HX_STACK_LINE(143)
				int tmp13 = ::lime::_system::System_obj::getTimer();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(143)
				time = tmp13;
			}
			HX_STACK_LINE(147)
			return hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(128)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,ready,return )

Dynamic Future_obj::result( hx::Null< int >  __o_waitTime){
int waitTime = __o_waitTime.Default(-1);
	HX_STACK_FRAME("lime.app.Future","result",0x69b43162,"lime.app.Future.result","lime/app/Future.hx",156,0x058e0853)
	HX_STACK_THIS(this)
	HX_STACK_ARG(waitTime,"waitTime")
{
		HX_STACK_LINE(158)
		int tmp = waitTime;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(158)
		this->ready(tmp);
		HX_STACK_LINE(160)
		bool tmp1 = this->isComplete;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(160)
		if ((tmp1)){
			HX_STACK_LINE(162)
			Dynamic tmp2 = this->value;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(162)
			return tmp2;
		}
		else{
			HX_STACK_LINE(166)
			return null();
		}
		HX_STACK_LINE(160)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,result,return )

::lime::app::Future Future_obj::then( Dynamic next){
	HX_STACK_FRAME("lime.app.Future","then",0x0a523022,"lime.app.Future.then","lime/app/Future.hx",173,0x058e0853)
	HX_STACK_THIS(this)
	HX_STACK_ARG(next,"next")
	HX_STACK_LINE(175)
	bool tmp = this->isComplete;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(175)
	if ((tmp)){
		HX_STACK_LINE(177)
		Dynamic tmp1 = this->value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(177)
		::lime::app::Future tmp2 = next(tmp1).Cast< ::lime::app::Future >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(177)
		return tmp2;
	}
	else{
		HX_STACK_LINE(179)
		bool tmp1 = this->isError;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(179)
		if ((tmp1)){
			HX_STACK_LINE(181)
			::lime::app::Future tmp2 = ::lime::app::Future_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(181)
			::lime::app::Future future = tmp2;		HX_STACK_VAR(future,"future");
			HX_STACK_LINE(182)
			Dynamic tmp3 = this->error;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(182)
			future->onError(tmp3);
			HX_STACK_LINE(183)
			::lime::app::Future tmp4 = future;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(183)
			return tmp4;
		}
		else{
			HX_STACK_LINE(187)
			::lime::app::Promise tmp2 = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(187)
			::lime::app::Promise promise = tmp2;		HX_STACK_VAR(promise,"promise");
			HX_STACK_LINE(189)
			Dynamic tmp3 = promise->error_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(189)
			this->onError(tmp3);
			HX_STACK_LINE(190)
			Dynamic tmp4 = promise->progress_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(190)
			this->onProgress(tmp4);

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,::lime::app::Promise,promise,Dynamic,next)
			int __ArgCount() const { return 1; }
			Void run(Dynamic val){
				HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","lime/app/Future.hx",192,0x058e0853)
				HX_STACK_ARG(val,"val")
				{
					HX_STACK_LINE(194)
					Dynamic tmp5 = val;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(194)
					::lime::app::Future tmp6 = next(tmp5).Cast< ::lime::app::Future >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(194)
					::lime::app::Future future = tmp6;		HX_STACK_VAR(future,"future");
					HX_STACK_LINE(195)
					Dynamic tmp7 = promise->error_dyn();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(195)
					future->onError(tmp7);
					HX_STACK_LINE(196)
					Dynamic tmp8 = promise->complete_dyn();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(196)
					future->onComplete(tmp8);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(192)
			this->onComplete( Dynamic(new _Function_3_1(promise,next)));
			HX_STACK_LINE(200)
			::lime::app::Future tmp5 = promise->future;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(200)
			return tmp5;
		}
	}
	HX_STACK_LINE(175)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,then,return )


Future_obj::Future_obj()
{
}

void Future_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Future);
	HX_MARK_MEMBER_NAME(error,"error");
	HX_MARK_MEMBER_NAME(isComplete,"isComplete");
	HX_MARK_MEMBER_NAME(isError,"isError");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(__completeListeners,"__completeListeners");
	HX_MARK_MEMBER_NAME(__errorListeners,"__errorListeners");
	HX_MARK_MEMBER_NAME(__progressListeners,"__progressListeners");
	HX_MARK_END_CLASS();
}

void Future_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(error,"error");
	HX_VISIT_MEMBER_NAME(isComplete,"isComplete");
	HX_VISIT_MEMBER_NAME(isError,"isError");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(__completeListeners,"__completeListeners");
	HX_VISIT_MEMBER_NAME(__errorListeners,"__errorListeners");
	HX_VISIT_MEMBER_NAME(__progressListeners,"__progressListeners");
}

Dynamic Future_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"then") ) { return then_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return error; }
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		if (HX_FIELD_EQ(inName,"ready") ) { return ready_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { return result_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isError") ) { return isError; }
		if (HX_FIELD_EQ(inName,"onError") ) { return onError_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isComplete") ) { return isComplete; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"onProgress") ) { return onProgress_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__errorListeners") ) { return __errorListeners; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__completeListeners") ) { return __completeListeners; }
		if (HX_FIELD_EQ(inName,"__progressListeners") ) { return __progressListeners; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Future_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { error=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isError") ) { isError=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isComplete") ) { isComplete=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__errorListeners") ) { __errorListeners=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__completeListeners") ) { __completeListeners=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__progressListeners") ) { __progressListeners=inValue.Cast< cpp::ArrayBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Future_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"));
	outFields->push(HX_HCSTRING("isComplete","\xc3","\x12","\x77","\xfa"));
	outFields->push(HX_HCSTRING("isError","\x7e","\x6f","\xaf","\x0f"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("__completeListeners","\x66","\x0e","\x5a","\x85"));
	outFields->push(HX_HCSTRING("__errorListeners","\xb7","\x4b","\x93","\x70"));
	outFields->push(HX_HCSTRING("__progressListeners","\xf2","\x98","\xe2","\x78"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Future_obj,error),HX_HCSTRING("error","\xc8","\xcb","\x29","\x73")},
	{hx::fsBool,(int)offsetof(Future_obj,isComplete),HX_HCSTRING("isComplete","\xc3","\x12","\x77","\xfa")},
	{hx::fsBool,(int)offsetof(Future_obj,isError),HX_HCSTRING("isError","\x7e","\x6f","\xaf","\x0f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Future_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Future_obj,__completeListeners),HX_HCSTRING("__completeListeners","\x66","\x0e","\x5a","\x85")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Future_obj,__errorListeners),HX_HCSTRING("__errorListeners","\xb7","\x4b","\x93","\x70")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Future_obj,__progressListeners),HX_HCSTRING("__progressListeners","\xf2","\x98","\xe2","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("isComplete","\xc3","\x12","\x77","\xfa"),
	HX_HCSTRING("isError","\x7e","\x6f","\xaf","\x0f"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("__completeListeners","\x66","\x0e","\x5a","\x85"),
	HX_HCSTRING("__errorListeners","\xb7","\x4b","\x93","\x70"),
	HX_HCSTRING("__progressListeners","\xf2","\x98","\xe2","\x78"),
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"),
	HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63"),
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("result","\xdd","\x68","\x84","\x08"),
	HX_HCSTRING("then","\xdd","\x02","\xfc","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Future_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Future_obj::__mClass,"__mClass");
};

#endif

hx::Class Future_obj::__mClass;

void Future_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.app.Future","\x49","\x39","\x57","\xcb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Future_obj >;
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
