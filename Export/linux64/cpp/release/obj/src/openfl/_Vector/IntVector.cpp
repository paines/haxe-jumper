#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
namespace openfl{
namespace _Vector{

Void IntVector_obj::__construct(Dynamic length,Dynamic fixed,Array< int > array)
{
HX_STACK_FRAME("openfl._Vector.IntVector","new",0x6313ae9a,"openfl._Vector.IntVector.new","openfl/Vector.hx",1155,0x4a01873c)
HX_STACK_THIS(this)
HX_STACK_ARG(length,"length")
HX_STACK_ARG(fixed,"fixed")
HX_STACK_ARG(array,"array")
{
	HX_STACK_LINE(1157)
	bool tmp = (array == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1157)
	if ((tmp)){
		HX_STACK_LINE(1159)
		array = Array_obj< int >::__new();
	}
	HX_STACK_LINE(1163)
	this->__array = array;
	HX_STACK_LINE(1165)
	bool tmp1 = (length != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1165)
	if ((tmp1)){
		HX_STACK_LINE(1167)
		Dynamic tmp2 = length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1167)
		this->set_length(tmp2);
	}
	HX_STACK_LINE(1171)
	bool tmp2 = (fixed == true);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1171)
	this->fixed = tmp2;
}
;
	return null();
}

//IntVector_obj::~IntVector_obj() { }

Dynamic IntVector_obj::__CreateEmpty() { return  new IntVector_obj; }
hx::ObjectPtr< IntVector_obj > IntVector_obj::__new(Dynamic length,Dynamic fixed,Array< int > array)
{  hx::ObjectPtr< IntVector_obj > _result_ = new IntVector_obj();
	_result_->__construct(length,fixed,array);
	return _result_;}

Dynamic IntVector_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IntVector_obj > _result_ = new IntVector_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

hx::Object *IntVector_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::_Vector::IVector_obj)) return operator ::openfl::_Vector::IVector_obj *();
	return super::__ToInterface(inType);
}

IntVector_obj::operator ::openfl::_Vector::IVector_obj *()
	{ return new ::openfl::_Vector::IVector_delegate_< IntVector_obj >(this); }
::openfl::_Vector::IVector IntVector_obj::concat( ::openfl::_Vector::IVector a){
	HX_STACK_FRAME("openfl._Vector.IntVector","concat",0x4a254b1a,"openfl._Vector.IntVector.concat","openfl/Vector.hx",1176,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(1178)
	bool tmp = (a == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1178)
	if ((tmp)){
		HX_STACK_LINE(1180)
		::openfl::_Vector::IntVector tmp1 = ::openfl::_Vector::IntVector_obj::__new(null(),null(),this->__array->copy());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1180)
		return tmp1;
	}
	else{
		HX_STACK_LINE(1184)
		::openfl::_Vector::IntVector tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1184)
		tmp1 = hx::TCast< ::openfl::_Vector::IntVector >::cast(a);
		HX_STACK_LINE(1184)
		::openfl::_Vector::IntVector tmp2 = ::openfl::_Vector::IntVector_obj::__new(null(),null(),this->__array->concat(tmp1->__array));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1184)
		return tmp2;
	}
	HX_STACK_LINE(1178)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,concat,return )

::openfl::_Vector::IVector IntVector_obj::copy( ){
	HX_STACK_FRAME("openfl._Vector.IntVector","copy",0x46e7503b,"openfl._Vector.IntVector.copy","openfl/Vector.hx",1191,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1193)
	bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1193)
	::openfl::_Vector::IntVector tmp1 = ::openfl::_Vector::IntVector_obj::__new(null(),tmp,this->__array->copy());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1193)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(IntVector_obj,copy,return )

int IntVector_obj::get( int index){
	HX_STACK_FRAME("openfl._Vector.IntVector","get",0x630e5ed0,"openfl._Vector.IntVector.get","openfl/Vector.hx",1198,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(1200)
	int tmp = this->__array->__get(index);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1200)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,get,return )

