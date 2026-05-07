// Class: DinosaurAnimRig_YoungTyrannosaurus


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnimRig_YoungTyrannosaurus::getIdleAnimationName() */

void __thiscall
DinosaurAnimRig_YoungTyrannosaurus::getIdleAnimationName(DinosaurAnimRig_YoungTyrannosaurus *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"sleep");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* DinosaurAnimRig_YoungTyrannosaurus::~DinosaurAnimRig_YoungTyrannosaurus() */

void __thiscall
DinosaurAnimRig_YoungTyrannosaurus::~DinosaurAnimRig_YoungTyrannosaurus
          (DinosaurAnimRig_YoungTyrannosaurus *this)

{
  *(undefined ***)this = &PTR_GetClass_06907050;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurAnimRig_YoungTyrannosaurus_069071c0;
  DinosaurAnimRig_Younger::~DinosaurAnimRig_Younger((DinosaurAnimRig_Younger *)this);
  return;
}


/* non-virtual thunk to DinosaurAnimRig_YoungTyrannosaurus::~DinosaurAnimRig_YoungTyrannosaurus() */

void __thiscall
DinosaurAnimRig_YoungTyrannosaurus::~DinosaurAnimRig_YoungTyrannosaurus
          (DinosaurAnimRig_YoungTyrannosaurus *this)

{
  ~DinosaurAnimRig_YoungTyrannosaurus(this + -0x10);
  return;
}


/* DinosaurAnimRig_YoungTyrannosaurus::~DinosaurAnimRig_YoungTyrannosaurus() */

void __thiscall
DinosaurAnimRig_YoungTyrannosaurus::~DinosaurAnimRig_YoungTyrannosaurus
          (DinosaurAnimRig_YoungTyrannosaurus *this)

{
  ~DinosaurAnimRig_YoungTyrannosaurus(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DinosaurAnimRig_YoungTyrannosaurus::~DinosaurAnimRig_YoungTyrannosaurus() */

void __thiscall
DinosaurAnimRig_YoungTyrannosaurus::~DinosaurAnimRig_YoungTyrannosaurus
          (DinosaurAnimRig_YoungTyrannosaurus *this)

{
  ~DinosaurAnimRig_YoungTyrannosaurus(this + -0x10);
  return;
}


/* DinosaurAnimRig_YoungTyrannosaurus::DinosaurAnimRig_YoungTyrannosaurus() */

void __thiscall
DinosaurAnimRig_YoungTyrannosaurus::DinosaurAnimRig_YoungTyrannosaurus
          (DinosaurAnimRig_YoungTyrannosaurus *this)

{
  DinosaurAnimRig_Younger::DinosaurAnimRig_Younger((DinosaurAnimRig_Younger *)this);
  *(undefined ***)this = &PTR_GetClass_06907050;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurAnimRig_YoungTyrannosaurus_069071c0;
  return;
}


/* DinosaurAnimRig_YoungTyrannosaurus::StaticNew() */

DinosaurAnimRig_YoungTyrannosaurus * DinosaurAnimRig_YoungTyrannosaurus::StaticNew(void)

{
  DinosaurAnimRig_YoungTyrannosaurus *this;
  
  this = ::operator_new(0x230);
  DinosaurAnimRig_YoungTyrannosaurus(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnimRig_YoungTyrannosaurus::StaticClassInit() */

void DinosaurAnimRig_YoungTyrannosaurus::StaticClassInit(void)

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
    std::string::string(asStack_10,"DinosaurAnimRig_YoungTyrannosaurus");
    (*pcVar2)(plVar1,asStack_10,FUN_04832a98,0x230,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurAnimRig_YoungTyrannosaurus::StaticGetClass() */

long * DinosaurAnimRig_YoungTyrannosaurus::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DinosaurAnimRig_YoungTyrannosaurus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurAnimRig_YoungTyrannosaurus::GetClass() const */

long * DinosaurAnimRig_YoungTyrannosaurus::GetClass(void)

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
  (*pcVar3)(plVar1,"DinosaurAnimRig_YoungTyrannosaurus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

