// Class: EggplantLightningShuriken


/* EggplantLightningShuriken::~EggplantLightningShuriken() */

void __thiscall
EggplantLightningShuriken::~EggplantLightningShuriken(EggplantLightningShuriken *this)

{
  *(undefined ***)this = &PTR_GetClass_0674ad70;
  *(undefined ***)(this + 0x10) = &PTR__EggplantLightningShuriken_0674af70;
  EggplantShuriken::~EggplantShuriken((EggplantShuriken *)this);
  return;
}


/* non-virtual thunk to EggplantLightningShuriken::~EggplantLightningShuriken() */

void __thiscall
EggplantLightningShuriken::~EggplantLightningShuriken(EggplantLightningShuriken *this)

{
  ~EggplantLightningShuriken(this + -0x10);
  return;
}


/* EggplantLightningShuriken::~EggplantLightningShuriken() */

void __thiscall
EggplantLightningShuriken::~EggplantLightningShuriken(EggplantLightningShuriken *this)

{
  ~EggplantLightningShuriken(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EggplantLightningShuriken::~EggplantLightningShuriken() */

void __thiscall
EggplantLightningShuriken::~EggplantLightningShuriken(EggplantLightningShuriken *this)

{
  ~EggplantLightningShuriken(this + -0x10);
  return;
}


/* EggplantLightningShuriken::EggplantLightningShuriken() */

void __thiscall
EggplantLightningShuriken::EggplantLightningShuriken(EggplantLightningShuriken *this)

{
  EggplantShuriken::EggplantShuriken((EggplantShuriken *)this);
  *(undefined ***)this = &PTR_GetClass_0674ad70;
  *(undefined ***)(this + 0x10) = &PTR__EggplantLightningShuriken_0674af70;
  return;
}


/* EggplantLightningShuriken::StaticNew() */

EggplantLightningShuriken * EggplantLightningShuriken::StaticNew(void)

{
  EggplantLightningShuriken *this;
  
  this = ::operator_new(0x1f0);
  EggplantLightningShuriken(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EggplantLightningShuriken::StaticClassInit() */

void EggplantLightningShuriken::StaticClassInit(void)

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
    std::string::string(asStack_10,"EggplantLightningShuriken");
    (*pcVar2)(plVar1,asStack_10,FUN_03c28408,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EggplantLightningShuriken::StaticGetClass() */

long * EggplantLightningShuriken::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EggplantLightningShuriken",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EggplantLightningShuriken::GetClass() const */

long * EggplantLightningShuriken::GetClass(void)

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
  (*pcVar3)(plVar1,"EggplantLightningShuriken",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

