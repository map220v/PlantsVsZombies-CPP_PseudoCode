// Class: PlantAnimRig_Bearberry


/* PlantAnimRig_Bearberry::~PlantAnimRig_Bearberry() */

void __thiscall PlantAnimRig_Bearberry::~PlantAnimRig_Bearberry(PlantAnimRig_Bearberry *this)

{
  *(undefined ***)this = &PTR_GetClass_0681a3c0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Bearberry_0681a628;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Bearberry::~PlantAnimRig_Bearberry() */

void __thiscall PlantAnimRig_Bearberry::~PlantAnimRig_Bearberry(PlantAnimRig_Bearberry *this)

{
  ~PlantAnimRig_Bearberry(this + -0x10);
  return;
}


/* PlantAnimRig_Bearberry::~PlantAnimRig_Bearberry() */

void __thiscall PlantAnimRig_Bearberry::~PlantAnimRig_Bearberry(PlantAnimRig_Bearberry *this)

{
  ~PlantAnimRig_Bearberry(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Bearberry::~PlantAnimRig_Bearberry() */

void __thiscall PlantAnimRig_Bearberry::~PlantAnimRig_Bearberry(PlantAnimRig_Bearberry *this)

{
  ~PlantAnimRig_Bearberry(this + -0x10);
  return;
}


/* PlantAnimRig_Bearberry::PlantAnimRig_Bearberry() */

void __thiscall PlantAnimRig_Bearberry::PlantAnimRig_Bearberry(PlantAnimRig_Bearberry *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0681a3c0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Bearberry_0681a628;
  return;
}


/* PlantAnimRig_Bearberry::StaticNew() */

PlantAnimRig_Bearberry * PlantAnimRig_Bearberry::StaticNew(void)

{
  PlantAnimRig_Bearberry *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Bearberry(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Bearberry::StaticClassInit() */

void PlantAnimRig_Bearberry::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Bearberry");
    (*pcVar2)(plVar1,asStack_10,FUN_042551fc,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Bearberry::StaticGetClass() */

long * PlantAnimRig_Bearberry::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Bearberry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Bearberry::GetClass() const */

long * PlantAnimRig_Bearberry::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Bearberry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