int IntVector_obj::indexOf( int x,Dynamic __o_from){
Dynamic from = __o_from.Default(0);
	HX_STACK_FRAME("openfl._Vector.IntVector","indexOf",0x6903cc03,"openfl._Vector.IntVector.indexOf","openfl/Vector.hx",1205,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(from,"from")
{
		HX_STACK_LINE(1207)
		{
			HX_STACK_LINE(1207)
			int _g1 = from;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1207)
			int tmp = this->__array->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1207)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1207)
			while((true)){
				HX_STACK_LINE(1207)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1207)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1207)
				if ((tmp2)){
					HX_STACK_LINE(1207)
					break;
				}
				HX_STACK_LINE(1207)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1207)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1209)
				int tmp4 = this->__array->__get(i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1209)
				int tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1209)
				bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1209)
				if ((tmp6)){
					HX_STACK_LINE(1211)
					int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1211)
					return tmp7;
				}
			}
		}
		HX_STACK_LINE(1217)
		return (int)-1;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(IntVector_obj,indexOf,return )

Void IntVector_obj::insertAt( int index,int element){
{
		HX_STACK_FRAME("openfl._Vector.IntVector","insertAt",0x75cdcc12,"openfl._Vector.IntVector.insertAt","openfl/Vector.hx",1222,0x4a01873c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(element,"element")
		HX_STACK_LINE(1224)
		bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1224)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1224)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1224)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1224)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1224)
		if ((tmp3)){
			HX_STACK_LINE(1224)
			int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1224)
			int tmp6 = this->__array->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1224)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1224)
			tmp4 = (tmp5 < tmp7);
		}
		else{
			HX_STACK_LINE(1224)
			tmp4 = true;
		}
		HX_STACK_LINE(1224)
		if ((tmp4)){
			HX_STACK_LINE(1226)
			int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1226)
			int tmp6 = element;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1226)
			this->__array->insert(tmp5,tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(IntVector_obj,insertAt,(void))

Dynamic IntVector_obj::iterator( ){
	HX_STACK_FRAME("openfl._Vector.IntVector","iterator",0x47489974,"openfl._Vector.IntVector.iterator","openfl/Vector.hx",1233,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1235)
	Dynamic tmp = this->__array->iterator();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1235)
	Dynamic tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1235)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(IntVector_obj,iterator,return )

::String IntVector_obj::join( ::String sep){
	HX_STACK_FRAME("openfl._Vector.IntVector","join",0x4b87c870,"openfl._Vector.IntVector.join","openfl/Vector.hx",1240,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sep,"sep")
	HX_STACK_LINE(1242)
	::String tmp = sep;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1242)
	::String tmp1 = this->__array->join(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1242)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,join,return )

int IntVector_obj::lastIndexOf( int x,Dynamic __o_from){
Dynamic from = __o_from.Default(0);
	HX_STACK_FRAME("openfl._Vector.IntVector","lastIndexOf",0x72eaa54d,"openfl._Vector.IntVector.lastIndexOf","openfl/Vector.hx",1247,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(from,"from")
{
		HX_STACK_LINE(1249)
		int tmp = this->__array->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1249)
		int tmp1 = (tmp - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1249)
		int i = tmp1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1251)
		while((true)){
			HX_STACK_LINE(1251)
			bool tmp2 = (i >= from);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1251)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1251)
			if ((tmp3)){
				HX_STACK_LINE(1251)
				break;
			}
			HX_STACK_LINE(1253)
			int tmp4 = this->__array->__get(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1253)
			int tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1253)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1253)
			if ((tmp6)){
				HX_STACK_LINE(1253)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1253)
				return tmp7;
			}
			HX_STACK_LINE(1254)
			(i)--;
		}
		HX_STACK_LINE(1258)
		return (int)-1;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(IntVector_obj,lastIndexOf,return )

Dynamic IntVector_obj::pop( ){
	HX_STACK_FRAME("openfl._Vector.IntVector","pop",0x63153bcb,"openfl._Vector.IntVector.pop","openfl/Vector.hx",1263,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1265)
	bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1265)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1265)
	if ((tmp1)){
		HX_STACK_LINE(1267)
		Dynamic tmp2 = this->__array->pop();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1267)
		return tmp2;
	}
	else{
		HX_STACK_LINE(1271)
		return null();
	}
	HX_STACK_LINE(1265)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(IntVector_obj,pop,return )

