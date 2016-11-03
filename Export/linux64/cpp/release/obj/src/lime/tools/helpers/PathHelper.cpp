#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime_project_Architecture
#include <lime/project/Architecture.h>
#endif
#ifndef INCLUDED_lime_project_Haxelib
#include <lime/project/Haxelib.h>
#endif
#ifndef INCLUDED_lime_project_NDLL
#include <lime/project/NDLL.h>
#endif
#ifndef INCLUDED_lime_tools_helpers_LogHelper
#include <lime/tools/helpers/LogHelper.h>
#endif
#ifndef INCLUDED_lime_tools_helpers_PathHelper
#include <lime/tools/helpers/PathHelper.h>
#endif
#ifndef INCLUDED_lime_tools_helpers_PlatformHelper
#include <lime/tools/helpers/PlatformHelper.h>
#endif
#ifndef INCLUDED_lime_tools_helpers_ProcessHelper
#include <lime/tools/helpers/ProcessHelper.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
namespace lime{
namespace tools{
namespace helpers{

Void PathHelper_obj::__construct()
{
	return null();
}

//PathHelper_obj::~PathHelper_obj() { }

Dynamic PathHelper_obj::__CreateEmpty() { return  new PathHelper_obj; }
hx::ObjectPtr< PathHelper_obj > PathHelper_obj::__new()
{  hx::ObjectPtr< PathHelper_obj > _result_ = new PathHelper_obj();
	_result_->__construct();
	return _result_;}

Dynamic PathHelper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PathHelper_obj > _result_ = new PathHelper_obj();
	_result_->__construct();
	return _result_;}

::haxe::ds::StringMap PathHelper_obj::haxelibOverrides;

::haxe::ds::StringMap PathHelper_obj::haxelibPaths;

::String PathHelper_obj::combine( ::String firstPath,::String secondPath){
	HX_STACK_FRAME("lime.tools.helpers.PathHelper","combine",0x5345b499,"lime.tools.helpers.PathHelper.combine","lime/tools/helpers/PathHelper.hx",23,0xca1d8093)
	HX_STACK_ARG(firstPath,"firstPath")
	HX_STACK_ARG(secondPath,"secondPath")
	HX_STACK_LINE(25)
	bool tmp = (firstPath == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	if ((tmp1)){
		HX_STACK_LINE(25)
		tmp2 = (firstPath == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(25)
		tmp2 = true;
	}
	HX_STACK_LINE(25)
	if ((tmp2)){
		HX_STACK_LINE(27)
		::String tmp3 = secondPath;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		return tmp3;
	}
	else{
		HX_STACK_LINE(29)
		bool tmp3 = (secondPath != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(29)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(29)
		if ((tmp3)){
			HX_STACK_LINE(29)
			tmp4 = (secondPath != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(29)
			tmp4 = false;
		}
		HX_STACK_LINE(29)
		if ((tmp4)){
			HX_STACK_LINE(31)
			::String tmp5 = ::lime::tools::helpers::PlatformHelper_obj::get_hostPlatform();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(31)
			bool tmp6 = (tmp5 == HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(31)
			if ((tmp6)){
				HX_STACK_LINE(33)
				int tmp7 = secondPath.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(33)
				bool tmp8 = (tmp7 == (int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(33)
				if ((tmp8)){
					HX_STACK_LINE(35)
					::String tmp9 = secondPath;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(35)
					return tmp9;
				}
			}
			else{
				HX_STACK_LINE(41)
				::String tmp7 = secondPath.substr((int)0,(int)1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(41)
				bool tmp8 = (tmp7 == HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(41)
				if ((tmp8)){
					HX_STACK_LINE(43)
					::String tmp9 = secondPath;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(43)
					return tmp9;
				}
			}
			HX_STACK_LINE(49)
			::String tmp7 = firstPath.substr((int)-1,null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(49)
			bool tmp8 = (tmp7 == HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(49)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(49)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(49)
			if ((tmp9)){
				HX_STACK_LINE(49)
				::String tmp11 = firstPath.substr((int)-1,null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(49)
				::String tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(49)
				tmp10 = (tmp12 == HX_HCSTRING("\\","\x5c","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(49)
				tmp10 = true;
			}
			HX_STACK_LINE(49)
			bool firstSlash = tmp10;		HX_STACK_VAR(firstSlash,"firstSlash");
			HX_STACK_LINE(50)
			::String tmp11 = secondPath.substr((int)0,(int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(50)
			bool tmp12 = (tmp11 == HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(50)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(50)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(50)
			if ((tmp13)){
				HX_STACK_LINE(50)
				::String tmp15 = secondPath.substr((int)0,(int)1);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(50)
				::String tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(50)
				tmp14 = (tmp16 == HX_HCSTRING("\\","\x5c","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(50)
				tmp14 = true;
			}
			HX_STACK_LINE(50)
			bool secondSlash = tmp14;		HX_STACK_VAR(secondSlash,"secondSlash");
			HX_STACK_LINE(52)
			bool tmp15 = firstSlash;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(52)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(52)
			if ((tmp15)){
				HX_STACK_LINE(52)
				tmp16 = secondSlash;
			}
			else{
				HX_STACK_LINE(52)
				tmp16 = false;
			}
			HX_STACK_LINE(52)
			if ((tmp16)){
				HX_STACK_LINE(54)
				::String tmp17 = firstPath;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(54)
				::String tmp18 = secondPath.substr((int)1,null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(54)
				::String tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(54)
				return tmp19;
			}
			else{
				HX_STACK_LINE(56)
				bool tmp17 = firstSlash;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(56)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(56)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(56)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(56)
				if ((tmp19)){
					HX_STACK_LINE(56)
					bool tmp21 = secondSlash;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(56)
					bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(56)
					tmp20 = !(tmp22);
				}
				else{
					HX_STACK_LINE(56)
					tmp20 = false;
				}
				HX_STACK_LINE(56)
				if ((tmp20)){
					HX_STACK_LINE(58)
					::String tmp21 = (firstPath + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(58)
					::String tmp22 = secondPath;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(58)
					::String tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(58)
					return tmp23;
				}
				else{
					HX_STACK_LINE(62)
					::String tmp21 = (firstPath + secondPath);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(62)
					return tmp21;
				}
			}
		}
		else{
			HX_STACK_LINE(68)
			::String tmp5 = firstPath;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(68)
			return tmp5;
		}
	}
	HX_STACK_LINE(25)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PathHelper_obj,combine,return )

::String PathHelper_obj::escape( ::String path){
	HX_STACK_FRAME("lime.tools.helpers.PathHelper","escape",0xb962faa7,"lime.tools.helpers.PathHelper.escape","lime/tools/helpers/PathHelper.hx",75,0xca1d8093)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(77)
	::String tmp = ::lime::tools::helpers::PlatformHelper_obj::get_hostPlatform();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	bool tmp1 = (tmp != HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	if ((tmp1)){
		HX_STACK_LINE(79)
		::String tmp2 = path;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(79)
		::String tmp3 = ::StringTools_obj::replace(tmp2,HX_HCSTRING("\\ ","\x44","\x50","\x00","\x00"),HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(79)
		path = tmp3;
		HX_STACK_LINE(80)
		::String tmp4 = path;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(80)
		::String tmp5 = ::StringTools_obj::replace(tmp4,HX_HCSTRING(" ","\x20","\x00","\x00","\x00"),HX_HCSTRING("\\ ","\x44","\x50","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(80)
		path = tmp5;
		HX_STACK_LINE(81)
		::String tmp6 = path;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(81)
		::String tmp7 = ::StringTools_obj::replace(tmp6,HX_HCSTRING("\\'","\x4b","\x50","\x00","\x00"),HX_HCSTRING("'","\x27","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(81)
		path = tmp7;
		HX_STACK_LINE(82)
		::String tmp8 = path;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(82)
		::String tmp9 = ::StringTools_obj::replace(tmp8,HX_HCSTRING("'","\x27","\x00","\x00","\x00"),HX_HCSTRING("\\'","\x4b","\x50","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(82)
		path = tmp9;
	}
	else{
		HX_STACK_LINE(86)
		::String tmp2 = path;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(86)
		::String tmp3 = ::StringTools_obj::replace(tmp2,HX_HCSTRING("^,","\x0e","\x52","\x00","\x00"),HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(86)
		path = tmp3;
		HX_STACK_LINE(87)
		::String tmp4 = path;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(87)
		::String tmp5 = ::StringTools_obj::replace(tmp4,HX_HCSTRING(",","\x2c","\x00","\x00","\x00"),HX_HCSTRING("^,","\x0e","\x52","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(87)
		path = tmp5;
	}
	HX_STACK_LINE(91)
	::String tmp2 = path;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(91)
	::String tmp3 = ::lime::tools::helpers::PathHelper_obj::expand(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(91)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PathHelper_obj,escape,return )

::String PathHelper_obj::expand( ::String path){
	HX_STACK_FRAME("lime.tools.helpers.PathHelper","expand",0xa2fba580,"lime.tools.helpers.PathHelper.expand","lime/tools/helpers/PathHelper.hx",96,0xca1d8093)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(98)
	bool tmp = (path == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(98)
	if ((tmp)){
		HX_STACK_LINE(100)
		path = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(104)
	::String tmp1 = ::lime::tools::helpers::PlatformHelper_obj::get_hostPlatform();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(104)
	bool tmp2 = (tmp1 != HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(104)
	if ((tmp2)){
		HX_STACK_LINE(106)
		::String tmp3 = path;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(106)
		bool tmp4 = ::StringTools_obj::startsWith(tmp3,HX_HCSTRING("~/","\xf1","\x6d","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(106)
		if ((tmp4)){
			HX_STACK_LINE(108)
			::String tmp5 = ::Sys_obj::getEnv(HX_HCSTRING("HOME","\x1f","\x92","\xd3","\x2f"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(108)
			::String tmp6 = (tmp5 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(108)
			::String tmp7 = path.substr((int)2,null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(108)
			::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(108)
			path = tmp8;
		}
	}
	HX_STACK_LINE(114)
	::String tmp3 = path;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(114)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PathHelper_obj,expand,return )

::String PathHelper_obj::findTemplate( Array< ::String > templatePaths,::String path,hx::Null< bool >  __o_warnIfNotFound){
bool warnIfNotFound = __o_warnIfNotFound.Default(true);
	HX_STACK_FRAME("lime.tools.helpers.PathHelper","findTemplate",0x12616d39,"lime.tools.helpers.PathHelper.findTemplate","lime/tools/helpers/PathHelper.hx",119,0xca1d8093)
	HX_STACK_ARG(templatePaths,"templatePaths")
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(warnIfNotFound,"warnIfNotFound")
{
		HX_STACK_LINE(121)
		::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(121)
		bool tmp1 = warnIfNotFound;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(121)
		Array< ::String > matches = ::lime::tools::helpers::PathHelper_obj::findTemplates(templatePaths,tmp,tmp1);		HX_STACK_VAR(matches,"matches");
		HX_STACK_LINE(123)
		bool tmp2 = (matches->length > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(123)
		if ((tmp2)){
			HX_STACK_LINE(125)
			int tmp3 = (matches->length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(125)
			::String tmp4 = matches->__get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(125)
			return tmp4;
		}
		HX_STACK_LINE(129)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(PathHelper_obj,findTemplate,return )

Array< ::String > PathHelper_obj::findTemplates( Array< ::String > templatePaths,::String path,hx::Null< bool >  __o_warnIfNotFound){
bool warnIfNotFound = __o_warnIfNotFound.Default(true);
	HX_STACK_FRAME("lime.tools.helpers.PathHelper","findTemplates",0x02de251a,"lime.tools.helpers.PathHelper.findTemplates","lime/tools/helpers/PathHelper.hx",134,0xca1d8093)
	HX_STACK_ARG(templatePaths,"templatePaths")
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(warnIfNotFound,"warnIfNotFound")
{
		HX_STACK_LINE(136)
		Array< ::String > matches = Array_obj< ::String >::__new();		HX_STACK_VAR(matches,"matches");
		HX_STACK_LINE(138)
		{
			HX_STACK_LINE(138)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(138)
			while((true)){
				HX_STACK_LINE(138)
				bool tmp = (_g < templatePaths->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(138)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(138)
				if ((tmp1)){
					HX_STACK_LINE(138)
					break;
				}
				HX_STACK_LINE(138)
				::String tmp2 = templatePaths->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(138)
				::String templatePath = tmp2;		HX_STACK_VAR(templatePath,"templatePath");
				HX_STACK_LINE(138)
				++(_g);
				HX_STACK_LINE(140)
				::String tmp3 = templatePath;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(140)
				::String tmp4 = path;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(140)
				::String tmp5 = ::lime::tools::helpers::PathHelper_obj::combine(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(140)
				::String targetPath = tmp5;		HX_STACK_VAR(targetPath,"targetPath");
				HX_STACK_LINE(142)
				::String tmp6 = targetPath;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(142)
				bool tmp7 = ::sys::FileSystem_obj::exists(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(142)
				if ((tmp7)){
					HX_STACK_LINE(144)
					::String tmp8 = targetPath;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(144)
					matches->push(tmp8);
				}
			}
		}
		HX_STACK_LINE(150)
		bool tmp = (matches->length == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(150)
		if ((tmp)){
			HX_STACK_LINE(150)
			tmp1 = warnIfNotFound;
		}
		else{
			HX_STACK_LINE(150)
			tmp1 = false;
		}
		HX_STACK_LINE(150)
		if ((tmp1)){
			HX_STACK_LINE(152)
			::String tmp2 = (HX_HCSTRING("Could not find template file: ","\xad","\xec","\x5b","\x03") + path);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(152)
			::lime::tools::helpers::LogHelper_obj::warn(tmp2,null(),null());
		}
		HX_STACK_LINE(156)
		return matches;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(PathHelper_obj,findTemplates,return )

::String PathHelper_obj::getHaxelib( ::lime::project::Haxelib haxelib,hx::Null< bool >  __o_validate,hx::Null< bool >  __o_clearCache){
bool validate = __o_validate.Default(false);
bool clearCache = __o_clearCache.Default(false);
	HX_STACK_FRAME("lime.tools.helpers.PathHelper","getHaxelib",0x4fcc7f0f,"lime.tools.helpers.PathHelper.getHaxelib","lime/tools/helpers/PathHelper.hx",161,0xca1d8093)
	HX_STACK_ARG(haxelib,"haxelib")
	HX_STACK_ARG(validate,"validate")
	HX_STACK_ARG(clearCache,"clearCache")
{
		HX_STACK_LINE(163)
		::String name = haxelib->name;		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(165)
		::haxe::ds::StringMap tmp = ::lime::tools::helpers::PathHelper_obj::haxelibOverrides;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(165)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(165)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(165)
		if ((tmp2)){
			HX_STACK_LINE(167)
			::haxe::ds::StringMap tmp3 = ::lime::tools::helpers::PathHelper_obj::haxelibOverrides;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(167)
			::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(167)
			::String tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(167)
			::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(167)
			return tmp6;
		}
		HX_STACK_LINE(171)
		bool tmp3 = (haxelib->version != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(171)
		if ((tmp3)){
			HX_STACK_LINE(173)
			::String tmp4 = (HX_HCSTRING(":","\x3a","\x00","\x00","\x00") + haxelib->version);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(173)
			hx::AddEq(name,tmp4);
		}
		HX_STACK_LINE(177)
		bool tmp4 = clearCache;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(177)
		if ((tmp4)){
			HX_STACK_LINE(179)
			::haxe::ds::StringMap tmp5 = ::lime::tools::helpers::PathHelper_obj::haxelibPaths;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(179)
			::String tmp6 = name;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(179)
			tmp5->remove(tmp6);
		}
		HX_STACK_LINE(183)
		::haxe::ds::StringMap tmp5 = ::lime::tools::helpers::PathHelper_obj::haxelibPaths;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(183)
		::String tmp6 = name;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(183)
		bool tmp7 = tmp5->exists(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(183)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(183)
		if ((tmp8)){
			HX_STACK_LINE(185)
			bool tmp9 = ::lime::tools::helpers::LogHelper_obj::verbose;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(185)
			bool cache = tmp9;		HX_STACK_VAR(cache,"cache");
			HX_STACK_LINE(186)
			::lime::tools::helpers::LogHelper_obj::verbose = false;
			HX_STACK_LINE(187)
			::String output = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(output,"output");
			HX_STACK_LINE(189)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(191)
				bool tmp10 = ::lime::tools::helpers::ProcessHelper_obj::dryRun;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(191)
				bool cacheDryRun = tmp10;		HX_STACK_VAR(cacheDryRun,"cacheDryRun");
				HX_STACK_LINE(192)
				::lime::tools::helpers::ProcessHelper_obj::dryRun = false;
				HX_STACK_LINE(194)
				::String tmp11 = ::Sys_obj::getEnv(HX_HCSTRING("HAXEPATH","\xcb","\xb4","\x43","\xc4"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(194)
				::String tmp12 = ::lime::tools::helpers::ProcessHelper_obj::runProcess(tmp11,HX_HCSTRING("haxelib","\xdf","\xb6","\x80","\x08"),Array_obj< ::String >::__new().Add(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a")).Add(name),true,true,true,null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(194)
				output = tmp12;
				HX_STACK_LINE(195)
				bool tmp13 = (output == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(195)
				if ((tmp13)){
					HX_STACK_LINE(195)
					output = HX_HCSTRING("","\x00","\x00","\x00","\x00");
				}
				HX_STACK_LINE(197)
				::lime::tools::helpers::ProcessHelper_obj::dryRun = cacheDryRun;
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
					}
				}
			}
			HX_STACK_LINE(201)
			::lime::tools::helpers::LogHelper_obj::verbose = cache;
			HX_STACK_LINE(203)
			Array< ::String > lines = output.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(lines,"lines");
			HX_STACK_LINE(204)
			::String result = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(206)
			{
				HX_STACK_LINE(206)
				int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(206)
				int _g = lines->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(206)
				while((true)){
					HX_STACK_LINE(206)
					bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(206)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(206)
					if ((tmp11)){
						HX_STACK_LINE(206)
						break;
					}
					HX_STACK_LINE(206)
					int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(206)
					int i = tmp12;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(208)
					::String tmp13 = lines->__get(i);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(208)
					::String tmp14 = ::StringTools_obj::trim(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(208)
					::String trim = tmp14;		HX_STACK_VAR(trim,"trim");
					HX_STACK_LINE(210)
					::String tmp15 = trim;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(210)
					::String tmp16 = (HX_HCSTRING("-D ","\xc9","\x60","\x22","\x00") + haxelib->name);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(210)
					bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(210)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(210)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(210)
					if ((tmp18)){
						HX_STACK_LINE(210)
						::String tmp20 = trim;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(210)
						::String tmp21 = (HX_HCSTRING("-D ","\xc9","\x60","\x22","\x00") + haxelib->name);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(210)
						::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(210)
						::String tmp23 = (tmp22 + HX_HCSTRING("=","\x3d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(210)
						::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(210)
						::String tmp25 = tmp20;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(210)
						::String tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(210)
						tmp19 = ::StringTools_obj::startsWith(tmp25,tmp26);
					}
					else{
						HX_STACK_LINE(210)
						tmp19 = true;
					}
					HX_STACK_LINE(210)
					if ((tmp19)){
						HX_STACK_LINE(212)
						int tmp20 = (i - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(212)
						::String tmp21 = lines->__get(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(212)
						::String tmp22 = ::StringTools_obj::trim(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(212)
						result = tmp22;
					}
				}
			}
			HX_STACK_LINE(218)
			bool tmp10 = (result == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(218)
			if ((tmp10)){
				HX_STACK_LINE(220)
				try
				{
				HX_STACK_CATCHABLE(Dynamic, 0);
				{
					HX_STACK_LINE(222)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(222)
					while((true)){
						HX_STACK_LINE(222)
						bool tmp11 = (_g < lines->length);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(222)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(222)
						if ((tmp12)){
							HX_STACK_LINE(222)
							break;
						}
						HX_STACK_LINE(222)
						::String tmp13 = lines->__get(_g);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(222)
						::String line = tmp13;		HX_STACK_VAR(line,"line");
						HX_STACK_LINE(222)
						++(_g);
						HX_STACK_LINE(224)
						bool tmp14 = (line != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(224)
						bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(224)
						if ((tmp14)){
							HX_STACK_LINE(224)
							::String tmp16 = line.substr((int)0,(int)1);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(224)
							::String tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(224)
							tmp15 = (tmp17 != HX_HCSTRING("-","\x2d","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(224)
							tmp15 = false;
						}
						HX_STACK_LINE(224)
						if ((tmp15)){
							HX_STACK_LINE(226)
							::String tmp16 = line;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(226)
							bool tmp17 = ::sys::FileSystem_obj::exists(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(226)
							if ((tmp17)){
								HX_STACK_LINE(228)
								result = line;
								HX_STACK_LINE(229)
								break;
							}
						}
					}
				}
				}
				catch(Dynamic __e){
					{
						HX_STACK_BEGIN_CATCH
						Dynamic e = __e;{
						}
					}
				}
			}
			HX_STACK_LINE(241)
			bool tmp11 = validate;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(241)
			if ((tmp11)){
				HX_STACK_LINE(243)
				bool tmp12 = (result == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(243)
				if ((tmp12)){
					HX_STACK_LINE(245)
					int tmp13 = output.indexOf(HX_HCSTRING("does not have","\xdc","\xfc","\x4e","\x07"),null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(245)
					bool tmp14 = (tmp13 > (int)-1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(245)
					if ((tmp14)){
						HX_STACK_LINE(247)
						::String directoryName = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(directoryName,"directoryName");
						HX_STACK_LINE(249)
						::String tmp15 = ::lime::tools::helpers::PlatformHelper_obj::get_hostPlatform();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(249)
						bool tmp16 = (tmp15 == HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(249)
						if ((tmp16)){
							HX_STACK_LINE(251)
							directoryName = HX_HCSTRING("Windows","\x63","\x06","\xc6","\xb5");
						}
						else{
							HX_STACK_LINE(253)
							::String tmp17 = ::lime::tools::helpers::PlatformHelper_obj::get_hostPlatform();		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(253)
							bool tmp18 = (tmp17 == HX_HCSTRING("mac","\x8f","\x0a","\x53","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(253)
							if ((tmp18)){
								HX_STACK_LINE(255)
								::lime::project::Architecture tmp19 = ::lime::tools::helpers::PlatformHelper_obj::get_hostArchitecture();		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(255)
								bool tmp20 = (tmp19 == ::lime::project::Architecture_obj::X64);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(255)
								::String tmp21;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(255)
								if ((tmp20)){
									HX_STACK_LINE(255)
									tmp21 = HX_HCSTRING("Mac64","\x6d","\xab","\x43","\x96");
								}
								else{
									HX_STACK_LINE(255)
									tmp21 = HX_HCSTRING("Mac","\x6f","\xc2","\x3a","\x00");
								}
								HX_STACK_LINE(255)
								directoryName = tmp21;
							}
							else{
								HX_STACK_LINE(259)
								::lime::project::Architecture tmp19 = ::lime::tools::helpers::PlatformHelper_obj::get_hostArchitecture();		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(259)
								bool tmp20 = (tmp19 == ::lime::project::Architecture_obj::X64);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(259)
								::String tmp21;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(259)
								if ((tmp20)){
									HX_STACK_LINE(259)
									tmp21 = HX_HCSTRING("Linux64","\x12","\x28","\x9d","\xf7");
								}
								else{
									HX_STACK_LINE(259)
									tmp21 = HX_HCSTRING("Linux","\xd4","\x5b","\x2f","\x08");
								}
								HX_STACK_LINE(259)
								directoryName = tmp21;
							}
						}
						HX_STACK_LINE(263)
						::String tmp17 = (HX_HCSTRING("haxelib \"","\xa1","\x88","\x43","\xb3") + haxelib->name);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(263)
						::String tmp18 = (tmp17 + HX_HCSTRING("\" does not have an \"ndll/","\x68","\x64","\xdd","\xcd"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(263)
						::String tmp19 = directoryName;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(263)
						::String tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(263)
						::String tmp21 = (tmp20 + HX_HCSTRING("\" directory","\xef","\x2c","\x1e","\x37"));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(263)
						::lime::tools::helpers::LogHelper_obj::error(tmp21,null(),null());
					}
					else{
						HX_STACK_LINE(265)
						int tmp15 = output.indexOf(HX_HCSTRING("haxelib install ","\x06","\xb8","\xa3","\x11"),null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(265)
						int tmp16 = (int)-1;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(265)
						bool tmp17 = (tmp15 > tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(265)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(265)
						if ((tmp17)){
							HX_STACK_LINE(265)
							::String tmp19 = (HX_HCSTRING("haxelib install ","\x06","\xb8","\xa3","\x11") + haxelib->name);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(265)
							::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(265)
							::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(265)
							int tmp22 = output.indexOf(tmp21,null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(265)
							int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(265)
							tmp18 = (tmp23 == (int)-1);
						}
						else{
							HX_STACK_LINE(265)
							tmp18 = false;
						}
						HX_STACK_LINE(265)
						if ((tmp18)){
							HX_STACK_LINE(267)
							int tmp19 = output.indexOf(HX_HCSTRING("haxelib install ","\x06","\xb8","\xa3","\x11"),null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(267)
							int tmp20 = (tmp19 + (int)16);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(267)
							int start = tmp20;		HX_STACK_VAR(start,"start");
							HX_STACK_LINE(268)
							int tmp21 = output.lastIndexOf(HX_HCSTRING("'","\x27","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(268)
							int end = tmp21;		HX_STACK_VAR(end,"end");
							HX_STACK_LINE(269)
							int tmp22 = start;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(269)
							int tmp23 = end;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(269)
							::String tmp24 = output.substring(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(269)
							::String dependencyName = tmp24;		HX_STACK_VAR(dependencyName,"dependencyName");
							HX_STACK_LINE(271)
							::String tmp25 = (HX_HCSTRING("Could not find haxelib \"","\x46","\x48","\xa5","\x87") + dependencyName);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(271)
							::String tmp26 = (tmp25 + HX_HCSTRING("\" (dependency of \"","\xe4","\x90","\xbe","\xda"));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(271)
							::String tmp27 = haxelib->name;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(271)
							::String tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(271)
							::String tmp29 = (tmp28 + HX_HCSTRING("\"), does it need to be installed?","\x1e","\x95","\xec","\x6a"));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(271)
							::lime::tools::helpers::LogHelper_obj::error(tmp29,null(),null());
						}
						else{
							HX_STACK_LINE(275)
							bool tmp19 = (haxelib->version != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(275)
							if ((tmp19)){
								HX_STACK_LINE(277)
								::String tmp20 = (HX_HCSTRING("Could not find haxelib \"","\x46","\x48","\xa5","\x87") + haxelib->name);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(277)
								::String tmp21 = (tmp20 + HX_HCSTRING("\" version \"","\x9c","\x33","\x65","\x31"));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(277)
								::String tmp22 = haxelib->version;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(277)
								::String tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(277)
								::String tmp24 = (tmp23 + HX_HCSTRING("\", does it need to be installed?","\x23","\xab","\xb4","\x7d"));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(277)
								::lime::tools::helpers::LogHelper_obj::error(tmp24,null(),null());
							}
							else{
								HX_STACK_LINE(281)
								::String tmp20 = (HX_HCSTRING("Could not find haxelib \"","\x46","\x48","\xa5","\x87") + haxelib->name);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(281)
								::String tmp21 = (tmp20 + HX_HCSTRING("\", does it need to be installed?","\x23","\xab","\xb4","\x7d"));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(281)
								::lime::tools::helpers::LogHelper_obj::error(tmp21,null(),null());
							}
						}
					}
				}
			}
			HX_STACK_LINE(291)
			::haxe::ds::StringMap tmp12 = ::lime::tools::helpers::PathHelper_obj::haxelibPaths;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(291)
			::String tmp13 = name;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(291)
			::String tmp14 = result;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(291)
			tmp12->set(tmp13,tmp14);
		}
		HX_STACK_LINE(295)
		::haxe::ds::StringMap tmp9 = ::lime::tools::helpers::PathHelper_obj::haxelibPaths;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(295)
		::String tmp10 = name;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(295)
		::String tmp11 = tmp9->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(295)
		::String tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(295)
		return tmp12;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(PathHelper_obj,getHaxelib,return )

::String PathHelper_obj::getLibraryPath( ::lime::project::NDLL ndll,::String directoryName,::String __o_namePrefix,::String __o_nameSuffix,hx::Null< bool >  __o_allowDebug){
::String namePrefix = __o_namePrefix.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
::String nameSuffix = __o_nameSuffix.Default(HX_HCSTRING(".ndll","\x64","\x67","\x70","\xc5"));
bool allowDebug = __o_allowDebug.Default(false);
	HX_STACK_FRAME("lime.tools.helpers.PathHelper","getLibraryPath",0xbc457270,"lime.tools.helpers.PathHelper.getLibraryPath","lime/tools/helpers/PathHelper.hx",300,0xca1d8093)
	HX_STACK_ARG(ndll,"ndll")
	HX_STACK_ARG(directoryName,"directoryName")
	HX_STACK_ARG(namePrefix,"namePrefix")
	HX_STACK_ARG(nameSuffix,"nameSuffix")
	HX_STACK_ARG(allowDebug,"allowDebug")
{
		HX_STACK_LINE(302)
		bool usingDebug = false;		HX_STACK_VAR(usingDebug,"usingDebug");
		HX_STACK_LINE(303)
		::String path = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(path,"path");
		HX_STACK_LINE(305)
		bool tmp = allowDebug;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(305)
		if ((tmp)){
			HX_STACK_LINE(307)
			::lime::project::NDLL tmp1 = ndll;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(307)
			::String tmp2 = directoryName;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(307)
			::String tmp3 = (namePrefix + ndll->name);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(307)
			::String tmp4 = (tmp3 + HX_HCSTRING("-debug","\x06","\x8f","\x2e","\xd5"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(307)
			::String tmp5 = nameSuffix;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(307)
			::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(307)
			::String tmp7 = ::lime::tools::helpers::PathHelper_obj::searchForLibrary(tmp1,tmp2,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(307)
			path = tmp7;
			HX_STACK_LINE(308)
			::String tmp8 = path;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(308)
			bool tmp9 = ::sys::FileSystem_obj::exists(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(308)
			usingDebug = tmp9;
		}
		HX_STACK_LINE(312)
		bool tmp1 = usingDebug;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(312)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(312)
		if ((tmp2)){
			HX_STACK_LINE(314)
			::lime::project::NDLL tmp3 = ndll;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(314)
			::String tmp4 = directoryName;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(314)
			::String tmp5 = (namePrefix + ndll->name);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(314)
			::String tmp6 = nameSuffix;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(314)
			::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(314)
			::String tmp8 = ::lime::tools::helpers::PathHelper_obj::searchForLibrary(tmp3,tmp4,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(314)
			path = tmp8;
		}
		HX_STACK_LINE(318)
		::String tmp3 = path;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(318)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(PathHelper_obj,getLibraryPath,return )

::String PathHelper_obj::getTemporaryFile( ::String __o_extension){
::String extension = __o_extension.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("lime.tools.helpers.PathHelper","getTemporaryFile",0x8ce4ecdd,"lime.tools.helpers.PathHelper.getTemporaryFile","lime/tools/helpers/PathHelper.hx",323,0xca1d8093)
	HX_STACK_ARG(extension,"extension")
{
		HX_STACK_LINE(325)
		::String path = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(path,"path");
		HX_STACK_LINE(327)
		::String tmp = ::lime::tools::helpers::PlatformHelper_obj::get_hostPlatform();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(327)
		bool tmp1 = (tmp == HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(327)
		if ((tmp1)){
			HX_STACK_LINE(329)
			::String tmp2 = ::Sys_obj::getEnv(HX_HCSTRING("TEMP","\x14","\x8b","\xba","\x37"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(329)
			path = tmp2;
		}
		else{
			HX_STACK_LINE(333)
			::String tmp2 = ::Sys_obj::getEnv(HX_HCSTRING("TMPDIR","\xd6","\xe4","\xe9","\x20"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(333)
			path = tmp2;
			HX_STACK_LINE(335)
			bool tmp3 = (path == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(335)
			if ((tmp3)){
				HX_STACK_LINE(337)
				path = HX_HCSTRING("/tmp","\x08","\x6c","\x69","\x1f");
			}
		}
		HX_STACK_LINE(343)
		Float tmp2 = ::Math_obj::random();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(343)
		Float tmp3 = ((int)16777215 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(343)
		int tmp4 = ::Math_obj::round(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(343)
		::String tmp5 = (HX_HCSTRING("/temp_","\x3c","\xe4","\x56","\xd8") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(343)
		::String tmp6 = extension;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(343)
		::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(343)
		hx::AddEq(path,tmp7);
		HX_STACK_LINE(345)
		::String tmp8 = path;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(345)
		bool tmp9 = ::sys::FileSystem_obj::exists(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(345)
		if ((tmp9)){
			HX_STACK_LINE(347)
			::String tmp10 = extension;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(347)
			::String tmp11 = ::lime::tools::helpers::PathHelper_obj::getTemporaryFile(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(347)
			return tmp11;
		}
		HX_STACK_LINE(351)
		::String tmp10 = path;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(351)
		return tmp10;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PathHelper_obj,getTemporaryFile,return )

::String PathHelper_obj::getTemporaryDirectory( ){
	HX_STACK_FRAME("lime.tools.helpers.PathHelper","getTemporaryDirectory",0x6fed146c,"lime.tools.helpers.PathHelper.getTemporaryDirectory","lime/tools/helpers/PathHelper.hx",356,0xca1d8093)
	HX_STACK_LINE(358)
	::String tmp = ::lime::tools::helpers::PathHelper_obj::getTemporaryFile(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(358)
	::String path = tmp;		HX_STACK_VAR(path,"path");
	HX_STACK_LINE(359)
	::String tmp1 = path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(359)
	::lime::tools::helpers::PathHelper_obj::mkdir(tmp1);
	HX_STACK_LINE(360)
	::String tmp2 = path;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(360)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PathHelper_obj,getTemporaryDirectory,return )

bool PathHelper_obj::isAbsolute( ::String path){
	HX_STACK_FRAME("lime.tools.helpers.PathHelper","isAbsolute",0x362f22a7,"lime.tools.helpers.PathHelper.isAbsolute","lime/tools/helpers/PathHelper.hx",365,0xca1d8093)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(367)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(367)
	::String tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(367)
	bool tmp2 = ::StringTools_obj::startsWith(tmp1,HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(367)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(367)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(367)
	if ((tmp3)){
		HX_STACK_LINE(367)
		::String tmp5 = path;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(367)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(367)
		tmp4 = ::StringTools_obj::startsWith(tmp6,HX_HCSTRING("\\","\x5c","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(367)
		tmp4 = true;
	}
	HX_STACK_LINE(367)
	if ((tmp4)){
		HX_STACK_LINE(369)
		return true;
	}
	HX_STACK_LINE(373)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PathHelper_obj,isAbsolute,return )

bool PathHelper_obj::isRelative( ::String path){
	HX_STACK_FRAME("lime.tools.helpers.PathHelper","isRelative",0xa86e10fc,"lime.tools.helpers.PathHelper.isRelative","lime/tools/helpers/PathHelper.hx",378,0xca1d8093)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(380)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(380)
	bool tmp1 = ::lime::tools::helpers::PathHelper_obj::isAbsolute(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(380)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(380)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PathHelper_obj,isRelative,return )

Void PathHelper_obj::mkdir( ::String directory){
{
		HX_STACK_FRAME("lime.tools.helpers.PathHelper","mkdir",0x4afc3c49,"lime.tools.helpers.PathHelper.mkdir","lime/tools/helpers/PathHelper.hx",385,0xca1d8093)
		HX_STACK_ARG(directory,"directory")
		HX_STACK_LINE(387)
		::String tmp = directory;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(387)
		::String tmp1 = ::StringTools_obj::replace(tmp,HX_HCSTRING("\\","\x5c","\x00","\x00","\x00"),HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(387)
		directory = tmp1;
		HX_STACK_LINE(388)
		::String total = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(total,"total");
		HX_STACK_LINE(390)
		::String tmp2 = directory.substr((int)0,(int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(390)
		bool tmp3 = (tmp2 == HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(390)
		if ((tmp3)){
			HX_STACK_LINE(392)
			total = HX_HCSTRING("/","\x2f","\x00","\x00","\x00");
		}
		HX_STACK_LINE(396)
		Array< ::String > parts = directory.split(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(parts,"parts");
		HX_STACK_LINE(397)
		::String oldPath = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(oldPath,"oldPath");
		HX_STACK_LINE(399)
		bool tmp4 = (parts->length > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(399)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(399)
		if ((tmp4)){
			HX_STACK_LINE(399)
			::String tmp6 = parts->__get((int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(399)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(399)
			int tmp8 = tmp7.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(399)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(399)
			tmp5 = (tmp9 > (int)-1);
		}
		else{
			HX_STACK_LINE(399)
			tmp5 = false;
		}
		HX_STACK_LINE(399)
		if ((tmp5)){
			HX_STACK_LINE(401)
			::String tmp6 = ::Sys_obj::getCwd();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(401)
			oldPath = tmp6;
			HX_STACK_LINE(402)
			::String tmp7 = parts->__get((int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(402)
			::String tmp8 = (tmp7 + HX_HCSTRING("\\","\x5c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(402)
			::Sys_obj::setCwd(tmp8);
			HX_STACK_LINE(403)
			parts->shift();
		}
		HX_STACK_LINE(407)
		{
			HX_STACK_LINE(407)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(407)
			while((true)){
				HX_STACK_LINE(407)
				bool tmp6 = (_g < parts->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(407)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(407)
				if ((tmp7)){
					HX_STACK_LINE(407)
					break;
				}
				HX_STACK_LINE(407)
				::String tmp8 = parts->__get(_g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(407)
				::String part = tmp8;		HX_STACK_VAR(part,"part");
				HX_STACK_LINE(407)
				++(_g);
				HX_STACK_LINE(409)
				bool tmp9 = (part != HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(409)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(409)
				if ((tmp9)){
					HX_STACK_LINE(409)
					tmp10 = (part != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
				}
				else{
					HX_STACK_LINE(409)
					tmp10 = false;
				}
				HX_STACK_LINE(409)
				if ((tmp10)){
					HX_STACK_LINE(411)
					bool tmp11 = (total != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(411)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(411)
					if ((tmp11)){
						HX_STACK_LINE(411)
						tmp12 = (total != HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
					}
					else{
						HX_STACK_LINE(411)
						tmp12 = false;
					}
					HX_STACK_LINE(411)
					if ((tmp12)){
						HX_STACK_LINE(413)
						hx::AddEq(total,HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
					}
					HX_STACK_LINE(417)
					hx::AddEq(total,part);
					HX_STACK_LINE(419)
					::String tmp13 = total;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(419)
					bool tmp14 = ::sys::FileSystem_obj::exists(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(419)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(419)
					if ((tmp15)){
						HX_STACK_LINE(421)
						::String tmp16 = (HX_HCSTRING(" - \x1b""[1mCreating directory:\x1b""[0m ","\x3e","\xed","\x75","\x2c") + total);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(421)
						::lime::tools::helpers::LogHelper_obj::info(HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp16);
						HX_STACK_LINE(423)
						::String tmp17 = total;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(423)
						::sys::FileSystem_obj::createDirectory(tmp17);
					}
				}
			}
		}
		HX_STACK_LINE(431)
		bool tmp6 = (oldPath != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(431)
		if ((tmp6)){
			HX_STACK_LINE(433)
			::String tmp7 = oldPath;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(433)
			::Sys_obj::setCwd(tmp7);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PathHelper_obj,mkdir,(void))

Array< ::String > PathHelper_obj::readDirectory( ::String directory,Array< ::String > ignore,Array< ::String > paths){
	HX_STACK_FRAME("lime.tools.helpers.PathHelper","readDirectory",0xb33c85d1,"lime.tools.helpers.PathHelper.readDirectory","lime/tools/helpers/PathHelper.hx",440,0xca1d8093)
	HX_STACK_ARG(directory,"directory")
	HX_STACK_ARG(ignore,"ignore")
	HX_STACK_ARG(paths,"paths")
	HX_STACK_LINE(442)
	::String tmp = directory;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(442)
	bool tmp1 = ::sys::FileSystem_obj::exists(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(442)
	if ((tmp1)){
		HX_STACK_LINE(444)
		bool tmp2 = (paths == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(444)
		if ((tmp2)){
			HX_STACK_LINE(446)
			paths = Array_obj< ::String >::__new();
		}
		HX_STACK_LINE(450)
		Array< ::String > files;		HX_STACK_VAR(files,"files");
		HX_STACK_LINE(452)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(454)
			::String tmp3 = directory;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(454)
			files = ::sys::FileSystem_obj::readDirectory(tmp3);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(458)
					return paths;
				}
			}
		}
		HX_STACK_LINE(462)
		{
			HX_STACK_LINE(462)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(462)
			::String tmp3 = directory;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(462)
			Array< ::String > _g1 = ::sys::FileSystem_obj::readDirectory(tmp3);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(462)
			while((true)){
				HX_STACK_LINE(462)
				bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(462)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(462)
				if ((tmp5)){
					HX_STACK_LINE(462)
					break;
				}
				HX_STACK_LINE(462)
				::String tmp6 = _g1->__get(_g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(462)
				::String file = tmp6;		HX_STACK_VAR(file,"file");
				HX_STACK_LINE(462)
				++(_g);
				HX_STACK_LINE(464)
				bool tmp7 = (ignore != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(464)
				if ((tmp7)){
					HX_STACK_LINE(466)
					bool filtered = false;		HX_STACK_VAR(filtered,"filtered");
					HX_STACK_LINE(468)
					{
						HX_STACK_LINE(468)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(468)
						while((true)){
							HX_STACK_LINE(468)
							bool tmp8 = (_g2 < ignore->length);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(468)
							bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(468)
							if ((tmp9)){
								HX_STACK_LINE(468)
								break;
							}
							HX_STACK_LINE(468)
							::String tmp10 = ignore->__get(_g2);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(468)
							::String filter = tmp10;		HX_STACK_VAR(filter,"filter");
							HX_STACK_LINE(468)
							++(_g2);
							HX_STACK_LINE(470)
							bool tmp11 = (filter == file);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(470)
							if ((tmp11)){
								HX_STACK_LINE(472)
								filtered = true;
							}
						}
					}
					HX_STACK_LINE(478)
					bool tmp8 = filtered;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(478)
					if ((tmp8)){
						HX_STACK_LINE(478)
						continue;
					}
				}
				HX_STACK_LINE(482)
				::String tmp8 = (directory + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(482)
				::String tmp9 = file;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(482)
				::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(482)
				::String path = tmp10;		HX_STACK_VAR(path,"path");
				HX_STACK_LINE(484)
				try
				{
				HX_STACK_CATCHABLE(Dynamic, 0);
				{
					HX_STACK_LINE(486)
					::String tmp11 = path;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(486)
					bool tmp12 = ::sys::FileSystem_obj::isDirectory(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(486)
					if ((tmp12)){
						HX_STACK_LINE(488)
						::String tmp13 = path;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(488)
						::lime::tools::helpers::PathHelper_obj::readDirectory(tmp13,ignore,paths);
					}
					else{
						HX_STACK_LINE(492)
						::String tmp13 = path;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(492)
						paths->push(tmp13);
					}
				}
				}
				catch(Dynamic __e){
					{
						HX_STACK_BEGIN_CATCH
						Dynamic e = __e;{
							HX_STACK_LINE(498)
							return paths;
						}
					}
				}
			}
		}
		HX_STACK_LINE(504)
		return paths;
	}
	HX_STACK_LINE(508)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(PathHelper_obj,readDirectory,return )

::String PathHelper_obj::relocatePath( ::String path,::String targetDirectory){
	HX_STACK_FRAME("lime.tools.helpers.PathHelper","relocatePath",0xcbdf7770,"lime.tools.helpers.PathHelper.relocatePath","lime/tools/helpers/PathHelper.hx",513,0xca1d8093)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(targetDirectory,"targetDirectory")
	HX_STACK_LINE(517)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(517)
	::String tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(517)
	bool tmp2 = ::lime::tools::helpers::PathHelper_obj::isAbsolute(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(517)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(517)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(517)
	if ((tmp3)){
		HX_STACK_LINE(517)
		tmp4 = (targetDirectory == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(517)
		tmp4 = true;
	}
	HX_STACK_LINE(517)
	if ((tmp4)){
		HX_STACK_LINE(519)
		::String tmp5 = path;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(519)
		return tmp5;
	}
	else{
		HX_STACK_LINE(521)
		::String tmp5 = targetDirectory;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(521)
		bool tmp6 = ::lime::tools::helpers::PathHelper_obj::isAbsolute(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(521)
		if ((tmp6)){
			HX_STACK_LINE(523)
			::String tmp7 = ::Sys_obj::getCwd();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(523)
			::String tmp8 = path;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(523)
			::String tmp9 = ::lime::tools::helpers::PathHelper_obj::combine(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(523)
			return tmp9;
		}
		else{
			HX_STACK_LINE(527)
			::String tmp7 = targetDirectory;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(527)
			::String tmp8 = ::StringTools_obj::replace(tmp7,HX_HCSTRING("\\","\x5c","\x00","\x00","\x00"),HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(527)
			targetDirectory = tmp8;
			HX_STACK_LINE(529)
			Array< ::String > splitTarget = targetDirectory.split(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(splitTarget,"splitTarget");
			HX_STACK_LINE(530)
			int directories = (int)0;		HX_STACK_VAR(directories,"directories");
			HX_STACK_LINE(532)
			while((true)){
				HX_STACK_LINE(532)
				bool tmp9 = (splitTarget->length > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(532)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(532)
				if ((tmp10)){
					HX_STACK_LINE(532)
					break;
				}
				HX_STACK_LINE(534)
				{
					HX_STACK_LINE(534)
					::String tmp11 = splitTarget->shift();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(534)
					::String _g = tmp11;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(534)
					bool tmp12 = (_g != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(534)
					if ((tmp12)){
						HX_STACK_LINE(534)
						::String tmp13 = _g;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(534)
						::String _switch_1 = (tmp13);
						if (  ( _switch_1==HX_HCSTRING(".","\x2e","\x00","\x00","\x00")) ||  ( _switch_1==HX_HCSTRING("","\x00","\x00","\x00","\x00"))){
						}
						else if (  ( _switch_1==HX_HCSTRING("..","\x40","\x28","\x00","\x00"))){
							HX_STACK_LINE(542)
							(directories)--;
						}
						else  {
							HX_STACK_LINE(546)
							(directories)++;
						}
;
;
					}
					else{
						HX_STACK_LINE(546)
						(directories)++;
					}
				}
			}
			HX_STACK_LINE(552)
			::String adjust = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(adjust,"adjust");
			HX_STACK_LINE(554)
			{
				HX_STACK_LINE(554)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(554)
				while((true)){
					HX_STACK_LINE(554)
					bool tmp9 = (_g < directories);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(554)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(554)
					if ((tmp10)){
						HX_STACK_LINE(554)
						break;
					}
					HX_STACK_LINE(554)
					int tmp11 = (_g)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(554)
					int i = tmp11;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(556)
					hx::AddEq(adjust,HX_HCSTRING("../","\xef","\x0f","\x23","\x00"));
				}
			}
			HX_STACK_LINE(560)
			::String tmp9 = (adjust + path);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(560)
			return tmp9;
		}
	}
	HX_STACK_LINE(517)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PathHelper_obj,relocatePath,return )

Array< ::String > PathHelper_obj::relocatePaths( Array< ::String > paths,::String targetDirectory){
	HX_STACK_FRAME("lime.tools.helpers.PathHelper","relocatePaths",0x97a90b03,"lime.tools.helpers.PathHelper.relocatePaths","lime/tools/helpers/PathHelper.hx",567,0xca1d8093)
	HX_STACK_ARG(paths,"paths")
	HX_STACK_ARG(targetDirectory,"targetDirectory")
	HX_STACK_LINE(569)
	Array< ::String > relocatedPaths = paths->copy();		HX_STACK_VAR(relocatedPaths,"relocatedPaths");
	HX_STACK_LINE(571)
	{
		HX_STACK_LINE(571)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(571)
		int _g = paths->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(571)
		while((true)){
			HX_STACK_LINE(571)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(571)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(571)
			if ((tmp1)){
				HX_STACK_LINE(571)
				break;
			}
			HX_STACK_LINE(571)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(571)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(573)
			::String tmp3 = paths->__get(i);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(573)
			::String tmp4 = targetDirectory;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(573)
			::String tmp5 = ::lime::tools::helpers::PathHelper_obj::relocatePath(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(573)
			relocatedPaths[i] = tmp5;
		}
	}
	HX_STACK_LINE(577)
	return relocatedPaths;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PathHelper_obj,relocatePaths,return )

Void PathHelper_obj::removeDirectory( ::String directory){
{
		HX_STACK_FRAME("lime.tools.helpers.PathHelper","removeDirectory",0x2899c1a3,"lime.tools.helpers.PathHelper.removeDirectory","lime/tools/helpers/PathHelper.hx",582,0xca1d8093)
		HX_STACK_ARG(directory,"directory")
		HX_STACK_LINE(584)
		::String tmp = directory;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(584)
		bool tmp1 = ::sys::FileSystem_obj::exists(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(584)
		if ((tmp1)){
			HX_STACK_LINE(586)
			Array< ::String > files;		HX_STACK_VAR(files,"files");
			HX_STACK_LINE(588)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(590)
				::String tmp2 = directory;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(590)
				files = ::sys::FileSystem_obj::readDirectory(tmp2);
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(594)
						return null();
					}
				}
			}
			HX_STACK_LINE(598)
			{
				HX_STACK_LINE(598)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(598)
				::String tmp2 = directory;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(598)
				Array< ::String > _g1 = ::sys::FileSystem_obj::readDirectory(tmp2);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(598)
				while((true)){
					HX_STACK_LINE(598)
					bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(598)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(598)
					if ((tmp4)){
						HX_STACK_LINE(598)
						break;
					}
					HX_STACK_LINE(598)
					::String tmp5 = _g1->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(598)
					::String file = tmp5;		HX_STACK_VAR(file,"file");
					HX_STACK_LINE(598)
					++(_g);
					HX_STACK_LINE(600)
					::String tmp6 = (directory + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(600)
					::String tmp7 = file;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(600)
					::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(600)
					::String path = tmp8;		HX_STACK_VAR(path,"path");
					HX_STACK_LINE(602)
					try
					{
					HX_STACK_CATCHABLE(Dynamic, 0);
					{
						HX_STACK_LINE(604)
						::String tmp9 = path;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(604)
						bool tmp10 = ::sys::FileSystem_obj::isDirectory(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(604)
						if ((tmp10)){
							HX_STACK_LINE(606)
							::String tmp11 = path;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(606)
							::lime::tools::helpers::PathHelper_obj::removeDirectory(tmp11);
						}
						else{
							HX_STACK_LINE(610)
							::String tmp11 = path;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(610)
							::sys::FileSystem_obj::deleteFile(tmp11);
						}
					}
					}
					catch(Dynamic __e){
						{
							HX_STACK_BEGIN_CATCH
							Dynamic e = __e;{
							}
						}
					}
				}
			}
			HX_STACK_LINE(618)
			::String tmp2 = (HX_HCSTRING(" - \x1b""[1mRemoving directory:\x1b""[0m ","\x86","\x14","\x0e","\x68") + directory);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(618)
			::lime::tools::helpers::LogHelper_obj::info(HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp2);
			HX_STACK_LINE(620)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(622)
				::String tmp3 = directory;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(622)
				::sys::FileSystem_obj::deleteDirectory(tmp3);
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PathHelper_obj,removeDirectory,(void))

::String PathHelper_obj::safeFileName( ::String name){
	HX_STACK_FRAME("lime.tools.helpers.PathHelper","safeFileName",0xe8bfc0fa,"lime.tools.helpers.PathHelper.safeFileName","lime/tools/helpers/PathHelper.hx",631,0xca1d8093)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(633)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(633)
	::String tmp1 = ::StringTools_obj::replace(tmp,HX_HCSTRING(" ","\x20","\x00","\x00","\x00"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(633)
	::String safeName = tmp1;		HX_STACK_VAR(safeName,"safeName");
	HX_STACK_LINE(634)
	::String tmp2 = safeName;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(634)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PathHelper_obj,safeFileName,return )

::String PathHelper_obj::searchForLibrary( ::lime::project::NDLL ndll,::String directoryName,::String filename){
	HX_STACK_FRAME("lime.tools.helpers.PathHelper","searchForLibrary",0xe528c320,"lime.tools.helpers.PathHelper.searchForLibrary","lime/tools/helpers/PathHelper.hx",639,0xca1d8093)
	HX_STACK_ARG(ndll,"ndll")
	HX_STACK_ARG(directoryName,"directoryName")
	HX_STACK_ARG(filename,"filename")
	HX_STACK_LINE(641)
	bool tmp = (ndll->path != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(641)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(641)
	if ((tmp)){
		HX_STACK_LINE(641)
		tmp1 = (ndll->path != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(641)
		tmp1 = false;
	}
	HX_STACK_LINE(641)
	if ((tmp1)){
		HX_STACK_LINE(643)
		::String tmp2 = ndll->path;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(643)
		return tmp2;
	}
	else{
		HX_STACK_LINE(645)
		bool tmp2 = (ndll->haxelib == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(645)
		if ((tmp2)){
			HX_STACK_LINE(647)
			bool tmp3 = (ndll->extensionPath != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(647)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(647)
			if ((tmp3)){
				HX_STACK_LINE(647)
				tmp4 = (ndll->extensionPath != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(647)
				tmp4 = false;
			}
			HX_STACK_LINE(647)
			if ((tmp4)){
				HX_STACK_LINE(649)
				::String subdirectory = HX_HCSTRING("ndll/","\x39","\x77","\x7f","\x98");		HX_STACK_VAR(subdirectory,"subdirectory");
				HX_STACK_LINE(651)
				bool tmp5 = (ndll->subdirectory != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(651)
				if ((tmp5)){
					HX_STACK_LINE(653)
					bool tmp6 = (ndll->subdirectory != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(653)
					if ((tmp6)){
						HX_STACK_LINE(655)
						::String tmp7 = (ndll->subdirectory + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(655)
						subdirectory = tmp7;
					}
					else{
						HX_STACK_LINE(659)
						subdirectory = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					}
				}
				HX_STACK_LINE(665)
				::String tmp6 = ndll->extensionPath;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(665)
				::String tmp7 = (subdirectory + directoryName);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(665)
				::String tmp8 = (tmp7 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(665)
				::String tmp9 = filename;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(665)
				::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(665)
				::String tmp11 = ::lime::tools::helpers::PathHelper_obj::combine(tmp6,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(665)
				return tmp11;
			}
			else{
				HX_STACK_LINE(669)
				::String tmp5 = filename;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(669)
				return tmp5;
			}
		}
		else{
			HX_STACK_LINE(673)
			::String tmp3 = ndll->haxelib->name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(673)
			bool tmp4 = (tmp3 == HX_HCSTRING("hxcpp","\x13","\x70","\x49","\x31"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(673)
			if ((tmp4)){
				HX_STACK_LINE(675)
				::String tmp5 = filename;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(675)
				::String tmp6 = ::haxe::io::Path_obj::extension(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(675)
				::String extension = tmp6;		HX_STACK_VAR(extension,"extension");
				HX_STACK_LINE(677)
				bool tmp7 = (extension == HX_HCSTRING("a","\x61","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(677)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(677)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(677)
				if ((tmp8)){
					HX_STACK_LINE(677)
					tmp9 = (extension == HX_HCSTRING("lib","\x45","\x4f","\x52","\x00"));
				}
				else{
					HX_STACK_LINE(677)
					tmp9 = true;
				}
				HX_STACK_LINE(677)
				if ((tmp9)){
					HX_STACK_LINE(679)
					::lime::project::Haxelib tmp10 = ndll->haxelib;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(679)
					::String tmp11 = ::lime::tools::helpers::PathHelper_obj::getHaxelib(tmp10,true,null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(679)
					::String tmp12 = (HX_HCSTRING("lib/","\x4a","\x0d","\xb3","\x47") + directoryName);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(679)
					::String tmp13 = (tmp12 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(679)
					::String tmp14 = filename;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(679)
					::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(679)
					::String tmp16 = ::lime::tools::helpers::PathHelper_obj::combine(tmp11,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(679)
					return tmp16;
				}
				else{
					HX_STACK_LINE(683)
					::lime::project::Haxelib tmp10 = ndll->haxelib;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(683)
					::String tmp11 = ::lime::tools::helpers::PathHelper_obj::getHaxelib(tmp10,true,null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(683)
					::String tmp12 = (HX_HCSTRING("bin/","\x88","\xf5","\x16","\x41") + directoryName);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(683)
					::String tmp13 = (tmp12 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(683)
					::String tmp14 = filename;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(683)
					::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(683)
					::String tmp16 = ::lime::tools::helpers::PathHelper_obj::combine(tmp11,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(683)
					return tmp16;
				}
			}
			else{
				HX_STACK_LINE(689)
				::String subdirectory = HX_HCSTRING("ndll/","\x39","\x77","\x7f","\x98");		HX_STACK_VAR(subdirectory,"subdirectory");
				HX_STACK_LINE(691)
				bool tmp5 = (ndll->subdirectory != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(691)
				if ((tmp5)){
					HX_STACK_LINE(693)
					bool tmp6 = (ndll->subdirectory != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(693)
					if ((tmp6)){
						HX_STACK_LINE(695)
						::String tmp7 = (ndll->subdirectory + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(695)
						subdirectory = tmp7;
					}
					else{
						HX_STACK_LINE(699)
						subdirectory = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					}
				}
				HX_STACK_LINE(705)
				::lime::project::Haxelib tmp6 = ndll->haxelib;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(705)
				::String tmp7 = ::lime::tools::helpers::PathHelper_obj::getHaxelib(tmp6,true,null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(705)
				::String tmp8 = (subdirectory + directoryName);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(705)
				::String tmp9 = (tmp8 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(705)
				::String tmp10 = filename;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(705)
				::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(705)
				::String tmp12 = ::lime::tools::helpers::PathHelper_obj::combine(tmp7,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(705)
				return tmp12;
			}
		}
	}
	HX_STACK_LINE(641)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(PathHelper_obj,searchForLibrary,return )

::String PathHelper_obj::standardize( ::String path,hx::Null< bool >  __o_trailingSlash){
bool trailingSlash = __o_trailingSlash.Default(false);
	HX_STACK_FRAME("lime.tools.helpers.PathHelper","standardize",0x68f5e351,"lime.tools.helpers.PathHelper.standardize","lime/tools/helpers/PathHelper.hx",712,0xca1d8093)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(trailingSlash,"trailingSlash")
{
		HX_STACK_LINE(714)
		::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(714)
		::String tmp1 = ::StringTools_obj::replace(tmp,HX_HCSTRING("\\","\x5c","\x00","\x00","\x00"),HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(714)
		path = tmp1;
		HX_STACK_LINE(715)
		::String tmp2 = path;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(715)
		::String tmp3 = ::StringTools_obj::replace(tmp2,HX_HCSTRING("//","\x20","\x29","\x00","\x00"),HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(715)
		path = tmp3;
		HX_STACK_LINE(716)
		::String tmp4 = path;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(716)
		::String tmp5 = ::StringTools_obj::replace(tmp4,HX_HCSTRING("//","\x20","\x29","\x00","\x00"),HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(716)
		path = tmp5;
		HX_STACK_LINE(718)
		bool tmp6 = trailingSlash;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(718)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(718)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(718)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(718)
		if ((tmp8)){
			HX_STACK_LINE(718)
			::String tmp10 = path;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(718)
			::String tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(718)
			tmp9 = ::StringTools_obj::endsWith(tmp11,HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(718)
			tmp9 = false;
		}
		HX_STACK_LINE(718)
		if ((tmp9)){
			HX_STACK_LINE(720)
			int tmp10 = (path.length - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(720)
			::String tmp11 = path.substr((int)0,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(720)
			path = tmp11;
		}
		else{
			HX_STACK_LINE(722)
			bool tmp10 = trailingSlash;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(722)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(722)
			if ((tmp10)){
				HX_STACK_LINE(722)
				::String tmp12 = path;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(722)
				::String tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(722)
				bool tmp14 = ::StringTools_obj::endsWith(tmp13,HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(722)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(722)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(722)
				tmp11 = !(tmp16);
			}
			else{
				HX_STACK_LINE(722)
				tmp11 = false;
			}
			HX_STACK_LINE(722)
			if ((tmp11)){
				HX_STACK_LINE(724)
				hx::AddEq(path,HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
			}
		}
		HX_STACK_LINE(728)
		::String tmp10 = ::lime::tools::helpers::PlatformHelper_obj::get_hostPlatform();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(728)
		bool tmp11 = (tmp10 == HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(728)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(728)
		if ((tmp11)){
			HX_STACK_LINE(728)
			::String tmp13 = path.charAt((int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(728)
			::String tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(728)
			tmp12 = (tmp14 == HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(728)
			tmp12 = false;
		}
		HX_STACK_LINE(728)
		if ((tmp12)){
			HX_STACK_LINE(730)
			::String tmp13 = path.charAt((int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(730)
			::String tmp14 = tmp13.toUpperCase();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(730)
			::String tmp15 = (tmp14 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(730)
			::String tmp16 = path.substr((int)2,null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(730)
			::String tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(730)
			path = tmp17;
		}
		HX_STACK_LINE(734)
		::String tmp13 = path;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(734)
		return tmp13;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PathHelper_obj,standardize,return )

::String PathHelper_obj::tryFullPath( ::String path){
	HX_STACK_FRAME("lime.tools.helpers.PathHelper","tryFullPath",0xe7336649,"lime.tools.helpers.PathHelper.tryFullPath","lime/tools/helpers/PathHelper.hx",741,0xca1d8093)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(741)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(743)
		::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(743)
		::String tmp1 = ::sys::FileSystem_obj::fullPath(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(743)
		return tmp1;
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(747)
				::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(747)
				::String tmp1 = ::lime::tools::helpers::PathHelper_obj::expand(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(747)
				return tmp1;
			}
		}
	}
	HX_STACK_LINE(741)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PathHelper_obj,tryFullPath,return )


PathHelper_obj::PathHelper_obj()
{
}

bool PathHelper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"mkdir") ) { outValue = mkdir_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"escape") ) { outValue = escape_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"expand") ) { outValue = expand_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"combine") ) { outValue = combine_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getHaxelib") ) { outValue = getHaxelib_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isAbsolute") ) { outValue = isAbsolute_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isRelative") ) { outValue = isRelative_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"standardize") ) { outValue = standardize_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"tryFullPath") ) { outValue = tryFullPath_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"haxelibPaths") ) { outValue = haxelibPaths; return true;  }
		if (HX_FIELD_EQ(inName,"findTemplate") ) { outValue = findTemplate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"relocatePath") ) { outValue = relocatePath_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"safeFileName") ) { outValue = safeFileName_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"findTemplates") ) { outValue = findTemplates_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"readDirectory") ) { outValue = readDirectory_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"relocatePaths") ) { outValue = relocatePaths_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getLibraryPath") ) { outValue = getLibraryPath_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeDirectory") ) { outValue = removeDirectory_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"haxelibOverrides") ) { outValue = haxelibOverrides; return true;  }
		if (HX_FIELD_EQ(inName,"getTemporaryFile") ) { outValue = getTemporaryFile_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"searchForLibrary") ) { outValue = searchForLibrary_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getTemporaryDirectory") ) { outValue = getTemporaryDirectory_dyn(); return true;  }
	}
	return false;
}

bool PathHelper_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"haxelibPaths") ) { haxelibPaths=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"haxelibOverrides") ) { haxelibOverrides=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &PathHelper_obj::haxelibOverrides,HX_HCSTRING("haxelibOverrides","\xc8","\xb5","\x5f","\xb5")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &PathHelper_obj::haxelibPaths,HX_HCSTRING("haxelibPaths","\xcf","\x7b","\x45","\x95")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PathHelper_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PathHelper_obj::haxelibOverrides,"haxelibOverrides");
	HX_MARK_MEMBER_NAME(PathHelper_obj::haxelibPaths,"haxelibPaths");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PathHelper_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PathHelper_obj::haxelibOverrides,"haxelibOverrides");
	HX_VISIT_MEMBER_NAME(PathHelper_obj::haxelibPaths,"haxelibPaths");
};

#endif

hx::Class PathHelper_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("haxelibOverrides","\xc8","\xb5","\x5f","\xb5"),
	HX_HCSTRING("haxelibPaths","\xcf","\x7b","\x45","\x95"),
	HX_HCSTRING("combine","\x7f","\x2a","\x2e","\x7a"),
	HX_HCSTRING("escape","\x81","\x43","\xda","\xda"),
	HX_HCSTRING("expand","\x5a","\xee","\x72","\xc4"),
	HX_HCSTRING("findTemplate","\x93","\xd5","\xc5","\x99"),
	HX_HCSTRING("findTemplates","\x80","\x0b","\x55","\xf3"),
	HX_HCSTRING("getHaxelib","\xe9","\x3c","\xe2","\x57"),
	HX_HCSTRING("getLibraryPath","\x4a","\x25","\xd8","\x33"),
	HX_HCSTRING("getTemporaryFile","\x37","\x8a","\xad","\x14"),
	HX_HCSTRING("getTemporaryDirectory","\xd2","\xd0","\xe9","\xb6"),
	HX_HCSTRING("isAbsolute","\x81","\xe0","\x44","\x3e"),
	HX_HCSTRING("isRelative","\xd6","\xce","\x83","\xb0"),
	HX_HCSTRING("mkdir","\xaf","\x4c","\xb3","\x09"),
	HX_HCSTRING("readDirectory","\x37","\x6c","\xb3","\xa3"),
	HX_HCSTRING("relocatePath","\xca","\xdf","\x43","\x53"),
	HX_HCSTRING("relocatePaths","\x69","\xf1","\x1f","\x88"),
	HX_HCSTRING("removeDirectory","\x89","\x8d","\x63","\x51"),
	HX_HCSTRING("safeFileName","\x54","\x29","\x24","\x70"),
	HX_HCSTRING("searchForLibrary","\x7a","\x60","\xf1","\x6c"),
	HX_HCSTRING("standardize","\x37","\x44","\xe6","\x73"),
	HX_HCSTRING("tryFullPath","\x2f","\xc7","\x23","\xf2"),
	::String(null()) };

void PathHelper_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.tools.helpers.PathHelper","\x88","\x40","\x87","\xc8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PathHelper_obj::__GetStatic;
	__mClass->mSetStaticField = &PathHelper_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< PathHelper_obj >;
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

void PathHelper_obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/tools/helpers/PathHelper.hx",18,0xca1d8093)
		{
			HX_STACK_LINE(18)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(18)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(18)
			return tmp1;
		}
		return null();
	}
};
	haxelibOverrides= _Function_0_1::Block();
struct _Function_0_2{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/tools/helpers/PathHelper.hx",20,0xca1d8093)
		{
			HX_STACK_LINE(20)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(20)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(20)
			return tmp1;
		}
		return null();
	}
};
	haxelibPaths= _Function_0_2::Block();
}

} // end namespace lime
} // end namespace tools
} // end namespace helpers
