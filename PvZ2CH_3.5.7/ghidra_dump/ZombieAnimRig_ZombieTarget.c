// Class: ZombieAnimRig_ZombieTarget


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombieTarget::getDieAnimationName() */

void __thiscall ZombieAnimRig_ZombieTarget::getDieAnimationName(ZombieAnimRig_ZombieTarget *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"out");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombieAnimRig_ZombieTarget::~ZombieAnimRig_ZombieTarget() */

void __thiscall
ZombieAnimRig_ZombieTarget::~ZombieAnimRig_ZombieTarget(ZombieAnimRig_ZombieTarget *this)

{
  *(undefined ***)this = &PTR_GetClass_0687bfb0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombieTarget_0687c230;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZombieTarget::~ZombieAnimRig_ZombieTarget() */

void __thiscall
ZombieAnimRig_ZombieTarget::~ZombieAnimRig_ZombieTarget(ZombieAnimRig_ZombieTarget *this)

{
  ~ZombieAnimRig_ZombieTarget(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombieTarget::~ZombieAnimRig_ZombieTarget() */

void __thiscall
ZombieAnimRig_ZombieTarget::~ZombieAnimRig_ZombieTarget(ZombieAnimRig_ZombieTarget *this)

{
  ~ZombieAnimRig_ZombieTarget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_ZombieTarget::~ZombieAnimRig_ZombieTarget() */

void __thiscall
ZombieAnimRig_ZombieTarget::~ZombieAnimRig_ZombieTarget(ZombieAnimRig_ZombieTarget *this)

{
  ~ZombieAnimRig_ZombieTarget(this + -0x10);
  return;
}


/* ZombieAnimRig_ZombieTarget::ZombieAnimRig_ZombieTarget() */

void __thiscall
ZombieAnimRig_ZombieTarget::ZombieAnimRig_ZombieTarget(ZombieAnimRig_ZombieTarget *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0687bfb0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_ZombieTarget_0687c230;
  return;
}


/* ZombieAnimRig_ZombieTarget::StaticNew() */

ZombieAnimRig_ZombieTarget * ZombieAnimRig_ZombieTarget::StaticNew(void)

{
  ZombieAnimRig_ZombieTarget *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_ZombieTarget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombieTarget::StaticClassInit() */

void ZombieAnimRig_ZombieTarget::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_ZombieTarget");
    (*pcVar2)(plVar1,asStack_10,FUN_04624bb4,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_ZombieTarget::StaticGetClass() */

long * ZombieAnimRig_ZombieTarget::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombieTarget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_ZombieTarget::GetClass() const */

long * ZombieAnimRig_ZombieTarget::GetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_ZombieTarget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_ZombieTarget::PlayAppearing(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_ZombieTarget::PlayAppearing
          (ZombieAnimRig_ZombieTarget *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"in");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
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

