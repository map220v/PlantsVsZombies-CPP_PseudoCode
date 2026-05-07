// Class: PlantAnimRig_Rapeflower


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Rapeflower::getAttackAnimationName() */

void PlantAnimRig_Rapeflower::getAttackAnimationName(void)

{
  int iVar1;
  long in_x0;
  undefined1 *__n;
  string *in_x8;
  undefined1 auStack_10 [8];
  long local_8;
  
  __n = auStack_10;
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"attack01");
  nop();
  iVar1 = *(int *)(in_x0 + 0x3b8);
  if (iVar1 == 2) {
    std::string::append(in_x8,"attack03",(size_t)__n);
  }
  else if (iVar1 == 3) {
    std::string::append(in_x8,"attack04",(size_t)__n);
  }
  else if (iVar1 == 1) {
    std::string::append(in_x8,"attack02",(size_t)__n);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Rapeflower::~PlantAnimRig_Rapeflower() */

void __thiscall PlantAnimRig_Rapeflower::~PlantAnimRig_Rapeflower(PlantAnimRig_Rapeflower *this)

{
  *(undefined ***)this = &PTR_GetClass_069dc480;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Rapeflower_069dc6e8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Rapeflower::~PlantAnimRig_Rapeflower() */

void __thiscall PlantAnimRig_Rapeflower::~PlantAnimRig_Rapeflower(PlantAnimRig_Rapeflower *this)

{
  ~PlantAnimRig_Rapeflower(this + -0x10);
  return;
}


/* PlantAnimRig_Rapeflower::~PlantAnimRig_Rapeflower() */

void __thiscall PlantAnimRig_Rapeflower::~PlantAnimRig_Rapeflower(PlantAnimRig_Rapeflower *this)

{
  ~PlantAnimRig_Rapeflower(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Rapeflower::~PlantAnimRig_Rapeflower() */

void __thiscall PlantAnimRig_Rapeflower::~PlantAnimRig_Rapeflower(PlantAnimRig_Rapeflower *this)

{
  ~PlantAnimRig_Rapeflower(this + -0x10);
  return;
}


/* PlantAnimRig_Rapeflower::PlantAnimRig_Rapeflower() */

void __thiscall PlantAnimRig_Rapeflower::PlantAnimRig_Rapeflower(PlantAnimRig_Rapeflower *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined4 *)(this + 0x3b8) = 0;
  *(undefined ***)this = &PTR_GetClass_069dc480;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Rapeflower_069dc6e8;
  return;
}


/* PlantAnimRig_Rapeflower::StaticNew() */

PlantAnimRig_Rapeflower * PlantAnimRig_Rapeflower::StaticNew(void)

{
  PlantAnimRig_Rapeflower *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Rapeflower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Rapeflower::StaticClassInit() */

void PlantAnimRig_Rapeflower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Rapeflower");
    (*pcVar2)(plVar1,asStack_10,FUN_04e363c8,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Rapeflower::StaticGetClass() */

long * PlantAnimRig_Rapeflower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Rapeflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Rapeflower::GetClass() const */

long * PlantAnimRig_Rapeflower::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Rapeflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

