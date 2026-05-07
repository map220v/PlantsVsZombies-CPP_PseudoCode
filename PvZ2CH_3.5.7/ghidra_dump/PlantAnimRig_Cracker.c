// Class: PlantAnimRig_Cracker


/* PlantAnimRig_Cracker::~PlantAnimRig_Cracker() */

void __thiscall PlantAnimRig_Cracker::~PlantAnimRig_Cracker(PlantAnimRig_Cracker *this)

{
  *(undefined ***)this = &PTR_GetClass_067d0c50;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Cracker_067d0eb8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Cracker::~PlantAnimRig_Cracker() */

void __thiscall PlantAnimRig_Cracker::~PlantAnimRig_Cracker(PlantAnimRig_Cracker *this)

{
  ~PlantAnimRig_Cracker(this + -0x10);
  return;
}


/* PlantAnimRig_Cracker::~PlantAnimRig_Cracker() */

void __thiscall PlantAnimRig_Cracker::~PlantAnimRig_Cracker(PlantAnimRig_Cracker *this)

{
  ~PlantAnimRig_Cracker(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Cracker::~PlantAnimRig_Cracker() */

void __thiscall PlantAnimRig_Cracker::~PlantAnimRig_Cracker(PlantAnimRig_Cracker *this)

{
  ~PlantAnimRig_Cracker(this + -0x10);
  return;
}


/* PlantAnimRig_Cracker::PlantAnimRig_Cracker() */

void __thiscall PlantAnimRig_Cracker::PlantAnimRig_Cracker(PlantAnimRig_Cracker *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067d0c50;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Cracker_067d0eb8;
  return;
}


/* PlantAnimRig_Cracker::StaticNew() */

PlantAnimRig_Cracker * PlantAnimRig_Cracker::StaticNew(void)

{
  PlantAnimRig_Cracker *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Cracker(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Cracker::StaticClassInit() */

void PlantAnimRig_Cracker::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Cracker");
    (*pcVar2)(plVar1,asStack_10,FUN_040a1c1c,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Cracker::StaticGetClass() */

long * PlantAnimRig_Cracker::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Cracker",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Cracker::GetClass() const */

long * PlantAnimRig_Cracker::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Cracker",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

