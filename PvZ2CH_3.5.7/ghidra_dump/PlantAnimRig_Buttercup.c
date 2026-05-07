// Class: PlantAnimRig_Buttercup


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Buttercup::getAttackAnimationName() */

void PlantAnimRig_Buttercup::getAttackAnimationName(void)

{
  long lVar1;
  long in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x3b8) != '\0') {
    *(undefined1 *)(in_x0 + 0x3b8) = 0;
  }
  std::string::string(in_x8,"attack");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Buttercup::~PlantAnimRig_Buttercup() */

void __thiscall PlantAnimRig_Buttercup::~PlantAnimRig_Buttercup(PlantAnimRig_Buttercup *this)

{
  *(undefined ***)this = &PTR_GetClass_0672f850;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Buttercup_0672fab8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Buttercup::~PlantAnimRig_Buttercup() */

void __thiscall PlantAnimRig_Buttercup::~PlantAnimRig_Buttercup(PlantAnimRig_Buttercup *this)

{
  ~PlantAnimRig_Buttercup(this + -0x10);
  return;
}


/* PlantAnimRig_Buttercup::~PlantAnimRig_Buttercup() */

void __thiscall PlantAnimRig_Buttercup::~PlantAnimRig_Buttercup(PlantAnimRig_Buttercup *this)

{
  ~PlantAnimRig_Buttercup(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Buttercup::~PlantAnimRig_Buttercup() */

void __thiscall PlantAnimRig_Buttercup::~PlantAnimRig_Buttercup(PlantAnimRig_Buttercup *this)

{
  ~PlantAnimRig_Buttercup(this + -0x10);
  return;
}


/* PlantAnimRig_Buttercup::PlantAnimRig_Buttercup() */

void __thiscall PlantAnimRig_Buttercup::PlantAnimRig_Buttercup(PlantAnimRig_Buttercup *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3b8] = (PlantAnimRig_Buttercup)0x0;
  *(undefined ***)this = &PTR_GetClass_0672f850;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Buttercup_0672fab8;
  return;
}


/* PlantAnimRig_Buttercup::StaticNew() */

PlantAnimRig_Buttercup * PlantAnimRig_Buttercup::StaticNew(void)

{
  PlantAnimRig_Buttercup *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Buttercup(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Buttercup::StaticClassInit() */

void PlantAnimRig_Buttercup::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Buttercup");
    (*pcVar2)(plVar1,asStack_10,FUN_03b33fe0,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Buttercup::StaticGetClass() */

long * PlantAnimRig_Buttercup::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Buttercup",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Buttercup::GetClass() const */

long * PlantAnimRig_Buttercup::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Buttercup",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

