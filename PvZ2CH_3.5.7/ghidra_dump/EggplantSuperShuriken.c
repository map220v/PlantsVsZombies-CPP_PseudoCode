// Class: EggplantSuperShuriken


/* EggplantSuperShuriken::~EggplantSuperShuriken() */

void __thiscall EggplantSuperShuriken::~EggplantSuperShuriken(EggplantSuperShuriken *this)

{
  *(undefined ***)this = &PTR_GetClass_0674a6e0;
  *(undefined ***)(this + 0x10) = &PTR__EggplantSuperShuriken_0674a8e0;
  EggplantShuriken::~EggplantShuriken((EggplantShuriken *)this);
  return;
}


/* non-virtual thunk to EggplantSuperShuriken::~EggplantSuperShuriken() */

void __thiscall EggplantSuperShuriken::~EggplantSuperShuriken(EggplantSuperShuriken *this)

{
  ~EggplantSuperShuriken(this + -0x10);
  return;
}


/* EggplantSuperShuriken::~EggplantSuperShuriken() */

void __thiscall EggplantSuperShuriken::~EggplantSuperShuriken(EggplantSuperShuriken *this)

{
  ~EggplantSuperShuriken(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EggplantSuperShuriken::~EggplantSuperShuriken() */

void __thiscall EggplantSuperShuriken::~EggplantSuperShuriken(EggplantSuperShuriken *this)

{
  ~EggplantSuperShuriken(this + -0x10);
  return;
}


/* EggplantSuperShuriken::EggplantSuperShuriken() */

void __thiscall EggplantSuperShuriken::EggplantSuperShuriken(EggplantSuperShuriken *this)

{
  EggplantShuriken::EggplantShuriken((EggplantShuriken *)this);
  *(undefined ***)this = &PTR_GetClass_0674a6e0;
  *(undefined ***)(this + 0x10) = &PTR__EggplantSuperShuriken_0674a8e0;
  return;
}


/* EggplantSuperShuriken::StaticNew() */

EggplantSuperShuriken * EggplantSuperShuriken::StaticNew(void)

{
  EggplantSuperShuriken *this;
  
  this = ::operator_new(0x1f0);
  EggplantSuperShuriken(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EggplantSuperShuriken::StaticClassInit() */

void EggplantSuperShuriken::StaticClassInit(void)

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
    std::string::string(asStack_10,"EggplantSuperShuriken");
    (*pcVar2)(plVar1,asStack_10,FUN_03c27d7c,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EggplantSuperShuriken::StaticGetClass() */

long * EggplantSuperShuriken::StaticGetClass(void)

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
  uVar2 = EggplantShuriken::StaticGetClass();
  (*pcVar3)(plVar1,"EggplantSuperShuriken",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EggplantSuperShuriken::GetClass() const */

long * EggplantSuperShuriken::GetClass(void)

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
  uVar2 = EggplantShuriken::StaticGetClass();
  (*pcVar3)(plVar1,"EggplantSuperShuriken",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

