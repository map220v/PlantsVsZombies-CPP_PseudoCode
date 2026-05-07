// Class: EffectAnimRig_SpikeweedSaw


/* EffectAnimRig_SpikeweedSaw::onPopAnimInitialized() */

void __thiscall EffectAnimRig_SpikeweedSaw::onPopAnimInitialized(EffectAnimRig_SpikeweedSaw *this)

{
  PopAnimRig::onPopAnimInitialized((PopAnimRig *)this);
  *(undefined4 *)(this + 0x210) = 0;
  return;
}


/* EffectAnimRig_SpikeweedSaw::~EffectAnimRig_SpikeweedSaw() */

void __thiscall
EffectAnimRig_SpikeweedSaw::~EffectAnimRig_SpikeweedSaw(EffectAnimRig_SpikeweedSaw *this)

{
  *(undefined ***)this = &PTR_GetClass_0675dd90;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_SpikeweedSaw_0675deb0;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to EffectAnimRig_SpikeweedSaw::~EffectAnimRig_SpikeweedSaw() */

void __thiscall
EffectAnimRig_SpikeweedSaw::~EffectAnimRig_SpikeweedSaw(EffectAnimRig_SpikeweedSaw *this)

{
  ~EffectAnimRig_SpikeweedSaw(this + -0x10);
  return;
}


/* EffectAnimRig_SpikeweedSaw::~EffectAnimRig_SpikeweedSaw() */

void __thiscall
EffectAnimRig_SpikeweedSaw::~EffectAnimRig_SpikeweedSaw(EffectAnimRig_SpikeweedSaw *this)

{
  ~EffectAnimRig_SpikeweedSaw(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EffectAnimRig_SpikeweedSaw::~EffectAnimRig_SpikeweedSaw() */

void __thiscall
EffectAnimRig_SpikeweedSaw::~EffectAnimRig_SpikeweedSaw(EffectAnimRig_SpikeweedSaw *this)

{
  ~EffectAnimRig_SpikeweedSaw(this + -0x10);
  return;
}


/* EffectAnimRig_SpikeweedSaw::EffectAnimRig_SpikeweedSaw() */

void __thiscall
EffectAnimRig_SpikeweedSaw::EffectAnimRig_SpikeweedSaw(EffectAnimRig_SpikeweedSaw *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0675dd90;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_SpikeweedSaw_0675deb0;
  return;
}


/* EffectAnimRig_SpikeweedSaw::StaticNew() */

EffectAnimRig_SpikeweedSaw * EffectAnimRig_SpikeweedSaw::StaticNew(void)

{
  EffectAnimRig_SpikeweedSaw *this;
  
  this = ::operator_new(0x218);
  EffectAnimRig_SpikeweedSaw(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_SpikeweedSaw::StaticClassInit() */

void EffectAnimRig_SpikeweedSaw::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectAnimRig_SpikeweedSaw");
    (*pcVar2)(plVar1,asStack_10,FUN_03cbafe4,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_SpikeweedSaw::StaticGetClass() */

long * EffectAnimRig_SpikeweedSaw::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_SpikeweedSaw",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectAnimRig_SpikeweedSaw::GetClass() const */

long * EffectAnimRig_SpikeweedSaw::GetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_SpikeweedSaw",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_SpikeweedSaw::PlayRise() */

void __thiscall EffectAnimRig_SpikeweedSaw::PlayRise(EffectAnimRig_SpikeweedSaw *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"BuzzSaw_Up");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  *(undefined4 *)(this + 0x210) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_SpikeweedSaw::PlayDeath() */

void __thiscall EffectAnimRig_SpikeweedSaw::PlayDeath(EffectAnimRig_SpikeweedSaw *this)

{
  long lVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"BuzzSaw_Down");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x210) = 2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_SpikeweedSaw::PlayIdle() */

void __thiscall EffectAnimRig_SpikeweedSaw::PlayIdle(EffectAnimRig_SpikeweedSaw *this)

{
  long lVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"BuzzSaw_Idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x210) = 1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_SpikeweedSaw::onAnimStopped() */

void __thiscall EffectAnimRig_SpikeweedSaw::onAnimStopped(EffectAnimRig_SpikeweedSaw *this)

{
  if (*(int *)(this + 0x210) != 0) {
    return;
  }
  PlayIdle(this);
  return;
}

