// Class: AnimRigKongmingLantern


/* AnimRigKongmingLantern::~AnimRigKongmingLantern() */

void __thiscall AnimRigKongmingLantern::~AnimRigKongmingLantern(AnimRigKongmingLantern *this)

{
  *(undefined ***)this = &PTR_GetClass_0663ca70;
  *(undefined ***)(this + 0x10) = &PTR__AnimRigKongmingLantern_0663cb90;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to AnimRigKongmingLantern::~AnimRigKongmingLantern() */

void __thiscall AnimRigKongmingLantern::~AnimRigKongmingLantern(AnimRigKongmingLantern *this)

{
  ~AnimRigKongmingLantern(this + -0x10);
  return;
}


/* AnimRigKongmingLantern::~AnimRigKongmingLantern() */

void __thiscall AnimRigKongmingLantern::~AnimRigKongmingLantern(AnimRigKongmingLantern *this)

{
  ~AnimRigKongmingLantern(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AnimRigKongmingLantern::~AnimRigKongmingLantern() */

void __thiscall AnimRigKongmingLantern::~AnimRigKongmingLantern(AnimRigKongmingLantern *this)

{
  ~AnimRigKongmingLantern(this + -0x10);
  return;
}


/* AnimRigKongmingLantern::AnimRigKongmingLantern() */

void __thiscall AnimRigKongmingLantern::AnimRigKongmingLantern(AnimRigKongmingLantern *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0663ca70;
  *(undefined ***)(this + 0x10) = &PTR__AnimRigKongmingLantern_0663cb90;
  return;
}


/* AnimRigKongmingLantern::StaticNew() */

AnimRigKongmingLantern * AnimRigKongmingLantern::StaticNew(void)

{
  AnimRigKongmingLantern *this;
  
  this = ::operator_new(0x210);
  AnimRigKongmingLantern(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimRigKongmingLantern::StaticClassInit() */

void AnimRigKongmingLantern::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"AnimRigKongmingLantern");
    (*pcVar2)(plVar1,asStack_10,FUN_03475a48,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnimRigKongmingLantern::StaticGetClass() */

long * AnimRigKongmingLantern::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"AnimRigKongmingLantern",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnimRigKongmingLantern::GetClass() const */

long * AnimRigKongmingLantern::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"AnimRigKongmingLantern",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimRigKongmingLantern::playDown(std::string, RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
AnimRigKongmingLantern::playDown
          (AnimRigKongmingLantern *this,string *param_2,RtReflectionDelegate *param_3)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::operator+(param_2,"_down");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimRigKongmingLantern::playDisappear(std::string,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
AnimRigKongmingLantern::playDisappear
          (AnimRigKongmingLantern *this,string *param_2,RtReflectionDelegate *param_3)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::operator+(param_2,"_disappear");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimRigKongmingLantern::playHit(std::string const&,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
AnimRigKongmingLantern::playHit
          (AnimRigKongmingLantern *this,undefined8 param_1,RtReflectionDelegate *param_3)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_031f5e7c(asStack_58,&DAT_055ace38);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,param_1,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}

