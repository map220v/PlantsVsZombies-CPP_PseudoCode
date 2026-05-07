// Class: EffectAnimRig_LinkedTileConnect


/* EffectAnimRig_LinkedTileConnect::~EffectAnimRig_LinkedTileConnect() */

void __thiscall
EffectAnimRig_LinkedTileConnect::~EffectAnimRig_LinkedTileConnect
          (EffectAnimRig_LinkedTileConnect *this)

{
  *(undefined ***)this = &PTR_GetClass_0675d810;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_LinkedTileConnect_0675d930;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to EffectAnimRig_LinkedTileConnect::~EffectAnimRig_LinkedTileConnect() */

void __thiscall
EffectAnimRig_LinkedTileConnect::~EffectAnimRig_LinkedTileConnect
          (EffectAnimRig_LinkedTileConnect *this)

{
  ~EffectAnimRig_LinkedTileConnect(this + -0x10);
  return;
}


/* EffectAnimRig_LinkedTileConnect::~EffectAnimRig_LinkedTileConnect() */

void __thiscall
EffectAnimRig_LinkedTileConnect::~EffectAnimRig_LinkedTileConnect
          (EffectAnimRig_LinkedTileConnect *this)

{
  ~EffectAnimRig_LinkedTileConnect(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EffectAnimRig_LinkedTileConnect::~EffectAnimRig_LinkedTileConnect() */

void __thiscall
EffectAnimRig_LinkedTileConnect::~EffectAnimRig_LinkedTileConnect
          (EffectAnimRig_LinkedTileConnect *this)

{
  ~EffectAnimRig_LinkedTileConnect(this + -0x10);
  return;
}


/* EffectAnimRig_LinkedTileConnect::StaticGetClass() */

long * EffectAnimRig_LinkedTileConnect::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_LinkedTileConnect",uVar2,StaticNew);
  return sClass;
}


/* EffectAnimRig_LinkedTileConnect::GetClass() const */

long * EffectAnimRig_LinkedTileConnect::GetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_LinkedTileConnect",uVar2,StaticNew);
  return sClass;
}


/* EffectAnimRig_LinkedTileConnect::EffectAnimRig_LinkedTileConnect() */

void __thiscall
EffectAnimRig_LinkedTileConnect::EffectAnimRig_LinkedTileConnect
          (EffectAnimRig_LinkedTileConnect *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  this[0x20d] = (EffectAnimRig_LinkedTileConnect)0x0;
  *(undefined ***)this = &PTR_GetClass_0675d810;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_LinkedTileConnect_0675d930;
  return;
}


/* EffectAnimRig_LinkedTileConnect::StaticNew() */

EffectAnimRig_LinkedTileConnect * EffectAnimRig_LinkedTileConnect::StaticNew(void)

{
  EffectAnimRig_LinkedTileConnect *this;
  
  this = ::operator_new(0x210);
  EffectAnimRig_LinkedTileConnect(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_LinkedTileConnect::PlayOff(Sexy::Delegate1<std::string const&>) */

void __thiscall
EffectAnimRig_LinkedTileConnect::PlayOff(EffectAnimRig_LinkedTileConnect *this,Delegate1 *param_2)

{
  undefined4 uVar1;
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x20d] = (EffectAnimRig_LinkedTileConnect)0x0;
  std::string::string(asStack_40,"connect_off");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_2);
  uVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_LinkedTileConnect::PlayOn() */

void __thiscall EffectAnimRig_LinkedTileConnect::PlayOn(EffectAnimRig_LinkedTileConnect *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  this[0x20d] = (EffectAnimRig_LinkedTileConnect)0x1;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"connect_on");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
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
/* EffectAnimRig_LinkedTileConnect::PlayGlow() */

void __thiscall EffectAnimRig_LinkedTileConnect::PlayGlow(EffectAnimRig_LinkedTileConnect *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  this[0x20d] = (EffectAnimRig_LinkedTileConnect)0x0;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"connect_idle");
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


/* EffectAnimRig_LinkedTileConnect::onAnimStopped() */

void __thiscall
EffectAnimRig_LinkedTileConnect::onAnimStopped(EffectAnimRig_LinkedTileConnect *this)

{
  if (this[0x20d] == (EffectAnimRig_LinkedTileConnect)0x0) {
    return;
  }
  PlayGlow(this);
  return;
}

