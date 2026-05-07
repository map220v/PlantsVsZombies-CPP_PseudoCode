// Class: ZombieAnimRig_Catapult


/* ZombieAnimRig_Catapult::getIdleAnimationName() */

void ZombieAnimRig_Catapult::getIdleAnimationName(void)

{
  uint uVar1;
  long in_x0;
  
  uVar1 = 0;
  if (*(int *)(in_x0 + 0x240) != 0) {
    uVar1 = (*(int *)(in_x0 + 0x240) + -1) / 5 + 1;
  }
  Sexy::StrFormat("idle0%d",(ulong)uVar1);
  return;
}


/* ZombieAnimRig_Catapult::getWalkAnimationName() */

void ZombieAnimRig_Catapult::getWalkAnimationName(void)

{
  uint uVar1;
  long in_x0;
  
  uVar1 = 0;
  if (*(int *)(in_x0 + 0x240) != 0) {
    uVar1 = (*(int *)(in_x0 + 0x240) + -1) / 5 + 1;
  }
  Sexy::StrFormat("walk0%d",(ulong)uVar1);
  return;
}


/* ZombieAnimRig_Catapult::getDieAnimationName() */

void ZombieAnimRig_Catapult::getDieAnimationName(void)

{
  uint uVar1;
  long in_x0;
  
  uVar1 = 0;
  if (*(int *)(in_x0 + 0x240) != 0) {
    uVar1 = (*(int *)(in_x0 + 0x240) + -1) / 5 + 1;
  }
  Sexy::StrFormat("die0%d",(ulong)uVar1);
  return;
}


/* ZombieAnimRig_Catapult::~ZombieAnimRig_Catapult() */

void __thiscall ZombieAnimRig_Catapult::~ZombieAnimRig_Catapult(ZombieAnimRig_Catapult *this)

{
  *(undefined ***)this = &PTR_GetClass_067a99a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Catapult_067a9c18;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Catapult::~ZombieAnimRig_Catapult() */

void __thiscall ZombieAnimRig_Catapult::~ZombieAnimRig_Catapult(ZombieAnimRig_Catapult *this)

{
  ~ZombieAnimRig_Catapult(this + -0x10);
  return;
}


/* ZombieAnimRig_Catapult::~ZombieAnimRig_Catapult() */

void __thiscall ZombieAnimRig_Catapult::~ZombieAnimRig_Catapult(ZombieAnimRig_Catapult *this)

{
  ~ZombieAnimRig_Catapult(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Catapult::~ZombieAnimRig_Catapult() */

void __thiscall ZombieAnimRig_Catapult::~ZombieAnimRig_Catapult(ZombieAnimRig_Catapult *this)

{
  ~ZombieAnimRig_Catapult(this + -0x10);
  return;
}


/* ZombieAnimRig_Catapult::ZombieAnimRig_Catapult() */

void __thiscall ZombieAnimRig_Catapult::ZombieAnimRig_Catapult(ZombieAnimRig_Catapult *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined4 *)(this + 0x240) = 0x14;
  *(undefined ***)this = &PTR_GetClass_067a99a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Catapult_067a9c18;
  return;
}


/* ZombieAnimRig_Catapult::StaticNew() */

ZombieAnimRig_Catapult * ZombieAnimRig_Catapult::StaticNew(void)

{
  ZombieAnimRig_Catapult *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_Catapult(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Catapult::StaticClassInit() */

void ZombieAnimRig_Catapult::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Catapult");
    (*pcVar2)(plVar1,asStack_10,FUN_03fbf60c,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Catapult::StaticGetClass() */

long * ZombieAnimRig_Catapult::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Catapult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Catapult::GetClass() const */

long * ZombieAnimRig_Catapult::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Catapult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Catapult::PlayAttackAnim(AnimSelectionMethod, Sexy::Delegate1<std::string const&>)
    */

void __thiscall
ZombieAnimRig_Catapult::PlayAttackAnim
          (ZombieAnimRig_Catapult *this,undefined4 param_2,Delegate1 *param_3)

{
  uint uVar1;
  code *pcVar2;
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = 0;
  if (*(int *)(this + 0x240) != 0) {
    uVar1 = (*(int *)(this + 0x240) + -1) / 5 + 1;
  }
  Sexy::StrFormat("attack0%d",asStack_40,(ulong)uVar1);
  pcVar2 = *(code **)(*(long *)this + 0x168);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_3);
  (*pcVar2)(this,asStack_40,param_2,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