int IntVector_obj::push( int x){
	HX_STACK_FRAME("openfl._Vector.IntVector","push",0x4f83a660,"openfl._Vector.IntVector.push","openfl/Vector.hx",1278,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(1280)
	bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1280)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1280)
	if ((tmp1)){
		HX_STACK_LINE(1282)
		int tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1282)
		int tmp3 = this->__array->push(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1282)
		return tmp3;
	}
	else{
		HX_STACK_LINE(1286)
		int tmp2 = this->__array->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1286)
		return tmp2;
	}
	HX_STACK_LINE(1280)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,push,return )

Void IntVector_obj::reverse( ){
{
		HX_STACK_FRAME("openfl._Vector.IntVector","reverse",0xa340bc5c,"openfl._Vector.IntVector.reverse","openfl/Vector.hx",1295,0x4a01873c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1295)
		this->__array->reverse();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IntVector_obj,reverse,(void))

int IntVector_obj::set( int index,int value){
	HX_STACK_FRAME("openfl._Vector.IntVector","set",0x631779dc,"openfl._Vector.IntVector.set","openfl/Vector.hx",1300,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1302)
	bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1302)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1302)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1302)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1302)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1302)
	if ((tmp3)){
		HX_STACK_LINE(1302)
		int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1302)
		int tmp6 = this->__array->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1302)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1302)
		tmp4 = (tmp5 < tmp7);
	}
	else{
		HX_STACK_LINE(1302)
		tmp4 = true;
	}
	HX_STACK_LINE(1302)
	if ((tmp4)){
		HX_STACK_LINE(1304)
		int tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1304)
		int tmp6 = this->__array[index] = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1304)
		return tmp6;
	}
	else{
		HX_STACK_LINE(1308)
		int tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1308)
		return tmp5;
	}
	HX_STACK_LINE(1302)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(IntVector_obj,set,return )

Dynamic IntVector_obj::shift( ){
	HX_STACK_FRAME("openfl._Vector.IntVector","shift",0xf5424d3c,"openfl._Vector.IntVector.shift","openfl/Vector.hx",1315,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1317)
	bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1317)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1317)
	if ((tmp1)){
		HX_STACK_LINE(1319)
		Dynamic tmp2 = this->__array->shift();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1319)
		return tmp2;
	}
	else{
		HX_STACK_LINE(1323)
		return null();
	}
	HX_STACK_LINE(1317)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(IntVector_obj,shift,return )

