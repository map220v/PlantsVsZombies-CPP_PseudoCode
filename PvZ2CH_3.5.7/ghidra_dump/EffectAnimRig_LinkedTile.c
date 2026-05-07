// Class: EffectAnimRig_LinkedTile


/* EffectAnimRig_LinkedTile::~EffectAnimRig_LinkedTile() */

void __thiscall EffectAnimRig_LinkedTile::~EffectAnimRig_LinkedTile(EffectAnimRig_LinkedTile *this)

{
  *(undefined ***)this = &PTR_GetClass_0675d970;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_LinkedTile_0675da90;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to EffectAnimRig_LinkedTile::~EffectAnimRig_LinkedTile() */

void __thiscall EffectAnimRig_LinkedTile::~EffectAnimRig_LinkedTile(EffectAnimRig_LinkedTile *this)

{
  ~EffectAnimRig_LinkedTile(this + -0x10);
  return;
}


/* EffectAnimRig_LinkedTile::~EffectAnimRig_LinkedTile() */

void __thiscall EffectAnimRig_LinkedTile::~EffectAnimRig_LinkedTile(EffectAnimRig_LinkedTile *this)

{
  ~EffectAnimRig_LinkedTile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EffectAnimRig_LinkedTile::~EffectAnimRig_LinkedTile() */

void __thiscall EffectAnimRig_LinkedTile::~EffectAnimRig_LinkedTile(EffectAnimRig_LinkedTile *this)

{
  ~EffectAnimRig_LinkedTile(this + -0x10);
  return;
}


/* EffectAnimRig_LinkedTile::StaticGetClass() */

long * EffectAnimRig_LinkedTile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_LinkedTile",uVar2,StaticNew);
  return sClass;
}


/* EffectAnimRig_LinkedTile::GetClass() const */

long * EffectAnimRig_LinkedTile::GetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_LinkedTile",uVar2,StaticNew);
  return sClass;
}


/* EffectAnimRig_LinkedTile::EffectAnimRig_LinkedTile() */

void __thiscall EffectAnimRig_LinkedTile::EffectAnimRig_LinkedTile(EffectAnimRig_LinkedTile *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  this[0x20d] = (EffectAnimRig_LinkedTile)0x0;
  *(undefined ***)this = &PTR_GetClass_0675d970;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_LinkedTile_0675da90;
  return;
}


/* EffectAnimRig_LinkedTile::StaticNew() */

EffectAnimRig_LinkedTile * EffectAnimRig_LinkedTile::StaticNew(void)

{
  EffectAnimRig_LinkedTile *this;
  
  this = ::operator_new(0x210);
  EffectAnimRig_LinkedTile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_LinkedTile::PlayPlantEnteredTile() */

void __thiscall EffectAnimRig_LinkedTile::PlayPlantEnteredTile(EffectAnimRig_LinkedTile *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"animation2");
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
/* EffectAnimRig_LinkedTile::PlayPlantLeftTile() */

void __thiscall EffectAnimRig_LinkedTile::PlayPlantLeftTile(EffectAnimRig_LinkedTile *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"animation5");
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
/* EffectAnimRig_LinkedTile::PlayIdle() */

void __thiscall EffectAnimRig_LinkedTile::PlayIdle(EffectAnimRig_LinkedTile *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x20d] == (EffectAnimRig_LinkedTile)0x0) {
    std::string::string(asStack_40,"animation");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  else {
    std::string::string(asStack_40,"animation3");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_LinkedTile::onAnimStopped() */

void __thiscall EffectAnimRig_LinkedTile::onAnimStopped(EffectAnimRig_LinkedTile *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (this[0x20d] == (EffectAnimRig_LinkedTile)0x0) {
    std::string::string(asStack_40,"animation");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  else {
    std::string::string(asStack_40,"animation3");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_LinkedTile::PlayActivation() */

void __thiscall EffectAnimRig_LinkedTile::PlayActivation(EffectAnimRig_LinkedTile *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"animation4");
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

