// Class: EffectAnimRig_ZombieStatue


/* EffectAnimRig_ZombieStatue::~EffectAnimRig_ZombieStatue() */

void __thiscall
EffectAnimRig_ZombieStatue::~EffectAnimRig_ZombieStatue(EffectAnimRig_ZombieStatue *this)

{
  *(undefined ***)this = &PTR_GetClass_06764ae0;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_ZombieStatue_06764c00;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to EffectAnimRig_ZombieStatue::~EffectAnimRig_ZombieStatue() */

void __thiscall
EffectAnimRig_ZombieStatue::~EffectAnimRig_ZombieStatue(EffectAnimRig_ZombieStatue *this)

{
  ~EffectAnimRig_ZombieStatue(this + -0x10);
  return;
}


/* EffectAnimRig_ZombieStatue::~EffectAnimRig_ZombieStatue() */

void __thiscall
EffectAnimRig_ZombieStatue::~EffectAnimRig_ZombieStatue(EffectAnimRig_ZombieStatue *this)

{
  ~EffectAnimRig_ZombieStatue(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EffectAnimRig_ZombieStatue::~EffectAnimRig_ZombieStatue() */

void __thiscall
EffectAnimRig_ZombieStatue::~EffectAnimRig_ZombieStatue(EffectAnimRig_ZombieStatue *this)

{
  ~EffectAnimRig_ZombieStatue(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_ZombieStatue::StaticClassInit() */

void EffectAnimRig_ZombieStatue::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectAnimRig_ZombieStatue");
    (*pcVar2)(plVar1,asStack_10,FUN_03d10c90,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_ZombieStatue::StaticGetClass() */

long * EffectAnimRig_ZombieStatue::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_ZombieStatue",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectAnimRig_ZombieStatue::GetClass() const */

long * EffectAnimRig_ZombieStatue::GetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_ZombieStatue",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectAnimRig_ZombieStatue::EffectAnimRig_ZombieStatue() */

void __thiscall
EffectAnimRig_ZombieStatue::EffectAnimRig_ZombieStatue(EffectAnimRig_ZombieStatue *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06764ae0;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_ZombieStatue_06764c00;
  return;
}


/* EffectAnimRig_ZombieStatue::StaticNew() */

EffectAnimRig_ZombieStatue * EffectAnimRig_ZombieStatue::StaticNew(void)

{
  EffectAnimRig_ZombieStatue *this;
  
  this = ::operator_new(0x210);
  EffectAnimRig_ZombieStatue(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_ZombieStatue::PlayRevive(StatueStage) */

void __thiscall EffectAnimRig_ZombieStatue::PlayRevive(EffectAnimRig_ZombieStatue *this,int param_2)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("renai_revive_%d",asStack_40,(ulong)(param_2 + 1));
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

