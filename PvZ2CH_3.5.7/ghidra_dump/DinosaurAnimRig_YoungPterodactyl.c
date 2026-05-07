// Class: DinosaurAnimRig_YoungPterodactyl


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnimRig_YoungPterodactyl::getCryAnimationName() */

void __thiscall
DinosaurAnimRig_YoungPterodactyl::getCryAnimationName(DinosaurAnimRig_YoungPterodactyl *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"cry");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* DinosaurAnimRig_YoungPterodactyl::~DinosaurAnimRig_YoungPterodactyl() */

void __thiscall
DinosaurAnimRig_YoungPterodactyl::~DinosaurAnimRig_YoungPterodactyl
          (DinosaurAnimRig_YoungPterodactyl *this)

{
  *(undefined ***)this = &PTR_GetClass_06906a90;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurAnimRig_YoungPterodactyl_06906c00;
  DinosaurAnimRig_Younger::~DinosaurAnimRig_Younger((DinosaurAnimRig_Younger *)this);
  return;
}


/* non-virtual thunk to DinosaurAnimRig_YoungPterodactyl::~DinosaurAnimRig_YoungPterodactyl() */

void __thiscall
DinosaurAnimRig_YoungPterodactyl::~DinosaurAnimRig_YoungPterodactyl
          (DinosaurAnimRig_YoungPterodactyl *this)

{
  ~DinosaurAnimRig_YoungPterodactyl(this + -0x10);
  return;
}


/* DinosaurAnimRig_YoungPterodactyl::~DinosaurAnimRig_YoungPterodactyl() */

void __thiscall
DinosaurAnimRig_YoungPterodactyl::~DinosaurAnimRig_YoungPterodactyl
          (DinosaurAnimRig_YoungPterodactyl *this)

{
  ~DinosaurAnimRig_YoungPterodactyl(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DinosaurAnimRig_YoungPterodactyl::~DinosaurAnimRig_YoungPterodactyl() */

void __thiscall
DinosaurAnimRig_YoungPterodactyl::~DinosaurAnimRig_YoungPterodactyl
          (DinosaurAnimRig_YoungPterodactyl *this)

{
  ~DinosaurAnimRig_YoungPterodactyl(this + -0x10);
  return;
}


/* DinosaurAnimRig_YoungPterodactyl::DinosaurAnimRig_YoungPterodactyl() */

void __thiscall
DinosaurAnimRig_YoungPterodactyl::DinosaurAnimRig_YoungPterodactyl
          (DinosaurAnimRig_YoungPterodactyl *this)

{
  DinosaurAnimRig_Younger::DinosaurAnimRig_Younger((DinosaurAnimRig_Younger *)this);
  *(undefined ***)this = &PTR_GetClass_06906a90;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurAnimRig_YoungPterodactyl_06906c00;
  return;
}


/* DinosaurAnimRig_YoungPterodactyl::StaticNew() */

DinosaurAnimRig_YoungPterodactyl * DinosaurAnimRig_YoungPterodactyl::StaticNew(void)

{
  DinosaurAnimRig_YoungPterodactyl *this;
  
  this = ::operator_new(0x230);
  DinosaurAnimRig_YoungPterodactyl(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurAnimRig_YoungPterodactyl::StaticClassInit() */

void DinosaurAnimRig_YoungPterodactyl::StaticClassInit(void)

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
    std::string::string(asStack_10,"DinosaurAnimRig_YoungPterodactyl");
    (*pcVar2)(plVar1,asStack_10,FUN_04831c14,0x230,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurAnimRig_YoungPterodactyl::StaticGetClass() */

long * DinosaurAnimRig_YoungPterodactyl::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DinosaurAnimRig_YoungPterodactyl",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurAnimRig_YoungPterodactyl::GetClass() const */

long * DinosaurAnimRig_YoungPterodactyl::GetClass(void)

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
  (*pcVar3)(plVar1,"DinosaurAnimRig_YoungPterodactyl",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

