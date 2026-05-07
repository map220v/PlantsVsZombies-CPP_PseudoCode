// Class: PlantAnimRig_MorningGlory


/* PlantAnimRig_MorningGlory::~PlantAnimRig_MorningGlory() */

void __thiscall
PlantAnimRig_MorningGlory::~PlantAnimRig_MorningGlory(PlantAnimRig_MorningGlory *this)

{
  *(undefined ***)this = &PTR_GetClass_067f6610;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_MorningGlory_067f6878;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_MorningGlory::~PlantAnimRig_MorningGlory() */

void __thiscall
PlantAnimRig_MorningGlory::~PlantAnimRig_MorningGlory(PlantAnimRig_MorningGlory *this)

{
  ~PlantAnimRig_MorningGlory(this + -0x10);
  return;
}


/* PlantAnimRig_MorningGlory::~PlantAnimRig_MorningGlory() */

void __thiscall
PlantAnimRig_MorningGlory::~PlantAnimRig_MorningGlory(PlantAnimRig_MorningGlory *this)

{
  ~PlantAnimRig_MorningGlory(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_MorningGlory::~PlantAnimRig_MorningGlory() */

void __thiscall
PlantAnimRig_MorningGlory::~PlantAnimRig_MorningGlory(PlantAnimRig_MorningGlory *this)

{
  ~PlantAnimRig_MorningGlory(this + -0x10);
  return;
}


/* PlantAnimRig_MorningGlory::PlantAnimRig_MorningGlory() */

void __thiscall
PlantAnimRig_MorningGlory::PlantAnimRig_MorningGlory(PlantAnimRig_MorningGlory *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067f6610;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_MorningGlory_067f6878;
  return;
}


/* PlantAnimRig_MorningGlory::StaticNew() */

PlantAnimRig_MorningGlory * PlantAnimRig_MorningGlory::StaticNew(void)

{
  PlantAnimRig_MorningGlory *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_MorningGlory(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_MorningGlory::StaticClassInit() */

void PlantAnimRig_MorningGlory::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_MorningGlory");
    (*pcVar2)(plVar1,asStack_10,FUN_04176f0c,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_MorningGlory::StaticGetClass() */

long * PlantAnimRig_MorningGlory::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_MorningGlory",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_MorningGlory::GetClass() const */

long * PlantAnimRig_MorningGlory::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_MorningGlory",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

