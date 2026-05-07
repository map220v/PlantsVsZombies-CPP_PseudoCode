// Class: PlantAnimRig_Shielded


/* PlantAnimRig_Shielded::~PlantAnimRig_Shielded() */

void __thiscall PlantAnimRig_Shielded::~PlantAnimRig_Shielded(PlantAnimRig_Shielded *this)

{
  *(undefined ***)this = &PTR_GetClass_067a18e0;
  *(undefined **)(this + 0x10) = &DAT_067a1b58;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Shielded::~PlantAnimRig_Shielded() */

void __thiscall PlantAnimRig_Shielded::~PlantAnimRig_Shielded(PlantAnimRig_Shielded *this)

{
  ~PlantAnimRig_Shielded(this + -0x10);
  return;
}


/* PlantAnimRig_Shielded::~PlantAnimRig_Shielded() */

void __thiscall PlantAnimRig_Shielded::~PlantAnimRig_Shielded(PlantAnimRig_Shielded *this)

{
  ~PlantAnimRig_Shielded(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Shielded::~PlantAnimRig_Shielded() */

void __thiscall PlantAnimRig_Shielded::~PlantAnimRig_Shielded(PlantAnimRig_Shielded *this)

{
  ~PlantAnimRig_Shielded(this + -0x10);
  return;
}


/* PlantAnimRig_Shielded::PlantAnimRig_Shielded() */

void __thiscall PlantAnimRig_Shielded::PlantAnimRig_Shielded(PlantAnimRig_Shielded *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067a18e0;
  *(undefined **)(this + 0x10) = &DAT_067a1b58;
  return;
}


/* PlantAnimRig_Shielded::StaticNew() */

undefined8 PlantAnimRig_Shielded::StaticNew(void)

{
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Shielded::StaticClassInit() */

void PlantAnimRig_Shielded::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Shielded");
    (*pcVar2)(plVar1,asStack_10,FUN_03f67c38,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Shielded::StaticGetClass() */

long * PlantAnimRig_Shielded::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Shielded",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Shielded::GetClass() const */

long * PlantAnimRig_Shielded::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Shielded",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

