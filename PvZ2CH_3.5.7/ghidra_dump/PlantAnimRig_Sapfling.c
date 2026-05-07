// Class: PlantAnimRig_Sapfling


/* PlantAnimRig_Sapfling::~PlantAnimRig_Sapfling() */

void __thiscall PlantAnimRig_Sapfling::~PlantAnimRig_Sapfling(PlantAnimRig_Sapfling *this)

{
  *(undefined ***)this = &PTR_GetClass_067cfcc0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Sapfling_067cff28;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Sapfling::~PlantAnimRig_Sapfling() */

void __thiscall PlantAnimRig_Sapfling::~PlantAnimRig_Sapfling(PlantAnimRig_Sapfling *this)

{
  ~PlantAnimRig_Sapfling(this + -0x10);
  return;
}


/* PlantAnimRig_Sapfling::~PlantAnimRig_Sapfling() */

void __thiscall PlantAnimRig_Sapfling::~PlantAnimRig_Sapfling(PlantAnimRig_Sapfling *this)

{
  ~PlantAnimRig_Sapfling(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Sapfling::~PlantAnimRig_Sapfling() */

void __thiscall PlantAnimRig_Sapfling::~PlantAnimRig_Sapfling(PlantAnimRig_Sapfling *this)

{
  ~PlantAnimRig_Sapfling(this + -0x10);
  return;
}


/* PlantAnimRig_Sapfling::PlantAnimRig_Sapfling() */

void __thiscall PlantAnimRig_Sapfling::PlantAnimRig_Sapfling(PlantAnimRig_Sapfling *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067cfcc0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Sapfling_067cff28;
  return;
}


/* PlantAnimRig_Sapfling::StaticNew() */

PlantAnimRig_Sapfling * PlantAnimRig_Sapfling::StaticNew(void)

{
  PlantAnimRig_Sapfling *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Sapfling(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Sapfling::StaticClassInit() */

void PlantAnimRig_Sapfling::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Sapfling");
    (*pcVar2)(plVar1,asStack_10,FUN_0409a918,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Sapfling::StaticGetClass() */

long * PlantAnimRig_Sapfling::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Sapfling",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Sapfling::GetClass() const */

long * PlantAnimRig_Sapfling::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Sapfling",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

