// Class: PlantAnimRig_HeathSeeker


/* PlantAnimRig_HeathSeeker::~PlantAnimRig_HeathSeeker() */

void __thiscall PlantAnimRig_HeathSeeker::~PlantAnimRig_HeathSeeker(PlantAnimRig_HeathSeeker *this)

{
  *(undefined ***)this = &PTR_GetClass_067b5040;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_HeathSeeker_067b52a8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_HeathSeeker::~PlantAnimRig_HeathSeeker() */

void __thiscall PlantAnimRig_HeathSeeker::~PlantAnimRig_HeathSeeker(PlantAnimRig_HeathSeeker *this)

{
  ~PlantAnimRig_HeathSeeker(this + -0x10);
  return;
}


/* PlantAnimRig_HeathSeeker::~PlantAnimRig_HeathSeeker() */

void __thiscall PlantAnimRig_HeathSeeker::~PlantAnimRig_HeathSeeker(PlantAnimRig_HeathSeeker *this)

{
  ~PlantAnimRig_HeathSeeker(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_HeathSeeker::~PlantAnimRig_HeathSeeker() */

void __thiscall PlantAnimRig_HeathSeeker::~PlantAnimRig_HeathSeeker(PlantAnimRig_HeathSeeker *this)

{
  ~PlantAnimRig_HeathSeeker(this + -0x10);
  return;
}


/* PlantAnimRig_HeathSeeker::PlantAnimRig_HeathSeeker() */

void __thiscall PlantAnimRig_HeathSeeker::PlantAnimRig_HeathSeeker(PlantAnimRig_HeathSeeker *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067b5040;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_HeathSeeker_067b52a8;
  return;
}


/* PlantAnimRig_HeathSeeker::StaticNew() */

PlantAnimRig_HeathSeeker * PlantAnimRig_HeathSeeker::StaticNew(void)

{
  PlantAnimRig_HeathSeeker *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_HeathSeeker(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_HeathSeeker::StaticClassInit() */

void PlantAnimRig_HeathSeeker::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_HeathSeeker");
    (*pcVar2)(plVar1,asStack_10,FUN_0400d28c,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_HeathSeeker::StaticGetClass() */

long * PlantAnimRig_HeathSeeker::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_HeathSeeker",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_HeathSeeker::GetClass() const */

long * PlantAnimRig_HeathSeeker::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_HeathSeeker",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