::openfl::_Vector::IVector IntVector_obj::slice( Dynamic __o_startIndex,Dynamic __o_endIndex){
Dynamic startIndex = __o_startIndex.Default(0);
Dynamic endIndex = __o_endIndex.Default(16777215);
	HX_STACK_FRAME("openfl._Vector.IntVector","slice",0xf7e7250c,"openfl._Vector.IntVector.slice","openfl/Vector.hx",1330,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(startIndex,"startIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(1332)
		Dynamic tmp = startIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1332)
		Dynamic tmp1 = endIndex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1332)
		::openfl::_Vector::IntVector tmp2 = ::openfl::_Vector::IntVector_obj::__new(null(),null(),this->__array->slice(tmp,tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1332)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(IntVector_obj,slice,return )

Void IntVector_obj::sort( Dynamic f){
{
		HX_STACK_FRAME("openfl._Vector.IntVector","sort",0x517abbe4,"openfl._Vector.IntVector.sort","openfl/Vector.hx",1337,0x4a01873c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(1339)
		Dynamic tmp = f;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1339)
		this->__array->sort(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,sort,(void))

::openfl::_Vector::IVector IntVector_obj::splice( int pos,int len){
	HX_STACK_FRAME("openfl._Vector.IntVector","splice",0x41f3c782,"openfl._Vector.IntVector.splice","openfl/Vector.hx",1344,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(1346)
	int tmp = pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1346)
	int tmp1 = len;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1346)
	::openfl::_Vector::IntVector tmp2 = ::openfl::_Vector::IntVector_obj::__new(null(),null(),this->__array->splice(tmp,tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1346)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(IntVector_obj,splice,return )

::String IntVector_obj::toString( ){
	HX_STACK_FRAME("openfl._Vector.IntVector","toString",0xec1d2032,"openfl._Vector.IntVector.toString","openfl/Vector.hx",1351,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1353)
	::String tmp = this->__array->toString();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1353)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(IntVector_obj,toString,return )

Void IntVector_obj::unshift( int x){
{
		HX_STACK_FRAME("openfl._Vector.IntVector","unshift",0x00f866c3,"openfl._Vector.IntVector.unshift","openfl/Vector.hx",1358,0x4a01873c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(1360)
		bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1360)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1360)
		if ((tmp1)){
			HX_STACK_LINE(1362)
			int tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1362)
			this->__array->unshift(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,unshift,(void))

int IntVector_obj::get_length( ){
	HX_STACK_FRAME("openfl._Vector.IntVector","get_length",0x4714c1b5,"openfl._Vector.IntVector.get_length","openfl/Vector.hx",1376,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1378)
	int tmp = this->__array->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1378)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(IntVector_obj,get_length,return )

int IntVector_obj::set_length( int value){
	HX_STACK_FRAME("openfl._Vector.IntVector","set_length",0x4a926029,"openfl._Vector.IntVector.set_length","openfl/Vector.hx",1383,0x4a01873c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1385)
	bool tmp = this->fixed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1385)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1385)
	if ((tmp1)){
		HX_STACK_LINE(1389)
		int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1389)
		this->__array->__SetSizeExact(tmp2);
	}
	HX_STACK_LINE(1418)
	int tmp2 = this->__array->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1418)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,set_length,return )


IntVector_obj::IntVector_obj()
{
}

void IntVector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IntVector);
	HX_MARK_MEMBER_NAME(fixed,"fixed");
	HX_MARK_MEMBER_NAME(__array,"__array");
	HX_MARK_END_CLASS();
}

void IntVector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fixed,"fixed");
	HX_VISIT_MEMBER_NAME(__array,"__array");
}

Dynamic IntVector_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"join") ) { return join_dyn(); }
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		if (HX_FIELD_EQ(inName,"sort") ) { return sort_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"fixed") ) { return fixed; }
		if (HX_FIELD_EQ(inName,"shift") ) { return shift_dyn(); }
		if (HX_FIELD_EQ(inName,"slice") ) { return slice_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"concat") ) { return concat_dyn(); }
		if (HX_FIELD_EQ(inName,"splice") ) { return splice_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__array") ) { return __array; }
		if (HX_FIELD_EQ(inName,"indexOf") ) { return indexOf_dyn(); }
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		if (HX_FIELD_EQ(inName,"unshift") ) { return unshift_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"insertAt") ) { return insertAt_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return set_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lastIndexOf") ) { return lastIndexOf_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IntVector_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"fixed") ) { fixed=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return set_length(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__array") ) { __array=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IntVector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(IntVector_obj,fixed),HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(IntVector_obj,__array),HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00"),
	HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"),
	HX_HCSTRING("insertAt","\x8c","\x7c","\x1f","\xc2"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("join","\xea","\x33","\x65","\x46"),
	HX_HCSTRING("lastIndexOf","\x13","\xfd","\x6a","\x95"),
	HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"),
	HX_HCSTRING("push","\xda","\x11","\x61","\x4a"),
	HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"),
	HX_HCSTRING("slice","\x52","\xc4","\xc7","\x7e"),
	HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"),
	HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("unshift","\x89","\xe3","\xb3","\x78"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IntVector_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IntVector_obj::__mClass,"__mClass");
};

#endif

hx::Class IntVector_obj::__mClass;

void IntVector_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._Vector.IntVector","\xa8","\x19","\x86","\x49");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IntVector_obj >;
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
} // end namespace _Vector
