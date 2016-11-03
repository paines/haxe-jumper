#ifndef INCLUDED_lime_app__Future_FutureWork
#define INCLUDED_lime_app__Future_FutureWork

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,app,_Future,FutureWork)
HX_DECLARE_CLASS2(lime,_system,ThreadPool)
namespace lime{
namespace app{
namespace _Future{


class HXCPP_CLASS_ATTRIBUTES  FutureWork_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FutureWork_obj OBJ_;
		FutureWork_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.app._Future.FutureWork")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FutureWork_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FutureWork_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FutureWork","\xd4","\xa7","\xda","\xde"); }

		static ::lime::_system::ThreadPool threadPool;
		static Void queue( Dynamic state);
		static Dynamic queue_dyn();

		static Void threadPool_doWork( Dynamic state);
		static Dynamic threadPool_doWork_dyn();

		static Void threadPool_onComplete( Dynamic state);
		static Dynamic threadPool_onComplete_dyn();

		static Void threadPool_onError( Dynamic state);
		static Dynamic threadPool_onError_dyn();

};

} // end namespace lime
} // end namespace app
} // end namespace _Future

#endif /* INCLUDED_lime_app__Future_FutureWork */ 
