// Class: ZombieAnimRig_Walrus


/* ZombieAnimRig_Walrus::~ZombieAnimRig_Walrus() */

void __thiscall ZombieAnimRig_Walrus::~ZombieAnimRig_Walrus(ZombieAnimRig_Walrus *this)

{
  *(undefined ***)this = &PTR_GetClass_068d76f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Walrus_068d7968;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Walrus::~ZombieAnimRig_Walrus() */

void __thiscall ZombieAnimRig_Walrus::~ZombieAnimRig_Walrus(ZombieAnimRig_Walrus *this)

{
  ~ZombieAnimRig_Walrus(this + -0x10);
  return;
}


/* ZombieAnimRig_Walrus::~ZombieAnimRig_Walrus() */

void __thiscall ZombieAnimRig_Walrus::~ZombieAnimRig_Walrus(ZombieAnimRig_Walrus *this)

{
  ~ZombieAnimRig_Walrus(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Walrus::~ZombieAnimRig_Walrus() */

void __thiscall ZombieAnimRig_Walrus::~ZombieAnimRig_Walrus(ZombieAnimRig_Walrus *this)

{
  ~ZombieAnimRig_Walrus(this + -0x10);
  return;
}


/* ZombieAnimRig_Walrus::ZombieAnimRig_Walrus() */

void __thiscall ZombieAnimRig_Walrus::ZombieAnimRig_Walrus(ZombieAnimRig_Walrus *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068d76f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Walrus_068d7968;
  return;
}


/* ZombieAnimRig_Walrus::StaticNew() */

ZombieAnimRig_Walrus * ZombieAnimRig_Walrus::StaticNew(void)

{
  ZombieAnimRig_Walrus *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_Walrus(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Walrus::StaticClassInit() */

void ZombieAnimRig_Walrus::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Walrus");
    (*pcVar2)(plVar1,asStack_10,FUN_04775dd4,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Walrus::StaticGetClass() */

long * ZombieAnimRig_Walrus::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Walrus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Walrus::GetClass() const */

long * ZombieAnimRig_Walrus::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Walrus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

