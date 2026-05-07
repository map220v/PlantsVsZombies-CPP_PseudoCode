// Class: PlantAnimRig_Gumnut


/* PlantAnimRig_Gumnut::~PlantAnimRig_Gumnut() */

void __thiscall PlantAnimRig_Gumnut::~PlantAnimRig_Gumnut(PlantAnimRig_Gumnut *this)

{
  *(undefined ***)this = &PTR_GetClass_06822100;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Gumnut_06822368;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Gumnut::~PlantAnimRig_Gumnut() */

void __thiscall PlantAnimRig_Gumnut::~PlantAnimRig_Gumnut(PlantAnimRig_Gumnut *this)

{
  ~PlantAnimRig_Gumnut(this + -0x10);
  return;
}


/* PlantAnimRig_Gumnut::~PlantAnimRig_Gumnut() */

void __thiscall PlantAnimRig_Gumnut::~PlantAnimRig_Gumnut(PlantAnimRig_Gumnut *this)

{
  ~PlantAnimRig_Gumnut(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Gumnut::~PlantAnimRig_Gumnut() */

void __thiscall PlantAnimRig_Gumnut::~PlantAnimRig_Gumnut(PlantAnimRig_Gumnut *this)

{
  ~PlantAnimRig_Gumnut(this + -0x10);
  return;
}


/* PlantAnimRig_Gumnut::PlantAnimRig_Gumnut() */

void __thiscall PlantAnimRig_Gumnut::PlantAnimRig_Gumnut(PlantAnimRig_Gumnut *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06822100;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Gumnut_06822368;
  return;
}


/* PlantAnimRig_Gumnut::StaticNew() */

PlantAnimRig_Gumnut * PlantAnimRig_Gumnut::StaticNew(void)

{
  PlantAnimRig_Gumnut *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Gumnut(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Gumnut::StaticClassInit() */

void PlantAnimRig_Gumnut::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Gumnut");
    (*pcVar2)(plVar1,asStack_10,FUN_04275274,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Gumnut::StaticGetClass() */

long * PlantAnimRig_Gumnut::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Gumnut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Gumnut::GetClass() const */

long * PlantAnimRig_Gumnut::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Gumnut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

