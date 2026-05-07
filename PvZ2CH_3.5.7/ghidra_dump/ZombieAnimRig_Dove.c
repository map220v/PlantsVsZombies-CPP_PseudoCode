// Class: ZombieAnimRig_Dove


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Dove::PlayCarry() */

void __thiscall ZombieAnimRig_Dove::PlayCarry(ZombieAnimRig_Dove *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"fly");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* ZombieAnimRig_Dove::~ZombieAnimRig_Dove() */

void __thiscall ZombieAnimRig_Dove::~ZombieAnimRig_Dove(ZombieAnimRig_Dove *this)

{
  *(undefined ***)this = &PTR_GetClass_06a16150;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Dove_06a163e0;
  ZombieAnimRig_Parrot::~ZombieAnimRig_Parrot((ZombieAnimRig_Parrot *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Dove::~ZombieAnimRig_Dove() */

void __thiscall ZombieAnimRig_Dove::~ZombieAnimRig_Dove(ZombieAnimRig_Dove *this)

{
  ~ZombieAnimRig_Dove(this + -0x10);
  return;
}


/* ZombieAnimRig_Dove::~ZombieAnimRig_Dove() */

void __thiscall ZombieAnimRig_Dove::~ZombieAnimRig_Dove(ZombieAnimRig_Dove *this)

{
  ~ZombieAnimRig_Dove(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Dove::~ZombieAnimRig_Dove() */

void __thiscall ZombieAnimRig_Dove::~ZombieAnimRig_Dove(ZombieAnimRig_Dove *this)

{
  ~ZombieAnimRig_Dove(this + -0x10);
  return;
}


/* ZombieAnimRig_Dove::ZombieAnimRig_Dove() */

void __thiscall ZombieAnimRig_Dove::ZombieAnimRig_Dove(ZombieAnimRig_Dove *this)

{
  ZombieAnimRig_Parrot::ZombieAnimRig_Parrot((ZombieAnimRig_Parrot *)this);
  *(undefined ***)this = &PTR_GetClass_06a16150;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Dove_06a163e0;
  return;
}


/* ZombieAnimRig_Dove::StaticNew() */

ZombieAnimRig_Dove * ZombieAnimRig_Dove::StaticNew(void)

{
  ZombieAnimRig_Dove *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_Dove(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Dove::StaticClassInit() */

void ZombieAnimRig_Dove::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Dove");
    (*pcVar2)(plVar1,asStack_10,FUN_04f2ea34,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Dove::StaticGetClass() */

long * ZombieAnimRig_Dove::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_Parrot::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Dove",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Dove::GetClass() const */

long * ZombieAnimRig_Dove::GetClass(void)

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
  uVar2 = ZombieAnimRig_Parrot::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Dove",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Dove::PlayFlyBack() */

void __thiscall ZombieAnimRig_Dove::PlayFlyBack(ZombieAnimRig_Dove *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"fly_back");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}

