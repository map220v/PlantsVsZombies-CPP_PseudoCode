// Class: ZombieAnimRig_Parrot


/* ZombieAnimRig_Parrot::~ZombieAnimRig_Parrot() */

void __thiscall ZombieAnimRig_Parrot::~ZombieAnimRig_Parrot(ZombieAnimRig_Parrot *this)

{
  *(undefined ***)this = &PTR_GetClass_068715b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Parrot_06871840;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Parrot::~ZombieAnimRig_Parrot() */

void __thiscall ZombieAnimRig_Parrot::~ZombieAnimRig_Parrot(ZombieAnimRig_Parrot *this)

{
  ~ZombieAnimRig_Parrot(this + -0x10);
  return;
}


/* ZombieAnimRig_Parrot::~ZombieAnimRig_Parrot() */

void __thiscall ZombieAnimRig_Parrot::~ZombieAnimRig_Parrot(ZombieAnimRig_Parrot *this)

{
  ~ZombieAnimRig_Parrot(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Parrot::~ZombieAnimRig_Parrot() */

void __thiscall ZombieAnimRig_Parrot::~ZombieAnimRig_Parrot(ZombieAnimRig_Parrot *this)

{
  ~ZombieAnimRig_Parrot(this + -0x10);
  return;
}


/* ZombieAnimRig_Parrot::ZombieAnimRig_Parrot() */

void __thiscall ZombieAnimRig_Parrot::ZombieAnimRig_Parrot(ZombieAnimRig_Parrot *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068715b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Parrot_06871840;
  return;
}


/* ZombieAnimRig_Parrot::StaticNew() */

ZombieAnimRig_Parrot * ZombieAnimRig_Parrot::StaticNew(void)

{
  ZombieAnimRig_Parrot *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_Parrot(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Parrot::StaticClassInit() */

void ZombieAnimRig_Parrot::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Parrot");
    (*pcVar2)(plVar1,asStack_10,FUN_04605480,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Parrot::StaticGetClass() */

long * ZombieAnimRig_Parrot::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Parrot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Parrot::GetClass() const */

long * ZombieAnimRig_Parrot::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Parrot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Parrot::PlayFlyBack() */

void __thiscall ZombieAnimRig_Parrot::PlayFlyBack(ZombieAnimRig_Parrot *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"fly back");
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Parrot::PlayCarry() */

void __thiscall ZombieAnimRig_Parrot::PlayCarry(ZombieAnimRig_Parrot *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"carry");
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

