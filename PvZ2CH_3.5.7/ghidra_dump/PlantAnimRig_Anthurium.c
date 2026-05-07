// Class: PlantAnimRig_Anthurium


/* PlantAnimRig_Anthurium::~PlantAnimRig_Anthurium() */

void __thiscall PlantAnimRig_Anthurium::~PlantAnimRig_Anthurium(PlantAnimRig_Anthurium *this)

{
  *(undefined ***)this = &PTR_GetClass_0680ebe0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Anthurium_0680ee48;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Anthurium::~PlantAnimRig_Anthurium() */

void __thiscall PlantAnimRig_Anthurium::~PlantAnimRig_Anthurium(PlantAnimRig_Anthurium *this)

{
  ~PlantAnimRig_Anthurium(this + -0x10);
  return;
}


/* PlantAnimRig_Anthurium::~PlantAnimRig_Anthurium() */

void __thiscall PlantAnimRig_Anthurium::~PlantAnimRig_Anthurium(PlantAnimRig_Anthurium *this)

{
  ~PlantAnimRig_Anthurium(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Anthurium::~PlantAnimRig_Anthurium() */

void __thiscall PlantAnimRig_Anthurium::~PlantAnimRig_Anthurium(PlantAnimRig_Anthurium *this)

{
  ~PlantAnimRig_Anthurium(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Anthurium::StaticClassInit() */

void PlantAnimRig_Anthurium::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Anthurium");
    (*pcVar2)(plVar1,asStack_10,FUN_0421e530,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Anthurium::StaticGetClass() */

long * PlantAnimRig_Anthurium::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Anthurium",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Anthurium::GetClass() const */

long * PlantAnimRig_Anthurium::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Anthurium",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Anthurium::PlantAnimRig_Anthurium() */

void __thiscall PlantAnimRig_Anthurium::PlantAnimRig_Anthurium(PlantAnimRig_Anthurium *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0680ebe0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Anthurium_0680ee48;
  return;
}


/* PlantAnimRig_Anthurium::StaticNew() */

PlantAnimRig_Anthurium * PlantAnimRig_Anthurium::StaticNew(void)

{
  PlantAnimRig_Anthurium *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Anthurium(this);
  return this;
}

