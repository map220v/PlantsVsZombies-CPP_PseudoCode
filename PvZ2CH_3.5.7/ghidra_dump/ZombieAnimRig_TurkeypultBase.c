// Class: ZombieAnimRig_TurkeypultBase


/* ZombieAnimRig_TurkeypultBase::~ZombieAnimRig_TurkeypultBase() */

void __thiscall
ZombieAnimRig_TurkeypultBase::~ZombieAnimRig_TurkeypultBase(ZombieAnimRig_TurkeypultBase *this)

{
  *(undefined ***)this = &PTR_GetClass_0672a620;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_TurkeypultBase_0672a898;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_TurkeypultBase::~ZombieAnimRig_TurkeypultBase() */

void __thiscall
ZombieAnimRig_TurkeypultBase::~ZombieAnimRig_TurkeypultBase(ZombieAnimRig_TurkeypultBase *this)

{
  ~ZombieAnimRig_TurkeypultBase(this + -0x10);
  return;
}


/* ZombieAnimRig_TurkeypultBase::~ZombieAnimRig_TurkeypultBase() */

void __thiscall
ZombieAnimRig_TurkeypultBase::~ZombieAnimRig_TurkeypultBase(ZombieAnimRig_TurkeypultBase *this)

{
  ~ZombieAnimRig_TurkeypultBase(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_TurkeypultBase::~ZombieAnimRig_TurkeypultBase() */

void __thiscall
ZombieAnimRig_TurkeypultBase::~ZombieAnimRig_TurkeypultBase(ZombieAnimRig_TurkeypultBase *this)

{
  ~ZombieAnimRig_TurkeypultBase(this + -0x10);
  return;
}


/* ZombieAnimRig_TurkeypultBase::ZombieAnimRig_TurkeypultBase() */

void __thiscall
ZombieAnimRig_TurkeypultBase::ZombieAnimRig_TurkeypultBase(ZombieAnimRig_TurkeypultBase *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0672a620;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_TurkeypultBase_0672a898;
  return;
}


/* ZombieAnimRig_TurkeypultBase::StaticNew() */

ZombieAnimRig_TurkeypultBase * ZombieAnimRig_TurkeypultBase::StaticNew(void)

{
  ZombieAnimRig_TurkeypultBase *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_TurkeypultBase(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TurkeypultBase::StaticClassInit() */

void ZombieAnimRig_TurkeypultBase::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_TurkeypultBase");
    (*pcVar2)(plVar1,asStack_10,FUN_03b05c6c,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_TurkeypultBase::StaticGetClass() */

long * ZombieAnimRig_TurkeypultBase::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_TurkeypultBase",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_TurkeypultBase::GetClass() const */

long * ZombieAnimRig_TurkeypultBase::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_TurkeypultBase",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

