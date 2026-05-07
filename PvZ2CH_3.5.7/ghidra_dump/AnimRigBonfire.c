// Class: AnimRigBonfire


/* AnimRigBonfire::~AnimRigBonfire() */

void __thiscall AnimRigBonfire::~AnimRigBonfire(AnimRigBonfire *this)

{
  *(undefined ***)this = &PTR_GetClass_0663cec0;
  *(undefined ***)(this + 0x10) = &PTR__AnimRigBonfire_0663cfe0;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to AnimRigBonfire::~AnimRigBonfire() */

void __thiscall AnimRigBonfire::~AnimRigBonfire(AnimRigBonfire *this)

{
  ~AnimRigBonfire(this + -0x10);
  return;
}


/* AnimRigBonfire::~AnimRigBonfire() */

void __thiscall AnimRigBonfire::~AnimRigBonfire(AnimRigBonfire *this)

{
  ~AnimRigBonfire(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AnimRigBonfire::~AnimRigBonfire() */

void __thiscall AnimRigBonfire::~AnimRigBonfire(AnimRigBonfire *this)

{
  ~AnimRigBonfire(this + -0x10);
  return;
}


/* AnimRigBonfire::AnimRigBonfire() */

void __thiscall AnimRigBonfire::AnimRigBonfire(AnimRigBonfire *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0663cec0;
  *(undefined ***)(this + 0x10) = &PTR__AnimRigBonfire_0663cfe0;
  return;
}


/* AnimRigBonfire::StaticNew() */

AnimRigBonfire * AnimRigBonfire::StaticNew(void)

{
  AnimRigBonfire *this;
  
  this = ::operator_new(0x210);
  AnimRigBonfire(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimRigBonfire::StaticClassInit() */

void AnimRigBonfire::StaticClassInit(void)

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
    std::string::string(asStack_10,"AnimRigBonfire");
    (*pcVar2)(plVar1,asStack_10,FUN_03475e58,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnimRigBonfire::StaticGetClass() */

long * AnimRigBonfire::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AnimRigBonfire",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnimRigBonfire::GetClass() const */

long * AnimRigBonfire::GetClass(void)

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
  (*pcVar3)(plVar1,"AnimRigBonfire",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimRigBonfire::playAutoDisappear(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
AnimRigBonfire::playAutoDisappear(AnimRigBonfire *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"auto_disappear");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimRigBonfire::playFireDisappear(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
AnimRigBonfire::playFireDisappear(AnimRigBonfire *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"fire_disappear");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}

