// Class: EffectAnimRig_ZombiePortal


/* EffectAnimRig_ZombiePortal::~EffectAnimRig_ZombiePortal() */

void __thiscall
EffectAnimRig_ZombiePortal::~EffectAnimRig_ZombiePortal(EffectAnimRig_ZombiePortal *this)

{
  *(undefined ***)this = &PTR_GetClass_0675e310;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_ZombiePortal_0675e430;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to EffectAnimRig_ZombiePortal::~EffectAnimRig_ZombiePortal() */

void __thiscall
EffectAnimRig_ZombiePortal::~EffectAnimRig_ZombiePortal(EffectAnimRig_ZombiePortal *this)

{
  ~EffectAnimRig_ZombiePortal(this + -0x10);
  return;
}


/* EffectAnimRig_ZombiePortal::~EffectAnimRig_ZombiePortal() */

void __thiscall
EffectAnimRig_ZombiePortal::~EffectAnimRig_ZombiePortal(EffectAnimRig_ZombiePortal *this)

{
  ~EffectAnimRig_ZombiePortal(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EffectAnimRig_ZombiePortal::~EffectAnimRig_ZombiePortal() */

void __thiscall
EffectAnimRig_ZombiePortal::~EffectAnimRig_ZombiePortal(EffectAnimRig_ZombiePortal *this)

{
  ~EffectAnimRig_ZombiePortal(this + -0x10);
  return;
}


/* EffectAnimRig_ZombiePortal::EffectAnimRig_ZombiePortal() */

void __thiscall
EffectAnimRig_ZombiePortal::EffectAnimRig_ZombiePortal(EffectAnimRig_ZombiePortal *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0675e310;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_ZombiePortal_0675e430;
  return;
}


/* EffectAnimRig_ZombiePortal::StaticNew() */

EffectAnimRig_ZombiePortal * EffectAnimRig_ZombiePortal::StaticNew(void)

{
  EffectAnimRig_ZombiePortal *this;
  
  this = ::operator_new(0x210);
  EffectAnimRig_ZombiePortal(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_ZombiePortal::StaticClassInit() */

void EffectAnimRig_ZombiePortal::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectAnimRig_ZombiePortal");
    (*pcVar2)(plVar1,asStack_10,FUN_03cbc340,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_ZombiePortal::StaticGetClass() */

long * EffectAnimRig_ZombiePortal::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_ZombiePortal",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectAnimRig_ZombiePortal::GetClass() const */

long * EffectAnimRig_ZombiePortal::GetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_ZombiePortal",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectAnimRig_ZombiePortal::getOpenAnimName() const */

char * EffectAnimRig_ZombiePortal::getOpenAnimName(void)

{
  return "start";
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_ZombiePortal::PlayOpen(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
EffectAnimRig_ZombiePortal::PlayOpen(EffectAnimRig_ZombiePortal *this,RtReflectionDelegate *param_2)

{
  char *__s;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __s = (char *)getOpenAnimName();
  std::string::string(asStack_58,__s);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail();
}


/* EffectAnimRig_ZombiePortal::getLoopedAnimName() const */

undefined * EffectAnimRig_ZombiePortal::getLoopedAnimName(void)

{
  return &DAT_055abc50;
}


/* EffectAnimRig_ZombiePortal::getCloseAnimName() const */

undefined * EffectAnimRig_ZombiePortal::getCloseAnimName(void)

{
  return &DAT_055abc60;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_ZombiePortal::PlayClose(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
EffectAnimRig_ZombiePortal::PlayClose
          (EffectAnimRig_ZombiePortal *this,RtReflectionDelegate *param_2)

{
  char *__s;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __s = (char *)getCloseAnimName();
  std::string::string(asStack_58,__s);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_ZombiePortal::PlayLooped() */

void __thiscall EffectAnimRig_ZombiePortal::PlayLooped(EffectAnimRig_ZombiePortal *this)

{
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __s = (char *)getLoopedAnimName();
  std::string::string(asStack_40,__s);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

