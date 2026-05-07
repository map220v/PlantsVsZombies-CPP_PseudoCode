// Class: EffectAnimRig_StunionProjectile


/* EffectAnimRig_StunionProjectile::~EffectAnimRig_StunionProjectile() */

void __thiscall
EffectAnimRig_StunionProjectile::~EffectAnimRig_StunionProjectile
          (EffectAnimRig_StunionProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067d61a0;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_StunionProjectile_067d62c0;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to EffectAnimRig_StunionProjectile::~EffectAnimRig_StunionProjectile() */

void __thiscall
EffectAnimRig_StunionProjectile::~EffectAnimRig_StunionProjectile
          (EffectAnimRig_StunionProjectile *this)

{
  ~EffectAnimRig_StunionProjectile(this + -0x10);
  return;
}


/* EffectAnimRig_StunionProjectile::~EffectAnimRig_StunionProjectile() */

void __thiscall
EffectAnimRig_StunionProjectile::~EffectAnimRig_StunionProjectile
          (EffectAnimRig_StunionProjectile *this)

{
  ~EffectAnimRig_StunionProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EffectAnimRig_StunionProjectile::~EffectAnimRig_StunionProjectile() */

void __thiscall
EffectAnimRig_StunionProjectile::~EffectAnimRig_StunionProjectile
          (EffectAnimRig_StunionProjectile *this)

{
  ~EffectAnimRig_StunionProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_StunionProjectile::StaticClassInit() */

void EffectAnimRig_StunionProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectAnimRig_StunionProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_040b7fa4,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_StunionProjectile::StaticGetClass() */

long * EffectAnimRig_StunionProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_StunionProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectAnimRig_StunionProjectile::GetClass() const */

long * EffectAnimRig_StunionProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"EffectAnimRig_StunionProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectAnimRig_StunionProjectile::EffectAnimRig_StunionProjectile() */

void __thiscall
EffectAnimRig_StunionProjectile::EffectAnimRig_StunionProjectile
          (EffectAnimRig_StunionProjectile *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  this[0x214] = (EffectAnimRig_StunionProjectile)0x0;
  this[0x215] = (EffectAnimRig_StunionProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_067d61a0;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_StunionProjectile_067d62c0;
  *(undefined4 *)(this + 0x210) = 0;
  return;
}


/* EffectAnimRig_StunionProjectile::StaticNew() */

EffectAnimRig_StunionProjectile * EffectAnimRig_StunionProjectile::StaticNew(void)

{
  EffectAnimRig_StunionProjectile *this;
  
  this = ::operator_new(0x218);
  EffectAnimRig_StunionProjectile(this);
  return this;
}


/* EffectAnimRig_StunionProjectile::SetAdvanced(bool) */

void __thiscall
EffectAnimRig_StunionProjectile::SetAdvanced(EffectAnimRig_StunionProjectile *this,bool param_1)

{
  this[0x214] = (EffectAnimRig_StunionProjectile)param_1;
  return;
}


/* EffectAnimRig_StunionProjectile::SetAvatar(bool) */

void __thiscall
EffectAnimRig_StunionProjectile::SetAvatar(EffectAnimRig_StunionProjectile *this,bool param_1)

{
  this[0x215] = (EffectAnimRig_StunionProjectile)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_StunionProjectile::GetAttackName() */

void EffectAnimRig_StunionProjectile::GetAttackName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x214) == '\0') {
    if (*(char *)(in_x0 + 0x215) == '\0') {
      __s = "loop";
    }
    else {
      __s = "loop3";
    }
  }
  else if (*(char *)(in_x0 + 0x215) == '\0') {
    __s = "loop1";
  }
  else {
    __s = "loop2";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_StunionProjectile::PlayIntro() */

void __thiscall EffectAnimRig_StunionProjectile::PlayIntro(EffectAnimRig_StunionProjectile *this)

{
  undefined4 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetAttackName();
  uVar1 = PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this,asStack_10);
  *(undefined4 *)(this + 0x210) = uVar1;
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_StunionProjectile::NotifyTimeRemaining(float) */

void __thiscall
EffectAnimRig_StunionProjectile::NotifyTimeRemaining
          (EffectAnimRig_StunionProjectile *this,float param_1)

{
  char cVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 <= *(float *)(this + 0x210)) {
    GetAttackName();
    cVar1 = PopAnimRig::IsAnimStringActive((PopAnimRig *)this,asStack_40);
    std::string::~string(asStack_40);
    if (cVar1 == '\0') {
      GetAttackName();
      Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
      PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

