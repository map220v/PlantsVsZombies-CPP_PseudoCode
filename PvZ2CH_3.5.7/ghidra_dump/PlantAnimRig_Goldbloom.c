// Class: PlantAnimRig_Goldbloom


/* PlantAnimRig_Goldbloom::~PlantAnimRig_Goldbloom() */

void __thiscall PlantAnimRig_Goldbloom::~PlantAnimRig_Goldbloom(PlantAnimRig_Goldbloom *this)

{
  *(undefined ***)this = &PTR_GetClass_06742fc0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Goldbloom_06743228;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Goldbloom::~PlantAnimRig_Goldbloom() */

void __thiscall PlantAnimRig_Goldbloom::~PlantAnimRig_Goldbloom(PlantAnimRig_Goldbloom *this)

{
  ~PlantAnimRig_Goldbloom(this + -0x10);
  return;
}


/* PlantAnimRig_Goldbloom::~PlantAnimRig_Goldbloom() */

void __thiscall PlantAnimRig_Goldbloom::~PlantAnimRig_Goldbloom(PlantAnimRig_Goldbloom *this)

{
  ~PlantAnimRig_Goldbloom(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Goldbloom::~PlantAnimRig_Goldbloom() */

void __thiscall PlantAnimRig_Goldbloom::~PlantAnimRig_Goldbloom(PlantAnimRig_Goldbloom *this)

{
  ~PlantAnimRig_Goldbloom(this + -0x10);
  return;
}


/* PlantAnimRig_Goldbloom::PlantAnimRig_Goldbloom() */

void __thiscall PlantAnimRig_Goldbloom::PlantAnimRig_Goldbloom(PlantAnimRig_Goldbloom *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06742fc0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Goldbloom_06743228;
  return;
}


/* PlantAnimRig_Goldbloom::StaticNew() */

PlantAnimRig_Goldbloom * PlantAnimRig_Goldbloom::StaticNew(void)

{
  PlantAnimRig_Goldbloom *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Goldbloom(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Goldbloom::StaticClassInit() */

void PlantAnimRig_Goldbloom::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Goldbloom");
    (*pcVar2)(plVar1,asStack_10,FUN_03bfe2a8,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Goldbloom::StaticGetClass() */

long * PlantAnimRig_Goldbloom::StaticGetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Goldbloom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Goldbloom::GetClass() const */

long * PlantAnimRig_Goldbloom::GetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Goldbloom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

