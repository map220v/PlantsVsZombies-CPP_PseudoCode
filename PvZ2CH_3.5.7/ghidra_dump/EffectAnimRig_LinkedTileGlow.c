// Class: EffectAnimRig_LinkedTileGlow


/* EffectAnimRig_LinkedTileGlow::onPopAnimInitialized() */

void __thiscall
EffectAnimRig_LinkedTileGlow::onPopAnimInitialized(EffectAnimRig_LinkedTileGlow *this)

{
  PopAnimRig::onPopAnimInitialized((PopAnimRig *)this);
  this[0x20d] = (EffectAnimRig_LinkedTileGlow)0x0;
  return;
}


/* EffectAnimRig_LinkedTileGlow::~EffectAnimRig_LinkedTileGlow() */

void __thiscall
EffectAnimRig_LinkedTileGlow::~EffectAnimRig_LinkedTileGlow(EffectAnimRig_LinkedTileGlow *this)

{
  *(undefined ***)this = &PTR_GetClass_0675dad0;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_LinkedTileGlow_0675dbf0;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to EffectAnimRig_LinkedTileGlow::~EffectAnimRig_LinkedTileGlow() */

void __thiscall
EffectAnimRig_LinkedTileGlow::~EffectAnimRig_LinkedTileGlow(EffectAnimRig_LinkedTileGlow *this)

{
  ~EffectAnimRig_LinkedTileGlow(this + -0x10);
  return;
}


/* EffectAnimRig_LinkedTileGlow::~EffectAnimRig_LinkedTileGlow() */

void __thiscall
EffectAnimRig_LinkedTileGlow::~EffectAnimRig_LinkedTileGlow(EffectAnimRig_LinkedTileGlow *this)

{
  ~EffectAnimRig_LinkedTileGlow(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EffectAnimRig_LinkedTileGlow::~EffectAnimRig_LinkedTileGlow() */

void __thiscall
EffectAnimRig_LinkedTileGlow::~EffectAnimRig_LinkedTileGlow(EffectAnimRig_LinkedTileGlow *this)

{
  ~EffectAnimRig_LinkedTileGlow(this + -0x10);
  return;
}


/* EffectAnimRig_LinkedTileGlow::StaticGetClass() */

long * EffectAnimRig_LinkedTileGlow::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_LinkedTileGlow",uVar2,StaticNew);
  return sClass;
}


/* EffectAnimRig_LinkedTileGlow::GetClass() const */

long * EffectAnimRig_LinkedTileGlow::GetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_LinkedTileGlow",uVar2,StaticNew);
  return sClass;
}


/* EffectAnimRig_LinkedTileGlow::EffectAnimRig_LinkedTileGlow() */

void __thiscall
EffectAnimRig_LinkedTileGlow::EffectAnimRig_LinkedTileGlow(EffectAnimRig_LinkedTileGlow *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0675dad0;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_LinkedTileGlow_0675dbf0;
  return;
}


/* EffectAnimRig_LinkedTileGlow::StaticNew() */

EffectAnimRig_LinkedTileGlow * EffectAnimRig_LinkedTileGlow::StaticNew(void)

{
  EffectAnimRig_LinkedTileGlow *this;
  
  this = ::operator_new(0x210);
  EffectAnimRig_LinkedTileGlow(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_LinkedTileGlow::PlayMovingTileFadeOut(Sexy::Delegate1<std::string const&>) */

void __thiscall
EffectAnimRig_LinkedTileGlow::PlayMovingTileFadeOut
          (EffectAnimRig_LinkedTileGlow *this,Delegate1 *param_2)

{
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"animation2");
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
/* EffectAnimRig_LinkedTileGlow::PlayUnderGlowFadeOut(Sexy::Delegate1<std::string const&>) */

void __thiscall
EffectAnimRig_LinkedTileGlow::PlayUnderGlowFadeOut
          (EffectAnimRig_LinkedTileGlow *this,Delegate1 *param_2)

{
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"animation4");
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
/* EffectAnimRig_LinkedTileGlow::PlayMovingTileFadeIn() */

void __thiscall
EffectAnimRig_LinkedTileGlow::PlayMovingTileFadeIn(EffectAnimRig_LinkedTileGlow *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  this[0x20d] = (EffectAnimRig_LinkedTileGlow)0x1;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"animation");
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
/* EffectAnimRig_LinkedTileGlow::PlayMovingTileIdle() */

void __thiscall EffectAnimRig_LinkedTileGlow::PlayMovingTileIdle(EffectAnimRig_LinkedTileGlow *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"animation3");
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


/* EffectAnimRig_LinkedTileGlow::onAnimStopped() */

void EffectAnimRig_LinkedTileGlow::onAnimStopped(void)

{
  EffectAnimRig_LinkedTileGlow *in_x0;
  
  nop();
  if (in_x0[0x20d] == (EffectAnimRig_LinkedTileGlow)0x0) {
    return;
  }
  PlayMovingTileIdle(in_x0);
  return;
}

