// Class: Pvz1GridItemAnimRig


/* Pvz1GridItemAnimRig::~Pvz1GridItemAnimRig() */

void __thiscall Pvz1GridItemAnimRig::~Pvz1GridItemAnimRig(Pvz1GridItemAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_067ad160;
  *(undefined ***)(this + 0x10) = &PTR__Pvz1GridItemAnimRig_067ad288;
  GravestoneAnimRig::~GravestoneAnimRig((GravestoneAnimRig *)this);
  return;
}


/* non-virtual thunk to Pvz1GridItemAnimRig::~Pvz1GridItemAnimRig() */

void __thiscall Pvz1GridItemAnimRig::~Pvz1GridItemAnimRig(Pvz1GridItemAnimRig *this)

{
  ~Pvz1GridItemAnimRig(this + -0x10);
  return;
}


/* Pvz1GridItemAnimRig::~Pvz1GridItemAnimRig() */

void __thiscall Pvz1GridItemAnimRig::~Pvz1GridItemAnimRig(Pvz1GridItemAnimRig *this)

{
  ~Pvz1GridItemAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Pvz1GridItemAnimRig::~Pvz1GridItemAnimRig() */

void __thiscall Pvz1GridItemAnimRig::~Pvz1GridItemAnimRig(Pvz1GridItemAnimRig *this)

{
  ~Pvz1GridItemAnimRig(this + -0x10);
  return;
}


/* Pvz1GridItemAnimRig::Pvz1GridItemAnimRig() */

void __thiscall Pvz1GridItemAnimRig::Pvz1GridItemAnimRig(Pvz1GridItemAnimRig *this)

{
  GravestoneAnimRig::GravestoneAnimRig((GravestoneAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067ad160;
  *(undefined ***)(this + 0x10) = &PTR__Pvz1GridItemAnimRig_067ad288;
  return;
}


/* Pvz1GridItemAnimRig::StaticNew() */

Pvz1GridItemAnimRig * Pvz1GridItemAnimRig::StaticNew(void)

{
  Pvz1GridItemAnimRig *this;
  
  this = ::operator_new(0x210);
  Pvz1GridItemAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Pvz1GridItemAnimRig::StaticClassInit() */

void Pvz1GridItemAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"Pvz1GridItemAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_03fceb2c,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Pvz1GridItemAnimRig::StaticGetClass() */

long * Pvz1GridItemAnimRig::StaticGetClass(void)

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
  uVar2 = GravestoneAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"Pvz1GridItemAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Pvz1GridItemAnimRig::GetClass() const */

long * Pvz1GridItemAnimRig::GetClass(void)

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
  uVar2 = GravestoneAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"Pvz1GridItemAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

