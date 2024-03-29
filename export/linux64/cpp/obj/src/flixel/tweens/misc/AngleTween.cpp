#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_AngleTween
#include <flixel/tweens/misc/AngleTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
namespace flixel{
namespace tweens{
namespace misc{

Void AngleTween_obj::__construct(Dynamic Options)
{
HX_STACK_FRAME("flixel.tweens.misc.AngleTween","new",0x28853ef8,"flixel.tweens.misc.AngleTween.new","flixel/tweens/misc/AngleTween.hx",10,0x989494f7)
HX_STACK_THIS(this)
HX_STACK_ARG(Options,"Options")
{
	HX_STACK_LINE(10)
	Dynamic tmp = Options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	super::__construct(tmp);
}
;
	return null();
}

//AngleTween_obj::~AngleTween_obj() { }

Dynamic AngleTween_obj::__CreateEmpty() { return  new AngleTween_obj; }
hx::ObjectPtr< AngleTween_obj > AngleTween_obj::__new(Dynamic Options)
{  hx::ObjectPtr< AngleTween_obj > _result_ = new AngleTween_obj();
	_result_->__construct(Options);
	return _result_;}

Dynamic AngleTween_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AngleTween_obj > _result_ = new AngleTween_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void AngleTween_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tweens.misc.AngleTween","destroy",0x51eec792,"flixel.tweens.misc.AngleTween.destroy","flixel/tweens/misc/AngleTween.hx",26,0x989494f7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(27)
		this->super::destroy();
		HX_STACK_LINE(28)
		this->sprite = null();
	}
return null();
}


::flixel::tweens::misc::AngleTween AngleTween_obj::tween( Float FromAngle,Float ToAngle,Float Duration,::flixel::FlxSprite Sprite){
	HX_STACK_FRAME("flixel.tweens.misc.AngleTween","tween",0xc3ccef03,"flixel.tweens.misc.AngleTween.tween","flixel/tweens/misc/AngleTween.hx",39,0x989494f7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FromAngle,"FromAngle")
	HX_STACK_ARG(ToAngle,"ToAngle")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_LINE(40)
	Float tmp = this->angle = FromAngle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	this->_start = tmp;
	HX_STACK_LINE(41)
	Float tmp1 = ToAngle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	Float tmp2 = this->angle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(41)
	Float d = tmp3;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(42)
	Float tmp4 = d;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(42)
	Float tmp5 = ::Math_obj::abs(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(42)
	Float a = tmp5;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(43)
	bool tmp6 = (a > (int)181);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(43)
	if ((tmp6)){
		HX_STACK_LINE(45)
		Float tmp7 = ((int)360 - a);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(45)
		bool tmp8 = (d > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(45)
		int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(45)
		if ((tmp8)){
			HX_STACK_LINE(45)
			tmp9 = (int)-1;
		}
		else{
			HX_STACK_LINE(45)
			tmp9 = (int)1;
		}
		HX_STACK_LINE(45)
		Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(45)
		this->_range = tmp10;
	}
	else{
		HX_STACK_LINE(47)
		bool tmp7 = (a < (int)179);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(47)
		if ((tmp7)){
			HX_STACK_LINE(49)
			this->_range = d;
		}
		else{
			HX_STACK_LINE(53)
			Float tmp8 = ::flixel::util::FlxRandom_obj::floatRanged((int)180,(int)-180,null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(53)
			this->_range = tmp8;
		}
	}
	HX_STACK_LINE(55)
	this->duration = Duration;
	HX_STACK_LINE(56)
	this->sprite = Sprite;
	HX_STACK_LINE(57)
	this->start();
	HX_STACK_LINE(58)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC4(AngleTween_obj,tween,return )

Void AngleTween_obj::update( ){
{
		HX_STACK_FRAME("flixel.tweens.misc.AngleTween","update",0xed654671,"flixel.tweens.misc.AngleTween.update","flixel/tweens/misc/AngleTween.hx",62,0x989494f7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(63)
		this->super::update();
		HX_STACK_LINE(65)
		Float tmp = this->_start;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		Float tmp1 = this->_range;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		Float tmp2 = this->scale;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(65)
		Float tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(65)
		Float tmp5 = hx::Mod(tmp4,(int)360);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(65)
		this->angle = tmp5;
		HX_STACK_LINE(67)
		Float tmp6 = this->angle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(67)
		bool tmp7 = (tmp6 < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(67)
		if ((tmp7)){
			HX_STACK_LINE(69)
			hx::AddEq(this->angle,(int)360);
		}
		HX_STACK_LINE(72)
		::flixel::FlxSprite tmp8 = this->sprite;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(72)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(72)
		if ((tmp9)){
			HX_STACK_LINE(74)
			::flixel::FlxSprite tmp10 = this->sprite;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(74)
			Float tmp11 = this->angle;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(74)
			tmp10->set_angle(tmp11);
		}
	}
return null();
}



AngleTween_obj::AngleTween_obj()
{
}

void AngleTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AngleTween);
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(_start,"_start");
	HX_MARK_MEMBER_NAME(_range,"_range");
	::flixel::tweens::FlxTween_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AngleTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(_start,"_start");
	HX_VISIT_MEMBER_NAME(_range,"_range");
	::flixel::tweens::FlxTween_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AngleTween_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		if (HX_FIELD_EQ(inName,"_start") ) { return _start; }
		if (HX_FIELD_EQ(inName,"_range") ) { return _range; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AngleTween_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_start") ) { _start=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_range") ) { _range=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AngleTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"));
	outFields->push(HX_HCSTRING("_start","\xa3","\xbb","\xf2","\x7f"));
	outFields->push(HX_HCSTRING("_range","\xfe","\xec","\x06","\xe0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(AngleTween_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(AngleTween_obj,sprite),HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3")},
	{hx::fsFloat,(int)offsetof(AngleTween_obj,_start),HX_HCSTRING("_start","\xa3","\xbb","\xf2","\x7f")},
	{hx::fsFloat,(int)offsetof(AngleTween_obj,_range),HX_HCSTRING("_range","\xfe","\xec","\x06","\xe0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"),
	HX_HCSTRING("_start","\xa3","\xbb","\xf2","\x7f"),
	HX_HCSTRING("_range","\xfe","\xec","\x06","\xe0"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AngleTween_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AngleTween_obj::__mClass,"__mClass");
};

#endif

hx::Class AngleTween_obj::__mClass;

void AngleTween_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tweens.misc.AngleTween","\x06","\xa3","\xd4","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AngleTween_obj >;
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

} // end namespace flixel
} // end namespace tweens
} // end namespace misc
