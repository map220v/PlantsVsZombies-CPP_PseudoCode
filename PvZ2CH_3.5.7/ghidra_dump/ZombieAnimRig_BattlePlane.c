// Class: ZombieAnimRig_BattlePlane


/* ZombieAnimRig_BattlePlane::~ZombieAnimRig_BattlePlane() */

void __thiscall
ZombieAnimRig_BattlePlane::~ZombieAnimRig_BattlePlane(ZombieAnimRig_BattlePlane *this)

{
  *(undefined ***)this = &PTR_GetClass_068dbe20;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_BattlePlane_068dc098;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_BattlePlane::~ZombieAnimRig_BattlePlane() */

void __thiscall
ZombieAnimRig_BattlePlane::~ZombieAnimRig_BattlePlane(ZombieAnimRig_BattlePlane *this)

{
  ~ZombieAnimRig_BattlePlane(this + -0x10);
  return;
}


/* ZombieAnimRig_BattlePlane::~ZombieAnimRig_BattlePlane() */

void __thiscall
ZombieAnimRig_BattlePlane::~ZombieAnimRig_BattlePlane(ZombieAnimRig_BattlePlane *this)

{
  ~ZombieAnimRig_BattlePlane(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_BattlePlane::~ZombieAnimRig_BattlePlane() */

void __thiscall
ZombieAnimRig_BattlePlane::~ZombieAnimRig_BattlePlane(ZombieAnimRig_BattlePlane *this)

{
  ~ZombieAnimRig_BattlePlane(this + -0x10);
  return;
}


/* ZombieAnimRig_BattlePlane::ZombieAnimRig_BattlePlane() */

void __thiscall
ZombieAnimRig_BattlePlane::ZombieAnimRig_BattlePlane(ZombieAnimRig_BattlePlane *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068dbe20;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_BattlePlane_068dc098;
  return;
}


/* ZombieAnimRig_BattlePlane::StaticNew() */

ZombieAnimRig_BattlePlane * ZombieAnimRig_BattlePlane::StaticNew(void)

{
  ZombieAnimRig_BattlePlane *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_BattlePlane(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BattlePlane::StaticClassInit() */

void ZombieAnimRig_BattlePlane::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_BattlePlane");
    (*pcVar2)(plVar1,asStack_10,FUN_04798c58,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_BattlePlane::StaticGetClass() */

long * ZombieAnimRig_BattlePlane::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_BattlePlane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_BattlePlane::GetClass() const */

long * ZombieAnimRig_BattlePlane::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_BattlePlane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BattlePlane::PlayFire() */

void __thiscall ZombieAnimRig_BattlePlane::PlayFire(ZombieAnimRig_BattlePlane *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 5;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BattlePlane::PlaySlide() */

void __thiscall ZombieAnimRig_BattlePlane::PlaySlide(ZombieAnimRig_BattlePlane *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"walk2");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 2;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BattlePlane::PlayHit() */

void __thiscall ZombieAnimRig_BattlePlane::PlayHit(ZombieAnimRig_BattlePlane *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack2");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 5;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}

