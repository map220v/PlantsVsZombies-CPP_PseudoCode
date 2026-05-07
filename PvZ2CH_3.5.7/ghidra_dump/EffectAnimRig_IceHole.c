// Class: EffectAnimRig_IceHole


/* EffectAnimRig_IceHole::~EffectAnimRig_IceHole() */

void __thiscall EffectAnimRig_IceHole::~EffectAnimRig_IceHole(EffectAnimRig_IceHole *this)

{
  *(undefined ***)this = &PTR_GetClass_06787040;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_IceHole_06787160;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to EffectAnimRig_IceHole::~EffectAnimRig_IceHole() */

void __thiscall EffectAnimRig_IceHole::~EffectAnimRig_IceHole(EffectAnimRig_IceHole *this)

{
  ~EffectAnimRig_IceHole(this + -0x10);
  return;
}


/* EffectAnimRig_IceHole::~EffectAnimRig_IceHole() */

void __thiscall EffectAnimRig_IceHole::~EffectAnimRig_IceHole(EffectAnimRig_IceHole *this)

{
  ~EffectAnimRig_IceHole(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EffectAnimRig_IceHole::~EffectAnimRig_IceHole() */

void __thiscall EffectAnimRig_IceHole::~EffectAnimRig_IceHole(EffectAnimRig_IceHole *this)

{
  ~EffectAnimRig_IceHole(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_IceHole::StaticClassInit() */

void EffectAnimRig_IceHole::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectAnimRig_IceHole");
    (*pcVar2)(plVar1,asStack_10,FUN_03e26c88,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_IceHole::StaticGetClass() */

long * EffectAnimRig_IceHole::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_IceHole",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectAnimRig_IceHole::GetClass() const */

long * EffectAnimRig_IceHole::GetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_IceHole",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectAnimRig_IceHole::EffectAnimRig_IceHole() */

void __thiscall EffectAnimRig_IceHole::EffectAnimRig_IceHole(EffectAnimRig_IceHole *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06787040;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_IceHole_06787160;
  return;
}


/* EffectAnimRig_IceHole::StaticNew() */

EffectAnimRig_IceHole * EffectAnimRig_IceHole::StaticNew(void)

{
  EffectAnimRig_IceHole *this;
  
  this = ::operator_new(0x210);
  EffectAnimRig_IceHole(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_IceHole::PlayFoodIn(Sexy::Delegate1<std::string const&>) */

void __thiscall EffectAnimRig_IceHole::PlayFoodIn(EffectAnimRig_IceHole *this,Delegate1 *param_2)

{
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"PLANTFOOD_IN");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_IceHole::PlayFood(Sexy::Delegate1<std::string const&>) */

void __thiscall EffectAnimRig_IceHole::PlayFood(EffectAnimRig_IceHole *this,Delegate1 *param_2)

{
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"PLANTFOOD");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

