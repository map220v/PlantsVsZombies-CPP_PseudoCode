// Class: ZombieAnimRig_EndlessWealth


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EndlessWealth::PlayStreetIdle(RtReflectionDelegate<Sexy::Delegate3<std::string
   const&, std::string const&, int> >) */

void ZombieAnimRig_EndlessWealth::PlayStreetIdle(PopAnimRig *param_1)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x1e0))(asStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue(param_1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (iVar1 != -1) {
    *(undefined4 *)(param_1 + 0x210) = 1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EndlessWealth::getWalkAnimationName() */

void __thiscall ZombieAnimRig_EndlessWealth::getWalkAnimationName(ZombieAnimRig_EndlessWealth *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"walk01");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EndlessWealth::StaticClassInit() */

void ZombieAnimRig_EndlessWealth::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_EndlessWealth");
    (*pcVar2)(plVar1,asStack_10,FUN_04640400,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_EndlessWealth::StaticGetClass() */

long * ZombieAnimRig_EndlessWealth::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_EndlessWealth",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_EndlessWealth::GetClass() const */

long * ZombieAnimRig_EndlessWealth::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_EndlessWealth",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_EndlessWealth::~ZombieAnimRig_EndlessWealth() */

void __thiscall
ZombieAnimRig_EndlessWealth::~ZombieAnimRig_EndlessWealth(ZombieAnimRig_EndlessWealth *this)

{
  *(undefined ***)this = &PTR_GetClass_06883430;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_EndlessWealth_068836a8;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_EndlessWealth::~ZombieAnimRig_EndlessWealth() */

void __thiscall
ZombieAnimRig_EndlessWealth::~ZombieAnimRig_EndlessWealth(ZombieAnimRig_EndlessWealth *this)

{
  ~ZombieAnimRig_EndlessWealth(this + -0x10);
  return;
}


/* ZombieAnimRig_EndlessWealth::~ZombieAnimRig_EndlessWealth() */

void __thiscall
ZombieAnimRig_EndlessWealth::~ZombieAnimRig_EndlessWealth(ZombieAnimRig_EndlessWealth *this)

{
  ~ZombieAnimRig_EndlessWealth(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_EndlessWealth::~ZombieAnimRig_EndlessWealth() */

void __thiscall
ZombieAnimRig_EndlessWealth::~ZombieAnimRig_EndlessWealth(ZombieAnimRig_EndlessWealth *this)

{
  ~ZombieAnimRig_EndlessWealth(this + -0x10);
  return;
}


/* ZombieAnimRig_EndlessWealth::ZombieAnimRig_EndlessWealth() */

void __thiscall
ZombieAnimRig_EndlessWealth::ZombieAnimRig_EndlessWealth(ZombieAnimRig_EndlessWealth *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06883430;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_EndlessWealth_068836a8;
  return;
}


/* ZombieAnimRig_EndlessWealth::StaticNew() */

ZombieAnimRig_EndlessWealth * ZombieAnimRig_EndlessWealth::StaticNew(void)

{
  ZombieAnimRig_EndlessWealth *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_EndlessWealth(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EndlessWealth::PlayEscape() */

void __thiscall ZombieAnimRig_EndlessWealth::PlayEscape(ZombieAnimRig_EndlessWealth *this)

{
  long lVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"escape");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x210) = 8;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

