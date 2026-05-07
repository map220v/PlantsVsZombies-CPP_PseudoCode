// Class: DinosaurAnimRig_YoungBrontosaurus


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnimRig_YoungBrontosaurus::getCaughtAnimationName() */

void __thiscall
DinosaurAnimRig_YoungBrontosaurus::getCaughtAnimationName(DinosaurAnimRig_YoungBrontosaurus *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"caught");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* DinosaurAnimRig_YoungBrontosaurus::~DinosaurAnimRig_YoungBrontosaurus() */

void __thiscall
DinosaurAnimRig_YoungBrontosaurus::~DinosaurAnimRig_YoungBrontosaurus
          (DinosaurAnimRig_YoungBrontosaurus *this)

{
  *(undefined ***)this = &PTR_GetClass_069064d0;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurAnimRig_YoungBrontosaurus_06906640;
  DinosaurAnimRig_Younger::~DinosaurAnimRig_Younger((DinosaurAnimRig_Younger *)this);
  return;
}


/* non-virtual thunk to DinosaurAnimRig_YoungBrontosaurus::~DinosaurAnimRig_YoungBrontosaurus() */

void __thiscall
DinosaurAnimRig_YoungBrontosaurus::~DinosaurAnimRig_YoungBrontosaurus
          (DinosaurAnimRig_YoungBrontosaurus *this)

{
  ~DinosaurAnimRig_YoungBrontosaurus(this + -0x10);
  return;
}


/* DinosaurAnimRig_YoungBrontosaurus::~DinosaurAnimRig_YoungBrontosaurus() */

void __thiscall
DinosaurAnimRig_YoungBrontosaurus::~DinosaurAnimRig_YoungBrontosaurus
          (DinosaurAnimRig_YoungBrontosaurus *this)

{
  ~DinosaurAnimRig_YoungBrontosaurus(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DinosaurAnimRig_YoungBrontosaurus::~DinosaurAnimRig_YoungBrontosaurus() */

void __thiscall
DinosaurAnimRig_YoungBrontosaurus::~DinosaurAnimRig_YoungBrontosaurus
          (DinosaurAnimRig_YoungBrontosaurus *this)

{
  ~DinosaurAnimRig_YoungBrontosaurus(this + -0x10);
  return;
}


/* DinosaurAnimRig_YoungBrontosaurus::DinosaurAnimRig_YoungBrontosaurus() */

void __thiscall
DinosaurAnimRig_YoungBrontosaurus::DinosaurAnimRig_YoungBrontosaurus
          (DinosaurAnimRig_YoungBrontosaurus *this)

{
  DinosaurAnimRig_Younger::DinosaurAnimRig_Younger((DinosaurAnimRig_Younger *)this);
  *(undefined ***)this = &PTR_GetClass_069064d0;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurAnimRig_YoungBrontosaurus_06906640;
  return;
}


/* DinosaurAnimRig_YoungBrontosaurus::StaticNew() */

DinosaurAnimRig_YoungBrontosaurus * DinosaurAnimRig_YoungBrontosaurus::StaticNew(void)

{
  DinosaurAnimRig_YoungBrontosaurus *this;
  
  this = ::operator_new(0x230);
  DinosaurAnimRig_YoungBrontosaurus(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnimRig_YoungBrontosaurus::StaticClassInit() */

void DinosaurAnimRig_YoungBrontosaurus::StaticClassInit(void)

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
    std::string::string(asStack_10,"DinosaurAnimRig_YoungBrontosaurus");
    (*pcVar2)(plVar1,asStack_10,FUN_04831604,0x230,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurAnimRig_YoungBrontosaurus::StaticGetClass() */

long * DinosaurAnimRig_YoungBrontosaurus::StaticGetClass(void)

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
  uVar2 = DinosaurAnimRig_Younger::StaticGetClass();
  (*pcVar3)(plVar1,"DinosaurAnimRig_YoungBrontosaurus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurAnimRig_YoungBrontosaurus::GetClass() const */

long * DinosaurAnimRig_YoungBrontosaurus::GetClass(void)

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
  uVar2 = DinosaurAnimRig_Younger::StaticGetClass();
  (*pcVar3)(plVar1,"DinosaurAnimRig_YoungBrontosaurus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

